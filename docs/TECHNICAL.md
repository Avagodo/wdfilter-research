# Technical notes

## Target and recovery method

The analyzed file is `WdFilter.sys` version `4.18.25080.5`. The reconstruction contains 954 functions in 60 C files.

The available symbols do not recover the private source text or complete private types. Local names come from calls and data flow. `WD_LAYOUT_*`, `field_0x*`, and neutral local names mark places where that interpretation remains incomplete.

## Filter registration

[RegistrationData.c](../WdFilter/src/RegistrationData.c) defines the operation arrays, context registrations, and `FilterRegistration`.

The filter record has size `0x70`, version `0x0203`, and flags `0x0000000c`. It registers unload, instance setup, query teardown, teardown completion, and transaction notification callbacks. Its operation pointer initially refers to `Callbacks`.

`Callbacks` registers create, cleanup, set-information, write, mount-volume, file-system control, section synchronization, directory control, query-EA, query-open, and post-read handling. `CallbacksRs3` includes both pre-read and post-read with flags `0x09`, and adds set-EA handling with flags `0x01`. Both arrays end with major-function code `0x80`.

The context records recover the following allocation sizes:

| Context type | Size | Cleanup callback |
|---|---:|---|
| Instance (`0x0002`) | `0x1d0` | `MpDeleteInstanceContext` |
| Stream (`0x0008`) | `0x280` | `MpDeleteStreamContext` |
| Stream handle (`0x0010`) | `0x78` | `MpDeleteHandleContext` |
| Transaction (`0x0020`) | `0xb0` | `MpTxfDeleteContext` |
| Section (`0x0040`) | `0x08` | `MpDeleteSectionContext` |

The context list ends with `0xffff`. On the recovered x64 layout, operation records occupy 32 bytes and context records occupy 56 bytes. [registration.h](../WdFilter/include/registration.h) checks these sizes with static assertions. Its generic callback casts represent the registration data; they do not validate every callback prototype.

## Callback and context views

[io.h](../WdFilter/include/io.h) models the fields read by the reconstructed completion path. Offsets are relative to the start of each object.

| Object | Field | Offset |
|---|---|---:|
| Callback data | `Thread` | `0x08` |
| Callback data | `Iopb` | `0x10` |
| Callback data | `IoStatus.Status` | `0x18` |
| Callback data | `IoStatus.Information` | `0x20` |
| I/O parameter block | Read `ByteOffset` | `0x28` |
| Related objects | `Instance` | `0x18` |
| Related objects | `FileObject` | `0x20` |
| Related objects | `Transaction` | `0x28` |
| Stream context view | `Volume` | `0x08` |
| Stream context view | `Flags` | `0x30` |
| Read-monitor globals | `MonitorFlags` | `0x364` |
| Read-monitor globals | `UseThreadProcessForSystemRequests` | `0xfec` |

The read parameter layout includes alignment before `Key` and `ByteOffset`. Omitting that padding puts the offset argument at the wrong address.

Public fields were checked against [FLT_CALLBACK_DATA](https://learn.microsoft.com/en-us/windows-hardware/drivers/ddi/fltkernel/ns-fltkernel-_flt_callback_data), [FLT_RELATED_OBJECTS](https://learn.microsoft.com/en-us/windows-hardware/drivers/ddi/fltkernel/ns-fltkernel-_flt_related_objects), [FLT_IO_PARAMETER_BLOCK](https://learn.microsoft.com/en-us/windows-hardware/drivers/ddi/fltkernel/ns-fltkernel-_flt_io_parameter_block), and [FLT_PARAMETERS](https://learn.microsoft.com/en-us/windows-hardware/drivers/ddi/fltkernel/ns-fltkernel-_flt_parameters).

Private views describe only the fields used by a routine. Their `sizeof` values are not substitutes for the context allocation sizes above. `OpaquePrefix` and `OpaqueTail` preserve placement without assigning meanings to the intervening bytes.

## Read completion

`MpPostRead` in [write.c](../WdFilter/src/write.c) returns `WD_POSTOP_FINISHED_PROCESSING` on every path. It skips processing for a draining callback, a failed I/O status, or zero transferred bytes. It also rejects the MDL-completion combination (`(MinorFunction & 6) == 6`), noncached or paging IRP flags (`IrpFlags & 3`), and a file object with `FO_NO_INTERMEDIATE_BUFFERING` (`Flags & 8`).

The routine then requires a requestor thread, a file object, IRQL no greater than 1, and execution outside a DPC. It obtains the stream context through `FltGetStreamContext`.

If the current thread's process differs from both excluded-process pointers, the routine atomically sets stream flag `0x800`. Volume flag `0x20` suppresses further read monitoring. Otherwise, `MpSeqDetectCtxUpdate` receives the volume context, requestor thread, file object, read offset, and transferred byte count. The byte count is narrowed to 32 bits, matching the recovered call.

A sequential-read notification requires monitor bit `0x1000` and a nonzero detector result. The requestor process normally comes from `FltGetRequestorProcess`. When the process-substitution setting is enabled and that process is System, the current thread's process can replace it.

After process-context lookup, `MpSendFileAsyncMessage` sends message type 6. Its arguments include the volume's device characteristics, `UINT32_MAX` for the extension argument, zero notification flags, and the related transaction. Lookup failure uses trace event 25; message failure uses event 26. Both traces require mask `0x02`.

The cleanup path releases the stream context with `FltReleaseContext` and the process context with `MpReleaseProcessContext`. Each pointer starts as null and is released only when present.

## Requestor IDs, tracing, and extensions

[mpfltutils.c](../WdFilter/src/mpfltutils.c) contains the reconstructed requestor-ID wrappers. Both forward callback data to `FltGetRequestorProcessIdEx`. With process substitution enabled, a System process ID can be replaced by `PsGetCurrentProcessId`. `MpGetRequestorProcessId` returns the low 32 bits; the `Ex` wrapper returns the full `uintptr_t` value.

The reviewed WPP wrappers call `pfnWppTraceMessage` with flags 43. `WPP_SF_D` passes one four-byte payload. `WPP_SF_qDD` passes payloads of eight, four, and four bytes. Each buffer address is followed by its size, and a null pointer terminates the argument sequence. The folded `qDL` and `qLL` names refer to the same `qDD` body. The function-pointer view uses a 32-bit event-number argument to keep the variadic interface compatible with C argument-promotion rules on the x64 target.

`MpGetFileExtensionId` in [MpUtil.c](../WdFilter/src/MpUtil.c) searches 53 recovered records. Each record occupies 24 bytes: a four-byte ID, a four-byte reserved value, and a 16-byte Unicode-string descriptor. String lengths are byte counts; buffers contain 16-bit code units. Comparison passes the case-insensitive flag to `RtlCompareUnicodeString`.

The lookup rejects null inputs with `STATUS_INVALID_PARAMETER`, clears the output ID before searching, returns zero for a match, and returns `STATUS_NOT_FOUND` when no entry matches.

## Read/write lock

[MpReadWriteLock.c](../WdFilter/src/MpReadWriteLock.c) uses a biased 32-bit state word:

- `0xc0000000` is the free state.
- `0x40000000` is the exclusive state.
- Shared acquisition increments the state atomically. A nonnegative previous value causes a wait on the shared semaphore.

The shared semaphore starts at `0x38`, the exclusive semaphore at `0x58`, the state word at `0x7c`, the owner thread at `0x80`, and the fast-mutex enable byte at `0x88`.

`WdAtomicAdd32` returns the previous value. Shared release decrements the state and wakes an exclusive waiter when that previous value exceeds 1. Exclusive acquisition uses compare-exchange from the free state to the exclusive state. If the optional fast mutex is enabled, a failed compare-exchange releases the mutex.

Exclusive release exchanges the state back to free, calculates the reader wake count from the previous state and `WaitingReaders`, clears the waiting-reader count, and releases the shared semaphore when the result is positive. It then clears the owner and releases the optional fast mutex. The arithmetic uses 32-bit wraparound to retain the recovered state encoding.

## Pool allocation

[Pool.c](../WdFilter/src/Pool.c) resolves `ExAllocatePool2` through `MmGetSystemRoutineAddress` and caches the result. The tagged wrapper uses this translation:

| Incoming pool type | `ExAllocatePool2` flags |
|---:|---:|
| `0`, `0x200` | `0x40` |
| `1` | `0x100` |
| `4`, `0x204` | `0x48` |
| `5` | `0x108` |

Other pool types return null when the newer allocator is available. When it is unavailable, the wrapper calls `ExAllocatePoolWithTag(pool_type | 0x400, size, tag)`. A successful allocation is zeroed when `ExPoolZeroingNativelySupported` is false.

The quota wrapper ignores its incoming pool-type argument. It uses flags `0x101` with `ExAllocatePool2` and legacy type `0x409` with `ExAllocatePoolWithQuotaTag`. Its fallback has the same conditional zeroing.

Lookup-state flags are plain globals. Concurrent first-call initialization has not been validated.

## Primitive operations and unresolved code

[primitives.h](../WdFilter/include/primitives.h) implements byte-field loads and stores in little-endian order. These helpers have no bounds checks; callers must supply valid storage and a width no greater than eight bytes. A larger width would shift a 64-bit value by 64 or more bits.

The multiplication helpers return the upper 64 bits of a 64-by-64-bit product. Unsigned multiplication uses 32-bit partial products and carries. Signed multiplication adjusts the unsigned high half for negative operands.

Clang and GCC use sequentially consistent `__atomic` builtins for the recovered atomic helpers. MSVC uses `_Interlocked` intrinsics. The remaining 318 `WdUnresolvedAtomicBegin/End` pairs have no implementation. Defining them as empty functions would turn the enclosed operations into ordinary accesses and lose the required atomic behavior.

[symbols.h](../WdFilter/include/symbols.h) keeps symbol references and unresolved fixed-address macros separate. Those macros still depend on the analyzed image's layout. An `extern` storage declaration does not recover the corresponding object's initialization, ownership, or lifetime.

Some routines also retain incorrect decompiler signatures. For example, `MpGetRequestorProcess` still calls `FltGetRequestorProcess` without a data argument, and `MpPreRead` still contains argumentless `FltReleaseContext` calls. These require instruction-level correction before those modules can compile against the declared interfaces.
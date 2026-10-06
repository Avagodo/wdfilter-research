#ifndef WDFILTER_IO_H
#define WDFILTER_IO_H

#include "types.h"
#include "native.h"

#define WD_POSTOP_FINISHED_PROCESSING 0
#define WD_POSTOP_DRAINING 1
#define WD_IRP_NOCACHE_OR_PAGING 3
#define WD_MDL_READ_COMPLETE 6
#define WD_FILE_NO_INTERMEDIATE_BUFFERING 8
#define WD_STREAM_EXTERNAL_READ 0x800
#define WD_VOLUME_SKIP_READ_MONITORING 0x20
#define WD_MONITOR_SEQUENTIAL_READ 0x1000
#define WD_TRACE_READ_FAILURE 2
#define WD_NOTIFY_SEQUENTIAL_READ 6
#define WD_NT_SUCCESS(status) ((int32_t)(status) >= 0)

typedef struct {
    uint32_t Data1;
    uint16_t Data2;
    uint16_t Data3;
    uint8_t Data4[8];
} WD_GUID;

typedef uint32_t (*WD_WPP_TRACE_MESSAGE)(uint64_t trace_handle, uint32_t flags,
                                        const WD_GUID *provider, uint32_t event_id, ...);

typedef struct {
    uint8_t OpaquePrefix[0x50];
    uint32_t Flags;
} WD_FILE_OBJECT_VIEW;

typedef struct {
    uint32_t Length;
    uint32_t Alignment;
    uint32_t Key;
    uint32_t Alignment2;
    int64_t ByteOffset;
    void *Buffer;
    void *MdlAddress;
} WD_READ_PARAMETERS;

typedef struct {
    uint32_t IrpFlags;
    uint8_t MajorFunction;
    uint8_t MinorFunction;
    uint8_t OperationFlags;
    uint8_t Reserved;
    WD_FILE_OBJECT_VIEW *TargetFileObject;
    void *TargetInstance;
    WD_READ_PARAMETERS Read;
} WD_IO_PARAMETER_BLOCK_VIEW;

typedef struct {
    int32_t Status;
    uint32_t Alignment;
    uint64_t Information;
} WD_IO_STATUS_BLOCK;

typedef struct {
    uint32_t Flags;
    uint32_t Alignment;
    void *Thread;
    WD_IO_PARAMETER_BLOCK_VIEW *Iopb;
    WD_IO_STATUS_BLOCK IoStatus;
} WD_CALLBACK_DATA_VIEW;

typedef struct {
    uint16_t Size;
    uint16_t TransactionContext;
    uint32_t Alignment;
    void *Filter;
    void *Volume;
    void *Instance;
    WD_FILE_OBJECT_VIEW *FileObject;
    void *Transaction;
} WD_RELATED_OBJECTS_VIEW;

typedef struct {
    uint8_t OpaquePrefix[0x54];
    uint32_t DeviceCharacteristics;
    uint8_t OpaqueTail[0x168];
    uint8_t Flags;
} WD_VOLUME_READ_VIEW;

typedef struct {
    uint64_t OpaquePrefix;
    WD_VOLUME_READ_VIEW *Volume;
    uint8_t OpaqueTail[0x20];
    volatile int32_t Flags;
} WD_SCAN_STREAM_CONTEXT_VIEW;

typedef struct {
    uint8_t OpaquePrefix[0xe8];
    void *ExcludedReadProcess;
    uint8_t OpaqueMiddle[0x10];
    void *SecondaryExcludedReadProcess;
    uint8_t OpaqueMiddle2[0x25c];
    uint32_t MonitorFlags;
    uint8_t OpaqueTail[0xc84];
    uint32_t UseThreadProcessForSystemRequests;
} WD_READ_MONITOR_GLOBALS;

typedef struct {
    uint8_t OpaquePrefix[0x18];
    uint64_t TraceHandle;
    uint8_t OpaqueTail[0xc];
    uint32_t Flags;
} WD_TRACE_CONTROL_VIEW;

typedef WD_LAYOUT_89 WD_PROCESS_CONTEXT_VIEW;

typedef struct {
    uint32_t Id;
    uint32_t Reserved;
    WD_UNICODE_STRING Name;
} WD_FILE_EXTENSION_ITEM;

_Static_assert(sizeof(WD_GUID) == 16, "GUID size");
_Static_assert(offsetof(WD_CALLBACK_DATA_VIEW, IoStatus) == 0x18, "Callback status offset");
_Static_assert(offsetof(WD_CALLBACK_DATA_VIEW, IoStatus.Information) == 0x20, "Callback information offset");
_Static_assert(offsetof(WD_IO_PARAMETER_BLOCK_VIEW, Read.ByteOffset) == 0x28, "Read offset location");
_Static_assert(offsetof(WD_RELATED_OBJECTS_VIEW, FileObject) == 0x20, "Related file offset");
_Static_assert(offsetof(WD_SCAN_STREAM_CONTEXT_VIEW, Flags) == 0x30, "Stream flags offset");
_Static_assert(offsetof(WD_READ_MONITOR_GLOBALS, MonitorFlags) == 0x364, "Monitor flags offset");
_Static_assert(offsetof(WD_READ_MONITOR_GLOBALS, UseThreadProcessForSystemRequests) == 0xfec, "Process selection offset");
_Static_assert(sizeof(WD_FILE_EXTENSION_ITEM) == 24, "Extension record size");

int32_t FltGetStreamContext(void *instance, void *file_object, void **context);
void FltReleaseContext(void *context);
void *FltGetRequestorProcess(const WD_CALLBACK_DATA_VIEW *data);
void *IoThreadToProcess(void *thread);
uint8_t KeIsExecutingDpc(void);
uint8_t KeGetCurrentIrql(void);
int32_t RtlCompareUnicodeString(const WD_UNICODE_STRING *left, const WD_UNICODE_STRING *right, uint8_t ignore_case);
extern void **__imp_PsInitialSystemProcess;
extern uintptr_t WPP_GLOBAL_Control;
extern const WD_GUID WdReadTraceProvider;
extern WD_WPP_TRACE_MESSAGE pfnWppTraceMessage;
void *FltGetRequestorProcessIdEx(const WD_CALLBACK_DATA_VIEW *data);
void *PsGetProcessId(void *process);
void *PsGetCurrentProcessId(void);
int64_t PsGetProcessCreateTimeQuadPart(void *process);

#endif

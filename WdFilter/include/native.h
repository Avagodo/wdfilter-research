#ifndef WDFILTER_NATIVE_H
#define WDFILTER_NATIVE_H

#include <stddef.h>
#include <stdint.h>
#include "primitives.h"

#define WD_RWL_FREE UINT32_C(0xc0000000)
#define WD_RWL_EXCLUSIVE INT32_C(0x40000000)
#define WD_FILESYSTEM_NTFS 2
#define WD_FILESYSTEM_REFS 0x1c

typedef struct {
    int32_t Count;
    uint32_t Padding;
    void *Owner;
    uint32_t Contention;
    uint32_t Padding2;
    uint64_t Event[3];
    uint32_t OldIrql;
    uint32_t Padding3;
} WD_FAST_MUTEX;

typedef struct {
    WD_FAST_MUTEX FastMutex;
    uint64_t SharedSemaphore[4];
    uint64_t ExclusiveSemaphore[4];
    uint32_t WaitingReaders;
    volatile int32_t State;
    void *OwnerThread;
    uint8_t FastMutexEnabled;
} WD_READ_WRITE_LOCK;

typedef struct {
    uint8_t Reserved0[0x78];
    uint32_t FileSystemType;
    uint8_t Reserved1[0x14];
    uint32_t Generation;
} WD_VOLUME_STATE;

typedef struct {
    uint64_t Reserved0;
    WD_VOLUME_STATE *Volume;
    uint8_t Reserved1[0x10];
    uint32_t State;
    uint32_t VolumeGeneration;
} WD_STREAM_STATE;

typedef struct {
    uint8_t Reserved0[0x18];
    uint32_t Size;
    uint32_t Reserved1;
    uint32_t State;
    uint32_t Reserved2;
} WD_CACHE_ENTRY;

typedef struct {
    uint16_t Length;
    uint16_t MaximumLength;
    uint16_t *Buffer;
} WD_UNICODE_STRING;

typedef void *(*WD_POOL_ALLOCATOR)(uint64_t flags, size_t size, uint32_t tag);

_Static_assert(offsetof(WD_READ_WRITE_LOCK, State) == 0x7c, "Lock state offset");
_Static_assert(offsetof(WD_READ_WRITE_LOCK, OwnerThread) == 0x80, "Lock owner offset");
_Static_assert(offsetof(WD_READ_WRITE_LOCK, FastMutexEnabled) == 0x88, "Lock mode offset");
_Static_assert(offsetof(WD_VOLUME_STATE, Generation) == 0x90, "Volume generation offset");
_Static_assert(offsetof(WD_STREAM_STATE, State) == 0x20, "Stream state offset");
_Static_assert(sizeof(WD_CACHE_ENTRY) == 0x28, "Cache entry size");

int32_t KeReleaseSemaphore(void *semaphore, int32_t increment, int32_t adjustment, uint8_t wait);
int32_t KeWaitForSingleObject(void *object, int32_t reason, int8_t mode, uint8_t alertable, const int64_t *timeout);
void KeInitializeEvent(void *event, int32_t type, uint8_t state);
void KeInitializeSemaphore(void *semaphore, int32_t count, int32_t limit);
uint8_t ExTryToAcquireFastMutex(void *mutex);
void ExReleaseFastMutex(void *mutex);
void *KeGetCurrentThread(void);
void *MmGetSystemRoutineAddress(const WD_UNICODE_STRING *name);
void *ExAllocatePoolWithTag(uint32_t pool_type, size_t size, uint32_t tag);
void *ExAllocatePoolWithQuotaTag(uint32_t pool_type, size_t size, uint32_t tag);
void ExFreePoolWithTag(void *allocation, uint32_t tag);
extern uint8_t ExPoolZeroingNativelySupported;
extern uint32_t WdPoolLookupState;
extern uint32_t WdQuotaPoolLookupState;
extern WD_POOL_ALLOCATOR WdPoolAllocator;
extern WD_POOL_ALLOCATOR WdQuotaPoolAllocator;
extern WD_UNICODE_STRING WdPoolRoutineName;

#endif

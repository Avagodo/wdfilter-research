#include "wdfilter.h"

void MpRWLReleaseShared(WD_READ_WRITE_LOCK *lock)
{
    if (WdAtomicAdd32(&lock->State, -1) > 1)
    {
        KeReleaseSemaphore(&lock->ExclusiveSemaphore, 0, 1, 0);
    }
}

void MpRWLAcquireShared(WD_READ_WRITE_LOCK *lock)
{
    while (WdAtomicAdd32(&lock->State, 1) >= 0)
    {
        KeWaitForSingleObject(&lock->SharedSemaphore, 0, 0, 0, NULL);
    }
}

void MpRWLReleaseExclusive(WD_READ_WRITE_LOCK *lock)
{
    uint32_t previous = (uint32_t)WdAtomicExchange32(&lock->State, (int32_t)WD_RWL_FREE);
    int32_t readers = (int32_t)(lock->WaitingReaders + previous + WD_RWL_FREE);
    lock->WaitingReaders = 0;
    if (readers > 0)
    {
        KeReleaseSemaphore(&lock->SharedSemaphore, 0, readers, 0);
    }
    lock->OwnerThread = NULL;
    if (lock->FastMutexEnabled)
    {
        ExReleaseFastMutex(&lock->FastMutex);
    }
}

void MpRWLInitialize(WD_READ_WRITE_LOCK *lock)
{
    WdAtomicExchange32(&lock->State, (int32_t)WD_RWL_FREE);
    lock->OwnerThread = NULL;
    lock->WaitingReaders = 0;
    lock->FastMutexEnabled = 0;
    lock->FastMutex.Count = 1;
    lock->FastMutex.Owner = NULL;
    lock->FastMutex.Contention = 0;
    KeInitializeEvent(&lock->FastMutex.Event, 1, 0);
    KeInitializeSemaphore(&lock->SharedSemaphore, 0, INT32_MAX);
    KeInitializeSemaphore(&lock->ExclusiveSemaphore, 0, INT32_MAX);
}

uint8_t MpRWLTryAcquireExclusive(WD_READ_WRITE_LOCK *lock)
{
    if (lock->FastMutexEnabled && !ExTryToAcquireFastMutex(&lock->FastMutex))
    {
        return 0;
    }
    if ((uint32_t)WdAtomicCompareExchange32(&lock->State, WD_RWL_EXCLUSIVE, (int32_t)WD_RWL_FREE) == WD_RWL_FREE)
    {
        lock->OwnerThread = KeGetCurrentThread();
        return 1;
    }
    if (lock->FastMutexEnabled)
    {
        ExReleaseFastMutex(&lock->FastMutex);
    }
    return 0;
}

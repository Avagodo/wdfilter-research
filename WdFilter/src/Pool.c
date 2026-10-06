#include "wdfilter.h"

uint32_t WdPoolLookupState;
uint32_t WdQuotaPoolLookupState;
WD_POOL_ALLOCATOR WdPoolAllocator;
WD_POOL_ALLOCATOR WdQuotaPoolAllocator;
static uint16_t WdPoolNameBuffer[] = {'E', 'x', 'A', 'l', 'l', 'o', 'c', 'a', 't', 'e', 'P', 'o', 'o', 'l', '2', 0};
WD_UNICODE_STRING WdPoolRoutineName = {30, 32, WdPoolNameBuffer};

void *MpAllocatePoolWithTag(uint32_t pool_type, size_t size, uint32_t tag)
{
    if (!(WdPoolLookupState & 1))
    {
        WdPoolLookupState |= 1;
        WdPoolAllocator = (WD_POOL_ALLOCATOR)MmGetSystemRoutineAddress(&WdPoolRoutineName);
    }
    if (!WdPoolAllocator)
    {
        void *allocation = ExAllocatePoolWithTag(pool_type | 0x400, size, tag);
        if (allocation && !ExPoolZeroingNativelySupported)
        {
            memset(allocation, 0, size);
        }
        return allocation;
    }
    uint64_t flags;
    switch (pool_type)
    {
        case 0:

        case 0x200:
            flags = 0x40;
            break;

        case 1:
            flags = 0x100;
            break;

        case 4:

        case 0x204:
            flags = 0x48;
            break;

        case 5:
            flags = 0x108;
            break;

        default:
            return NULL;
    }

    return WdPoolAllocator(flags, size, tag);
}

void *MpAllocatePoolWithQuotaTag(uint64_t pool_type, size_t size, uint32_t tag)
{
    (void)pool_type;
    if (!(WdQuotaPoolLookupState & 1))
    {
        WdQuotaPoolLookupState |= 1;
        WdQuotaPoolAllocator = (WD_POOL_ALLOCATOR)MmGetSystemRoutineAddress(&WdPoolRoutineName);
    }
    if (WdQuotaPoolAllocator)
    {
        return WdQuotaPoolAllocator(0x101, size, tag);
    }
    void *allocation = ExAllocatePoolWithQuotaTag(0x409, size, tag);
    if (allocation && !ExPoolZeroingNativelySupported)
    {
        memset(allocation, 0, size);
    }
    return allocation;
}

#include "wdfilter.h"

void MpDeleteThreadContext(uint64_t context)
{
    int64_t thread_table;
    uint8_t byte_value;
    uint8_t byte_value_2;
    uint64_t *data_pointer;
    uint64_t *data_pointer_2;
    uint64_t value;
    uint8_t byte_value_3;
    uint8_t byte_value_4;
    uint8_t byte_value_5;
    uint8_t byte_value_6;
    uint8_t byte_value_7;
    FltAcquirePushLockExclusive(MpThreadTable + 8);
    thread_table = MpThreadTable;
    if (*(int32_t *)(MpThreadTable + 0xc0))
    {
        value = -1LL << ((uint8_t)(*(uint32_t *)(MpThreadTable + 0xc4)) & 0x1f);
        context &= value;
        byte_value_3 = (uint8_t)(context >> 8);
        byte_value_4 = (uint8_t)(context >> 0x10);
        byte_value_5 = (uint8_t)(context >> 0x18);
        byte_value_6 = (uint8_t)(context >> 0x20);
        byte_value_7 = (uint8_t)(context >> 0x28);
        byte_value = (uint8_t)(context >> 0x30);
        byte_value_2 = (uint8_t)(context >> 0x38);
        data_pointer = (uint64_t *)(*(int64_t *)(MpThreadTable + 200) + (uint64_t)(((((((((uint32_t)context & 0xff) * 0x25 + (uint32_t)byte_value_3) * 0x25 + (uint32_t)byte_value_4) * 0x25 + byte_value_5 + 0x164b2f3f) * 0x25 + (uint32_t)byte_value_6) * 0x25 + (uint32_t)byte_value_7) * 0x25 + (uint32_t)byte_value) * 0x25 + (uint32_t)byte_value_2 & (*(uint32_t *)(MpThreadTable + 0xc4) >> 5) - 1) * 8);
        while (data_pointer_2 = (uint64_t *)(*data_pointer), !((uint64_t)data_pointer_2 & 1))
        {
            if ((data_pointer_2[1] & value) == context)
            {
                *data_pointer = *data_pointer_2;
                *(int32_t *)(thread_table + 0xc0) = *(int32_t *)(thread_table + 0xc0) + -1;
                *data_pointer_2 = *data_pointer_2 | 0x8000000000000002;
                goto block_1;
            }
            data_pointer = data_pointer_2;
        }
    }
    data_pointer_2 = NULL;
    block_1:
    if (*(uint64_t **)(MpThreadTable + 0xe0) == data_pointer_2)
    {
        *(int64_t *)(MpThreadTable + 0xe0) = MpThreadTable + 0xd0;
    }

    FltReleasePushLock(MpThreadTable + 8);
    if (!data_pointer_2)
    {
        return;
    }
    MpReleaseThreadContext(&data_pointer_2[-1]);
    return;
}

void MpReleaseThreadContext(void *context)
{
    int32_t *atomic_value;
    int32_t value;
    atomic_value = &((int32_t *)context)[1];
    value = WdAtomicAdd32((volatile int32_t *)atomic_value, -1);
    if (value != 1)
    {
        return;
    }
    if (((void **)context)[6])
    {
        MpReleaseProcessContext(((void **)context)[6]);
    }
    FltDeletePushLock((int64_t)context + 0x18);
    ExFreeToPagedLookasideList((void *)(MpThreadTable + 0x40), context);
    return;
}

void MpShutdownThreadTable(void)
{
    int64_t thread_table;
    uint64_t *data_pointer;
    uint64_t *data_pointer_2;
    uint64_t *data_pointer_3;
    uint64_t *data_pointer_4;
    thread_table = MpThreadTable;
    if (!MpThreadTable)
    {
        return;
    }
    data_pointer = *(uint64_t **)(MpThreadTable + 200);
    data_pointer_4 = data_pointer;
    while (true)
    {
        if (!data_pointer || (data_pointer = (uint64_t *)(*data_pointer), data_pointer_3 = data_pointer, (uint64_t)data_pointer & 1))
        {
            do
            {
                data_pointer_4 = &data_pointer_4[1];
                if ((uint64_t *)(*(int64_t *)(thread_table + 200) + (uint64_t)(*(uint32_t *)(thread_table + 0xc4) >> 5) * 8) <= data_pointer_4)
                {
                    goto block_1;
                }
                data_pointer = (uint64_t *)(*data_pointer_4);
            }
            while ((uint64_t)data_pointer & 1);
            data_pointer_3 = data_pointer;
        }
        if (!data_pointer)
        {
            block_1:
            if (*(int64_t *)(MpThreadTable + 200))
            {
                ExFreePoolWithTag(*(int64_t *)(MpThreadTable + 200), 0x4274504d);
            }

            ExDeletePagedLookasideList(MpThreadTable + 0x40);
            FltDeletePushLock(MpThreadTable + 8);
            ExFreePoolWithTag(MpThreadTable, 0x5474504d);
            return;
        }
        data_pointer = data_pointer_4;
        while (data_pointer_2 = (uint64_t *)(*data_pointer), !((uint64_t)data_pointer_2 & 1))
        {
            if (data_pointer_2 == data_pointer_3)
            {
                *data_pointer = *data_pointer_3;
                *(int32_t *)(thread_table + 0xc0) = *(int32_t *)(thread_table + 0xc0) + -1;
                *data_pointer_3 = *data_pointer_3 | 0x8000000000000002;
                data_pointer_2 = data_pointer_3;
                goto block_2;
            }
            data_pointer = data_pointer_2;
        }

        data_pointer_2 = NULL;
        data_pointer = data_pointer_3;
        block_2:
        MpReleaseThreadContext(&data_pointer_2[-1]);
    }
}

uint64_t MpInitializeThreadTable(void)
{
    uint64_t *data_pointer;
    uint32_t value;
    uint64_t *data_pointer_2;
    uint32_t *data_pointer_3;
    uint8_t byte_value;
    uint8_t byte_value_2;
    uint8_t byte_value_3;
    uint8_t byte_value_4;
    uint8_t byte_value_5;
    uint8_t byte_value_6;
    int64_t value_2;
    uint8_t byte_value_7;
    uint64_t value_3;
    uint32_t value_4;
    uint8_t byte_value_8;
    uint32_t *allocation;
    uint64_t *allocation_2;
    uint32_t value_5;
    uint64_t value_6;
    uint64_t index;
    uint64_t value_7;
    value_4 = (uint32_t)((uint64_t)value_3 >> 0x20);
    allocation = (uint32_t *)MpAllocatePoolWithTag(ExDefaultNonPagedPoolType, (char *)0x100, 0x5474504d);
    value_7 = 0;
    MpThreadTable = allocation;
    if (!allocation)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 10, WD_SYMBOL_ADDRESS(WPP_923b5c63c07739d52087693bb8610b9e_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INSUFFICIENT_RESOURCES & 0xffffffffULL);
        }
        return WD_STATUS_INSUFFICIENT_RESOURCES;
    }
    *allocation = 0x100da1e;
    FltInitializePushLock(&allocation[2]);
    ExInitializePagedLookasideList(&MpThreadTable[0x10], 0, 0, 0, 0x38, 0x5474504d, 0);
    allocation = MpThreadTable;
    *(uint32_t **)(&MpThreadTable[0x38]) = &MpThreadTable[0x34];
    *(uint64_t *)(&allocation[0x30]) = 0;
    *(uint64_t *)(&allocation[0x32]) = 0;
    allocation_2 = (uint64_t *)MpAllocatePoolWithTag(1, (char *)0x400, 0x4274504d);
    allocation = MpThreadTable;
    if (allocation_2)
    {
        data_pointer_3 = &MpThreadTable[0x30];
        value_5 = ~(-(uint32_t)(&allocation_2[0x80] < allocation_2)) & 0x80;
        value_6 = value_5;
        if (value_5)
        {
            data_pointer_2 = allocation_2;
            while (value_6)
            {
                data_pointer = &data_pointer_2[1];
                *data_pointer_2 = (uint64_t)data_pointer_3 | 1;
                value_6 -= 1;
                data_pointer_2 = data_pointer;
            }
        }
        value_5 = allocation[0x31];
        byte_value_8 = (uint8_t)value_5;
        value_6 = value_7;
        if (value_5 & 0xffffffe0)
        {
            do
            {
                value_2 = *(int64_t *)(&allocation[0x32]);
                while (data_pointer_2 = *(uint64_t **)(value_2 + value_6 * 8), !((uint64_t)data_pointer_2 & 1))
                {
                    *(uint64_t *)(value_2 + value_6 * 8) = *data_pointer_2;
                    index = data_pointer_2[1] & -1LL << (byte_value_8 & 0x1f);
                    byte_value_5 = (uint8_t)(index >> 0x28);
                    byte_value_6 = (uint8_t)(index >> 0x30);
                    byte_value_4 = (uint8_t)(index >> 0x20);
                    byte_value_3 = (uint8_t)(index >> 0x18);
                    byte_value_2 = (uint8_t)(index >> 0x10);
                    byte_value = (uint8_t)(index >> 8);
                    byte_value_7 = (uint8_t)(index >> 0x38);
                    index = (uint32_t)byte_value_7 - 0x31 + (((uint32_t)index & 0xff) + (uint32_t)byte_value_5 * -3) * 0xd + (uint32_t)byte_value_6 * 0x25 + (uint32_t)byte_value_4 * -0x23 + (uint32_t)byte_value_3 * -0xf + (uint32_t)byte_value_2 * -0x2b + (uint32_t)byte_value * -0x37 & 0x7f;
                    *data_pointer_2 = allocation_2[index];
                    allocation_2[index] = (uint64_t)data_pointer_2;
                }

                value_5 = allocation[0x31];
                value = (int32_t)value_6 + 1;
                value_6 = value;
            }
            while (value < value_5 >> 5);
        }
        *(uint64_t **)(&allocation[0x32]) = allocation_2;
        allocation[0x31] = value_5 & 0x1f | 0x1000;
    }
    else
    {
        value_7 = WD_STATUS_INSUFFICIENT_RESOURCES;
    }
    return value_7;
}

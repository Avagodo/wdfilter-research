#include "wdfilter.h"

void MpSeqDetectCtxGCDpc(uint64_t input, void *input_2)
{
    uint64_t *data_pointer;
    KeClearEvent((int64_t)input_2 + 0xb0);
    data_pointer = ((uint64_t **)input_2)[0x15];
    data_pointer[2] = MpSeqDetectGCWorker;
    data_pointer[3] = input_2;
    *data_pointer = 0;
    ExQueueWorkItem(((uint64_t *)input_2)[0x15], 1);
    return;
}

void MpSeqDetectCtxShutdown(void)
{
    uint64_t *data_pointer;
    uint64_t *data_pointer_2;
    uint64_t *data_pointer_3;
    uint64_t *allocation;
    uint64_t *data_pointer_4;
    WdModule113Storage7 = 1;
    KeCancelTimer(WD_MODULE113_UNRECOVERED_ADDRESS);
    KeFlushQueuedDpcs();
    KeWaitForSingleObject(WD_MODULE113_UNRECOVERED_ADDRESS2, 0, 0, 0, 0);
    if (WdModule113Storage5)
    {
        ExFreePoolWithTag(WdModule113Storage5, 0x69774347);
    }
    data_pointer_2 = WdModule113Storage2;
    data_pointer_4 = WdModule113Storage2;
    while (true)
    {
        if (!data_pointer_2 || (data_pointer_2 = (uint64_t *)(*data_pointer_2), allocation = data_pointer_2, (uint64_t)data_pointer_2 & 1))
        {
            do
            {
                data_pointer_4 = &data_pointer_4[1];
                if (&WdModule113Storage2[WdModule113Storage >> 5] <= data_pointer_4)
                {
                    goto block_1;
                }
                data_pointer_2 = (uint64_t *)(*data_pointer_4);
            }
            while ((uint64_t)data_pointer_2 & 1);
            allocation = data_pointer_2;
        }
        if (!data_pointer_2)
        {
            block_1:
            if (WdModule113Storage2)
            {
                ExFreePoolWithTag(WdModule113Storage2, 0x6273504d);
            }

            FltDeletePushLock(WD_MODULE113_UNRECOVERED_ADDRESS3);
            return;
        }
        data_pointer_3 = data_pointer_4;
        while (data_pointer = (uint64_t *)(*data_pointer_3), data_pointer_2 = allocation, !((uint64_t)data_pointer & 1))
        {
            if (data_pointer == allocation)
            {
                *data_pointer_3 = *allocation;
                MpSeqDetectCtx -= 1;
                *allocation = *allocation | 0x8000000000000002;
                data_pointer_2 = data_pointer_3;
                break;
            }
            data_pointer_3 = data_pointer;
        }

        ExFreePoolWithTag(allocation, 0x7473504d);
    }
}

bool MpSeqDetectCtxCheck(uint64_t input, uint64_t input_2)
{
    uint64_t value;
    bool enabled;
    FltAcquirePushLockShared(WD_MODULE113_UNRECOVERED_ADDRESS3);
    value = MpSeqDetectCtxLookupEntry(input_2);
    enabled = 0;
    if (value)
    {
        enabled = 3 <= *(uint16_t *)(value + 0x2a);
    }
    FltReleasePushLock(WD_MODULE113_UNRECOVERED_ADDRESS3);
    return enabled;
}

uint64_t MpSeqDetectCtxLookupEntry(uint64_t input, uint64_t input_2)
{
    uint32_t value;
    uint64_t *data_pointer;
    uint64_t value_2;
    if (*(uint64_t *)(WdModule113Storage4 + 8) == input_2)
    {
        return WdModule113Storage4;
    }
    value_2 = -1LL << ((uint8_t)WdModule113Storage & 0x1f);
    input_2 = value_2 & input_2;
    if (!(WdModule113Storage >> 5))
    {
        return 0;
    }
    value = (uint32_t)(input_2 >> 0x20);
    data_pointer = (uint64_t *)(WdModule113Storage2 + (uint64_t)((WdModule113Storage >> 5) - 1 & (((((((((uint32_t)input_2 & 0xff) + 0xb15dcb) * 0x25 + ((uint32_t)(input_2 >> 8) & 0xff)) * 0x25 + ((uint32_t)(input_2 >> 0x10) & 0xff)) * 0x25 + ((uint32_t)(input_2 >> 0x18) & 0xff)) * 0x25 + (value & 0xff)) * 0x25 + (value >> 8 & 0xff)) * 0x25 + ((uint16_t)(input_2 >> 0x30) & 0xff)) * 0x25 + (uint32_t)((uint8_t)(input_2 >> 0x38))) * 8);
    do
    {
        data_pointer = (uint64_t *)(*data_pointer);
        if ((uint64_t)data_pointer & 1)
        {
            return 0;
        }
    }
    while (input_2 != (data_pointer[1] & value_2));
    if (!data_pointer)
    {
        return 0;
    }
    WdModule113Storage4 = (uint64_t)data_pointer;
    return (uint64_t)data_pointer;
}

void MpSeqDetectCtxUpdate(uint64_t input, uint64_t input_2, int64_t input_3, int64_t *input_4, uint32_t input_5, char *input_6)
{
    uint64_t *data_pointer;
    uint64_t value;
    int64_t value_2;
    uint8_t byte_value;
    uint8_t byte_value_2;
    uint32_t value_3;
    uint32_t value_4;
    char *bytes;
    WD_LAYOUT_16 *allocation;
    int64_t value_5;
    uint64_t *data_pointer_2;
    uint64_t value_6;
    uint64_t value_7;
    bytes = input_6;
    value_4 = input_5;
    if (input_6)
    {
        *input_6 = '\0';
    }
    value = input_5;
    if (input_5)
    {
        value_2 = *input_4;
        value_5 = 0;
    }
    else
    {
        value_2 = 0;
        value_5 = *input_4;
    }
    FltAcquirePushLockExclusive(WD_MODULE113_UNRECOVERED_ADDRESS3);
    if (*(uint64_t *)(WdModule113Storage4 + 8) != input_2)
    {
        value_7 = -1LL << ((uint8_t)WdModule113Storage & 0x1f);
        value_6 = input_2 & value_7;
        if (WdModule113Storage >> 5)
        {
            byte_value = (uint8_t)(value_6 >> 0x10);
            byte_value_2 = (uint8_t)(value_6 >> 0x18);
            value_3 = (uint32_t)(value_6 >> 0x20);
            data_pointer_2 = (uint64_t *)(WdModule113Storage2 + (uint64_t)((WdModule113Storage >> 5) - 1 & (((((((((uint32_t)value_6 & 0xff) + 0xb15dcb) * 0x25 + ((uint32_t)(value_6 >> 8) & 0xff)) * 0x25 + (uint32_t)byte_value) * 0x25 + (uint32_t)byte_value_2) * 0x25 + (value_3 & 0xff)) * 0x25 + (value_3 >> 8 & 0xff)) * 0x25 + ((uint16_t)(value_6 >> 0x30) & 0xff)) * 0x25 + (uint32_t)((uint8_t)(value_6 >> 0x38))) * 8);
            do
            {
                data_pointer_2 = (uint64_t *)(*data_pointer_2);
                if ((uint64_t)data_pointer_2 & 1)
                {
                    goto block_2;
                }
            }
            while (value_6 != (data_pointer_2[1] & value_7));
            if (data_pointer_2)
            {
                WdModule113Storage4 = (uint64_t)data_pointer_2;
                goto block_1;
            }
        }
    }
    else
    {
        data_pointer_2 = (uint64_t *)WdModule113Storage4;
        if (WdModule113Storage4)
        {
            block_1:
            if (value_4)
            {
                if (((int64_t *)data_pointer_2)[4] != input_3 || ((int64_t *)data_pointer_2)[2] != value_2)
                {
                    ((uint16_t *)data_pointer_2)[0x15] = 0;
                    ((uint64_t *)data_pointer_2)[4] = 0;
                    FltReleasePushLock(WD_MODULE113_UNRECOVERED_ADDRESS3);
                    return;
                }
                value_5 = ((int64_t *)data_pointer_2)[2] + value;
                ((int64_t *)data_pointer_2)[2] = value_5;
                if (((int64_t *)data_pointer_2)[3] <= value_5)
                {
                    if (((int16_t *)data_pointer_2)[0x15] != -1)
                    {
                        ((int16_t *)data_pointer_2)[0x15] = ((int16_t *)data_pointer_2)[0x15] + 1;
                    }
                    if (bytes)
                    {
                        *bytes = '\x01';
                    }
                    ((uint64_t *)data_pointer_2)[4] = 0;
                }
            }
            else
            {
                if (((int64_t *)data_pointer_2)[4])
                {
                    ((uint16_t *)data_pointer_2)[0x15] = 0;
                }
                ((int64_t *)data_pointer_2)[4] = input_3;
                ((int64_t *)data_pointer_2)[3] = value_5;
                ((uint64_t *)data_pointer_2)[2] = 0;
            }

            value_5 = WdSharedTickCount;
            value_5 = (uint64_t)((uint32_t)KeQueryTimeIncrement()) * value_5;
            value_5 = WdSignedMultiplyHigh(-0x29406b2a1a85bd43, value_5) + value_5;
            ((int16_t *)data_pointer_2)[0x14] = (int16_t)(value_5 >> 0x17) - (int16_t)(value_5 >> 0x3f);
            FltReleasePushLock(WD_MODULE113_UNRECOVERED_ADDRESS3);
            return;
        }
    }
    block_2:
    if (!value_4 && ((WdModule113Storage2 || 0 <= (int32_t)MpSeqDetectCtxAllocResources()) && (allocation = (WD_LAYOUT_16 *)MpAllocatePoolWithTag(1, (char *)0x30, 0x7473504d), allocation)))
    {
        allocation->field_0x18 = value_5;
        allocation->field_0x8 = input_2;
        allocation->field_0x20 = input_3;
        value_5 = WdSharedTickCount;
        value_5 = (uint64_t)((uint32_t)KeQueryTimeIncrement()) * value_5;
        value_5 = WdSignedMultiplyHigh(-0x29406b2a1a85bd43, value_5) + value_5;
        allocation->field_0x28 = (int16_t)(value_5 >> 0x17) - (int16_t)(value_5 >> 0x3f);
        value = -1LL << ((uint8_t)WdModule113Storage & 0x1f) & allocation->field_0x8;
        value_4 = (uint32_t)(value >> 0x20);
        data_pointer = (uint64_t *)(WdModule113Storage2 + (uint64_t)((WdModule113Storage >> 5) - 1 & ((((((((uint32_t)(value >> 8) & 0xff) + (((uint32_t)value & 0xff) + 0xb15dcb) * 0x25) * 0x25 + ((uint32_t)(value >> 0x10) & 0xff)) * 0x25 + ((uint32_t)(value >> 0x18) & 0xff)) * 0x25 + (value_4 & 0xff)) * 0x25 + (value_4 >> 8 & 0xff)) * 0x25 + ((uint16_t)(value >> 0x30) & 0xff)) * 0x25 + (uint32_t)((uint8_t)(value >> 0x38))) * 8);
        allocation->field_0x0 = *data_pointer;
        *data_pointer = allocation;
        MpSeqDetectCtx += 1;
        if (MpSeqDetectCtx == 1 && !WdModule113Storage7)
        {
            KeSetTimer(WD_MODULE113_UNRECOVERED_ADDRESS, 0xffffffffee1e5d00, WD_MODULE113_UNRECOVERED_ADDRESS4);
        }
    }

    FltReleasePushLock(WD_MODULE113_UNRECOVERED_ADDRESS3);
    return;
}

void MpSeqDetectGCWorker(WD_LAYOUT_48 *input)
{
    uint64_t *data_pointer;
    uint64_t *data_pointer_2;
    uint64_t *data_pointer_3;
    uint64_t *data_pointer_4;
    uint64_t *allocation;
    int64_t value;
    uint64_t *data_pointer_5;
    value = WdSharedTickCount;
    value = (uint64_t)((uint32_t)KeQueryTimeIncrement()) * value;
    value += WdSignedMultiplyHigh(-0x29406b2a1a85bd43, value);
    FltAcquirePushLockExclusive(&input->field_0x28[0xa8]);
    data_pointer_5 = input->field_0x8;
    data_pointer_2 = data_pointer_5;
    allocation = NULL;
    while (true)
    {
        do
        {
            if (!data_pointer_2 || (data_pointer_2 = (uint64_t *)(*data_pointer_2), data_pointer_4 = data_pointer_2, (uint64_t)data_pointer_2 & 1))
            {
                do
                {
                    data_pointer_5 = &data_pointer_5[1];
                    if (&input->field_0x8[input->field_0x4 >> 5] <= data_pointer_5)
                    {
                        goto block_1;
                    }
                    data_pointer_2 = (uint64_t *)(*data_pointer_5);
                }
                while ((uint64_t)data_pointer_2 & 1);
                data_pointer_4 = data_pointer_2;
            }
            if (!data_pointer_2)
            {
                block_1:
                if (input->field_0x0 && !input->field_0xd8)
                {
                    KeSetTimer(input->field_0x28, 0xffffffffee1e5d00, &input->field_0x28[0x40]);
                }

                FltReleasePushLock(&input->field_0x28[0xa8]);
                while (allocation)
                {
                    data_pointer_5 = (uint64_t *)(*allocation);
                    ExFreePoolWithTag(allocation, 0x7473504d);
                    allocation = data_pointer_5;
                }

                KeSetEvent(&input->field_0x28[0x88], 0, 0);
                return;
            }
            data_pointer_2 = data_pointer_4;
        }
        while ((int32_t)(((int32_t)(value >> 0x17) - (int32_t)(value >> 0x3f) & 0xffffU) - (uint32_t)(*(uint16_t *)(&data_pointer_4[5]))) <= 0x1d);
        data_pointer_3 = data_pointer_5;
        while (data_pointer = (uint64_t *)(*data_pointer_3), !((uint64_t)data_pointer & 1))
        {
            if (data_pointer == data_pointer_4)
            {
                *data_pointer_3 = *data_pointer_4;
                input->field_0x0 = input->field_0x0 + -1;
                *data_pointer_4 = *data_pointer_4 | 0x8000000000000002;
                data_pointer_2 = data_pointer_3;
                break;
            }
            data_pointer_3 = data_pointer;
        }

        if (input->field_0x20 == data_pointer_4)
        {
            input->field_0x20 = (uint64_t *)input->field_0x10;
        }
        *data_pointer_4 = (uint64_t)allocation;
        allocation = data_pointer_4;
    }
}

uint32_t MpSeqDetectCtxAllocResources(void)
{
    uint64_t *data_pointer;
    uint8_t byte_value;
    uint8_t byte_value_2;
    uint8_t byte_value_3;
    uint8_t byte_value_4;
    uint8_t byte_value_5;
    uint8_t byte_value_6;
    uint8_t byte_value_7;
    int64_t value;
    uint64_t *allocation;
    int64_t allocation_2;
    uint32_t value_2;
    uint64_t index;
    uint64_t *data_pointer_2;
    uint8_t byte_value_8;
    allocation = (uint64_t *)MpAllocatePoolWithTag(1, (char *)0x400, 0x6273504d);
    if (!allocation)
    {
        return WD_STATUS_INSUFFICIENT_RESOURCES;
    }
    allocation_2 = (int64_t)MpAllocatePoolWithTag(ExDefaultNonPagedPoolType, (char *)0x20, 0x69774347);
    if (!allocation_2)
    {
        ExFreePoolWithTag(allocation, 0x6273504d);
        return WD_STATUS_INSUFFICIENT_RESOURCES;
    }
    value_2 = ~(-(uint32_t)(&allocation[0x80] < allocation)) & 0x80;
    index = value_2;
    if (value_2)
    {
        data_pointer_2 = allocation;
        while (index)
        {
            data_pointer = &data_pointer_2[1];
            *data_pointer_2 = WD_MODULE113_UNRECOVERED_ADDRESS5;
            index -= 1;
            data_pointer_2 = data_pointer;
        }
    }
    value_2 = 0;
    byte_value_7 = (uint8_t)WdModule113Storage;
    if (WdModule113Storage & 0xffffffe0)
    {
        do
        {
            value = (int64_t)WdModule113Storage2;
            while (data_pointer_2 = *(uint64_t **)(value + value_2 * 8ULL), !((uint64_t)data_pointer_2 & 1))
            {
                *(uint64_t *)(value + value_2 * 8ULL) = *data_pointer_2;
                index = data_pointer_2[1] & -1LL << (byte_value_7 & 0x1f);
                byte_value_4 = (uint8_t)(index >> 0x28);
                byte_value_5 = (uint8_t)(index >> 0x30);
                byte_value_3 = (uint8_t)(index >> 0x20);
                byte_value_2 = (uint8_t)(index >> 0x18);
                byte_value = (uint8_t)(index >> 0x10);
                byte_value_8 = (uint8_t)(index >> 8);
                byte_value_6 = (uint8_t)(index >> 0x38);
                index = (uint32_t)byte_value_6 - 0x31 + (((uint32_t)index & 0xff) + (uint32_t)byte_value_4 * -3) * 0xd + (uint32_t)byte_value_5 * 0x25 + (uint32_t)byte_value_3 * -0x23 + (uint32_t)byte_value_2 * -0xf + (uint32_t)byte_value * -0x2b + (uint32_t)byte_value_8 * -0x37 & 0x7f;
                *data_pointer_2 = allocation[index];
                allocation[index] = data_pointer_2;
            }

            value_2 += 1;
        }
        while (value_2 < WdModule113Storage >> 5);
    }
    WdModule113Storage2 = allocation;
    WdModule113Storage = WdModule113Storage & 0x1f | 0x1000;
    WdModule113Storage5 = allocation_2;
    return 0;
}

void MpSeqDetectCtxInitialize(uint64_t input, uint64_t input_2)
{
    uint64_t value = 0;
    memset(&WdModule113Storage3, 0, (char *)0xd0);
    MpSeqDetectCtx = 0;
    WdModule113Storage2 = 0;
    FltInitializePushLock(WD_MODULE113_UNRECOVERED_ADDRESS3);
    KeInitializeEvent(WD_MODULE113_UNRECOVERED_ADDRESS2, 0, (uint64_t)value & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
    KeInitializeTimerEx(WD_MODULE113_UNRECOVERED_ADDRESS, 0);
    KeInitializeDpc(WD_MODULE113_UNRECOVERED_ADDRESS4, MpSeqDetectCtxGCDpc, WD_SYMBOL_ADDRESS(MpSeqDetectCtx));
    WdModule113Storage6 = input_2;
    WdModule113Storage4 = WD_MODULE113_UNRECOVERED_ADDRESS6;
    WdModule113Storage7 = 0;
    return;
}

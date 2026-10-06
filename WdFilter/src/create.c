#include "wdfilter.h"

void MpPostCreateUpdateStreamContext(void *input, void *input_2, WD_LAYOUT_2 *input_3, uint8_t *input_4, void *context, char input_5)
{
    uint32_t *data_pointer;
    uint32_t result_length[2];
    uint64_t information_buffer;
    uint64_t value;
    uint64_t value_2;
    int64_t value_4;
    void *data_pointer_2;
    char byte_value;
    int32_t value_5;
    int32_t value_6;
    int64_t value_7;
    int64_t *data_pointer_3;
    uint64_t value_8;
    byte_value = input_5;
    data_pointer_2 = context;
    result_length[0] = 0;
    if (input_5 && (value_5 = MpTxfAddStream(input_2, input_3, ((uint16_t *)input_2)[1], context), value_5 < 0))
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x19, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), ((uint64_t *)input)[1], value_5);
        }
        return;
    }
    value_5 = 0;
    if (((uint32_t *)data_pointer_2)[0xc] & 0x10 && !byte_value && (value_6 = MpTxfUpdateStreamData(input_2, input_4, data_pointer_2), value_6 <= -1))
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1a, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), ((uint64_t *)input)[1], value_6);
        }
        return;
    }
    if (*input_4 & 2)
    {
        if (input_3)
        {
            if (input_3->field_0xa8 & 1)
            {
                value_5 = -0x3fffff1b;
            }
            else if (0xfffd <= (uint16_t)(((int16_t *)input_2)[1] - 1U))
            {
                FltAcquirePushLockShared((int64_t)data_pointer_2 + 0xc0);
                if (!(((uint32_t *)data_pointer_2)[0xc] & 2))
                {
                    if (((int64_t *)data_pointer_2)[0x1a])
                    {
                        WdUnresolvedAtomicBegin();
                        data_pointer = (uint32_t *)(((int64_t *)data_pointer_2)[0x1a] + 0x30);
                        *data_pointer = *data_pointer | 2;
                        WdUnresolvedAtomicEnd();
                    }
                    else
                    {
                        WdAtomicOr32((volatile int32_t *)((uint32_t *)((int64_t)data_pointer_2 + 0x30)), 2);
                    }
                }
                FltReleasePushLock((int64_t)data_pointer_2 + 0xc0);
            }
        }
        else if (!(((uint32_t *)data_pointer_2)[0xc] & 2))
        {
            WdAtomicOr32((volatile int32_t *)((uint32_t *)((int64_t)data_pointer_2 + 0x30)), 2);
        }
    }
    else if (input_3)
    {
        if (input_3->field_0xa8 & 1)
        {
            value_5 = -0x3fffff1b;
        }
        else if (0xfffd <= (uint16_t)(((int16_t *)input_2)[1] - 1U))
        {
            FltAcquirePushLockShared((int64_t)data_pointer_2 + 0xc0);
            if (((uint32_t *)data_pointer_2)[0xc] & 2)
            {
                if (((int64_t *)data_pointer_2)[0x1a])
                {
                    WdUnresolvedAtomicBegin();
                    data_pointer = (uint32_t *)(((int64_t *)data_pointer_2)[0x1a] + 0x30);
                    *data_pointer = *data_pointer & 0xfffffffd;
                    WdUnresolvedAtomicEnd();
                }
                else
                {
                    WdAtomicAnd32((volatile int32_t *)((uint32_t *)((int64_t)data_pointer_2 + 0x30)), 0xfffffffd);
                }
            }
            FltReleasePushLock((int64_t)data_pointer_2 + 0xc0);
        }
    }
    else if (((uint32_t *)data_pointer_2)[0xc] & 2)
    {
        WdAtomicAnd32((volatile int32_t *)((uint32_t *)((int64_t)data_pointer_2 + 0x30)), 0xfffffffd);
    }
    if (0 <= value_5)
    {
        if (*input_4 & 1 || *(uint32_t *)(((int64_t *)input_2)[4] + 0x50) & 0x400000)
        {
            WdAtomicOr32((volatile int32_t *)((uint32_t *)((int64_t)data_pointer_2 + 0x30)), 1);
        }
        else
        {
            WdAtomicAnd32((volatile int32_t *)((uint32_t *)((int64_t)data_pointer_2 + 0x30)), 0xfffffffe);
        }
        if (input_3)
        {
            if (input_3->field_0xa8 & 1)
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1c, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), ((uint64_t *)input)[1], 0xc00000e5);
                }
                return;
            }
            if (0xfffd <= (uint16_t)(((int16_t *)input_2)[1] - 1U))
            {
                FltAcquirePushLockShared((int64_t)data_pointer_2 + 0xc0);
                if (((int64_t *)data_pointer_2)[0x1a])
                {
                    data_pointer_3 = (int64_t *)(((int64_t *)data_pointer_2)[0x1a] + 0x20);
                }
                else
                {
                    data_pointer_3 = &((int64_t *)data_pointer_2)[0x16];
                }
                value_7 = 0;
                WdUnresolvedAtomicBegin();
                if (*data_pointer_3)
                {
                    value_7 = *data_pointer_3;
                }
                else
                {
                    *data_pointer_3 = 0;
                }
                WdUnresolvedAtomicEnd();
                FltReleasePushLock((int64_t)data_pointer_2 + 0xc0);
            }
            else
            {
                value_7 = 0;
                WdUnresolvedAtomicBegin();
                value_4 = *(int64_t *)((int64_t)data_pointer_2 + 0xb0);
                if (value_4)
                {
                    value_7 = value_4;
                }
                else
                {
                    *(int64_t *)((int64_t)data_pointer_2 + 0xb0) = 0;
                }
                WdUnresolvedAtomicEnd();
            }
        }
        else
        {
            value_7 = 0;
            WdUnresolvedAtomicBegin();
            value_4 = *(int64_t *)((int64_t)data_pointer_2 + 0xb0);
            if (value_4)
            {
                value_7 = value_4;
            }
            else
            {
                *(int64_t *)((int64_t)data_pointer_2 + 0xb0) = 0;
            }
            WdUnresolvedAtomicEnd();
        }
        if (value_7 && ((value_7 = ((int64_t *)input)[4], value_7 == 2 || !value_7) || value_7 == 3))
        {
            if (*(int64_t *)(MpData + 0x60) && !(*(char *)(((int64_t *)input)[2] + 4)))
            {
                value_7 = (*__guard_dispatch_icall_fptr)(*(uint64_t *)(MpData + 0x10), input, 1, result_length);
                if (!value_7)
                {
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                    {
                        WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1d, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), (uint64_t)KeGetCurrentThread());
                    }
                    goto block_1;
                }
                value_8 = *(uint64_t *)(value_7 + 0x30);
            }
            else
            {
                block_1:
                value_2 = 0;

                information_buffer = 0;
                value = 0;
                value_5 = FltQueryInformationFile(((uint64_t *)input_2)[3], ((uint64_t *)input_2)[4], &information_buffer, 0x18, 5, result_length);
                if (value_5 < 0)
                {
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1e, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), (uint64_t)KeGetCurrentThread(), value_5);
                    }
                    return;
                }
                value_8 = value;
            }
            value_5 = MpSetStreamSize(input_3, ((uint16_t *)input_2)[1], data_pointer_2, value_8);
            if (value_5 <= -1)
            {
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    return;
                }
                value_8 = 0x1f;
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_8, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), ((uint64_t *)input)[1], value_5);
                return;
            }
        }
        if (((int64_t *)input)[4] == 2)
        {
            MpSetFileWriteHistoryFlag__create(input_3, ((uint16_t *)input_2)[1], data_pointer_2);
        }
    }
    else
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return;
        }
        value_8 = 0x1b;
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_8, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), ((uint64_t *)input)[1], value_5);
    }
    return;
}

uint64_t MpSetStreamSize(WD_LAYOUT_2 *input, int16_t input_2, void *input_3, uint64_t input_4)
{
    if (!input)
    {
        WdUnresolvedAtomicBegin();
        ((uint64_t *)input_3)[0x16] = input_4;
        WdUnresolvedAtomicEnd();
        return 0;
    }
    if (!(input->field_0xa8 & 1))
    {
        if ((uint16_t)(input_2 - 1U) <= 0xfffc)
        {
            return 0;
        }
        FltAcquirePushLockShared((int64_t)input_3 + 0xc0);
        if (((int64_t *)input_3)[0x1a])
        {
            WdUnresolvedAtomicBegin();
            *(uint64_t *)(((int64_t *)input_3)[0x1a] + 0x20) = input_4;
            WdUnresolvedAtomicEnd();
        }
        FltReleasePushLock((int64_t)input_3 + 0xc0);
        return 0;
    }
    return 0xc00000e5;
}

int32_t GetMpFileStateWithSeq__create(int32_t *input, WD_LAYOUT_42 *input_2)
{
    if (input && input_2)
    {
        if (*input == 5 && !(*(uint32_t *)(MpData + 0x364) >> 0xf & 1))
        {
            return 5;
        }
        if (input[1] == input_2->field_0x90)
        {
            return *input;
        }
    }
    return 0;
}

uint64_t MpSetStreamState__create(WD_LAYOUT_2 *input, int16_t input_2, void *input_3, uint32_t input_4)
{
    uint32_t value;
    if (input)
    {
        if (input->field_0xa8 & 1)
        {
            return 0xc00000e5;
        }
        if (0xfffd <= (uint16_t)(input_2 - 1U))
        {
            FltAcquirePushLockShared((int64_t)input_3 + 0xc0);
            if (((int64_t *)input_3)[0x1a])
            {
                *(uint32_t *)(((int64_t *)input_3)[0x1a] + 0x18) = input_4;
                *(uint32_t *)(((int64_t *)input_3)[0x1a] + 0x1c) = *(uint32_t *)(((int64_t *)input_3)[1] + 0x90);
            }
            else
            {
                ((uint32_t *)input_3)[8] = input_4;
                value = ((uint32_t *)input_3)[8];
                ((uint32_t *)input_3)[9] = *(uint32_t *)(((int64_t *)input_3)[1] + 0x90);
                if (value != 3 && (7 < value || !(0x94U >> (value & 0x1f) & 1)))
                {
                    WdAtomicAnd32((volatile int32_t *)((uint32_t *)((int64_t)input_3 + 0x30)), 0xffffbfff);
                }
            }
            FltReleasePushLock((int64_t)input_3 + 0xc0);
        }
    }
    else
    {
        ((uint32_t *)input_3)[8] = input_4;
        value = ((uint32_t *)input_3)[8];
        ((uint32_t *)input_3)[9] = *(uint32_t *)(((int64_t *)input_3)[1] + 0x90);
        if (value != 3 && (7 < value || !(0x94U >> (value & 0x1f) & 1)))
        {
            WdAtomicAnd32((volatile int32_t *)((uint32_t *)((int64_t)input_3 + 0x30)), 0xffffbfff);
            return 0;
        }
    }
    return 0;
}

int64_t MpGetFileWriteHistoryAndReset__create(WD_LAYOUT_2 *input, int16_t input_2, void *input_3, WD_LAYOUT_1 *buffer)
{
    int64_t lock;
    int32_t value;
    int64_t value_2;
    int64_t *buffer_2;
    char byte_value;
    int32_t value_3;
    int64_t value_4;
    int64_t value_5;
    uint32_t value_6;
    uint32_t value_7;
    uint32_t value_8;
    uint64_t value_9;
    if (!input)
    {
        buffer_2 = &((int64_t *)input_3)[0x2a];
        value = 0;
        WdUnresolvedAtomicBegin();
        value_3 = *(int32_t *)((int64_t)input_3 + 0x180);
        if (value_3)
        {
            value = value_3;
        }
        else
        {
            *(int32_t *)((int64_t)input_3 + 0x180) = 0;
        }
        WdUnresolvedAtomicEnd();
        buffer->field_0x30 = value;
        value_2 = 0;
        WdUnresolvedAtomicBegin();
        if (*buffer_2)
        {
            value_2 = *buffer_2;
        }
        else
        {
            *buffer_2 = 0;
        }
        WdUnresolvedAtomicEnd();
        buffer->field_0x0 = value_2;
        value_2 = 0;
        WdUnresolvedAtomicBegin();
        lock = *(int64_t *)((int64_t)input_3 + 0x158);
        if (lock)
        {
            value_2 = lock;
        }
        else
        {
            *(int64_t *)((int64_t)input_3 + 0x158) = 0;
        }
        WdUnresolvedAtomicEnd();
        buffer->field_0x8 = value_2;
        value_2 = 0;
        WdUnresolvedAtomicBegin();
        lock = *(int64_t *)((int64_t)input_3 + 0x160);
        if (lock)
        {
            value_2 = lock;
        }
        else
        {
            *(int64_t *)((int64_t)input_3 + 0x160) = 0;
        }
        WdUnresolvedAtomicEnd();
        buffer->field_0x10 = value_2;
        value_2 = 0;
        WdUnresolvedAtomicBegin();
        lock = *(int64_t *)((int64_t)input_3 + 0x168);
        if (lock)
        {
            value_2 = lock;
        }
        else
        {
            *(int64_t *)((int64_t)input_3 + 0x168) = 0;
        }
        WdUnresolvedAtomicEnd();
        buffer->field_0x18 = value_2;
        value_2 = 0;
        WdUnresolvedAtomicBegin();
        lock = *(int64_t *)((int64_t)input_3 + 0x170);
        if (lock)
        {
            value_2 = lock;
        }
        else
        {
            *(int64_t *)((int64_t)input_3 + 0x170) = 0;
        }
        WdUnresolvedAtomicEnd();
        buffer->field_0x20 = value_2;
        value_2 = 0;
        WdUnresolvedAtomicBegin();
        lock = *(int64_t *)((int64_t)input_3 + 0x178);
        if (lock)
        {
            value_2 = lock;
        }
        else
        {
            *(int64_t *)((int64_t)input_3 + 0x178) = 0;
        }
        WdUnresolvedAtomicEnd();
        buffer->field_0x28 = value_2;
        value = 0;
        WdUnresolvedAtomicBegin();
        value_3 = *(int32_t *)((int64_t)input_3 + 0x184);
        if (value_3)
        {
            value = value_3;
        }
        else
        {
            *(int32_t *)((int64_t)input_3 + 0x184) = 0;
        }
        WdUnresolvedAtomicEnd();
        buffer->field_0x34 = value;
        buffer->field_0x40 = ((uint32_t *)input_3)[100];
        buffer->field_0x38 = ((int64_t *)input_3)[0x31];
        WdUnresolvedAtomicBegin();
        byte_value = *(char *)((int64_t)input_3 + 0x194);
        *(char *)((int64_t)input_3 + 0x194) = '\0';
        WdUnresolvedAtomicEnd();
        if (byte_value)
        {
            FltAcquirePushLockExclusive((int64_t)input_3 + 0x270);
            value_9 = *(uint64_t *)((int64_t)input_3 + 0x19c);
            *(uint64_t *)buffer->field_0x44 = *(uint64_t *)((int64_t)input_3 + 0x194);
            *(uint64_t *)(&buffer->field_0x44[8]) = value_9;
            value_9 = *(uint64_t *)((int64_t)input_3 + 0x1ac);
            *(uint64_t *)(&buffer->field_0x44[0x10]) = *(uint64_t *)((int64_t)input_3 + 0x1a4);
            *(uint64_t *)(&buffer->field_0x44[0x18]) = value_9;
            value_9 = *(uint64_t *)((int64_t)input_3 + 0x1bc);
            *(uint64_t *)(&buffer->field_0x44[0x20]) = *(uint64_t *)((int64_t)input_3 + 0x1b4);
            *(uint64_t *)(&buffer->field_0x44[0x28]) = value_9;
            value_9 = *(uint64_t *)((int64_t)input_3 + 0x1cc);
            *(uint64_t *)(&buffer->field_0x44[0x30]) = *(uint64_t *)((int64_t)input_3 + 0x1c4);
            *(uint64_t *)(&buffer->field_0x44[0x38]) = value_9;
            value_9 = *(uint64_t *)((int64_t)input_3 + 0x1dc);
            *(uint64_t *)(&buffer->field_0x44[0x40]) = *(uint64_t *)((int64_t)input_3 + 0x1d4);
            *(uint64_t *)(&buffer->field_0x44[0x48]) = value_9;
            value_9 = *(uint64_t *)((int64_t)input_3 + 0x1ec);
            *(uint64_t *)(&buffer->field_0x44[0x50]) = *(uint64_t *)((int64_t)input_3 + 0x1e4);
            *(uint64_t *)(&buffer->field_0x44[0x58]) = value_9;
            value_9 = *(uint64_t *)((int64_t)input_3 + 0x1fc);
            *(uint64_t *)(&buffer->field_0x44[0x60]) = *(uint64_t *)((int64_t)input_3 + 500);
            *(uint64_t *)(&buffer->field_0x44[0x68]) = value_9;
            value_9 = *(uint64_t *)((int64_t)input_3 + 0x20c);
            *(uint64_t *)(&buffer->field_0x44[0x70]) = *(uint64_t *)((int64_t)input_3 + 0x204);
            *(uint64_t *)(&buffer->field_0x44[0x78]) = value_9;
            value_9 = *(uint64_t *)((int64_t)input_3 + 0x21c);
            *(uint64_t *)(&buffer->field_0x44[0x80]) = *(uint64_t *)((int64_t)input_3 + 0x214);
            *(uint64_t *)(&buffer->field_0x44[0x88]) = value_9;
            value_9 = *(uint64_t *)((int64_t)input_3 + 0x22c);
            *(uint64_t *)(&buffer->field_0x44[0x90]) = *(uint64_t *)((int64_t)input_3 + 0x224);
            *(uint64_t *)(&buffer->field_0x44[0x98]) = value_9;
            value_9 = *(uint64_t *)((int64_t)input_3 + 0x23c);
            *(uint64_t *)(&buffer->field_0x44[0xa0]) = *(uint64_t *)((int64_t)input_3 + 0x234);
            *(uint64_t *)(&buffer->field_0x44[0xa8]) = value_9;
            value_6 = ((uint32_t *)input_3)[0x92];
            value_7 = ((uint32_t *)input_3)[0x93];
            value_8 = ((uint32_t *)input_3)[0x94];
            buffer->field_0xf4 = ((uint32_t *)input_3)[0x91];
            buffer->field_0xf8 = value_6;
            buffer->field_0xfc = value_7;
            buffer->field_0x100 = value_8;
            value_6 = ((uint32_t *)input_3)[0x96];
            value_7 = ((uint32_t *)input_3)[0x97];
            value_8 = ((uint32_t *)input_3)[0x98];
            buffer->field_0x104 = ((uint32_t *)input_3)[0x95];
            buffer->field_0x108 = value_6;
            buffer->field_0x10c = value_7;
            buffer->field_0x110 = value_8;
            *(uint64_t *)buffer->field_0x114 = *(uint64_t *)((int64_t)input_3 + 0x264);
            buffer->field_0x11c = ((uint32_t *)input_3)[0x9b];
            FltReleasePushLock((int64_t)input_3 + 0x270);
            buffer->field_0x44[0] = 1;
        }
        else
        {
            buffer->field_0x44[0] = 0;
        }
        memset(buffer_2, 0, (char *)0x44);
        ((char *)input_3)[0x194] = 0;
        ((uint64_t *)input_3)[0x2c] = 0xffffffffffffffff;
        value_2 = 0;
        return value_2;
    }
    if (input->field_0xa8 & 1)
    {
        value_2 = 0xc00000e5;
        return value_2;
    }
    if ((uint16_t)(input_2 - 1U) <= 0xfffc)
    {
        memset(buffer, 0, (char *)0x120);
        value_2 = 0;
        return value_2;
    }
    FltAcquirePushLockShared((int64_t)input_3 + 0xc0);
    value_5 = ((int64_t *)input_3)[0x1a];
    lock = (int64_t)input_3 + 0x270;
    if (value_5)
    {
        buffer_2 = (int64_t *)(value_5 + 0x48);
        value = 0;
        WdUnresolvedAtomicBegin();
        value_3 = *(int32_t *)(value_5 + 0x78);
        if (value_3)
        {
            value = value_3;
        }
        else
        {
            *(int32_t *)(value_5 + 0x78) = 0;
        }
        WdUnresolvedAtomicEnd();
        buffer->field_0x30 = value;
        value_2 = 0;
        WdUnresolvedAtomicBegin();
        if (*buffer_2)
        {
            value_2 = *buffer_2;
        }
        else
        {
            *buffer_2 = 0;
        }
        WdUnresolvedAtomicEnd();
        buffer->field_0x0 = value_2;
        value_2 = 0;
        WdUnresolvedAtomicBegin();
        value_4 = *(int64_t *)(value_5 + 0x50);
        if (value_4)
        {
            value_2 = value_4;
        }
        else
        {
            *(int64_t *)(value_5 + 0x50) = 0;
        }
        WdUnresolvedAtomicEnd();
        buffer->field_0x8 = value_2;
        value_2 = 0;
        WdUnresolvedAtomicBegin();
        value_4 = *(int64_t *)(value_5 + 0x58);
        if (value_4)
        {
            value_2 = value_4;
        }
        else
        {
            *(int64_t *)(value_5 + 0x58) = 0;
        }
        WdUnresolvedAtomicEnd();
        buffer->field_0x10 = value_2;
        value_2 = 0;
        WdUnresolvedAtomicBegin();
        value_4 = *(int64_t *)(value_5 + 0x60);
        if (value_4)
        {
            value_2 = value_4;
        }
        else
        {
            *(int64_t *)(value_5 + 0x60) = 0;
        }
        WdUnresolvedAtomicEnd();
        buffer->field_0x18 = value_2;
        value_2 = 0;
        WdUnresolvedAtomicBegin();
        value_4 = *(int64_t *)(value_5 + 0x68);
        if (value_4)
        {
            value_2 = value_4;
        }
        else
        {
            *(int64_t *)(value_5 + 0x68) = 0;
        }
        WdUnresolvedAtomicEnd();
        buffer->field_0x20 = value_2;
        value_2 = 0;
        WdUnresolvedAtomicBegin();
        value_4 = *(int64_t *)(value_5 + 0x70);
        if (value_4)
        {
            value_2 = value_4;
        }
        else
        {
            *(int64_t *)(value_5 + 0x70) = 0;
        }
        WdUnresolvedAtomicEnd();
        buffer->field_0x28 = value_2;
        value = 0;
        WdUnresolvedAtomicBegin();
        value_3 = *(int32_t *)(value_5 + 0x7c);
        if (value_3)
        {
            value = value_3;
        }
        else
        {
            *(int32_t *)(value_5 + 0x7c) = 0;
        }
        WdUnresolvedAtomicEnd();
        buffer->field_0x34 = value;
        buffer->field_0x40 = *(uint32_t *)(value_5 + 0x88);
        buffer->field_0x38 = *(int64_t *)(value_5 + 0x80);
        WdUnresolvedAtomicBegin();
        byte_value = *(char *)(value_5 + 0x8c);
        *(char *)(value_5 + 0x8c) = '\0';
        WdUnresolvedAtomicEnd();
        if (byte_value)
        {
            FltAcquirePushLockExclusive(lock);
            value_9 = *(uint64_t *)(value_5 + 0x94);
            *(uint64_t *)buffer->field_0x44 = *(uint64_t *)(value_5 + 0x8c);
            *(uint64_t *)(&buffer->field_0x44[8]) = value_9;
            value_9 = *(uint64_t *)(value_5 + 0xa4);
            *(uint64_t *)(&buffer->field_0x44[0x10]) = *(uint64_t *)(value_5 + 0x9c);
            *(uint64_t *)(&buffer->field_0x44[0x18]) = value_9;
            value_9 = *(uint64_t *)(value_5 + 0xb4);
            *(uint64_t *)(&buffer->field_0x44[0x20]) = *(uint64_t *)(value_5 + 0xac);
            *(uint64_t *)(&buffer->field_0x44[0x28]) = value_9;
            value_9 = *(uint64_t *)(value_5 + 0xc4);
            *(uint64_t *)(&buffer->field_0x44[0x30]) = *(uint64_t *)(value_5 + 0xbc);
            *(uint64_t *)(&buffer->field_0x44[0x38]) = value_9;
            value_9 = *(uint64_t *)(value_5 + 0xd4);
            *(uint64_t *)(&buffer->field_0x44[0x40]) = *(uint64_t *)(value_5 + 0xcc);
            *(uint64_t *)(&buffer->field_0x44[0x48]) = value_9;
            value_9 = *(uint64_t *)(value_5 + 0xe4);
            *(uint64_t *)(&buffer->field_0x44[0x50]) = *(uint64_t *)(value_5 + 0xdc);
            *(uint64_t *)(&buffer->field_0x44[0x58]) = value_9;
            value_9 = *(uint64_t *)(value_5 + 0xf4);
            *(uint64_t *)(&buffer->field_0x44[0x60]) = *(uint64_t *)(value_5 + 0xec);
            *(uint64_t *)(&buffer->field_0x44[0x68]) = value_9;
            value_9 = *(uint64_t *)(value_5 + 0x104);
            *(uint64_t *)(&buffer->field_0x44[0x70]) = *(uint64_t *)(value_5 + 0xfc);
            *(uint64_t *)(&buffer->field_0x44[0x78]) = value_9;
            value_9 = *(uint64_t *)(value_5 + 0x114);
            *(uint64_t *)(&buffer->field_0x44[0x80]) = *(uint64_t *)(value_5 + 0x10c);
            *(uint64_t *)(&buffer->field_0x44[0x88]) = value_9;
            value_9 = *(uint64_t *)(value_5 + 0x124);
            *(uint64_t *)(&buffer->field_0x44[0x90]) = *(uint64_t *)(value_5 + 0x11c);
            *(uint64_t *)(&buffer->field_0x44[0x98]) = value_9;
            value_9 = *(uint64_t *)(value_5 + 0x134);
            *(uint64_t *)(&buffer->field_0x44[0xa0]) = *(uint64_t *)(value_5 + 300);
            *(uint64_t *)(&buffer->field_0x44[0xa8]) = value_9;
            value_6 = *(uint32_t *)(value_5 + 0x140);
            value_7 = *(uint32_t *)(value_5 + 0x144);
            value_8 = *(uint32_t *)(value_5 + 0x148);
            buffer->field_0xf4 = *(uint32_t *)(value_5 + 0x13c);
            buffer->field_0xf8 = value_6;
            buffer->field_0xfc = value_7;
            buffer->field_0x100 = value_8;
            value_6 = *(uint32_t *)(value_5 + 0x150);
            value_7 = *(uint32_t *)(value_5 + 0x154);
            value_8 = *(uint32_t *)(value_5 + 0x158);
            buffer->field_0x104 = *(uint32_t *)(value_5 + 0x14c);
            buffer->field_0x108 = value_6;
            buffer->field_0x10c = value_7;
            buffer->field_0x110 = value_8;
            *(uint64_t *)buffer->field_0x114 = *(uint64_t *)(value_5 + 0x15c);
            buffer->field_0x11c = *(uint32_t *)(value_5 + 0x164);
            block_1:
            FltReleasePushLock(lock);

            buffer->field_0x44[0] = 1;
            goto block_2;
        }
    }
    else
    {
        buffer_2 = &((int64_t *)input_3)[0x2a];
        value = 0;
        WdUnresolvedAtomicBegin();
        value_3 = *(int32_t *)((int64_t)input_3 + 0x180);
        if (value_3)
        {
            value = value_3;
        }
        else
        {
            *(int32_t *)((int64_t)input_3 + 0x180) = 0;
        }
        WdUnresolvedAtomicEnd();
        buffer->field_0x30 = value;
        value_2 = 0;
        WdUnresolvedAtomicBegin();
        if (*buffer_2)
        {
            value_2 = *buffer_2;
        }
        else
        {
            *buffer_2 = 0;
        }
        WdUnresolvedAtomicEnd();
        buffer->field_0x0 = value_2;
        value_2 = 0;
        WdUnresolvedAtomicBegin();
        value_5 = *(int64_t *)((int64_t)input_3 + 0x158);
        if (value_5)
        {
            value_2 = value_5;
        }
        else
        {
            *(int64_t *)((int64_t)input_3 + 0x158) = 0;
        }
        WdUnresolvedAtomicEnd();
        buffer->field_0x8 = value_2;
        value_2 = 0;
        WdUnresolvedAtomicBegin();
        value_5 = *(int64_t *)((int64_t)input_3 + 0x160);
        if (value_5)
        {
            value_2 = value_5;
        }
        else
        {
            *(int64_t *)((int64_t)input_3 + 0x160) = 0;
        }
        WdUnresolvedAtomicEnd();
        buffer->field_0x10 = value_2;
        value_2 = 0;
        WdUnresolvedAtomicBegin();
        value_5 = *(int64_t *)((int64_t)input_3 + 0x168);
        if (value_5)
        {
            value_2 = value_5;
        }
        else
        {
            *(int64_t *)((int64_t)input_3 + 0x168) = 0;
        }
        WdUnresolvedAtomicEnd();
        buffer->field_0x18 = value_2;
        value_2 = 0;
        WdUnresolvedAtomicBegin();
        value_5 = *(int64_t *)((int64_t)input_3 + 0x170);
        if (value_5)
        {
            value_2 = value_5;
        }
        else
        {
            *(int64_t *)((int64_t)input_3 + 0x170) = 0;
        }
        WdUnresolvedAtomicEnd();
        buffer->field_0x20 = value_2;
        value_2 = 0;
        WdUnresolvedAtomicBegin();
        value_5 = *(int64_t *)((int64_t)input_3 + 0x178);
        if (value_5)
        {
            value_2 = value_5;
        }
        else
        {
            *(int64_t *)((int64_t)input_3 + 0x178) = 0;
        }
        WdUnresolvedAtomicEnd();
        buffer->field_0x28 = value_2;
        value = 0;
        WdUnresolvedAtomicBegin();
        value_3 = *(int32_t *)((int64_t)input_3 + 0x184);
        if (value_3)
        {
            value = value_3;
        }
        else
        {
            *(int32_t *)((int64_t)input_3 + 0x184) = 0;
        }
        WdUnresolvedAtomicEnd();
        buffer->field_0x34 = value;
        buffer->field_0x40 = ((uint32_t *)input_3)[100];
        buffer->field_0x38 = ((int64_t *)input_3)[0x31];
        WdUnresolvedAtomicBegin();
        byte_value = *(char *)((int64_t)input_3 + 0x194);
        *(char *)((int64_t)input_3 + 0x194) = '\0';
        WdUnresolvedAtomicEnd();
        if (byte_value)
        {
            FltAcquirePushLockExclusive(lock);
            value_9 = *(uint64_t *)((int64_t)input_3 + 0x19c);
            *(uint64_t *)buffer->field_0x44 = *(uint64_t *)((int64_t)input_3 + 0x194);
            *(uint64_t *)(&buffer->field_0x44[8]) = value_9;
            value_9 = *(uint64_t *)((int64_t)input_3 + 0x1ac);
            *(uint64_t *)(&buffer->field_0x44[0x10]) = *(uint64_t *)((int64_t)input_3 + 0x1a4);
            *(uint64_t *)(&buffer->field_0x44[0x18]) = value_9;
            value_9 = *(uint64_t *)((int64_t)input_3 + 0x1bc);
            *(uint64_t *)(&buffer->field_0x44[0x20]) = *(uint64_t *)((int64_t)input_3 + 0x1b4);
            *(uint64_t *)(&buffer->field_0x44[0x28]) = value_9;
            value_9 = *(uint64_t *)((int64_t)input_3 + 0x1cc);
            *(uint64_t *)(&buffer->field_0x44[0x30]) = *(uint64_t *)((int64_t)input_3 + 0x1c4);
            *(uint64_t *)(&buffer->field_0x44[0x38]) = value_9;
            value_9 = *(uint64_t *)((int64_t)input_3 + 0x1dc);
            *(uint64_t *)(&buffer->field_0x44[0x40]) = *(uint64_t *)((int64_t)input_3 + 0x1d4);
            *(uint64_t *)(&buffer->field_0x44[0x48]) = value_9;
            value_9 = *(uint64_t *)((int64_t)input_3 + 0x1ec);
            *(uint64_t *)(&buffer->field_0x44[0x50]) = *(uint64_t *)((int64_t)input_3 + 0x1e4);
            *(uint64_t *)(&buffer->field_0x44[0x58]) = value_9;
            value_9 = *(uint64_t *)((int64_t)input_3 + 0x1fc);
            *(uint64_t *)(&buffer->field_0x44[0x60]) = *(uint64_t *)((int64_t)input_3 + 500);
            *(uint64_t *)(&buffer->field_0x44[0x68]) = value_9;
            value_9 = *(uint64_t *)((int64_t)input_3 + 0x20c);
            *(uint64_t *)(&buffer->field_0x44[0x70]) = *(uint64_t *)((int64_t)input_3 + 0x204);
            *(uint64_t *)(&buffer->field_0x44[0x78]) = value_9;
            value_9 = *(uint64_t *)((int64_t)input_3 + 0x21c);
            *(uint64_t *)(&buffer->field_0x44[0x80]) = *(uint64_t *)((int64_t)input_3 + 0x214);
            *(uint64_t *)(&buffer->field_0x44[0x88]) = value_9;
            value_9 = *(uint64_t *)((int64_t)input_3 + 0x22c);
            *(uint64_t *)(&buffer->field_0x44[0x90]) = *(uint64_t *)((int64_t)input_3 + 0x224);
            *(uint64_t *)(&buffer->field_0x44[0x98]) = value_9;
            value_9 = *(uint64_t *)((int64_t)input_3 + 0x23c);
            *(uint64_t *)(&buffer->field_0x44[0xa0]) = *(uint64_t *)((int64_t)input_3 + 0x234);
            *(uint64_t *)(&buffer->field_0x44[0xa8]) = value_9;
            value_6 = ((uint32_t *)input_3)[0x92];
            value_7 = ((uint32_t *)input_3)[0x93];
            value_8 = ((uint32_t *)input_3)[0x94];
            buffer->field_0xf4 = ((uint32_t *)input_3)[0x91];
            buffer->field_0xf8 = value_6;
            buffer->field_0xfc = value_7;
            buffer->field_0x100 = value_8;
            value_6 = ((uint32_t *)input_3)[0x96];
            value_7 = ((uint32_t *)input_3)[0x97];
            value_8 = ((uint32_t *)input_3)[0x98];
            buffer->field_0x104 = ((uint32_t *)input_3)[0x95];
            buffer->field_0x108 = value_6;
            buffer->field_0x10c = value_7;
            buffer->field_0x110 = value_8;
            *(uint64_t *)buffer->field_0x114 = *(uint64_t *)((int64_t)input_3 + 0x264);
            buffer->field_0x11c = ((uint32_t *)input_3)[0x9b];
            goto block_1;
        }
    }
    buffer->field_0x44[0] = 0;
    block_2:
    memset(buffer_2, 0, (char *)0x44);

    buffer_2[2] = -1;
    ((char *)buffer_2)[0x44] = 0;
    FltReleasePushLock((int64_t)input_3 + 0xc0);
    value_2 = 0;
    return value_2;
}

void WPP_SF_qdZidD(uint64_t input, uint64_t input_2, uint64_t input_3, uint64_t input_4, uint64_t input_5, int16_t *input_6)
{
    int16_t *wide_text;
    int16_t value;
    uint64_t value_2;
    uint64_t value_3;
    if (input_6)
    {
        value = *input_6;
        if (*input_6)
        {
            value_3 = *(uint64_t *)(&input_6[4]);
            goto block_1;
        }
    }
    else
    {
        value = 8;
    }
    value_3 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    block_1:
    wide_text = input_6;

    if (!input_6)
    {
        wide_text = &WdCleanupStorage;
    }
    value_2 = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), 0x26, &value_2, 8, &input_5, 4, wide_text, 2, value_3, (uint16_t)value, &unrecovered_stack_argument_7, 8, &unrecovered_stack_argument_8, 4, &unrecovered_stack_argument_9, 4, 0);
    return;
}

void WPP_SF_ZZDd(uint64_t input, uint16_t input_2, uint64_t input_3, int16_t *input_4, int16_t *input_5)
{
    int16_t value;
    int16_t value_2;
    int16_t *wide_text;
    uint64_t value_3;
    uint64_t value_4;
    value_3 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    value_2 = 8;
    if (input_5)
    {
        value = *input_5;
        if (*input_5)
        {
            value_4 = *(uint64_t *)(&input_5[4]);
            goto block_1;
        }
    }
    else
    {
        value = 8;
    }
    value_4 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    block_1:
    wide_text = input_5;

    if (!input_5)
    {
        wide_text = &WdCleanupStorage;
    }
    if (input_4 && (value_2 = *input_4, *input_4))
    {
        value_3 = *(uint64_t *)(&input_4[4]);
    }
    if (!input_4)
    {
        input_4 = &WdCleanupStorage;
    }
    (*__guard_dispatch_icall_fptr)(input, 0x2b, input_3, input_2, input_4, 2, value_3, (uint16_t)value_2, wide_text, 2, value_4, (uint16_t)value, &unrecovered_stack_argument_6, 4, &unrecovered_stack_argument_7, 4, 0);
    return;
}

void WPP_SF_ZDDDDDD(uint64_t input, uint64_t input_2, uint64_t input_3, int16_t *input_4)
{
    int16_t value;
    uint64_t value_2;
    if (input_4)
    {
        value = *input_4;
        if (*input_4)
        {
            value_2 = *(uint64_t *)(&input_4[4]);
            goto block_1;
        }
    }
    else
    {
        value = 8;
    }
    value_2 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    block_1:
    if (!input_4)
    {
        input_4 = &WdCleanupStorage;
    }

    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), 0x57, input_4, 2, value_2, (uint16_t)value, &unrecovered_stack_argument_5, 4, &unrecovered_stack_argument_6, 4, &unrecovered_stack_argument_7, 4, &unrecovered_stack_argument_8, 4, &unrecovered_stack_argument_9, 4, &unrecovered_stack_argument_10, 4, 0);
    return;
}

void MpPostCreateSendFileCreationAsyncMessageIfNeeded(WD_LAYOUT_50 *data, void *objects, void *provider, uint32_t input, char *input_2)
{
    uint64_t instance;
    char *extra_data;
    int16_t *trace_argument_2;
    uint32_t notification_flags;
    int64_t instance_context;
    int16_t *trace_argument_1;
    uint64_t value_2;
    uint32_t value_3;
    extra_data = input_2;
    value_3 = (uint32_t)((uint64_t)value_2 >> 0x20);
    instance_context = 0;
    if (data->field_0x20 == 2)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            trace_argument_1 = &WdCreateStorage3;
            trace_argument_2 = (int16_t *)(((int64_t *)objects)[4] + 0x58);
            if (!(input & 0x10))
            {
                trace_argument_1 = &WdCreateStorage2;
            }
            WPP_SF_ZZD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), WD_CREATE_UNRECOVERED_ADDRESS, provider, trace_argument_1, trace_argument_2, input);
            value_3 = (uint32_t)((uint64_t)trace_argument_2 >> 0x20);
        }
        instance = ((uint64_t *)objects)[3];
        if (0 <= (int32_t)FltGetInstanceContext(instance, &instance_context))
        {
            notification_flags = 0;
            if (!(input & 0x10) || (notification_flags = 0x400, *(uint32_t *)(MpData + 0xf44) & 1))
            {
                MpSendFileAsyncMessage(0, data, objects, *(uint32_t *)(instance_context + 0x54), ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)input & 0xffffffffULL, notification_flags, ((int64_t *)objects)[5], NULL, provider, extra_data, NULL);
            }
            FltReleaseContext(instance_context);
        }
    }
    return;
}

uint64_t MpSetFileWriteHistoryFlag__create(WD_LAYOUT_2 *input, int16_t input_2, void *input_3)
{
    uint32_t *atomic_value;
    if (!input)
    {
        WdAtomicOr32((volatile int32_t *)((uint32_t *)((int64_t)input_3 + 0x184)), 1);
        return 0;
    }
    if (!(input->field_0xa8 & 1))
    {
        if ((uint16_t)(input_2 - 1U) <= 0xfffc)
        {
            return 0;
        }
        FltAcquirePushLockShared((int64_t)input_3 + 0xc0);
        atomic_value = (uint32_t *)(((int64_t *)input_3)[0x1a] + 0x7c);
        if (!((int64_t *)input_3)[0x1a])
        {
            atomic_value = &((uint32_t *)input_3)[0x61];
        }
        WdAtomicOr32((volatile int32_t *)atomic_value, 1);
        FltReleasePushLock((int64_t)input_3 + 0xc0);
        return 0;
    }
    return 0xc00000e5;
}

void WPP_SF_S(uint64_t input, uint16_t input_2, uint64_t input_3, int16_t *input_4)
{
    int64_t index;
    if (input_4)
    {
        index = -1;
        do
        {
            index += 1;
        }
        while (input_4[index]);
        index = index * 2 + 2;
    }
    else
    {
        index = 10;
    }
    if (!input_4)
    {
        input_4 = &WdAsyncnotificationStorage3;
    }
    (*__guard_dispatch_icall_fptr)(input, 0x2b, input_3, input_2, input_4, index, 0);
    return;
}

void WPP_SF_ZS(uint64_t input, uint64_t input_2, uint64_t input_3, int16_t *input_4, int16_t *input_5)
{
    int64_t index;
    int16_t value;
    int16_t *wide_text;
    uint64_t value_2;
    if (input_5)
    {
        index = -1;
        do
        {
            index += 1;
        }
        while (input_5[index]);
        index = index * 2 + 2;
    }
    else
    {
        index = 10;
    }
    value_2 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    wide_text = input_5;
    if (!input_5)
    {
        wide_text = &WdAsyncnotificationStorage3;
    }
    if (input_4)
    {
        value = *input_4;
        if (*input_4)
        {
            value_2 = *(uint64_t *)(&input_4[4]);
        }
    }
    else
    {
        value = 8;
    }
    if (!input_4)
    {
        input_4 = &WdCleanupStorage;
    }
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), 0x46, input_4, 2, value_2, (uint16_t)value, wide_text, index, 0);
    return;
}

void WPP_SF_ZZD(uint64_t input, uint64_t input_2, uint64_t input_3, int16_t *input_4, int16_t *input_5)
{
    int16_t value;
    int16_t *wide_text;
    int16_t value_2;
    uint64_t value_3;
    uint64_t value_4;
    value_3 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    value_2 = 8;
    if (input_5)
    {
        value = *input_5;
        if (*input_5)
        {
            value_4 = *(uint64_t *)(&input_5[4]);
            goto block_1;
        }
    }
    else
    {
        value = 8;
    }
    value_4 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    block_1:
    wide_text = input_5;

    if (!input_5)
    {
        wide_text = &WdCleanupStorage;
    }
    if (input_4 && (value_2 = *input_4, *input_4))
    {
        value_3 = *(uint64_t *)(&input_4[4]);
    }
    if (!input_4)
    {
        input_4 = &WdCleanupStorage;
    }
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), 0x18, input_4, 2, value_3, (uint16_t)value_2, wide_text, 2, value_4, (uint16_t)value, &unrecovered_stack_argument_6, 4, 0);
    return;
}

void WPP_SF_ZZDS(uint64_t input, uint16_t input_2, uint64_t input_3, int16_t *input_4, int16_t *input_5, uint64_t input_6, int16_t *input_7)
{
    int64_t index;
    int16_t value;
    int16_t value_2;
    uint64_t value_3;
    int16_t *wide_text;
    uint64_t value_4;
    int16_t *wide_text_2;
    if (input_7)
    {
        index = -1;
        do
        {
            index += 1;
        }
        while (input_7[index]);
        index = index * 2 + 2;
    }
    else
    {
        index = 10;
    }
    value_4 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    value_2 = 8;
    wide_text_2 = input_7;
    if (!input_7)
    {
        wide_text_2 = &WdAsyncnotificationStorage3;
    }
    if (input_5)
    {
        value = *input_5;
        if (*input_5)
        {
            value_3 = *(uint64_t *)(&input_5[4]);
            goto block_1;
        }
    }
    else
    {
        value = 8;
    }
    value_3 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    block_1:
    wide_text = input_5;

    if (!input_5)
    {
        wide_text = &WdCleanupStorage;
    }
    if (input_4 && (value_2 = *input_4, *input_4))
    {
        value_4 = *(uint64_t *)(&input_4[4]);
    }
    if (!input_4)
    {
        input_4 = &WdCleanupStorage;
    }
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), input_2, input_4, 2, value_4, (uint16_t)value_2, wide_text, 2, value_3, (uint16_t)value, &input_6, 4, wide_text_2, index, 0);
    return;
}

void WPP_SF_qDZ(uint64_t input, uint64_t input_2, uint64_t input_3, uint64_t input_4, uint64_t input_5, int16_t *input_6)
{
    int16_t *wide_text;
    int16_t value;
    uint64_t value_2;
    uint64_t value_3;
    if (input_6)
    {
        value = *input_6;
        if (*input_6)
        {
            value_3 = *(uint64_t *)(&input_6[4]);
            goto block_1;
        }
    }
    else
    {
        value = 8;
    }
    value_3 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    block_1:
    wide_text = input_6;

    if (!input_6)
    {
        wide_text = &WdCleanupStorage;
    }
    value_2 = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), 0x34, &value_2, 8, &input_5, 4, wide_text, 2, value_3, (uint16_t)value, 0);
    return;
}

void WPP_SF_qZD(uint64_t input, uint16_t input_2, uint64_t input_3, uint64_t input_4, int16_t *input_5)
{
    int16_t *wide_text;
    int16_t value;
    uint64_t value_2;
    uint64_t value_3;
    if (input_5)
    {
        value = *input_5;
        if (*input_5)
        {
            value_3 = *(uint64_t *)(&input_5[4]);
            goto block_1;
        }
    }
    else
    {
        value = 8;
    }
    value_3 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    block_1:
    wide_text = input_5;

    if (!input_5)
    {
        wide_text = &WdCleanupStorage;
    }
    value_2 = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, input_3, input_2, &value_2, 8, wide_text, 2, value_3, (uint16_t)value, &unrecovered_stack_argument_6, 4, 0);
    return;
}

void WPP_SF_qsDZ(uint64_t input, uint16_t input_2, uint64_t input_3, uint64_t input_4, char *input_5, uint64_t input_6, int16_t *input_7)
{
    int64_t index;
    int16_t *wide_text;
    int16_t value;
    uint64_t value_2;
    int64_t value_3;
    uint64_t value_4;
    char *bytes;
    if (input_7)
    {
        value = *input_7;
        if (*input_7)
        {
            value_4 = *(uint64_t *)(&input_7[4]);
            goto block_1;
        }
    }
    else
    {
        value = 8;
    }
    value_4 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    block_1:
    wide_text = input_7;

    if (!input_7)
    {
        wide_text = &WdCleanupStorage;
    }
    if (input_5)
    {
        index = -1;
        do
        {
            value_3 = index;
            index = value_3 + 1;
        }
        while (input_5[index]);
        value_3 += 2;
    }
    else
    {
        value_3 = 5;
    }
    bytes = input_5;
    if (!input_5)
    {
        bytes = "NULL";
    }
    value_2 = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, input_3, input_2, &value_2, 8, bytes, value_3, &input_6, 4, wide_text, 2, value_4, (uint16_t)value, 0);
    return;
}

void MpSendHardlinkAsyncMessage(WD_LAYOUT_4 *data, void *objects, void *process_context)
{
    int64_t transaction;
    uint8_t byte_value;
    uint32_t value;
    uint32_t device_characteristics;
    uint64_t value_2;
    uint64_t instance;
    uint16_t *wide_text;
    uint32_t value_3;
    int32_t status;
    uint32_t value_5;
    int64_t instance_context;
    int64_t value_6;
    int64_t instance_context_2;
    uint16_t *file_name;
    uint8_t byte_value_2;
    value_3 = (uint32_t)((uint64_t)value_2 >> 0x20);
    if (!(*(uint32_t *)(MpData + 0x364) & 0x20))
    {
        return;
    }
    instance = ((uint64_t *)objects)[3];
    device_characteristics = 0;
    instance_context = 0;
    if (0 <= (int32_t)FltGetInstanceContext(instance, &instance_context))
    {
        device_characteristics = *(uint32_t *)(instance_context + 0x54);
        FltReleaseContext();
    }
    value_6 = 0;
    value_5 = device_characteristics;
    if (!device_characteristics)
    {
        instance = ((uint64_t *)objects)[3];
        instance_context_2 = 0;
        if (0 <= (int32_t)FltGetInstanceContext(instance, &instance_context_2))
        {
            value_5 = *(uint32_t *)(instance_context_2 + 0x54);
            FltReleaseContext();
        }
    }
    if (value_5 & 0x11)
    {
        value = 0x102;
    }
    else
    {
        value = 0x201;
        if (!WdDataStorage13)
        {
            value = 0x101;
        }
    }
    transaction = *(int64_t *)(data->field_0x10 + 0x38);
    instance = ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)(*(uint32_t *)(transaction + 0x10)) & 0xffffffffULL;
    status = FltGetDestinationFileNameInformation(((uint64_t *)objects)[3], ((uint64_t *)objects)[4], *(uint64_t *)(transaction + 8), transaction + 0x14, instance, value, &value_6);
    value_3 = (uint32_t)((uint64_t)instance >> 0x20);
    if (0 <= status)
    {
        byte_value_2 = (uint8_t)value & 1;
        block_1:
        file_name = (uint16_t *)(value_6 + 8);

        byte_value = byte_value_2;
    }
    else
    {
        instance = ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)(*(uint32_t *)(transaction + 0x10)) & 0xffffffffULL;
        status = FltGetDestinationFileNameInformation(((uint64_t *)objects)[3], ((uint64_t *)objects)[4], *(uint64_t *)(transaction + 8), transaction + 0x14, instance, 0x102, &value_6);
        value_3 = (uint32_t)((uint64_t)instance >> 0x20);
        byte_value_2 = 0;
        if (0 <= status)
        {
            goto block_1;
        }
        file_name = (uint16_t *)(((int64_t *)objects)[4] + 0x58);
        byte_value = 0;
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && (byte_value = byte_value_2, *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2))
        {
            wide_text = file_name;
            WPP_SF_dZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x45, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), status, file_name);
            value_3 = (uint32_t)((uint64_t)wide_text >> 0x20);
        }
    }
    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
    {
        value_3 = 1;
        WPP_SF_ZS(*(uint64_t *)(WPP_GLOBAL_Control + 0x18));
    }
    transaction = ((int64_t *)objects)[5];
    instance = ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)MpGetFileAttributes(objects) & 0xffffffffULL;
    status = MpSendFileAsyncMessage(5, data, objects, device_characteristics, instance, (uint32_t)byte_value << 0xb, transaction, file_name, process_context, NULL, NULL);
    if (status < 0 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_ZD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x47, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), file_name, (uint64_t)instance & 0xffffffff00000000 | (uint64_t)status & 0xffffffff);
    }
    if (value_6)
    {
        FltReleaseFileNameInformation();
    }
    return;
}

void MpIsUnNamedDataAttribute(WD_LAYOUT_30 *input)
{
    int64_t value;
    int64_t value_2;
    uint16_t value_3;
    uint64_t value_4;
    uint16_t value_5;
    uint64_t value_6;
    int64_t value_7;
    value_4 = input->field_0x0;
    value_2 = input->field_0x8;
    value_6 = *(uint32_t *)(&input->field_0x0);
    value_5 = (uint16_t)(*(uint32_t *)(&input->field_0x0));
    while (true)
    {
        if (!value_5)
        {
            value_7 = value_2;
            return;
        }
        value_5 = (uint16_t)value_6;
        if (*(int16_t *)(value_2 + -2 + (value_6 & 0xfffe)) != 0x5c)
        {
            break;
        }
        value_5 -= 2;
        value_6 = value_5;
    }

    if (!value_5)
    {
        value_7 = value_2;
        return;
    }
    value_3 = value_5 >> 1;
    while (value_3 && *(int16_t *)(value_2 + -2 + value_3 * 2ULL) != 0x5c)
    {
        value_3 -= 1;
    }

    while (true)
    {
        if (value_5 >> 1 <= value_3)
        {
            value_7 = value_2;
            return;
        }
        value = value_3 * 2ULL;
        value_7 = value + value_2;
        if (*(int16_t *)(value + value_2) == 0x3a)
        {
            if ((value_6 & 0xffff) + value_3 * -2ULL == 0xe)
            {
                value_4 = 0xe000e;
                RtlEqualUnicodeString(&value_4, WD_CREATE_UNRECOVERED_ADDRESS2, (uint64_t)value_7 & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
                value_2 = value_7;
            }
            value_7 = value_2;
            return;
        }
        value_3 += 1;
    }
}

void MpGetFileAttributes(void *input)
{
    int32_t status;
    uint64_t information_buffer = 0;
    uint64_t value = 0;
    uint64_t value_2 = 0;
    uint64_t value_3 = 0;
    uint64_t value_4 = 0;
    status = FltQueryInformationFile(((uint64_t *)input)[3], ((uint64_t *)input)[4], &information_buffer, 0x28, 4, 0);
    if (status < 0 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
    {
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x4d, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), (uint64_t)KeGetCurrentThread(), status);
    }
    return;
}

int32_t MpSendFileAsyncMessage(uint32_t input, void *data, void *input_2, uint32_t input_3, uint32_t input_4, uint32_t input_5, int64_t input_6, uint16_t *input_7, void *input_8, uint64_t *input_9, uint64_t *input_10)
{
    void *data_pointer;
    uint64_t value;
    int32_t trace_argument_1;
    uint32_t values[2];
    uint64_t value_2;
    data_pointer = input_8;
    value_2 = 0;
    values[0] = 0;
    if (*(uint32_t *)(MpData + 0x364) & 1 && input_8 && (!(((uint32_t *)input_8)[0xd] & 8) || !(((uint32_t *)input_8)[0xe] & 0x4000)) && ((!(((uint32_t *)input_8)[0xd] & 1) || ((uint32_t *)input_8)[0xe] & 0x4000) && !(((uint32_t *)input_8)[0xe] & 4)))
    {
        trace_argument_1 = MpCreateFileAsyncMessage(&value_2, values, input, data, input_2, input_3, input_4, input_5, input_6, input_7, NULL, input_9, input_8, input_10);
        value = value_2;
        if (0 <= trace_argument_1)
        {
            trace_argument_1 = MpAsyncSendNotification(value_2, values[0], 0, 0xffffffff, data_pointer);
            if (trace_argument_1 < 0 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x3f, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), trace_argument_1);
            }
            MpAsyncDereferenceNotification(value);
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x3e, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), trace_argument_1);
        }
        return trace_argument_1;
    }
    trace_argument_1 = 0;
    return trace_argument_1;
}

void MpCreateFileAsyncMessage(uint64_t *input, uint32_t *input_2, uint32_t input_3, void *data, void *input_4, uint32_t input_5, uint32_t input_6, uint32_t input_7, int64_t input_8, uint16_t *input_9, void *input_10, uint64_t *input_11, int64_t input_12, uint64_t *input_13)
{
    uint16_t *wide_text;
    uint32_t requestor_process_id;
    uint16_t *allocation;
    uint32_t value;
    uint64_t creation_time;
    int64_t file_name;
    uint32_t value_2;
    uint32_t values[2];
    char buffer_2[4];
    int64_t value_3;
    uint16_t value_4;
    uint64_t value_5;
    uint32_t value_6;
    uint64_t value_7;
    char byte_value;
    bool enabled;
    uint32_t value_8;
    uint32_t value_9;
    uint32_t value_10;
    void *data_pointer;
    int64_t value_11;
    int64_t value_12;
    uint16_t *wide_text_2;
    void *data_pointer_2;
    void *data_pointer_3;
    uint64_t *data_pointer_4;
    uint32_t *data_pointer_5;
    uint64_t value_13;
    uint64_t value_14;
    uint32_t value_15;
    uint32_t value_17;
    uint32_t value_18;
    uint16_t *wide_text_3;
    int64_t value_19;
    uint32_t value_20;
    int32_t status;
    wide_text_3 = input_9;
    value_12 = input_8;
    *input = 0;
    wide_text_2 = input_9;
    data_pointer_3 = input_4;
    data_pointer_2 = input_10;
    value_20 = 0;
    value_10 = 0;
    value_9 = 0;
    values[0] = 0;
    value_3 = 0;
    buffer_2[0] = 0;
    *input_2 = 0;
    value_5 = 0;
    value_13 = 0;
    data_pointer = data;
    data_pointer_4 = input;
    data_pointer_5 = input_2;
    if (input_3 != 5 && input_3 != 2)
    {
        value_20 = input_5 & 0x11;
        block_1:
        creation_time = 0x201;

        file_name = 0;
        if (!WdDataStorage13 && (creation_time = 0x201, !value_20))
        {
            creation_time = 0x101;
        }
        status = FltGetFileNameInformation(data, creation_time, &file_name);
        enabled = status < 0;
        if (enabled)
        {
            status = FltGetFileNameInformation(data, 0x102, &file_name);
        }
        byte_value = !enabled;
        if (file_name)
        {
            value_3 = file_name;
        }
    }
    else
    {
        if (!(input_5 & 0x11))
        {
            goto block_1;
        }
        status = MpQueryTargetFileName(data, input_4, input_5, input_3, value_8 & 0xffffff00, &value_3, buffer_2);
        byte_value = buffer_2[0];
    }
    value_19 = value_3;
    if (0 <= status && (uint16_t *)(value_3 + 8) && (value_4 = *(uint16_t *)(value_3 + 8), value_4))
    {
        value_6 = value_4 + 2;
        value = value_4 + 0x1ca;
        file_name = ((uint64_t)WdLoadField(&file_name, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)value & 0xffffffffULL;
        value_20 = value;
        if (wide_text_3)
        {
            if (*wide_text_3)
            {
                value_10 = *wide_text_3 + 2;
                value_20 = value_10 + value;
                file_name = ((uint64_t)WdLoadField(&file_name, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)value_20 & 0xffffffffULL;
                value_9 = value;
            }
        }
        if (*(uint32_t *)(MpData + 0x364) >> 0x10 & 1)
        {
            value_11 = ((int64_t *)data_pointer)[1];
            status = MpQuerySessionIdFromObjects(value_11, IoGetCurrentProcess(), input_12, values);
        }
        else
        {
            status = MpQuerySessionId();
        }
        if (status < 0 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x41, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), (uint64_t)KeGetCurrentThread(), status);
        }
        if (value_12 && (status = MpQueryTransactionId(value_12, &value_5), status <= -1) && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x42, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), (uint64_t)KeGetCurrentThread(), status);
        }
        if (0x18 <= value_20)
        {
            allocation = (uint16_t *)MpAllocatePoolWithTag(1, value_20 + 0x18, 0x6d61504d);
            if (allocation)
            {
                *allocation = 0xa3;
                *(uint32_t *)(&allocation[2]) = value_20 + 0x18;
                value_2 = 0x10;
                allocation[1] = 2;
                *(uint64_t *)(&allocation[4]) = 0;
                *(uint64_t *)(&allocation[8]) = 0;
                value_14 = 0xffff;
                value_15 = 2;
                status = FltRetrieveIoPriorityInfo(0, 0, (uint64_t)KeGetCurrentThread(), &value_2);
                if (status < 0 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x21, WD_SYMBOL_ADDRESS(WPP_fa8e7b00178136a6e2a2b6da068185ef_Traceguids), status);
                }
                requestor_process_id = KeQueryPriorityThread((uint64_t)KeGetCurrentThread());
                wide_text = &allocation[0xc];
                *(uint32_t *)(&allocation[6]) = requestor_process_id;
                *(uint32_t *)(&allocation[4]) = value_15;
                value_14 = ((uint64_t)WdLoadField(&value_14, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)requestor_process_id & 0xffffffffULL;
                *(uint32_t *)(&allocation[8]) = WdLoadField(&value_14, 4, 4);
                *(uint32_t *)(&allocation[0x12]) = 1;
                memmove(&allocation[0xf0], *(uint64_t **)(value_19 + 0x10), value_6 - 2ULL);
                value_20 = value_10;
                *(uint16_t *)((int64_t)wide_text + (value_6 + 0x1c6ULL & 0xfffffffffffffffe)) = 0;
                *(uint32_t *)(&allocation[0x4c]) = value_6;
                value_7 = value_10;
                *(uint64_t *)(&allocation[0x48]) = 0x1c8;
                if (value_10)
                {
                    memmove((uint64_t *)((uint64_t)value_9 + (int64_t)wide_text), *(uint64_t **)(&wide_text_2[4]), value_7 - 2);
                    *(uint16_t *)((int64_t)wide_text + (value_7 + 0x1c6 + value_6 & 0xfffffffffffffffe)) = 0;
                }
                *(uint32_t *)(&allocation[0x44]) = value_20;
                *(uint64_t *)(&allocation[0x40]) = value_9;
                *(char *)(&allocation[0x50]) = byte_value;
                *(uint32_t *)(&allocation[0x52]) = input_7;
                requestor_process_id = MpGetRequestorProcessId(data_pointer);
                *(uint32_t *)(&allocation[0x1a]) = requestor_process_id;
                creation_time = PsGetProcessCreateTimeQuadPart(MpGetRequestorProcess(data_pointer));
                *(uint64_t *)(&allocation[0x1c]) = MpFileTimeFromUlong64(creation_time);
                *(uint32_t *)(&allocation[0x22]) = values[0];
                *(uint32_t *)(&allocation[0x20]) = PsGetCurrentThreadId();
                *(uint32_t *)(&allocation[0x24]) = (uint32_t)value_5;
                *(uint32_t *)(&allocation[0x26]) = WdLoadField(&value_5, 4, 4);
                *(uint32_t *)(&allocation[0x28]) = (uint32_t)value_13;
                *(uint32_t *)(&allocation[0x2a]) = WdLoadField(&value_13, 4, 4);
                if (input_3 != 3)
                {
                    if (input_3 <= 1)
                    {
                        if (input_11)
                        {
                            creation_time = input_11[1];
                            *(uint64_t *)(&allocation[0x5c]) = *input_11;
                            *(uint64_t *)(&allocation[0x60]) = creation_time;
                            creation_time = input_11[3];
                            *(uint64_t *)(&allocation[100]) = input_11[2];
                            *(uint64_t *)(&allocation[0x68]) = creation_time;
                            creation_time = input_11[5];
                            *(uint64_t *)(&allocation[0x6c]) = input_11[4];
                            *(uint64_t *)(&allocation[0x70]) = creation_time;
                            creation_time = input_11[7];
                            *(uint64_t *)(&allocation[0x74]) = input_11[6];
                            *(uint64_t *)(&allocation[0x78]) = creation_time;
                            creation_time = input_11[9];
                            *(uint64_t *)(&allocation[0x7c]) = input_11[8];
                            *(uint64_t *)(&allocation[0x80]) = creation_time;
                            creation_time = input_11[0xb];
                            *(uint64_t *)(&allocation[0x84]) = input_11[10];
                            *(uint64_t *)(&allocation[0x88]) = creation_time;
                            creation_time = input_11[0xd];
                            *(uint64_t *)(&allocation[0x8c]) = input_11[0xc];
                            *(uint64_t *)(&allocation[0x90]) = creation_time;
                            creation_time = input_11[0xf];
                            *(uint64_t *)(&allocation[0x94]) = input_11[0xe];
                            *(uint64_t *)(&allocation[0x98]) = creation_time;
                            creation_time = input_11[0x11];
                            *(uint64_t *)(&allocation[0x9c]) = input_11[0x10];
                            *(uint64_t *)(&allocation[0xa0]) = creation_time;
                            creation_time = input_11[0x13];
                            *(uint64_t *)(&allocation[0xa4]) = input_11[0x12];
                            *(uint64_t *)(&allocation[0xa8]) = creation_time;
                            creation_time = input_11[0x15];
                            *(uint64_t *)(&allocation[0xac]) = input_11[0x14];
                            *(uint64_t *)(&allocation[0xb0]) = creation_time;
                            requestor_process_id = ((uint32_t *)input_11)[0x2d];
                            value_17 = *(uint32_t *)(&input_11[0x17]);
                            value_18 = ((uint32_t *)input_11)[0x2f];
                            *(uint32_t *)(&allocation[0xb4]) = *(uint32_t *)(&input_11[0x16]);
                            *(uint32_t *)(&allocation[0xb6]) = requestor_process_id;
                            *(uint32_t *)(&allocation[0xb8]) = value_17;
                            *(uint32_t *)(&allocation[0xba]) = value_18;
                            creation_time = input_11[0x19];
                            *(uint64_t *)(&allocation[0xbc]) = input_11[0x18];
                            *(uint64_t *)(&allocation[0xc0]) = creation_time;
                            *(uint64_t *)(&allocation[0xc4]) = input_11[0x1a];
                            *(uint32_t *)(&allocation[200]) = *(uint32_t *)(&input_11[0x1b]);
                        }
                        else
                        {
                            *(char *)(&allocation[0x5c]) = 0;
                        }
                        if (input_3 != 1 || !input_13)
                        {
                            *(char *)(&allocation[0xcc]) = 0;
                        }
                        else
                        {
                            *(uint64_t *)(&allocation[0xd0]) = *input_13;
                            *(uint64_t *)(&allocation[0xd4]) = input_13[1];
                            *(uint64_t *)(&allocation[0xd8]) = input_13[2];
                            *(uint64_t *)(&allocation[0xdc]) = input_13[3];
                            *(uint32_t *)(&allocation[0xe4]) = *(uint32_t *)(&input_13[6]);
                            *(uint64_t *)(&allocation[0xe0]) = input_13[5];
                            *(char *)(&allocation[0xcc]) = 1;
                        }
                    }
                }
                else
                {
                    status = MpGetFileWriteHistoryAndReset__create(value_12, ((uint16_t *)data_pointer_3)[1], data_pointer_2, (WD_LAYOUT_1 *)(&allocation[0x5c]));
                    if (status <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x43, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), (uint64_t)KeGetCurrentThread(), status);
                    }
                }
                *(uint32_t *)(&allocation[0x4e]) = input_6;
                *(uint32_t *)(&allocation[0x58]) = input_5;
                *(uint32_t *)(&allocation[0x18]) = input_3;
                *(uint32_t *)(&allocation[0x10]) = (uint32_t)file_name;
                *(uint32_t *)(&allocation[0x14]) = 2;
                if (input_12)
                {
                    *(uint32_t *)(&allocation[0xec]) = *(uint32_t *)(&allocation[0xec]) | 1;
                    *(uint32_t *)(&allocation[0x54]) = *(uint32_t *)(input_12 + 0x38);
                    *(uint32_t *)(&allocation[0x56]) = *(uint32_t *)(input_12 + 0x3c);
                }
                else
                {
                    *(uint32_t *)(&allocation[0xec]) = *(uint32_t *)(&allocation[0xec]) & 0xfffffffe;
                }
                *data_pointer_4 = wide_text;
                *data_pointer_5 = (uint32_t)file_name;
                goto block_2;
            }
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1b, WD_SYMBOL_ADDRESS(WPP_5c114a40c3de3145ebb792b3b9433cba_Traceguids), (uint64_t)KeGetCurrentThread());
            }
            status = -0x3fffff66;
        }
        else
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1a, WD_SYMBOL_ADDRESS(WPP_5c114a40c3de3145ebb792b3b9433cba_Traceguids), (uint64_t)KeGetCurrentThread());
            }
            status = -0x3ffffff3;
        }
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            goto block_2;
        }
        creation_time = 0x44;
    }
    else
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            goto block_2;
        }
        creation_time = 0x40;
    }
    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), creation_time, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), (uint64_t)KeGetCurrentThread(), status);
    block_2:
    if (value_3)
    {
        FltReleaseFileNameInformation();
    }

    return;
}

void MpDlpPreCreate(int64_t data, WD_LAYOUT_39 *input, WD_LAYOUT_75 *input_2)
{
    uint32_t value;
    uint32_t event_id[2];
    char byte_value;
    char buffer[7];
    uint64_t process_context;
    uint64_t process_context_2;
    uint64_t value_2;
    uint32_t value_3;
    int32_t status;
    int64_t requestor_process;
    uint16_t *wide_text;
    uint16_t *wide_text_2;
    uint64_t process_context_3;
    uint64_t process_context_4;
    int64_t file_name;
    event_id[0] = 0;
    file_name = 0;
    process_context_4 = 0;
    requestor_process = MpGetRequestorProcess();
    process_context_3 = 0;
    if (requestor_process)
    {
        status = MpGetProcessContextByObject(requestor_process, &process_context_4);
        process_context_3 = process_context_4;
        if (0 <= status)
        {
            if (*(int32_t *)(process_context_4 + 0xf0) != 1)
            {
                status = FltGetFileNameInformation(data, 0x102, &file_name);
                value_3 = (uint32_t)(value_2 >> 0x20);
                if (0 <= status)
                {
                    value = input_2->field_0x54;
                    if (value & 0x10)
                    {
                        wide_text = (uint16_t *)(file_name + 8);
                        status = MpDlpCheckOperation(data, input, process_context_3, value, ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)1 & 0xffffffffULL, wide_text, event_id);
                        value_3 = (uint32_t)((uint64_t)wide_text >> 0x20);
                    }
                    else
                    {
                        if (!(value >> 0xb & 1))
                        {
                            goto block_1;
                        }
                        process_context_2 = process_context_3;
                        if (*(int32_t *)(process_context_3 + 0xf0) == 3)
                        {
                            buffer[0] = 0;
                            byte_value = 0;
                            process_context_4 &= 0xffffffff00000000;
                            requestor_process = PsReferenceImpersonationToken((uint64_t)KeGetCurrentThread(), buffer, &byte_value, &process_context_4);
                            if (requestor_process)
                            {
                                process_context = 0;
                                if (0 <= (int32_t)MpDlpGetProcessContextFromTokenAttribute(requestor_process, &process_context))
                                {
                                    if (process_context != process_context_3)
                                    {
                                        process_context_2 = process_context;
                                    }
                                    else
                                    {
                                        MpReleaseProcessContext(process_context);
                                    }
                                }
                                PsDereferenceImpersonationToken(requestor_process);
                            }
                        }
                        wide_text = (uint16_t *)(file_name + 8);
                        status = MpDlpCheckOperation(data, input, process_context_2, input_2->field_0x54, value_2 & 0xffffffff00000000, wide_text, event_id);
                        value_3 = (uint32_t)((uint64_t)wide_text >> 0x20);
                        if (process_context_2 != process_context_3)
                        {
                            MpReleaseProcessContext(process_context_2);
                        }
                    }
                    if (status == 2)
                    {
                        wide_text_2 = L"remote device";
                        if (!(input_2->field_0x54 & 0x10))
                        {
                            wide_text_2 = L"external device";
                        }
                        MpLogPrintfW(L"[DLP-filter] Denied Process \'%wZ\' (pid = %#x) from opening file \'%wZ\' for write on %ws, reason: %d.", *(uint64_t *)(process_context_3 + 0x80), *(uint32_t *)(process_context_3 + 0x18), *(int64_t *)(*(int64_t *)(data + 0x10) + 8) + 0x58, wide_text_2, ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)event_id[0] & 0xffffffffULL);
                        MpDlpBlockActionToNtStatus(process_context_3, event_id, (uint32_t *)(data + 0x18));
                        *(uint64_t *)(data + 0x20) = 0;
                    }
                }
                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x6c, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), *(uint64_t *)(data + 8), ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
                }
            }
        }
        else
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x6b, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), *(uint64_t *)(data + 8), (uint64_t)value_2 & 0xffffffff00000000 | (uint64_t)status & 0xffffffff);
            }
            process_context_3 = process_context_4;
        }
    }
    block_1:
    if (file_name)
    {
        FltReleaseFileNameInformation();
    }

    if (process_context_3)
    {
        MpReleaseProcessContext(process_context_3);
    }
    return;
}

void MpHardenSectorWrites(void *input, WD_LAYOUT_76 *input_2)
{
    int64_t process_context;
    int32_t status;
    uint64_t requestor_process;
    uint64_t value_2;
    WD_UNICODE_STRING_VALUE *record;
    int64_t process_context_2 = 0;
    int64_t instance_context = 0;
    uint64_t current_thread;
    requestor_process = MpGetRequestorProcess();
    if (!(*(uint32_t *)(MpData + 0x360) & 8) || !requestor_process || *__imp_PsInitialSystemProcess == requestor_process || (requestor_process == *(int64_t *)(MpData + 0xe8) || !(*(uint32_t *)(*(int64_t *)(((int64_t *)input)[2] + 0x18) + 0x10) & 0xd0056)))
    {
        goto block_2;
    }
    status = MpGetProcessContextByObject(requestor_process, &process_context_2);
    process_context = process_context_2;
    if (0 <= status)
    {
        if (!(*(uint32_t *)(process_context_2 + 0x34) & 8) && *(uint32_t *)(process_context_2 + 0x38) >> 0x11 & 1)
        {
            if (!(*(uint32_t *)(process_context_2 + 0x38) >> 0x12 & 1))
            {
                MpRemoveWriteAccess(input);
            }
            status = FltGetInstanceContext(input_2->field_0x18, &instance_context);
            if (0 <= status)
            {
                record = &WdCreateStorage;
                if (((WD_UNICODE_STRING_VALUE *)(instance_context + 0x18))->Length)
                {
                    record = (WD_UNICODE_STRING_VALUE *)(instance_context + 0x18);
                }
                status = MpFgSendNotification(process_context, record, (uint64_t)requestor_process & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
                if (status <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    current_thread = (uint64_t)KeGetCurrentThread();
                    value_2 = 0x5c;
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), current_thread, status);
                }
            }
            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                value_2 = 0x5b;
                goto block_1;
            }
        }
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        value_2 = 0x5a;
        block_1:
        current_thread = ((uint64_t *)input)[1];

        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), current_thread, status);
    }
    if (process_context)
    {
        MpReleaseProcessContext(process_context);
    }
    block_2:
    if (instance_context)
    {
        FltReleaseContext();
    }

    return;
}

void MpHardenPathOnPreCreate(void *data, WD_LAYOUT_76 *input, uint64_t *input_2, uint64_t *input_3)
{
    uint32_t value;
    uint64_t *process_context;
    int64_t file_name = 0;
    uint64_t extension = 0;
    uint64_t *file_name_2 = NULL;
    char byte_value;
    int64_t file_name_3 = 0;
    bool enabled;
    uint16_t *wide_text;
    uint64_t current_thread;
    uint64_t *file_object = NULL;
    char byte_value_2;
    uint64_t value_2;
    uint64_t *process_context_2;
    uint64_t *data_pointer;
    uint64_t *data_pointer_2;
    uint32_t value_3;
    uint64_t **data_pointer_3;
    char byte_value_3 = '\0';
    uint64_t *data_pointer_4;
    uint32_t value_4;
    char byte_value_4;
    WD_LAYOUT_76 *record;
    uint64_t *data_pointer_5;
    int32_t status;
    uint32_t process_id;
    int64_t requestor_process;
    uint64_t *data_pointer_6;
    uint64_t value_6;
    value_4 = *(uint32_t *)(MpData + 0x364) & 0x4000;
    process_context = NULL;
    data_pointer_4 = input_3;
    record = input;
    data_pointer_5 = input_2;
    requestor_process = MpGetRequestorProcess();
    process_context_2 = file_object;
    if (!requestor_process || (process_context_2 = NULL, *__imp_PsInitialSystemProcess == requestor_process) || requestor_process == *(int64_t *)(MpData + 0xe8))
    {
        goto block_6;
    }
    status = MpGetProcessContextByObject(requestor_process, &process_context);
    process_context_2 = process_context;
    if (status <= -1)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            current_thread = ((uint64_t *)data)[1];
            value_6 = 99;
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_6, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), current_thread, (uint64_t)((uint64_t)data_pointer) & 0xffffffff00000000 | (uint64_t)status & 0xffffffff);
        }
        goto block_5;
    }
    data_pointer = (uint64_t *)(((uint64_t)((uint64_t)((uint64_t)data_pointer >> 8)) & 0xffffffffffffffULL) << 8 | (uint64_t)(*(int32_t *)(&input_2[0xf]) == 0xd) & 0xffULL);
    byte_value_2 = MpCheckForAmHardening(data, input, input_2, process_context, data_pointer);
    if (*(uint32_t *)(MpData + 0x360) & 8)
    {
        if (((uint32_t *)process_context_2)[0xd] & 8)
        {
            enabled = 0;
        }
        else if (*(uint32_t *)(&process_context_2[7]) >> 0x11 & 1)
        {
            enabled = (bool)(~(uint8_t)(*(uint32_t *)(&process_context_2[7]) >> 0x14) & 1);
        }
        else
        {
            enabled = 0;
        }
    }
    else
    {
        enabled = 0;
    }
    if (!byte_value_2 && !enabled)
    {
        goto block_6;
    }
    value = *(uint32_t *)(((int64_t *)data)[2] + 0x20);
    if (value >> 0x18 == 1 && (!(value >> 0xc & 1) && !(*(uint32_t *)(*(int64_t *)(((int64_t *)data)[2] + 0x18) + 0x10) & 0x2000000) && byte_value_2))
    {
        *data_pointer_4 = *data_pointer_4 | 0x10;
    }
    if (*(int32_t *)(MpData + 0x1010) && !((value >> 0x18) - 1 & 0xfffffffd) && (!(value >> 0xc & 1) && (!(*(uint32_t *)(*(int64_t *)(((int64_t *)data)[2] + 0x18) + 0x10) & 0x2000000) && enabled)))
    {
        *data_pointer_4 = *data_pointer_4 | 0x8000;
    }
    value_2 = *data_pointer_4;
    if (((uint32_t)value_2 & 0x8010) == 0x8010 || value_2 & 0x10 && !enabled || value_2 >> 0xf & 1 && !byte_value_2)
    {
        goto block_6;
    }
    *data_pointer_4 = value_2 & 0xffffffffffff7fef;
    if (*(int32_t *)(&data_pointer_5[0xf]) == 0xd)
    {
        byte_value = '\0';
        status = FltGetFileNameInformation(data, 0x102, &file_name);
        if (0 <= status)
        {
            data_pointer = &extension;
            status = MpIsLoopbackByName(record, file_name, &byte_value, &file_name_2, data_pointer);
            if (0 <= status)
            {
                *data_pointer_4 = *data_pointer_4 | 0x1000;
                if (!byte_value && !enabled)
                {
                    goto block_6;
                }
                goto block_4;
            }
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                current_thread = (uint64_t)KeGetCurrentThread();
                value_6 = 0x65;
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_6, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), current_thread, (uint64_t)((uint64_t)data_pointer) & 0xffffffff00000000 | (uint64_t)status & 0xffffffff);
            }
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            current_thread = (uint64_t)KeGetCurrentThread();
            value_6 = 100;
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_6, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), current_thread, (uint64_t)((uint64_t)data_pointer) & 0xffffffff00000000 | (uint64_t)status & 0xffffffff);
        }
        goto block_5;
    }
    block_4:
    if (file_name_2 || (status = FltGetFileNameInformation(data, 0x101, &file_name_3), 0 <= status))
    {
        requestor_process = file_name_3;
        data_pointer_2 = file_name_2;
        if (byte_value_2)
        {
            if (value_4)
            {
                if (*(uint32_t *)(((int64_t *)data)[2] + 0x20) & 1 || (byte_value = '\0', *(uint8_t *)(((int64_t *)data)[2] + 6) & 4))
                {
                    byte_value = '\x01';
                }
                if (file_name_2)
                {
                    data_pointer_6 = file_object;
                }
                else
                {
                    file_object = (uint64_t *)record->field_0x18;
                    data_pointer_6 = data_pointer_5;
                }
                if (MpFsHardeningData && process_context_2 && (file_name_3 || file_name_2))
                {
                    data_pointer_3 = &process_context;
                    process_context = (uint64_t *)((uint64_t)process_context & 0xffffffff00000000);
                    byte_value_4 = FsHardeningMatch(file_name_3, file_name_2, extension, file_object, data_pointer_6);
                    data_pointer = data_pointer_6;
                    if (byte_value_4)
                    {
                        byte_value_2 = '\0';
                        if ((uint64_t)process_context & 1)
                        {
                            byte_value_2 = byte_value_4;
                        }
                        if (!((uint64_t)process_context & 2))
                        {
                            goto block_1;
                        }
                        MpTraceFsHardeningNotification(((uint64_t)((uint64_t)((uint32_t)((uint64_t)process_context >> 8))) & 0xffffffffffffffULL) << 8 | (uint64_t)1 & 0xffULL, (uint8_t)byte_value_2, (WD_LAYOUT_77 *)process_context_2[0x10], requestor_process, data_pointer_2, (uint32_t)value_3 & 0xffffff00 | (uint32_t)byte_value & 0xff, data_pointer_3);
                        byte_value_2 = byte_value_2 == '\0';
                        data_pointer = data_pointer_2;
                    }
                    else
                    {
                        byte_value_2 = '\0';
                    }
                }
                else
                {
                    byte_value_2 = 0;
                    block_1:
                    byte_value_2 = byte_value_2 == '\0';
                }
            }
            else
            {
                byte_value_2 = MpIsAMPath(process_context_2, file_name_3, file_name_2);
            }
            if (!byte_value_2)
            {
                goto block_3;
            }
            ((uint32_t *)data)[6] = WD_STATUS_ACCESS_DENIED;
            ((uint64_t *)data)[4] = 0;
            block_2:
            value_2 = 0;

            wide_text = L"CFA";
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
            {
                PsGetCurrentProcessId();
                WPP_SF_ZZDS(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x68);
            }
            if (!byte_value_3 && (wide_text = L"DynamicFsHardening", !value_4))
            {
                wide_text = L"FsHardening";
            }
            if (process_context_2)
            {
                value_2 = process_context_2[0x10];
            }
            process_id = PsGetCurrentProcessId();
            MpLogPrintfW(L"[Mini-filter] Denied access to file  [%wZ] from process [%wZ][Pid:%u] on Pre-Create. Reason: %ws.", *(int64_t *)(((int64_t *)data)[2] + 8) + 0x58, value_2, process_id, wide_text);
            goto block_6;
        }
        block_3:
        if (enabled)
        {
            file_object = file_name_2;
            if (!file_name_2)
            {
                file_object = (uint64_t *)(file_name_3 + 8);
            }
            byte_value_2 = MpApplyFolderGuard(data, record, process_context_2, file_object, (uint64_t)data_pointer & 0xffffffffffffff00);
            if (byte_value_2)
            {
                byte_value_3 = byte_value_2;
                MpRemoveWriteAccess(data);
            }
            byte_value_3 = byte_value_2;
            if (byte_value_2)
            {
                goto block_2;
            }
        }
    }
    else if (status != -0x3fffff2c && status != -0x3fffffc6)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            current_thread = (uint64_t)KeGetCurrentThread();
            value_6 = 0x67;
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_6, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), current_thread, (uint64_t)((uint64_t)data_pointer) & 0xffffffff00000000 | (uint64_t)status & 0xffffffff);
        }
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
    {
        current_thread = (uint64_t)KeGetCurrentThread();
        value_6 = 0x66;
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_6, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), current_thread, (uint64_t)((uint64_t)data_pointer) & 0xffffffff00000000 | (uint64_t)status & 0xffffffff);
    }

    block_5:
    if (status == -0x3ffffee0 || status == -0x3fffffb5)
    {
        ((int32_t *)data)[6] = status;
        ((uint64_t *)data)[4] = 0;
    }

    block_6:
    data_pointer_4[1] = (uint64_t)file_name_2;

    data_pointer_4[2] = extension;
    if (process_context_2)
    {
        MpReleaseProcessContext(process_context_2);
    }
    if (file_name_3)
    {
        FltReleaseFileNameInformation();
    }
    if (file_name)
    {
        FltReleaseFileNameInformation();
    }
    return;
}

void MpHardenPageFileCreate(void *data, WD_LAYOUT_76 *input)
{
    uint64_t process_context;
    uint64_t value;
    uint64_t process_context_2 = 0;
    int64_t file_name = 0;
    int16_t *trace_argument_2;
    int16_t *wide_text = NULL;
    uint32_t value_2;
    uint64_t value_3;
    uint32_t value_4;
    char byte_value;
    uint64_t *data_pointer;
    uint8_t byte_value_2;
    int32_t status;
    uint32_t process_id;
    uint32_t process_id_2;
    int64_t requestor_process;
    uint64_t value_6;
    uint64_t value_7;
    if (data && input && !(*(char *)(((int64_t *)data)[2] + 4)) && (*(uint8_t *)(((int64_t *)data)[2] + 6) & 2 && WdDataStorage23 && (requestor_process = MpGetRequestorProcess(), requestor_process && requestor_process != *(int64_t *)(MpData + 0xe8))))
    {
        status = MpGetProcessContextByObject(requestor_process, &process_context_2);
        process_context = process_context_2;
        if (0 <= status)
        {
            value_7 = value_3 & 0xffffffffffffff00;
            value_2 = *(uint32_t *)(MpData + 0x364) & 0x4000;
            byte_value = MpCheckForAmHardening(data, input, 0, process_context_2, value_7);
            process_id = (uint32_t)(value_7 >> 0x20);
            if (byte_value)
            {
                status = FltGetFileNameInformation(data, 0x101, &file_name);
                requestor_process = file_name;
                process_id_2 = (uint32_t)((uint64_t)data_pointer >> 0x20);
                if (0 <= status)
                {
                    if (value_2)
                    {
                        if (MpFsHardeningData && process_context && file_name)
                        {
                            data_pointer = &process_context_2;
                            process_context_2 &= 0xffffffff00000000;
                            value = 0;
                            process_id = 0;
                            value_6 = file_name;
                            byte_value_2 = FsHardeningMatch(file_name, NULL, NULL, input->field_0x18, NULL);
                            value_7 = (uint64_t)value_6 & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
                            if (byte_value_2)
                            {
                                byte_value_2 = -((process_context_2 & 1) != 0) & byte_value_2;
                                if (process_context_2 & 2)
                                {
                                    process_id = 0;
                                    MpTraceFsHardeningNotification(value_7, (uint64_t)value & 0xffffffffffffff00 | (uint64_t)byte_value_2 & 0xff, *(WD_LAYOUT_77 **)(process_context + 0x80), requestor_process, NULL, value_4 & 0xffffff00, data_pointer);
                                }
                                value_7 = byte_value_2;
                            }
                        }
                        else
                        {
                            value_7 = 0;
                        }
                        process_id_2 = (uint32_t)((uint64_t)data_pointer >> 0x20);
                        byte_value = (char)value_7 == '\0';
                    }
                    else
                    {
                        byte_value = MpIsAMPath(process_context, file_name, NULL);
                    }
                    if (byte_value)
                    {
                        ((uint32_t *)data)[6] = WD_STATUS_ACCESS_DENIED;
                        ((uint64_t *)data)[4] = 0;
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                        {
                            if (process_context)
                            {
                                trace_argument_2 = *(int16_t **)(process_context + 0x80);
                            }
                            else
                            {
                                trace_argument_2 = wide_text;
                            }
                            process_id = PsGetCurrentProcessId();
                            WPP_SF_ZZDd(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x62, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), (int16_t *)(*(int64_t *)(((int64_t *)data)[2] + 8) + 0x58), trace_argument_2, process_id, ((uint64_t)process_id_2 & 0xffffffffULL) << 32 | (uint64_t)((uint32_t)(value_2 != 0)) & 0xffffffffULL);
                            process_id = (uint32_t)((uint64_t)trace_argument_2 >> 0x20);
                        }
                        if (process_context)
                        {
                            wide_text = *(int16_t **)(process_context + 0x80);
                        }
                        process_id_2 = PsGetCurrentProcessId();
                        MpLogPrintfW(L"[Mini-filter] Denied access to file [%wZ] from process [%wZ][Pid:%u]. DynamicFsHardeningEnabled[%d].", *(int64_t *)(((int64_t *)data)[2] + 8) + 0x58, wide_text, process_id_2, ((uint64_t)process_id & 0xffffffffULL) << 32 | (uint64_t)((uint32_t)(value_2 != 0)) & 0xffffffffULL);
                    }
                }
                else
                {
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x61, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)process_id & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
                    }
                    if (status == -0x3ffffee0 || status == -0x3fffffb5)
                    {
                        ((int32_t *)data)[6] = status;
                        ((uint64_t *)data)[4] = 0;
                    }
                }
            }
            if (process_context)
            {
                MpReleaseProcessContext(process_context);
            }
            if (file_name)
            {
                FltReleaseFileNameInformation();
            }
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x60, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), ((uint64_t *)data)[1], (uint64_t)value_3 & 0xffffffff00000000 | (uint64_t)status & 0xffffffff);
        }
    }
    return;
}

void MpPreCreate(void *data, void *objects, uint64_t *completion_context)
{
    uint32_t *trace_argument_2;
    uint64_t value;
    uint64_t value_2;
    int64_t value_3;
    int64_t file_name;
    int64_t instance_context;
    uint32_t values[2];
    char buffer_2[6];
    char buffer_3[2];
    uint64_t *trace_argument_2_2;
    uint8_t byte_value;
    uint32_t value_4;
    uint16_t value_5;
    uint64_t value_6;
    int64_t value_7;
    void *data_pointer;
    bool enabled;
    uint64_t value_8;
    uint32_t *data_pointer_2;
    uint32_t *data_pointer_3;
    uint32_t value_9;
    char byte_value_2;
    void *data_pointer_4;
    uint32_t value_10;
    int64_t value_11;
    uint32_t value_12;
    uint32_t value_13;
    int64_t value_14;
    uint16_t value_16;
    int32_t trace_argument_1;
    uint64_t *list_entry;
    int64_t w_p_p__g_l_o_b_a_l__control;
    uint64_t event_id;
    uint64_t value_17;
    value_9 = (uint32_t)((uint64_t)value_8 >> 0x20);
    instance_context = 0;
    list_entry = NULL;
    value_2 = 0;
    w_p_p__g_l_o_b_a_l__control = ((int64_t *)data)[2];
    value = 0;
    value_4 = *(uint32_t *)(w_p_p__g_l_o_b_a_l__control + 0x20);
    value_6 = *(uint64_t *)(w_p_p__g_l_o_b_a_l__control + 8);
    value_10 = *(uint32_t *)(*(int64_t *)(w_p_p__g_l_o_b_a_l__control + 0x18) + 0x10);
    data_pointer_4 = objects;
    trace_argument_2_2 = completion_context;
    if (!value_6)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xb, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), ((uint64_t *)data)[1]);
        }
        return;
    }
    trace_argument_2 = (uint32_t *)(value_6 + 0x58);
    IoGetStackLimits(&value_2, &value);
    if (value_2 < value_6 && value_6 < value)
    {
        return;
    }
    byte_value = *(uint8_t *)(((int64_t *)data)[2] + 6);
    if (byte_value & 2)
    {
        if (MpHardenPageFileCreate(data, objects) != 0x1c0001)
        {
            return;
        }
    }
    else
    {
        if (byte_value & 4)
        {
            return;
        }
        if (*(uint32_t *)(MpData + 0x360) & 4)
        {
            event_id = ((uint64_t *)objects)[1];
            value_3 = 0;
            file_name = 0;
            values[0] = 0;
            if ((int32_t)FltGetEcpListFromCallbackData(event_id, data, &value_3) < 0 || !value_3)
            {
                goto block_1;
            }
            data_pointer_2 = values;
            trace_argument_1 = FltFindExtraCreateParameter(event_id, value_3, WD_SYMBOL_ADDRESS(GUID_ECP_CSV_DOWN_LEVEL_OPEN), &file_name, data_pointer_2);
            value_9 = (uint32_t)((uint64_t)data_pointer_2 >> 0x20);
            if (trace_argument_1 < 0 || (byte_value_2 = FltIsEcpFromUserMode(event_id, file_name), byte_value_2))
            {
                goto block_1;
            }
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4))
            {
                return;
            }
            event_id = 0xc;
            w_p_p__g_l_o_b_a_l__control = WPP_GLOBAL_Control;
            WPP_SF_qZ(*(uint64_t *)(w_p_p__g_l_o_b_a_l__control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), ((uint64_t *)data)[1], trace_argument_2);
            return;
        }
        block_1:
        if (*(uint32_t *)(MpData + 0x360) & 0x40)
        {
            event_id = ((uint64_t *)objects)[1];
            value_3 = 0;
            file_name = 0;
            values[0] = 0;
            if (0 <= (int32_t)FltGetEcpListFromCallbackData(event_id, data, &value_3) && value_3)
            {
                data_pointer_2 = values;
                trace_argument_1 = FltFindExtraCreateParameter(event_id, value_3, WD_SYMBOL_ADDRESS(GUID_ECP_MSSECFLT_OPEN), &file_name, data_pointer_2);
                value_9 = (uint32_t)((uint64_t)data_pointer_2 >> 0x20);
                if (0 <= trace_argument_1 && (byte_value_2 = FltIsEcpFromUserMode(event_id, file_name), !byte_value_2))
                {
                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4))
                    {
                        return;
                    }
                    event_id = 0xd;
                    w_p_p__g_l_o_b_a_l__control = WPP_GLOBAL_Control;
                    WPP_SF_qZ(*(uint64_t *)(w_p_p__g_l_o_b_a_l__control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), ((uint64_t *)data)[1], trace_argument_2);
                    return;
                }
            }
            event_id = ((uint64_t *)objects)[1];
            value_3 = 0;
            file_name = 0;
            values[0] = 0;
            if (0 <= (int32_t)FltGetEcpListFromCallbackData(event_id, data, &value_3) && value_3)
            {
                data_pointer_2 = values;
                trace_argument_1 = FltFindExtraCreateParameter(event_id, value_3, WD_SYMBOL_ADDRESS(GUID_WDD_ECP_WDDEVFLT_OPEN), &file_name, data_pointer_2);
                value_9 = (uint32_t)((uint64_t)data_pointer_2 >> 0x20);
                if (0 <= trace_argument_1 && (byte_value_2 = FltIsEcpFromUserMode(event_id, file_name), !byte_value_2))
                {
                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4))
                    {
                        return;
                    }
                    event_id = 0xe;
                    w_p_p__g_l_o_b_a_l__control = WPP_GLOBAL_Control;
                    WPP_SF_qZ(*(uint64_t *)(w_p_p__g_l_o_b_a_l__control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), ((uint64_t *)data)[1], trace_argument_2);
                    return;
                }
            }
        }

        event_id = ((uint64_t *)objects)[1];
        value_3 = 0;
        file_name = 0;
        values[0] = 0;
        if (0 <= (int32_t)FltGetEcpListFromCallbackData(event_id, data, &value_3) && value_3)
        {
            data_pointer_2 = values;
            trace_argument_1 = FltFindExtraCreateParameter(event_id, value_3, WD_SYMBOL_ADDRESS(GUID_MP_ECP_QUERY_EA), &file_name, data_pointer_2);
            value_9 = (uint32_t)((uint64_t)data_pointer_2 >> 0x20);
            if (0 <= trace_argument_1 && (byte_value_2 = FltIsEcpFromUserMode(event_id, file_name), !byte_value_2))
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                {
                    WPP_SF_qZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xf, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), ((uint64_t *)data)[1], trace_argument_2);
                }
                MpHandleQueryEaEcpPreCreate(data, objects);
                *trace_argument_2_2 = 0;
                return;
            }
        }
        w_p_p__g_l_o_b_a_l__control = MpData;
        value_7 = MpData + 0x380;
        *(int32_t *)(MpData + 0x394) = *(int32_t *)(MpData + 0x394) + 1;
        list_entry = (uint64_t *)ExpInterlockedPopEntrySList(value_7);
        if (!list_entry)
        {
            *(int32_t *)(w_p_p__g_l_o_b_a_l__control + 0x398) = *(int32_t *)(w_p_p__g_l_o_b_a_l__control + 0x398) + 1;
            list_entry = (uint64_t *)(*__guard_dispatch_icall_fptr)(*(uint32_t *)(w_p_p__g_l_o_b_a_l__control + 0x3a4), *(uint32_t *)(w_p_p__g_l_o_b_a_l__control + 0x3ac), *(uint32_t *)(w_p_p__g_l_o_b_a_l__control + 0x3a8));
        }
        if (!list_entry)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x10, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), ((uint64_t *)data)[1]);
            }
            return;
        }
        memset(list_entry, 0, (char *)0xf8);
        event_id = *(uint64_t *)(MpData + 0x10);
        file_name = 0;
        value_3 = 0;
        values[0] = 0;
        if (0 <= (int32_t)FltGetEcpListFromCallbackData(event_id, data, &file_name) && file_name)
        {
            data_pointer_2 = values;
            trace_argument_1 = FltFindExtraCreateParameter(event_id, file_name, WD_SYMBOL_ADDRESS(GUID_ECP_SRV_OPEN), &value_3, data_pointer_2);
            value_9 = (uint32_t)((uint64_t)data_pointer_2 >> 0x20);
            if (0 <= trace_argument_1)
            {
                byte_value_2 = FltIsEcpFromUserMode(event_id, value_3);
                value_9 = (uint32_t)((uint64_t)data_pointer_2 >> 0x20);
                if (!byte_value_2)
                {
                    byte_value_2 = MpIsPotentialRemoteOpen(data);
                    value_9 = (uint32_t)((uint64_t)data_pointer_2 >> 0x20);
                    if (byte_value_2)
                    {
                        if (*(uint32_t *)(MpData + 0x364) >> 0xb & 1)
                        {
                            *(char *)(&list_entry[3]) = 1;
                            trace_argument_1 = MpMjCreateGetUserSid(data, (int64_t)list_entry + 0xa2);
                            if (0 <= trace_argument_1)
                            {
                                *(uint32_t *)((int64_t)list_entry + 0x1c) = *(uint32_t *)((int64_t)list_entry + 0x1c) | 2;
                            }
                            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                            {
                                event_id = ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)trace_argument_1 & 0xffffffffULL;
                                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x11, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), ((uint64_t *)data)[1], event_id);
                                value_9 = (uint32_t)((uint64_t)event_id >> 0x20);
                            }
                            event_id = ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)0x41 & 0xffffffffULL;
                            buffer_3[0] = '\0';
                            buffer_2[0] = '\0';
                            trace_argument_1 = MpIsSrvClientLocalhost(value_3, values[0], buffer_3, &list_entry[4], event_id, buffer_2);
                            value_9 = (uint32_t)((uint64_t)event_id >> 0x20);
                            if (0 <= trace_argument_1 && buffer_3[0])
                            {
                                *list_entry = *list_entry | 0x2000;
                            }
                            if (buffer_2[0])
                            {
                                *(uint32_t *)((int64_t)list_entry + 0x1c) = *(uint32_t *)((int64_t)list_entry + 0x1c) | 1;
                            }
                        }
                        else
                        {
                            value_17 = (uint64_t)data_pointer_2 & 0xffffffff00000000;
                            buffer_2[0] = '\0';
                            *(char *)(&list_entry[3]) = 0;
                            trace_argument_1 = MpIsSrvClientLocalhost(value_3, values[0], buffer_2, 0, value_17, NULL);
                            value_9 = (uint32_t)(value_17 >> 0x20);
                            if (0 <= trace_argument_1 && buffer_2[0])
                            {
                                *list_entry = *list_entry | 0x2000;
                            }
                        }
                    }
                }
            }
        }
        event_id = *(uint64_t *)(MpData + 0x10);
        file_name = 0;
        value_3 = 0;
        values[0] = 0;
        if (0 <= (int32_t)FltGetEcpListFromCallbackData(event_id, data, &file_name) && file_name)
        {
            data_pointer_2 = values;
            trace_argument_1 = FltFindExtraCreateParameter(event_id, file_name, WD_SYMBOL_ADDRESS(GUID_ECP_PREFETCH_OPEN), &value_3, data_pointer_2);
            value_9 = (uint32_t)((uint64_t)data_pointer_2 >> 0x20);
            if (0 <= trace_argument_1 && (byte_value_2 = FltIsEcpFromUserMode(event_id, value_3), !byte_value_2))
            {
                *list_entry = *list_entry | 0x20;
                *trace_argument_2_2 = list_entry;
                return;
            }
        }
        data_pointer = data_pointer_4;
        trace_argument_1 = FltGetInstanceContext(((uint64_t *)data_pointer_4)[3], &instance_context);
        if (trace_argument_1 <= -1)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x12, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), ((uint64_t *)data)[1], ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)trace_argument_1 & 0xffffffffULL);
            }
            goto block_9;
        }
        if (*(uint32_t *)(value_6 + 0x50) & 0x400000 && (*list_entry = *list_entry | 1, *(int16_t *)(value_6 + 0x58)) && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            data_pointer_3 = trace_argument_2;
            WPP_SF_qZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x13, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), ((uint64_t *)data)[1], trace_argument_2);
            value_9 = (uint32_t)((uint64_t)data_pointer_3 >> 0x20);
        }
        if (*(uint32_t *)(MpData + 0x360) & 0x10)
        {
            event_id = *(uint64_t *)(MpData + 0x10);
            file_name = 0;
            value_3 = 0;
            values[0] = 0;
            if (0 <= (int32_t)FltGetEcpListFromCallbackData(event_id, data, &file_name) && file_name)
            {
                data_pointer_2 = values;
                trace_argument_1 = FltFindExtraCreateParameter(event_id, file_name, WD_SYMBOL_ADDRESS(GUID_ECP_CREATE_USER_PROCESS), &value_3, data_pointer_2);
                value_9 = (uint32_t)((uint64_t)data_pointer_2 >> 0x20);
                if (0 <= trace_argument_1)
                {
                    byte_value_2 = FltIsEcpFromUserMode(event_id, value_3);
                    data_pointer = data_pointer_4;
                    if (!byte_value_2)
                    {
                        *list_entry = *list_entry | 0x4000;
                    }
                    goto block_2;
                }
            }
            data_pointer = data_pointer_4;
        }
        block_2:
        buffer_3[0] = MpDlpIsEnabled(data, NULL);

        if (value_10 & 0x20d0156 || value_4 >> 0x18 != 1 || (byte_value_2 = buffer_3[0], value_4 >> 0xc & 1))
        {
            if (*(uint8_t *)list_entry & 1)
            {
                MpHardenSectorWrites(data, data_pointer);
                block_3:
                byte_value_2 = buffer_3[0];

                goto block_4;
            }
            trace_argument_1 = MpHardenPathOnPreCreate(data, data_pointer, instance_context, list_entry);
            if (trace_argument_1 == 0x1c0001)
            {
                goto block_9;
            }
            if (0 <= trace_argument_1)
            {
                goto block_3;
            }
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                event_id = ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)trace_argument_1 & 0xffffffffULL;
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x14, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), ((uint64_t *)data)[1], event_id);
                value_9 = (uint32_t)((uint64_t)event_id >> 0x20);
            }
            byte_value_2 = buffer_3[0];
        }
        else
        {
            block_4:
            ;
        }
        data_pointer = data_pointer_4;
        if (0 <= *(int32_t *)(instance_context + 0x50))
        {
            if (byte_value_2)
            {
                block_5:
                if (!(value_4 & 1) && !(*(uint8_t *)list_entry & 1) && value_4 >> 0x18 != 1 && *(uint32_t *)(instance_context + 0x54) & 0x810)
                {
                    trace_argument_1 = MpDlpPreCreate(data, data_pointer_4, instance_context);
                    if (trace_argument_1 == 2)
                    {
                        if (0 <= ((int32_t *)data)[6])
                        {
                            ((uint32_t *)data)[6] = WdDlpStorage2;
                        }
                        goto block_9;
                    }
                    *list_entry = *list_entry | 0x800;
                }
            }
            enabled = 0;
            if (!(*(int16_t *)trace_argument_2))
            {
                if (*(int64_t *)(value_6 + 0x40))
                {
                    file_name = 0;
                    trace_argument_1 = FltGetFileNameInformation(data, 0x102, &file_name);
                    if (trace_argument_1 == -0x3ffffd92)
                    {
                        w_p_p__g_l_o_b_a_l__control = *(int64_t *)(*(int64_t *)(value_6 + 0x40) + 0x10);
                        trace_argument_2_2 = NULL;
                        value_14 = 0;
                        if (w_p_p__g_l_o_b_a_l__control)
                        {
                            trace_argument_2_2 = (uint64_t *)((uint64_t)(((uint64_t)(*(uint16_t *)(w_p_p__g_l_o_b_a_l__control + 6)) & 0xffffULL) << 16 | (uint64_t)(*(uint16_t *)(w_p_p__g_l_o_b_a_l__control + 6)) & 0xffffULL));
                            value_14 = w_p_p__g_l_o_b_a_l__control + 0x20;
                        }
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                        {
                            WPP_SF_qZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x15, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), ((uint64_t *)data)[1], &trace_argument_2_2);
                        }
                        goto block_9;
                    }
                    if (0 <= trace_argument_1)
                    {
                        value_3 = *(int64_t *)(file_name + 8);
                        value_12 = *(uint32_t *)(file_name + 0x10);
                        value_13 = *(uint32_t *)(file_name + 0x14);
                        if (!MpIsUnNamedDataAttribute(&value_3))
                        {
                            *list_entry = *list_entry | 2;
                        }
                        FltReleaseFileNameInformation(file_name);
                        enabled = *(int16_t *)trace_argument_2 == 0;
                        goto block_7;
                    }
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        event_id = ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)trace_argument_1 & 0xffffffffULL;
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x16, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), ((uint64_t *)data)[1], event_id);
                        value_9 = (uint32_t)((uint64_t)event_id >> 0x20);
                    }
                }
                enabled = *(int16_t *)trace_argument_2 == 0;
            }
            block_7:
            if (!enabled && !(value_4 >> 0xd & 1))
            {
                file_name = *(int64_t *)trace_argument_2;
                w_p_p__g_l_o_b_a_l__control = *(int64_t *)(value_6 + 0x60);
                value_6 = *trace_argument_2;
                value_5 = (uint16_t)(*trace_argument_2);
                while (value_11 = w_p_p__g_l_o_b_a_l__control, value_5)
                {
                    value_5 = (uint16_t)value_6;
                    if (*(int16_t *)(w_p_p__g_l_o_b_a_l__control + -2 + (value_6 & 0xfffe)) != 0x5c)
                    {
                        if (value_5)
                        {
                            value_5 >>= 1;
                            value_16 = value_5;
                            if (value_5)
                            {
                                goto block_10;
                            }
                            goto block_11;
                        }
                        break;
                    }
                    value_5 -= 2;
                    value_6 = value_5;
                }

                block_6:
                *list_entry = *list_entry | 2;
            }

            block_8:
            if (value_10 & 0x2000021)
            {
                *list_entry = *list_entry | 0x40;
            }
            else if (value_10 & 0x106)
            {
                *list_entry = *list_entry | 4;
            }
            else if (value_10 >> 0x10 & 1)
            {
                *list_entry = *list_entry | 0x100;
            }
            else
            {
                if (!(value_10 & 0xc0000))
                {
                    goto block_9;
                }
                *list_entry = *list_entry | 0x400;
            }

            file_name = 0;
            if (*(uint32_t *)(MpData + 0x364) & 0x10 && *(uint32_t *)(MpData + 0x360) & 4)
            {
                if ((*(uint32_t *)(MpData + 0x360) & 0x10 && (*(int64_t *)(MpData + 0xc0) && (event_id = ((uint64_t *)data_pointer)[4], (*__guard_dispatch_icall_fptr)(event_id))) || '\0' > (char)(*(uint32_t *)(MpData + 0x360))) && ((trace_argument_1 = MpAddECP(data, WD_SYMBOL_ADDRESS(GUID_ECP_CREATE_REDIRECTION), *(uint32_t *)(MpData + 0x780), MpRedirectionEcpContextInitializer), 0 > trace_argument_1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control)) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2))
                {
                    WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x16, WD_SYMBOL_ADDRESS(WPP_da25ed7ac0df3f6c27bc2dc1e0325faa_Traceguids), trace_argument_1);
                }
                trace_argument_1 = FltGetInstanceContext(((uint64_t *)data_pointer)[3], &file_name);
                if (0 <= trace_argument_1)
                {
                    if (*(int32_t *)(file_name + 0x78) == 0x1b && WdDataStorage15 == 1 && (trace_argument_1 = MpAddECP(data, WD_SYMBOL_ADDRESS(GUID_ECP_CSV_QUERY_FILE_REVISION), *(uint32_t *)(MpData + 0x780), 0), trace_argument_1 <= -1 && (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)))
                    {
                        WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x17, WD_SYMBOL_ADDRESS(WPP_da25ed7ac0df3f6c27bc2dc1e0325faa_Traceguids), trace_argument_1);
                    }
                    FltReleaseContext(file_name);
                }
                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x18, WD_SYMBOL_ADDRESS(WPP_da25ed7ac0df3f6c27bc2dc1e0325faa_Traceguids), trace_argument_1);
                }
            }
            if (*(int64_t *)(MpData + 0x58) && (value_6 = *list_entry, !(value_6 & 1)))
            {
                value_4 = 9;
                if (buffer_3[0] && !(value_6 & 2))
                {
                    value_4 = (*(uint32_t *)(MpData + 0x360) & 0x800 | 0x1200) >> 9;
                    *list_entry = value_6 | 0x200;
                }
                trace_argument_1 = (*__guard_dispatch_icall_fptr)(*(uint64_t *)(MpData + 0x10), data, value_4);
                if (trace_argument_1 <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x17, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), ((uint64_t *)data)[1], ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)trace_argument_1 & 0xffffffffULL);
                }
            }
        }
        else
        {
            *list_entry = *list_entry | 8;
            if (byte_value_2)
            {
                goto block_5;
            }
            if (!(*list_entry & 0x8010))
            {
                goto block_9;
            }
        }
        *trace_argument_2_2 = list_entry;
        list_entry = NULL;
    }
    block_9:
    if (instance_context)
    {
        FltReleaseContext(instance_context);
    }

    if (list_entry)
    {
        if (list_entry[1])
        {
            MpFreeString(list_entry[1]);
        }
        if (list_entry[2])
        {
            MpFreeString(list_entry[2]);
        }
        w_p_p__g_l_o_b_a_l__control = MpData;
        value_7 = MpData + 0x380;
        *(int32_t *)(MpData + 0x39c) = *(int32_t *)(MpData + 0x39c) + 1;
        value_5 = *(uint16_t *)(w_p_p__g_l_o_b_a_l__control + 0x390);
        if (value_5 <= (uint16_t)ExQueryDepthSList(value_7))
        {
            *(int32_t *)(w_p_p__g_l_o_b_a_l__control + 0x3a0) = *(int32_t *)(w_p_p__g_l_o_b_a_l__control + 0x3a0) + 1;
            (*__guard_dispatch_icall_fptr)(list_entry);
        }
        else
        {
            ExpInterlockedPushEntrySList(value_7, list_entry);
        }
    }
    return;
    while (true)
    {
        value_16 -= 1;
        if (!value_16)
        {
            break;
        }
        block_10:
        if (*(int16_t *)(w_p_p__g_l_o_b_a_l__control + -2 + value_16 * 2ULL) == 0x5c)
        {
            goto block_11;
        }
    }

    block_11:
    while (true)
    {
        value_11 = w_p_p__g_l_o_b_a_l__control;
        if (value_5 <= value_16)
        {
            goto block_8;
        }
        value_17 = value_16;
        value_11 = value_17 * 2 + w_p_p__g_l_o_b_a_l__control;
        if (*(int16_t *)(value_17 * 2 + w_p_p__g_l_o_b_a_l__control) == 0x3a)
        {
            value_7 = w_p_p__g_l_o_b_a_l__control;
            if ((value_6 & 0xffff) + value_17 * -2 == 0xe)
            {
                file_name = 0xe000e;
                value_7 = value_11;
                if (RtlEqualUnicodeString(&file_name, WD_CREATE_UNRECOVERED_ADDRESS2, (uint64_t)w_p_p__g_l_o_b_a_l__control & 0xffffffffffffff00 | (uint64_t)1 & 0xff))
                {
                    goto block_8;
                }
            }
            value_11 = value_7;
            if (value_17 != ((value_6 & 0xffff) >> 1) - 1)
            {
                goto block_6;
            }
            goto block_8;
        }
        value_16 += 1;
    }

}

void MpAmPostCreate(void *data, void *objects, WD_LAYOUT_93 *input, uint64_t input_2, int64_t *input_3)
{
    int64_t *data_pointer;
    void *data_pointer_2;
    uint64_t value;
    uint64_t current_thread;
    uint64_t value_2;
    uint64_t current_thread_2;
    uint64_t value_3;
    uint64_t value_4;
    uint64_t value_5;
    uint64_t value_6;
    void *data_2;
    int64_t thread_process;
    uint64_t *index;
    WD_LAYOUT_92 *buffer;
    int64_t value_8;
    uint32_t value_9;
    char *trace_argument_2;
    uint32_t *lock;
    uint64_t trace_handle;
    int64_t value_10;
    uint16_t value_11;
    uint64_t value_12;
    uint64_t trace_handle_2;
    uint64_t value_13;
    uint32_t *context;
    int64_t context_2;
    uint32_t *lock_2;
    uint32_t values[4];
    int64_t value_14;
    WD_LAYOUT_42 *record;
    uint64_t information_buffer;
    int64_t value_15;
    uint32_t *data_pointer_3;
    uint64_t value_16;
    uint32_t *lock_3;
    void *data_pointer_4;
    uint8_t buffer_3[8];
    int64_t value_17;
    uint8_t byte_value;
    uint32_t value_18;
    uint64_t value_19;
    uint32_t value_20;
    uint32_t *trace_argument_2_2;
    void *data_pointer_5;
    uint32_t **provider;
    void *data_pointer_6;
    uint64_t information_class;
    int16_t *trace_argument_1;
    void *context_3;
    bool enabled;
    int64_t *data_pointer_7;
    char *bytes;
    uint32_t value_21;
    uint32_t value_22;
    uint64_t value_23;
    uint64_t value_24;
    uint64_t value_25;
    void *data_3;
    int32_t trace_argument_1_2;
    uint32_t value_26;
    uint32_t value_27;
    uint64_t value_28;
    char byte_value_2;
    uint32_t value_29;
    int32_t value_30;
    uint64_t provider_2;
    uint8_t *bytes_2;
    uint64_t *allocation;
    uint32_t value_31;
    uint32_t value_32;
    int32_t value_33;
    int32_t value_34;
    char byte_value_3;
    uint32_t value_35;
    void *data_pointer_8;
    int64_t value_36;
    uint32_t **data_pointer_9;
    uint16_t value_37;
    int64_t value_38;
    int64_t value_39;
    uint64_t value_40;
    uint64_t value_41;
    uint64_t value_42;
    int32_t status;
    uint64_t value_43;
    int64_t value_44;
    uint32_t value_45;
    int32_t value_46;
    int64_t *data_pointer_10;
    int64_t value_47;
    void *data_pointer_11;
    uint64_t value_48;
    void *data_pointer_12;
    void *data_pointer_13;
    int32_t value_49;
    void *data_pointer_14;
    void *data_pointer_15;
    int64_t value_50;
    int64_t value_51;
    int64_t value_52;
    int64_t value_53;
    int64_t value_54;
    int64_t value_55;
    int64_t value_56;
    uint64_t current_thread_3;
    data_pointer_7 = input_3;
    value_9 = (uint32_t)((uint64_t)value_24 >> 0x20);
    value_22 = (uint32_t)((uint64_t)value_25 >> 0x20);
    data_pointer_10 = input_3;
    data_pointer_6 = NULL;
    context = NULL;
    context_2 = 0;
    value_27 = 0;
    context_3 = NULL;
    data_pointer_4 = NULL;
    data_pointer_8 = NULL;
    buffer_3[0] = 0;
    value_16 = 0;
    value_40 = 0;
    value_41 = 0;
    value_42 = 0;
    value_43 = 0;
    information_buffer = 0;
    value_3 = 0;
    value_4 = 0;
    value_5 = 0;
    value_6 = 0;
    values[0] = 0;
    data_2 = data_pointer_6;
    data_3 = data;
    provider_2 = input_2;
    if (!(*(uint8_t *)(&input->field_0x0) & 1))
    {
        data_pointer_2 = data_pointer_6;
        data_pointer_5 = data_pointer_6;
        if (*(uint32_t *)(MpData + 0x360) & 0x400)
        {
            data_2 = NULL;
            data_pointer_2 = NULL;
            if (*(int64_t *)(MpData + 0x60))
            {
                data_2 = (void *)(*__guard_dispatch_icall_fptr)(*(uint64_t *)(MpData + 0x10), data, 1, values);
                data_pointer_11 = data_2;
                data_pointer_2 = (void *)((uint64_t)values[0]);
                data_pointer_5 = data_2;
                data = data_3;
            }
        }
        if (data_pointer_5 && (int32_t)data_pointer_2 == 0x48)
        {
            information_buffer = ((uint64_t *)data_2)[1];
            value_3 = ((uint64_t *)data_2)[2];
            value_4 = ((uint64_t *)data_2)[3];
            value_5 = ((uint64_t *)data_2)[4];
            value_6 = ((uint64_t)WdLoadField(&value_6, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)((uint32_t *)data_2)[0xe] & 0xffffffffULL;
            value_21 = ((uint32_t *)data_2)[0xe];
            block_1:
            bytes = &input->field_0x18;

            data_2 = objects;
            MpPostCreateSendFileCreationAsyncMessageIfNeeded(data, objects, provider_2, value_21, bytes);
            context_3 = data_pointer_6;
            if (value_6 & 0x10)
            {
                goto block_36;
            }
            goto block_3;
        }
        value_23 = 0;
        information_class = (uint64_t)((uint64_t)bytes) & 0xffffffff00000000 | (uint64_t)4 & 0xffffffff;
        trace_argument_1_2 = FltQueryInformationFile(((uint64_t *)objects)[3], ((uint64_t *)objects)[4], &information_buffer, 0x28, information_class, 0);
        if (0 <= trace_argument_1_2)
        {
            data = data_3;
            value_21 = (uint32_t)value_6;
            goto block_1;
        }
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            goto block_36;
        }
        trace_handle_2 = (uint64_t)KeGetCurrentThread();
        value_13 = 0x20;
        information_class = (uint64_t)information_class & 0xffffffff00000000 | (uint64_t)trace_argument_1_2 & 0xffffffff;
        thread_process = WPP_GLOBAL_Control;
        value_48 = trace_handle_2;
        block_2:
        trace_handle = *(uint64_t *)(thread_process + 0x18);

        goto block_35;
    }
    block_3:
    data_pointer_2 = data_pointer_6;

    byte_value = 0;
    value_18 = 0;
    if (((int64_t *)objects)[5])
    {
        trace_argument_1_2 = MpTxfGetContext(objects, (uint64_t)((uint64_t)data_2) & 0xffffffffffffff00 | (uint64_t)1 & 0xff, ((int64_t *)objects)[5], &data_pointer_4);
        context_3 = data_pointer_4;
        if (0 <= trace_argument_1_2)
        {
            trace_argument_1_2 = MpTxfIsFileLockByTransaction(objects, data_pointer_4, buffer_3);
            if (trace_argument_1_2 < 0)
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x22, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), trace_argument_1_2);
                }
                goto block_36;
            }
            data_pointer_2 = data_pointer_8;
            data_pointer_6 = context_3;
            byte_value = buffer_3[0];
            value_18 = value_27;
            goto block_5;
        }
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x21, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), trace_argument_1_2);
        }
        block_4:
        context_3 = data_pointer_4;

        goto block_36;
    }
    block_5:
    trace_argument_1_2 = FltGetStreamContext(((uint64_t *)objects)[3], ((uint64_t *)objects)[4], &context);

    data_2 = data_3;
    context_3 = data_pointer_6;
    if (0 <= trace_argument_1_2)
    {
        provider = (uint32_t **)((uint64_t)value_23 & 0xffffffffffffff00 | (uint64_t)byte_value & 0xff);
        trace_argument_2_2 = context;
        trace_argument_1_2 = MpPostCreateUpdateStreamContext(data_3, objects, data_pointer_6, input, context, provider);
        if (trace_argument_1_2 < 0)
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                goto block_36;
            }
            trace_handle_2 = 0x23;
            value_13 = (uint64_t)((uint64_t)trace_argument_2_2) & 0xffffffff00000000 | (uint64_t)trace_argument_1_2 & 0xffffffff;
            information_class = ((uint64_t *)data_2)[1];
            block_6:
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), trace_handle_2, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), information_class, value_13);

            goto block_4;
        }
        block_7:
        data_2 = data_3;

        if (context == BreakOnStream)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                WPP_SF_qqq(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x28, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), ((uint64_t *)data_3)[1], context, ((uint64_t *)objects)[4]);
            }
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                information_class = *(uint64_t *)(&context[0x2c]);
                trace_handle_2 = *(uint64_t *)(WPP_GLOBAL_Control + 0x18);
                trace_argument_2_2 = &context[8];
                record = *(WD_LAYOUT_42 **)(&context[2]);
                WPP_SF_Di(trace_handle_2, 0x29, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), GetMpFileStateWithSeq__create(trace_argument_2_2, record), information_class);
            }
            (*(WD_ROUTINE)swi(3))();
            return;
        }
        if (input->field_0x0 & 0x2000 || *(uint8_t *)(&context[0xc]) & 1)
        {
            goto block_36;
        }
        MpUpdateHandleContextOnPostCreate(data_3, objects, input, &context_2);
        if (context_2)
        {
            if (input->field_0x18)
            {
                WdUnresolvedAtomicBegin();
                context[0x9e] = context[0x9e] + 1;
                WdUnresolvedAtomicEnd();
            }
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2a, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), ((uint64_t *)data_2)[1]);
        }
        thread_process = ((int64_t *)data_2)[4];
        if (thread_process == 2 || !thread_process || thread_process == 3)
        {
            WdUnresolvedAtomicBegin();
            if (context[0xd] == 0xffffffff)
            {
                context[0xd] = (uint32_t)thread_process;
            }
            WdUnresolvedAtomicEnd();
        }
        data_pointer_3 = context;
        if (data_pointer_6)
        {
            if (!(((uint32_t *)data_pointer_6)[0x2a] & 1))
            {
                if (0xfffd <= (uint16_t)(((int16_t *)objects)[1] - 1U))
                {
                    lock_2 = &context[0x30];
                    FltAcquirePushLockShared(lock_2);
                    data_pointer_2 = NULL;
                    if (*(int64_t *)(&data_pointer_3[0x34]))
                    {
                        data_pointer = (int64_t *)(*(int64_t *)(&data_pointer_3[0x34]) + 0x20);
                        WdUnresolvedAtomicBegin();
                        data_pointer_5 = (void *)(*data_pointer);
                        if (data_pointer_5)
                        {
                            data_pointer_2 = data_pointer_5;
                        }
                        else
                        {
                            *data_pointer = 0;
                        }
                        WdUnresolvedAtomicEnd();
                        data_pointer_14 = data_pointer_2;
                    }
                    else
                    {
                        lock = &data_pointer_3[0x2c];
                        WdUnresolvedAtomicBegin();
                        if (*(void **)lock)
                        {
                            data_pointer_2 = *(void **)lock;
                        }
                        else
                        {
                            lock[0] = 0;
                            lock[1] = 0;
                        }
                        WdUnresolvedAtomicEnd();
                        data_pointer_15 = data_pointer_2;
                    }
                    data_pointer_8 = data_pointer_2;
                    FltReleasePushLock(lock_2);
                }
                else
                {
                    data_pointer_2 = NULL;
                    lock = &context[0x2c];
                    WdUnresolvedAtomicBegin();
                    if (*(void **)lock)
                    {
                        data_pointer_2 = *(void **)lock;
                    }
                    else
                    {
                        lock[0] = 0;
                        lock[1] = 0;
                    }
                    WdUnresolvedAtomicEnd();
                    data_pointer_8 = data_pointer_2;
                    data_pointer_13 = data_pointer_2;
                }
                goto block_8;
            }
            status = -0x3fffff1b;
            trace_argument_1_2 = -0x3fffff1b;
            value_31 = 0xc00000e5;
        }
        else
        {
            data_pointer_2 = NULL;
            lock = &context[0x2c];
            WdUnresolvedAtomicBegin();
            if (*(void **)lock)
            {
                data_pointer_2 = *(void **)lock;
            }
            else
            {
                lock[0] = 0;
                lock[1] = 0;
            }
            WdUnresolvedAtomicEnd();
            data_pointer_8 = data_pointer_2;
            data_pointer_12 = data_pointer_2;
            block_8:
            trace_argument_1_2 = 0;

            value_31 = 0;
            status = trace_argument_1_2;
        }
        if (0 <= status)
        {
            if (!(*(uint32_t *)(&input->field_0x0) & 0x104) && ((int64_t *)data_2)[4] == 1 && (value_14 = ((int64_t *)objects)[4], !(*(uint32_t *)(value_14 + 0x50) & 8) && (data_pointer_2 && !(*(uint32_t *)(*(int64_t *)(&context[2]) + 0x54) & 0x10))) && (value_15 = ((int64_t *)data_2)[1], value_15))
            {
                allocation = NULL;
                data_pointer_3 = (uint32_t *)MpSeqDetectCtxLookupEntry(FltAcquirePushLockExclusive(WD_MODULE113_UNRECOVERED_ADDRESS3), value_15);
                thread_process = WdSharedTickCount;
                if (data_pointer_3)
                {
                    if (*(int64_t *)(&data_pointer_3[8]))
                    {
                        ((uint16_t *)data_pointer_3)[0x15] = 0;
                    }
                    *(int64_t *)(&data_pointer_3[8]) = value_14;
                    *(void **)(&data_pointer_3[6]) = data_pointer_2;
                    data_pointer_3[4] = 0;
                    data_pointer_3[5] = 0;
                    value_38 = WdSharedTickCount;
                    thread_process = (uint64_t)((uint32_t)KeQueryTimeIncrement()) * thread_process;
                    thread_process = WdSignedMultiplyHigh(-0x29406b2a1a85bd43, thread_process) + thread_process;
                    value_38 = (thread_process >> 0x17) - (thread_process >> 0x3f);
                    value_37 = (uint16_t)value_38;
                    *(uint16_t *)(&data_pointer_3[10]) = value_37;
                    index = allocation;
                    block_9:
                    data_2 = data_3;

                    block_10:
                    if (index)
                    {
                        ExFreePoolWithTag(index, 0x7473504d);
                    }
                }
                else
                {
                    if (!WdModule113Storage2 && (int32_t)MpSeqDetectCtxAllocResources() <= -1)
                    {
                        index = allocation;
                        goto block_10;
                    }
                    allocation = (uint64_t *)MpAllocatePoolWithTag(1, (char *)0x30, 0x7473504d);
                    thread_process = WdSharedTickCount;
                    if (allocation)
                    {
                        allocation[1] = value_15;
                        allocation[4] = value_14;
                        allocation[3] = data_pointer_2;
                        value_39 = WdSharedTickCount;
                        thread_process = (uint64_t)((uint32_t)KeQueryTimeIncrement()) * thread_process;
                        thread_process = WdSignedMultiplyHigh(-0x29406b2a1a85bd43, thread_process) + thread_process;
                        value_39 = (thread_process >> 0x17) - (thread_process >> 0x3f);
                        value_11 = (uint16_t)value_39;
                        value_26 = ((uint64_t)WdLoadField(&value_26, 2, 2) & 0xffffULL) << 16 | (uint64_t)value_11 & 0xffffULL;
                        *(uint16_t *)(&allocation[5]) = value_11;
                        lock_3 = (uint32_t *)(-1LL << ((uint8_t)WdModule113Storage & 0x1f) & allocation[1]);
                        bytes_2 = (uint8_t *)(&lock_3);
                        thread_process = 8;
                        value_44 = 8;
                        value_50 = 0x4cb2f;
                        while (8 <= thread_process)
                        {
                            value_50 = (((((((value_50 * 0x25 + (uint64_t)(*bytes_2)) * 0x25 + bytes_2[1]) * 0x25 + bytes_2[2]) * 0x25 + bytes_2[3]) * 0x25 + (uint64_t)bytes_2[4]) * 0x25 + (uint64_t)bytes_2[5]) * 0x25 + (uint64_t)bytes_2[6]) * 0x25 + (uint64_t)bytes_2[7];
                            bytes_2 = &bytes_2[8];
                            thread_process -= 8;
                            value_44 = thread_process;
                        }

                        if (thread_process != 1)
                        {
                            if (thread_process == 2)
                            {
                                block_11:
                                value_50 = value_50 * 0x25 + (uint64_t)(*bytes_2);

                                bytes_2 = &bytes_2[1];
                                goto block_16;
                            }
                            if (thread_process == 3)
                            {
                                block_12:
                                value_50 = value_50 * 0x25 + (uint64_t)(*bytes_2);

                                bytes_2 = &bytes_2[1];
                                goto block_11;
                            }
                            if (thread_process == 4)
                            {
                                block_13:
                                value_50 = value_50 * 0x25 + (uint64_t)(*bytes_2);

                                bytes_2 = &bytes_2[1];
                                goto block_12;
                            }
                            if (thread_process == 5)
                            {
                                block_14:
                                value_50 = value_50 * 0x25 + (uint64_t)(*bytes_2);

                                bytes_2 = &bytes_2[1];
                                goto block_13;
                            }
                            if (thread_process == 6)
                            {
                                block_15:
                                value_50 = value_50 * 0x25 + (uint64_t)(*bytes_2);

                                bytes_2 = &bytes_2[1];
                                goto block_14;
                            }
                            if (thread_process == 7)
                            {
                                value_50 = value_50 * 0x25 + (uint64_t)(*bytes_2);
                                bytes_2 = &bytes_2[1];
                                goto block_15;
                            }
                        }
                        else
                        {
                            block_16:
                            value_50 = value_50 * 0x25 + (uint64_t)(*bytes_2);

                            bytes_2 = &bytes_2[1];
                        }
                        value_45 = (uint32_t)value_50 & (WdModule113Storage >> 5) - 1;
                        index = (uint64_t *)(WdModule113Storage2 + value_45 * 8ULL);
                        *allocation = *index;
                        *index = allocation;
                        MpSeqDetectCtx += 1;
                        allocation = NULL;
                        value_51 = value_50;
                        value_52 = value_50;
                        value_53 = value_50;
                        if (MpSeqDetectCtx != 1 || WdModule113Storage7)
                        {
                            index = NULL;
                        }
                        else
                        {
                            KeSetTimer(WD_MODULE113_UNRECOVERED_ADDRESS, 0xffffffffee1e5d00, WD_MODULE113_UNRECOVERED_ADDRESS4);
                            index = allocation;
                        }
                        goto block_9;
                    }
                }
                FltReleasePushLock(WD_MODULE113_UNRECOVERED_ADDRESS3);
            }
            lock = context;
            if ((int64_t)data_pointer_2 <= 4)
            {
                if (data_pointer_6)
                {
                    if (!(((uint32_t *)data_pointer_6)[0x2a] & 1) && 0xfffd <= (uint16_t)(((int16_t *)objects)[1] - 1U))
                    {
                        FltAcquirePushLockShared(&context[0x30]);
                        if (*(int64_t *)(&lock[0x34]))
                        {
                            *(uint32_t *)(*(int64_t *)(&lock[0x34]) + 0x18) = 3;
                            *(uint32_t *)(*(int64_t *)(&lock[0x34]) + 0x1c) = *(uint32_t *)(*(int64_t *)(&lock[2]) + 0x90);
                        }
                        else
                        {
                            lock[8] = 3;
                            lock[9] = *(uint32_t *)(*(int64_t *)(&lock[2]) + 0x90);
                            value_18 = lock[8];
                            if (value_18 != 3 && (7 < value_18 || !(0x94U >> (value_18 & 0x1f) & 1)))
                            {
                                WdUnresolvedAtomicBegin();
                                lock[0xc] = lock[0xc] & 0xffffbfff;
                                WdUnresolvedAtomicEnd();
                            }
                        }
                        FltReleasePushLock(&lock[0x30]);
                    }
                }
                else
                {
                    context[8] = 3;
                    context[9] = *(uint32_t *)(*(int64_t *)(&context[2]) + 0x90);
                    value_18 = context[8];
                    if (value_18 != 3 && (7 < value_18 || !(0x94U >> (value_18 & 0x1f) & 1)))
                    {
                        WdUnresolvedAtomicBegin();
                        context[0xc] = context[0xc] & 0xffffbfff;
                        WdUnresolvedAtomicEnd();
                    }
                }
                goto block_36;
            }
            if (*(uint32_t *)(&input->field_0x0) & 0x104)
            {
                goto block_36;
            }
            value_47 = 0;
            if (*(uint32_t *)(MpData + 0x360) & 0x10)
            {
                value_16 = 0;
                value_40 = 0;
                value_41 = 0;
                value_42 = 0;
                value_43 = 0;
                value_30 = 0;
                lock_2 = NULL;
                value_14 = 0;
                values[2] = 0;
                status = FltGetEcpListFromCallbackData(*(uint64_t *)(MpData + 0x10), data_2, &lock_2);
                value_30 = status;
                thread_process = 0;
                if (0 <= status)
                {
                    thread_process = 0;
                    if (lock_2)
                    {
                        trace_argument_2_2 = &values[2];
                        status = FltFindExtraCreateParameter(*(uint64_t *)(MpData + 0x10), lock_2, WD_SYMBOL_ADDRESS(GUID_ECP_CREATE_REDIRECTION), &value_14, trace_argument_2_2);
                        value_30 = status;
                        if (0 <= status)
                        {
                            byte_value_3 = FltIsEcpAcknowledged(*(uint64_t *)(MpData + 0x10), value_14);
                            if (!byte_value_3)
                            {
                                goto block_17;
                            }
                            value_47 = value_14;
                            thread_process = value_14;
                        }
                    }
                    else
                    {
                        block_17:
                        status = -0x3fffffff;

                        value_30 = -0x3fffffff;
                    }
                }
                value_46 = status;
                if (!status)
                {
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                    {
                        value_9 = (uint32_t)((uint64_t)(*(uint64_t *)(thread_process + 0x1c)) >> 0x20);
                        provider = *(uint32_t ***)(thread_process + 0xc);
                        trace_argument_2_2 = *(uint32_t **)(thread_process + 4);
                        WPP_SF_Diiii(*(uint64_t *)(WPP_GLOBAL_Control + 0x18));
                    }
                    WdStoreField(&value_16, 0, 6, (uint64_t)(((uint64_t)(*(uint16_t *)(thread_process + 2)) & 0xffffULL) << 32 | (uint64_t)1 & 0xffffffffULL));
                    value_40 = *(uint64_t *)(thread_process + 0x14);
                    value_41 = *(uint64_t *)(thread_process + 0x1c);
                    value_42 = *(uint64_t *)(thread_process + 4);
                    value_43 = *(uint64_t *)(thread_process + 0xc);
                    if (((uint8_t)(*(uint16_t *)(thread_process + 2)) & 9) == 1)
                    {
                        value_16 = ((uint64_t)WdLoadField(&value_16, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)3 & 0xffffffffULL;
                    }
                }
            }
            value_20 = 0;
            value_26 = 0;
            value_29 = 0;
            if (*(char *)(MpData + 0xfd1) && provider_2 && *(uint32_t *)(provider_2 + 0x120) & 0x40)
            {
                value_26 = value_20;
                if (*(uint8_t *)(*(int64_t *)(((int64_t *)data_2)[2] + 0x18) + 0x10) & 0x20)
                {
                    value_26 = 0x20;
                }
                value_29 = value_26;
                value_20 = value_26;
            }
            if (*(uint32_t *)(MpData + 0x360) & 0x10)
            {
                information_class = *(uint64_t *)(MpData + 0x10);
                value_15 = 0;
                data_pointer_3 = NULL;
                values[1] = 0;
                status = FltGetEcpListFromCallbackData(information_class, data_2, &value_15, 0, trace_argument_2_2, provider);
                if (0 <= status)
                {
                    if (value_15)
                    {
                        trace_argument_2_2 = &values[1];
                        status = FltFindExtraCreateParameter(information_class, value_15, WD_SYMBOL_ADDRESS(GUID_ECP_CREATE_USER_PROCESS), &data_pointer_3, trace_argument_2_2);
                        if (0 <= status && (byte_value_3 = FltIsEcpFromUserMode(information_class, data_pointer_3), !byte_value_3))
                        {
                            buffer_3[0] = 1;
                            data_pointer_6 = data_pointer_4;
                            value_18 = value_27;
                            goto block_18;
                        }
                        data_pointer_6 = data_pointer_4;
                        value_18 = value_27;
                    }
                }
                buffer_3[0] = 0;
            }
            else if (*(uint32_t *)(MpData + 0x360) & 2 && *(uint32_t *)(*(int64_t *)(((int64_t *)data_2)[2] + 0x18) + 0x10) & 0x20)
            {
                block_18:
                value_26 = 0x40020;

                value_20 = 0x40020;
                value_29 = value_26;
            }
            lock = context;
            data_2 = data_3;
            value_22 = (uint32_t)((uint64_t)trace_argument_2_2 >> 0x20);
            if (*(int32_t *)(*(int64_t *)(&context[2]) + 100))
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                {
                    WPP_SF_Z(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x38, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), (int16_t *)(((int64_t *)objects)[4] + 0x58));
                }
                block_19:
                status = *(int32_t *)(*(int64_t *)(&context[2]) + 0x78);

                if (status != 2)
                {
                    if (status != 0x1c)
                    {
                        if (status == 0x1b)
                        {
                            WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0xb68)), 1);
                        }
                    }
                    else
                    {
                        WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0xb8c)), 1);
                    }
                }
                else
                {
                    WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0xb44)), 1);
                }
                context_3 = data_pointer_6;
                if (!(*(uint32_t *)(MpData + 0x364) & 0x10))
                {
                    goto block_36;
                }
                if (*(char *)(MpData + 0xd0))
                {
                    goto block_36;
                }
                current_thread_3 = (uint64_t)KeGetCurrentThread();
                value = current_thread_3;
                thread_process = IoThreadToProcess();
                if (thread_process == *(int64_t *)(MpData + 0xe8))
                {
                    goto block_36;
                }
                current_thread = (uint64_t)KeGetCurrentThread();
                value_2 = current_thread;
                thread_process = IoThreadToProcess();
                value_28 = provider_2;
                if (thread_process == *(int64_t *)(MpData + 0x100))
                {
                    goto block_36;
                }
                if (*(int32_t *)(MpData + 0x988) != 1)
                {
                    if (provider_2)
                    {
                        if (*(uint32_t *)(provider_2 + 0x38) & 1)
                        {
                            goto block_21;
                        }
                        goto block_23;
                    }
                    block_20:
                    data_2 = data_3;
                }
                else
                {
                    block_21:
                    if (*(char *)(MpData + 0xfa8))
                    {
                        goto block_36;
                    }

                    value_18 = context[0x2a];
                    data_pointer_3 = *(uint32_t **)(&context[2]);
                    value_19 = value_18 % (uint64_t)WdDataStorage11;
                    if (data_pointer_3[0x1e] != 2 || !(*(int64_t *)(&data_pointer_3[0x6e])))
                    {
                        enabled = WdDataStorage12 == '\0';
                    }
                    else
                    {
                        value_12 = value_19;
                        KeEnterCriticalRegion();
                        ExAcquireResourceSharedLite(&data_pointer_3[0x48], (uint64_t)value_12 & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
                        for (index = *(uint64_t **)(*(int64_t *)(&data_pointer_3[0x6e]) + value_19 * 0x10); index != (uint64_t *)(value_19 * 0x10 + *(int64_t *)(&data_pointer_3[0x6e])); index = (uint64_t *)(*index))
                        {
                            if (*(uint32_t *)(&index[2]) == value_18)
                            {
                                enabled = 1;
                                goto block_22;
                            }
                        }

                        enabled = 0;
                        block_22:
                        ExReleaseResourceLite(&data_pointer_3[0x48]);

                        KeLeaveCriticalRegion();
                    }
                    byte_value_2 = enabled;
                    if (!enabled && !(value_20 & 0x20))
                    {
                        goto block_36;
                    }
                    block_23:
                    data_2 = data_3;

                    if (!value_28)
                    {
                        goto block_20;
                    }
                    if (*(int64_t *)(value_28 + 0x58))
                    {
                        byte_value_3 = (*__guard_dispatch_icall_fptr)(data_3, objects, context, value_28);
                        if (byte_value_3)
                        {
                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                            {
                                WPP_SF_qZZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x39, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), ((uint64_t *)data_2)[1], (int16_t *)(((int64_t *)objects)[4] + 0x58), *(int16_t **)(value_28 + 0x80));
                            }
                            goto block_36;
                        }
                    }
                }
                value_18 = value_26;
                if (value_28 && *(uint32_t *)(value_28 + 0x38) & 0x4000000)
                {
                    value_18 = value_26 | 0x100;
                    value_29 = value_18;
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                    {
                        WPP_SF_Z(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x3a, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), (int16_t *)(((int64_t *)objects)[4] + 0x58));
                    }
                }
                thread_process = context_2;
                if (context_2 && *(uint32_t *)(context_2 + 0x28) & 0x200)
                {
                    buffer = (WD_LAYOUT_92 *)ExAllocateFromPagedLookasideList((void *)(MpData + 0x1080));
                    if (buffer)
                    {
                        memset(buffer, 0, (char *)0x60);
                        WdAtomicOr32((volatile int32_t *)(&buffer->field_0x0), 1);
                        buffer->field_0x8 = (uint32_t)(*(uint16_t *)(((int64_t *)data_2)[2] + 0x2a));
                        buffer->field_0xc = *(uint32_t *)(((int64_t *)data_2)[2] + 0x20);
                        buffer->field_0x4 = value_18;
                        buffer->field_0x10 = information_buffer;
                        buffer->field_0x18 = value_3;
                        buffer->field_0x20 = value_4;
                        buffer->field_0x28 = value_5;
                        buffer->field_0x30 = value_6;
                        buffer->field_0x38 = value_16;
                        buffer->field_0x40 = value_40;
                        buffer->field_0x48 = (uint32_t)value_41;
                        buffer->field_0x4c = WdLoadField(&value_41, 4, 4);
                        buffer->field_0x50 = (uint32_t)value_42;
                        buffer->field_0x54 = WdLoadField(&value_42, 4, 4);
                        buffer->field_0x58 = value_43;
                        *(WD_LAYOUT_92 **)(context_2 + 0x60) = buffer;
                        if (!IsThisCallBeingThrottled())
                        {
                            MpSendOSCopyHintTelemetry(0);
                        }
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                        {
                            WPP_SF_qZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x3c, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), ((uint64_t *)data_2)[1], (int16_t *)(((int64_t *)objects)[4] + 0x58));
                        }
                        goto block_36;
                    }
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                    {
                        current_thread_2 = (uint64_t)KeGetCurrentThread();
                        WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x3b, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), current_thread_2);
                    }
                    *(uint32_t *)(thread_process + 0x28) = *(uint32_t *)(thread_process + 0x28) & 0xfffffdff;
                }
                status = 0;
                data_3 = (void *)((uint64_t)data_3 & 0xffffffff00000000);
                value_21 = 0;
                value_27 = MpScanFile(data_pointer_6, data_2, objects, 3, ((uint64_t)value_22 & 0xffffffffULL) << 32 | (uint64_t)value_18 & 0xffffffffULL, NULL, &information_buffer, ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)(*(uint32_t *)(*(int64_t *)(*(int64_t *)(((int64_t *)data_2)[2] + 0x18) + 8) + 0xc)) & 0xffffffffULL, &value_16, context, value_28, context_2);
                data_3 = (void *)((uint64_t)data_3 & 0xffffffff00000000);
                if (value_27 != 7)
                {
                    block_26:
                    if (3 <= value_27 - 5 && value_27 != 0x10)
                    {
                        value_49 = 2;
                        provider_2 = ((uint64_t)WdLoadField(&provider_2, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)2 & 0xffffffffULL;
                        status = 0;
                    }
                    else
                    {
                        if (value_27 != 5)
                        {
                            if (value_27 == 6)
                            {
                                status = 2;
                                goto block_24;
                            }
                            if (value_27 == 7)
                            {
                                status = 4;
                                value_49 = MpGetProcessBlockExecStatus(value_28);
                                goto block_25;
                            }
                            status = 1;
                            value_9 = 0xc0000906;
                            if (!(*(uint32_t *)(MpData + 0x360) & 4))
                            {
                                value_9 = WD_STATUS_ACCESS_DENIED;
                            }
                            ((uint32_t *)data_2)[6] = value_9;
                        }
                        else
                        {
                            status = 3;
                            block_24:
                            value_49 = -0x3fffffde;

                            block_25:
                            ((int32_t *)data_2)[6] = value_49;
                        }
                        ((uint64_t *)data_2)[4] = 0;
                        data_3 = (void *)(((uint64_t)WdLoadField(&data_3, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
                        provider_2 = ((uint64_t)WdLoadField(&provider_2, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)1 & 0xffffffffULL;
                        value_49 = 1;
                    }
                }
                else if (value_18 & 0x20)
                {
                    if (!(*(char *)(MpData + 0xfa8)))
                    {
                        goto block_26;
                    }
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                    {
                        if (value_28)
                        {
                            trace_argument_1 = *(int16_t **)(value_28 + 0x80);
                        }
                        else
                        {
                            trace_argument_1 = NULL;
                        }
                        WPP_SF_Z(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x5f, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), trace_argument_1);
                    }
                    value_49 = 0;
                    provider_2 &= 0xffffffff00000000;
                }
                else
                {
                    value_49 = 0;
                    provider_2 = (uint64_t)WdLoadField(&provider_2, 4, 4) << 0x20;
                    status = 0;
                }
                if (!value_49 || value_49 != 1)
                {
                    goto block_36;
                }
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                {
                    if (status != 1)
                    {
                        if (status != 2)
                        {
                            if (status != 3)
                            {
                                trace_argument_2 = "blocked for execution";
                                if (status != 4)
                                {
                                    trace_argument_2 = "unknown";
                                }
                            }
                            else
                            {
                                trace_argument_2 = "blocked access";
                            }
                        }
                        else
                        {
                            trace_argument_2 = "HIPS blocked for execution";
                        }
                    }
                    else
                    {
                        trace_argument_2 = "bad";
                    }
                    WPP_SF_qsDZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x3d, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), ((uint64_t *)data_2)[1], trace_argument_2, ((uint64_t)value_21 & 0xffffffffULL) << 32 | (uint64_t)context[0x2a] & 0xffffffffULL, &context[0x3c]);
                }
                ((uint64_t *)data_2)[4] = 0;
            }
            else
            {
                if (WdDataStorage15 == 1)
                {
                    value_17 = 0;
                    value_36 = 0;
                    data_pointer_9 = NULL;
                    if (*(uint32_t *)(MpData + 0x360) & 4 && *(int32_t *)(*(int64_t *)(&context[2]) + 0x78) == 0x1b)
                    {
                        status = MpReadCsvRevisionECP(data_3, &value_17);
                        if (0 <= status)
                        {
                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                            {
                                thread_process = value_36;
                                provider = data_pointer_9;
                                WPP_SF_iii(*(uint64_t *)(WPP_GLOBAL_Control + 0x18));
                                value_22 = (uint32_t)((uint64_t)thread_process >> 0x20);
                            }
                            if (value_17)
                            {
                                if (value_36)
                                {
                                    if (data_pointer_9)
                                    {
                                        if (value_17 == *(int64_t *)(&lock[0x36]))
                                        {
                                            if (value_36 == *(int64_t *)(&lock[0x38]))
                                            {
                                                if (data_pointer_9 == *(uint32_t ***)(&lock[0x3a]))
                                                {
                                                    goto block_27;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                        {
                            if (*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                            {
                                WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1a, WD_SYMBOL_ADDRESS(WPP_da25ed7ac0df3f6c27bc2dc1e0325faa_Traceguids), status);
                                data_pointer_6 = data_pointer_4;
                                value_18 = value_27;
                            }
                        }
                        lock[8] = 0;
                        WdUnresolvedAtomicBegin();
                        lock[0xc] = lock[0xc] & 0xffffbfff;
                        WdUnresolvedAtomicEnd();
                        lock[0x36] = (uint32_t)value_17;
                        lock[0x37] = WdLoadField(&value_17, 4, 4);
                        lock[0x38] = (uint32_t)value_36;
                        lock[0x39] = WdLoadField(&value_36, 4, 4);
                        *(uint32_t ***)(&lock[0x3a]) = data_pointer_9;
                    }
                }
                block_27:
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                {
                    trace_argument_2_2 = &context[0x3c];
                    WPP_SF_dZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2c, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), *(uint32_t *)(*(int64_t *)(&context[2]) + 4), trace_argument_2_2, provider);
                    value_22 = (uint32_t)((uint64_t)trace_argument_2_2 >> 0x20);
                }

                trace_argument_2_2 = context;
                value_21 = (uint32_t)((uint64_t)provider >> 0x20);
                if (data_pointer_6)
                {
                    if (!(((uint32_t *)data_pointer_6)[0x2a] & 1))
                    {
                        if (0xfffd <= (uint16_t)(((int16_t *)objects)[1] - 1U))
                        {
                            lock_3 = &context[0x30];
                            FltAcquirePushLockShared(lock_3);
                            if (*(int64_t *)(&trace_argument_2_2[0x34]))
                            {
                                lock = (uint32_t *)(*(int64_t *)(&trace_argument_2_2[0x34]) + 0x18);
                            }
                            else
                            {
                                lock = &trace_argument_2_2[8];
                            }
                            value_18 = GetMpFileStateWithSeq__create(lock, *(WD_LAYOUT_42 **)(&trace_argument_2_2[2]));
                            value_27 = value_18;
                            FltReleasePushLock(lock_3);
                            goto block_30;
                        }
                        value_27 = 0;
                        value_18 = 0;
                        goto block_29;
                    }
                    trace_argument_1_2 = -0x3fffff1b;
                    status = -0x3fffff1b;
                }
                else
                {
                    trace_argument_2_2 = &context[8];
                    if (trace_argument_2_2 && *(int64_t *)(&context[2]))
                    {
                        if (*trace_argument_2_2 != 5 || *(uint32_t *)(MpData + 0x364) >> 0xf & 1)
                        {
                            if (context[9] != *(uint32_t *)(*(int64_t *)(&context[2]) + 0x90))
                            {
                                goto block_28;
                            }
                            value_32 = *trace_argument_2_2;
                            value_27 = value_32;
                        }
                        else
                        {
                            value_27 = 5;
                            value_32 = 5;
                        }
                    }
                    else
                    {
                        block_28:
                        value_32 = 0;

                        value_27 = 0;
                    }
                    value_18 = value_27;
                    block_30:
                    block_29:
                    trace_argument_1_2 = 0;


                    status = 0;
                }
                context_3 = data_pointer_6;
                value_33 = trace_argument_1_2;
                if (status < 0)
                {
                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                    {
                        goto block_36;
                    }
                    value_13 = 0x2d;
                    information_class = ((uint64_t)value_22 & 0xffffffffULL) << 32 | (uint64_t)trace_argument_1_2 & 0xffffffffULL;
                    trace_handle_2 = ((uint64_t *)data_2)[1];
                    trace_handle = *(uint64_t *)(WPP_GLOBAL_Control + 0x18);
                    goto block_35;
                }
                if (3 <= value_18 - 2 && value_18 != 7)
                {
                    block_31:
                    trace_argument_2_2 = context;

                    thread_process = WdSharedTickCount;
                    value_8 = 0;
                    if (value_18 != 5)
                    {
                        if (value_18 != 0x10)
                        {
                            goto block_19;
                        }
                        value_34 = 0;
                        status = value_34;
                        if (data_pointer_6)
                        {
                            if (((uint32_t *)data_pointer_6)[0x2a] & 1)
                            {
                                value_34 = -0x3fffff1b;
                                status = -0x3fffff1b;
                            }
                            else if ((uint16_t)(((int16_t *)objects)[1] - 1U) > 0xfffc)
                            {
                                FltAcquirePushLockShared(&context[0x30]);
                                value_8 = 0;
                                if (*(int64_t *)(&trace_argument_2_2[0x34]))
                                {
                                    data_pointer = (int64_t *)(*(int64_t *)(&trace_argument_2_2[0x34]) + 0x28);
                                    WdUnresolvedAtomicBegin();
                                    value_10 = *data_pointer;
                                    if (value_10)
                                    {
                                        value_8 = value_10;
                                    }
                                    else
                                    {
                                        *data_pointer = 0;
                                    }
                                    WdUnresolvedAtomicEnd();
                                    value_55 = value_8;
                                }
                                else
                                {
                                    lock = &trace_argument_2_2[10];
                                    WdUnresolvedAtomicBegin();
                                    if (*(int64_t *)lock)
                                    {
                                        value_8 = *(int64_t *)lock;
                                    }
                                    else
                                    {
                                        lock[0] = 0;
                                        lock[1] = 0;
                                    }
                                    WdUnresolvedAtomicEnd();
                                    value_56 = value_8;
                                }
                                FltReleasePushLock(&trace_argument_2_2[0x30]);
                                value_34 = 0;
                                status = value_34;
                            }
                        }
                        else
                        {
                            value_8 = 0;
                            trace_argument_2_2 = &context[10];
                            WdUnresolvedAtomicBegin();
                            if (*(int64_t *)trace_argument_2_2)
                            {
                                value_8 = *(int64_t *)trace_argument_2_2;
                            }
                            else
                            {
                                trace_argument_2_2[0] = 0;
                                trace_argument_2_2[1] = 0;
                            }
                            WdUnresolvedAtomicEnd();
                            value_54 = value_8;
                        }
                        trace_argument_1_2 = value_34;
                        if (status <= -1)
                        {
                            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                            {
                                goto block_36;
                            }
                            value_13 = 0x33;
                            information_class = ((uint64_t)value_22 & 0xffffffffULL) << 32 | (uint64_t)value_34 & 0xffffffffULL;
                            goto block_34;
                        }
                        if (!(*(int64_t *)(MpData + 600)) || thread_process < value_8)
                        {
                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                            {
                                WPP_SF_qDZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18));
                            }
                            FltCancelFileOpen(((uint64_t *)objects)[3], ((uint64_t *)objects)[4]);
                            value_9 = 0xc0000906;
                            if (!(*(uint32_t *)(MpData + 0x360) & 4))
                            {
                                value_9 = WD_STATUS_ACCESS_DENIED;
                            }
                            ((uint32_t *)data_3)[6] = value_9;
                            ((uint64_t *)data_3)[4] = 0;
                            goto block_36;
                        }
                        trace_argument_1_2 = MpSetStreamState__create(data_pointer_6, ((uint16_t *)objects)[1], context, 0x11);
                        trace_argument_2_2 = context;
                        if (0 <= trace_argument_1_2)
                        {
                            if (data_pointer_6)
                            {
                                if (!(((uint32_t *)data_pointer_6)[0x2a] & 1))
                                {
                                    if (0xfffd <= (uint16_t)(((int16_t *)objects)[1] - 1U))
                                    {
                                        lock = &context[0x30];
                                        FltAcquirePushLockShared(lock);
                                        if (*(uint32_t **)(&trace_argument_2_2[0x34]))
                                        {
                                            trace_argument_2_2 = *(uint32_t **)(&trace_argument_2_2[0x34]);
                                        }
                                        WdUnresolvedAtomicBegin();
                                        trace_argument_2_2[10] = 0;
                                        trace_argument_2_2[0xb] = 0;
                                        WdUnresolvedAtomicEnd();
                                        FltReleasePushLock(lock);
                                    }
                                    goto block_32;
                                }
                                trace_argument_1_2 = -0x3fffff1b;
                                value_35 = 0xc00000e5;
                                status = -0x3fffff1b;
                            }
                            else
                            {
                                WdUnresolvedAtomicBegin();
                                context[10] = 0;
                                context[0xb] = 0;
                                WdUnresolvedAtomicEnd();
                                block_32:
                                status = 0;

                                value_35 = 0;
                                trace_argument_1_2 = status;
                            }
                            if (0 <= status)
                            {
                                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                                {
                                    WPP_SF_Z(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x37, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), &context[0x3c]);
                                }
                                value_20 = value_26;
                                goto block_19;
                            }
                            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                            {
                                goto block_36;
                            }
                            value_13 = 0x36;
                            information_class = ((uint64_t)value_22 & 0xffffffffULL) << 32 | (uint64_t)trace_argument_1_2 & 0xffffffffULL;
                        }
                        else
                        {
                            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                            {
                                goto block_36;
                            }
                            value_13 = 0x35;
                            information_class = ((uint64_t)value_22 & 0xffffffffULL) << 32 | (uint64_t)trace_argument_1_2 & 0xffffffffULL;
                        }
                        trace_handle_2 = ((uint64_t *)data_3)[1];
                        thread_process = WPP_GLOBAL_Control;
                        goto block_2;
                    }
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                    {
                        WPP_SF_qZD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x32, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), ((uint64_t *)data_2)[1], (int16_t *)(((int64_t *)objects)[4] + 0x58), ((uint64_t)value_21 & 0xffffffffULL) << 32 | (uint64_t)5 & 0xffffffffULL);
                    }
                    ((uint32_t *)data_2)[6] = WD_STATUS_ACCESS_DENIED;
                    ((uint64_t *)data_2)[4] = 0;
                }
                else
                {
                    value_20 |= 0x40;
                    value_26 = value_20;
                    value_29 = value_20;
                    if (*(int32_t *)(*(int64_t *)(&context[2]) + 0x78) == 2 && Microsoft_Antimalware_AMFilterEnableBits & 2)
                    {
                        McTemplateK0x_EtwWriteTransfer(trace_argument_1_2, WD_SYMBOL_ADDRESS(AMFilter_CacheHitEvent), 0xfffc, context[0x2a]);
                    }
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                    {
                        WPP_SF_Z(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2e, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), (int16_t *)(((int64_t *)objects)[4] + 0x58));
                    }
                    status = *(int32_t *)(*(int64_t *)(&context[2]) + 0x78);
                    if (status != 2)
                    {
                        if (status != 0x1c)
                        {
                            if (status == 0x1b)
                            {
                                WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0xb6c)), 1);
                            }
                        }
                        else
                        {
                            WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0xb90)), 1);
                        }
                    }
                    else
                    {
                        WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0xb48)), 1);
                    }
                    if (value_20 & 0x20 && !(context[0xc] & 0x4000) && value_18 == 3)
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                        {
                            WPP_SF_Z(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2f, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), (int16_t *)(((int64_t *)objects)[4] + 0x58));
                        }
                        goto block_31;
                    }
                    if (!(value_20 & 0x20))
                    {
                        goto block_36;
                    }
                    if (value_18 != 7)
                    {
                        goto block_36;
                    }
                    if (*(char *)(MpData + 0xfa8))
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                        {
                            if (*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                            {
                                WPP_SF_Z(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x30, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), (int16_t *)(((int64_t *)objects)[4] + 0x58));
                            }
                        }
                        goto block_36;
                    }
                    MpSendBlockProcessExecMessage(data_2, context[0x40]);
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                    {
                        WPP_SF_qZD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x31, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), ((uint64_t *)data_2)[1], (int16_t *)(((int64_t *)objects)[4] + 0x58), ((uint64_t)value_21 & 0xffffffffULL) << 32 | (uint64_t)7 & 0xffffffffULL);
                    }
                    status = MpGetProcessBlockExecStatus(provider_2);
                    ((int32_t *)data_2)[6] = status;
                    ((uint64_t *)data_2)[4] = 0;
                }
            }
            FltCancelFileOpen(((uint64_t *)objects)[3], ((uint64_t *)objects)[4]);
            context_3 = data_pointer_6;
            goto block_36;
        }
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            goto block_36;
        }
        value_13 = 0x2b;
        information_class = (uint64_t)((uint64_t)trace_argument_2_2) & 0xffffffff00000000 | (uint64_t)trace_argument_1_2 & 0xffffffff;
        trace_handle_2 = ((uint64_t *)data_2)[1];
        trace_handle = *(uint64_t *)(WPP_GLOBAL_Control + 0x18);
    }
    else
    {
        provider = &context;
        trace_argument_2_2 = (uint32_t *)((uint64_t)((uint64_t)bytes) & 0xffffffffffffff00 | (uint64_t)byte_value & 0xff);
        trace_argument_1_2 = MpCreateStreamContext(data_3, objects, input, 0, trace_argument_2_2, provider);
        value_21 = (uint32_t)((uint64_t)trace_argument_2_2 >> 0x20);
        if (!(trace_argument_1_2 + 0x80000000U & 0x80000000) && trace_argument_1_2 != -0x3fe3fffe)
        {
            if (trace_argument_1_2 == -0x3fffff46 || (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)))
            {
                goto block_36;
            }
            trace_handle_2 = 0x25;
            value_13 = ((uint64_t)value_21 & 0xffffffffULL) << 32 | (uint64_t)trace_argument_1_2 & 0xffffffffULL;
            information_class = ((uint64_t *)data_3)[1];
            goto block_6;
        }
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            provider = (uint32_t **)(((int64_t *)objects)[4] + 0x58);
            information_class = ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)((uint32_t)byte_value) & 0xffffffffULL;
            trace_argument_2_2 = (uint32_t *)(((uint64_t)value_21 & 0xffffffffULL) << 32 | (uint64_t)(*(uint32_t *)(*(int64_t *)(&context[2]) + 4)) & 0xffffffffULL);
            WPP_SF_qdZidD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), *(int64_t *)(&context[2]), provider, context, trace_argument_2_2, provider, *(uint64_t *)(&context[0x2a]), information_class, ((uint64_t)value_22 & 0xffffffffULL) << 32 | (uint64_t)context[0xc] & 0xffffffffULL);
            value_9 = (uint32_t)((uint64_t)information_class >> 0x20);
        }
        if (!data_pointer_6 || !byte_value)
        {
            block_33:
            if (WdDataStorage15 == 1)
            {
                MpCopyStreamStateFromFileStateGenericTable(context, 0x1b, MpCopyCsvStreamStateFromCacheEntry);
            }

            if (WdDataStorage16 == 1)
            {
                MpCopyStreamStateFromFileStateGenericTable(context, 0x1c, MpCopyRefsStreamStateFromCacheEntry);
            }
            if (WdDataStorage17 == 1)
            {
                MpCopyStreamStateFromFileStateGenericTable(context, 2, MpCopyNtfsStreamStateFromCacheEntry);
            }
            if (((int64_t *)data_3)[4] == 2)
            {
                context[0xc] = context[0xc] | 0x1000;
            }
            goto block_7;
        }
        trace_argument_1_2 = MpTxfAddStream(objects, data_pointer_6, ((uint16_t *)objects)[1], context);
        if (0 <= trace_argument_1_2)
        {
            goto block_33;
        }
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            goto block_36;
        }
        value_13 = 0x27;
        information_class = (uint64_t)((uint64_t)trace_argument_2_2) & 0xffffffff00000000 | (uint64_t)trace_argument_1_2 & 0xffffffff;
        block_34:
        trace_handle_2 = ((uint64_t *)data_3)[1];

        trace_handle = *(uint64_t *)(WPP_GLOBAL_Control + 0x18);
    }
    block_35:
    WPP_SF_qL(trace_handle, value_13, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), trace_handle_2, information_class);

    context_3 = data_pointer_6;
    block_36:
    if (context_3)
    {
        FltReleaseContext(context_3);
    }

    if (context_2)
    {
        FltReleaseContext(context_2);
    }
    *data_pointer_7 = (int64_t)context;
    return;
}

void MpUpdateHandleContextOnPostCreate(WD_LAYOUT_4 *input, WD_LAYOUT_88 *input_2, WD_LAYOUT_90 *input_3, int64_t *input_4)
{
    uint64_t value;
    int64_t context;
    char byte_value;
    uint32_t value_2;
    uint32_t value_3;
    uint32_t value_4;
    char byte_value_2;
    int32_t status;
    WD_LAYOUT_91 *record;
    char buffer[16];
    int64_t values[2];
    values[0] = 0;
    buffer[0] = 0;
    if (input_4)
    {
        *input_4 = 0;
    }
    value = input_2->field_0x20;
    byte_value = input_4 == NULL;
    if (FltSupportsStreamHandleContexts(value))
    {
        status = MpCreateHandleContext(input_2, values, buffer);
        context = values[0];
        if (0 <= status)
        {
            if (*(uint32_t *)(input->field_0x10 + 0x20) & 0x1000)
            {
                *(uint32_t *)(values[0] + 0x28) = *(uint32_t *)(values[0] + 0x28) | 8;
            }
            *(uint32_t *)(values[0] + 0x2c) = *(uint32_t *)(*(int64_t *)(*(int64_t *)(input->field_0x10 + 0x18) + 8) + 0xc);
            *(uint32_t *)(values[0] + 0x58) = *(uint32_t *)(*(int64_t *)(input->field_0x10 + 0x18) + 0x10);
            if (input_3->field_0x8)
            {
                *(uint32_t *)(values[0] + 0x28) = *(uint32_t *)(values[0] + 0x28) | 0x80;
            }
            if (input_3->field_0x0 >> 0xe & 1)
            {
                *(uint32_t *)(values[0] + 0x28) = *(uint32_t *)(values[0] + 0x28) | 0x100;
            }
            if (*(char *)(&input_3->field_0x18))
            {
                record = (WD_LAYOUT_91 *)ExAllocateFromPagedLookasideList((void *)(MpData + 0x1100));
                if (record)
                {
                    value = input_3->field_0x20;
                    record->field_0x0 = input_3->field_0x18;
                    record->field_0x8 = value;
                    value = input_3->field_0x30;
                    record->field_0x10 = input_3->field_0x28;
                    record->field_0x18 = value;
                    value = input_3->field_0x40;
                    record->field_0x20 = input_3->field_0x38;
                    record->field_0x28 = value;
                    value = input_3->field_0x50;
                    record->field_0x30 = input_3->field_0x48;
                    record->field_0x38 = value;
                    value = input_3->field_0x60;
                    record->field_0x40 = input_3->field_0x58;
                    record->field_0x48 = value;
                    value = input_3->field_0x70;
                    record->field_0x50 = input_3->field_0x68;
                    record->field_0x58 = value;
                    value = input_3->field_0x80;
                    record->field_0x60 = input_3->field_0x78;
                    record->field_0x68 = value;
                    value = input_3->field_0x90;
                    record->field_0x70 = input_3->field_0x88;
                    record->field_0x78 = value;
                    value = input_3->field_0xa0;
                    record->field_0x80 = input_3->field_0x98;
                    record->field_0x88 = value;
                    value = input_3->field_0xb0;
                    record->field_0x90 = input_3->field_0xa8;
                    record->field_0x98 = value;
                    value = input_3->field_0xc0;
                    record->field_0xa0 = input_3->field_0xb8;
                    record->field_0xa8 = value;
                    value = input_3->field_0xd0;
                    record->field_0xb0 = input_3->field_0xc8;
                    record->field_0xb8 = value;
                    value_2 = input_3->field_0xdc;
                    value_3 = input_3->field_0xe0;
                    value_4 = input_3->field_0xe4;
                    record->field_0xc0 = input_3->field_0xd8;
                    record->field_0xc4 = value_2;
                    record->field_0xc8 = value_3;
                    record->field_0xcc = value_4;
                    record->field_0xd0 = input_3->field_0xe8;
                    record->field_0xd8 = input_3->field_0xf0;
                    *(WD_LAYOUT_91 **)(context + 0x68) = record;
                }
                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                {
                    WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x77, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), (uint64_t)KeGetCurrentThread());
                }
            }
            if (*(uint32_t *)(input->field_0x10 + 0x20) & 8)
            {
                if (!IsThisCallBeingThrottled())
                {
                    MpSendOSCopyHintTelemetry(5);
                }
            }
            else if (*(char *)(MpData + 0xfc8) && *(int64_t *)(MpData + 0xb0))
            {
                byte_value_2 = (*__guard_dispatch_icall_fptr)(input_2->field_0x20);
                if (byte_value_2)
                {
                    *(uint32_t *)(context + 0x28) = *(uint32_t *)(context + 0x28) | 0x200;
                }
            }
        }
        else
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x76, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), (uint64_t)KeGetCurrentThread(), status);
            }
            context = values[0];
        }
        if (!input_4)
        {
            if (context)
            {
                FltReleaseContext(context);
            }
        }
        else if (context && input_4)
        {
            *input_4 = context;
        }
    }
    return;
}

void MpIsThisPrefetchOperation(void *input, int64_t *input_2)
{
    uint64_t file_object;
    uint64_t instance;
    int64_t value;
    int64_t handle_context;
    bool enabled;
    file_object = ((uint64_t *)input)[4];
    if (FltSupportsStreamHandleContexts(file_object))
    {
        if (*(char *)(MpData + 0xe30))
        {
            WdUnresolvedAtomicBegin();
            enabled = *(int64_t *)(MpData + 0xe38) == 0;
            if (enabled)
            {
                *(int64_t *)(MpData + 0xe38) = 0;
            }
            WdUnresolvedAtomicEnd();
            if (enabled)
            {
                return;
            }
        }
        file_object = ((uint64_t *)input)[4];
        instance = ((uint64_t *)input)[3];
        handle_context = 0;
        if (0 <= (int32_t)FltGetStreamHandleContext(instance, file_object, &handle_context))
        {
            value = handle_context;
            if (*(uint32_t *)(handle_context + 0x28) & 4 && input_2)
            {
                *input_2 = handle_context;
                handle_context = 0;
                value = 0;
            }
            if (value)
            {
                FltReleaseContext();
            }
        }
    }
    return;
}

void MpCopyCacheOnPostCreate(int64_t data, void *input, void *input_2, void *input_3)
{
    WD_UNICODE_STRING_VALUE *source_string;
    int64_t thread_process;
    int64_t *allocation;
    int32_t *atomic_value;
    uint32_t value;
    uint32_t value_2;
    uint32_t *data_pointer;
    char buffer[32];
    uint64_t values[10];
    int64_t file_name;
    void *stream_context;
    uint16_t value_3;
    int64_t process_context;
    int64_t context;
    uint64_t value_4;
    uint32_t *data_pointer_2;
    uint64_t value_5;
    uint64_t value_6;
    uint64_t information_class;
    uint32_t value_7;
    uint32_t value_8;
    uint64_t value_9;
    uint32_t value_10;
    int64_t value_11;
    int64_t value_12;
    uint64_t value_13;
    uint32_t *data_pointer_3;
    void *data_pointer_4;
    void *data_pointer_5;
    uint64_t instance;
    bool enabled;
    void *data_pointer_6;
    char byte_value;
    int32_t status_2;
    int32_t status;
    value_7 = (uint32_t)((uint64_t)value_6 >> 0x20);
    values[9] = __security_cookie ^ (uint64_t)buffer;
    context = 0;
    status_2 = 0;
    data_pointer_4 = input_3;
    data_pointer_5 = input_3;
    stream_context = input_3;
    byte_value = MpDlpIsEnabled(data, input_2);
    if (input_2)
    {
        if (((uint32_t *)input_2)[0xd] & 1)
        {
            block_1:
            if (!byte_value)
            {
                goto block_5;
            }
        }
        else if (((uint32_t *)input_2)[0xd] >> 0xe & 1 && (thread_process = IoThreadToProcess((uint64_t)KeGetCurrentThread()), thread_process != *__imp_PsInitialSystemProcess))
        {
            process_context = 0;
            status = MpGetProcessContextByObject(thread_process, &process_context);
            thread_process = process_context;
            if (0 <= status)
            {
                enabled = 0;
                if (*(uint32_t *)(process_context + 0x34) & 1)
                {
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                    {
                        information_class = ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)(*(uint32_t *)(process_context + 0x18)) & 0xffffffffULL;
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x11, WD_SYMBOL_ADDRESS(WPP_5670a709eb3a322061319a849c30f9df_Traceguids), (uint64_t)KeGetCurrentThread(), information_class);
                        value_7 = (uint32_t)((uint64_t)information_class >> 0x20);
                    }
                    enabled = 1;
                }
                MpReleaseProcessContext(thread_process);
                if (enabled)
                {
                    goto block_1;
                }
            }
        }
    }
    if (!stream_context)
    {
        information_class = ((uint64_t *)input)[4];
        instance = ((uint64_t *)input)[3];
        if ((int32_t)FltGetStreamContext(instance, information_class, &stream_context) < 0)
        {
            goto block_5;
        }
    }
    if (((uint32_t *)stream_context)[0xc] & 1 || *(int32_t *)(((int64_t *)stream_context)[1] + 100))
    {
        goto block_5;
    }
    if (*(int64_t *)(data + 0x20) == 2 || *(int64_t *)(data + 0x20) == 3)
    {
        thread_process = PsGetCurrentThreadId();
        value = WdDataStorage10;
        value_10 = WdDataStorage10;
        if (((int64_t *)input_2)[0x21])
        {
            FltAcquirePushLockExclusive((int64_t)input_2 + 0x110);
            if (((int64_t *)input_2)[0x21])
            {
                while (true)
                {
                    value_2 = value - 1;
                    value_10 = value_2;
                    if (!value)
                    {
                        break;
                    }
                    data_pointer_2 = (uint32_t *)(value_2 * 0x38ULL + ((int64_t *)input_2)[0x21]);
                    value = value_2;
                    if (*data_pointer_2 & 1 && *(int64_t *)(&data_pointer_2[2]) == thread_process && (*data_pointer_2 = *data_pointer_2 | 2, WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control)) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                    {
                        WPP_SF_qI(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xc);
                    }
                }
            }
            FltReleasePushLock((int64_t)input_2 + 0x110);
        }
        goto block_5;
    }
    if (((int64_t *)stream_context)[0x16] <= 4 || (thread_process = ((int64_t *)input)[5], thread_process && (int32_t)MpTxfGetContext(input, 0, thread_process, &context) <= -1))
    {
        goto block_5;
    }
    data_pointer_6 = stream_context;
    if (context)
    {
        if (!(*(uint32_t *)(context + 0xa8) & 1))
        {
            if ((uint16_t)(((int16_t *)input)[1] - 1U) <= 0xfffc)
            {
                goto block_2;
            }
            FltAcquirePushLockShared((int64_t)stream_context + 0xc0);
            atomic_value = (int32_t *)(((int64_t *)data_pointer_6)[0x1a] + 0x18);
            if (!((int64_t *)data_pointer_6)[0x1a])
            {
                atomic_value = &((int32_t *)data_pointer_6)[8];
            }
            status_2 = GetMpFileStateWithSeq__create(atomic_value, ((WD_LAYOUT_42 **)data_pointer_6)[1]);
            FltReleasePushLock((int64_t)data_pointer_6 + 0xc0);
        }
    }
    else
    {
        atomic_value = &((int32_t *)stream_context)[8];
        if (atomic_value && ((int64_t *)stream_context)[1])
        {
            if (*atomic_value != 5 || *(uint32_t *)(MpData + 0x364) >> 0xf & 1)
            {
                if (((int32_t *)stream_context)[9] == *(int32_t *)(((int64_t *)stream_context)[1] + 0x90))
                {
                    status_2 = *atomic_value;
                }
            }
            else
            {
                status_2 = 5;
            }
        }
        else
        {
            block_2:
            status_2 = 0;
        }
    }
    if (status_2 == 4 && !byte_value)
    {
        goto block_5;
    }
    value_12 = 0;
    value_11 = 0;
    if (*(int64_t *)(MpData + 0x60))
    {
        values[0] &= 0xffffffff00000000;
        thread_process = (*__guard_dispatch_icall_fptr)(*(uint64_t *)(MpData + 0x10), data, 1, values);
        if (!thread_process)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x73, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), (uint64_t)KeGetCurrentThread());
            }
            goto block_3;
        }
        value_5 = *(int64_t *)(thread_process + 0x30);
        process_context = *(int64_t *)(thread_process + 0x18);
    }
    else
    {
        block_3:
        values[4] = 0;

        values[5] = 0;
        values[6] = 0;
        values[7] = 0;
        values[8] = 0;
        values[1] = 0;
        values[2] = 0;
        values[3] = 0;
        information_class = ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)5 & 0xffffffffULL;
        status_2 = FltQueryInformationFile(((uint64_t *)input)[3], ((uint64_t *)input)[4], &values[1], 0x18, information_class, 0);
        value_7 = (uint32_t)((uint64_t)information_class >> 0x20);
        if (status_2 < 0)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x74, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)status_2 & 0xffffffffULL);
            }
            goto block_5;
        }
        information_class = ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)4 & 0xffffffffULL;
        status_2 = FltQueryInformationFile(((uint64_t *)input)[3], ((uint64_t *)input)[4], &values[4], 0x28, information_class, 0);
        value_7 = (uint32_t)((uint64_t)information_class >> 0x20);
        if (status_2 < 0)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x75, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)status_2 & 0xffffffffULL);
            }
            goto block_5;
        }
        process_context = values[6];
        value_5 = values[2];
    }
    value_11 = process_context;
    value_12 = value_5;
    if (value_5)
    {
        value = ((uint32_t *)stream_context)[0xc];
        values[0] = PsGetCurrentThreadId();
        file_name = 0;
        if (((int64_t *)input_2)[0x21])
        {
            status_2 = FltGetFileNameInformation(data, 0x102, &file_name);
            if (status_2 < 0 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 10, WD_SYMBOL_ADDRESS(WPP_cdc8c5bdf4153e2541ef4ccbc66457af_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)status_2 & 0xffffffffULL);
            }
            FltAcquirePushLockExclusive((int64_t)input_2 + 0x110);
            if (((int64_t *)input_2)[0x21])
            {
                data_pointer_3 = NULL;
                value_13 = 0xffffffffffffffff;
                enabled = 0;
                value_4 = 0xffffffffffffffff;
                data_pointer_2 = NULL;
                value_2 = WdDataStorage10;
                while (value_8 = value_2 - 1, value_2)
                {
                    data_pointer = (uint32_t *)(value_8 * 0x38ULL + ((int64_t *)input_2)[0x21]);
                    if (!(*data_pointer & 1))
                    {
                        goto block_4;
                    }
                    value_9 = *(uint64_t *)(&data_pointer[10]);
                    value_2 = value_8;
                    if (value_9 < value_4)
                    {
                        value_4 = value_9;
                        data_pointer_2 = data_pointer;
                        value_13 = value_9;
                        data_pointer_3 = data_pointer;
                    }
                }

                enabled = 1;
                data_pointer = data_pointer_2;
                block_4:
                if (data_pointer)
                {
                    if (enabled)
                    {
                        WdUnresolvedAtomicBegin();
                        WdCopycacheStorage2 += 1;
                        WdUnresolvedAtomicEnd();
                        WdUnresolvedAtomicBegin();
                        WdCopycacheStorage += 1;
                        WdUnresolvedAtomicEnd();
                        if (*data_pointer & 0xfffffffe)
                        {
                            WdUnresolvedAtomicBegin();
                            WdCopycacheStorage3 += 1;
                            WdUnresolvedAtomicEnd();
                        }
                        if (((uint8_t)(*data_pointer) & 0xf) == 0xf)
                        {
                            WdUnresolvedAtomicBegin();
                            WdCopycacheStorage13 += 1;
                            WdUnresolvedAtomicEnd();
                        }
                    }
                    data_pointer_2 = &data_pointer[4];
                    if (*(int64_t *)data_pointer_2)
                    {
                        ExFreePoolWithTag(*(int64_t *)data_pointer_2, 0x7375704d);
                        data_pointer_2[0] = 0;
                        data_pointer_2[1] = 0;
                    }
                    status = 0;
                    data_pointer[0] = 0;
                    data_pointer[1] = 0;
                    data_pointer[2] = 0;
                    data_pointer[3] = 0;
                    data_pointer[4] = 0;
                    data_pointer[5] = 0;
                    data_pointer[6] = 0;
                    data_pointer[7] = 0;
                    data_pointer[8] = 0;
                    data_pointer[9] = 0;
                    data_pointer[10] = 0;
                    data_pointer[0xb] = 0;
                    data_pointer[0xc] = 0;
                    data_pointer[0xd] = 0;
                    *(uint64_t *)(&data_pointer[2]) = values[0];
                    *(uint64_t *)(&data_pointer[6]) = value_5;
                    *(uint64_t *)(&data_pointer[8]) = process_context;
                    *(uint8_t *)(&data_pointer[0xc]) = (uint8_t)(value >> 0x15) & 1;
                    atomic_value = &((int32_t *)input_2)[0x46];
                    status_2 = WdAtomicAdd32((volatile int32_t *)atomic_value, 1);
                    *(uint64_t *)(&data_pointer[10]) = (uint64_t)(status_2 + 1);
                    if (file_name && (source_string = (WD_UNICODE_STRING_VALUE *)(file_name + 8), source_string) && (data_pointer_2 && 0 <= (int32_t)RtlUnicodeStringValidateWorker(source_string, 0x7fff, 0)))
                    {
                        value_3 = source_string->Length;
                        if (value_3 && !(value_3 & 1))
                        {
                            allocation = MpAllocatePoolWithTag(1, (char *)(value_3 + 0x12ULL), 0x7375704d);
                            *(int64_t **)data_pointer_2 = allocation;
                            if (allocation)
                            {
                                allocation[1] = (int64_t)(&allocation[2]);
                                *(*(uint16_t **)data_pointer_2) = 0;
                                *(uint16_t *)(*(int64_t *)data_pointer_2 + 2) = value_3 + 2;
                                RtlCopyUnicodeString(*(uint64_t *)data_pointer_2, source_string);
                            }
                            else
                            {
                                status = -0x3fffff66;
                            }
                        }
                        else
                        {
                            status = -0x3ffffff3;
                        }
                        if (0 <= status && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                        {
                            WPP_SF_qZI(*(uint64_t *)(WPP_GLOBAL_Control + 0x18));
                        }
                    }
                    *data_pointer = 1;
                }
            }
            FltReleasePushLock((int64_t)input_2 + 0x110);
            if (file_name)
            {
                FltReleaseFileNameInformation();
            }
        }
    }
    block_5:
    if (stream_context != data_pointer_4 && stream_context)
    {
        FltReleaseContext(stream_context);
    }

    if (context)
    {
        FltReleaseContext(context);
    }
    __security_check_cookie(values[9] ^ (uint64_t)buffer);
    return;
}

void MpCheckForAmHardening(void *input, WD_LAYOUT_76 *input_2, int64_t input_3, void *input_4, char input_5)
{
    bool enabled;
    char buffer[3];
    int64_t instance_context;
    bool enabled_2;
    uint64_t value_2;
    bool enabled_3;
    int32_t status;
    int64_t value_3;
    uint32_t value_4;
    char byte_value;
    value_2 = WdSharedTickCount;
    instance_context = 0;
    if (*(int32_t *)(MpData + 0x98c) || (!(*(int64_t *)(MpData + 0xe8)) && (uint64_t)((uint64_t)((0 | (uint64_t)36000000000) / (uint64_t)((uint32_t)KeQueryTimeIncrement())) + *(int64_t *)(MpData + 0xfc0)) < value_2 || *(uint32_t *)(MpData + 0xf48) & 1))
    {
        return;
    }
    value_3 = ((int64_t *)input)[2];
    if (*(char *)(value_3 + 4))
    {
        if (*(char *)(value_3 + 4) != '\r' || *(int32_t *)(value_3 + 0x28) != 0x900d7 && *(int32_t *)(value_3 + 0x28) != 0x900db)
        {
            goto block_1;
        }
        enabled_2 = 1;
    }
    else
    {
        if (*(uint32_t *)(value_3 + 0x20) & 1)
        {
            return;
        }
        block_1:
        enabled_2 = 0;
    }
    enabled = 0;
    if (*(uint32_t *)(MpData + 0xfd4) & 1 && (enabled = 0, enabled_2))
    {
        buffer[0] = 0;
        byte_value = 0;
        value_4 = 0;
        value_3 = PsReferenceImpersonationToken((uint64_t)KeGetCurrentThread(), buffer, &byte_value, &value_4);
        if (value_3)
        {
            enabled = 1;
            PsDereferenceImpersonationToken(value_3);
        }
    }
    value_2 = WdSharedTickCount;
    value_3 = ((int64_t *)input)[2];
    enabled_3 = 0;
    enabled_2 = 0;
    if (*(char *)(value_3 + 4))
    {
        if (*(char *)(value_3 + 4) != '\r' || *(int32_t *)(value_3 + 0x28) != 0x98208)
        {
            goto block_2;
        }
        enabled_3 = 1;
    }
    else
    {
        if (*(uint8_t *)(value_3 + 6) & 2)
        {
            enabled_3 = 1;
        }
        block_2:
        enabled_2 = enabled_3;

        enabled_3 = 0;
    }
    if (!WdDataStorage23 || ((int32_t *)input_4)[0x3c] != 0x15 || !enabled_3)
    {
        enabled_3 = 0;
    }
    else
    {
        enabled_3 = 1;
    }
    if ((enabled || enabled_2 || enabled_3 || input_4 && !(*(int32_t *)(MpData + 0x98c)) && ((*(int64_t *)(MpData + 0xe8) || value_2 <= (uint64_t)((uint64_t)((0 | (uint64_t)36000000000) / (uint64_t)((uint32_t)KeQueryTimeIncrement())) + *(int64_t *)(MpData + 0xfc0))) && (((int32_t *)input_4)[0x3c] == 0x15 && !(*(int64_t *)(MpData + 0xe8)) || !(((uint32_t *)input_4)[0x48] & 0x10)))) && (!input_5 && !input_3))
    {
        status = FltGetInstanceContext(input_2->field_0x18, &instance_context);
        if (status < 0 && (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x59, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), ((uint64_t *)input)[1], status);
        }
        if (instance_context)
        {
            if (*(uint32_t *)(instance_context + 0x50) & 1)
            {
                FltReleaseContext();
            }
            else
            {
                FltReleaseContext();
            }
        }
    }
    return;
}

void MpHardenPathOnPostCreate(void *data, void *input, WD_LAYOUT_78 *input_2, uint64_t *input_3)
{
    char byte_value = 0;
    uint32_t values[2];
    uint16_t **file_name;
    WD_LAYOUT_77 *file_object;
    WD_LAYOUT_77 *extension;
    WD_LAYOUT_78 *record;
    WD_LAYOUT_77 *record_2 = NULL;
    uint16_t *wide_text;
    char byte_value_2 = 0;
    uint16_t **wide_text_2;
    char byte_value_3;
    uint32_t value;
    uint32_t *data_pointer;
    WD_LAYOUT_78 *record_3;
    void *data_2;
    WD_LAYOUT_77 *file_name_2;
    uint8_t byte_value_4;
    uint32_t value_3;
    int32_t status;
    uint32_t process_id;
    WD_LAYOUT_77 *file_name_3 = NULL;
    char buffer_2[8];
    value_3 = *(uint32_t *)(MpData + 0x364) & 0x4000;
    if (*(uint32_t *)(MpData + 0xf48) & 1)
    {
        *input_3 = *input_3 & 0xffffffffffffffef;
    }
    record_3 = input_2;
    data_2 = data;
    if (!(*(uint32_t *)input_3 & 0x8010))
    {
        return;
    }
    status = MpCheckLoopbackOnPostCreate(data, input, input_3);
    if (0 <= status)
    {
        file_name = (uint16_t **)input_3[1];
        extension = (WD_LAYOUT_77 *)input_3[2];
        if (!file_name && (status = FltGetFileNameInformation(data_2, 0x101, &file_name_3), status <= -1))
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x69, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), (uint64_t)KeGetCurrentThread(), (uint64_t)((uint64_t)wide_text_2) & 0xffffffff00000000 | (uint64_t)status & 0xffffffff);
            }
            block_1:
            data = data_2;

            goto block_3;
        }
        record = record_3;
        if (*(uint8_t *)input_3 & 0x10)
        {
            if (value_3)
            {
                buffer_2[0] = 0;
                status = FltIsDirectory(((uint64_t *)input)[4], ((uint64_t *)input)[3], buffer_2);
                if (0 <= status)
                {
                    byte_value_3 = buffer_2[0];
                }
                else
                {
                    byte_value_3 = 0;
                    buffer_2[0] = 0;
                }
                if (file_name)
                {
                    file_name_2 = record_2;
                    file_object = record_2;
                }
                else
                {
                    file_name_2 = file_name_3;
                    file_object = ((WD_LAYOUT_77 **)input)[3];
                    extension = record_2;
                }
                if (MpFsHardeningData && record_3 && (file_name_2 || file_name))
                {
                    data_pointer = values;
                    values[0] = 0;
                    wide_text_2 = NULL;
                    byte_value_4 = FsHardeningMatch(file_name_2, file_name, extension, file_object, NULL);
                    if (byte_value_4)
                    {
                        extension = record_2;
                        if (values[0] & 1)
                        {
                            extension = (WD_LAYOUT_77 *)((uint64_t)byte_value_4);
                        }
                        byte_value_2 = (char)extension;
                        if (values[0] & 2)
                        {
                            wide_text_2 = file_name;
                            MpTraceFsHardeningNotification(((uint64_t)((uint64_t)((uint32_t)(values[0] >> 8))) & 0xffffffffffffffULL) << 8 | (uint64_t)1 & 0xffULL, extension, record_3->field_0x80, file_name_2, file_name, (uint32_t)value & 0xffffff00 | (uint32_t)byte_value_3 & 0xff, data_pointer);
                        }
                    }
                    else
                    {
                        byte_value_2 = 1;
                    }
                }
                byte_value_2 = byte_value_2 == '\0';
                record = record_3;
            }
            else
            {
                byte_value_2 = MpIsAMPath(record_3, file_name_3, file_name);
            }
            if (!byte_value_2)
            {
                goto block_2;
            }
            ((uint32_t *)data_2)[6] = WD_STATUS_ACCESS_DENIED;
            ((uint64_t *)data_2)[4] = 0;
            data = data_2;
        }
        else
        {
            block_2:
            data = data_2;

            record = record_3;
            if (!(*(uint32_t *)input_3 >> 0xf & 1))
            {
                goto block_1;
            }
            if (!file_name)
            {
                file_name = &file_name_3->field_0x8;
            }
            byte_value = MpApplyFolderGuard(data_2, input, record_3, file_name, (uint64_t)wide_text_2 & 0xffffffffffffff00);
            if (!byte_value)
            {
                goto block_3;
            }
            MpRemoveWriteAccess(data);
        }
        wide_text = L"CFA";
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
        {
            PsGetCurrentProcessId();
            WPP_SF_ZZDS(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x6a);
            record = record_3;
        }
        if (!byte_value && (wide_text = L"DynamicFsHardening", !value_3))
        {
            wide_text = L"FsHardening";
        }
        if (record)
        {
            record_2 = record->field_0x80;
        }
        process_id = PsGetCurrentProcessId();
        MpLogPrintfW(L"[Mini-filter] Denied access to file [%wZ] from process [%wZ][Pid:%u] on Post-Create. Reason: %ws.", *(int64_t *)(((int64_t *)data)[2] + 8) + 0x58, record_2, process_id, wide_text);
    }
    else
    {
        block_3:
        if (status == -0x3ffffee0 || status == -0x3fffffb5)
        {
            ((int32_t *)data)[6] = status;
            ((uint64_t *)data)[4] = 0;
        }
    }
    if (file_name_3)
    {
        FltReleaseFileNameInformation();
    }
    return;
}

void MpCheckLoopbackOnPostCreate(WD_LAYOUT_4 *data, void *input, uint64_t *input_2)
{
    int32_t status;
    uint64_t value_2;
    int32_t values[2];
    char buffer_2[8];
    int64_t file_name = 0;
    uint64_t destination_string;
    uint64_t value_3;
    values[0] = 0;
    value_3 = 0;
    destination_string = 0;
    buffer_2[0] = '\0';
    if (*(uint32_t *)input_2 >> 0xc & 1)
    {
        return;
    }
    FltGetFileSystemType(((uint64_t *)input)[3], values);
    if (values[0] != 0xd)
    {
        *input_2 = *input_2 | 0x1000;
        return;
    }
    status = MpIsLoopbackByObj(input, 0, buffer_2);
    if (0 <= status)
    {
        *input_2 = *input_2 | 0x1000;
        if (buffer_2[0])
        {
            if (*(uint32_t *)(*(int64_t *)(data->field_0x10 + 0x18) + 0x10) & 8)
            {
                status = MpQueryLoopbackLocalPathByFileObject(input, ((int64_t *)input)[4], &value_3, &destination_string);
                if (status <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    value_2 = 0x7f;
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), (uint64_t)KeGetCurrentThread(), status);
                }
            }
            else
            {
                status = FltGetFileNameInformation(data, 0x102, &file_name);
                if (0 <= status)
                {
                    status = MpQueryLoopbackLocalPathByName(input, file_name, &value_3, &destination_string);
                    if (status <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        value_2 = 0x7e;
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), (uint64_t)KeGetCurrentThread(), status);
                    }
                }
                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    value_2 = 0x7d;
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), (uint64_t)KeGetCurrentThread(), status);
                }
            }
        }
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        value_2 = 0x7c;
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), (uint64_t)KeGetCurrentThread(), status);
    }
    input_2[1] = value_3;
    input_2[2] = destination_string;
    if (file_name)
    {
        FltReleaseFileNameInformation();
    }
    return;
}

void MpApplyFolderGuard(WD_LAYOUT_4 *input, void *input_2, void *input_3, WD_UNICODE_STRING_VALUE *input_4, char input_5)
{
    int64_t value;
    uint64_t value_2;
    uint64_t *data_pointer;
    uint32_t value_3;
    uint64_t value_4;
    int64_t value_5;
    uint64_t value_6;
    int32_t value_8;
    char byte_value;
    char buffer_2[8];
    uint64_t value_9;
    uint64_t value_10;
    uint64_t value_11;
    value_3 = (uint32_t)((uint64_t)value_2 >> 0x20);
    if (!MpFgIsFileProtected(input_4))
    {
        return;
    }
    buffer_2[0] = '\0';
    value_11 = 0;
    value_5 = 0;
    if (input_5)
    {
        block_1:
        buffer_2[0] = '\x01';

        block_2:
        byte_value = buffer_2[0];
    }
    else
    {
        value = input->field_0x10;
        if (!(*(char *)(value + 4)))
        {
            if (*(uint32_t *)(value + 0x20) & 1 || (buffer_2[0] = '\0', *(uint8_t *)(value + 6) & 4))
            {
                goto block_1;
            }
            goto block_2;
        }
        FltIsDirectory(((uint64_t *)input_2)[4], ((uint64_t *)input_2)[3], buffer_2);
        byte_value = buffer_2[0];
    }
    value_5 = input_4->Buffer;
    WdStoreField(&value_11, 0, 4, (uint64_t)(((uint64_t)input_4->Length & 0xffffULL) << 16 | (uint64_t)input_4->Length & 0xffffULL));
    if (!byte_value)
    {
        data_pointer = &value_9;
        value_9 = 0;
        value_4 = 0;
        value_10 = 0;
        value_6 = 0;
        MpParseFileName(input_4, NULL, &value_10, NULL, data_pointer, NULL);
        value_3 = (uint32_t)((uint64_t)data_pointer >> 0x20);
        if ((int16_t)value_10)
        {
            value_11 = ((uint64_t)WdLoadField(&value_11, 2, 6) & 0xffffffffffffULL) << 16 | (uint64_t)((int16_t)value_11 - (int16_t)value_9) & 0xffffULL;
        }
    }
    value_8 = MpFgSendNotification(input_3, &value_11, 0);
    if (value_8 <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x58, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)value_8 & 0xffffffffULL);
    }
    return;
}

void MpRemoveWriteAccess(WD_LAYOUT_4 *input)
{
    uint32_t *data_pointer;
    uint32_t value;
    uint32_t value_2;
    uint32_t value_3;
    int64_t value_4;
    int64_t provider;
    uint32_t process_id;
    uint32_t value_5;
    value_4 = *(int64_t *)(input->field_0x10 + 0x18);
    provider = *(int64_t *)(value_4 + 8);
    value = *(uint32_t *)(provider + 0x18);
    value_2 = *(uint32_t *)(provider + 0x14);
    value_3 = *(uint32_t *)(provider + 0x10);
    if (*(uint32_t *)(value_4 + 0x10) & 0x2000000)
    {
        *(uint32_t *)(provider + 0x10) = value_3 & 0xfdffffff;
        data_pointer = (uint32_t *)(*(int64_t *)(input->field_0x10 + 0x18) + 0x10);
        *data_pointer = *data_pointer & 0xfdffffff;
        data_pointer = (uint32_t *)(*(int64_t *)(*(int64_t *)(input->field_0x10 + 0x18) + 8) + 0x14);
        *data_pointer = *data_pointer & 0xfdffffff;
        data_pointer = (uint32_t *)(*(int64_t *)(*(int64_t *)(input->field_0x10 + 0x18) + 8) + 0x10);
        *data_pointer = *data_pointer | 0x200a9;
        data_pointer = (uint32_t *)(*(int64_t *)(input->field_0x10 + 0x18) + 0x10);
        *data_pointer = *data_pointer | 0x200a9;
        data_pointer = (uint32_t *)(*(int64_t *)(*(int64_t *)(input->field_0x10 + 0x18) + 8) + 0x14);
        *data_pointer = *data_pointer | 0x200a9;
        if (*(uint32_t *)(*(int64_t *)(input->field_0x10 + 8) + 0x50) & 0x400000)
        {
            data_pointer = (uint32_t *)(*(int64_t *)(*(int64_t *)(input->field_0x10 + 0x18) + 8) + 0x10);
            *data_pointer = *data_pointer | 0x100;
            data_pointer = (uint32_t *)(*(int64_t *)(input->field_0x10 + 0x18) + 0x10);
            *data_pointer = *data_pointer | 0x100;
            data_pointer = (uint32_t *)(*(int64_t *)(*(int64_t *)(input->field_0x10 + 0x18) + 8) + 0x14);
            *data_pointer = *data_pointer | 0x100;
        }
    }
    value_5 = *(uint32_t *)(*(int64_t *)(input->field_0x10 + 8) + 0x50) >> 0xe & 0x100 | 0xfff2fea9;
    data_pointer = (uint32_t *)(*(int64_t *)(*(int64_t *)(input->field_0x10 + 0x18) + 8) + 0x14);
    *data_pointer = *data_pointer & value_5;
    data_pointer = (uint32_t *)(*(int64_t *)(*(int64_t *)(input->field_0x10 + 0x18) + 8) + 0x10);
    *data_pointer = *data_pointer & value_5;
    data_pointer = (uint32_t *)(*(int64_t *)(input->field_0x10 + 0x18) + 0x10);
    *data_pointer = *data_pointer & value_5;
    *(char *)(input->field_0x10 + 0x23) = 0;
    data_pointer = (uint32_t *)(input->field_0x10 + 0x20);
    *data_pointer = *data_pointer | 0x1000000;
    data_pointer = (uint32_t *)(input->field_0x10 + 0x20);
    *data_pointer = *data_pointer & 0xffffefff;
    FltSetCallbackDataDirty(input);
    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
    {
        value_4 = input->field_0x10;
        provider = *(int64_t *)(value_4 + 0x18);
        WPP_SF_ZDDDDDD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), *(int64_t *)(provider + 8), provider, (int16_t *)(*(int64_t *)(value_4 + 8) + 0x58), *(uint32_t *)(provider + 0x10), value, value_2, value_3, *(uint32_t *)(*(int64_t *)(provider + 8) + 0x10), *(uint32_t *)(value_4 + 0x20));
    }
    process_id = PsGetCurrentProcessId();
    value_4 = input->field_0x10;
    MpLogPrintfW(L"[Mini-filter][CFA] Removed write access from file [%wZ] Pid[%u] OriginalDesiredAccess[0x%x] PreviouslyGrantedAccess[0x%x] RemainingDesiredAccess[0x%x]->[0x%x] CreateOptions[0x%x]", *(int64_t *)(value_4 + 8) + 0x58, process_id, value, value_2, value_3, *(uint32_t *)(*(int64_t *)(*(int64_t *)(value_4 + 0x18) + 8) + 0x10), *(uint32_t *)(value_4 + 0x20));
    return;
}

uint64_t MpCheckForFolderGuard(uint64_t input, uint64_t input_2, void *input_3)
{
    uint32_t value;
    uint64_t data;
    data = MpData;
    if (*(uint32_t *)(MpData + 0x360) & 8 && (data = ((uint32_t *)input_3)[0xd], !(((uint32_t *)input_3)[0xd] & 8)))
    {
        value = ((uint32_t *)input_3)[0xe];
        data = value;
        if (value >> 0x11 & 1)
        {
            return (uint64_t)(((uint64_t)((uint32_t)(value >> 0x1c)) & 0xffffffULL) << 8 | (uint64_t)(~(uint8_t)(value >> 0x14)) & 0xffULL) & 0xffffffffffffff01;
        }
    }
    return data & 0xffffffffffffff00;
}

void MpPreQueryOpen(void *data, void *objects)
{
    uint64_t value;
    char byte_value;
    int32_t value_2;
    int64_t value_3;
    uint32_t values[2];
    char *bytes;
    if (*(int32_t *)(MpData + 0xff0))
    {
        value = *(uint64_t *)(MpData + 0x10);
        value_3 = 0;
        bytes = NULL;
        values[0] = 0;
        if (0 <= (int32_t)FltGetEcpListFromCallbackData(value, data, &value_3) && value_3)
        {
            value_2 = FltFindExtraCreateParameter(value, value_3, WD_SYMBOL_ADDRESS(ECP_TYPE_VETO_BINDING), &bytes, values);
            if (0 <= value_2)
            {
                byte_value = FltIsEcpFromUserMode(value, bytes);
                if (!byte_value)
                {
                    if (MpHardenBindFltBind(data, objects) == 0x1c0001)
                    {
                        *bytes = 1;
                        FltAcknowledgeEcp(((uint64_t *)objects)[1]);
                    }
                }
            }
        }
    }
    return;
}

void MpSendRawVolumeWriteAsyncMessage(WD_LAYOUT_4 *input, WD_LAYOUT_10 *input_2, uint64_t input_3, uint64_t input_4, char input_5)
{
    uint16_t value;
    int32_t value_2;
    int64_t value_3;
    uint64_t value_4;
    uint32_t value_5;
    uint64_t value_6;
    uint64_t value_7;
    uint32_t value_8;
    int64_t process_context;
    int64_t value_10;
    int32_t value_11;
    uint64_t creation_time;
    int64_t process_context_2;
    int64_t value_12;
    uint32_t value_13;
    value_5 = (uint32_t)((uint64_t)value_4 >> 0x20);
    value_3 = 0;
    value_12 = 0;
    value_8 = 0;
    value_2 = 0x58;
    process_context_2 = 0;
    value_13 = 0;
    value_6 = input_3;
    value_7 = input_4;
    MpGetProcessContextByObject(MpGetRequestorProcess(input), &process_context_2);
    process_context = process_context_2;
    if (*(uint32_t *)(MpData + 0x364) & 1)
    {
        if (!process_context_2)
        {
            return;
        }
        if ((!(*(uint32_t *)(process_context_2 + 0x34) & 8) || !(*(uint32_t *)(process_context_2 + 0x38) >> 0xe & 1)) && (!(*(uint32_t *)(process_context_2 + 0x34) & 1) || *(uint32_t *)(process_context_2 + 0x38) >> 0xe & 1) && !(*(uint32_t *)(process_context_2 + 0x38) & 4))
        {
            value_11 = MpQuerySessionId();
            if (value_11 <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                creation_time = ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)value_11 & 0xffffffffULL;
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x49, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), (uint64_t)KeGetCurrentThread(), creation_time);
                value_5 = (uint32_t)((uint64_t)creation_time >> 0x20);
            }
            if (input_2 && (value = input_2->field_0x0, value))
            {
                value_13 = value + 2;
                value_3 = 0x58;
                value_2 = value + 0x5a;
            }
            value_11 = MpAsyncCreateNotification(&value_12, value_2);
            value_10 = value_12;
            if (0 <= value_11)
            {
                if (value_13)
                {
                    memmove((uint64_t *)(value_3 + value_12), input_2->field_0x8, value_13 - 2ULL);
                    *(uint16_t *)(value_10 + (value_13 + 0x56ULL & 0xfffffffffffffffe)) = 0;
                }
                *(uint32_t *)(value_10 + 0x38) = value_13;
                *(int64_t *)(value_10 + 0x30) = value_3;
                *(uint64_t *)(value_10 + 0x40) = value_6;
                *(uint64_t *)(value_10 + 0x48) = value_7;
                *(char *)(value_10 + 0x50) = input_5;
                *(uint32_t *)(value_10 + 0x18) = MpGetRequestorProcessId(input);
                creation_time = PsGetProcessCreateTimeQuadPart(MpGetRequestorProcess(input));
                *(uint64_t *)(value_10 + 0x1c) = MpFileTimeFromUlong64(creation_time);
                *(uint32_t *)(value_10 + 0x28) = value_8;
                *(uint32_t *)(value_10 + 0x24) = PsGetCurrentThreadId();
                *(int32_t *)(value_10 + 8) = value_2;
                *(uint32_t *)(value_10 + 0x10) = 5;
                value_3 = process_context;
                value_2 = MpAsyncSendNotification(value_10, value_2, 1, 1, process_context);
                if (value_2 <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x4a, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), (uint64_t)KeGetCurrentThread(), (uint64_t)value_3 & 0xffffffff00000000 | (uint64_t)value_2 & 0xffffffff);
                }
                MpAsyncDereferenceNotification(value_10);
            }
            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x4b, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)value_11 & 0xffffffffULL);
            }
        }
    }
    if (process_context)
    {
        MpReleaseProcessContext(process_context);
    }
    return;
}

void MpDlpPostCreate(void *data, void *input, void *input_2, uint64_t *input_3, void *input_4)
{
    uint64_t value;
    char event_id[28];
    bool enabled;
    uint64_t value_2;
    uint64_t value_3;
    void *data_pointer;
    int64_t value_4;
    uint32_t value_5;
    uint64_t *data_pointer_2;
    uint32_t value_6;
    int32_t status;
    uint64_t *data_pointer_3;
    uint64_t *data_pointer_4;
    char *bytes;
    uint32_t value_7;
    int32_t value_8;
    uint32_t value_9;
    uint16_t *wide_text;
    uint32_t value_10;
    char buffer[32];
    char buffer_2[4];
    int64_t instance_context;
    data_pointer = input_4;
    value_5 = (uint32_t)((uint64_t)value_2 >> 0x20);
    WdStoreField(&event_id, 4, 8, (uint64_t)(__security_cookie ^ (uint64_t)buffer));
    value_8 = 0;
    WdStoreField(&event_id, 0, 4, (uint64_t)0);
    buffer_2[0] = '\0';
    if (!data || !input || !input_2 || (!input_3 || ((int32_t *)data)[6] < 0))
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x6d, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INVALID_PARAMETER & 0xffffffffULL);
        }
        __security_check_cookie(WdLoadField(&event_id, 4, 8) ^ (uint64_t)buffer);
        return;
    }
    value = *input_3;
    if (value & 0x101 || (FltIsDirectory(((uint64_t *)input)[4], ((uint64_t *)input)[3], buffer_2), buffer_2[0]))
    {
        __security_check_cookie(WdLoadField(&event_id, 4, 8) ^ (uint64_t)buffer);
        return;
    }
    if (data_pointer)
    {
        value_10 = *(uint32_t *)(((int64_t *)data_pointer)[1] + 0x54);
    }
    else
    {
        instance_context = 0;
        status = FltGetInstanceContext(((uint64_t *)input)[3], &instance_context);
        if (0 <= status)
        {
            value_10 = *(uint32_t *)(instance_context + 0x54);
            FltReleaseContext();
        }
        else
        {
            value_10 = 0;
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && (value_10 = 0, *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                value_3 = ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL;
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x6e, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), (uint64_t)KeGetCurrentThread(), value_3);
                value_5 = (uint32_t)((uint64_t)value_3 >> 0x20);
            }
        }
    }
    status = MpCheckLoopbackOnPostCreate(data, input, input_3);
    if (status <= -1)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x6f, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
        }
        __security_check_cookie(WdLoadField(&event_id, 4, 8) ^ (uint64_t)buffer);
        return;
    }
    if (value & 0x200 || input_3[1])
    {
        if (value_10 & 0x10 || !MpIsPotentialRemoteOpen(data))
        {
            data_pointer_2 = NULL;
            value_8 = MpDlpCheckFileAccess(data, input, input_2, value_10, data_pointer, NULL, input_3, 0, 0, event_id);
            value_5 = (uint32_t)((uint64_t)data_pointer >> 0x20);
        }
        else
        {
            if (value >> 0xd & 1 || *(uint32_t *)(MpData + 0x360) & 0x4000)
            {
                goto block_1;
            }
            data_pointer_4 = (uint64_t *)event_id;
            value_8 = MpDlpAtomicCheckFileAndOperationAccess(data, input, input_2, value_10);
            data_pointer_2 = input_3;
            input_3 = data_pointer_4;
        }
        if (value_8 != 2)
        {
            enabled = value_8 == 1;
            goto block_2;
        }
        MpLogPrintfW(L"[DLP-filter] Denied access to sensitive file \'%wZ\' for Process \'%wZ\' (pid = %#x), reason: %d", *(int64_t *)(((int64_t *)data)[2] + 8) + 0x58, ((uint64_t *)input_2)[0x10], ((uint32_t *)input_2)[6], ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)WdLoadField(&event_id, 0, 4) & 0xffffffffULL, data_pointer_2, input_3);
        MpDlpBlockActionToNtStatus(input_2, event_id, &((uint32_t *)data)[6]);
        ((uint64_t *)data)[4] = 0;
    }
    else
    {
        block_1:
        input_3 = data_pointer_3;

        enabled = 0;
        block_2:
        value_7 = (uint32_t)((uint64_t)input_3 >> 0x20);

        value_6 = (uint32_t)((uint64_t)data_pointer_2 >> 0x20);
        if (*(uint32_t *)(*(int64_t *)(((int64_t *)data)[2] + 0x18) + 0x10) & 0x2000006 && !enabled && !(value & 0x200))
        {
            if (value_10 & 0x10)
            {
                value_4 = ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)1 & 0xffffffffULL;
            }
            else
            {
                if (!(value_10 >> 0xb & 1))
                {
                    goto block_3;
                }
                value_4 = (uint64_t)value_5 << 0x20;
            }
            value_6 = 0;
            bytes = event_id;
            value_8 = MpDlpCheckOperation(data, input, input_2, value_10, value_4, NULL, bytes);
            value_7 = (uint32_t)((uint64_t)bytes >> 0x20);
        }
        block_3:
        if (value_8 != 2)
        {
            if (value_10 & 0x10)
            {
                value_9 = 4;
            }
            else
            {
                if (!(value_10 >> 0xb & 1))
                {
                    __security_check_cookie(WdLoadField(&event_id, 4, 8) ^ (uint64_t)buffer);
                    return;
                }
                value_9 = 2;
            }
            MpDlpSetProcessEntryFlags(data, input, input_2, NULL, NULL, ((uint64_t)value_6 & 0xffffffffULL) << 32 | (uint64_t)value_10 & 0xffffffffULL, ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)value_9 & 0xffffffffULL);
            __security_check_cookie(WdLoadField(&event_id, 4, 8) ^ (uint64_t)buffer);
            return;
        }

        wide_text = L"remote/external device";
        if (!(value_10 & 0x10))
        {
            wide_text = L"spooler file";
        }
        MpLogPrintfW(L"[DLP-filter] Denied Process \'%wZ\' (pid = %#x) from opening file \'%wZ\' for write on %ws. reason: %d", ((uint64_t *)input_2)[0x10], ((uint32_t *)input_2)[6], *(int64_t *)(((int64_t *)data)[2] + 8) + 0x58, wide_text, ((uint64_t)value_6 & 0xffffffffULL) << 32 | (uint64_t)WdLoadField(&event_id, 0, 4) & 0xffffffffULL);
        MpDlpBlockActionToNtStatus(input_2, event_id, &((uint32_t *)data)[6]);
        ((uint64_t *)data)[4] = 0;
    }
    FltCancelFileOpen(((uint64_t *)input)[3], ((uint64_t *)input)[4]);
    __security_check_cookie(WdLoadField(&event_id, 4, 8) ^ (uint64_t)buffer);
    return;
}

uint64_t MpHandleQueryEaEcpPreCreate(WD_LAYOUT_36 *input, int64_t input_2)
{
    int32_t value;
    uint64_t value_2 = 1;
    if (input && input_2)
    {
        if (*(int64_t *)(MpData + 0x58) && *(uint32_t *)(MpData + 0x360) & 0x800)
        {
            value = (*__guard_dispatch_icall_fptr)(*(uint64_t *)(MpData + 0x10), input, 4);
            if (0 <= value)
            {
                value_2 = 5;
            }
            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 10, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), input->field_0x8, value);
            }
        }
    }
    return value_2;
}

void MpHardenBindFltBind(void *data, WD_LAYOUT_76 *input)
{
    uint64_t process_context;
    uint64_t current_thread;
    uint64_t process_context_2 = 0;
    int64_t file_name = 0;
    int16_t *trace_argument_2;
    uint32_t value;
    uint64_t value_2;
    uint32_t value_3;
    uint64_t *data_pointer;
    char byte_value;
    uint8_t byte_value_2;
    int32_t status;
    uint32_t process_id;
    uint32_t process_id_2;
    int64_t requestor_process;
    uint64_t value_5;
    uint64_t value_6;
    if (data && input && *(char *)(((int64_t *)data)[2] + 4) == '\xf9' && (current_thread = (uint64_t)KeGetCurrentThread(), requestor_process = *(int64_t *)(MpData + 0xe8), IoThreadToProcess(current_thread) != requestor_process && (current_thread = (uint64_t)KeGetCurrentThread(), requestor_process = *(int64_t *)(MpData + 0x100), IoThreadToProcess(current_thread) != requestor_process)) && (requestor_process = MpGetRequestorProcess(data), requestor_process && *__imp_PsInitialSystemProcess != requestor_process))
    {
        status = MpGetProcessContextByObject(requestor_process, &process_context_2);
        process_context = process_context_2;
        if (0 <= status)
        {
            value_6 = value_2 & 0xffffffffffffff00;
            value = *(uint32_t *)(MpData + 0x364) & 0x4000;
            byte_value = MpCheckForAmHardening(data, input, 0, process_context_2, value_6);
            process_id = (uint32_t)(value_6 >> 0x20);
            if (byte_value)
            {
                status = FltGetFileNameInformation(data, 0x101, &file_name);
                requestor_process = file_name;
                process_id_2 = (uint32_t)((uint64_t)data_pointer >> 0x20);
                if (0 <= status)
                {
                    if (value)
                    {
                        if (MpFsHardeningData && process_context && file_name)
                        {
                            data_pointer = &process_context_2;
                            process_context_2 &= 0xffffffff00000000;
                            current_thread = 0;
                            process_id = 0;
                            value_5 = file_name;
                            byte_value_2 = FsHardeningMatch(file_name, NULL, NULL, input->field_0x18, NULL);
                            value_6 = (uint64_t)value_5 & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
                            if (byte_value_2)
                            {
                                byte_value_2 = -((process_context_2 & 1) != 0) & byte_value_2;
                                if (process_context_2 & 2)
                                {
                                    process_id = 0;
                                    MpTraceFsHardeningNotification(value_6, (uint64_t)current_thread & 0xffffffffffffff00 | (uint64_t)byte_value_2 & 0xff, *(WD_LAYOUT_77 **)(process_context + 0x80), requestor_process, NULL, value_3 & 0xffffff00, data_pointer);
                                }
                                value_6 = byte_value_2;
                            }
                        }
                        else
                        {
                            value_6 = 0;
                        }
                        process_id_2 = (uint32_t)((uint64_t)data_pointer >> 0x20);
                        byte_value = (char)value_6 == '\0';
                    }
                    else
                    {
                        byte_value = MpIsAMPath(process_context, file_name, NULL);
                    }
                    if (byte_value)
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                        {
                            if (process_context)
                            {
                                trace_argument_2 = *(int16_t **)(process_context + 0x80);
                            }
                            else
                            {
                                trace_argument_2 = NULL;
                            }
                            process_id = PsGetCurrentProcessId();
                            WPP_SF_ZZDd(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x5f, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), (int16_t *)(*(int64_t *)(((int64_t *)data)[2] + 8) + 0x58), trace_argument_2, process_id, ((uint64_t)process_id_2 & 0xffffffffULL) << 32 | (uint64_t)((uint32_t)(value != 0)) & 0xffffffffULL);
                            process_id = (uint32_t)((uint64_t)trace_argument_2 >> 0x20);
                        }
                        if (process_context)
                        {
                            current_thread = *(uint64_t *)(process_context + 0x80);
                        }
                        else
                        {
                            current_thread = 0;
                        }
                        process_id_2 = PsGetCurrentProcessId();
                        MpLogPrintfW(L"[Mini-filter] Denied access to file [%wZ] from process [%wZ][Pid:%u]. DynamicFsHardeningEnabled[%d].", *(int64_t *)(((int64_t *)data)[2] + 8) + 0x58, current_thread, process_id_2, ((uint64_t)process_id & 0xffffffffULL) << 32 | (uint64_t)((uint32_t)(value != 0)) & 0xffffffffULL);
                    }
                }
                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x5e, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)process_id & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
                }
            }
            if (process_context)
            {
                MpReleaseProcessContext(process_context);
            }
            if (file_name)
            {
                FltReleaseFileNameInformation();
            }
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x5d, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), ((uint64_t *)data)[1], (uint64_t)value_2 & 0xffffffff00000000 | (uint64_t)status & 0xffffffff);
        }
    }
    return;
}

void MpPostCreate(void *data, void *objects, uint64_t *completion_context, uint64_t flags)
{
    int32_t *data_pointer;
    WD_LAYOUT_112 *record;
    int64_t *allocation;
    int64_t context;
    void *data_pointer_2;
    int16_t *source_text;
    int64_t handle_context;
    uint64_t file_name;
    uint64_t *context_2;
    char buffer_2[8];
    uint32_t value;
    int64_t process_context;
    int64_t context_3;
    uint64_t value_2;
    int64_t *data_pointer_3;
    uint64_t value_3;
    uint64_t *data_pointer_4;
    uint64_t value_4;
    uint32_t value_5;
    uint64_t value_6;
    uint64_t current_thread;
    uint32_t value_7;
    uint64_t value_8;
    uint64_t value_9;
    int64_t process_context_2;
    uint64_t trace_handle;
    uint64_t *data_pointer_5;
    char byte_value;
    int32_t status;
    uint32_t requestor_process_id;
    value_7 = (uint32_t)((uint64_t)value_6 >> 0x20);
    value_5 = (uint32_t)((uint64_t)value_3 >> 0x20);
    value_2 = 0;
    context_3 = 0;
    process_context = 0;
    if (completion_context)
    {
        value_2 = *completion_context;
    }
    if (flags & 1)
    {
        goto block_4;
    }
    status = ((int32_t *)data)[6];
    if (0 <= status && status != 0x104 && ((int64_t *)objects)[4])
    {
        current_thread = ((uint64_t *)objects)[1];
        handle_context = 0;
        context_2 = NULL;
        file_name &= 0xffffffff00000000;
        if (0 <= (int32_t)FltGetEcpListFromCallbackData(current_thread, data, &handle_context) && handle_context)
        {
            data_pointer_4 = &file_name;
            status = FltFindExtraCreateParameter(current_thread, handle_context, WD_SYMBOL_ADDRESS(GUID_MP_ECP_QUERY_EA), &context_2, data_pointer_4);
            value_5 = (uint32_t)((uint64_t)data_pointer_4 >> 0x20);
            if (0 <= status && (byte_value = FltIsEcpFromUserMode(current_thread, context_2), data_pointer_5 = context_2, !byte_value))
            {
                if (context_2 && (int32_t)file_name && *(int64_t *)(MpData + 0x60) && *(uint32_t *)(MpData + 0x360) & 0x800)
                {
                    file_name &= 0xffffffff00000000;
                    record = (WD_LAYOUT_112 *)(*__guard_dispatch_icall_fptr)(*(uint64_t *)(MpData + 0x10), data, 4, &file_name);
                    if (record)
                    {
                        allocation = MpAllocatePoolWithTag(1, record->field_0x0, 0x6165504d);
                        *data_pointer_5 = allocation;
                        if (allocation)
                        {
                            memmove(allocation, record->field_0x8, record->field_0x0);
                            *(uint32_t *)(&data_pointer_5[1]) = record->field_0x0;
                            FltAcknowledgeEcp(*(uint64_t *)(MpData + 0x10), data_pointer_5);
                        }
                    }
                }
                goto block_3;
            }
        }
        current_thread = ((uint64_t *)objects)[4];
        if (value_2 & 0x20)
        {
            context_2 = NULL;
            buffer_2[0] = 0;
            if (FltSupportsStreamHandleContexts(current_thread))
            {
                status = MpCreateHandleContext(objects, &context_2, buffer_2);
                if (0 <= status && context_2)
                {
                    *(uint32_t *)(&context_2[5]) = *(uint32_t *)(&context_2[5]) | 4;
                    WdUnresolvedAtomicBegin();
                    allocation = (int64_t *)(MpData + 0xe38);
                    *allocation = *allocation + 1;
                    WdUnresolvedAtomicEnd();
                    if (*allocation <= -1)
                    {
                        *(char *)(MpData + 0xe30) = 0;
                    }
                    FltReleaseContext(context_2);
                }
                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qLZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x51, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), ((uint64_t *)data)[1], ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL, (int16_t *)(((int64_t *)objects)[4] + 0x58));
                }
            }
            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x50, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), ((uint64_t *)data)[1], (int16_t *)(((int64_t *)objects)[4] + 0x58));
            }
        }
        else if (FltSupportsStreamContexts(current_thread))
        {
            process_context_2 = ((int64_t *)objects)[4];
            if (*(int64_t *)(process_context_2 + 0x20) || value_2 & 1)
            {
                if (*(uint32_t *)(process_context_2 + 0x50) & 0x280)
                {
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                    {
                        WPP_SF_qZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x54, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), ((uint64_t *)data)[1], (int16_t *)(process_context_2 + 0x58));
                    }
                }
                else
                {
                    current_thread = (uint64_t)KeGetCurrentThread();
                    process_context_2 = *(int64_t *)(MpData + 0xe8);
                    if (IoThreadToProcess(current_thread) != process_context_2 && (current_thread = (uint64_t)KeGetCurrentThread(), process_context_2 = *(int64_t *)(MpData + 0x100), IoThreadToProcess(current_thread) != process_context_2))
                    {
                        status = MpGetProcessContextByObject(MpGetRequestorProcess(data), &process_context);
                        if (status <= -1 && (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2))
                        {
                            current_thread = ((uint64_t *)data)[1];
                            trace_handle = *(uint64_t *)(WPP_GLOBAL_Control + 0x18);
                            requestor_process_id = MpGetRequestorProcessId(data);
                            value_4 = ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)requestor_process_id & 0xffffffffULL;
                            WPP_SF_qDL(trace_handle, 0x55, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), current_thread, value_4, ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
                            value_5 = (uint32_t)((uint64_t)value_4 >> 0x20);
                        }
                        process_context_2 = process_context;
                        if (value_2 & 0x8010 && process_context)
                        {
                            status = MpHardenPathOnPostCreate(data, objects, process_context, completion_context);
                            if (status != 0x1c0001)
                            {
                                if (status <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                {
                                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x56, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), ((uint64_t *)data)[1], ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
                                }
                                goto block_2;
                            }
                            FltCancelFileOpen(((uint64_t *)objects)[3], ((uint64_t *)objects)[4]);
                        }
                        else
                        {
                            block_2:
                            if (!(value_2 >> 10 & 1))
                            {
                                if (!(value_2 & 8) && !MpIsProcessExemptByContext(process_context_2))
                                {
                                    allocation = &context_3;
                                    data_pointer_2 = objects;
                                    MpAmPostCreate(data, objects, completion_context, process_context_2, allocation);
                                    context = MpProcessTable;
                                    if (value_2 & 0x40 && (0 <= ((int32_t *)data)[6] && process_context_2))
                                    {
                                        file_name = 0;
                                        handle_context = 0;
                                        process_context = 0;
                                        value_8 = 0;
                                        if ((!(*(uint32_t *)(process_context_2 + 0x34) & 8) || !(*(uint32_t *)(process_context_2 + 0x38) & 0x4000)) && ((!(*(uint32_t *)(process_context_2 + 0x34) & 1) || *(uint32_t *)(process_context_2 + 0x38) & 0x4000) && !(*(uint32_t *)(process_context_2 + 0x38) & 4)))
                                        {
                                            KeEnterCriticalRegion();
                                            ExAcquireResourceSharedLite(context + 8, (uint64_t)((uint64_t)data_pointer_2) & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
                                            context = *(int64_t *)(process_context_2 + 0x50);
                                            if (context)
                                            {
                                                WdAtomicAdd32((volatile int32_t *)((int32_t *)(context + 4)), 1);
                                                ExReleaseResourceLite(MpProcessTable + 8);
                                                KeLeaveCriticalRegion();
                                                if (0 <= (int32_t)FltGetFileNameInformation(data, 0x102, &file_name) && (status = FltParseFileNameInformation(file_name), 0 <= status) && (source_text = *(int16_t **)(context + 0x220), source_text && *(int16_t *)(file_name + 0x38)))
                                                {
                                                    while (true)
                                                    {
                                                        context_2 = NULL;
                                                        value_9 = 0;
                                                        if (!source_text)
                                                        {
                                                            break;
                                                        }
                                                        data_pointer_3 = &handle_context;
                                                        status = RtlStringLengthWorkerW(source_text, 0x105, data_pointer_3);
                                                        if (status < 0)
                                                        {
                                                            break;
                                                        }
                                                        if (!handle_context)
                                                        {
                                                            goto block_1;
                                                        }
                                                        RtlInitUnicodeString(&context_2, source_text);
                                                        byte_value = RtlEqualUnicodeString(&context_2, file_name + 0x38, (uint64_t)((uint64_t)data_pointer_3) & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
                                                        value_5 = (uint32_t)((uint64_t)allocation >> 0x20);
                                                        if (byte_value)
                                                        {
                                                            value_8 = *(uint64_t *)(file_name + 0x10);
                                                            process_context = ((uint64_t)(((uint64_t)WdLoadField(&process_context, 4, 4) & 0xffffffffULL) << 16 | (uint64_t)(*(uint16_t *)(file_name + 10)) & 0xffffULL) & 0xffffffffffffULL) << 16 | (uint64_t)(*(int16_t *)(file_name + 8) - *(int16_t *)(file_name + 0x48)) & 0xffffULL;
                                                            status = MpSendDocOpenMessage(data, context + 0x10, &process_context, process_context_2);
                                                            if (status <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                                            {
                                                                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x28, WD_SYMBOL_ADDRESS(WPP_52d92c1823383785ccf1919561da03b4_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
                                                            }
                                                            goto block_1;
                                                        }
                                                        source_text = &source_text[handle_context + 1];
                                                    }

                                                    handle_context = 0;
                                                }
                                            }
                                            else
                                            {
                                                ExReleaseResourceLite(MpProcessTable + 8);
                                                KeLeaveCriticalRegion();
                                            }
                                            block_1:
                                            if (file_name)
                                            {
                                                FltReleaseFileNameInformation();
                                            }

                                            if (context)
                                            {
                                                WdUnresolvedAtomicBegin();
                                                data_pointer = (int32_t *)(context + 4);
                                                status = *data_pointer;
                                                *data_pointer = *data_pointer + -1;
                                                WdUnresolvedAtomicEnd();
                                                if (status == 1)
                                                {
                                                    if (*(int64_t *)(context + 0x220))
                                                    {
                                                        ExFreePoolWithTag(*(int64_t *)(context + 0x220), 0x6f64504d);
                                                    }
                                                    ExFreeToPagedLookasideList((void *)(MpBmDocOpenRules + 0x80), context);
                                                }
                                            }
                                        }
                                    }
                                }
                                if (context_3 && *(int64_t *)(MpData + 0x60))
                                {
                                    file_name &= 0xffffffff00000000;
                                    context = (*__guard_dispatch_icall_fptr)(*(uint64_t *)(MpData + 0x10), data, 1, &file_name);
                                    if (context)
                                    {
                                        *(uint32_t *)(context_3 + 0x27c) = *(uint32_t *)(context + 0x3c);
                                    }
                                }
                                if (0 <= ((int32_t *)data)[6])
                                {
                                    if (process_context_2)
                                    {
                                        MpDlpPostCreate(data, objects, process_context_2, completion_context, context_3);
                                    }
                                    if (0 <= ((int32_t *)data)[6])
                                    {
                                        if (!process_context_2)
                                        {
                                            goto block_3;
                                        }
                                        MpCopyCacheOnPostCreate(data, objects, process_context_2, context_3);
                                        if (((int64_t *)objects)[4])
                                        {
                                            if (*(int64_t *)(MpData + 0xb8) && *(int64_t *)(MpData + 0x68) && (value = *(uint32_t *)(MpData + 0x1024), value & 1) && (byte_value = (*__guard_dispatch_icall_fptr)(), byte_value == '\x01') && (!(value & 2) || *(int32_t *)(process_context_2 + 0xf0) == 0x14))
                                            {
                                                current_thread = ((uint64_t *)objects)[4];
                                                trace_handle = ((uint64_t *)objects)[3];
                                                handle_context = 0;
                                                if (0 <= (int32_t)FltGetStreamHandleContext(trace_handle, current_thread, &handle_context) && handle_context)
                                                {
                                                    WdAtomicOr32((volatile int32_t *)((uint32_t *)(handle_context + 0x28)), 0x800);
                                                    context = handle_context;
                                                }
                                                else
                                                {
                                                    context = handle_context;
                                                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                                                    {
                                                        WPP_SF_Z(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x82, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), (int16_t *)(((int64_t *)objects)[4] + 0x58));
                                                        context = handle_context;
                                                    }
                                                }
                                                if (context)
                                                {
                                                    FltReleaseContext(context);
                                                }
                                            }
                                        }
                                        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                        {
                                            WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x81, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids));
                                        }
                                    }
                                }
                            }
                        }
                        if (process_context_2)
                        {
                            MpReleaseProcessContext(process_context_2);
                        }
                    }
                }
            }
            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                WPP_SF_qZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x53, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), ((uint64_t *)data)[1], (int16_t *)(process_context_2 + 0x58));
            }
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            WPP_SF_qZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x52, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), ((uint64_t *)data)[1], (int16_t *)(((int64_t *)objects)[4] + 0x58));
        }
    }
    else
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 0x10))
        {
            goto block_4;
        }
        WPP_SF_dZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x4e, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), status, (int16_t *)(((int64_t *)objects)[4] + 0x58));
    }
    block_3:
    if (context_3)
    {
        FltReleaseContext(context_3);
    }

    block_4:
    if (completion_context)
    {
        if (completion_context[1])
        {
            ExFreePoolWithTag(completion_context[1], 0x7375704d);
        }
        if (completion_context[2])
        {
            ExFreePoolWithTag(completion_context[2], 0x7375704d);
        }
        ExFreeToPagedLookasideList((void *)(MpData + 0x380), completion_context);
    }

    return;
}

void MpSendBlockProcessExecMessage(uint64_t data, int32_t input)
{
    int32_t value;
    uint64_t value_2;
    uint32_t value_3;
    uint16_t value_5;
    int64_t value_6;
    int32_t status;
    uint64_t value_7;
    int64_t file_name;
    int64_t value_8;
    value_3 = (uint32_t)((uint64_t)value_2 >> 0x20);
    file_name = 0;
    if (!input)
    {
        return;
    }
    status = FltGetFileNameInformation(data, 0x102, &file_name);
    if (0 <= status)
    {
        value_8 = 0;
        value_5 = *(uint16_t *)(file_name + 8);
        value = value_5 + 0x2a;
        status = MpAsyncCreateNotification(&value_8, value);
        value_6 = value_8;
        if (0 <= status)
        {
            memcpy_s((int64_t *)(value_8 + 0x28), *(uint16_t *)(file_name + 8), *(uint64_t **)(file_name + 0x10), *(uint16_t *)(file_name + 8));
            *(uint16_t *)(value_6 + 0x28 + (uint64_t)(*(uint16_t *)(file_name + 8) >> 1) * 2) = 0;
            *(uint32_t *)(value_6 + 0x24) = value_5 + 2;
            *(int32_t *)(value_6 + 0x20) = input;
            *(uint32_t *)(value_6 + 0x18) = PsGetCurrentProcessId();
            value_3 = 0;
            *(uint32_t *)(value_6 + 0x1c) = PsGetCurrentThreadId();
            *(int32_t *)(value_6 + 8) = value;
            *(uint32_t *)(value_6 + 0x10) = 0x14;
            status = MpAsyncSendNotification(value_6, value, 0, 1, NULL);
            MpAsyncDereferenceNotification(value_6);
            if (status <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                value_7 = 0x72;
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_7, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
            }
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            value_7 = 0x71;
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_7, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
        }
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        value_7 = 0x70;
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_7, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
    }
    if (file_name)
    {
        FltReleaseFileNameInformation();
    }
    return;
}

int32_t MpSendOSCopyHintTelemetry(uint32_t input)
{
    uint16_t value;
    uint32_t value_2;
    uint16_t *string;
    int32_t trace_argument_1;
    uint16_t *values[2];
    int64_t value_3;
    int64_t value_4;
    int64_t value_5;
    int32_t value_6;
    values[0] = NULL;
    value_4 = 0;
    value_3 = 0;
    trace_argument_1 = MpGetProcessName(PsGetCurrentProcessId(), values);
    string = values[0];
    if (0 <= trace_argument_1)
    {
        value = *values[0];
        value_5 = value_4;
        if (value)
        {
            value_6 = value + 0x22;
            trace_argument_1 = MpAsyncCreateNotification(&value_3, value_6);
            value_5 = value_3;
            if (0 <= trace_argument_1)
            {
                memcpy_s((int64_t *)(value_3 + 0x20), &((char *)((uint64_t)value))[2], *(uint64_t **)(&string[4]), (char *)((uint64_t)value));
                value_2 = 0;
                *(uint16_t *)(value_5 + 0x20 + (uint64_t)(value >> 1) * 2) = 0;
                *(int32_t *)(value_5 + 8) = value_6;
                *(uint32_t *)(value_5 + 0x10) = 0x18;
                *(uint32_t *)(value_5 + 0x18) = input;
                *(uint32_t *)(value_5 + 0x1c) = (uint32_t)value;
                trace_argument_1 = MpAsyncSendNotification(value_5, value_6, 0, 1, NULL);
                if (0 <= trace_argument_1)
                {
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                    {
                        WPP_SF_S(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x7b, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), (int16_t *)(value_5 + 0x20));
                    }
                }
                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x7a, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_2 & 0xffffffffULL) << 32 | (uint64_t)trace_argument_1 & 0xffffffffULL);
                }
            }
            else
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x79, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), trace_argument_1);
                }
                value_5 = value_3;
            }
        }
    }
    else
    {
        value_5 = 0;
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && (value_5 = value_4, *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x78, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), trace_argument_1);
        }
    }
    if (string)
    {
        MpFreeString(string);
    }
    if (value_5)
    {
        MpAsyncDereferenceNotification(value_5);
    }
    return trace_argument_1;
}

void MpAmPostCreate__finally_0(uint64_t input, void *input_2)
{
    if (((int64_t *)input_2)[0x11])
    {
        FltReleaseContext();
    }
    if (((int64_t *)input_2)[0x19])
    {
        FltReleaseContext();
    }
    *((uint64_t **)input_2)[0x29] = ((uint64_t *)input_2)[0x3d];
    return;
}

void MpUpdateHandleContextOnPostCreate__finally_0(uint64_t input, void *input_2)
{
    if (((char *)input_2)[0x88] && ((int64_t *)input_2)[6])
    {
        FltReleaseContext();
    }
    return;
}

void MpCopyCacheOnPostCreate__finally_0(uint64_t input, void *input_2)
{
    if (((int64_t *)input_2)[0x10] != ((int64_t *)input_2)[0xf] && ((int64_t *)input_2)[0x10])
    {
        FltReleaseContext();
    }
    if (!((int64_t *)input_2)[8])
    {
        return;
    }
    FltReleaseContext();
    return;
}

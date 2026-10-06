#include "wdfilter.h"

int32_t MpDlpRegisterForPolicyUpdate(WD_PROCESS_REFERENCE_VIEW *input, WD_UNICODE_STRING_VALUE *input_2, void *input_3, uint32_t input_4)
{
    uint64_t *data_pointer;
    bool enabled;
    char byte_value;
    int32_t value;
    int64_t *allocation;
    int64_t *values[2];
    int64_t **data_pointer_2;
    uint64_t *index;
    data_pointer_2 = values;
    values[0] = NULL;
    value = MpCreateDlpProcessEntry(input, input_2, data_pointer_2);
    allocation = values[0];
    if (0 <= value)
    {
        *(uint32_t *)(&values[0][5]) = *(uint32_t *)(&values[0][5]) | input_4;
        enabled = 1;
        if (input_3)
        {
            FltAcquirePushLockExclusive((int64_t)input_3 + 0x120);
            data_pointer = &((uint64_t *)input_3)[0x25];
            for (index = (uint64_t *)(*data_pointer); index != data_pointer; index = (uint64_t *)(*index))
            {
                data_pointer_2 = (int64_t **)((uint64_t)((uint64_t)data_pointer_2) & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
                byte_value = RtlEqualUnicodeString(&index[3], &allocation[3], data_pointer_2);
                if (byte_value && index[2] == allocation[2])
                {
                    enabled = 0;
                    goto block_1;
                }
            }

            index = ((uint64_t **)input_3)[0x26];
            if ((uint64_t *)(*index) != data_pointer)
            {
                (*(WD_ROUTINE)swi(0x29))(3);
            }
            *allocation = (int64_t)data_pointer;
            allocation[1] = (int64_t)index;
            *index = allocation;
            ((int64_t **)input_3)[0x26] = allocation;
            block_1:
            FltReleasePushLock((int64_t)input_3 + 0x120);

            if (enabled)
            {
                allocation = NULL;
            }
        }
        value = 0;
    }
    else
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 10, WD_SYMBOL_ADDRESS(WPP_79dd7c237f9032126b34c89ccfc078f4_Traceguids), (uint64_t)KeGetCurrentThread(), value);
        }
        allocation = values[0];
    }
    if (allocation)
    {
        MpDeleteDlpProcessEntry(allocation);
    }
    return value;
}

void MpDlpUpdatePolicyWorker(int64_t input, uint64_t input_2, int64_t ****context)
{
    int64_t ****lock;
    int64_t ****data_pointer = NULL;
    int64_t ****index;
    int64_t ****data_pointer_2;
    bool enabled;
    int64_t ****data_pointer_3 = NULL;
    int64_t ***data_pointer_4;
    int64_t ***data_pointer_5;
    int64_t ****allocation;
    int64_t ***data_pointer_6;
    bool enabled_2;
    char byte_value;
    int32_t value_2;
    int64_t ****allocation_2;
    if (context)
    {
        data_pointer_3 = (int64_t ****)(&data_pointer);
        data_pointer = (int64_t ****)(&data_pointer);
        lock = &context[0x24];
        data_pointer_2 = context;
        do
        {
            allocation_2 = &context[0x27];
            FltAcquirePushLockExclusive(lock);
            data_pointer_4 = *allocation_2;
            if ((int64_t ****)data_pointer_4[1] != allocation_2 || (data_pointer_5 = (int64_t ***)(*data_pointer_4), (int64_t ***)data_pointer_5[1] != data_pointer_4))
            {
                (*(WD_ROUTINE)swi(0x29))(3);
            }
            *allocation_2 = data_pointer_5;
            allocation = &context[0x25];
            data_pointer_5[1] = (int64_t **)allocation_2;
            allocation_2 = (int64_t ****)(*allocation);
            if (allocation_2 != allocation)
            {
                data_pointer_5 = context[0x26];
                if ((int64_t ****)allocation_2[1] != allocation || (int64_t ****)(*data_pointer_5) != allocation)
                {
                    (*(WD_ROUTINE)swi(0x29))(3);
                }
                *data_pointer_5 = (int64_t **)allocation_2;
                allocation_2[1] = data_pointer_5;
                if ((int64_t *****)data_pointer[1] != &data_pointer || ((int64_t *****)(*data_pointer_3) != &data_pointer || (int64_t ****)(*allocation_2)[1] != allocation_2 || (int64_t ****)(*data_pointer_5) != allocation_2))
                {
                    (*(WD_ROUTINE)swi(0x29))(3);
                }
                *data_pointer_3 = (int64_t ***)allocation_2;
                data_pointer_2 = (int64_t ****)(&data_pointer);
                index = (int64_t ****)allocation_2[1];
                *allocation_2[1] = (int64_t **)data_pointer_2;
                allocation_2[1] = (int64_t ***)data_pointer_3;
                context[0x26] = (int64_t ***)allocation;
                *allocation = (int64_t ***)allocation;
                data_pointer_3 = index;
            }
            FltReleasePushLock(lock);
            allocation_2 = data_pointer;
            if ((int64_t *****)data_pointer != &data_pointer)
            {
                do
                {
                    data_pointer_2 = &allocation_2[3];
                    allocation = (int64_t ****)(*allocation_2);
                    value_2 = MpDlpUpdateFilePolicy(allocation_2[2], context, data_pointer_2, ((uint32_t *)context[1])[0x15], *(int32_t *)(&data_pointer_4[2]), data_pointer_4[3], (*(uint32_t *)(&allocation_2[5]) & 0x40 | 0x80) >> 5);
                    if (value_2 == -0x3ffffd8e || *(uint32_t *)(&allocation_2[5]) & 0x40)
                    {
                        data_pointer_5 = *allocation_2;
                        if ((int64_t ****)data_pointer_5[1] != allocation_2 || (data_pointer_6 = allocation_2[1], (int64_t ****)(*data_pointer_6) != allocation_2))
                        {
                            (*(WD_ROUTINE)swi(0x29))(3);
                        }
                        *data_pointer_6 = (int64_t **)data_pointer_5;
                        data_pointer_5[1] = (int64_t **)data_pointer_6;
                        if (allocation_2[2])
                        {
                            MpReleaseProcessContext(allocation_2[2]);
                            allocation_2[2] = NULL;
                        }
                        if (allocation_2[4])
                        {
                            ExFreePoolWithTag(allocation_2[4], 0x6e66504d);
                            allocation_2[4] = NULL;
                        }
                        ExFreePoolWithTag(allocation_2, 0x6670504d);
                    }
                    allocation_2 = allocation;
                }
                while ((int64_t *****)allocation != &data_pointer);
            }
            allocation_2 = &context[0x25];
            while (allocation = data_pointer, (int64_t *****)data_pointer != &data_pointer)
            {
                if ((int64_t *****)data_pointer[1] != &data_pointer || (index = (int64_t ****)(*data_pointer), (int64_t ****)index[1] != data_pointer))
                {
                    (*(WD_ROUTINE)swi(0x29))(3);
                }
                index[1] = (int64_t ***)(&data_pointer);
                enabled_2 = 1;
                enabled = data_pointer != NULL;
                data_pointer = index;
                if (enabled)
                {
                    FltAcquirePushLockExclusive(lock);
                    for (index = (int64_t ****)(*allocation_2); index != allocation_2; index = (int64_t ****)(*index))
                    {
                        data_pointer_2 = (int64_t ****)((uint64_t)((uint64_t)data_pointer_2) & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
                        byte_value = RtlEqualUnicodeString(&index[3], &allocation[3], data_pointer_2);
                        if (byte_value && index[2] == allocation[2])
                        {
                            enabled_2 = 0;
                            goto block_1;
                        }
                    }

                    data_pointer_5 = context[0x26];
                    if ((int64_t ****)(*data_pointer_5) != allocation_2)
                    {
                        (*(WD_ROUTINE)swi(0x29))(3);
                    }
                    *allocation = (int64_t ***)allocation_2;
                    allocation[1] = data_pointer_5;
                    *data_pointer_5 = (int64_t **)allocation;
                    context[0x26] = (int64_t ***)allocation;
                    block_1:
                    FltReleasePushLock(lock);

                    if (!enabled_2)
                    {
                        if (allocation[2])
                        {
                            MpReleaseProcessContext(allocation[2]);
                            allocation[2] = NULL;
                        }
                        if (allocation[4])
                        {
                            ExFreePoolWithTag(allocation[4], 0x6e66504d);
                            allocation[4] = NULL;
                        }
                        ExFreePoolWithTag(allocation, 0x6670504d);
                    }
                }
            }

            if (data_pointer_4)
            {
                if (data_pointer_4[3])
                {
                    ExFreePoolWithTag(data_pointer_4[3], 0x6165504d);
                }
                ExFreeToPagedLookasideList((void *)(MpData + 0x500), data_pointer_4);
            }
            allocation_2 = &context[0x29];
            value_2 = WdAtomicAdd32((volatile int32_t *)((int32_t *)allocation_2), -1);
        }
        while (value_2 != 1);
        FltReleaseContext(context);
    }
    if (input)
    {
        FltFreeGenericWorkItem(input);
    }
    return;
}

void MpDlpUpdateFilePolicy(void *input, void *input_2, WD_LAYOUT_65 *input_3, uint32_t input_4, int32_t input_5, uint64_t *input_6, uint32_t input_7)
{
    uint16_t value;
    uint32_t allocation_size;
    uint32_t value_2;
    uint32_t value_3;
    int64_t value_4;
    uint64_t value_5;
    int32_t values[4];
    int64_t value_6;
    uint64_t *data_pointer;
    uint32_t value_7;
    uint32_t value_9;
    uint32_t value_10;
    uint64_t *data_pointer_2;
    int32_t value_11;
    int32_t value_12;
    uint32_t *allocation;
    uint64_t value_13;
    data_pointer_2 = input_6;
    value_12 = input_5;
    values[0] = 0;
    values[1] = 0;
    value_5 = 0;
    data_pointer = NULL;
    values[2] = input_4;
    if (!input_5 || !input_6 || !input_3 || (!input || !input_2) || (!input_3->field_0x0 || !input_3->field_0x8))
    {
        return;
    }
    value_11 = FltParseFileName(((uint64_t *)input)[0x10], 0, 0, &value_5);
    if (0 <= value_11)
    {
        allocation_size = input_3->field_0x0 + 0xa6;
        if (0xa4 <= allocation_size)
        {
            value_2 = (uint16_t)value_5 + 2 + allocation_size;
            if (allocation_size <= value_2)
            {
                allocation_size = value_2 + value_12;
                if (value_2 <= allocation_size)
                {
                    allocation = (uint32_t *)MpAllocatePoolWithTag(1, allocation_size, 0x6c64504d);
                    if (allocation)
                    {
                        *allocation = 0x400a3;
                        allocation[1] = allocation_size;
                        MpGetPriorityInfo(0, 0, (WD_LAYOUT_26 *)(&allocation[2]));
                        allocation[6] = input_7;
                        allocation[0x18] = ((uint32_t *)input)[6];
                        value_13 = MpFileTimeFromUlong64(((uint64_t *)input)[4]);
                        value_11 = values[2];
                        *(uint64_t *)(&allocation[8]) = value_13;
                        allocation[0x20] = ((uint32_t *)input)[0x40];
                        allocation[0x25] = values[2];
                        *(uint64_t *)(&allocation[10]) = 0xa4;
                        memmove(&allocation[0x29], data_pointer, value_5 & 0xffff);
                        *(uint16_t *)(*(int64_t *)(&allocation[10]) + (uint64_t)((uint16_t)value_5 >> 1) * 2 + (int64_t)allocation) = 0;
                        allocation[0x21] = (uint32_t)((uint16_t)value_5);
                        value_4 = *(int64_t *)(&allocation[10]) + (value_5 & 0xffff) + 2;
                        *(uint64_t *)(&allocation[0x1e]) = ((uint64_t *)input_2)[0x15];
                        value_6 = ((int64_t *)input_2)[1];
                        value_3 = *(uint32_t *)(value_6 + 0x38);
                        value_7 = *(uint32_t *)(value_6 + 0x3c);
                        value_9 = *(uint32_t *)(value_6 + 0x40);
                        value_10 = *(uint32_t *)(value_6 + 0x44);
                        *(int64_t *)(&allocation[0xc]) = value_4;
                        allocation[0x1a] = value_3;
                        allocation[0x1b] = value_7;
                        allocation[0x1c] = value_9;
                        allocation[0x1d] = value_10;
                        memmove((uint64_t *)(value_4 + (int64_t)allocation), (uint64_t *)input_3->field_0x8, input_3->field_0x0);
                        *(uint16_t *)(*(int64_t *)(&allocation[0xc]) + (uint64_t)(input_3->field_0x0 >> 1) * 2 + (int64_t)allocation) = 0;
                        value = input_3->field_0x0;
                        allocation[0x22] = (uint32_t)value;
                        value_6 = *(int64_t *)(&allocation[0xc]) + value + 2ULL;
                        *(int64_t *)(&allocation[0x10]) = value_6;
                        memmove((uint64_t *)(value_6 + (int64_t)allocation), data_pointer_2, value_12);
                        allocation[0x24] = value_12;
                        value_12 = MpDlpQueryService(value_11, allocation, values, &values[1]);
                        if (value_12 <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x10, WD_SYMBOL_ADDRESS(WPP_79dd7c237f9032126b34c89ccfc078f4_Traceguids), (uint64_t)KeGetCurrentThread(), value_12);
                        }
                        ExFreePoolWithTag(allocation, 0x6c64504d);
                        return;
                    }
                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                    {
                        return;
                    }
                    value_3 = 0xf;
                    value_11 = -0x3fffff66;
                    goto block_1;
                }
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    return;
                }
                value_3 = 0xe;
            }
            else
            {
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    return;
                }
                value_3 = 0xd;
            }
        }
        else
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return;
            }
            value_3 = 0xc;
        }
        value_11 = -0x3fffff6b;
    }
    else
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return;
        }
        value_3 = 0xb;
    }
    block_1:
    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_3, WD_SYMBOL_ADDRESS(WPP_79dd7c237f9032126b34c89ccfc078f4_Traceguids), (uint64_t)KeGetCurrentThread(), value_11);

    return;
}

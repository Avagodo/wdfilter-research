#include "wdfilter.h"

void WPP_SF_qssL(uint64_t input, uint64_t input_2, uint64_t input_3, uint64_t input_4, char *input_5, char *input_6)
{
    int64_t index;
    int64_t value;
    char *bytes;
    uint32_t values[2];
    uint64_t value_2;
    char *bytes_2;
    int64_t value_3;
    values[0] = WD_STATUS_INVALID_PARAMETER;
    value_3 = 5;
    if (input_6)
    {
        index = -1;
        do
        {
            value = index;
            index = value + 1;
        }
        while (input_6[index]);
        value += 2;
    }
    else
    {
        value = 5;
    }
    bytes = input_6;
    if (!input_6)
    {
        bytes = "NULL";
    }
    index = -1;
    if (input_5)
    {
        do
        {
            value_3 = index;
            index = value_3 + 1;
        }
        while (input_5[index]);
        value_3 += 2;
    }
    bytes_2 = input_5;
    if (!input_5)
    {
        bytes_2 = "NULL";
    }
    value_2 = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_1208de8a60913368b6da6dd2d9248a06_Traceguids), 0x1d, &value_2, 8, bytes_2, value_3, bytes, value, values, 4, 0);
    return;
}

void MpIsLoopbackByObj(void *input, int64_t file_object, uint8_t *input_2)
{
    int32_t status;
    char buffer_2[16];
    uint8_t byte_value;
    memset(buffer_2, 0, (char *)0x74);
    *input_2 = 0;
    if (!file_object)
    {
        file_object = ((int64_t *)input)[4];
    }
    status = FltQueryInformationFile(((uint64_t *)input)[3], file_object, buffer_2, 0x74, 0x37, 0);
    if (0 <= status)
    {
        *input_2 = byte_value & 1;
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x27, WD_SYMBOL_ADDRESS(WPP_1208de8a60913368b6da6dd2d9248a06_Traceguids), (uint64_t)KeGetCurrentThread(), status);
    }
    return;
}

void MpIsLoopbackByName(void *input, void *file_name, uint8_t *input_2, int64_t *input_3, uint64_t *input_4)
{
    int32_t value;
    uint64_t value_2;
    uint32_t value_3;
    uint64_t value_4;
    uint64_t *data_pointer;
    uint32_t value_5;
    uint64_t *data_pointer_2;
    uint64_t value_6;
    uint64_t value_7;
    uint64_t value_8;
    int64_t value_9;
    uint64_t value_10;
    uint64_t value_11;
    uint64_t value_12;
    uint64_t value_13;
    uint64_t *data_pointer_3;
    uint64_t value_14;
    uint64_t value_15;
    uint64_t value_16;
    uint64_t value_17;
    uint64_t value_19;
    uint64_t value_20;
    int64_t file_object;
    int64_t value_21;
    uint64_t value_22;
    uint64_t value_23;
    value_5 = (uint32_t)((uint64_t)value_4 >> 0x20);
    value_21 = 0;
    file_object = 0;
    value_20 = 0;
    value_6 = 0;
    value_15 = 0;
    value_23 = 0;
    value_13 = 0;
    value_16 &= 0xffffffff00000000;
    data_pointer_3 = NULL;
    value_14 = 0;
    value_12 &= 0xffffffffffff0000;
    value_22 = 0;
    value_17 = 0;
    *input_2 = 0;
    value_7 = 0;
    value_8 = 0;
    value_10 = 0;
    value_11 = 0;
    value = FltParseFileNameInformation(file_name);
    value_3 = (uint32_t)((uint64_t)value_2 >> 0x20);
    if (0 <= value)
    {
        if (!((int16_t *)file_name)[0x14])
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qZD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x24, WD_SYMBOL_ADDRESS(WPP_1208de8a60913368b6da6dd2d9248a06_Traceguids), (uint64_t)KeGetCurrentThread(), &((int16_t *)file_name)[4], ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INVALID_PARAMETER & 0xffffffffULL);
            }
            goto block_1;
        }
        value_6 = ((uint64_t *)file_name)[2];
        value_12 = 0;
        value_8 = 0;
        value_7 = 0x28;
        value_20 = ((uint64_t)(((uint64_t)WdLoadField(&value_20, 4, 4) & 0xffffffffULL) << 16 | (uint64_t)((uint16_t *)file_name)[5] & 0xffffULL) & 0xffffffffffffULL) << 16 | (uint64_t)(((int16_t *)file_name)[0x34] + ((int16_t *)file_name)[0xc] + ((int16_t *)file_name)[0x14]) & 0xffffULL;
        value_10 = 0;
        value_11 = 0;
        if (*(int64_t *)(MpData + 0xc0) && (value_9 = (*__guard_dispatch_icall_fptr)(((uint64_t *)input)[4]), value_9))
        {
            value_12 = *(uint64_t *)(value_9 + 8);
        }
        else
        {
            value_12 = 0;
        }
        data_pointer_3 = &value_20;
        value_23 = ((uint64_t)WdLoadField(&value_23, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)0x30 & 0xffffffffULL;
        value_13 = 0;
        value_14 = ((uint64_t)WdLoadField(&value_14, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)0x240 & 0xffffffffULL;
        value_15 = 0;
        value_16 = 0;
        if (*(uint32_t *)(MpData + 0x360) & 0x40)
        {
            data_pointer_2 = &value_22;
            data_pointer = &value_23;
            value_2 = ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)0x80 & 0xffffffffULL;
            value = MpFltCreateFileEx2();
        }
        else
        {
            data_pointer_2 = &value_22;
            data_pointer = &value_23;
            value_2 = ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)0x80 & 0xffffffffULL;
            value = MpFltCreateFileEx(*(uint64_t *)(MpData + 0x10), ((uint64_t *)input)[3], &value_21, &file_object, value_2, data_pointer, data_pointer_2);
        }
        if (0 <= value)
        {
            value = MpIsLoopbackByObj(input, file_object, input_2);
            if (0 <= value)
            {
                if (*input_2 && input_3)
                {
                    MpQueryLoopbackLocalPathByName(input, file_name, input_3, input_4, value_2, data_pointer, data_pointer_2);
                }
                goto block_1;
            }
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                goto block_1;
            }
            value_19 = 0x26;
        }
        else
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                goto block_1;
            }
            value_19 = 0x25;
        }
    }
    else
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            goto block_1;
        }
        value_19 = 0x23;
    }
    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_19, WD_SYMBOL_ADDRESS(WPP_1208de8a60913368b6da6dd2d9248a06_Traceguids), (uint64_t)KeGetCurrentThread(), (uint64_t)value_2 & 0xffffffff00000000 | (uint64_t)value & 0xffffffff);
    block_1:
    if (value_21)
    {
        FltClose();
    }

    if (file_object)
    {
        ObfDereferenceObject();
        value_9 = ObTotalReferences;
        WdUnresolvedAtomicBegin();
        ObTotalReferences -= 1;
        WdUnresolvedAtomicEnd();
        if (value_9 + -1 <= -1 && *(int32_t *)(MpData + 0x364) <= -1)
        {
            if (KdRefreshDebuggerNotPresent())
            {
                KeBugCheck(1);
            }
            (*(WD_ROUTINE)swi(3))();
            return;
        }
    }
    return;
}

void MpQueryLoopbackLocalPathByFileObject(WD_LAYOUT_76 *input, int64_t input_2, uint64_t *input_3, int64_t *destination_string)
{
    uint8_t byte_value;
    uint32_t value;
    uint32_t value_2;
    uint64_t value_3;
    int64_t allocation;
    int16_t value_5;
    int32_t value_6;
    uint16_t *allocation_2;
    uint32_t value_7;
    int64_t source_string = 0;
    uint64_t string;
    if (!input || !input_2 || !input_3)
    {
        return;
    }
    *input_3 = 0;
    if (destination_string)
    {
        *destination_string = 0;
    }
    value_6 = MpQueryLoopbackEa(input, input_2, &source_string);
    allocation = source_string;
    if (0 <= value_6)
    {
        byte_value = *(uint8_t *)(source_string + 5);
        string = 0;
        value_3 = 0;
        RtlInitUnicodeString(&string, source_string + 0x15 + (uint64_t)byte_value);
        value_5 = (int16_t)string;
        if ((int16_t)string && !(string & 1))
        {
            allocation_2 = (uint16_t *)MpAllocatePoolWithTag(1, (char *)((string & 0xffff) + 0x12), 0x7375704d);
            if (allocation_2)
            {
                *(uint16_t **)(&allocation_2[4]) = &allocation_2[8];
                *allocation_2 = 0;
                allocation_2[1] = value_5 + 2;
                RtlCopyUnicodeString(allocation_2, &string);
                *input_3 = allocation_2;
                if (destination_string)
                {
                    value = (uint32_t)value_3;
                    value_2 = WdLoadField(&value_3, 4, 4);
                    WdStoreField(&source_string, 2, 6, (uint64_t)((uint64_t)(string >> 0x10)));
                    source_string = ((uint64_t)WdLoadField(&source_string, 2, 6) & 0xffffffffffffULL) << 16 | (uint64_t)(*(uint16_t *)(allocation + 0x11 + (uint64_t)byte_value)) & 0xffffULL;
                    value_6 = MpDuplicateString(&source_string, destination_string);
                    if (value_6 <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xc, WD_SYMBOL_ADDRESS(WPP_1208de8a60913368b6da6dd2d9248a06_Traceguids), (uint64_t)KeGetCurrentThread(), value_6);
                    }
                }
                goto block_1;
            }
            value_7 = WD_STATUS_INSUFFICIENT_RESOURCES;
        }
        else
        {
            value_7 = WD_STATUS_INVALID_PARAMETER;
        }
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xb, WD_SYMBOL_ADDRESS(WPP_1208de8a60913368b6da6dd2d9248a06_Traceguids), (uint64_t)KeGetCurrentThread(), value_7);
        }
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 10, WD_SYMBOL_ADDRESS(WPP_1208de8a60913368b6da6dd2d9248a06_Traceguids), (uint64_t)KeGetCurrentThread(), value_6);
    }
    block_1:
    if (allocation)
    {
        ExFreePoolWithTag(allocation, 0x6165504d);
    }

    return;
}

void MpQueryLoopbackEa(WD_LAYOUT_76 *input, uint64_t input_2, uint64_t *input_3)
{
    int32_t *trace_argument_2;
    char buffer[267];
    uint32_t value;
    uint64_t value_2;
    int64_t provider;
    uint64_t value_3;
    uint64_t value_4;
    uint32_t value_5;
    char byte_value;
    char byte_value_2;
    char event_id;
    uint32_t value_7;
    int32_t value_8;
    int32_t *allocation;
    int32_t *data_pointer;
    uint64_t value_9;
    memset(buffer, 0, (char *)0x103);
    allocation = NULL;
    *input_3 = 0;
    provider = MpData;
    value = 0;
    byte_value = *(char *)(MpData + 0xf40);
    memmove(buffer, (uint64_t *)(MpData + 0xe40), (uint8_t)(*(char *)(MpData + 0xf40)));
    value_2 = *(uint8_t *)(provider + 0xf40) + 0x215;
    do
    {
        if (allocation)
        {
            ExFreePoolWithTag(allocation, 0x6165504d);
            value_2 = (value_2 & 0xffffffff) * 2;
            if (value_2 <= 0xffffffff)
            {
                goto block_1;
            }
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                value_9 = 0x18;
                value_4 = (uint64_t)value_3 & 0xffffffff00000000 | (uint64_t)WD_STATUS_INTEGER_OVERFLOW & 0xffffffff;
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_9, WD_SYMBOL_ADDRESS(WPP_1208de8a60913368b6da6dd2d9248a06_Traceguids), (uint64_t)KeGetCurrentThread(), value_4);
            }
            return;
        }
        block_1:
        allocation = (int32_t *)MpAllocatePoolWithTag(1, value_2 & 0xffffffff, 0x6165504d);

        if (!allocation)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                value_9 = 0x19;
                value_4 = (uint64_t)value_3 & 0xffffffff00000000 | (uint64_t)WD_STATUS_INSUFFICIENT_RESOURCES & 0xffffffff;
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_9, WD_SYMBOL_ADDRESS(WPP_1208de8a60913368b6da6dd2d9248a06_Traceguids), (uint64_t)KeGetCurrentThread(), value_4);
                return;
            }
            return;
        }
        value_3 = (uint64_t)value_3 & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
        value_8 = FltQueryEaFile(input->field_0x18, input_2, allocation, value_2 & 0xffffffff, value_3, &value, 0x108, 0, 1, 0);
    }
    while (value_8 == -0x7ffffffb || value_8 == -0x3fffffdd);
    value_5 = (uint32_t)((uint64_t)value_3 >> 0x20);
    if (0 <= value_8)
    {
        if (*allocation)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                value_9 = 0x1b;
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_9, WD_SYMBOL_ADDRESS(WPP_1208de8a60913368b6da6dd2d9248a06_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INVALID_PARAMETER & 0xffffffffULL);
            }
        }
        else
        {
            value_2 = ((uint8_t *)allocation)[5];
            if (((uint8_t *)allocation)[5] != *(uint8_t *)(MpData + 0xf40))
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    value_9 = 0x1c;
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_9, WD_SYMBOL_ADDRESS(WPP_1208de8a60913368b6da6dd2d9248a06_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INVALID_PARAMETER & 0xffffffffULL);
                }
            }
            else
            {
                trace_argument_2 = &allocation[2];
                provider = MpData + 0xe40 - (int64_t)trace_argument_2;
                data_pointer = trace_argument_2;
                do
                {
                    byte_value_2 = *(char *)data_pointer;
                    event_id = ((char *)data_pointer)[provider];
                    if (byte_value_2 != event_id)
                    {
                        break;
                    }
                    data_pointer = (int32_t *)((int64_t)data_pointer + 1);
                }
                while (event_id);
                if (byte_value_2 != event_id)
                {
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        WPP_SF_qssL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), (uint8_t)event_id, provider, (uint64_t)KeGetCurrentThread(), trace_argument_2, (char *)(MpData + 0xe40));
                    }
                }
                else if (((uint16_t *)allocation)[3])
                {
                    if (*(uint32_t *)(value_2 + 9 + (int64_t)allocation) != (uint32_t)((uint16_t *)allocation)[3])
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            value_9 = 0x1f;
                            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_9, WD_SYMBOL_ADDRESS(WPP_1208de8a60913368b6da6dd2d9248a06_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INVALID_PARAMETER & 0xffffffffULL);
                        }
                    }
                    else
                    {
                        value_7 = *(uint32_t *)(value_2 + 0xd + (int64_t)allocation);
                        if (value_7 & 1)
                        {
                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                            {
                                value_9 = 0x20;
                                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_9, WD_SYMBOL_ADDRESS(WPP_1208de8a60913368b6da6dd2d9248a06_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INVALID_PARAMETER & 0xffffffffULL);
                            }
                        }
                        else if (0x12 <= value_7)
                        {
                            if (*(uint32_t *)(value_2 + 0x11 + (int64_t)allocation) <= value_7)
                            {
                                if (*(int16_t *)((int64_t)allocation + (uint64_t)(*(uint32_t *)(value_2 + 0xd + (int64_t)allocation) >> 1) * 2 + value_2 + 0x13) == 0x5c)
                                {
                                    *(uint16_t *)((int64_t)allocation + (uint64_t)(*(uint32_t *)(value_2 + 0xd + (int64_t)allocation) >> 1) * 2 + value_2 + 0x13) = 0;
                                }
                                *input_3 = allocation;
                                return;
                            }
                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                            {
                                value_9 = 0x22;
                                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_9, WD_SYMBOL_ADDRESS(WPP_1208de8a60913368b6da6dd2d9248a06_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INVALID_PARAMETER & 0xffffffffULL);
                            }
                        }
                        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            value_9 = 0x21;
                            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_9, WD_SYMBOL_ADDRESS(WPP_1208de8a60913368b6da6dd2d9248a06_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INVALID_PARAMETER & 0xffffffffULL);
                        }
                    }
                }
                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    value_9 = 0x1e;
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_9, WD_SYMBOL_ADDRESS(WPP_1208de8a60913368b6da6dd2d9248a06_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INVALID_PARAMETER & 0xffffffffULL);
                }
            }
        }
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1a, WD_SYMBOL_ADDRESS(WPP_1208de8a60913368b6da6dd2d9248a06_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)value_8 & 0xffffffffULL);
    }
    ExFreePoolWithTag(allocation, 0x6165504d);
    return;
}

void MpQueryLoopbackLocalPathByName(void *input, void *file_name, int64_t *input_2, uint64_t *input_3)
{
    int16_t *wide_text;
    int64_t values[6];
    uint64_t value;
    uint64_t value_2;
    int64_t allocation;
    uint32_t values_2[4];
    uint64_t string;
    int64_t string_2;
    uint64_t *source_string;
    int64_t allocation_2;
    int64_t value_3;
    uint8_t byte_value;
    uint64_t value_4;
    uint64_t value_5;
    uint64_t value_6;
    uint32_t value_7;
    uint64_t value_8;
    uint64_t *data_pointer;
    uint32_t value_9;
    int64_t *data_pointer_2;
    int64_t value_10;
    char byte_value_2;
    uint64_t value_11;
    uint64_t *data_pointer_3;
    uint64_t value_12;
    uint64_t value_13;
    uint64_t value_14;
    uint32_t value_15;
    uint32_t value_16;
    uint64_t value_17;
    uint64_t value_18;
    int32_t value_20;
    int64_t value_21;
    uint64_t value_22;
    uint64_t value_23;
    int64_t value_24;
    value_7 = (uint32_t)((uint64_t)value_5 >> 0x20);
    value_9 = (uint32_t)((uint64_t)value_8 >> 0x20);
    value_3 = 0;
    values[0] = 0;
    value_24 = 0;
    string_2 = 0;
    value_13 = 0;
    value_14 &= 0xffffffff00000000;
    allocation_2 = 0;
    values[5] &= 0xffffffffffff0000;
    allocation = 0;
    value_23 = 0;
    value_10 = 0;
    value = 0;
    value_11 = 0;
    data_pointer_3 = NULL;
    value_12 = 0;
    value_2 = 0;
    value_18 = 0;
    values[1] = 0;
    values[2] = 0;
    values[3] = 0;
    values[4] = 0;
    data_pointer_2 = input_2;
    source_string = input_3;
    if (!input || !input_2 || !file_name)
    {
        return;
    }
    *input_2 = 0;
    if (input_3)
    {
        *input_3 = 0;
    }
    value_20 = FltParseFileNameInformation(file_name);
    if (0 <= value_20)
    {
        if (((int16_t *)file_name)[0x14])
        {
            value_10 = ((int64_t *)file_name)[2];
            values[5] = 0;
            values[2] = 0;
            values[1] = 0x28;
            value_23 = ((uint64_t)(((uint64_t)WdLoadField(&value_23, 4, 4) & 0xffffffffULL) << 16 | (uint64_t)((uint16_t *)file_name)[5] & 0xffffULL) & 0xffffffffffffULL) << 16 | (uint64_t)(((int16_t *)file_name)[0x34] + ((int16_t *)file_name)[0xc] + ((int16_t *)file_name)[0x14]) & 0xffffULL;
            values[3] = 0;
            values[4] = 0;
            if (*(int64_t *)(MpData + 0xc0) && (value_21 = (*__guard_dispatch_icall_fptr)(((uint64_t *)input)[4]), value_21))
            {
                values[5] = *(uint64_t *)(value_21 + 8);
            }
            else
            {
                values[5] = 0;
            }
            data_pointer_3 = &value_23;
            value = ((uint64_t)WdLoadField(&value, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)0x30 & 0xffffffffULL;
            value_11 = 0;
            value_12 = ((uint64_t)WdLoadField(&value_12, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)0x240 & 0xffffffffULL;
            value_13 = 0;
            value_14 = 0;
            if (*(uint32_t *)(MpData + 0x360) & 0x40)
            {
                data_pointer = &value;
                value_22 = ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)9 & 0xffffffffULL;
                value_20 = MpFltCreateFileEx2();
            }
            else
            {
                data_pointer = &value;
                value_22 = ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)9 & 0xffffffffULL;
                value_20 = MpFltCreateFileEx(*(uint64_t *)(MpData + 0x10), ((uint64_t *)input)[3], values, &value_24, value_22, data_pointer, &value_2);
            }
            value_7 = (uint32_t)((uint64_t)value_22 >> 0x20);
            if (0 <= value_20)
            {
                value_20 = MpQueryLoopbackEa(input, value_24, &allocation);
                value_7 = (uint32_t)((uint64_t)value_22 >> 0x20);
                if (0 <= value_20)
                {
                    wide_text = &((int16_t *)file_name)[0x2c];
                    value_21 = value_3;
                    if (*wide_text)
                    {
                        byte_value_2 = RtlIsNameLegalDOS8Dot3(wide_text, 0, 0);
                        value_7 = (uint32_t)((uint64_t)value_22 >> 0x20);
                        value_21 = allocation_2;
                        if (!byte_value_2)
                        {
                            goto block_1;
                        }
                        value_4 = 0x21a;
                        allocation_2 = value_3;
                        do
                        {
                            value_7 = (uint32_t)((uint64_t)value_22 >> 0x20);
                            values_2[0] = 0;
                            if (allocation_2)
                            {
                                ExFreePoolWithTag(allocation_2, 0x6e73504d);
                                allocation_2 = 0;
                                value_4 = (value_4 & 0xffffffff) * 2;
                                if (0x100000000 <= value_4)
                                {
                                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                                    {
                                        goto block_5;
                                    }
                                    value_22 = 0x11;
                                    value_6 = ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INTEGER_OVERFLOW & 0xffffffffULL;
                                    allocation_2 = 0;
                                    goto block_3;
                                }
                            }
                            allocation_2 = (int64_t)MpAllocatePoolWithTag(1, value_4 & 0xffffffff, 0x6e73504d);
                            if (!allocation_2)
                            {
                                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                                {
                                    goto block_5;
                                }
                                value_22 = 0x12;
                                value_6 = ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INSUFFICIENT_RESOURCES & 0xffffffffULL;
                                goto block_3;
                            }
                            data_pointer = (uint64_t *)((uint64_t)((uint64_t)data_pointer) & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
                            value_22 = ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)0xc & 0xffffffffULL;
                            value_20 = FltQueryDirectoryFile(((uint64_t *)input)[3], value_24, allocation_2, value_4 & 0xffffffff, value_22, data_pointer, wide_text, 1, values_2);
                            value_7 = (uint32_t)((uint64_t)value_22 >> 0x20);
                        }
                        while (value_20 == -0x7ffffffb || value_20 == -0x3fffffdd);
                        value_21 = allocation_2;
                        if (value_20 <= -1)
                        {
                            if (value_20 != -0x3ffffff1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                            {
                                value_22 = ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)value_20 & 0xffffffffULL;
                                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x13, WD_SYMBOL_ADDRESS(WPP_1208de8a60913368b6da6dd2d9248a06_Traceguids), (uint64_t)KeGetCurrentThread(), value_22);
                                value_7 = (uint32_t)((uint64_t)value_22 >> 0x20);
                            }
                            goto block_1;
                        }
                        if (!(*(int32_t *)(allocation_2 + 8)))
                        {
                            goto block_1;
                        }
                        WdStoreField(&value_23, 0, 4, (uint64_t)(((uint64_t)(*(uint16_t *)(allocation_2 + 8)) & 0xffffULL) << 16 | (uint64_t)(*(uint16_t *)(allocation_2 + 8)) & 0xffffULL));
                        value_10 = allocation_2 + 0xc;
                    }
                    else
                    {
                        block_1:
                        WdStoreField(&value_23, 0, 4, (uint64_t)(((uint64_t)(*wide_text) & 0xffffULL) << 16 | (uint64_t)(*wide_text) & 0xffffULL));

                        value_10 = ((int64_t *)file_name)[0xc];
                        allocation_2 = value_21;
                    }
                    value_3 = allocation;
                    byte_value = *(uint8_t *)(allocation + 5);
                    string = 0;
                    value_17 = 0;
                    RtlInitUnicodeString(&string, allocation + 0x15 + (uint64_t)byte_value);
                    value_20 = MpAllocateString((uint16_t)((int16_t)string + 2 + (int16_t)value_23), &string_2);
                    if (0 <= value_20)
                    {
                        RtlCopyUnicodeString(string_2, &string);
                        value_20 = RtlAppendUnicodeToString(string_2, WD_CREATE_UNRECOVERED_ADDRESS4);
                        if (0 <= value_20)
                        {
                            value_20 = RtlAppendUnicodeStringToString(string_2, &value_23);
                            value_21 = string_2;
                            if (0 <= value_20)
                            {
                                string_2 = 0;
                                *data_pointer_2 = value_21;
                                if (source_string)
                                {
                                    value_15 = (uint32_t)value_17;
                                    value_16 = WdLoadField(&value_17, 4, 4);
                                    WdStoreField(&source_string, 2, 6, (uint64_t)((uint64_t)((uint64_t)string >> 0x10)));
                                    source_string = (uint64_t *)(((uint64_t)WdLoadField(&source_string, 2, 6) & 0xffffffffffffULL) << 16 | (uint64_t)(*(uint16_t *)(byte_value + 0x11ULL + value_3)) & 0xffffULL);
                                    value_20 = MpDuplicateString(&source_string);
                                    if (value_20 <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                    {
                                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x17, WD_SYMBOL_ADDRESS(WPP_1208de8a60913368b6da6dd2d9248a06_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)value_20 & 0xffffffffULL);
                                    }
                                }
                            }
                            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                            {
                                value_22 = 0x16;
                                goto block_2;
                            }
                        }
                        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            value_22 = 0x15;
                            goto block_2;
                        }
                    }
                    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        value_22 = 0x14;
                        block_2:
                        value_6 = ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)value_20 & 0xffffffffULL;

                        block_3:
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_22, WD_SYMBOL_ADDRESS(WPP_1208de8a60913368b6da6dd2d9248a06_Traceguids), (uint64_t)KeGetCurrentThread(), value_6);
                    }
                }
                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    value_22 = 0x10;
                    goto block_4;
                }
            }
            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                value_22 = 0xf;
                block_4:
                value_6 = ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)value_20 & 0xffffffffULL;

                goto block_6;
            }
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qZD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xe, WD_SYMBOL_ADDRESS(WPP_1208de8a60913368b6da6dd2d9248a06_Traceguids), (uint64_t)KeGetCurrentThread(), &((int16_t *)file_name)[4], ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INVALID_PARAMETER & 0xffffffffULL);
        }
        block_5:
        if (allocation)
        {
            ExFreePoolWithTag(allocation, 0x6165504d);
        }

        if (string_2)
        {
            MpFreeString(string_2);
        }
        if (allocation_2)
        {
            ExFreePoolWithTag(allocation_2, 0x6e73504d);
        }
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        value_22 = 0xd;
        value_6 = ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)value_20 & 0xffffffffULL;
        block_6:
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_22, WD_SYMBOL_ADDRESS(WPP_1208de8a60913368b6da6dd2d9248a06_Traceguids), (uint64_t)KeGetCurrentThread(), value_6);

        allocation_2 = value_3;
        goto block_5;
    }
    if (values[0])
    {
        FltClose();
    }
    if (value_24)
    {
        ObfDereferenceObject();
        allocation_2 = ObTotalReferences;
        WdUnresolvedAtomicBegin();
        ObTotalReferences -= 1;
        WdUnresolvedAtomicEnd();
        if (allocation_2 + -1 <= -1 && *(int32_t *)(MpData + 0x364) <= -1)
        {
            if (KdRefreshDebuggerNotPresent())
            {
                KeBugCheck(1);
            }
            (*(WD_ROUTINE)swi(3))();
            return;
        }
    }
    return;
}

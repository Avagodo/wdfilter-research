#include "wdfilter.h"

void WPP_SF_qLD(uint64_t input, uint64_t input_2, uint64_t input_3, uint64_t input_4)
{
    uint32_t values[2];
    uint64_t value;
    values[0] = WD_STATUS_INVALID_PARAMETER;
    value = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_9588815ae2a73b4cc0a05820e6133cd1_Traceguids), 0x1b, &value, 8, &unrecovered_stack_argument_5, 4, values, 4, 0);
    return;
}

void WPP_SF_qSL(uint64_t input, uint64_t input_2, uint64_t input_3, uint64_t input_4, int16_t *input_5)
{
    int64_t index;
    int16_t *wide_text;
    uint32_t values[2];
    uint64_t value;
    values[0] = WD_STATUS_INVALID_PARAMETER;
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
    wide_text = input_5;
    if (!input_5)
    {
        wide_text = &WdAsyncnotificationStorage3;
    }
    value = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_9588815ae2a73b4cc0a05820e6133cd1_Traceguids), 0x30, &value, 8, wide_text, index, values, 4, 0);
    return;
}

void MpRegUpdateData(uint64_t input, WD_LAYOUT_104 *input_2)
{
    int64_t trace_argument_1;
    uint64_t value;
    uint64_t value_2;
    uint32_t value_3;
    int64_t reg_data;
    int32_t value_5;
    WD_LAYOUT_104 *event_id;
    uint64_t value_6;
    int64_t trace_argument_2;
    uint32_t provider[2];
    value_3 = (uint32_t)((uint64_t)value >> 0x20);
    trace_argument_2 = 0;
    provider[0] = 0;
    if (MpRegData)
    {
        value_5 = MpRegpValidateUserModeData();
        if (0 <= value_5)
        {
            event_id = (WD_LAYOUT_104 *)((int64_t)(&input_2->field_0x0) + input_2[1].field_0x8);
            if (input_2 <= event_id)
            {
                value_5 = MpRegpProcessUserModeData(event_id->field_0x0, event_id, provider, &trace_argument_2);
                if (0 <= value_5)
                {
                    FltAcquirePushLockExclusive(MpRegData + 8);
                    trace_argument_1 = *(int64_t *)(MpRegData + 0x10);
                    *(int64_t *)(MpRegData + 0x10) = trace_argument_2;
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                    {
                        WPP_SF_qq(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xe, WD_SYMBOL_ADDRESS(WPP_9588815ae2a73b4cc0a05820e6133cd1_Traceguids), trace_argument_1, trace_argument_2);
                    }
                    reg_data = MpRegData;
                    trace_argument_2 = 0;
                    if (*(int64_t *)(MpRegData + 0x10))
                    {
                        *(uint64_t *)(MpRegData + 0x18) = *(uint64_t *)(*(int64_t *)(MpRegData + 0x10) + 0x10);
                    }
                    else
                    {
                        *(uint64_t *)(MpRegData + 0x18) = 0;
                    }
                    FltReleasePushLock(reg_data + 8);
                    if (trace_argument_1)
                    {
                        ExFreePoolWithTag(trace_argument_1, 0x4d72504d);
                    }
                }
                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    value_6 = 0xd;
                    goto block_1;
                }
            }
            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                value_6 = 0xc;
                value_2 = ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INTEGER_OVERFLOW & 0xffffffffULL;
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_6, WD_SYMBOL_ADDRESS(WPP_9588815ae2a73b4cc0a05820e6133cd1_Traceguids), (uint64_t)KeGetCurrentThread(), value_2);
            }
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            value_6 = 0xb;
            block_1:
            value_2 = ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)value_5 & 0xffffffffULL;

            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_6, WD_SYMBOL_ADDRESS(WPP_9588815ae2a73b4cc0a05820e6133cd1_Traceguids), (uint64_t)KeGetCurrentThread(), value_2);
        }
    }
    else
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return;
        }
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 10, WD_SYMBOL_ADDRESS(WPP_9588815ae2a73b4cc0a05820e6133cd1_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_NOT_SUPPORTED & 0xffffffffULL);
    }
    if (trace_argument_2)
    {
        MpRegFreeMonitorData(trace_argument_2);
    }
    return;
}

uint64_t MpRegpValidateUserModeData(uint32_t input, uint32_t *input_2)
{
    uint32_t value;
    uint32_t value_2;
    uint32_t value_3;
    uint64_t event_id;
    uint64_t value_4;
    uint32_t value_5;
    uint64_t value_6;
    uint64_t value_7;
    uint64_t value_8;
    uint32_t value_9;
    value_9 = (uint32_t)((uint64_t)value_7 >> 0x20);
    if (input && input_2)
    {
        if (0x80 <= input)
        {
            value_5 = input_2[4];
            value = input - 0x80;
            if (value < value_5)
            {
                value_4 = WD_STATUS_INVALID_PARAMETER;
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                {
                    return WD_STATUS_INVALID_PARAMETER;
                }
                if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    return WD_STATUS_INVALID_PARAMETER;
                }
                value_3 = WD_STATUS_INVALID_PARAMETER;
                event_id = 0x11;
                value_2 = value;
                WPP_SF_qDDL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_9588815ae2a73b4cc0a05820e6133cd1_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)value_5 & 0xffffffffULL, value_2, value_3);
                return value_4;
            }
            if (*(int64_t *)(&input_2[6]) != 0x80)
            {
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                {
                    return WD_STATUS_INVALID_PARAMETER;
                }
                if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    return WD_STATUS_INVALID_PARAMETER;
                }
                WPP_SF_qiLL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x12, WD_SYMBOL_ADDRESS(WPP_9588815ae2a73b4cc0a05820e6133cd1_Traceguids), (uint64_t)KeGetCurrentThread(), *(int64_t *)(&input_2[6]));
                return WD_STATUS_INVALID_PARAMETER;
            }
            if (value_5 <= 0x17)
            {
                value_4 = 0xc0000206;
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                {
                    return 0xc0000206;
                }
                if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    return 0xc0000206;
                }
                value_3 = 0xc0000206;
                event_id = 0x13;
                value_2 = 0x18;
                WPP_SF_qDDL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_9588815ae2a73b4cc0a05820e6133cd1_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)value_5 & 0xffffffffULL, value_2, value_3);
                return value_4;
            }
            if (&input_2[0x20] < input_2)
            {
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                {
                    return WD_STATUS_INTEGER_OVERFLOW;
                }
                if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    return WD_STATUS_INTEGER_OVERFLOW;
                }
                value_4 = 0x14;
                event_id = WD_STATUS_INTEGER_OVERFLOW;
                value_8 = ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INTEGER_OVERFLOW & 0xffffffffULL;
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_4, WD_SYMBOL_ADDRESS(WPP_9588815ae2a73b4cc0a05820e6133cd1_Traceguids), (uint64_t)KeGetCurrentThread(), value_8);
                return event_id;
            }
            value_2 = input_2[0x20];
            if (value_2 != value_5)
            {
                value_4 = WD_STATUS_INVALID_PARAMETER;
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                {
                    return WD_STATUS_INVALID_PARAMETER;
                }
                if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    return WD_STATUS_INVALID_PARAMETER;
                }
                value_3 = WD_STATUS_INVALID_PARAMETER;
                event_id = 0x15;
                WPP_SF_qDDL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_9588815ae2a73b4cc0a05820e6133cd1_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)value_5 & 0xffffffffULL, value_2, value_3);
                return value_4;
            }
            if (input_2[0x21])
            {
                if (!(*(int64_t *)(&input_2[0x22])))
                {
                    goto block_1;
                }
            }
            else if (*(int64_t *)(&input_2[0x22]))
            {
                block_1:
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                {
                    return WD_STATUS_INVALID_PARAMETER;
                }

                if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    return WD_STATUS_INVALID_PARAMETER;
                }
                value_4 = 0x16;
                event_id = WD_STATUS_INVALID_PARAMETER;
                value_8 = ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INVALID_PARAMETER & 0xffffffffULL;
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_4, WD_SYMBOL_ADDRESS(WPP_9588815ae2a73b4cc0a05820e6133cd1_Traceguids), (uint64_t)KeGetCurrentThread(), value_8);
                return event_id;
            }
            value_6 = input_2[0x21] * 0x30ULL;
            if (0x100000000 <= value_6)
            {
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                {
                    return WD_STATUS_INTEGER_OVERFLOW;
                }
                if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    return WD_STATUS_INTEGER_OVERFLOW;
                }
                value_4 = 0x17;
            }
            else
            {
                if (0x18 <= value)
                {
                    value_5 = (uint32_t)value_6;
                    if (value_5 <= input - 0x98)
                    {
                        return 0;
                    }
                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                    {
                        return WD_STATUS_INVALID_PARAMETER;
                    }
                    if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                    {
                        return WD_STATUS_INVALID_PARAMETER;
                    }
                    WPP_SF_qdddd(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x19, WD_SYMBOL_ADDRESS(WPP_9588815ae2a73b4cc0a05820e6133cd1_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)input_2[0x21] & 0xffffffffULL, value_5, input - 0x98, WD_STATUS_INVALID_PARAMETER);
                    return WD_STATUS_INVALID_PARAMETER;
                }
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                {
                    return WD_STATUS_INTEGER_OVERFLOW;
                }
                if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    return WD_STATUS_INTEGER_OVERFLOW;
                }
                value_4 = 0x18;
            }
        }
        else
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            value_4 = 0x10;
        }
        event_id = WD_STATUS_INTEGER_OVERFLOW;
        value_8 = ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INTEGER_OVERFLOW & 0xffffffffULL;
    }
    else
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
        {
            return WD_STATUS_INVALID_PARAMETER;
        }
        if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return WD_STATUS_INVALID_PARAMETER;
        }
        value_4 = 0xf;
        event_id = WD_STATUS_INVALID_PARAMETER;
        value_8 = ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INVALID_PARAMETER & 0xffffffffULL;
    }
    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_4, WD_SYMBOL_ADDRESS(WPP_9588815ae2a73b4cc0a05820e6133cd1_Traceguids), (uint64_t)KeGetCurrentThread(), value_8);
    return event_id;
}

int32_t MpRegpProcessValueList(uint64_t input, uint64_t trace_argument_3, uint64_t input_2, uint64_t input_3, int64_t *******input_4, int64_t *input_5)
{
    int64_t *******result;
    uint32_t value;
    int64_t *******data_pointer;
    int64_t *******data_pointer_2;
    int64_t *******data_pointer_3;
    int32_t value_2;
    uint64_t left;
    int64_t *******values[2];
    int64_t *******index;
    uint64_t value_3;
    int64_t *******data_pointer_4;
    result = input_4;
    data_pointer_2 = (int64_t *******)values;
    data_pointer_4 = (int64_t *******)(value_3 & 0xffffffff00000000);
    values[0] = NULL;
    data_pointer = input_4;
    value_2 = MpConvertOffsetToPointer();
    data_pointer_3 = values[0];
    value = (uint32_t)((uint64_t)data_pointer_4 >> 0x20);
    if (0 <= value_2)
    {
        for (index = values[0]; index; index = (int64_t *******)(*index))
        {
            data_pointer_2 = (int64_t *******)values;
            left = (uint64_t)((uint64_t)data_pointer_4) & 0xffffffff00000000 | (uint64_t)(*(uint32_t *)result) & 0xffffffff;
            values[0] = NULL;
            data_pointer = result;
            value_2 = MpConvertStringOffsetToPointer(input, trace_argument_3, index[1], 0x7ffe, left, result, data_pointer_2);
            value = (uint32_t)((uint64_t)left >> 0x20);
            if (value_2 < 0)
            {
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                {
                    return value_2;
                }
                if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    return value_2;
                }
                left = 0x2e;
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), left, WD_SYMBOL_ADDRESS(WPP_9588815ae2a73b4cc0a05820e6133cd1_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value & 0xffffffffULL) << 32 | (uint64_t)value_2 & 0xffffffffULL, data_pointer, data_pointer_2);
                return value_2;
            }
            index[1] = (int64_t ******)values[0];
            left = ((uint64_t)value & 0xffffffffULL) << 32 | (uint64_t)(*(uint32_t *)result) & 0xffffffffULL;
            data_pointer = result;
            data_pointer_2 = index;
            value_2 = MpConvertOffsetToPointer(input, trace_argument_3, *index, 0x18, left, result, index);
            value = (uint32_t)((uint64_t)left >> 0x20);
            if (value_2 < 0)
            {
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                {
                    return value_2;
                }
                if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    return value_2;
                }
                left = 0x2f;
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), left, WD_SYMBOL_ADDRESS(WPP_9588815ae2a73b4cc0a05820e6133cd1_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value & 0xffffffffULL) << 32 | (uint64_t)value_2 & 0xffffffffULL, data_pointer, data_pointer_2);
                return value_2;
            }
            data_pointer = &index[2];
            if (!(*data_pointer))
            {
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                {
                    return -0x3ffffff3;
                }
                if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    return -0x3ffffff3;
                }
                WPP_SF_qSL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18));
                return -0x3ffffff3;
            }
            data_pointer_4 = result;
            value_2 = MpRegpProcessClientList(input, trace_argument_3, *data_pointer, *(uint32_t *)result, result, data_pointer);
            value = (uint32_t)((uint64_t)data_pointer_4 >> 0x20);
            if (value_2 < 0)
            {
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                {
                    return value_2;
                }
                if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    return value_2;
                }
                left = 0x31;
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), left, WD_SYMBOL_ADDRESS(WPP_9588815ae2a73b4cc0a05820e6133cd1_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value & 0xffffffffULL) << 32 | (uint64_t)value_2 & 0xffffffffULL, data_pointer, data_pointer_2);
                return value_2;
            }
        }

        value_2 = 0;
        *input_5 = (int64_t)data_pointer_3;
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        left = 0x2d;
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), left, WD_SYMBOL_ADDRESS(WPP_9588815ae2a73b4cc0a05820e6133cd1_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value & 0xffffffffULL) << 32 | (uint64_t)value_2 & 0xffffffffULL, data_pointer, data_pointer_2);
    }
    return value_2;
}

int32_t MpRegpProcessUserModeData(uint32_t input, WD_LAYOUT_104 *event_id, uint32_t *provider, uint64_t *input_2)
{
    uint64_t value;
    uint32_t *data_pointer;
    uint64_t *data_pointer_2;
    uint64_t value_2;
    int32_t *left;
    uint64_t value_3;
    uint32_t value_4;
    int32_t value_5;
    uint64_t allocation;
    uint64_t left_2;
    int32_t result[2];
    uint64_t value_6;
    uint64_t *data_pointer_3;
    uint64_t trace_argument_3;
    value_4 = (uint32_t)((uint64_t)value_2 >> 0x20);
    trace_argument_3 = input;
    data_pointer = provider;
    data_pointer_2 = input_2;
    if (!event_id || !input || input != event_id->field_0x0 || (!input_2 || !provider))
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1a, WD_SYMBOL_ADDRESS(WPP_9588815ae2a73b4cc0a05820e6133cd1_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INVALID_PARAMETER & 0xffffffffULL);
        }
        return -0x3ffffff3;
    }
    if (input <= 0x17)
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
        {
            return -0x3ffffff3;
        }
        if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return -0x3ffffff3;
        }
        WPP_SF_qLD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, provider, (uint64_t)KeGetCurrentThread(), ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)input & 0xffffffffULL);
        return -0x3ffffff3;
    }
    if (!event_id->field_0x8 || !event_id->field_0x4)
    {
        *provider = 0;
        *input_2 = 0;
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
        {
            return 0;
        }
        if (*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2a, WD_SYMBOL_ADDRESS(WPP_9588815ae2a73b4cc0a05820e6133cd1_Traceguids));
            return 0;
        }
        return 0;
    }
    allocation = (uint64_t)MpAllocatePoolWithTag(1, trace_argument_3, 0x4d72504d);
    if (!allocation)
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
        {
            return -0x3fffff66;
        }
        if (*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1c, WD_SYMBOL_ADDRESS(WPP_9588815ae2a73b4cc0a05820e6133cd1_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INSUFFICIENT_RESOURCES & 0xffffffffULL);
            return -0x3fffff66;
        }
        return -0x3fffff66;
    }
    memmove(allocation, event_id, trace_argument_3);
    data_pointer_3 = (uint64_t *)(allocation + 8);
    if (*data_pointer_3 && *(int32_t *)(allocation + 4))
    {
        trace_argument_3 += allocation;
        if (allocation <= trace_argument_3)
        {
            result[0] = input - 0x18;
            left = (int32_t *)(((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)result[0] & 0xffffffffULL);
            value_5 = MpConvertOffsetToPointer(allocation, trace_argument_3, *data_pointer_3, 0x30, left, result, data_pointer_3);
            value_4 = (uint32_t)((uint64_t)left >> 0x20);
            if (0 <= value_5)
            {
                value = *data_pointer_3;
                value_6 = 0;
                while (true)
                {
                    if (*(uint32_t *)(allocation + 4) <= (uint32_t)value_6)
                    {
                        *data_pointer_2 = allocation;
                        *data_pointer = input;
                        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                        {
                            return value_5;
                        }
                        if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4))
                        {
                            return value_5;
                        }
                        WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x29, WD_SYMBOL_ADDRESS(WPP_9588815ae2a73b4cc0a05820e6133cd1_Traceguids), event_id->field_0x4);
                        return value_5;
                    }
                    value_4 = (uint32_t)((uint64_t)left >> 0x20);
                    if (!result[0])
                    {
                        break;
                    }
                    data_pointer_3 = (uint64_t *)(value_6 * 0x30 + value);
                    left_2 = ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)result[0] & 0xffffffffULL;
                    value_5 = MpConvertOffsetToPointer(allocation, trace_argument_3, *data_pointer_3, 0x30, left_2, result, data_pointer_3);
                    value_4 = (uint32_t)((uint64_t)left_2 >> 0x20);
                    if (value_5 < 0)
                    {
                        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                        {
                            ExFreePoolWithTag(allocation, 0x4d72504d);
                            return value_5;
                        }
                        left_2 = 0x22;
                        value_3 = ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)value_5 & 0xffffffffULL;
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), left_2, WD_SYMBOL_ADDRESS(WPP_9588815ae2a73b4cc0a05820e6133cd1_Traceguids), (uint64_t)KeGetCurrentThread(), value_3);
                        ExFreePoolWithTag(allocation, 0x4d72504d);
                        return value_5;
                    }
                    left_2 = ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)result[0] & 0xffffffffULL;
                    value_5 = MpConvertOffsetToPointer(allocation, trace_argument_3, data_pointer_3[1], 0x30, left_2, result, &data_pointer_3[1]);
                    value_4 = (uint32_t)((uint64_t)left_2 >> 0x20);
                    if (value_5 < 0)
                    {
                        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                        {
                            ExFreePoolWithTag(allocation, 0x4d72504d);
                            return value_5;
                        }
                        left_2 = 0x23;
                        value_3 = ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)value_5 & 0xffffffffULL;
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), left_2, WD_SYMBOL_ADDRESS(WPP_9588815ae2a73b4cc0a05820e6133cd1_Traceguids), (uint64_t)KeGetCurrentThread(), value_3);
                        ExFreePoolWithTag(allocation, 0x4d72504d);
                        return value_5;
                    }
                    left_2 = ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)result[0] & 0xffffffffULL;
                    value_5 = MpConvertStringOffsetToPointer(allocation, trace_argument_3, data_pointer_3[2], 0x1fe, left_2, result, &data_pointer_3[2]);
                    value_4 = (uint32_t)((uint64_t)left_2 >> 0x20);
                    if (value_5 < 0)
                    {
                        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                        {
                            ExFreePoolWithTag(allocation, 0x4d72504d);
                            return value_5;
                        }
                        left_2 = 0x24;
                        value_3 = ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)value_5 & 0xffffffffULL;
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), left_2, WD_SYMBOL_ADDRESS(WPP_9588815ae2a73b4cc0a05820e6133cd1_Traceguids), (uint64_t)KeGetCurrentThread(), value_3);
                        ExFreePoolWithTag(allocation, 0x4d72504d);
                        return value_5;
                    }
                    if (!data_pointer_3[2] && !(*(int16_t *)(&data_pointer_3[3])))
                    {
                        value_5 = -0x3ffffff3;
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            left_2 = 0x25;
                            block_1:
                            value_5 = -0x3ffffff3;

                            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), left_2, WD_SYMBOL_ADDRESS(WPP_9588815ae2a73b4cc0a05820e6133cd1_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INVALID_PARAMETER & 0xffffffffULL);
                        }
                        ExFreePoolWithTag(allocation, 0x4d72504d);
                        return value_5;
                    }
                    left = result;
                    value_5 = MpRegpProcessClientList(allocation, trace_argument_3, data_pointer_3[4], result[0], left, &data_pointer_3[4]);
                    value_4 = (uint32_t)((uint64_t)left >> 0x20);
                    if (value_5 < 0)
                    {
                        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                        {
                            ExFreePoolWithTag(allocation, 0x4d72504d);
                            return value_5;
                        }
                        left_2 = 0x26;
                        value_3 = ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)value_5 & 0xffffffffULL;
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), left_2, WD_SYMBOL_ADDRESS(WPP_9588815ae2a73b4cc0a05820e6133cd1_Traceguids), (uint64_t)KeGetCurrentThread(), value_3);
                        ExFreePoolWithTag(allocation, 0x4d72504d);
                        return value_5;
                    }
                    left = result;
                    value_5 = MpRegpProcessValueList(allocation, trace_argument_3, data_pointer_3[5], result[0], left, &data_pointer_3[5]);
                    value_4 = (uint32_t)((uint64_t)left >> 0x20);
                    if (value_5 < 0)
                    {
                        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                        {
                            ExFreePoolWithTag(allocation, 0x4d72504d);
                            return value_5;
                        }
                        left_2 = 0x27;
                        value_3 = ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)value_5 & 0xffffffffULL;
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), left_2, WD_SYMBOL_ADDRESS(WPP_9588815ae2a73b4cc0a05820e6133cd1_Traceguids), (uint64_t)KeGetCurrentThread(), value_3);
                        ExFreePoolWithTag(allocation, 0x4d72504d);
                        return value_5;
                    }
                    if (!(*(int64_t *)(value + value_6 * 0x30)) && !data_pointer_3[4] && !data_pointer_3[5])
                    {
                        value_5 = -0x3ffffff3;
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            left_2 = 0x28;
                            goto block_1;
                        }
                        ExFreePoolWithTag(allocation, 0x4d72504d);
                        return value_5;
                    }
                    value_6 = (uint32_t)value_6 + 1;
                }

                value_5 = -0x7ffffffb;
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    ExFreePoolWithTag(allocation, 0x4d72504d);
                    return value_5;
                }
                left_2 = 0x21;
                value_3 = ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)0x80000005 & 0xffffffffULL;
            }
            else
            {
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    ExFreePoolWithTag(allocation, 0x4d72504d);
                    return value_5;
                }
                left_2 = 0x20;
                value_3 = ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)value_5 & 0xffffffffULL;
            }
        }
        else
        {
            value_5 = -0x3fffff6b;
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                ExFreePoolWithTag(allocation, 0x4d72504d);
                return value_5;
            }
            left_2 = 0x1e;
            value_3 = ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INTEGER_OVERFLOW & 0xffffffffULL;
        }
    }
    else
    {
        value_5 = -0x3ffffff3;
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            ExFreePoolWithTag(allocation, 0x4d72504d);
            return value_5;
        }
        left_2 = 0x1d;
        value_3 = ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INVALID_PARAMETER & 0xffffffffULL;
    }
    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), left_2, WD_SYMBOL_ADDRESS(WPP_9588815ae2a73b4cc0a05820e6133cd1_Traceguids), (uint64_t)KeGetCurrentThread(), value_3);
    ExFreePoolWithTag(allocation, 0x4d72504d);
    return value_5;
}

int32_t MpRegpProcessClientList(uint64_t input, uint64_t trace_argument_3, uint64_t input_2, uint64_t input_3, uint32_t *input_4, uint64_t *input_5)
{
    uint32_t *result;
    int64_t ***data_pointer;
    int32_t value;
    uint64_t value_2;
    int64_t ***values[2];
    int64_t ***index;
    uint32_t *data_pointer_2;
    int64_t ***data_pointer_3;
    result = input_4;
    data_pointer_3 = (int64_t ***)values;
    values[0] = NULL;
    data_pointer_2 = input_4;
    value = MpConvertOffsetToPointer();
    data_pointer = values[0];
    if (0 <= value)
    {
        for (index = values[0]; index; index = (int64_t ***)(*index))
        {
            data_pointer_2 = result;
            data_pointer_3 = index;
            value = MpConvertOffsetToPointer(input, trace_argument_3, *index, 0x20, *result, result, index);
            if (value < 0)
            {
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                {
                    return value;
                }
                if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    return value;
                }
                value_2 = 0x2c;
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_9588815ae2a73b4cc0a05820e6133cd1_Traceguids), (uint64_t)KeGetCurrentThread(), value, data_pointer_2, data_pointer_3);
                return value;
            }
        }

        value = 0;
        *input_5 = data_pointer;
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        value_2 = 0x2b;
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_9588815ae2a73b4cc0a05820e6133cd1_Traceguids), (uint64_t)KeGetCurrentThread(), value, data_pointer_2, data_pointer_3);
    }
    return value;
}

void MpRegFreeMonitorData(int64_t allocation)
{
    if (!allocation)
    {
        return;
    }
    ExFreePoolWithTag(allocation, 0x4d72504d);
    return;
}

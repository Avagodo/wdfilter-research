#include "wdfilter.h"

void MpSetProcessDocOpenRule(WD_LAYOUT_58 *input, int16_t *input_2)
{
    int64_t bm_doc_open_rules;
    uint64_t value;
    uint64_t value_2 = 0;
    uint64_t value_3;
    char byte_value;
    int32_t value_5;
    uint64_t value_6;
    WD_LAYOUT_57 *record;
    uint64_t *index;
    uint64_t value_7 = 0;
    uint64_t string;
    if (input && input_2)
    {
        if (*input_2)
        {
            value = 0;
            value_6 = 0;
            value_5 = FltParseFileName(input_2, 0, 0, &value_7);
            bm_doc_open_rules = MpBmDocOpenRules;
            if (0 <= value_5)
            {
                KeEnterCriticalRegion();
                ExAcquireResourceSharedLite(bm_doc_open_rules + 0x10, (uint64_t)value_6 & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
                for (index = *(uint64_t **)(MpBmDocOpenRules + 8); index; index = (uint64_t *)(*index))
                {
                    string = 0;
                    value_3 = 0;
                    RtlInitUnicodeString(&string, &index[1]);
                    value = (uint64_t)value & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
                    byte_value = RtlEqualUnicodeString(&string, &value_7, value);
                    if (byte_value)
                    {
                        record = (WD_LAYOUT_57 *)(&index[-1]);
                        goto block_1;
                    }
                }

                record = NULL;
                block_1:
                MpSetDocOpenRule(input, record);

                ExReleaseResourceLite(MpBmDocOpenRules + 0x10);
                KeLeaveCriticalRegion();
            }
            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x27, WD_SYMBOL_ADDRESS(WPP_52d92c1823383785ccf1919561da03b4_Traceguids), (uint64_t)KeGetCurrentThread(), value_5);
            }
        }
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x26, WD_SYMBOL_ADDRESS(WPP_52d92c1823383785ccf1919561da03b4_Traceguids), (uint64_t)KeGetCurrentThread(), WD_STATUS_INVALID_PARAMETER);
    }
    return;
}

uint64_t MpValidateDocOpenUserData(uint32_t input, uint32_t *input_2)
{
    int64_t value;
    uint64_t value_2;
    uint32_t value_3;
    uint32_t value_4;
    uint64_t current_thread;
    uint64_t event_id;
    uint32_t value_5;
    uint64_t value_6;
    uint32_t *data_pointer;
    uint64_t value_7;
    value = *(int64_t *)(&input_2[6]);
    value_5 = input_2[4];
    value_3 = (uint32_t)((uint64_t)value_7 >> 0x20);
    if (value)
    {
        if (value_5)
        {
            if (value != 0x80)
            {
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                {
                    return WD_STATUS_INVALID_PARAMETER;
                }
                if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    return WD_STATUS_INVALID_PARAMETER;
                }
                WPP_SF_qiLL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xe, WD_SYMBOL_ADDRESS(WPP_52d92c1823383785ccf1919561da03b4_Traceguids), (uint64_t)KeGetCurrentThread(), value);
                return WD_STATUS_INVALID_PARAMETER;
            }
            if (value_5 <= 0xf)
            {
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                {
                    return WD_STATUS_INVALID_PARAMETER;
                }
                if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    return WD_STATUS_INVALID_PARAMETER;
                }
                WPP_SF_qDDL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xf, WD_SYMBOL_ADDRESS(WPP_52d92c1823383785ccf1919561da03b4_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)value_5 & 0xffffffffULL, 0x10, WD_STATUS_INVALID_PARAMETER);
                return WD_STATUS_INVALID_PARAMETER;
            }
            if (0x80 <= input)
            {
                value_4 = input - 0x80;
                if (value_4 < value_5)
                {
                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                    {
                        return WD_STATUS_INVALID_PARAMETER;
                    }
                    if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                    {
                        return WD_STATUS_INVALID_PARAMETER;
                    }
                    current_thread = (uint64_t)KeGetCurrentThread();
                    event_id = 0x11;
                    WPP_SF_qDDL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_52d92c1823383785ccf1919561da03b4_Traceguids), current_thread, ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)value_5 & 0xffffffffULL, value_4, WD_STATUS_INVALID_PARAMETER);
                    return WD_STATUS_INVALID_PARAMETER;
                }
                data_pointer = &input_2[0x20];
                if (input_2 <= data_pointer)
                {
                    if (!(*data_pointer) || !(*(int64_t *)(&input_2[0x22])))
                    {
                        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                        {
                            return WD_STATUS_INVALID_PARAMETER;
                        }
                        if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                        {
                            return WD_STATUS_INVALID_PARAMETER;
                        }
                        current_thread = (uint64_t)KeGetCurrentThread();
                        event_id = 0x13;
                        value_5 = input_2[4];
                        WPP_SF_qDDL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_52d92c1823383785ccf1919561da03b4_Traceguids), current_thread, ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)value_5 & 0xffffffffULL, value_4, WD_STATUS_INVALID_PARAMETER);
                        return WD_STATUS_INVALID_PARAMETER;
                    }
                    value_6 = (uint64_t)(*data_pointer) << 4;
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
                        current_thread = 0x14;
                    }
                    else
                    {
                        if (0x10 <= value_4)
                        {
                            value_5 = (uint32_t)value_6;
                            if (value_5 <= input - 0x90)
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
                            WPP_SF_qdddd(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x16, WD_SYMBOL_ADDRESS(WPP_52d92c1823383785ccf1919561da03b4_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)(*data_pointer) & 0xffffffffULL, value_5, input - 0x90, WD_STATUS_INVALID_PARAMETER);
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
                        current_thread = 0x15;
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
                    current_thread = 0x12;
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
                current_thread = 0x10;
            }
            event_id = WD_STATUS_INTEGER_OVERFLOW;
            value_2 = ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INTEGER_OVERFLOW & 0xffffffffULL;
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), current_thread, WD_SYMBOL_ADDRESS(WPP_52d92c1823383785ccf1919561da03b4_Traceguids), (uint64_t)KeGetCurrentThread(), value_2);
            return event_id;
        }
    }
    else if (!value_5)
    {
        return 0;
    }
    event_id = WD_STATUS_INVALID_PARAMETER;
    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
    {
        return WD_STATUS_INVALID_PARAMETER;
    }
    if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
    {
        return WD_STATUS_INVALID_PARAMETER;
    }
    current_thread = 0xd;
    value_2 = ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INVALID_PARAMETER & 0xffffffffULL;
    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), current_thread, WD_SYMBOL_ADDRESS(WPP_52d92c1823383785ccf1919561da03b4_Traceguids), (uint64_t)KeGetCurrentThread(), value_2);
    return event_id;
}

int32_t MpCreateDocOpenRules(uint32_t *input, int64_t *input_2)
{
    uint64_t value;
    uint32_t *data_pointer;
    int64_t value_2;
    uint32_t *trace_argument_3;
    int64_t *data_pointer_2;
    uint32_t *trace_argument_3_2;
    uint64_t value_3;
    uint32_t *left;
    uint64_t value_4;
    uint32_t value_5;
    int32_t value_6;
    WD_LAYOUT_105 *buffer;
    int64_t *allocation;
    uint32_t value_7;
    uint64_t string_size;
    uint32_t result[2];
    uint32_t value_8;
    uint64_t *data_pointer_3;
    *input_2 = 0;
    value_7 = input[4];
    if (!value_7)
    {
        return 0;
    }
    data_pointer = (uint32_t *)(*(int64_t *)(&input[6]) + (int64_t)input);
    value_5 = (uint32_t)((uint64_t)value_3 >> 0x20);
    data_pointer_2 = input_2;
    if (input <= data_pointer)
    {
        trace_argument_3 = (uint32_t *)((uint64_t)input[1] + (int64_t)input);
        trace_argument_3_2 = trace_argument_3;
        if (trace_argument_3 < input)
        {
            value_6 = -0x3fffff6b;
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                MpDeleteDocOpenRules(data_pointer_2);
                return value_6;
            }
            string_size = 0x18;
            value_6 = -0x3fffff6b;
            value_4 = ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INTEGER_OVERFLOW & 0xffffffffULL;
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), string_size, WD_SYMBOL_ADDRESS(WPP_52d92c1823383785ccf1919561da03b4_Traceguids), (uint64_t)KeGetCurrentThread(), value_4);
            MpDeleteDocOpenRules(data_pointer_2);
            return value_6;
        }
        if (value_7 < 0x10)
        {
            value_6 = -0x3fffff6b;
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                MpDeleteDocOpenRules(data_pointer_2);
                return value_6;
            }
            string_size = 0x19;
            value_6 = -0x3fffff6b;
            value_4 = ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INTEGER_OVERFLOW & 0xffffffffULL;
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), string_size, WD_SYMBOL_ADDRESS(WPP_52d92c1823383785ccf1919561da03b4_Traceguids), (uint64_t)KeGetCurrentThread(), value_4);
            MpDeleteDocOpenRules(data_pointer_2);
            return value_6;
        }
        result[0] = value_7 - 0x10;
        data_pointer_3 = (uint64_t *)(&data_pointer[2]);
        left = (uint32_t *)(((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)result[0] & 0xffffffffULL);
        value_6 = MpConvertOffsetToPointer(input, trace_argument_3, *data_pointer_3, 0x10, left, result, data_pointer_3);
        value_5 = (uint32_t)((uint64_t)left >> 0x20);
        if (0 <= value_6)
        {
            value = *data_pointer_3;
            value_8 = 0;
            value_7 = result[0];
            while (true)
            {
                value_5 = (uint32_t)((uint64_t)left >> 0x20);
                if (*data_pointer <= value_8)
                {
                    return 0;
                }
                if (!value_7)
                {
                    value_6 = -0x7ffffffb;
                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                    {
                        MpDeleteDocOpenRules(data_pointer_2);
                        return value_6;
                    }
                    string_size = 0x1b;
                    value_4 = ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)0x80000005 & 0xffffffffULL;
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), string_size, WD_SYMBOL_ADDRESS(WPP_52d92c1823383785ccf1919561da03b4_Traceguids), (uint64_t)KeGetCurrentThread(), value_4);
                    MpDeleteDocOpenRules(data_pointer_2);
                    return value_6;
                }
                if (!value)
                {
                    value_6 = -0x3fffffff;
                    block_1:
                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                    {
                        MpDeleteDocOpenRules(data_pointer_2);
                        return value_6;
                    }

                    string_size = 0x1c;
                    value_4 = ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)value_6 & 0xffffffffULL;
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), string_size, WD_SYMBOL_ADDRESS(WPP_52d92c1823383785ccf1919561da03b4_Traceguids), (uint64_t)KeGetCurrentThread(), value_4);
                    MpDeleteDocOpenRules(data_pointer_2);
                    return value_6;
                }
                data_pointer_3 = (uint64_t *)(value_8 * 0x10ULL + value);
                string_size = ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)value_7 & 0xffffffffULL;
                value_6 = MpConvertStringOffsetToPointer(input, trace_argument_3, *data_pointer_3, 0x208, string_size, result, data_pointer_3);
                value_5 = (uint32_t)((uint64_t)string_size >> 0x20);
                if (value_6 < 0)
                {
                    goto block_1;
                }
                value_2 = value_8 * 0x10ULL;
                if (!(*(int64_t *)(value_2 + value)))
                {
                    value_6 = -0x3ffffff3;
                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                    {
                        MpDeleteDocOpenRules(data_pointer_2);
                        return value_6;
                    }
                    string_size = 0x1d;
                    block_2:
                    value_6 = -0x3ffffff3;

                    value_4 = ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INVALID_PARAMETER & 0xffffffffULL;
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), string_size, WD_SYMBOL_ADDRESS(WPP_52d92c1823383785ccf1919561da03b4_Traceguids), (uint64_t)KeGetCurrentThread(), value_4);
                    MpDeleteDocOpenRules(data_pointer_2);
                    return value_6;
                }
                left = result;
                data_pointer_3 = (uint64_t *)(value + 8 + value_2);
                value_6 = MpConvertMultiSzOffsetToPointer(input, trace_argument_3_2, *data_pointer_3, result[0], left, data_pointer_3);
                value_5 = (uint32_t)((uint64_t)left >> 0x20);
                if (value_6 < 0)
                {
                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                    {
                        MpDeleteDocOpenRules(data_pointer_2);
                        return value_6;
                    }
                    string_size = 0x1e;
                    value_4 = ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)value_6 & 0xffffffffULL;
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), string_size, WD_SYMBOL_ADDRESS(WPP_52d92c1823383785ccf1919561da03b4_Traceguids), (uint64_t)KeGetCurrentThread(), value_4);
                    MpDeleteDocOpenRules(data_pointer_2);
                    return value_6;
                }
                if (!(*data_pointer_3))
                {
                    value_6 = -0x3ffffff3;
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        string_size = 0x1f;
                        goto block_2;
                    }
                    MpDeleteDocOpenRules(data_pointer_2);
                    return value_6;
                }
                buffer = (WD_LAYOUT_105 *)ExAllocateFromPagedLookasideList((void *)(MpBmDocOpenRules + 0x80));
                if (!buffer)
                {
                    value_6 = -0x3fffff66;
                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                    {
                        MpDeleteDocOpenRules(data_pointer_2);
                        return value_6;
                    }
                    string_size = 0x20;
                    value_4 = (uint64_t)((uint64_t)left) & 0xffffffff00000000 | (uint64_t)WD_STATUS_INSUFFICIENT_RESOURCES & 0xffffffff;
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), string_size, WD_SYMBOL_ADDRESS(WPP_52d92c1823383785ccf1919561da03b4_Traceguids), (uint64_t)KeGetCurrentThread(), value_4);
                    MpDeleteDocOpenRules(data_pointer_2);
                    return value_6;
                }
                memset(buffer, 0, (char *)0x228);
                value_6 = RtlStringCbCopyW(buffer->field_0x10, 0x20a, *(int64_t *)(value_2 + value));
                if (value_6 < 0)
                {
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        string_size = 0x21;
                        value_4 = (uint64_t)((uint64_t)left) & 0xffffffff00000000 | (uint64_t)value_6 & 0xffffffff;
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), string_size, WD_SYMBOL_ADDRESS(WPP_52d92c1823383785ccf1919561da03b4_Traceguids), (uint64_t)KeGetCurrentThread(), value_4);
                    }
                    ExFreeToPagedLookasideList((void *)(MpBmDocOpenRules + 0x80), buffer);
                    MpDeleteDocOpenRules(data_pointer_2);
                    return value_6;
                }
                string_size = MpMultiStringCbLen((int16_t *)(*data_pointer_3));
                allocation = MpAllocatePoolWithTag(1, string_size, 0x6f64504d);
                buffer->field_0x220 = allocation;
                if (!allocation)
                {
                    value_6 = -0x3fffff66;
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        string_size = 0x22;
                        value_4 = (uint64_t)((uint64_t)left) & 0xffffffff00000000 | (uint64_t)WD_STATUS_INSUFFICIENT_RESOURCES & 0xffffffff;
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), string_size, WD_SYMBOL_ADDRESS(WPP_52d92c1823383785ccf1919561da03b4_Traceguids), (uint64_t)KeGetCurrentThread(), value_4);
                    }
                    ExFreeToPagedLookasideList((void *)(MpBmDocOpenRules + 0x80), buffer);
                    MpDeleteDocOpenRules(data_pointer_2);
                    return value_6;
                }
                memmove(allocation, (uint64_t *)(*data_pointer_3), string_size);
                value_5 = (uint32_t)((uint64_t)left >> 0x20);
                allocation = &buffer->field_0x8;
                *allocation = 0;
                buffer->field_0x4 = 1;
                buffer->field_0x0 = 0x228da15;
                *allocation = *data_pointer_2;
                *data_pointer_2 = (int64_t)allocation;
                value_7 = result[0];
                if (value_8)
                {
                    if (result[0] < 0x10)
                    {
                        value_6 = -0x3fffff6b;
                        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                        {
                            MpDeleteDocOpenRules(data_pointer_2);
                            return value_6;
                        }
                        string_size = 0x23;
                        value_4 = ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)value_6 & 0xffffffffULL;
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), string_size, WD_SYMBOL_ADDRESS(WPP_52d92c1823383785ccf1919561da03b4_Traceguids), (uint64_t)KeGetCurrentThread(), value_4);
                        MpDeleteDocOpenRules(data_pointer_2);
                        return value_6;
                    }
                    value_7 = result[0] - 0x10;
                    result[0] = value_7;
                }
                value_8 += 1;
                trace_argument_3 = trace_argument_3_2;
            }
        }
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            MpDeleteDocOpenRules(data_pointer_2);
            return value_6;
        }
        string_size = 0x1a;
        value_4 = ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)value_6 & 0xffffffffULL;
    }
    else
    {
        value_6 = -0x3fffff6b;
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            MpDeleteDocOpenRules(data_pointer_2);
            return value_6;
        }
        string_size = 0x17;
        value_6 = -0x3fffff6b;
        value_4 = ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INTEGER_OVERFLOW & 0xffffffffULL;
    }
    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), string_size, WD_SYMBOL_ADDRESS(WPP_52d92c1823383785ccf1919561da03b4_Traceguids), (uint64_t)KeGetCurrentThread(), value_4);
    MpDeleteDocOpenRules(data_pointer_2);
    return value_6;
}

void MpReleaseDocOpenRule(void *input)
{
    int32_t *atomic_value;
    int32_t value;
    atomic_value = &((int32_t *)input)[1];
    value = WdAtomicAdd32((volatile int32_t *)atomic_value, -1);
    if (value != 1)
    {
        return;
    }
    if (((int64_t *)input)[0x44])
    {
        ExFreePoolWithTag(((int64_t *)input)[0x44], 0x6f64504d);
    }
    ExFreeToPagedLookasideList((void *)(MpBmDocOpenRules + 0x80), input);
    return;
}

void MpDeleteDocOpenRules(int64_t *input)
{
    int64_t *data_pointer;
    while (data_pointer = (int64_t *)(*input), data_pointer)
    {
        *input = *data_pointer;
        MpReleaseDocOpenRule(&data_pointer[-1]);
    }

    return;
}

void MpCleanupDocOpenRules(void)
{
    if (!MpBmDocOpenRules)
    {
        return;
    }
    MpDeleteDocOpenRules((int64_t *)(MpBmDocOpenRules + 8));
    ExDeletePagedLookasideList(MpBmDocOpenRules + 0x80);
    ExDeleteResourceLite(MpBmDocOpenRules + 0x10);
    ExFreePoolWithTag(MpBmDocOpenRules, 0x6f64504d);
    return;
}

void MpSendDocOpenMessage(uint64_t input, uint64_t source_text, WD_LAYOUT_10 *input_2, void *input_3)
{
    int64_t value;
    int32_t value_2;
    int32_t value_3;
    uint64_t value_4;
    void *data_pointer;
    uint32_t value_5;
    void *data_pointer_2;
    uint64_t value_7;
    int64_t value_8;
    int32_t value_9;
    uint64_t creation_time;
    uint64_t text_size;
    uint32_t values[2];
    int64_t value_10;
    value_5 = (uint32_t)((uint64_t)value_4 >> 0x20);
    value_10 = 0;
    values[0] = 0;
    text_size = 0;
    data_pointer_2 = input_3;
    value_9 = RtlStringCbLengthW(source_text, 0x20a, &text_size);
    value_7 = text_size;
    if (value_9 <= -1)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x29, WD_SYMBOL_ADDRESS(WPP_52d92c1823383785ccf1919561da03b4_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)value_9 & 0xffffffffULL);
        }
        return;
    }
    if (!text_size)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2a, WD_SYMBOL_ADDRESS(WPP_52d92c1823383785ccf1919561da03b4_Traceguids), (uint64_t)KeGetCurrentThread());
        }
        return;
    }
    value_2 = (int32_t)text_size;
    value_3 = input_2->field_0x0 + 0x4c + value_2;
    value_9 = MpQuerySessionId(values);
    if (value_9 <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        creation_time = ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)value_9 & 0xffffffffULL;
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2b, WD_SYMBOL_ADDRESS(WPP_52d92c1823383785ccf1919561da03b4_Traceguids), (uint64_t)KeGetCurrentThread(), creation_time);
        value_5 = (uint32_t)((uint64_t)creation_time >> 0x20);
    }
    value_9 = MpAsyncCreateNotification(&value_10, value_3);
    value_8 = value_10;
    if (0 <= value_9)
    {
        *(uint32_t *)(value_10 + 0x10) = 7;
        *(int32_t *)(value_10 + 8) = value_3;
        *(uint32_t *)(value_8 + 0x18) = MpGetRequestorProcessId(input);
        creation_time = PsGetProcessCreateTimeQuadPart(MpGetRequestorProcess(input));
        *(uint64_t *)(value_8 + 0x1c) = MpFileTimeFromUlong64(creation_time);
        *(uint32_t *)(value_8 + 0x24) = PsGetCurrentThreadId();
        *(uint32_t *)(value_8 + 0x28) = values[0];
        *(int32_t *)(value_8 + 0x2c) = value_2;
        *(uint64_t *)(value_8 + 0x30) = 0x48;
        value_9 = RtlStringCbCopyW((int16_t *)(value_8 + 0x48), value_7 + 2, source_text);
        if (0 <= value_9)
        {
            *(uint32_t *)(value_8 + 0x38) = (uint32_t)input_2->field_0x0;
            value = (value_7 & 0xffffffff) + 0x4a;
            *(int64_t *)(value_8 + 0x40) = value;
            memmove((uint64_t *)(value + value_8), input_2->field_0x8, input_2->field_0x0);
            *(uint16_t *)(value_8 + ((value_7 & 0xffffffff) + 0x4a + (uint64_t)input_2->field_0x0 & 0xfffffffffffffffe)) = 0;
            data_pointer = data_pointer_2;
            value_9 = MpAsyncSendNotification(value_8, value_3, 0, 1, data_pointer_2);
            value_5 = (uint32_t)((uint64_t)data_pointer >> 0x20);
            if (value_9 <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                creation_time = 0x2e;
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), creation_time, WD_SYMBOL_ADDRESS(WPP_52d92c1823383785ccf1919561da03b4_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)value_9 & 0xffffffffULL);
            }
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            creation_time = 0x2d;
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), creation_time, WD_SYMBOL_ADDRESS(WPP_52d92c1823383785ccf1919561da03b4_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)value_9 & 0xffffffffULL);
        }
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        creation_time = 0x2c;
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), creation_time, WD_SYMBOL_ADDRESS(WPP_52d92c1823383785ccf1919561da03b4_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)value_9 & 0xffffffffULL);
    }
    if (value_8)
    {
        MpAsyncDereferenceNotification(value_8);
    }
    return;
}

uint64_t MpInitializeDocOpenRules(void)
{
    uint32_t *allocation;
    uint64_t value;
    uint32_t value_2;
    value_2 = (uint32_t)((uint64_t)value >> 0x20);
    allocation = (uint32_t *)MpAllocatePoolWithTag(ExDefaultNonPagedPoolType, (char *)0x100, 0x6f64504d);
    MpBmDocOpenRules = allocation;
    if (!allocation)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 10, WD_SYMBOL_ADDRESS(WPP_52d92c1823383785ccf1919561da03b4_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_2 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INSUFFICIENT_RESOURCES & 0xffffffffULL);
        }
        return WD_STATUS_INSUFFICIENT_RESOURCES;
    }
    *allocation = 0x100da14;
    ExInitializePagedLookasideList(&allocation[0x20], 0, 0, 0, 0x228, 0x6f64504d, 0);
    ExInitializeResourceLite(&MpBmDocOpenRules[4]);
    *(uint64_t *)(&MpBmDocOpenRules[2]) = 0;
    return 0;
}

#include "wdfilter.h"

void WPP_SF_qqLqLD(uint64_t input, uint16_t input_2, uint64_t input_3, uint64_t input_4, uint64_t input_5, uint64_t input_6, uint64_t input_7)
{
    uint32_t values[2];
    uint64_t value;
    uint64_t value_2;
    uint64_t value_3;
    value_2 = input_5;
    value = input_7;
    values[0] = 0x80000005;
    value_3 = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_ad901f7c41c131cd4383d8e8e48ba446_Traceguids), input_2, &value_3, 8, &value_2, 8, &input_6, 4, &value, 8, &unrecovered_stack_argument_8, 4, values, 4, 0);
    return;
}

void WPP_SF_qqqD(uint64_t input, uint16_t input_2, uint64_t input_3, uint64_t input_4, uint64_t input_5, uint64_t input_6)
{
    uint32_t values[2];
    uint64_t value;
    uint64_t value_2;
    uint64_t value_3;
    value_2 = input_5;
    value = input_6;
    values[0] = 0x80000005;
    value_3 = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_ad901f7c41c131cd4383d8e8e48ba446_Traceguids), input_2, &value_3, 8, &value_2, 8, &value, 8, values, 4, 0);
    return;
}

int32_t MpConvertMultiSzOffsetToPointer(uint64_t input, uint64_t trace_argument_3, int64_t provider, uint32_t left, uint32_t *result, uint64_t *input_2)
{
    int32_t status;
    uint64_t value;
    uint32_t value_2;
    uint64_t value_3;
    uint32_t value_4;
    uint64_t string_size;
    uint64_t value_5;
    uint64_t trace_argument_2;
    uint32_t value_6;
    uint64_t value_7;
    uint64_t value_8;
    uint32_t value_9;
    value_9 = (uint32_t)((uint64_t)value_7 >> 0x20);
    value_2 = (uint32_t)((uint64_t)value >> 0x20);
    value_4 = (uint32_t)((uint64_t)value_3 >> 0x20);
    if (!provider)
    {
        *input_2 = 0;
        *result = left;
        return 0;
    }
    trace_argument_2 = input + provider;
    if (input <= trace_argument_2)
    {
        if (trace_argument_3 <= trace_argument_2)
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return -0x7ffffffb;
            }
            if (*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qqqD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1d, provider, (uint64_t)KeGetCurrentThread(), trace_argument_2, trace_argument_3);
                return -0x7ffffffb;
            }
            return -0x7ffffffb;
        }
        string_size = MpMultiStringCbLen(trace_argument_2);
        if (0x100000000 <= string_size)
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return -0x3fffff6b;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return -0x3fffff6b;
            }
            value_5 = 0x1e;
        }
        else
        {
            if (trace_argument_3 - trace_argument_2 <= 0xffffffff)
            {
                value_6 = (uint32_t)string_size;
                if ((uint32_t)(trace_argument_3 - trace_argument_2) < value_6)
                {
                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                    {
                        return -0x7ffffffb;
                    }
                    if (*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        WPP_SF_qqLqLD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x21);
                        return -0x7ffffffb;
                    }
                    return -0x7ffffffb;
                }
                if (left < value_6)
                {
                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                    {
                        return -0x7ffffffb;
                    }
                    if (*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        WPP_SF_qDDL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x22, WD_SYMBOL_ADDRESS(WPP_ad901f7c41c131cd4383d8e8e48ba446_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)value_6 & 0xffffffffULL, ((uint64_t)value_2 & 0xffffffffULL) << 32 | (uint64_t)left & 0xffffffffULL, ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)0x80000005 & 0xffffffffULL);
                        return -0x7ffffffb;
                    }
                    return -0x7ffffffb;
                }
                status = RtlULongSub(left, string_size & 0xffffffff, result);
                if (0 <= status)
                {
                    *input_2 = trace_argument_2;
                    return 0;
                }
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                {
                    return status;
                }
                if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    return status;
                }
                value_5 = 0x23;
                value_8 = ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL;
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_5, WD_SYMBOL_ADDRESS(WPP_ad901f7c41c131cd4383d8e8e48ba446_Traceguids), (uint64_t)KeGetCurrentThread(), value_8);
                return status;
            }
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return -0x3fffff6b;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return -0x3fffff6b;
            }
            value_5 = 0x20;
        }
    }
    else
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
        {
            return -0x3fffff6b;
        }
        if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return -0x3fffff6b;
        }
        value_5 = 0x1c;
    }
    status = -0x3fffff6b;
    value_8 = ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INTEGER_OVERFLOW & 0xffffffffULL;
    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_5, WD_SYMBOL_ADDRESS(WPP_ad901f7c41c131cd4383d8e8e48ba446_Traceguids), (uint64_t)KeGetCurrentThread(), value_8);
    return status;
}

int32_t MpConvertOffsetToPointer(uint64_t input, uint64_t trace_argument_3, int64_t provider, uint32_t right, uint32_t left, uint32_t *result, uint64_t *input_2)
{
    int32_t status;
    uint32_t value;
    uint64_t value_2;
    uint32_t value_3;
    uint64_t value_4;
    uint64_t trace_argument_2;
    uint64_t value_5;
    uint64_t value_6;
    uint32_t value_7;
    uint64_t value_8;
    value_7 = (uint32_t)((uint64_t)value_5 >> 0x20);
    if (!provider)
    {
        *input_2 = 0;
        *result = left;
        return 0;
    }
    trace_argument_2 = input + provider;
    if (input <= trace_argument_2)
    {
        if (trace_argument_3 <= trace_argument_2)
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return -0x7ffffffb;
            }
            if (*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qqqD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xb, provider, (uint64_t)KeGetCurrentThread(), trace_argument_2, trace_argument_3);
                return -0x7ffffffb;
            }
            return -0x7ffffffb;
        }
        if (trace_argument_3 - trace_argument_2 <= 0xffffffff)
        {
            value_3 = (uint32_t)(trace_argument_3 - trace_argument_2);
            value = (uint32_t)((uint64_t)value_8 >> 0x20);
            if (value_3 < right)
            {
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                {
                    return -0x7ffffffb;
                }
                if (*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qqLqLD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xe, provider, (uint64_t)KeGetCurrentThread(), trace_argument_2, ((uint64_t)value & 0xffffffffULL) << 32 | (uint64_t)right & 0xffffffffULL, trace_argument_3, value_3);
                    return -0x7ffffffb;
                }
                return -0x7ffffffb;
            }
            if (left < right)
            {
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                {
                    return -0x7ffffffb;
                }
                if (*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qDDL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xf, WD_SYMBOL_ADDRESS(WPP_ad901f7c41c131cd4383d8e8e48ba446_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)right & 0xffffffffULL, ((uint64_t)value & 0xffffffffULL) << 32 | (uint64_t)left & 0xffffffffULL, (uint64_t)value_2 & 0xffffffff00000000 | (uint64_t)0x80000005 & 0xffffffff);
                    return -0x7ffffffb;
                }
                return -0x7ffffffb;
            }
            status = RtlULongSub(left, right, result);
            if (0 <= status)
            {
                *input_2 = trace_argument_2;
                return 0;
            }
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return status;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return status;
            }
            value_4 = 0x10;
            value_6 = ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL;
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_4, WD_SYMBOL_ADDRESS(WPP_ad901f7c41c131cd4383d8e8e48ba446_Traceguids), (uint64_t)KeGetCurrentThread(), value_6);
            return status;
        }
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
        {
            return -0x3fffff6b;
        }
        if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return -0x3fffff6b;
        }
        value_4 = 0xd;
    }
    else
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
        {
            return -0x3fffff6b;
        }
        if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return -0x3fffff6b;
        }
        value_4 = 10;
    }
    status = -0x3fffff6b;
    value_6 = ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INTEGER_OVERFLOW & 0xffffffffULL;
    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_4, WD_SYMBOL_ADDRESS(WPP_ad901f7c41c131cd4383d8e8e48ba446_Traceguids), (uint64_t)KeGetCurrentThread(), value_6);
    return status;
}

int32_t MpConvertStringOffsetToPointer(uint64_t input, uint64_t trace_argument_3, int64_t provider, uint32_t input_2, uint32_t input_3, uint32_t *result, uint64_t *input_4)
{
    uint64_t trace_argument_2;
    uint64_t value;
    uint32_t value_2;
    uint64_t value_3;
    uint32_t value_4;
    uint64_t value_5;
    uint32_t value_6;
    uint32_t left;
    uint32_t buffer_size;
    int32_t status;
    uint64_t value_7;
    uint64_t text_size;
    uint64_t provider_2;
    uint64_t value_8;
    left = input_3;
    value_2 = (uint32_t)((uint64_t)value_8 >> 0x20);
    value_4 = (uint32_t)((uint64_t)value_3 >> 0x20);
    value_6 = (uint32_t)((uint64_t)value_5 >> 0x20);
    text_size = 0;
    if (!provider)
    {
        *input_4 = 0;
        *result = input_3;
        return 0;
    }
    trace_argument_2 = input + provider;
    if (input <= trace_argument_2)
    {
        if (trace_argument_3 <= trace_argument_2)
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return -0x7ffffffb;
            }
            if (*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qqqD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x12, provider, (uint64_t)KeGetCurrentThread(), trace_argument_2, trace_argument_3);
                return -0x7ffffffb;
            }
            return -0x7ffffffb;
        }
        buffer_size = input_2 + 2;
        if (input_2 <= buffer_size)
        {
            if (input_3 < buffer_size)
            {
                buffer_size = input_3;
            }
            status = RtlStringCbLengthW(trace_argument_2, buffer_size, &text_size);
            if (status <= -1)
            {
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                {
                    return status;
                }
                if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    return status;
                }
                value_7 = 0x14;
                value = ((uint64_t)value_2 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL;
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_7, WD_SYMBOL_ADDRESS(WPP_ad901f7c41c131cd4383d8e8e48ba446_Traceguids), (uint64_t)KeGetCurrentThread(), value);
                return status;
            }
            if (0x100000000 <= text_size)
            {
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                {
                    return -0x3fffff6b;
                }
                if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    return -0x3fffff6b;
                }
                value_7 = 0x15;
            }
            else
            {
                buffer_size = (uint32_t)text_size + 2;
                if ((uint32_t)text_size <= buffer_size)
                {
                    provider_2 = trace_argument_3 - trace_argument_2;
                    if (provider_2 <= 0xffffffff)
                    {
                        if ((uint32_t)provider_2 < buffer_size)
                        {
                            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                            {
                                return -0x7ffffffb;
                            }
                            if (*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                            {
                                WPP_SF_qqLqLD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x19, provider_2, (uint64_t)KeGetCurrentThread(), trace_argument_2, ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)buffer_size & 0xffffffffULL, trace_argument_3, (uint32_t)provider_2);
                                return -0x7ffffffb;
                            }
                            return -0x7ffffffb;
                        }
                        if (left < buffer_size)
                        {
                            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                            {
                                return -0x7ffffffb;
                            }
                            if (*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                            {
                                WPP_SF_qDDL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1a, WD_SYMBOL_ADDRESS(WPP_ad901f7c41c131cd4383d8e8e48ba446_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_2 & 0xffffffffULL) << 32 | (uint64_t)buffer_size & 0xffffffffULL, ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)left & 0xffffffffULL, ((uint64_t)value_6 & 0xffffffffULL) << 32 | (uint64_t)0x80000005 & 0xffffffffULL);
                                return -0x7ffffffb;
                            }
                            return -0x7ffffffb;
                        }
                        status = RtlULongSub(left, buffer_size, result);
                        if (0 <= status)
                        {
                            *input_4 = trace_argument_2;
                            return 0;
                        }
                        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                        {
                            return status;
                        }
                        if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                        {
                            return status;
                        }
                        value_7 = 0x1b;
                        value = ((uint64_t)value_2 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL;
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_7, WD_SYMBOL_ADDRESS(WPP_ad901f7c41c131cd4383d8e8e48ba446_Traceguids), (uint64_t)KeGetCurrentThread(), value);
                        return status;
                    }
                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                    {
                        return -0x3fffff6b;
                    }
                    if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                    {
                        return -0x3fffff6b;
                    }
                    value_7 = 0x18;
                }
                else
                {
                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                    {
                        return -0x3fffff6b;
                    }
                    if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                    {
                        return -0x3fffff6b;
                    }
                    value_7 = 0x16;
                }
            }
        }
        else
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return -0x3fffff6b;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return -0x3fffff6b;
            }
            value_7 = 0x13;
        }
    }
    else
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
        {
            return -0x3fffff6b;
        }
        if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return -0x3fffff6b;
        }
        value_7 = 0x11;
    }
    status = -0x3fffff6b;
    value = ((uint64_t)value_2 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INTEGER_OVERFLOW & 0xffffffffULL;
    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_7, WD_SYMBOL_ADDRESS(WPP_ad901f7c41c131cd4383d8e8e48ba446_Traceguids), (uint64_t)KeGetCurrentThread(), value);
    return status;
}

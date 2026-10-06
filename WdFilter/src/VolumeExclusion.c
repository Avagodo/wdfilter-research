#include "wdfilter.h"

uint64_t MpValidateVolumeExclusionUserData(uint32_t input, void *input_2)
{
    uint32_t value;
    uint64_t value_2;
    uint32_t value_3;
    value_3 = (uint32_t)((uint64_t)value_2 >> 0x20);
    if (0x80 <= input)
    {
        if (((int64_t *)input_2)[3] != 0x80)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qiLL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xb, WD_SYMBOL_ADDRESS(WPP_10dc03dfe89c3068428b256958c5fc7a_Traceguids), (uint64_t)KeGetCurrentThread(), ((int64_t *)input_2)[3]);
            }
            return WD_STATUS_INVALID_PARAMETER;
        }
        value = ((uint32_t *)input_2)[4];
        if (value + 0x80ULL != (uint64_t)input)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qDDL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xc, WD_SYMBOL_ADDRESS(WPP_10dc03dfe89c3068428b256958c5fc7a_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)(value + 0x80) & 0xffffffffULL, input, 0xc0000206);
            }
        }
        else
        {
            if (!(value & 1))
            {
                if (value < 4 || !(*(int16_t *)((int64_t)input_2 + (uint64_t)(value >> 1) * 2 + 0x7e)) && !(*(int16_t *)((int64_t)input_2 + (uint64_t)(value >> 1) * 2 + 0x7c)))
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
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xe, WD_SYMBOL_ADDRESS(WPP_10dc03dfe89c3068428b256958c5fc7a_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INVALID_PARAMETER & 0xffffffffULL);
                return WD_STATUS_INVALID_PARAMETER;
            }
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qDL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xd, WD_SYMBOL_ADDRESS(WPP_10dc03dfe89c3068428b256958c5fc7a_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)value & 0xffffffffULL, 0xc0000206);
            }
        }
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 10, WD_SYMBOL_ADDRESS(WPP_10dc03dfe89c3068428b256958c5fc7a_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)input & 0xffffffffULL);
    }
    return 0xc0000206;
}

void MpApplyVolumeExclusions(int32_t input, uint64_t input_2, int16_t *trace_argument_1)
{
    int64_t data;
    uint64_t trace_argument_1_2;
    uint64_t value = 0;
    char byte_value;
    uint64_t *data_pointer;
    uint64_t *index;
    uint64_t string = 0;
    int16_t *wide_text;
    uint32_t value_3;
    uint32_t value_4;
    trace_argument_1_2 = input_2 & 0xffffffff;
    value_4 = (uint32_t)input_2;
    wide_text = trace_argument_1;
    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
    {
        wide_text = &WPP_10dc03dfe89c3068428b256958c5fc7a_Traceguids;
        input_2 = 0;
        WPP_SF_DD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xf, WD_SYMBOL_ADDRESS(WPP_10dc03dfe89c3068428b256958c5fc7a_Traceguids), trace_argument_1_2, input);
    }
    data = MpData;
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(data + 0x2f0, (uint64_t)input_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
    data_pointer = (uint64_t *)(MpData + 0x228);
    index = (uint64_t *)(*data_pointer);
    if (input)
    {
        for (; index != data_pointer; index = (uint64_t *)(*index))
        {
            if (*(int32_t *)(&index[0xe]) != 2 && *(int32_t *)(&index[0xe]) != 0x1c)
            {
                *(uint32_t *)(&index[9]) = *(uint32_t *)(&index[9]) & 0x7fffffff;
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                {
                    wide_text = &WPP_10dc03dfe89c3068428b256958c5fc7a_Traceguids;
                    WPP_SF_Z(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x11, WD_SYMBOL_ADDRESS(WPP_10dc03dfe89c3068428b256958c5fc7a_Traceguids), &index[2]);
                }
            }
            else
            {
                *(uint32_t *)(&index[9]) = *(uint32_t *)(&index[9]) | 0x80000000;
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                {
                    wide_text = &WPP_10dc03dfe89c3068428b256958c5fc7a_Traceguids;
                    WPP_SF_Z(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x10, WD_SYMBOL_ADDRESS(WPP_10dc03dfe89c3068428b256958c5fc7a_Traceguids), &index[2]);
                }
                MpLogPrintfW(L"[Mini-filter] Resetting all volumes to be excluded first due to inclusion setting - %wZ", &index[2]);
            }
            data_pointer = (uint64_t *)(MpData + 0x228);
        }

        while (value_3 = (int32_t)trace_argument_1_2, value_3)
        {
            if (!input)
            {
                goto block_2;
            }
            RtlInitUnicodeString(&string, trace_argument_1);
            if (!(int16_t)string)
            {
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                {
                    goto block_2;
                }
                if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4))
                {
                    goto block_2;
                }
                wide_text = &WPP_10dc03dfe89c3068428b256958c5fc7a_Traceguids;
                WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x12, WD_SYMBOL_ADDRESS(WPP_10dc03dfe89c3068428b256958c5fc7a_Traceguids));
                goto block_2;
            }
            for (index = *(uint64_t **)(MpData + 0x228); index != (uint64_t *)(MpData + 0x228); index = (uint64_t *)(*index))
            {
                wide_text = (int16_t *)((uint64_t)((uint64_t)wide_text) & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
                byte_value = RtlEqualUnicodeString(&string, &index[2], wide_text);
                if (byte_value)
                {
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                    {
                        wide_text = &WPP_10dc03dfe89c3068428b256958c5fc7a_Traceguids;
                        WPP_SF_S(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x13, WD_SYMBOL_ADDRESS(WPP_10dc03dfe89c3068428b256958c5fc7a_Traceguids), trace_argument_1);
                    }
                    *(uint32_t *)(&index[9]) = *(uint32_t *)(&index[9]) & 0x7fffffff;
                    MpLogPrintfW(L"[Mini-filter] volume %wZ is one of the configured included volumes", &index[2]);
                    goto block_1;
                }
            }

            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                wide_text = &WPP_10dc03dfe89c3068428b256958c5fc7a_Traceguids;
                WPP_SF_S(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x14, WD_SYMBOL_ADDRESS(WPP_10dc03dfe89c3068428b256958c5fc7a_Traceguids), trace_argument_1);
            }
            block_1:
            trace_argument_1 = &trace_argument_1[WdLoadField(&string, 2, 2) >> 1];

            input -= 1;
            trace_argument_1_2 = value_3 - (uint32_t)WdLoadField(&string, 2, 2);
        }
    }
    else
    {
        for (; index != data_pointer; index = (uint64_t *)(*index))
        {
            *(uint32_t *)(&index[9]) = *(uint32_t *)(&index[9]) & 0x7fffffff;
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                wide_text = &WPP_10dc03dfe89c3068428b256958c5fc7a_Traceguids;
                WPP_SF_Z(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x15, WD_SYMBOL_ADDRESS(WPP_10dc03dfe89c3068428b256958c5fc7a_Traceguids), &index[2]);
            }
            data_pointer = (uint64_t *)(MpData + 0x228);
        }

        while (value_3 = (int32_t)trace_argument_1_2, value_4)
        {
            block_2:
            RtlInitUnicodeString(&string, trace_argument_1);

            if (!(int16_t)string)
            {
                break;
            }
            for (index = *(uint64_t **)(MpData + 0x228); index != (uint64_t *)(MpData + 0x228); index = (uint64_t *)(*index))
            {
                wide_text = (int16_t *)((uint64_t)((uint64_t)wide_text) & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
                byte_value = RtlEqualUnicodeString(&string, &index[2], wide_text);
                if (byte_value)
                {
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                    {
                        wide_text = &WPP_10dc03dfe89c3068428b256958c5fc7a_Traceguids;
                        WPP_SF_S(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x16, WD_SYMBOL_ADDRESS(WPP_10dc03dfe89c3068428b256958c5fc7a_Traceguids), trace_argument_1);
                    }
                    *(uint32_t *)(&index[9]) = *(uint32_t *)(&index[9]) | 0x80000000;
                    MpLogPrintfW(L"[Mini-filter] volume %wZ excluded from scanning due to path exclusion", &index[2]);
                    goto block_3;
                }
            }

            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                wide_text = &WPP_10dc03dfe89c3068428b256958c5fc7a_Traceguids;
                WPP_SF_S(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x17, WD_SYMBOL_ADDRESS(WPP_10dc03dfe89c3068428b256958c5fc7a_Traceguids), trace_argument_1);
            }
            block_3:
            trace_argument_1 = &trace_argument_1[WdLoadField(&string, 2, 2) >> 1];

            value_4 = value_3 - (uint32_t)WdLoadField(&string, 2, 2);
            trace_argument_1_2 = value_4;
        }
    }
    ExReleaseResourceLite(MpData + 0x2f0);
    KeLeaveCriticalRegion();
    return;
}

#include "wdfilter.h"

void RtlStringCchPrintfW(uint16_t *input, uint64_t input_2, uint64_t input_3, uint64_t input_4)
{
    uint64_t value_2;
    value_2 = input_4;
    if (0 <= (int32_t)RtlStringValidateDestW(input, input_2, 0x7fffffff))
    {
        RtlStringVPrintfWorkerW(input, input_2, NULL, input_3, &value_2);
    }
    else if (input_2)
    {
        *input = 0;
    }
    return;
}

void RtlStringCchCatW(int16_t *input, uint64_t input_2, int64_t input_3)
{
    int64_t index = 0;
    if (0 <= (int32_t)RtlStringValidateDestAndLengthW(input, 0x7fff, &index, 0x7fffffff))
    {
        RtlStringCopyWorkerW(&input[index], 0x7fff - index, NULL, input_3, 0x7ffffffe);
    }
    return;
}

uint64_t MpFcKernelUpdateFeatureControlsFromRequest(void *input)
{
    uint32_t value;
    uint64_t value_2;
    uint64_t value_3;
    uint64_t value_4;
    uint64_t value_5;
    uint64_t value_6;
    uint64_t value_7;
    uint64_t value_8;
    uint64_t value_9;
    uint32_t value_10;
    uint32_t value_11;
    uint32_t *data_pointer;
    uint32_t value_12;
    uint32_t value_13;
    uint64_t value_14;
    uint32_t value_15;
    uint32_t value_16;
    uint32_t event_id;
    uint32_t *data_pointer_2;
    uint64_t event_id_2;
    uint64_t pool_type;
    uint64_t trace_argument_1;
    uint64_t value_17;
    if (input)
    {
        value_16 = ((uint32_t *)input)[4];
        if (value_16)
        {
            if (0x14 <= ((uint32_t *)input)[1])
            {
                value = ((uint32_t *)input)[1] - 0x14;
                trace_argument_1 = (uint64_t)value_16 << 2;
                if (trace_argument_1 <= 0xffffffff)
                {
                    if ((uint32_t)trace_argument_1 <= value)
                    {
                        value = 0x1b;
                        if (value_16 <= 0x1a)
                        {
                            value = value_16;
                        }
                        trace_argument_1 = value;
                        event_id = *(uint32_t *)(MpData + 0xff0);
                        data_pointer = (uint32_t *)(MpData + 0xfe0);
                        if (value)
                        {
                            data_pointer_2 = data_pointer;
                            do
                            {
                                *data_pointer_2 = *(uint32_t *)((int64_t)data_pointer_2 + (int64_t)input + (0x14U - (int64_t)data_pointer));
                                data_pointer_2 = &data_pointer_2[1];
                                trace_argument_1 -= 1;
                            }
                            while (trace_argument_1);
                        }
                        MpTraceLogBindFltHardeningChanged(event_id, *(uint32_t *)(MpData + 0xff0));
                        pool_type = *(uint64_t *)(MpData + 0xfe0);
                        value_17 = *(uint64_t *)(MpData + 0xfe8);
                        value_2 = *(uint64_t *)(MpData + 0xff0);
                        value_3 = *(uint64_t *)(MpData + 0xff8);
                        value_4 = *(uint64_t *)(MpData + 0x1000);
                        value_5 = *(uint64_t *)(MpData + 0x1008);
                        value_6 = *(uint64_t *)(MpData + 0x1010);
                        value_7 = *(uint64_t *)(MpData + 0x1018);
                        value_8 = *(uint64_t *)(MpData + 0x1020);
                        value_9 = *(uint64_t *)(MpData + 0x1028);
                        value_10 = *(uint32_t *)(MpData + 0x1030);
                        value_11 = *(uint32_t *)(MpData + 0x1034);
                        value_12 = *(uint32_t *)(MpData + 0x1038);
                        value_13 = *(uint32_t *)(MpData + 0x103c);
                        value_14 = *(uint64_t *)(MpData + 0x1040);
                        value_15 = *(uint32_t *)(MpData + 0x1048);
                        MpFcKernelLogFeatureControls(&pool_type);
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
                    WPP_SF_DD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xe, WD_SYMBOL_ADDRESS(WPP_b0beb5e912f2364893381af164099bc6_Traceguids), trace_argument_1, value);
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
                event_id_2 = 0xd;
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
                event_id_2 = 0xc;
            }
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id_2, WD_SYMBOL_ADDRESS(WPP_b0beb5e912f2364893381af164099bc6_Traceguids), WD_STATUS_INTEGER_OVERFLOW);
            return WD_STATUS_INTEGER_OVERFLOW;
        }
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
        {
            return WD_STATUS_INVALID_PARAMETER;
        }
        if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return WD_STATUS_INVALID_PARAMETER;
        }
        event_id = 0xb;
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
        event_id = 10;
    }
    WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_b0beb5e912f2364893381af164099bc6_Traceguids));
    return WD_STATUS_INVALID_PARAMETER;
}

void MpFcKernelLogFeatureControls(uint32_t *pool_type)
{
    uint32_t value;
    int64_t value_2;
    int64_t *allocation;
    char buffer_2[528];
    int64_t *data_pointer;
    uint32_t value_3;
    int64_t value_4;
    allocation = MpAllocatePoolWithQuotaTag(pool_type, (char *)0xfffe, 0x7375704d);
    if (allocation)
    {
        value_3 = 0xcd;
        data_pointer = &WdFckernelimplStorage;
        do
        {
            memset(buffer_2, 0, (char *)0x20a);
            value_2 = *data_pointer;
            if (value_2)
            {
                if (_wcsicmp(L"MpFC_Kernel_UseForUT", value_2))
                {
                    if (_wcsicmp(L"MpFC_Kernel_UseForUT2", value_2))
                    {
                        goto block_1;
                    }
                }
            }
            else
            {
                block_1:
                value = pool_type[value_3 - 0xcd];

                value_4 = WD_FCKERNELIMPL_UNRECOVERED_ADDRESS;
                if (value_2)
                {
                    value_4 = value_2;
                }
                if (0 <= (int32_t)RtlStringCchPrintfW(buffer_2, 0x105, L"%ws=%#x;", value_4, value))
                {
                    RtlStringCchCatW(allocation);
                }
            }
            value_3 += 1;
            data_pointer = &data_pointer[1];
        }
        while (value_3 < 0xe8);
        MpLogPrintfW(L"[Mini-filter] MpFC: %ws", allocation);
        ExFreePoolWithTag(allocation, 0x7375704d);
    }
    return;
}

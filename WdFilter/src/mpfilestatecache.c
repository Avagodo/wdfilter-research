#include "wdfilter.h"

void WPP_SF_iZ(uint64_t input, uint64_t input_2, uint64_t input_3, uint64_t input_4, int16_t *input_5)
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
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_af6f19deb4b73a3756e7d98edd91e751_Traceguids), 0xf, &value_2, 8, wide_text, 2, value_3, (uint16_t)value, 0);
    return;
}

void WPP_SF_iZDD(uint64_t input, uint16_t input_2, uint64_t input_3, uint64_t input_4, int16_t *input_5)
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
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_af6f19deb4b73a3756e7d98edd91e751_Traceguids), input_2, &value_2, 8, wide_text, 2, value_3, (uint16_t)value, &unrecovered_stack_argument_6, 4, &unrecovered_stack_argument_7, 4, 0);
    return;
}

void WPP_SF_iZDDd(uint64_t input, uint64_t input_2, uint64_t input_3, uint64_t input_4, int16_t *input_5)
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
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_af6f19deb4b73a3756e7d98edd91e751_Traceguids), 0x1a, &value_2, 8, wide_text, 2, value_3, (uint16_t)value, &unrecovered_stack_argument_6, 4, &unrecovered_stack_argument_7, 4, &unrecovered_stack_argument_8, 4, 0);
    return;
}

void WPP_SF_id(uint64_t input, uint64_t input_2, uint64_t input_3, uint64_t input_4)
{
    uint64_t value;
    value = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_af6f19deb4b73a3756e7d98edd91e751_Traceguids), 0x1b, &value, 8, &unrecovered_stack_argument_5, 4, 0);
    return;
}

void MpCopyStreamStateFromFileStateGenericTable(void *input, uint64_t input_2, int64_t input_3)
{
    int32_t *data_pointer;
    uint32_t value;
    uint64_t value_2;
    uint64_t value_3;
    uint64_t value_4;
    int64_t value_6;
    int64_t *data_pointer_2;
    char byte_value;
    int64_t value_7;
    int32_t value_8;
    uint64_t value_9;
    uint64_t value_10;
    value = (uint32_t)((uint64_t)value_10 >> 0x20);
    value_4 = 0;
    value_8 = (int32_t)input_2;
    value_2 = 0;
    value_3 = 0;
    if (!input || !input_3)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xc, WD_SYMBOL_ADDRESS(WPP_af6f19deb4b73a3756e7d98edd91e751_Traceguids));
        }
        return;
    }
    value_7 = ((int64_t *)input)[1];
    if (*(int32_t *)(value_7 + 0x78) != value_8 || ((uint32_t *)input)[0xc] & 0x40)
    {
        return;
    }
    if (*(int32_t *)(MpData + 0x1038) && ((uint32_t *)input)[0xc] & 2)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xd, WD_SYMBOL_ADDRESS(WPP_af6f19deb4b73a3756e7d98edd91e751_Traceguids), ((uint64_t *)input)[0x15]);
        }
        return;
    }
    value_9 = ((uint64_t *)input)[0x15];
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(value_7 + 0xb8, (uint64_t)input_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
    value_7 = *(int64_t *)(((int64_t *)input)[1] + 0xa8);
    if (value_7 && (value_7 = RtlLookupElementGenericTable(value_7 + 0x10, &value_9), value_7))
    {
        byte_value = (*__guard_dispatch_icall_fptr)(input, value_7);
        if (!byte_value && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xe, WD_SYMBOL_ADDRESS(WPP_af6f19deb4b73a3756e7d98edd91e751_Traceguids), ((uint64_t *)input)[0x15], ((uint64_t)value & 0xffffffffULL) << 32 | (uint64_t)value_8 & 0xffffffffULL);
        }
        value_6 = *(int64_t *)(value_7 + 8);
        if (*(int64_t *)(value_6 + 8) != value_7 + 8 || (data_pointer_2 = *(int64_t **)(value_7 + 0x10), *data_pointer_2 != value_7 + 8))
        {
            (*(WD_ROUTINE)swi(0x29))(3);
        }
        *data_pointer_2 = value_6;
        *(int64_t **)(value_6 + 8) = data_pointer_2;
        data_pointer = (int32_t *)(((int64_t *)input)[1] + 0xb4);
        *data_pointer = *data_pointer + -1;
        value_6 = *(int64_t *)(((int64_t *)input)[1] + 0xa8);
        if (RtlDeleteElementGenericTable(value_6 + 0x10, value_7))
        {
            block_1:
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                WPP_SF_Z(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x10, WD_SYMBOL_ADDRESS(WPP_af6f19deb4b73a3756e7d98edd91e751_Traceguids), &((int16_t *)input)[0x78]);
            }
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
        {
            if (*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_iZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18));
            }
            goto block_1;
        }
        if (value_8 != 0x1b)
        {
            if (value_8 != 0x1c)
            {
                if (value_8 == 2)
                {
                    WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0xb58)), 1);
                }
            }
            else
            {
                WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0xba0)), 1);
            }
        }
        else
        {
            WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0xb7c)), 1);
        }
    }
    else if (value_8 != 0x1b)
    {
        if (value_8 != 0x1c)
        {
            if (value_8 == 2)
            {
                WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0xb5c)), 1);
            }
        }
        else
        {
            WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0xba4)), 1);
        }
    }
    else
    {
        WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0xb80)), 1);
    }
    ExReleaseResourceLite(((int64_t *)input)[1] + 0xb8);
    KeLeaveCriticalRegion();
    return;
}

void MpInitFileStateGenericTable(void *input, int32_t input_2, uint32_t input_3)
{
    int64_t value;
    if (((int32_t *)input)[0x1e] != input_2)
    {
        return;
    }
    ((uint64_t *)input)[0x15] = 0;
    value = (int64_t)input + 0x98;
    ((int64_t *)input)[0x14] = value;
    *(int64_t *)value = value;
    ExInitializeResourceLite((int64_t)input + 0xb8);
    ((uint32_t *)input)[0x2c] = input_3;
    return;
}

void MpSaveStreamStateToFileStateGenericTable(void *input, int32_t trace_argument_1, uint32_t input_2, int64_t input_3, uint32_t input_4, uint64_t *input_5)
{
    int32_t *data_pointer;
    uint64_t value;
    uint64_t event_id;
    char buffer_2[8];
    uint32_t trace_argument_1_2;
    int64_t value_2;
    int64_t *data_pointer_2;
    uint32_t provider;
    int64_t value_4;
    uint32_t value_5;
    uint64_t *data_pointer_3;
    char byte_value;
    int64_t trace_argument_1_3;
    int64_t *event_id_2;
    data_pointer_3 = input_5;
    value_5 = input_4;
    buffer_2[0] = '\0';
    if (!input_3 || !input || !input_5)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x11, WD_SYMBOL_ADDRESS(WPP_af6f19deb4b73a3756e7d98edd91e751_Traceguids));
        }
        return;
    }
    trace_argument_1_3 = ((int64_t *)input)[1];
    if (*(int32_t *)(trace_argument_1_3 + 0x78) != trace_argument_1)
    {
        return;
    }
    if (((uint32_t *)input)[0xc] & 0x40)
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4))
        {
            return;
        }
        event_id = 0x13;
    }
    else
    {
        if (!(input_2 & 1) || !(((uint32_t *)input)[0xc] & 2))
        {
            data_pointer = &((int32_t *)input)[8];
            if (data_pointer && trace_argument_1_3)
            {
                if (*data_pointer != 5 || *(uint32_t *)(MpData + 0x364) >> 0xf & 1)
                {
                    if (((int32_t *)input)[9] != *(int32_t *)(trace_argument_1_3 + 0x90))
                    {
                        goto block_1;
                    }
                    trace_argument_1_2 = *data_pointer;
                }
                else
                {
                    trace_argument_1_2 = 5;
                }
            }
            else
            {
                block_1:
                trace_argument_1_2 = 0;
            }
            if (4 <= (uint32_t)(trace_argument_1_2 - 2U) && trace_argument_1_2 != 7)
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                {
                    WPP_SF_Di(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x15, WD_SYMBOL_ADDRESS(WPP_af6f19deb4b73a3756e7d98edd91e751_Traceguids), trace_argument_1_2, ((uint64_t *)input)[0x15]);
                }
                return;
            }
            if (input_2 & 2 || trace_argument_1_2 == 3)
            {
                *input_5 = ((uint64_t *)input)[0x15];
                *(uint32_t *)(&input_5[3]) = input_4;
                value = input_4;
                byte_value = (*__guard_dispatch_icall_fptr)(input, value, input_5);
                if (byte_value)
                {
                    trace_argument_1_3 = ((int64_t *)input)[1];
                    KeEnterCriticalRegion();
                    ExAcquireResourceExclusiveLite(trace_argument_1_3 + 0xb8, (uint64_t)value & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
                    trace_argument_1_3 = ((int64_t *)input)[1];
                    if (*(int64_t *)(trace_argument_1_3 + 0xa8))
                    {
                        block_2:
                        trace_argument_1_3 = RtlInsertElementGenericTable(*(int64_t *)(((int64_t *)input)[1] + 0xa8) + 0x10, data_pointer_3, value_5, buffer_2);

                        if (trace_argument_1_3)
                        {
                            if (buffer_2[0])
                            {
                                data_pointer = (int32_t *)(((int64_t *)input)[1] + 0xb4);
                                *data_pointer = *data_pointer + 1;
                                if (trace_argument_1 != 0x1b)
                                {
                                    if (trace_argument_1 != 0x1c)
                                    {
                                        if (trace_argument_1 == 2)
                                        {
                                            WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0xb4c)), 1);
                                        }
                                    }
                                    else
                                    {
                                        WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0xb94)), 1);
                                    }
                                }
                                else
                                {
                                    WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0xb70)), 1);
                                }
                            }
                            else
                            {
                                event_id_2 = (int64_t *)(trace_argument_1_3 + 8);
                                value_4 = *event_id_2;
                                data_pointer_2 = *(int64_t **)(trace_argument_1_3 + 0x10);
                                if (*(int64_t **)(value_4 + 8) != event_id_2 || (int64_t *)(*data_pointer_2) != event_id_2)
                                {
                                    (*(WD_ROUTINE)swi(0x29))(3);
                                }
                                *data_pointer_2 = value_4;
                                *(int64_t **)(value_4 + 8) = data_pointer_2;
                                if (trace_argument_1 != 0x1b)
                                {
                                    if (trace_argument_1 != 0x1c)
                                    {
                                        if (trace_argument_1 == 2)
                                        {
                                            WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0xb50)), 1);
                                        }
                                    }
                                    else
                                    {
                                        WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0xb98)), 1);
                                    }
                                }
                                else
                                {
                                    WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0xb74)), 1);
                                }
                            }
                            data_pointer_2 = (int64_t *)(trace_argument_1_3 + 8);
                            event_id_2 = (int64_t *)(((int64_t *)input)[1] + 0x98);
                            value_4 = *event_id_2;
                            if (*(int64_t **)(value_4 + 8) != event_id_2)
                            {
                                (*(WD_ROUTINE)swi(0x29))(3);
                            }
                            *data_pointer_2 = value_4;
                            *(int64_t **)(trace_argument_1_3 + 0x10) = event_id_2;
                            *(int64_t **)(value_4 + 8) = data_pointer_2;
                            *event_id_2 = (int64_t)data_pointer_2;
                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                            {
                                value_2 = (int64_t)input + 0xf0;
                                WPP_SF_iZDDd(*(uint64_t *)(WPP_GLOBAL_Control + 0x18));
                            }
                            while (trace_argument_1_3 = ((int64_t *)input)[1], *(uint32_t *)(trace_argument_1_3 + 0xb0) < *(uint32_t *)(trace_argument_1_3 + 0xb4))
                            {
                                data_pointer_2 = *(int64_t **)(trace_argument_1_3 + 0xa0);
                                event_id_2 = (int64_t *)data_pointer_2[1];
                                if (*data_pointer_2 != trace_argument_1_3 + 0x98 || (int64_t *)(*event_id_2) != data_pointer_2)
                                {
                                    (*(WD_ROUTINE)swi(0x29))(3);
                                }
                                *(int64_t **)(trace_argument_1_3 + 0xa0) = event_id_2;
                                *event_id_2 = trace_argument_1_3 + 0x98;
                                data_pointer = (int32_t *)(((int64_t *)input)[1] + 0xb4);
                                *data_pointer = *data_pointer + -1;
                                trace_argument_1_3 = data_pointer_2[-1];
                                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                                {
                                    provider = *(uint32_t *)(((int64_t *)input)[1] + 0xb4);
                                    value_2 = (uint64_t)value_2 & 0xffffffff00000000 | (uint64_t)provider & 0xffffffff;
                                    WPP_SF_id(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id_2, provider, trace_argument_1_3, value_2);
                                }
                                value_4 = *(int64_t *)(((int64_t *)input)[1] + 0xa8);
                                if (!RtlDeleteElementGenericTable(value_4 + 0x10, &data_pointer_2[-1]) && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                {
                                    WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1c, WD_SYMBOL_ADDRESS(WPP_af6f19deb4b73a3756e7d98edd91e751_Traceguids), trace_argument_1_3);
                                }
                                if (trace_argument_1 != 0x1b)
                                {
                                    if (trace_argument_1 != 0x1c)
                                    {
                                        if (trace_argument_1 == 2)
                                        {
                                            WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0xb60)), 1);
                                        }
                                    }
                                    else
                                    {
                                        WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0xba8)), 1);
                                    }
                                }
                                else
                                {
                                    WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0xb84)), 1);
                                }
                            }
                        }
                        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            WPP_SF_iZDD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x19);
                        }
                    }
                    else
                    {
                        *(int64_t **)(trace_argument_1_3 + 0xa8) = MpAllocateAndInitFileStateGenericTable();
                        if (*(int64_t *)(((int64_t *)input)[1] + 0xa8))
                        {
                            goto block_2;
                        }
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x18, WD_SYMBOL_ADDRESS(WPP_af6f19deb4b73a3756e7d98edd91e751_Traceguids), trace_argument_1);
                        }
                    }
                    ExReleaseResourceLite(((int64_t *)input)[1] + 0xb8);
                    KeLeaveCriticalRegion();
                    return;
                }
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    return;
                }
                event_id = 0x17;
            }
            else
            {
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4))
                {
                    return;
                }
                event_id = 0x16;
            }
            WPP_SF_iZDD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id);
            return;
        }
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4))
        {
            return;
        }
        event_id = 0x14;
    }
    WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_af6f19deb4b73a3756e7d98edd91e751_Traceguids), ((uint64_t *)input)[0x15]);
    return;
}

void MpClearFileStateGenericTableList(uint64_t *input)
{
    uint64_t *data_pointer;
    uint64_t *data_pointer_2;
    data_pointer_2 = (uint64_t *)(*input);
    while (data_pointer_2 != input)
    {
        data_pointer = (uint64_t *)(*data_pointer_2);
        MpClearFileStateGenericTable(&data_pointer_2);
        data_pointer_2 = data_pointer;
    }

    return;
}

void MpFreeFileStateGenericTable(void *input, int32_t input_2)
{
    uint64_t ***data_pointer;
    uint64_t ***data_pointer_2;
    uint64_t ***data_pointer_3;
    uint64_t ***data_pointer_4;
    uint64_t ***data_pointer_5;
    if (((int32_t *)input)[0x1e] == input_2)
    {
        data_pointer_5 = &data_pointer_3;
        data_pointer_3 = &data_pointer_3;
        MpPurgeFileStateGenericTable(input, input_2, &data_pointer_3);
        data_pointer_2 = data_pointer_3;
        while ((uint64_t ****)data_pointer_2 != &data_pointer_3)
        {
            data_pointer = (uint64_t ***)(*data_pointer_2);
            data_pointer_4 = data_pointer_2;
            MpClearFileStateGenericTable(&data_pointer_4);
            data_pointer_2 = data_pointer;
        }

        ExDeleteResourceLite((int64_t)input + 0xb8);
    }
    return;
}

void MpClearFileStateGenericTable(int64_t *input)
{
    int64_t value;
    int64_t allocation;
    int64_t value_2;
    if (input && (allocation = *input, allocation))
    {
        value = allocation + 0x10;
        while (!RtlIsGenericTableEmpty(value) && (value_2 = RtlGetElementGenericTable(value, 0), value_2))
        {
            RtlDeleteElementGenericTable(value, value_2);
        }

        ExFreePoolWithTag(allocation, 0x6574504d);
        *input = 0;
    }
    return;
}

void MpPurgeFileStateGenericTable(void *input, uint64_t input_2, WD_LAYOUT_24 *input_3)
{
    int64_t value;
    int64_t *data_pointer;
    int64_t *data_pointer_2;
    int32_t value_2;
    value_2 = (int32_t)input_2;
    if (((int32_t *)input)[0x1e] == value_2 && input_3)
    {
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite((int64_t)input + 0xb8, (uint64_t)input_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            WPP_SF_ZD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1d, WD_SYMBOL_ADDRESS(WPP_af6f19deb4b73a3756e7d98edd91e751_Traceguids), &((int16_t *)input)[0xc], ((uint32_t *)input)[0x2d]);
        }
        data_pointer = ((int64_t **)input)[0x15];
        if (data_pointer)
        {
            data_pointer_2 = input_3->field_0x8;
            if ((WD_LAYOUT_24 *)(*data_pointer_2) != input_3)
            {
                (*(WD_ROUTINE)swi(0x29))(3);
            }
            *data_pointer = (int64_t)input_3;
            data_pointer[1] = (int64_t)data_pointer_2;
            *data_pointer_2 = (int64_t)data_pointer;
            input_3->field_0x8 = data_pointer;
            ((uint64_t *)input)[0x15] = 0;
            if (value_2 != 0x1b)
            {
                if (value_2 != 0x1c)
                {
                    if (value_2 == 2)
                    {
                        WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0xb54)), ((int32_t *)input)[0x2d]);
                    }
                }
                else
                {
                    WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0xb9c)), ((int32_t *)input)[0x2d]);
                }
            }
            else
            {
                WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0xb78)), ((int32_t *)input)[0x2d]);
            }
        }
        value = (int64_t)input + 0x98;
        ((uint32_t *)input)[0x2d] = 0;
        ((int64_t *)input)[0x14] = value;
        *(int64_t *)value = value;
        ExReleaseResourceLite((int64_t)input + 0xb8);
        KeLeaveCriticalRegion();
    }
    return;
}

int64_t *MpAllocateAndInitFileStateGenericTable(void)
{
    int64_t *allocation;
    uint64_t event_id;
    allocation = MpAllocatePoolWithTag(1, (char *)0x58, 0x6574504d);
    if (allocation)
    {
        allocation[1] = 0;
        *allocation = 0;
        RtlInitializeGenericTable(&allocation[2], MpCompareFileStateGenericTableEntry, MpAllocateFileStateGenericTableEntry, MpFreeFileStateGenericTableEntry, 0);
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
        {
            return allocation;
        }
        if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4))
        {
            return allocation;
        }
        event_id = 10;
    }
    else
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
        {
            return NULL;
        }
        if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2))
        {
            return NULL;
        }
        event_id = 0xb;
    }
    WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_af6f19deb4b73a3756e7d98edd91e751_Traceguids));
    return allocation;
}

void MpSaveStreamStateToFileStateGenericTable__finally_0(uint64_t input, void *input_2)
{
    ExReleaseResourceLite(*(int64_t *)(((int64_t *)input_2)[8] + 8) + 0xb8);
    KeLeaveCriticalRegion();
    return;
}

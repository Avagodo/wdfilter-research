#include "wdfilter.h"

uint64_t MpSetEfsHardeningFlags(uint32_t input)
{
    if (input & 0xfffffffe)
    {
        return WD_STATUS_INVALID_PARAMETER;
    }
    MpTraceLogEfsHardeningChanged(*(uint32_t *)(MpData + 0xfd4), input);
    *(uint32_t *)(MpData + 0xfd4) = input;
    return 0;
}

void WPP_SF_DdZDD(uint64_t input, uint64_t input_2, uint64_t input_3, uint32_t input_4, uint64_t input_5, int16_t *input_6)
{
    int16_t *wide_text;
    int16_t value;
    uint32_t values[2];
    uint64_t value_2;
    if (input_6)
    {
        value = *input_6;
        if (*input_6)
        {
            value_2 = *(uint64_t *)(&input_6[4]);
            goto block_1;
        }
    }
    else
    {
        value = 8;
    }
    value_2 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    block_1:
    wide_text = input_6;

    if (!input_6)
    {
        wide_text = &WdCleanupStorage;
    }
    values[0] = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_bb5feea3a6af3b7d5ba3909c2f9628a9_Traceguids), 0xf, values, 4, &input_5, 4, wide_text, 2, value_2, (uint16_t)value, &unrecovered_stack_argument_7, 4, &unrecovered_stack_argument_8, 4, 0);
    return;
}

void WPP_SF_ZDDDDD(uint64_t input, uint64_t input_2, uint64_t input_3, int16_t *input_4)
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

    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_bb5feea3a6af3b7d5ba3909c2f9628a9_Traceguids), 0x2a, input_4, 2, value_2, (uint16_t)value, &unrecovered_stack_argument_5, 4, &unrecovered_stack_argument_6, 4, &unrecovered_stack_argument_7, 4, &unrecovered_stack_argument_8, 4, &unrecovered_stack_argument_9, 4, 0);
    return;
}

void WPP_SF_dDDD(uint64_t input, uint64_t input_2, uint64_t input_3, uint32_t input_4)
{
    uint32_t values[2];
    values[0] = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_bb5feea3a6af3b7d5ba3909c2f9628a9_Traceguids), 0x1d, values, 4, &unrecovered_stack_argument_5, 4, &unrecovered_stack_argument_6, 4, &unrecovered_stack_argument_7, 4, 0);
    return;
}

void WPP_SF_dZD(uint64_t input, uint64_t input_2, uint64_t input_3, uint32_t input_4, int16_t *input_5)
{
    int16_t *wide_text;
    int16_t value;
    uint32_t values[2];
    uint64_t value_2;
    if (input_5)
    {
        value = *input_5;
        if (*input_5)
        {
            value_2 = *(uint64_t *)(&input_5[4]);
            goto block_1;
        }
    }
    else
    {
        value = 8;
    }
    value_2 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    block_1:
    wide_text = input_5;

    if (!input_5)
    {
        wide_text = &WdCleanupStorage;
    }
    values[0] = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_bb5feea3a6af3b7d5ba3909c2f9628a9_Traceguids), 0xc, values, 4, wide_text, 2, value_2, (uint16_t)value, &unrecovered_stack_argument_6, 4, 0);
    return;
}

void WPP_SF_dZDDDDiiiiDD(uint64_t input, uint64_t input_2, uint64_t input_3, uint32_t input_4, int16_t *input_5)
{
    int16_t *wide_text;
    int16_t value;
    uint32_t values[2];
    uint64_t value_2;
    if (input_5)
    {
        value = *input_5;
        if (*input_5)
        {
            value_2 = *(uint64_t *)(&input_5[4]);
            goto block_1;
        }
    }
    else
    {
        value = 8;
    }
    value_2 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    block_1:
    wide_text = input_5;

    if (!input_5)
    {
        wide_text = &WdCleanupStorage;
    }
    values[0] = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_bb5feea3a6af3b7d5ba3909c2f9628a9_Traceguids), 0x1a, values, 4, wide_text, 2, value_2, (uint16_t)value, &unrecovered_stack_argument_6, 4, &unrecovered_stack_argument_7, 4, &unrecovered_stack_argument_8, 4, &unrecovered_stack_argument_9, 4, &unrecovered_stack_argument_10, 8, &unrecovered_stack_argument_11, 8, &unrecovered_stack_argument_12, 8, &unrecovered_stack_argument_13, 8, &unrecovered_stack_argument_14, 4, &unrecovered_stack_argument_15, 4, 0);
    return;
}

void MpDumpProcessContext(void)
{
    uint64_t *data_pointer;
    int32_t status;
    uint64_t *data_pointer_2;
    uint64_t *process_list;
    if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 0x10))
    {
        return;
    }
    process_list = NULL;
    status = MpGetProcessContextList(&process_list, 0);
    if (status <= -1)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xe, WD_SYMBOL_ADDRESS(WPP_bb5feea3a6af3b7d5ba3909c2f9628a9_Traceguids), (uint64_t)KeGetCurrentThread(), status);
        }
        if (!process_list)
        {
            return;
        }
        MpReleaseProcessContextList(&process_list);
        return;
    }
    data_pointer_2 = process_list;
    while (data_pointer_2)
    {
        data_pointer = (uint64_t *)(*data_pointer_2);
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 0x10)
        {
            WPP_SF_DdZDD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18));
        }
        MpReleaseProcessContextListEntry((WD_LAYOUT_15 *)(&data_pointer_2[-1]));
        data_pointer_2 = data_pointer;
    }

    return;
}

void MpSetUntrustedProcess(void *input, uint64_t input_2)
{
    uint32_t *data_pointer;
    uint32_t value;
    uint64_t value_2;
    uint64_t value_3;
    uint32_t value_4;
    char byte_value;
    uint8_t byte_value_2;
    uint16_t value_5;
    int32_t status;
    uint64_t process_table;
    uint64_t value_7;
    bool enabled;
    uint64_t value_8;
    uint64_t value_9;
    process_table = MpProcessTable;
    value = (uint32_t)((uint64_t)value_8 >> 0x20);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(process_table + 8, (uint64_t)input_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
    WdUnresolvedAtomicBegin();
    data_pointer = &((uint32_t *)input)[0xd];
    enabled = (*data_pointer >> 6 & 1) != 0;
    *data_pointer = *data_pointer & 0xffffffbf;
    WdUnresolvedAtomicEnd();
    if (enabled)
    {
        WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpProcessTable + 0x1a8)), 1);
        WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpProcessTable + 0x1a4)), -1);
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 0x10)
        {
            value_9 = ((uint64_t)value & 0xffffffffULL) << 32 | (uint64_t)(*(uint32_t *)(MpProcessTable + 0x1a4)) & 0xffffffffULL;
            WPP_SF_ddd(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x15, WD_SYMBOL_ADDRESS(WPP_bb5feea3a6af3b7d5ba3909c2f9628a9_Traceguids), ((uint32_t *)input)[6], value_9, *(uint32_t *)(MpProcessTable + 0x1a8));
            value = (uint32_t)((uint64_t)value_9 >> 0x20);
        }
        if (Microsoft_Antimalware_AMFilterEnableBits & 8)
        {
            value = 1;
            McTemplateK0qzqqqz_EtwWriteTransfer();
        }
    }
    status = *(int32_t *)(MpProcessTable + 0x1a8);
    process_table = MpProcessTable + 8;
    ExReleaseResourceLite(process_table);
    KeLeaveCriticalRegion();
    if (status == 1)
    {
        status = MpSendTrustedProcessMessage((uint64_t)process_table & 0xffffffffffffff00 | (uint64_t)1 & 0xff, ((WD_LAYOUT_10 **)input)[0x10]);
        if (0 <= status)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x17, WD_SYMBOL_ADDRESS(WPP_bb5feea3a6af3b7d5ba3909c2f9628a9_Traceguids), ((uint32_t *)input)[6]);
            }
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x16, WD_SYMBOL_ADDRESS(WPP_bb5feea3a6af3b7d5ba3909c2f9628a9_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
        }
        if (Microsoft_Antimalware_AMFilterEnableBits & 8)
        {
            McTemplateK0qzqqqz_EtwWriteTransfer();
        }
    }
    if (enabled)
    {
        value_7 = ((uint64_t *)input)[3];
        byte_value_2 = ((uint8_t *)input)[0x3c] >> 1 & 1;
        value_5 = 0;
        value_2 = 0;
        value_3 = 0;
        byte_value = 0;
        value_4 = 3;
        ExNotifyCallback(*(uint64_t *)(MpData + 0x9b8), &value_7, 0);
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
        {
            return;
        }
        if (*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x18, WD_SYMBOL_ADDRESS(WPP_bb5feea3a6af3b7d5ba3909c2f9628a9_Traceguids), ((uint32_t *)input)[6]);
        }
    }
    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
    {
        WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x19, WD_SYMBOL_ADDRESS(WPP_bb5feea3a6af3b7d5ba3909c2f9628a9_Traceguids), ((uint32_t *)input)[6]);
    }
    return;
}

uint64_t MpSetProcessInfoFromRequest(void *input)
{
    uint32_t value;
    uint32_t value_2;
    uint64_t event_id;
    uint64_t value_3;
    WD_LAYOUT_56 *event_id_2;
    uint64_t trace_argument_1;
    uint64_t value_4;
    if (!input)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x21, WD_SYMBOL_ADDRESS(WPP_bb5feea3a6af3b7d5ba3909c2f9628a9_Traceguids));
        }
        return WD_STATUS_INVALID_PARAMETER;
    }
    if (0x18 <= ((uint32_t *)input)[1])
    {
        value_2 = ((uint32_t *)input)[4];
        value_3 = value_2;
        value = ((uint32_t *)input)[1] - 0x18;
        trace_argument_1 = value_3 * 0x68;
        if (trace_argument_1 <= 0xffffffff)
        {
            if ((uint32_t)trace_argument_1 <= value)
            {
                event_id_2 = (WD_LAYOUT_56 *)((int64_t)input + 0x18);
                if (event_id_2 && value_2)
                {
                    do
                    {
                        MpSetOneProcessInfo(event_id_2);
                        event_id_2 = &event_id_2[1];
                        value_3 -= 1;
                    }
                    while (value_3);
                    MpDumpProcessContext();
                    if (2 <= value_2 && Microsoft_Antimalware_AMFilterEnableBits & 8)
                    {
                        McTemplateK0qzqqqz_EtwWriteTransfer();
                    }
                }
                return 0;
            }
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                if (*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_DD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x24, WD_SYMBOL_ADDRESS(WPP_bb5feea3a6af3b7d5ba3909c2f9628a9_Traceguids), trace_argument_1, (uint64_t)value_4 & 0xffffffff00000000 | (uint64_t)value & 0xffffffff);
                    return WD_STATUS_INVALID_PARAMETER;
                }
                return WD_STATUS_INVALID_PARAMETER;
            }
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
        event_id = 0x23;
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
        event_id = 0x22;
    }
    WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_bb5feea3a6af3b7d5ba3909c2f9628a9_Traceguids), WD_STATUS_INTEGER_OVERFLOW);
    return WD_STATUS_INTEGER_OVERFLOW;
}

void MpUpdateProcessTrust(void *input)
{
    char byte_value;
    if (!(((uint32_t *)input)[0xe] & 0x20))
    {
        byte_value = MpShouldSendBmMessage(input);
        if (byte_value && !(((uint32_t *)input)[0xd] & 0x18))
        {
            MpSetUntrustedProcess();
            return;
        }
    }
    MpSetTrustedProcess();
    return;
}

void MpSetTrustedProcess(void *input, uint64_t input_2)
{
    uint32_t *data_pointer;
    uint64_t value;
    uint32_t value_2;
    uint64_t value_3;
    uint64_t value_4;
    uint32_t value_5;
    char byte_value;
    uint8_t byte_value_2;
    uint16_t value_6;
    int64_t process_table;
    int32_t status;
    uint64_t value_8;
    bool enabled;
    bool enabled_2;
    uint64_t value_9;
    process_table = MpProcessTable;
    value_2 = (uint32_t)((uint64_t)value_9 >> 0x20);
    enabled_2 = 0;
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(process_table + 8, (uint64_t)input_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
    WdUnresolvedAtomicBegin();
    data_pointer = &((uint32_t *)input)[0xd];
    enabled = (*data_pointer >> 6 & 1) == 0;
    *data_pointer = *data_pointer | 0x40;
    WdUnresolvedAtomicEnd();
    if (enabled)
    {
        WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpProcessTable + 0x1a4)), 1);
        WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpProcessTable + 0x1a8)), -1);
        enabled_2 = *(int32_t *)(MpProcessTable + 0x1a8) == 0;
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 0x10)
        {
            value = ((uint64_t)value_2 & 0xffffffffULL) << 32 | (uint64_t)(*(uint32_t *)(MpProcessTable + 0x1a4)) & 0xffffffffULL;
            WPP_SF_ddd(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x10, WD_SYMBOL_ADDRESS(WPP_bb5feea3a6af3b7d5ba3909c2f9628a9_Traceguids), ((uint32_t *)input)[6], value, *(uint32_t *)(MpProcessTable + 0x1a8));
            value_2 = (uint32_t)((uint64_t)value >> 0x20);
        }
        if (Microsoft_Antimalware_AMFilterEnableBits & 8)
        {
            value_2 = 1;
            McTemplateK0qzqqqz_EtwWriteTransfer();
        }
    }
    ExReleaseResourceLite(MpProcessTable + 8);
    KeLeaveCriticalRegion();
    if (enabled_2)
    {
        status = MpSendTrustedProcessMessage(0, NULL);
        if (0 <= status)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x12, WD_SYMBOL_ADDRESS(WPP_bb5feea3a6af3b7d5ba3909c2f9628a9_Traceguids), ((uint32_t *)input)[6]);
            }
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x11, WD_SYMBOL_ADDRESS(WPP_bb5feea3a6af3b7d5ba3909c2f9628a9_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_2 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
        }
        if (Microsoft_Antimalware_AMFilterEnableBits & 8)
        {
            McTemplateK0qzqqqz_EtwWriteTransfer();
        }
    }
    if (enabled)
    {
        value_8 = ((uint64_t *)input)[3];
        byte_value_2 = ((uint8_t *)input)[0x3c] >> 1 & 1;
        value_6 = 0;
        value_3 = 0;
        value_4 = 0;
        byte_value = 1;
        value_5 = 3;
        ExNotifyCallback(*(uint64_t *)(MpData + 0x9b8), &value_8, 0);
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
        {
            return;
        }
        if (*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x13, WD_SYMBOL_ADDRESS(WPP_bb5feea3a6af3b7d5ba3909c2f9628a9_Traceguids), ((uint32_t *)input)[6]);
        }
    }
    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
    {
        WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x14, WD_SYMBOL_ADDRESS(WPP_bb5feea3a6af3b7d5ba3909c2f9628a9_Traceguids), ((uint32_t *)input)[6]);
    }
    return;
}

uint64_t MpSetOneProcessInfo(WD_LAYOUT_56 *event_id)
{
    uint32_t value;
    int64_t creation_time;
    uint64_t status;
    int64_t process_context;
    uint64_t value_2;
    uint32_t value_3;
    value_3 = (uint32_t)((uint64_t)value_2 >> 0x20);
    status = event_id->field_0x0;
    process_context = 0;
    if (event_id->field_0x0)
    {
        creation_time = MpFileTimeToUlong64(*(uint64_t *)event_id->field_0x4);
        status = MpGetProcessContextByIdAndCreationTime(status & 0xffffffff, creation_time, &process_context);
        if (0 <= (int32_t)status)
        {
            value = event_id->field_0x0;
            if (value == *(uint32_t *)(MpData + 0xf0) || value == *(uint32_t *)(MpData + 0x108))
            {
                event_id->field_0x20 = 0xffffffffffffffff;
                event_id->field_0xc = 0x7ff;
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                {
                    WPP_SF_ddd(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x20, WD_SYMBOL_ADDRESS(WPP_bb5feea3a6af3b7d5ba3909c2f9628a9_Traceguids), value, ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)0x7ff & 0xffffffffULL, 0x7ff);
                }
            }
            creation_time = process_context;
            if (event_id->field_0x0 == 4)
            {
                event_id->field_0xc = event_id->field_0xc | 0x400;
                event_id->field_0x65 = 1;
            }
            value = MpSetProcessInfoByContext(process_context, event_id);
            status = value;
            WdAtomicAdd32((volatile int32_t *)((int32_t *)(creation_time + 0x128)), 1);
            if (Microsoft_Antimalware_AMFilterEnableBits & 0x10)
            {
                McTemplateK0qzqqzxx_EtwWriteTransfer();
            }
            MpReleaseProcessContext(creation_time);
        }
        return status;
    }
    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
    {
        WPP_SF_DD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1f, WD_SYMBOL_ADDRESS(WPP_bb5feea3a6af3b7d5ba3909c2f9628a9_Traceguids), 0, ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)event_id->field_0xc & 0xffffffffULL);
    }
    return 0;
}

void MpSetProcessInfoByContext(void *input, void *event_id, uint64_t provider)
{
    int32_t value;
    uint32_t value_2;
    uint32_t value_3;
    uint32_t value_4;
    bool enabled;
    uint32_t value_5;
    uint32_t event_id_2;
    uint64_t value_6;
    int16_t *trace_argument_2;
    uint64_t value_7;
    value_2 = (uint32_t)((uint64_t)value_6 >> 0x20);
    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
    {
        trace_argument_2 = ((int16_t **)input)[0x10];
        WPP_SF_dZDDDDiiiiDD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, provider, ((uint32_t *)input)[6], trace_argument_2, ((uint32_t *)input)[0xe], ((uint32_t *)event_id)[3], ((uint32_t *)input)[0xf], ((uint32_t *)event_id)[4], ((uint64_t *)input)[8], ((uint64_t *)event_id)[3], ((uint64_t *)input)[9], ((uint64_t *)event_id)[4], ((uint32_t *)input)[0x47], ((uint32_t *)event_id)[0x17]);
        value_2 = (uint32_t)((uint64_t)trace_argument_2 >> 0x20);
    }
    value_5 = ((uint32_t *)input)[0x48];
    ((uint32_t *)input)[0xe] = ((uint32_t *)event_id)[3];
    ((uint32_t *)input)[0xf] = ((uint32_t *)event_id)[4];
    event_id_2 = ((uint32_t *)event_id)[0x17];
    ((uint32_t *)input)[0x47] = event_id_2;
    if (value_5 & 1 && ((uint8_t *)input)[0xb8] & 7 && (uint8_t)((((uint8_t *)input)[0xb8] >> 4) - 3) <= 4)
    {
        enabled = 1;
    }
    else
    {
        enabled = 0;
    }
    if (((char *)event_id)[100] && !enabled)
    {
        value = ((int32_t *)input)[0x3c];
        if (value != 0x11 && value != 0x12)
        {
            value_5 = ((uint32_t)((uint8_t *)event_id)[0x65] << 3 ^ value_5) & 8 ^ value_5;
            ((uint32_t *)input)[0x48] = value_5;
            value_5 = ((uint32_t)((uint8_t *)event_id)[0x66] << 4 ^ value_5) & 0x10 ^ value_5;
            ((uint32_t *)input)[0x48] = value_5;
            value_5 = ((uint32_t)((uint8_t *)event_id)[0x67] << 5 ^ value_5) & 0x20 ^ value_5;
            ((uint32_t *)input)[0x48] = value_5;
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                WPP_SF_ddd(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1e, WD_SYMBOL_ADDRESS(WPP_bb5feea3a6af3b7d5ba3909c2f9628a9_Traceguids), value_5 >> 3 & 1, (((uint64_t)value_2 & 0xffffffffULL) << 32 | (uint64_t)(value_5 >> 4) & 0xffffffffULL) & 0xffffffff00000001, value_5 >> 5 & 1);
            }
        }
        else if (event_id_2 & 4)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
            {
                WPP_SF_ZDD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1b, WD_SYMBOL_ADDRESS(WPP_bb5feea3a6af3b7d5ba3909c2f9628a9_Traceguids), ((int16_t **)input)[0x10], ((uint64_t)value_2 & 0xffffffffULL) << 32 | (uint64_t)value & 0xffffffffULL, event_id_2);
            }
            *(uint32_t *)((int64_t)input + 0x120) = *(uint32_t *)((int64_t)input + 0x120) & 0xffffffc7;
        }
        else
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                value_7 = ((uint64_t)value_2 & 0xffffffffULL) << 32 | (uint64_t)value & 0xffffffffULL;
                WPP_SF_ZDD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1c, WD_SYMBOL_ADDRESS(WPP_bb5feea3a6af3b7d5ba3909c2f9628a9_Traceguids), ((int16_t **)input)[0x10], value_7, event_id_2);
                value_2 = (uint32_t)((uint64_t)value_7 >> 0x20);
            }
            if (((char *)event_id)[100])
            {
                value_5 = ((uint32_t)((uint8_t *)event_id)[0x65] << 3 ^ ((uint32_t *)input)[0x48]) & 8 ^ ((uint32_t *)input)[0x48];
                ((uint32_t *)input)[0x48] = value_5;
                value_5 = ((uint32_t)((uint8_t *)event_id)[0x66] << 4 ^ value_5) & 0x10 ^ value_5;
                ((uint32_t *)input)[0x48] = value_5;
                ((uint32_t *)input)[0x48] = ((uint32_t)((uint8_t *)event_id)[0x67] << 5 ^ value_5) & 0x20 ^ value_5;
            }
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                value_5 = ((uint32_t *)input)[0x48];
                event_id_2 = value_5 >> 5 & 1;
                WPP_SF_dDDD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id_2, value_5 >> 3 & 1, (uint8_t)((char *)event_id)[100], (((uint64_t)value_2 & 0xffffffffULL) << 32 | (uint64_t)(value_5 >> 3) & 0xffffffffULL) & 0xffffffff00000001, value_5 >> 4 & 1, event_id_2);
            }
        }
    }
    if (((char *)event_id)[0x49] == '\x01')
    {
        ((uint32_t *)input)[0x3c] = 0x10;
    }
    WdUnresolvedAtomicBegin();
    ((uint64_t *)input)[8] = ((uint64_t *)event_id)[3];
    WdUnresolvedAtomicEnd();
    WdUnresolvedAtomicBegin();
    ((uint64_t *)input)[9] = ((uint64_t *)event_id)[4];
    WdUnresolvedAtomicEnd();
    value_7 = ((uint64_t *)event_id)[6];
    ((uint64_t *)input)[0x11] = ((uint64_t *)event_id)[5];
    ((uint64_t *)input)[0x12] = value_7;
    value_2 = ((uint32_t *)event_id)[0x14];
    value_3 = ((uint32_t *)event_id)[0x15];
    value_4 = ((uint32_t *)event_id)[0x16];
    ((uint32_t *)input)[0x26] = ((uint32_t *)event_id)[0x13];
    ((uint32_t *)input)[0x27] = value_2;
    ((uint32_t *)input)[0x28] = value_3;
    ((uint32_t *)input)[0x29] = value_4;
    value_2 = ((uint32_t *)event_id)[0xf];
    value_3 = ((uint32_t *)event_id)[0x10];
    value_4 = ((uint32_t *)event_id)[0x11];
    ((uint32_t *)input)[0x2a] = ((uint32_t *)event_id)[0xe];
    ((uint32_t *)input)[0x2b] = value_2;
    ((uint32_t *)input)[0x2c] = value_3;
    ((uint32_t *)input)[0x2d] = value_4;
    MpUpdateProcessTrust(input);
    return;
}

uint64_t MpSetTrustedInstallerHardeningExcludeFlags(uint64_t input, uint64_t input_2)
{
    int32_t value;
    uint32_t value_2;
    uint32_t value_3;
    uint32_t event_id;
    int64_t *data_pointer;
    int64_t value_4;
    uint32_t provider;
    int64_t value_5;
    int64_t process_table;
    if (input & 0xfffffff8)
    {
        return WD_STATUS_INVALID_PARAMETER;
    }
    MpTraceLogTrustedInstallerHardeningFlags(input);
    process_table = MpProcessTable;
    value_4 = 0;
    if (!(*(int64_t *)(MpProcessTable + 0x180)))
    {
        return 0;
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(process_table + 8, (uint64_t)input_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
    value_5 = 0x80;
    process_table = value_4;
    do
    {
        data_pointer = *(int64_t **)(value_4 + *(int64_t *)(MpProcessTable + 0x180));
        if (data_pointer != (int64_t *)(*(int64_t *)(MpProcessTable + 0x180) + process_table))
        {
            do
            {
                value = *(int32_t *)(&data_pointer[0x1d]);
                if (value == 0x11 || value == 0x12)
                {
                    value_2 = ((uint32_t *)data_pointer)[0x45];
                    if (value_2 & 4)
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                        {
                            WPP_SF_ZDD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x29, WD_SYMBOL_ADDRESS(WPP_bb5feea3a6af3b7d5ba3909c2f9628a9_Traceguids), (int16_t *)data_pointer[0xf], value, value_2);
                        }
                        *(uint32_t *)(&data_pointer[0x23]) = *(uint32_t *)(&data_pointer[0x23]) & 0xffffffc7;
                    }
                    else
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                        {
                            value_3 = *(uint32_t *)(&data_pointer[0x23]);
                            event_id = value_3 >> 5 & 1;
                            provider = value_3 >> 3 & 1;
                            WPP_SF_ZDDDDD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, provider, (int16_t *)data_pointer[0xf], value, value_2, provider, value_3 >> 4 & 1, event_id);
                        }
                        *(uint32_t *)(&data_pointer[0x23]) = ((((uint32_t)input & 1) << 3 ^ *(uint32_t *)(&data_pointer[0x23]) & 0xfffffff7) & 0xffffffef | -(uint32_t)((input & 2) != 0) & 0x10) & 0xffffffdf | -(uint32_t)((input & 4) != 0) & 0x20;
                    }
                }
                data_pointer = (int64_t *)(*data_pointer);
            }
            while (data_pointer != (int64_t *)(*(int64_t *)(MpProcessTable + 0x180) + process_table));
        }
        process_table += 0x10;
        value_4 += 0x10;
        value_5 -= 1;
    }
    while (value_5);
    ExReleaseResourceLite(MpProcessTable + 8);
    KeLeaveCriticalRegion();
    return 0;
}

void MpNriNotificationCallback(int64_t input, int32_t *input_2, int64_t input_3)
{
    if (input == MpData && input_2 && !input_3 && !(*input_2))
    {
        MpRefreshProcessNotifications();
    }
    return;
}

void MpDumpUntrustedProcesses(void)
{
    uint64_t *data_pointer;
    uint32_t value;
    int64_t process_table;
    int32_t status;
    uint64_t value_2;
    uint64_t *data_pointer_2;
    uint64_t *process_list;
    int32_t trace_argument_1;
    uint64_t value_3;
    value = (uint32_t)((uint64_t)value_3 >> 0x20);
    trace_argument_1 = 0;
    value_2 = 0;
    process_list = NULL;
    status = MpGetProcessContextList(&process_list, 0);
    process_table = MpProcessTable;
    if (0 <= status)
    {
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(process_table + 8, (uint64_t)value_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
        data_pointer_2 = process_list;
        while (data_pointer_2)
        {
            data_pointer = (uint64_t *)(*data_pointer_2);
            if (!(*(uint32_t *)(data_pointer_2[1] + 0x34) & 0x40))
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 0x10)
                {
                    WPP_SF_dZD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18));
                }
                if (Microsoft_Antimalware_AMFilterEnableBits & 8)
                {
                    McTemplateK0qzqqqz_EtwWriteTransfer();
                }
            }
            MpReleaseProcessContextListEntry(&data_pointer_2[-1]);
            trace_argument_1 += 1;
            data_pointer_2 = data_pointer;
        }

        process_list = data_pointer_2;
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 0x10)
        {
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xd, WD_SYMBOL_ADDRESS(WPP_bb5feea3a6af3b7d5ba3909c2f9628a9_Traceguids), trace_argument_1);
        }
        ExReleaseResourceLite(MpProcessTable + 8);
        KeLeaveCriticalRegion();
        data_pointer_2 = NULL;
    }
    else
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xb, WD_SYMBOL_ADDRESS(WPP_bb5feea3a6af3b7d5ba3909c2f9628a9_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
        }
        data_pointer_2 = process_list;
    }
    if (!data_pointer_2)
    {
        return;
    }
    MpReleaseProcessContextList(&process_list);
    return;
}

void MpRefreshProcessNotifications(void)
{
    uint64_t *data_pointer;
    uint64_t value;
    uint64_t value_2;
    uint64_t value_3;
    int32_t status;
    uint64_t *data_pointer_2;
    uint64_t *process_list;
    uint64_t value_5;
    uint64_t value_6;
    uint32_t value_7;
    value_7 = (uint32_t)((uint64_t)value_6 >> 0x20);
    value_5 = 0;
    value = 0;
    value_2 = 0;
    value_3 = 0;
    if (MpData && MpProcessTable)
    {
        process_list = NULL;
        status = MpGetProcessContextList(&process_list, 0);
        if (0 <= status)
        {
            data_pointer_2 = process_list;
            while (data_pointer_2)
            {
                data_pointer = (uint64_t *)(*data_pointer_2);
                value = 0;
                value_5 = *(uint64_t *)(data_pointer_2[1] + 0x18);
                value_2 = *(uint64_t *)(data_pointer_2[1] + 0x80);
                value_3 = (((uint64_t)(((uint64_t)WdLoadField(&value_3, 5, 3) & 0xffffffULL) << 8 | (uint64_t)(*(uint8_t *)(data_pointer_2[1] + 0x34) >> 6) & 0xffULL) & 0xffffffffULL) << 32 | (uint64_t)3 & 0xffffffffULL) & 0xffffff01ffffffff;
                value_3 = (((uint64_t)WdLoadField(&value_3, 6, 2) & 0xffffULL) << 48 | (uint64_t)(((uint64_t)(*(uint8_t *)(data_pointer_2[1] + 0x3c) >> 1) & 0xffULL) << 40 | (uint64_t)((uint64_t)value_3) & 0xffffffffffULL) & 0xffffffffffffULL) & 0xffff01ffffffffff;
                ExNotifyCallback(*(uint64_t *)(MpData + 0x9b8), &value_5, 0);
                if (Microsoft_Antimalware_AMFilterEnableBits & 8)
                {
                    McTemplateK0qzqqqz_EtwWriteTransfer();
                }
                MpReleaseProcessContextListEntry((WD_LAYOUT_15 *)(&data_pointer_2[-1]));
                data_pointer_2 = data_pointer;
            }

            data_pointer_2 = NULL;
            process_list = NULL;
        }
        else
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 10, WD_SYMBOL_ADDRESS(WPP_bb5feea3a6af3b7d5ba3909c2f9628a9_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
            }
            data_pointer_2 = process_list;
        }
        if (data_pointer_2)
        {
            MpReleaseProcessContextList(&process_list);
        }
    }
    return;
}

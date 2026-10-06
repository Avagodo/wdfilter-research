#include "wdfilter.h"

void RtlStringCbLengthW(int16_t *input, uint64_t input_2, int64_t *input_3)
{
    int32_t value;
    int64_t value_2 = 0;
    int64_t value_3 = 0;
    if (input && input_2 >> 1 <= 0x7fffffff)
    {
        value = RtlStringLengthWorkerW(input, input_2 >> 1, &value_3);
        value_2 = value_3;
    }
    else
    {
        value = -0x3ffffff3;
    }
    if (input_3)
    {
        if (0 <= value)
        {
            *input_3 = value_2 * 2;
        }
        else
        {
            *input_3 = 0;
        }
    }
    return;
}

int32_t RtlStringCbCopyW(int16_t *input, uint64_t input_2, int64_t input_3)
{
    int32_t value;
    input_2 >>= 1;
    value = RtlStringValidateDestW(input, input_2, 0x7fffffff);
    if (0 <= value)
    {
        value = RtlStringCopyWorkerW(input, input_2, NULL, input_3, 0x7ffffffe);
    }
    else if (input_2)
    {
        *input = 0;
    }
    return value;
}

uint64_t MpClearProcessExclusionFlag(void *input)
{
    uint64_t value;
    uint64_t status;
    status = ((uint32_t *)input)[0xd];
    if (((uint32_t *)input)[0xd] & 1)
    {
        WdAtomicAnd32((volatile int32_t *)((uint32_t *)((int64_t)input + 0x34)), 0xfffffffe);
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
        {
            WPP_SF_dZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x12, WD_SYMBOL_ADDRESS(WPP_5670a709eb3a322061319a849c30f9df_Traceguids), ((uint32_t *)input)[6], ((int16_t **)input)[0x10]);
        }
        status = MpSendRtpTainTelemetry(((int64_t *)input)[3]);
        if (Microsoft_Antimalware_AMFilterEnableBits & 8)
        {
            status = McTemplateK0qzqqqz_EtwWriteTransfer();
        }
    }
    value = status >> 8;
    status = ((uint64_t)((uint64_t)value) & 0xffffffffffffffULL) << 8 | (uint64_t)1 & 0xffULL;
    return status;
}

int32_t MpRegisterFriendlyProcess(uint64_t process_id, int32_t trace_argument_1)
{
    int64_t process_context;
    int32_t status;
    int64_t process_context_2 = 0;
    status = MpGetProcessContextById(process_id, &process_context_2);
    process_context = process_context_2;
    if (0 <= status)
    {
        if (trace_argument_1 != 1)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                WPP_SF_DD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x31, WD_SYMBOL_ADDRESS(WPP_5670a709eb3a322061319a849c30f9df_Traceguids), trace_argument_1, 1);
            }
            status = -0x3ffffff3;
        }
        else
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                WPP_SF_DD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x30, WD_SYMBOL_ADDRESS(WPP_5670a709eb3a322061319a849c30f9df_Traceguids), process_id & 0xffffffff, *(uint32_t *)(process_context_2 + 0x34));
            }
            *(uint32_t *)(process_context + 0x120) = *(uint32_t *)(process_context + 0x120) | 0x38;
            status = 0;
        }
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_DD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2f, WD_SYMBOL_ADDRESS(WPP_5670a709eb3a322061319a849c30f9df_Traceguids), process_id & 0xffffffff, status);
    }
    if (process_context)
    {
        MpReleaseProcessContext(process_context);
    }
    return status;
}

void WPP_SF_LD(uint64_t input, uint64_t input_2, uint64_t input_3, uint32_t input_4)
{
    uint32_t values[2];
    values[0] = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_5670a709eb3a322061319a849c30f9df_Traceguids), 0x32, values, 4, &unrecovered_stack_argument_5, 4, 0);
    return;
}

void WPP_SF_Zddd(uint64_t input, uint64_t input_2, uint64_t input_3, int16_t *input_4)
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

    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_5670a709eb3a322061319a849c30f9df_Traceguids), 0x2d, input_4, 2, value_2, (uint16_t)value, &unrecovered_stack_argument_5, 4, &unrecovered_stack_argument_6, 4, &unrecovered_stack_argument_7, 4, 0);
    return;
}

void WPP_SF_qDDL(uint64_t input, uint16_t input_2, uint64_t input_3, uint64_t input_4)
{
    uint64_t value;
    value = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, input_3, input_2, &value, 8, &unrecovered_stack_argument_5, 4, &unrecovered_stack_argument_6, 4, &unrecovered_stack_argument_7, 4, 0);
    return;
}

void WPP_SF_qiLD(uint64_t input, uint16_t input_2, uint64_t input_3, uint64_t input_4)
{
    uint32_t values[2];
    uint32_t values_2[2];
    uint64_t value;
    values[0] = WD_STATUS_INVALID_PARAMETER;
    values_2[0] = 0x80;
    value = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, input_3, input_2, &value, 8, &unrecovered_stack_argument_5, 8, values_2, 4, values, 4, 0);
    return;
}

void WPP_SF_qqZ(uint64_t input, uint64_t input_2, uint64_t input_3, uint64_t input_4, uint64_t input_5, int16_t *input_6)
{
    int16_t *wide_text;
    int16_t value;
    uint64_t value_2;
    uint64_t value_3;
    uint64_t value_4;
    value_2 = input_5;
    if (input_6)
    {
        value = *input_6;
        if (*input_6)
        {
            value_4 = *(uint64_t *)(&input_6[4]);
            goto block_1;
        }
    }
    else
    {
        value = 8;
    }
    value_4 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    block_1:
    wide_text = input_6;

    if (!input_6)
    {
        wide_text = &WdCleanupStorage;
    }
    value_3 = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_5670a709eb3a322061319a849c30f9df_Traceguids), 0x2c, &value_3, 8, &value_2, 8, wide_text, 2, value_4, (uint16_t)value, 0);
    return;
}

void MpSetProcessHardeningExclusion(void *input, int64_t input_2, int16_t *trace_argument_1)
{
    uint32_t *event_id;
    int64_t process;
    uint32_t value;
    uint8_t byte_value;
    uint8_t byte_value_2;
    uint8_t byte_value_3;
    uint8_t byte_value_4;
    uint8_t provider;
    uint8_t byte_value_5;
    uint64_t *data_pointer;
    uint64_t value_2;
    uint64_t value_3;
    uint32_t value_4;
    uint64_t value_5;
    uint64_t value_6;
    int16_t *wide_text;
    uint32_t value_7;
    bool enabled;
    int64_t value_9;
    char byte_value_6;
    uint32_t value_10;
    int32_t value_11;
    uint32_t value_12;
    uint64_t *data_pointer_2;
    value_4 = (uint32_t)((uint64_t)value_2 >> 0x20);
    value_7 = (uint32_t)((uint64_t)value_5 >> 0x20);
    if (!input)
    {
        return;
    }
    byte_value_5 = 1;
    event_id = &((uint32_t *)input)[0x48];
    process = 0;
    byte_value_6 = 0;
    provider = 1;
    byte_value = 1;
    byte_value_3 = 1;
    if (*event_id & 1 && ((uint8_t *)input)[0xb8] & 7 && (uint8_t)((((uint8_t *)input)[0xb8] >> 4) - 3) <= 4)
    {
        enabled = 1;
    }
    else
    {
        enabled = 0;
    }
    byte_value_2 = byte_value;
    byte_value_4 = byte_value_3;
    if (!(*(uint32_t *)(MpData + 0x360) & 8) || !enabled)
    {
        if (!input_2)
        {
            value_11 = PsLookupProcessByProcessId(((uint64_t *)input)[3], &process);
            value_4 = (uint32_t)((uint64_t)value_2 >> 0x20);
            value_7 = (uint32_t)((uint64_t)value_5 >> 0x20);
            if (value_11 < 0)
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    value_3 = ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)value_11 & 0xffffffffULL;
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x27, WD_SYMBOL_ADDRESS(WPP_5670a709eb3a322061319a849c30f9df_Traceguids), (uint64_t)KeGetCurrentThread(), value_3);
                    value_4 = (uint32_t)((uint64_t)value_3 >> 0x20);
                }
                goto block_3;
            }
            WdUnresolvedAtomicBegin();
            ObTotalReferences += 1;
            WdUnresolvedAtomicEnd();
        }
        value_4 = (uint32_t)((uint64_t)value_2 >> 0x20);
        value_7 = (uint32_t)((uint64_t)value_5 >> 0x20);
        value_11 = ((int32_t *)input)[0x3c];
        if (value_11 == 0x11 || value_11 == 0x12)
        {
            value_10 = ((uint32_t *)input)[0x47];
            if (!(value_10 & 4))
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                {
                    value_6 = ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)value_10 & 0xffffffffULL;
                    value_3 = ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)value_11 & 0xffffffffULL;
                    WPP_SF_ZDD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x29, WD_SYMBOL_ADDRESS(WPP_5670a709eb3a322061319a849c30f9df_Traceguids), ((int16_t **)input)[0x10], value_3, value_6);
                    value_4 = (uint32_t)((uint64_t)value_3 >> 0x20);
                    value_7 = (uint32_t)((uint64_t)value_6 >> 0x20);
                }
                goto block_3;
            }
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
            {
                value_5 = ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)value_10 & 0xffffffffULL;
                value_2 = ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)value_11 & 0xffffffffULL;
                WPP_SF_ZDD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x28, WD_SYMBOL_ADDRESS(WPP_5670a709eb3a322061319a849c30f9df_Traceguids), ((int16_t **)input)[0x10], value_2, value_5);
            }
        }
        value_4 = (uint32_t)((uint64_t)value_2 >> 0x20);
        value_7 = (uint32_t)((uint64_t)value_5 >> 0x20);
        byte_value_2 = provider;
        byte_value_4 = provider;
        if (!trace_argument_1)
        {
            goto block_3;
        }
        if (*trace_argument_1)
        {
            MpCreateProcessHardeningExcludeDataIfNeeded();
            value_4 = (uint32_t)((uint64_t)value_2 >> 0x20);
            value_7 = (uint32_t)((uint64_t)value_5 >> 0x20);
            if (*(int64_t *)(WdExcludeprocessStorage2 + 0x70) && (int64_t *)(*(*(int64_t **)(WdExcludeprocessStorage2 + 0x70))) != *(int64_t **)(WdExcludeprocessStorage2 + 0x70))
            {
                data_pointer = *(uint64_t **)(WdExcludeprocessStorage2 + 0x70);
                data_pointer_2 = (uint64_t *)(*data_pointer);
                while (true)
                {
                    value_4 = (uint32_t)((uint64_t)value_2 >> 0x20);
                    value_7 = (uint32_t)((uint64_t)value_5 >> 0x20);
                    if (data_pointer_2 == data_pointer)
                    {
                        break;
                    }
                    byte_value_6 = RtlPrefixUnicodeString(data_pointer_2[2], trace_argument_1, 1);
                    value_4 = (uint32_t)((uint64_t)value_2 >> 0x20);
                    value_7 = (uint32_t)((uint64_t)value_5 >> 0x20);
                    if (byte_value_6 == '\x01')
                    {
                        byte_value_5 = *(uint8_t *)(&data_pointer_2[3]);
                        byte_value_2 = ((uint8_t *)data_pointer_2)[0x19];
                        byte_value_4 = ((uint8_t *)data_pointer_2)[0x1a];
                        goto block_3;
                    }
                    data_pointer_2 = (uint64_t *)(*data_pointer_2);
                }

                if (!byte_value_6 && *(int64_t *)(*(int64_t *)(WdExcludeprocessStorage2 + 0x70) + 0x10))
                {
                    byte_value_6 = RtlEqualUnicodeString(trace_argument_1, *(uint64_t *)(*(int64_t *)(WdExcludeprocessStorage2 + 0x70) + 0x10), 1);
                }
                goto block_2;
            }
            byte_value_2 = byte_value;
            byte_value_4 = byte_value_3;
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                if (*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                {
                    value_4 = (uint32_t)((uint64_t)((uint64_t *)input)[3] >> 0x20);
                    wide_text = trace_argument_1;
                    WPP_SF_qqZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18));
                    value_7 = (uint32_t)((uint64_t)wide_text >> 0x20);
                }
            }
            goto block_3;
        }
        if (((int32_t *)input)[0x1e])
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2a, WD_SYMBOL_ADDRESS(WPP_5670a709eb3a322061319a849c30f9df_Traceguids), ((uint64_t *)input)[3]);
            }
            value_10 = *event_id;
            block_1:
            *event_id = value_10 & 0xffffffc7;

            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                WPP_SF_Z(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2e, WD_SYMBOL_ADDRESS(WPP_5670a709eb3a322061319a849c30f9df_Traceguids), trace_argument_1);
            }
            goto block_4;
        }
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2b, WD_SYMBOL_ADDRESS(WPP_5670a709eb3a322061319a849c30f9df_Traceguids), ((uint64_t *)input)[3]);
        }
        byte_value_6 = 1;
        block_2:
        value_10 = *event_id;

        if (!byte_value_6)
        {
            goto block_1;
        }
    }
    else
    {
        block_3:
        value_10 = *event_id;

        provider = byte_value_2;
    }
    value_10 = ((uint32_t)byte_value_5 * 8 ^ value_10) & 8 ^ value_10;
    *event_id = value_10;
    value = provider;
    value_12 = provider;
    value_10 = (value_12 << 4 ^ value_10) & 0x10 ^ value_10;
    *event_id = value_10;
    *event_id = ((uint32_t)byte_value_4 << 5 ^ value_10) & 0x20 ^ value_10;
    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
    {
        WPP_SF_Zddd(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, provider, trace_argument_1, ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)((uint32_t)byte_value_5) & 0xffffffffULL, ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)value & 0xffffffffULL, byte_value_4);
    }
    block_4:
    if (process)
    {
        ObfDereferenceObject();
        value_9 = ObTotalReferences;
        WdUnresolvedAtomicBegin();
        ObTotalReferences -= 1;
        WdUnresolvedAtomicEnd();
        if (value_9 + -1 <= -1 && *(int32_t *)(MpData + 0x364) <= -1)
        {
            if (!KdRefreshDebuggerNotPresent())
            {
                (*(WD_ROUTINE)swi(3))();
                return;
            }
            KeBugCheck(1);
        }
    }

    return;
}

void MpCreateProcessHardeningExcludeDataIfNeeded(void)
{
    char byte_value;
    uint64_t string = 0;
    int64_t value = 0;
    int64_t value_2 = 0;
    int64_t name = 0;
    char *bytes;
    uint32_t index;
    bool enabled;
    uint64_t value_3 = 0;
    int32_t value_5;
    int64_t *allocation;
    WD_LAYOUT_55 *allocation_2;
    uint32_t event_id;
    uint64_t value_6;
    uint64_t allocation_3 = 0;
    int64_t name_2 = 0;
    if (*(int64_t *)(MpData + 200) && (byte_value = (*__guard_dispatch_icall_fptr)(), byte_value) || *(int64_t *)(WdExcludeprocessStorage2 + 0x70) && !(*(char *)(MpData + 0x250)))
    {
        return;
    }
    allocation = (int64_t *)MpAllocatePoolWithTag(1, (char *)0x18, 0x7370504d);
    if (allocation)
    {
        allocation[1] = (int64_t)allocation;
        *allocation = (int64_t)allocation;
        if (*(WD_LAYOUT_10 **)(MpData + 0xcc0))
        {
            value_5 = MpAppendUnicodeStringToUnicodeString(*(WD_LAYOUT_10 **)(MpData + 0xcc0), &ProductDirFullPath, &allocation_3, 0x6e76504d);
            name = value_2;
            if (0 <= value_5)
            {
                value_5 = MpAppendUnicodeStringToUnicodeString(allocation_3, &MpCmdRunFileName, &allocation[2], 0x6e76504d);
                if (0 <= value_5)
                {
                    value_5 = MpGetSystemFolderPath(L"\\SystemRoot\\System32", &name_2);
                    name = name_2;
                    if (0 <= value_5)
                    {
                        bytes = &WdExcludeprocessStorage;
                        for (index = 0; index <= 7; index = index + 1)
                        {
                            allocation_2 = (WD_LAYOUT_55 *)MpAllocatePoolWithTag(1, (char *)0x20, 0x7461504d);
                            if (!allocation_2)
                            {
                                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                                {
                                    goto block_2;
                                }
                                event_id = 0x24;
                                goto block_1;
                            }
                            RtlInitUnicodeString(&string, *(uint64_t *)(&bytes[-8]));
                            value_5 = MpAppendUnicodeStringToUnicodeString(name, &string, &value, 0x654f424d);
                            if (value_5 < 0)
                            {
                                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                {
                                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x25, WD_SYMBOL_ADDRESS(WPP_5670a709eb3a322061319a849c30f9df_Traceguids), (uint64_t)KeGetCurrentThread(), value_5);
                                }
                                ExFreePoolWithTag(allocation_2, 0x7461504d);
                                goto block_2;
                            }
                            allocation_2->field_0x10 = value;
                            allocation_2->field_0x18 = *bytes;
                            allocation_2->field_0x19 = bytes[1];
                            allocation_2->field_0x1a = bytes[2];
                            value_2 = *allocation;
                            value = 0;
                            if (*(int64_t **)(value_2 + 8) != allocation)
                            {
                                (*(WD_ROUTINE)swi(0x29))(3);
                            }
                            allocation_2->field_0x0 = value_2;
                            allocation_2->field_0x8 = allocation;
                            bytes = &bytes[0x10];
                            *(WD_LAYOUT_55 **)(value_2 + 8) = allocation_2;
                            *allocation = (int64_t)allocation_2;
                        }

                        WdUnresolvedAtomicBegin();
                        enabled = *(int64_t *)(WdExcludeprocessStorage2 + 0x70) == 0;
                        if (enabled)
                        {
                            *(int64_t *)(WdExcludeprocessStorage2 + 0x70) = (int64_t)allocation;
                        }
                        WdUnresolvedAtomicEnd();
                        if (enabled)
                        {
                            allocation = NULL;
                        }
                        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                        {
                            WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x26, WD_SYMBOL_ADDRESS(WPP_5670a709eb3a322061319a849c30f9df_Traceguids));
                        }
                    }
                    else
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x23, WD_SYMBOL_ADDRESS(WPP_5670a709eb3a322061319a849c30f9df_Traceguids), (uint64_t)KeGetCurrentThread(), value_5);
                        }
                        name = name_2;
                    }
                }
                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    value_6 = 0x22;
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_6, WD_SYMBOL_ADDRESS(WPP_5670a709eb3a322061319a849c30f9df_Traceguids), (uint64_t)KeGetCurrentThread(), value_5);
                }
            }
            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                value_6 = 0x21;
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_6, WD_SYMBOL_ADDRESS(WPP_5670a709eb3a322061319a849c30f9df_Traceguids), (uint64_t)KeGetCurrentThread(), value_5);
            }
        }
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        event_id = 0x20;
        block_1:
        WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_5670a709eb3a322061319a849c30f9df_Traceguids), (uint64_t)KeGetCurrentThread());
    }
    block_2:
    MpFreeWithTag(allocation_3, 0x6e76504d);

    if (name)
    {
        MpFreeObjectName(name);
    }
    if (allocation)
    {
        MpFreeHardeningExcludeData(allocation);
    }
    return;
}

void MpDeleteProcessExclusionList(int64_t *input)
{
    int64_t *allocation;
    while (allocation = (int64_t *)(*input), allocation)
    {
        *input = *allocation;
        if (allocation[2])
        {
            ExFreePoolWithTag(allocation[2], 0x6e70504d);
        }
        ExFreePoolWithTag(allocation, 0x646e504d);
    }

    return;
}

int32_t MpCreateProcessExclusionList(void *input, int64_t *input_2)
{
    uint64_t value;
    uint64_t text_size;
    uint16_t value_2;
    int64_t source_text;
    uint32_t value_3;
    uint32_t buffer_size;
    uint64_t value_4;
    int32_t value_5;
    uint32_t value_6;
    WD_LAYOUT_59 *allocation;
    int64_t *allocation_2;
    int64_t allocation_size;
    uint64_t value_7;
    uint64_t value_8;
    int32_t value_9;
    buffer_size = ((uint32_t *)input)[4];
    value_3 = 0;
    *input_2 = 0;
    text_size = 0;
    if (!((int32_t *)input)[4])
    {
        return 0;
    }
    source_text = ((int64_t *)input)[3] + (int64_t)input;
    while (true)
    {
        if (((uint32_t *)input)[4] <= value_3)
        {
            return 0;
        }
        value_5 = RtlStringCbLengthW(source_text, buffer_size, &text_size);
        value = text_size;
        if (value_5 < 0)
        {
            break;
        }
        if (0x10000 <= text_size)
        {
            value_9 = -0x3fffff6b;
            value_5 = value_9;
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                MpDeleteProcessExclusionList(input_2);
                return value_5;
            }
            value_8 = 0x18;
            value_5 = -0x3fffff6b;
            goto block_2;
        }
        value_2 = (uint16_t)text_size;
        if (!value_2)
        {
            return 0;
        }
        allocation = (WD_LAYOUT_59 *)MpAllocatePoolWithTag(1, (char *)0x20, 0x646e504d);
        if (!allocation)
        {
            value_5 = -0x3fffff66;
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x19, WD_SYMBOL_ADDRESS(WPP_5670a709eb3a322061319a849c30f9df_Traceguids), (uint64_t)KeGetCurrentThread(), WD_STATUS_INSUFFICIENT_RESOURCES);
            }
            MpDeleteProcessExclusionList(input_2);
            return value_5;
        }
        value_4 = value & 0xffff;
        allocation_size = value_4 + 2;
        allocation_2 = MpAllocatePoolWithTag(1, allocation_size, 0x6e70504d);
        allocation->field_0x10 = (int64_t)allocation_2;
        if (!allocation_2)
        {
            value_5 = -0x3fffff66;
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1a, WD_SYMBOL_ADDRESS(WPP_5670a709eb3a322061319a849c30f9df_Traceguids), (uint64_t)KeGetCurrentThread(), WD_STATUS_INSUFFICIENT_RESOURCES);
            }
            block_1:
            if (allocation->field_0x10)
            {
                ExFreePoolWithTag(allocation->field_0x10, 0x6e70504d);
            }

            ExFreePoolWithTag(allocation, 0x646e504d);
            if (0 <= value_5)
            {
                return value_5;
            }
            MpDeleteProcessExclusionList(input_2);
            return value_5;
        }
        allocation->field_0x8 = value_2;
        allocation->field_0xa = value_2 + 2;
        value_5 = RtlStringCbCopyW(allocation_2, allocation_size, source_text);
        if (value_5 < 0)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1b, WD_SYMBOL_ADDRESS(WPP_5670a709eb3a322061319a849c30f9df_Traceguids), (uint64_t)KeGetCurrentThread(), value_5);
            }
            goto block_1;
        }
        allocation_size = wcschr(allocation->field_0x10, 0x5c);
        allocation->field_0x18 = 0;
        if (!allocation_size)
        {
            allocation->field_0x18 = 1;
        }
        allocation->field_0x19 = 0;
        if (8 <= value_2)
        {
            allocation_size = allocation->field_0x10;
            value_7 = value_4 >> 1;
            if (*(int16_t *)(allocation_size + -2 + value_7 * 2) == 0x2a && *(int16_t *)(allocation_size + -4 + value_7 * 2) == 0x5c)
            {
                *(uint16_t *)(allocation_size + -2 + value_7 * 2) = 0;
                allocation->field_0x8 = allocation->field_0x8 + -2;
                allocation->field_0x19 = 1;
            }
        }
        allocation->field_0x0 = *input_2;
        value_6 = (uint32_t)value & 0xffff;
        source_text = source_text + 2 + value_4;
        value_3 = value_3 + 2 + value_6;
        *input_2 = (int64_t)allocation;
        value_6 += 2;
        if (buffer_size < value_6)
        {
            value_9 = -0x3fffff6b;
            value_5 = value_9;
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                MpDeleteProcessExclusionList(input_2);
                return value_5;
            }
            value_8 = 0x1c;
            value_5 = -0x3fffff6b;
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_8, WD_SYMBOL_ADDRESS(WPP_5670a709eb3a322061319a849c30f9df_Traceguids), (uint64_t)KeGetCurrentThread(), value_5);
            value_5 = value_9;
            MpDeleteProcessExclusionList(input_2);
            return value_5;
        }
        buffer_size -= value_6;
    }

    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
    {
        MpDeleteProcessExclusionList(input_2);
        return value_5;
    }
    value_8 = 0x17;
    value_9 = value_5;
    block_2:
    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_8, WD_SYMBOL_ADDRESS(WPP_5670a709eb3a322061319a849c30f9df_Traceguids), (uint64_t)KeGetCurrentThread(), value_5);

    value_5 = value_9;
    MpDeleteProcessExclusionList(input_2);
    return value_5;
}

void MpSetProcessExempt(void *input, int16_t *input_2, bool input_3, int64_t process)
{
    uint64_t *data_pointer;
    uint64_t value;
    int64_t value_3;
    char byte_value;
    int32_t value_4;
    int16_t *wide_text;
    uint64_t string;
    int64_t process_context;
    uint64_t *index;
    value_3 = WdExcludeprocessStorage2;
    process_context = 0;
    string = 0;
    value = 0;
    if (input)
    {
        wide_text = input_2;
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(value_3, (uint64_t)((uint64_t)wide_text) & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
        if (((int64_t *)input)[3] != *(int64_t *)(MpData + 0xf0) && ((int64_t *)input)[3] != *(int64_t *)(MpData + 0x108))
        {
            if (input_2 && *input_2)
            {
                RtlInitUnicodeString(&string, WD_EXCLUDEPROCESS_UNRECOVERED_ADDRESS);
                value_4 = FltParseFileName(input_2, 0, 0, &string);
                if (0 <= value_4)
                {
                    for (index = *(uint64_t **)(WdExcludeprocessStorage2 + 0x68); index; index = (uint64_t *)(*index))
                    {
                        data_pointer = &index[1];
                        if (*(char *)(&index[3]) != '\x01')
                        {
                            if (((char *)index)[0x19] != '\x01')
                            {
                                byte_value = RtlEqualUnicodeString(data_pointer, input_2);
                            }
                            else
                            {
                                byte_value = RtlPrefixUnicodeString(data_pointer, input_2);
                            }
                        }
                        else
                        {
                            byte_value = RtlEqualUnicodeString(data_pointer, &string);
                        }
                        if (byte_value)
                        {
                            WdAtomicOr32((volatile int32_t *)((uint32_t *)((int64_t)input + 0x34)), 1);
                            goto block_1;
                        }
                    }

                    WdAtomicAnd32((volatile int32_t *)((uint32_t *)((int64_t)input + 0x34)), 0xfffffffe);
                }
                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x10, WD_SYMBOL_ADDRESS(WPP_5670a709eb3a322061319a849c30f9df_Traceguids), (uint64_t)KeGetCurrentThread(), value_4);
                }
            }
        }
        else
        {
            WdAtomicOr32((volatile int32_t *)((uint32_t *)((int64_t)input + 0x34)), 9);
        }
        block_1:
        ExReleaseResourceLite(WdExcludeprocessStorage2);

        KeLeaveCriticalRegion();
    }
    else if (process)
    {
        if ((int32_t)MpGetProcessContextByObject(process, &process_context) <= -1 && (value_4 = MpCreateProcessContextByObject(process, &process_context), value_4 <= -1) && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xf, WD_SYMBOL_ADDRESS(WPP_5670a709eb3a322061319a849c30f9df_Traceguids), (uint64_t)KeGetCurrentThread(), value_4);
        }
        if (input_3)
        {
            if (!process_context)
            {
                return;
            }
            WdAtomicOr32((volatile int32_t *)((uint32_t *)(process_context + 0x34)), 9);
        }
        else
        {
            if (!process_context)
            {
                return;
            }
            WdAtomicAnd32((volatile int32_t *)((uint32_t *)(process_context + 0x34)), 0xfffffffe);
        }
        MpReleaseProcessContext(process_context);
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xe, WD_SYMBOL_ADDRESS(WPP_5670a709eb3a322061319a849c30f9df_Traceguids));
    }
    return;
}

uint64_t MpShouldSendBmMessage(void *input)
{
    uint64_t value;
    uint64_t value_2;
    value_2 = (uint64_t)((uint64_t)value >> 8);
    if (input && (!(((uint32_t *)input)[0xd] & 8) || !(((uint32_t *)input)[0xe] & 0x4000)))
    {
        if (!(((uint32_t *)input)[0xd] & 1))
        {
            return ((uint64_t)value_2 & 0xffffffffffffffULL) << 8 | (uint64_t)1 & 0xffULL;
        }
        return (uint64_t)(((uint32_t *)input)[0xe] >> 0xe) & 0xffffffffffffff01;
    }
    return (uint64_t)value_2 << 8;
}

uint64_t MpIsRegistryHardeningExemptByContext(void *input)
{
    uint32_t value;
    uint64_t value_2;
    uint64_t value_3;
    uint64_t data;
    if (input && (value_2 = *__imp_PsInitialSystemProcess, data = IoGetCurrentProcess(), value_3 = WdSharedTickCount, value_2 != data) && (data = MpData, !(*(int32_t *)(MpData + 0x98c))))
    {
        if (!(*(int64_t *)(MpData + 0xe8)))
        {
            data = (uint64_t)((0 | (uint64_t)36000000000) / (uint64_t)((uint32_t)KeQueryTimeIncrement())) + *(int64_t *)(MpData + 0xfc0);
            if (data < value_3)
            {
                return (uint64_t)data & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
            }
        }
        if (!(((uint32_t *)input)[0xe] & 0x400))
        {
            value = ((uint32_t *)input)[0x48];
            data = value;
            if (!(value & 8))
            {
                return value & 0xffffff00;
            }
        }
    }
    return (uint64_t)data & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
}

char MpIsProcessExemptByData(void)
{
    char byte_value;
    int64_t process_context[3];
    process_context[0] = 0;
    MpGetProcessContextByObject(MpGetRequestorProcess(), process_context);
    byte_value = MpIsProcessExemptByContext(process_context[0]);
    if (process_context[0])
    {
        MpReleaseProcessContext(process_context[0]);
    }
    return byte_value;
}

uint64_t MpIsProcessExemptById(int64_t process_id)
{
    int64_t value;
    char byte_value;
    uint64_t thread_process;
    uint64_t status;
    uint64_t process_context = 0;
    thread_process = MpData;
    if (process_id != *(int64_t *)(MpData + 0xf0) && process_id != *(int64_t *)(MpData + 0x108) && (value = *(int64_t *)(MpData + 0xe8), thread_process = IoThreadToProcess((uint64_t)KeGetCurrentThread()), thread_process != value) && (value = *(int64_t *)(MpData + 0x100), thread_process = IoThreadToProcess((uint64_t)KeGetCurrentThread()), thread_process != value))
    {
        status = MpGetProcessContextById(process_id, &process_context);
        if (0 <= (int32_t)status)
        {
            byte_value = MpIsProcessExemptByContext(process_context);
            return (uint64_t)MpReleaseProcessContext(process_context) & 0xffffffffffffff00 | (uint64_t)byte_value & 0xff;
        }
        return status & 0xffffffffffffff00;
    }
    return (uint64_t)thread_process & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
}

uint64_t MpIsProcessExemptByContext(WD_LAYOUT_44 *input)
{
    uint32_t value;
    int64_t process_context;
    uint64_t thread_process;
    int64_t process_context_2;
    uint64_t value_2;
    if (input)
    {
        value = input->field_0x34;
        thread_process = value;
        if (value & 1)
        {
            return ((uint64_t)((uint64_t)((uint32_t)(value >> 8))) & 0xffffffffffffffULL) << 8 | (uint64_t)1 & 0xffULL;
        }
        if (value >> 0xe & 1 && (thread_process = IoThreadToProcess((uint64_t)KeGetCurrentThread()), thread_process != *__imp_PsInitialSystemProcess))
        {
            process_context_2 = 0;
            thread_process = MpGetProcessContextByObject(thread_process, &process_context_2);
            process_context = process_context_2;
            if (0 <= (int32_t)thread_process)
            {
                value_2 = 0;
                if (*(uint32_t *)(process_context_2 + 0x34) & 1)
                {
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                    {
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x11, WD_SYMBOL_ADDRESS(WPP_5670a709eb3a322061319a849c30f9df_Traceguids), (uint64_t)KeGetCurrentThread(), *(uint32_t *)(process_context_2 + 0x18));
                    }
                    value_2 = 1;
                }
                MpReleaseProcessContext(process_context);
                return value_2;
            }
        }
    }
    return thread_process & 0xffffffffffffff00;
}

uint64_t MpIsObHardeningExemptByContext(void *input)
{
    uint64_t value;
    uint32_t value_2;
    uint64_t data;
    value = WdSharedTickCount;
    if (input && (data = MpData, !(*(int32_t *)(MpData + 0x98c))))
    {
        if (!(*(int64_t *)(MpData + 0xe8)))
        {
            data = (uint64_t)((0 | (uint64_t)36000000000) / (uint64_t)((uint32_t)KeQueryTimeIncrement())) + *(int64_t *)(MpData + 0xfc0);
            if (data < value)
            {
                return (uint64_t)data & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
            }
        }
        if (!(((uint32_t *)input)[0xd] >> 0xf & 1))
        {
            return (uint64_t)(((uint32_t *)input)[0x48] >> 5) & 0xffffffffffffff01;
        }
        value_2 = ((uint32_t *)input)[0xd] & 0xffff7fff;
        data = value_2;
        ((uint32_t *)input)[0xd] = value_2;
    }
    return (uint64_t)data & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
}

void MpSetProcessHardening(int64_t input, void *input_2, int16_t *trace_argument_1)
{
    char byte_value;
    int32_t value;
    uint64_t value_2;
    int64_t value_3;
    char buffer[32];
    int64_t process[6];
    process[5] = __security_cookie ^ (uint64_t)buffer;
    process[0] = 0;
    process[3] = 0;
    process[4] = 0;
    process[1] = 0;
    process[2] = 0;
    if (!(*(uint32_t *)(MpData + 0x360) & 1))
    {
        __security_check_cookie(process[5] ^ (uint64_t)buffer);
        return;
    }
    if (input_2 && trace_argument_1 && *trace_argument_1)
    {
        RtlInitUnicodeString(&process[3], WD_EXCLUDEPROCESS_UNRECOVERED_ADDRESS);
        value_2 = 0;
        value = FltParseFileName(trace_argument_1, 0, 0, &process[3]);
        if (0 <= value)
        {
            RtlInitUnicodeString(&process[1], L"mpcmdrun.exe");
            value_2 = (uint64_t)value_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
            byte_value = RtlEqualUnicodeString(&process[3], &process[1], value_2);
            if (byte_value)
            {
                block_1:
                value_3 = *(int64_t *)(MpData + 0x948);

                block_2:
                if (!input)
                {
                    value = PsLookupProcessByProcessId(((uint64_t *)input_2)[3], process);
                    if (value < 0)
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                        {
                            if (*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                            {
                                value_2 = 0x1e;
                                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_5670a709eb3a322061319a849c30f9df_Traceguids), (uint64_t)KeGetCurrentThread(), value);
                            }
                            goto block_3;
                        }
                        goto block_4;
                    }
                    WdUnresolvedAtomicBegin();
                    ObTotalReferences += 1;
                    WdUnresolvedAtomicEnd();
                    input = process[0];
                }

                if (value_3)
                {
                    if (MpMatchPerServiceSidByObj(input, value_3))
                    {
                        WdAtomicOr32((volatile int32_t *)((uint32_t *)((int64_t)input_2 + 0x34)), 0x10);
                        goto block_3;
                    }
                }
            }
            else
            {
                RtlInitUnicodeString(&process[1], L"msmpeng.exe");
                value_2 = (uint64_t)value_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
                byte_value = RtlEqualUnicodeString(&process[3], &process[1], value_2);
                if (byte_value)
                {
                    goto block_1;
                }
                RtlInitUnicodeString(&process[1], L"mpcopyaccelerator.exe");
                value_2 = (uint64_t)value_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
                byte_value = RtlEqualUnicodeString(&process[3], &process[1], value_2);
                if (byte_value)
                {
                    goto block_1;
                }
                RtlInitUnicodeString(&process[1], L"mpdefendercoreservice.exe");
                value_2 = (uint64_t)value_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
                byte_value = RtlEqualUnicodeString(&process[3], &process[1], value_2);
                if (byte_value)
                {
                    value_3 = *(int64_t *)(MpData + 0x970);
                    goto block_2;
                }
                RtlInitUnicodeString(&process[1], L"MpDlpService.exe");
                value_2 = (uint64_t)value_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
                byte_value = RtlEqualUnicodeString(&process[3], &process[1], value_2);
                if (byte_value)
                {
                    value_3 = *(int64_t *)(MpData + 0x958);
                    goto block_2;
                }
                RtlInitUnicodeString(&process[1], L"nissrv.exe");
                if (RtlEqualUnicodeString(&process[3], &process[1], (uint64_t)value_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff) && *(uint32_t *)(MpData + 0x360) & 8)
                {
                    value_3 = *(int64_t *)(MpData + 0x950);
                    goto block_2;
                }
            }
            WdAtomicAnd32((volatile int32_t *)((uint32_t *)((int64_t)input_2 + 0x34)), 0xffffffef);
            goto block_3;
        }
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
        {
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                goto block_3;
            }
            value_2 = 0x1d;
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_5670a709eb3a322061319a849c30f9df_Traceguids), (uint64_t)KeGetCurrentThread(), value);
            goto block_3;
        }
    }
    else
    {
        block_3:
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            WPP_SF_ZD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1f, WD_SYMBOL_ADDRESS(WPP_5670a709eb3a322061319a849c30f9df_Traceguids), trace_argument_1, ((uint32_t *)input_2)[0xd]);
        }
    }
    block_4:
    if (process[0])
    {
        ObfDereferenceObject();
        value_3 = ObTotalReferences;
        WdUnresolvedAtomicBegin();
        ObTotalReferences -= 1;
        WdUnresolvedAtomicEnd();
        if (value_3 + -1 <= -1 && *(int32_t *)(MpData + 0x364) <= -1)
        {
            if (!KdRefreshDebuggerNotPresent())
            {
                (*(WD_ROUTINE)swi(3))();
                return;
            }
            KeBugCheck(1);
        }
    }

    __security_check_cookie(process[5] ^ (uint64_t)buffer);
    return;
}

void MpFreeHardeningExcludeData(WD_LAYOUT_54 *allocation)
{
    WD_LAYOUT_54 *allocation_2;
    int64_t *data_pointer;
    if (!allocation)
    {
        return;
    }
    while (true)
    {
        allocation_2 = (WD_LAYOUT_54 *)allocation->field_0x0;
        if (allocation_2 == allocation)
        {
            if (allocation->field_0x10)
            {
                ExFreePoolWithTag(allocation->field_0x10, 0x6e76504d);
            }
            ExFreePoolWithTag(allocation, 0x7370504d);
            return;
        }
        if (*(WD_LAYOUT_54 **)allocation_2->field_0x8 != allocation || (data_pointer = allocation_2->field_0x0, (WD_LAYOUT_54 *)data_pointer[1] != allocation_2))
        {
            break;
        }
        allocation->field_0x0 = data_pointer;
        data_pointer[1] = (int64_t)allocation;
        if (allocation_2->field_0x10)
        {
            ExFreePoolWithTag(allocation_2->field_0x10, 0x654f424d);
        }
        ExFreePoolWithTag(allocation_2, 0x7461504d);
    }

    (*(WD_ROUTINE)swi(0x29))(3);
}

int32_t MpSendRtpTainTelemetry(int64_t input)
{
    uint16_t value;
    uint16_t *string;
    int32_t trace_argument_1;
    uint16_t *wide_text = NULL;
    int64_t value_2 = 0;
    int64_t value_3;
    int32_t value_4;
    uint32_t value_5;
    trace_argument_1 = MpGetProcessName(input, &wide_text);
    string = wide_text;
    if (0 <= trace_argument_1)
    {
        value = *wide_text;
        value_4 = value + 0x26;
        trace_argument_1 = MpAsyncCreateNotification(&value_2, value_4);
        value_3 = value_2;
        if (0 <= trace_argument_1)
        {
            if (value)
            {
                memcpy_s((int64_t *)(value_2 + 0x24), &((char *)((uint64_t)value))[2], *(uint64_t **)(&string[4]), (char *)((uint64_t)value));
                value_5 = 0;
                *(uint16_t *)(value_3 + 0x24 + (uint64_t)(value >> 1) * 2) = 0;
                *(int32_t *)(value_3 + 8) = value_4;
                *(uint32_t *)(value_3 + 0x10) = 0x17;
                *(int32_t *)(value_3 + 0x18) = (int32_t)input;
                trace_argument_1 = MpAsyncSendNotification(value_3, value_4, 0, 1, NULL);
                if (0 <= trace_argument_1)
                {
                    MpLogPrintfW(L"[Mini-filter] RtpTaint telemetry notification (%ls) sent successfully.", value_3 + 0x24);
                }
                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x34, WD_SYMBOL_ADDRESS(WPP_5670a709eb3a322061319a849c30f9df_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)trace_argument_1 & 0xffffffffULL);
                }
                goto block_1;
            }
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x33, WD_SYMBOL_ADDRESS(WPP_5670a709eb3a322061319a849c30f9df_Traceguids), trace_argument_1);
        }
        value_3 = value_2;
    }
    else
    {
        value_3 = 0;
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && (value_3 = 0, *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            WPP_SF_LD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18));
        }
    }
    block_1:
    if (string)
    {
        MpFreeString(string);
    }

    if (value_3)
    {
        MpAsyncDereferenceNotification(value_3);
    }
    return trace_argument_1;
}

void MpShutdownProcessExclusions(void)
{
    if (!WdExcludeprocessStorage2)
    {
        return;
    }
    MpDeleteProcessExclusionList((int64_t *)(WdExcludeprocessStorage2 + 0x68));
    MpFreeHardeningExcludeData(*(WD_LAYOUT_54 **)(WdExcludeprocessStorage2 + 0x70));
    ExDeleteResourceLite(WdExcludeprocessStorage2);
    ExFreePoolWithTag(WdExcludeprocessStorage2, 0x7370504d);
    WdExcludeprocessStorage2 = 0;
    return;
}

uint64_t MpInitializeProcessExclusions(void)
{
    WdExcludeprocessStorage2 = (int64_t)MpAllocatePoolWithTag(ExDefaultNonPagedPoolType, (char *)0x78, 0x7370504d);
    if (!WdExcludeprocessStorage2)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 10, WD_SYMBOL_ADDRESS(WPP_5670a709eb3a322061319a849c30f9df_Traceguids), (uint64_t)KeGetCurrentThread());
        }
        return WD_STATUS_INSUFFICIENT_RESOURCES;
    }
    ExInitializeResourceLite(WdExcludeprocessStorage2);
    return 0;
}

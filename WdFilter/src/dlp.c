#include "wdfilter.h"

void WPP_SF_dZZ(uint64_t input, uint64_t input_2, uint64_t input_3, uint32_t input_4, int16_t *input_5, int16_t *input_6)
{
    int16_t value;
    int16_t *wide_text;
    uint32_t values[2];
    int16_t *wide_text_2;
    int16_t value_2;
    uint64_t value_3;
    uint64_t value_4;
    value_3 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    value_2 = 8;
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
    if (input_5 && (value_2 = *input_5, *input_5))
    {
        value_3 = *(uint64_t *)(&input_5[4]);
    }
    wide_text_2 = input_5;
    if (!input_5)
    {
        wide_text_2 = &WdCleanupStorage;
    }
    values[0] = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), 0x1c, values, 4, wide_text_2, 2, value_3, (uint16_t)value_2, wide_text, 2, value_4, (uint16_t)value, 0);
    return;
}

void WPP_SF_qDDDD(uint64_t input, uint16_t input_2, uint64_t input_3, uint64_t input_4)
{
    uint64_t value;
    value = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), input_2, &value, 8, &unrecovered_stack_argument_5, 4, &unrecovered_stack_argument_6, 4, &unrecovered_stack_argument_7, 4, &unrecovered_stack_argument_8, 4, 0);
    return;
}

uint64_t MpDlpBlockActionToNtStatus(WD_LAYOUT_37 *input, int32_t *event_id, uint32_t *input_2)
{
    int32_t provider;
    uint32_t trace_argument_1;
    uint32_t value;
    trace_argument_1 = WdDlpStorage2;
    value = 0;
    if (!input_2)
    {
        return WD_STATUS_INVALID_PARAMETER;
    }
    *input_2 = WdDlpStorage2;
    if (!event_id)
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
        {
            return 0;
        }
        if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4))
        {
            return 0;
        }
        WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x5d, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), trace_argument_1);
        return 0;
    }
    provider = *event_id;
    if (provider != 1)
    {
        if (provider == 3)
        {
            if (input)
            {
                trace_argument_1 = *(uint32_t *)(input->field_0xe4 * 0x10ULL + WD_DLP_UNRECOVERED_ADDRESS);
            }
            else
            {
                trace_argument_1 = WdDlpStorage2;
            }
            goto block_1;
        }
        if (provider == 4)
        {
            if (input)
            {
                trace_argument_1 = *(uint32_t *)(input->field_0xe4 * 0x10ULL + WD_DLP_UNRECOVERED_ADDRESS2);
            }
            else
            {
                trace_argument_1 = WdDlpStorage;
            }
            goto block_1;
        }
        if (provider != 0xc && provider != 0xe)
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return WD_STATUS_INVALID_PARAMETER;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4))
            {
                return WD_STATUS_INVALID_PARAMETER;
            }
            WPP_SF_dD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, provider, provider, trace_argument_1);
            return WD_STATUS_INVALID_PARAMETER;
        }
    }
    if (input)
    {
        trace_argument_1 = *(uint32_t *)(input->field_0xe4 * 0x10ULL + WD_DLP_UNRECOVERED_ADDRESS3);
    }
    else
    {
        trace_argument_1 = WdDlpStorage3;
    }
    block_1:
    *input_2 = trace_argument_1;

    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
    {
        if (input)
        {
            value = input->field_0xe4;
        }
        WPP_SF_dDd(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), WPP_GLOBAL_Control, provider, provider, trace_argument_1, value);
    }
    return 0;
}

uint64_t MpDlpUpdateEnlightmentForRunningProcesses(uint64_t input, uint64_t input_2)
{
    int64_t process_table;
    int64_t value;
    int64_t value_2;
    uint64_t *index;
    int64_t value_3;
    process_table = MpProcessTable;
    value = 0;
    if (!(*(int64_t *)(MpProcessTable + 0x180)))
    {
        return 0;
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(process_table + 8, (uint64_t)input_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
    value_2 = 0x80;
    process_table = *(int64_t *)(MpProcessTable + 0x180);
    value_3 = value;
    do
    {
        for (index = *(uint64_t **)(value_3 + process_table); index != (uint64_t *)(value + process_table); index = (uint64_t *)(*index))
        {
            MpDlpLoadProcessModuleNotifyRoutine((WD_LAYOUT_14 *)(&index[-1]), (WD_UNICODE_STRING_ADDRESS_VIEW *)index[0xf]);
            process_table = *(int64_t *)(MpProcessTable + 0x180);
        }

        value += 0x10;
        value_3 += 0x10;
        value_2 -= 1;
    }
    while (value_2);
    ExReleaseResourceLite(MpProcessTable + 8);
    KeLeaveCriticalRegion();
    return 0;
}

void WPP_SF_DDDD(uint64_t input, uint16_t input_2, uint64_t input_3, uint32_t input_4)
{
    uint32_t values[2];
    values[0] = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), input_2, values, 4, &unrecovered_stack_argument_5, 4, &unrecovered_stack_argument_6, 4, &unrecovered_stack_argument_7, 4, 0);
    return;
}

void WPP_SF_SD(uint64_t input)
{
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), 0xe, L"\\Callback\\WddDeviceNotifcationsCallback", 0x50, &unrecovered_stack_argument_5, 4, 0);
    return;
}

void WPP_SF_dD(uint64_t input, uint64_t input_2, uint64_t input_3, uint32_t input_4)
{
    uint32_t values[2];
    values[0] = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), 0x5e, values, 4, &unrecovered_stack_argument_5, 4, 0);
    return;
}

void WPP_SF_dDd(uint64_t input, uint64_t input_2, uint64_t input_3, uint32_t input_4)
{
    uint32_t values[2];
    values[0] = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), 0x5f, values, 4, &unrecovered_stack_argument_5, 4, &unrecovered_stack_argument_6, 4, 0);
    return;
}

void WPP_SF_dddd(uint64_t input, uint64_t input_2, uint64_t input_3, uint32_t input_4)
{
    uint32_t values[2];
    uint32_t values_2[2];
    uint32_t values_3[2];
    values[0] = 0;
    values_2[0] = 0xa3;
    values_3[0] = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), 0x3b, values_3, 4, &unrecovered_stack_argument_5, 4, values_2, 4, values, 4, 0);
    return;
}

void WPP_SF_qDDD(uint64_t input, uint64_t input_2, uint64_t input_3, uint64_t input_4)
{
    uint32_t values[2];
    uint32_t values_2[2];
    uint64_t value;
    values[0] = WD_STATUS_INVALID_PARAMETER;
    values_2[0] = 0x2c;
    value = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), 0x40, &value, 8, values_2, 4, &unrecovered_stack_argument_6, 4, values, 4, 0);
    return;
}

void WPP_SF_qZZDD(uint64_t input, uint64_t input_2, uint64_t input_3, uint64_t input_4, int16_t *input_5, int16_t *input_6)
{
    int16_t value;
    int16_t *wide_text;
    uint64_t value_2;
    int16_t *wide_text_2;
    int16_t value_3;
    uint64_t value_4;
    uint64_t value_5;
    value_4 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    if (input_6)
    {
        value = *input_6;
        if (*input_6)
        {
            value_5 = *(uint64_t *)(&input_6[4]);
            goto block_1;
        }
    }
    else
    {
        value = 8;
    }
    value_5 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    block_1:
    wide_text = input_6;

    if (!input_6)
    {
        wide_text = &WdCleanupStorage;
    }
    if (input_5)
    {
        value_3 = *input_5;
        if (*input_5)
        {
            value_4 = *(uint64_t *)(&input_5[4]);
        }
    }
    else
    {
        value_3 = 8;
    }
    wide_text_2 = input_5;
    if (!input_5)
    {
        wide_text_2 = &WdCleanupStorage;
    }
    value_2 = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), 0x2e, &value_2, 8, wide_text_2, 2, value_4, (uint16_t)value_3, wide_text, 2, value_5, (uint16_t)value, &unrecovered_stack_argument_7, 4, &unrecovered_stack_argument_8, 4, 0);
    return;
}

void WPP_SF_qqDDZDD(uint64_t input, uint64_t input_2, uint64_t input_3, uint64_t input_4, uint64_t input_5, uint64_t input_6, uint64_t input_7, int16_t *input_8)
{
    int16_t *wide_text;
    int16_t value;
    uint64_t value_2;
    uint64_t value_3;
    uint64_t value_4;
    value_2 = input_5;
    if (input_8)
    {
        value = *input_8;
        if (*input_8)
        {
            value_4 = *(uint64_t *)(&input_8[4]);
            goto block_1;
        }
    }
    else
    {
        value = 8;
    }
    value_4 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    block_1:
    wide_text = input_8;

    if (!input_8)
    {
        wide_text = &WdCleanupStorage;
    }
    value_3 = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), 0x68, &value_3, 8, &value_2, 8, &input_6, 4, &input_7, 4, wide_text, 2, value_4, (uint16_t)value, &unrecovered_stack_argument_9, 4, &unrecovered_stack_argument_10, 4, 0);
    return;
}

void MpDlpGetProcessContextFromTokenAttribute(int64_t input, int64_t *process_context)
{
    int64_t value;
    uint64_t *data_pointer;
    int32_t value_2;
    int64_t allocation;
    uint32_t values[2];
    values[0] = 0x400;
    if (!input || !process_context)
    {
        return;
    }
    allocation = (int64_t)MpAllocatePoolWithTag(1, (char *)0x400, 0x7064504d);
    if (!allocation)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x49, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread(), WD_STATUS_INSUFFICIENT_RESOURCES);
        }
        return;
    }
    value_2 = SeQuerySecurityAttributesToken(input, WD_DLP_UNRECOVERED_ADDRESS4, 1, allocation, values[0], values);
    if (0 <= value_2)
    {
        block_1:
        if (*(int32_t *)(allocation + 4) == 1 && (value = *(int64_t *)(allocation + 8), *(int32_t *)(value + 0x18) == 2) && RtlEqualUnicodeString(value, WD_DLP_UNRECOVERED_ADDRESS4, 0) && *(int16_t *)(*(int64_t *)(allocation + 8) + 0x10) == 2)
        {
            data_pointer = *(uint64_t **)(*(int64_t *)(allocation + 8) + 0x20);
            MpGetProcessContextByIdAndCreationTime(*data_pointer, data_pointer[1], process_context);
        }
    }
    else if (value_2 != -0x3ffffddb)
    {
        if (value_2 != -0x3fffffdd)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x4a, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread(), value_2);
            }
        }
        else
        {
            ExFreePoolWithTag(allocation, 0x7064504d);
            allocation = (int64_t)MpAllocatePoolWithTag(1, values[0], 0x7064504d);
            if (!allocation)
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x4b, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread(), 0xc0000023);
                }
                return;
            }
            value_2 = SeQuerySecurityAttributesToken(input, WD_DLP_UNRECOVERED_ADDRESS4, 1, allocation, values[0], values);
            if (0 <= value_2)
            {
                goto block_1;
            }
        }
    }
    ExFreePoolWithTag(allocation, 0x7064504d);
    return;
}

void MpDlpGetAccessCheckProcessContext(int64_t input, int64_t *input_2)
{
    int32_t value;
    char byte_value;
    char buffer[3];
    int64_t value_2;
    uint64_t *process_context = NULL;
    uint64_t *data_pointer;
    uint64_t *data_pointer_2;
    int64_t process;
    int64_t creation_time;
    uint64_t process_id;
    uint64_t *index;
    uint64_t process_2;
    int64_t *process_context_2;
    uint32_t value_4;
    buffer[0] = 0;
    byte_value = 0;
    value_4 = 0;
    if (!input_2)
    {
        return;
    }
    process_context_2 = (int64_t *)buffer;
    process = PsReferenceImpersonationToken((uint64_t)KeGetCurrentThread(), process_context_2, &byte_value, &value_4);
    value = 0;
    if (process)
    {
        process_context_2 = &value_2;
        value_2 = 0;
        value = MpDlpGetProcessContextFromTokenAttribute(process, process_context_2);
        creation_time = value_2;
        if (0 <= value)
        {
            *input_2 = value_2;
            PsDereferenceImpersonationToken(process);
            if (creation_time)
            {
                return;
            }
        }
        else
        {
            PsDereferenceImpersonationToken(process);
        }
    }
    data_pointer = NULL;
    if (input)
    {
        process = MpGetRequestorProcess(input);
        creation_time = PsGetProcessCreateTimeQuadPart(process);
        process_id = PsGetProcessId(process);
        process = MpProcessTable;
        value = -0x3ffffddb;
        data_pointer = NULL;
        if (process_id)
        {
            KeEnterCriticalRegion();
            ExAcquireResourceSharedLite(process + 8, (uint64_t)((uint64_t)process_context_2) & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
            data_pointer_2 = (uint64_t *)(((uint32_t)(process_id >> 2) & 0x7f) * 0x10ULL + *(int64_t *)(MpProcessTable + 0x180));
            for (index = (uint64_t *)(*data_pointer_2); data_pointer = NULL, value = -0x3ffffddb, index != data_pointer_2; index = (uint64_t *)(*index))
            {
                data_pointer = &index[-1];
                if (process_id == index[2] && creation_time == index[3])
                {
                    WdAtomicAdd32((volatile int32_t *)((int32_t *)(&index[5])), 1);
                    value = 0;
                    process_context = data_pointer;
                    break;
                }
            }

            ExReleaseResourceLite(MpProcessTable + 8);
            KeLeaveCriticalRegion();
        }
    }
    if (value < 0 || !data_pointer)
    {
        process_2 = IoGetCurrentProcess();
        if ((int32_t)MpGetProcessContextByObject(process_2, &process_context) <= -1)
        {
            if (process_context)
            {
                MpReleaseProcessContext(process_context);
            }
            return;
        }
        data_pointer = process_context;
        if (!process_context)
        {
            return;
        }
    }
    *input_2 = (int64_t)data_pointer;
    return;
}

void MpDlpOnFileObjectClose(void *input, WD_LAYOUT_65 *input_2, uint64_t input_3, int32_t input_4, char input_5, uint32_t input_6)
{
    int32_t *atomic_value;
    int32_t value;
    uint64_t value_2;
    int64_t value_3;
    int32_t value_4;
    int64_t value_5;
    uint64_t value_6;
    uint32_t value_7;
    value_7 = (uint32_t)((uint64_t)value_6 >> 0x20);
    value_2 = 0;
    value_3 = 0;
    if (input_2->field_0x0 && input_2->field_0x8)
    {
        if (input && input_4 == 1)
        {
            if (((char *)input)[0xc4])
            {
                (*(WD_ROUTINE)swi(3))();
                return;
            }
            atomic_value = &((int32_t *)input)[0x30];
            value = WdAtomicAdd32((volatile int32_t *)atomic_value, -1);
            if (value + -1 < 0)
            {
                WdUnresolvedAtomicBegin();
                ((uint32_t *)input)[0x30] = 0;
                WdUnresolvedAtomicEnd();
            }
        }
        value_4 = input_2->field_0x0 + 0x42;
        value = MpAsyncCreateNotification(&value_3, value_4);
        value_5 = value_3;
        if (0 <= value)
        {
            *(uint32_t *)(value_3 + 0x10) = 0x13;
            *(int32_t *)(value_3 + 8) = value_4;
            if (input)
            {
                *(uint32_t *)(value_3 + 0x18) = ((uint32_t *)input)[6];
                value_2 = ((uint64_t *)input)[4];
            }
            else
            {
                *(uint32_t *)(value_3 + 0x18) = 0;
            }
            *(uint64_t *)(value_5 + 0x1c) = MpFileTimeFromUlong64(value_2);
            *(uint64_t *)(value_5 + 0x28) = 0x40;
            *(uint32_t *)(value_5 + 0x30) = input_2->field_0x0 + 2;
            *(int32_t *)(value_5 + 0x24) = input_4;
            *(char *)(value_5 + 0x38) = input_5;
            *(uint32_t *)(value_5 + 0x34) = input_6;
            memmove((uint64_t *)(*(int64_t *)(value_5 + 0x28) + value_5), (uint64_t *)input_2->field_0x8, input_2->field_0x0);
            value_7 = 0;
            *(uint16_t *)(*(int64_t *)(value_5 + 0x28) + (uint64_t)(input_2->field_0x0 >> 1) * 2 + value_5) = 0;
            value = MpAsyncSendNotification(value_5, value_4, 0, (*(int64_t *)(MpData + 0x1b0) != 0) + '\x01', NULL);
            if (value < 0 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x46, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)value & 0xffffffffULL);
                value_5 = value_3;
            }
            MpAsyncDereferenceNotification(value_5);
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x45, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)value & 0xffffffffULL);
        }
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x44, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread());
    }
    return;
}

uint64_t MpDlpIsEnabled(int64_t input, WD_LAYOUT_17 *input_2)
{
    int64_t *requestor_process;
    int64_t *thread_process;
    int64_t *requestor_process_2;
    int64_t process_context;
    int64_t value;
    requestor_process = (int64_t *)IoGetCurrentProcess();
    if (!MpDlpData)
    {
        return (uint64_t)requestor_process & 0xffffffffffffff00;
    }
    value = input;
    if ((uint64_t)(input - 1U) <= 1)
    {
        value = 0;
    }
    if (!(*(char *)(MpDlpData + 0x20)) || !(*(uint32_t *)(MpData + 0x360) & 0x400) || !(*(int64_t *)(MpData + 0x140)) && !(*(int64_t *)(MpData + 0x150)))
    {
        return (uint64_t)requestor_process & 0xffffffffffffff00;
    }
    requestor_process_2 = *(int64_t **)(MpData + 0xe8);
    thread_process = (int64_t *)IoThreadToProcess((uint64_t)KeGetCurrentThread());
    if (thread_process == requestor_process_2 || (requestor_process_2 = *(int64_t **)(MpData + 0x100), thread_process = (int64_t *)IoThreadToProcess((uint64_t)KeGetCurrentThread()), thread_process == requestor_process_2))
    {
        requestor_process = thread_process;
        if (input != 1)
        {
            return ((uint64_t)((uint64_t)((uint64_t)requestor_process >> 8)) & 0xffffffffffffffULL) << 8 | (uint64_t)(input == 2) & 0xffULL;
        }
        return (uint64_t)((uint64_t)requestor_process) & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
    }
    requestor_process_2 = requestor_process;
    if (value)
    {
        requestor_process_2 = (int64_t *)MpGetRequestorProcess(value);
        requestor_process = NULL;
        if (!requestor_process_2)
        {
            return (uint64_t)requestor_process & 0xffffffffffffff00;
        }
    }
    requestor_process = __imp_PsInitialSystemProcess;
    if ((int64_t *)(*__imp_PsInitialSystemProcess) == requestor_process_2)
    {
        if (value && (requestor_process = (int64_t *)ExGetPreviousMode(), !(char)requestor_process) && (requestor_process_2 = (int64_t *)(*__imp_PsInitialSystemProcess), requestor_process = (int64_t *)MpGetRequestorProcess(value), requestor_process == requestor_process_2) && *(uint8_t *)(*(int64_t *)(value + 0x10) + 6) & 1)
        {
            requestor_process = *(int64_t **)(*(int64_t *)(value + 0x10) + 0x18);
            if (*(int64_t *)(requestor_process[1] + 0x20) && 2 <= *(int32_t *)(requestor_process[1] + 0x28))
            {
                goto block_1;
            }
        }
        if (input != 2)
        {
            return (uint64_t)requestor_process & 0xffffffffffffff00;
        }
    }
    block_1:
    if (input_2 && input_2->field_0x38 & 0x40000000)
    {
        return (uint64_t)requestor_process & 0xffffffffffffff00;
    }

    if (value)
    {
        process_context = 0;
        requestor_process = (int64_t *)MpDlpGetAccessCheckProcessContext(value, &process_context);
        if (0 <= (int32_t)requestor_process && process_context)
        {
            if (*(uint32_t *)(process_context + 0x38) & 0x40000000)
            {
                requestor_process = (int64_t *)MpReleaseProcessContext(process_context);
                return (uint64_t)requestor_process & 0xffffffffffffff00;
            }
            requestor_process = (int64_t *)MpReleaseProcessContext(process_context);
        }
    }
    return (uint64_t)((uint64_t)requestor_process) & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
}

void MpDlpRegistryCallback(int32_t input, WD_LAYOUT_72 *input_2, int64_t *input_3)
{
    int64_t value;
    uint64_t current_thread;
    char byte_value;
    int32_t value_3;
    uint32_t value_4;
    int64_t source_name;
    int64_t value_5 = 0;
    uint64_t value_6;
    if (input != 0x10 || input_2->field_0x8 < 0 || (value = input_2->field_0x10, (*(uint32_t *)(MpData + 0x360) & 0x2400) != 0x400))
    {
        return;
    }
    value_6 = (uint64_t)((uint64_t)input_3) & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
    byte_value = RtlEqualUnicodeString(WD_DLP_UNRECOVERED_ADDRESS5, *(uint64_t *)(value + 8), value_6);
    if (!byte_value || (current_thread = (uint64_t)KeGetCurrentThread(), source_name = *(int64_t *)(MpData + 0xe8), IoThreadToProcess(current_thread) != source_name && (current_thread = (uint64_t)KeGetCurrentThread(), source_name = *(int64_t *)(MpData + 0x100), IoThreadToProcess(current_thread) != source_name)))
    {
        return;
    }
    source_name = *input_3;
    if (source_name)
    {
        value_5 = source_name;
        block_1:
        if (!RtlCompareUnicodeString(source_name, WD_DLP_UNRECOVERED_ADDRESS6, (uint64_t)value_6 & 0xffffffffffffff00 | (uint64_t)1 & 0xff))
        {
            if (*(*(uint8_t **)(value + 0x18)) & 1)
            {
                value_4 = *(uint32_t *)(MpDlpData + 0x28) | 1;
            }
            else
            {
                value_4 = *(uint32_t *)(MpDlpData + 0x28) & 0xfffffffe;
            }
            *(uint32_t *)(MpDlpData + 0x28) = value_4;
            MpDlpUpdateEnlightmentForRunningProcesses();
        }
    }
    else
    {
        value_3 = MpRegpGetKeyName(input_2->field_0x0, &value_5);
        if (0 <= value_3)
        {
            source_name = value_5;
            goto block_1;
        }
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x4c, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread(), value_3);
        }
    }
    value = value_5;
    if (value_5)
    {
        if (*input_3)
        {
            if (*input_3 != value_5)
            {
                if (*(int64_t *)(MpRegData + 0x28))
                {
                    (*__guard_dispatch_icall_fptr)(value_5);
                }
                else
                {
                    if (*(int64_t *)(value_5 + 0x10))
                    {
                        ExFreePoolWithTag(*(int64_t *)(value_5 + 0x10), 0x4b72504d);
                    }
                    ExFreeToPagedLookasideList((void *)(MpRegData + 0x400), value);
                }
            }
        }
        else
        {
            *input_3 = value_5;
        }
    }
    return;
}

void MpDlpSetProcessEntryFlags(int64_t data, void *input, WD_LAYOUT_17 *input_2, void *input_3, char *input_4, uint32_t input_5, uint32_t input_6)
{
    uint64_t instance;
    int64_t *data_pointer;
    void *handle_context[2];
    char buffer[8];
    char *bytes;
    char buffer_2[24];
    char buffer_3[16];
    char buffer_4[16];
    char buffer_5[16];
    char *file_name;
    int64_t *allocation;
    uint32_t *data_pointer_2;
    bool enabled;
    uint64_t value;
    char *bytes_2;
    uint32_t value_2;
    void *data_pointer_3;
    uint32_t value_3;
    uint32_t value_4;
    uint32_t value_5;
    uint32_t value_6;
    char *bytes_3;
    int32_t value_8;
    void *data_pointer_4;
    uint64_t *index;
    uint64_t file_object;
    char buffer_7[8];
    bytes_3 = input_4;
    value_2 = (uint32_t)((uint64_t)value >> 0x20);
    bytes = input_4;
    data_pointer = NULL;
    enabled = 0;
    data_pointer_3 = input_3;
    handle_context[0] = input_3;
    memset(buffer_7, 0, (char *)0x78);
    buffer[0] = 0;
    if (!input_6 || !input || !input_2)
    {
        return;
    }
    file_name = bytes_3;
    if (MpDlpIsEnabled(data, input_2))
    {
        if (handle_context[0] || (file_object = ((uint64_t *)input)[4], instance = ((uint64_t *)input)[3], 0 <= (int32_t)FltGetStreamHandleContext(instance, file_object, handle_context)))
        {
            block_1:
            enabled = *(char *)(*(int64_t *)(data + 0x10) + 4) != '\0';

            data_pointer_4 = handle_context[0];
            if (enabled)
            {
                FltAcquirePushLockExclusive((int64_t)handle_context[0] + 0x40);
                data_pointer_4 = handle_context[0];
            }
            for (index = ((uint64_t **)data_pointer_4)[6]; index != &((uint64_t *)data_pointer_4)[6]; index = (uint64_t *)(*index))
            {
                if ((WD_LAYOUT_17 *)index[2] == input_2)
                {
                    *(uint32_t *)(&index[5]) = *(uint32_t *)(&index[5]) | input_6;
                    goto block_4;
                }
            }

            if (!bytes_3)
            {
                if ('\0' <= (char)((uint32_t *)data_pointer_4)[10] || (data_pointer_2 = ((uint32_t **)data_pointer_4)[10], !data_pointer_2))
                {
                    value_8 = MpQueryFileName(data, input_5, &bytes, buffer);
                    file_name = bytes;
                    if (value_8 <= -1)
                    {
                        block_2:
                        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                        {
                            goto block_4;
                        }

                        file_object = 0x5b;
                        goto block_3;
                    }
                }
                else
                {
                    value_3 = *data_pointer_2;
                    value_4 = data_pointer_2[1];
                    value_5 = data_pointer_2[2];
                    value_6 = data_pointer_2[3];
                    bytes_2 = buffer_4;
                    value_8 = MpParseFileName(((uint64_t *)data_pointer_4)[10], NULL, buffer_5, buffer_3, bytes_2, buffer_2);
                    value_2 = (uint32_t)((uint64_t)bytes_2 >> 0x20);
                    if (value_8 < 0)
                    {
                        goto block_2;
                    }
                    file_name = buffer_7;
                }
            }
            value_8 = MpCreateDlpProcessEntry(input_2, &file_name[8], &data_pointer);
            if (0 <= value_8)
            {
                *(uint32_t *)(&data_pointer[5]) = *(uint32_t *)(&data_pointer[5]) | input_6;
                allocation = ((int64_t **)handle_context[0])[7];
                if (*allocation != (int64_t)handle_context[0] + 0x30)
                {
                    (*(WD_ROUTINE)swi(0x29))(3);
                }
                *data_pointer = (int64_t)handle_context[0] + 0x30;
                data_pointer[1] = (int64_t)allocation;
                *allocation = (int64_t)data_pointer;
                ((int64_t **)handle_context[0])[7] = data_pointer;
                allocation = NULL;
            }
            else
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x5c, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_2 & 0xffffffffULL) << 32 | (uint64_t)value_8 & 0xffffffffULL);
                }
                allocation = data_pointer;
            }
            if (allocation)
            {
                if ((void *)allocation[2])
                {
                    MpReleaseProcessContext((void *)allocation[2]);
                    allocation[2] = 0;
                }
                if (allocation[4])
                {
                    ExFreePoolWithTag(allocation[4], 0x6e66504d);
                    allocation[4] = 0;
                }
                ExFreePoolWithTag(allocation, 0x6670504d);
            }
        }
        else
        {
            value_8 = MpCreateHandleContext(input, handle_context, NULL);
            if (0 <= value_8)
            {
                if (!(*(char *)(*(int64_t *)(data + 0x10) + 4)))
                {
                    ((uint32_t *)handle_context[0])[0x16] = *(uint32_t *)(*(int64_t *)(*(int64_t *)(data + 0x10) + 0x18) + 0x10);
                }
                goto block_1;
            }
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                goto block_4;
            }
            file_object = 0x5a;
            block_3:
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), file_object, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_2 & 0xffffffffULL) << 32 | (uint64_t)value_8 & 0xffffffffULL);
        }
    }
    block_4:
    if (file_name && file_name != buffer_7 && file_name != bytes_3)
    {
        FltReleaseFileNameInformation(file_name);
    }

    if (enabled)
    {
        FltReleasePushLock((int64_t)handle_context[0] + 0x40);
    }
    if (handle_context[0] && handle_context[0] != data_pointer_3)
    {
        FltReleaseContext();
    }
    return;
}

void MpDlpSetEaOnDestination(WD_LAYOUT_85 *input, void *input_2, WD_LAYOUT_86 *information_buffer, void *input_3, int16_t *input_4, char input_5, char input_6)
{
    int64_t value;
    int64_t value_2;
    int16_t *wide_text;
    void *handle_context;
    int16_t *wide_text_2;
    int16_t *wide_text_3;
    int64_t value_3;
    int16_t *wide_text_4;
    char byte_value;
    int16_t *string;
    int64_t value_4;
    int16_t *file_name;
    uint64_t value_5;
    uint32_t value_6;
    uint64_t file_object;
    uint64_t instance;
    uint32_t value_8;
    uint32_t value_9;
    int32_t status;
    int64_t value_10;
    int64_t value_11;
    wide_text = input_4;
    value_6 = (uint32_t)((uint64_t)value_5 >> 0x20);
    wide_text_3 = NULL;
    status = 0;
    wide_text_2 = NULL;
    string = NULL;
    if (*(int64_t *)(MpData + 0xb8) && *(int64_t *)(MpData + 0x68))
    {
        wide_text_4 = (int16_t *)((uint64_t)(*(uint32_t *)(MpData + 0x1024)));
    }
    else
    {
        wide_text_4 = wide_text_3;
    }
    file_name = wide_text_3;
    handle_context = input_3;
    if ((uint64_t)wide_text_4 & 1)
    {
        if (!input_3)
        {
            status = FltGetStreamHandleContext(((uint64_t *)input_2)[3], ((uint64_t *)input_2)[4], &handle_context);
        }
        file_name = string;
        if (status <= -1 || !handle_context || !(((uint32_t *)handle_context)[10] & 0x1000))
        {
            goto block_2;
        }
        WdUnresolvedAtomicBegin();
        file_name = *(int16_t **)((uint64_t *)((int64_t)handle_context + 0x70));
        *(uint64_t *)((int64_t)handle_context + 0x70) = 0;
        WdUnresolvedAtomicEnd();
        if (!file_name)
        {
            goto block_2;
        }
        WdAtomicOr32((volatile int32_t *)((uint32_t *)((int64_t)handle_context + 0x28)), 0x400);
        wide_text = &file_name[4];
    }
    else
    {
        block_2:
        if (input_6)
        {
            string = wide_text_3;
            if (!input_5 || (string = wide_text_2, !wide_text) || !(*wide_text))
            {
                goto block_3;
            }
        }
        else
        {
            if (!information_buffer->field_0x0)
            {
                string = wide_text_2;
                if ((int32_t)MpQueryNetworkOpenInformation(input_2, information_buffer) < 0)
                {
                    goto block_3;
                }
            }
            byte_value = 0;
            if (input)
            {
                value = information_buffer->field_0x10;
                value_4 = information_buffer->field_0x28;
                value_10 = PsGetCurrentThreadId();
                string = NULL;
                if (!input->field_0x108)
                {
                    goto block_3;
                }
                FltAcquirePushLockExclusive(&input[1]);
                wide_text_2 = wide_text_3;
                if (input->field_0x108)
                {
                    string = wide_text_3;
                    value_3 = input->field_0x108;
                    value_8 = WdDataStorage10;
                    block_1:
                    value_9 = value_8 - 1;

                    if (value_8)
                    {
                        wide_text_4 = (int16_t *)(value_9 * 0x38ULL + value_3);
                        value_2 = value_3;
                        value_8 = value_9;
                        if (((uint8_t)(*(uint32_t *)wide_text_4) & 0xf) == 0xf)
                        {
                            if (*(int64_t *)(&wide_text_4[4]) != value_10)
                            {
                                goto block_4;
                            }
                            value_11 = value_3;
                            if (value_4)
                            {
                                goto block_6;
                            }
                            goto block_5;
                        }
                        goto block_4;
                    }
                    if (wide_text_2)
                    {
                        if (!IsThisCallBeingThrottled())
                        {
                            MpSendCopyHintTelemetry();
                        }
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                        {
                            value_6 = (uint32_t)((uint64_t)(*(uint64_t *)(&wide_text_2[0xc])) >> 0x20);
                            WPP_SF_qIZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18));
                        }
                        wide_text_3 = *(int16_t **)(&wide_text_2[8]);
                        byte_value = *(char *)(&wide_text_2[0x18]);
                        wide_text_2[0] = 0;
                        wide_text_2[1] = 0;
                        wide_text_2[2] = 0;
                        wide_text_2[3] = 0;
                        wide_text_2[4] = 0;
                        wide_text_2[5] = 0;
                        wide_text_2[6] = 0;
                        wide_text_2[7] = 0;
                        wide_text_2[8] = 0;
                        wide_text_2[9] = 0;
                        wide_text_2[10] = 0;
                        wide_text_2[0xb] = 0;
                        wide_text_2[0xc] = 0;
                        wide_text_2[0xd] = 0;
                        wide_text_2[0xe] = 0;
                        wide_text_2[0xf] = 0;
                        wide_text_2[0x10] = 0;
                        wide_text_2[0x11] = 0;
                        wide_text_2[0x12] = 0;
                        wide_text_2[0x13] = 0;
                        wide_text_2[0x14] = 0;
                        wide_text_2[0x15] = 0;
                        wide_text_2[0x16] = 0;
                        wide_text_2[0x17] = 0;
                        wide_text_2[0x18] = 0;
                        wide_text_2[0x19] = 0;
                        wide_text_2[0x1a] = 0;
                        wide_text_2[0x1b] = 0;
                        WdUnresolvedAtomicBegin();
                        WdCopycacheStorage2 -= 1;
                        WdUnresolvedAtomicEnd();
                        WdUnresolvedAtomicBegin();
                        WdCopycacheStorage4 += 1;
                        WdUnresolvedAtomicEnd();
                    }
                }
                FltReleasePushLock(&input[1]);
                string = wide_text_3;
                if (!wide_text_2)
                {
                    goto block_3;
                }
            }
            string = wide_text_3;
            if (!byte_value)
            {
                goto block_3;
            }
        }

        if (!handle_context && (file_object = ((uint64_t *)input_2)[4], instance = ((uint64_t *)input_2)[3], (int32_t)FltGetStreamHandleContext(instance, file_object, &handle_context) <= -1) && (status = MpCreateHandleContext(input_2, &handle_context, NULL), status <= -1 && (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)))
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xbc, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_6 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
        }
        string = wide_text_3;
        if (!handle_context)
        {
            goto block_3;
        }
        WdAtomicOr32((volatile int32_t *)((uint32_t *)((int64_t)handle_context + 0x28)), 0x400);
        if (wide_text_3)
        {
            wide_text = wide_text_3;
        }
    }
    MpDlpCopyPolicyToDestination(input_2, wide_text);
    string = wide_text_3;
    block_3:
    if (file_name)
    {
        FltReleaseFileNameInformation(file_name);
    }

    if (string)
    {
        MpFreeString(string);
    }
    if (handle_context)
    {
        WdAtomicAnd32((volatile int32_t *)((uint32_t *)((int64_t)handle_context + 0x28)), 0xfffffbff);
        if (handle_context != input_3)
        {
            FltReleaseContext();
        }
    }
    return;
    block_6:
    if (*(int64_t *)(&wide_text_4[0xc]) == value_4)
    {
        value_11 = input->field_0x108;
        block_5:
        if (!value || (value_2 = value_11, *(int64_t *)(&wide_text_4[0x10]) == value))
        {
            if (string < *(int16_t **)(&wide_text_4[0x14]))
            {
                string = *(int16_t **)(&wide_text_4[0x14]);
                wide_text_2 = wide_text_4;
            }
            block_4:
            value_3 = value_2;
        }
    }

    goto block_1;
}

uint64_t MpDlpShouldReportRename(uint32_t input)
{
    uint64_t value = 0;
    uint64_t value_2;
    if (MpDlpData)
    {
        value_2 = (uint64_t)((uint64_t)MpDlpData >> 8);
        value = ((uint64_t)value_2 & 0xffffffffffffffULL) << 8 | (uint64_t)(*(char *)(MpDlpData + 0x20)) & 0xffULL;
        if (*(char *)(MpDlpData + 0x20))
        {
            value = ((uint64_t)value_2 & 0xffffffffffffffULL) << 8 | (uint64_t)1 & 0xffULL;
            if (*(uint32_t *)(MpDlpData + 0x110) & 1)
            {
                return value;
            }
            if (*(uint32_t *)(MpDlpData + 0x110) & 2)
            {
                return ((uint64_t)value_2 & 0xffffffffffffffULL) << 8 | (uint64_t)((input & 0x810) != 0) & 0xffULL;
            }
        }
    }
    return value & 0xffffffffffffff00;
}

void MpDlpQueryEaEx(WD_LAYOUT_4 *input, void *input_2, WD_LAYOUT_32 *input_3, char *input_4)
{
    int32_t value;
    int64_t *allocation;
    int32_t values[2];
    char buffer_2[4];
    uint32_t value_3;
    uint64_t value_4;
    uint32_t value_5;
    value_5 = (uint32_t)((uint64_t)value_4 >> 0x20);
    if (input_2 && input_3 && input_4)
    {
        values[0] = 0;
        FltGetFileSystemType(((uint64_t *)input_2)[3], values);
        if (values[0] == 0xd)
        {
            buffer_2[0] = '\0';
            if (0 <= (int32_t)MpIsLoopbackByObj(input_2, 0, buffer_2) && !buffer_2[0] && *(char *)(MpDlpData + 0xf1))
            {
                if (*(int64_t *)(MpData + 0xa0))
                {
                    *input_4 = '\0';
                    value_3 = 0x4000;
                    input_3->field_0x0 = 0;
                    input_3->field_0x8 = 0;
                    allocation = MpAllocatePoolWithTag(1, (char *)0x4000, 0x6165504d);
                    if (allocation)
                    {
                        value_5 = 0;
                        value = (*__guard_dispatch_icall_fptr)(((uint64_t *)input_2)[4], allocation, value_3, 0, 0, 0, 0, 1, &value_3);
                        if (0 <= value)
                        {
                            input_3->field_0x0 = value_3;
                            input_3->field_0x8 = allocation;
                            *input_4 = '\x01';
                        }
                        else
                        {
                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                            {
                                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x57, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)value & 0xffffffffULL);
                            }
                            ExFreePoolWithTag(allocation, 0x6165504d);
                        }
                    }
                    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x56, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INSUFFICIENT_RESOURCES & 0xffffffffULL);
                    }
                }
                return;
            }
        }
        MpDlpQueryEa(input, ((int64_t *)input_2)[3], ((int64_t *)input_2)[4], input_3, input_4);
    }
    return;
}

void MpDlpQueryEa(WD_LAYOUT_4 *input, int64_t instance, int64_t file_object, WD_LAYOUT_32 *input_2, char *input_3)
{
    uint32_t value;
    uint32_t information_buffer;
    uint32_t value_2;
    uint32_t value_4;
    char *bytes;
    int32_t value_5;
    uint32_t *data_pointer;
    int64_t *allocation;
    uint64_t value_6;
    uint32_t allocation_size;
    bytes = input_3;
    allocation = NULL;
    allocation_size = 0;
    information_buffer = 0;
    if (instance && file_object && input_2 && input_3)
    {
        *input_3 = '\0';
        input_2->field_0x0 = 0;
        input_2->field_0x8 = 0;
        if (*(uint32_t *)(MpData + 0x360) & 0x800 && input && !(*(char *)(input->field_0x10 + 4)))
        {
            data_pointer = (uint32_t *)(*__guard_dispatch_icall_fptr)(*(uint64_t *)(MpData + 0x10), input, 4, &allocation_size);
            if (data_pointer)
            {
                value_2 = data_pointer[1];
                value = data_pointer[2];
                value_4 = data_pointer[3];
                input_2->field_0x0 = *data_pointer;
                input_2->field_0x4 = value_2;
                *(uint32_t *)(&input_2->field_0x8) = value;
                ((uint32_t *)(&input_2->field_0x8))[1] = value_4;
            }
            *bytes = '\0';
        }
        else
        {
            value_2 = 0;
            value_5 = FltQueryInformationFile(instance, file_object, &information_buffer, 4, 7, 0);
            if (0 <= value_5)
            {
                if (information_buffer)
                {
                    allocation_size = information_buffer;
                    do
                    {
                        if (allocation)
                        {
                            ExFreePoolWithTag(allocation, 0x6165504d);
                            if (0x100000000 <= allocation_size * 2ULL)
                            {
                                allocation_size = 0xffffffff;
                                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                                {
                                    return;
                                }
                                value_6 = 0x53;
                                value_5 = -0x3fffff6b;
                                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_6, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread(), value_5);
                                return;
                            }
                            allocation_size = (uint32_t)(allocation_size * 2ULL);
                        }
                        allocation = MpAllocatePoolWithTag(1, allocation_size, 0x6165504d);
                        if (!allocation)
                        {
                            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                            {
                                return;
                            }
                            value_6 = 0x54;
                            value_5 = -0x3fffff66;
                            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_6, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread(), value_5);
                            return;
                        }
                        value_2 &= 0xffffff00;
                        value_5 = FltQueryEaFile(instance, file_object, allocation, allocation_size, value_2, 0, 0, 0, 1, &allocation_size);
                    }
                    while (value_5 == -0x7ffffffb || value_5 == -0x3fffffdd);
                    if (0 <= value_5)
                    {
                        input_2->field_0x0 = allocation_size;
                        input_2->field_0x8 = allocation;
                        *bytes = '\x01';
                    }
                    else
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x55, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread(), value_5);
                        }
                        ExFreePoolWithTag(allocation, 0x6165504d);
                    }
                }
                else
                {
                    input_2->field_0x0 = 0;
                    input_2->field_0x8 = 0;
                }
            }
            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                value_6 = 0x52;
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_6, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread(), value_5);
            }
        }
    }
    return;
}

void MpDlpAtomicCheckFileAndOperationAccess(WD_LAYOUT_4 *data, void *input, void *input_2, uint32_t input_3, uint64_t input_4, void *input_5, uint32_t *input_6)
{
    uint64_t *data_pointer;
    uint32_t allocation_size;
    uint32_t value;
    uint64_t value_2;
    int64_t value_3;
    uint32_t *data_pointer_2;
    uint32_t *data_pointer_3;
    char buffer_2[4];
    uint64_t value_4;
    int32_t values[2];
    uint16_t value_5;
    uint32_t *data_pointer_4;
    uint64_t value_6;
    uint32_t values_2[2];
    uint32_t *data_pointer_5;
    uint32_t *data_pointer_6;
    uint32_t *file_name;
    uint64_t current_thread;
    uint32_t value_7;
    char *bytes;
    uint32_t value_8;
    uint32_t value_9;
    uint32_t value_10;
    void *data_pointer_7;
    void *data_pointer_8;
    uint32_t *data_pointer_9;
    uint32_t *data_pointer_10;
    uint64_t *data_pointer_11;
    uint32_t value_12;
    uint32_t value_13;
    void *data_pointer_12;
    uint32_t *allocation;
    int32_t value_14;
    uint32_t *allocation_2 = NULL;
    data_pointer_9 = input_6;
    values_2[0] = 0;
    value_4 = 0;
    data_pointer_10 = NULL;
    data_pointer_2 = NULL;
    data_pointer_4 = NULL;
    data_pointer_6 = NULL;
    buffer_2[1] = 0;
    value_6 = 0;
    data_pointer_11 = NULL;
    buffer_2[0] = '\0';
    value_10 = input_3;
    data_pointer_7 = input;
    data_pointer_8 = input_2;
    if (!MpDlpIsEnabled(0, input_2))
    {
        return;
    }
    bytes = buffer_2;
    value_14 = MpDlpQueryEa(data, ((int64_t *)input)[3], ((int64_t *)input)[4], &value_4, bytes);
    allocation = data_pointer_10;
    value_9 = (uint32_t)((uint64_t)bytes >> 0x20);
    data_pointer_3 = data_pointer_2;
    if (0 <= value_14)
    {
        value_7 = (uint32_t)value_4;
        file_name = data_pointer_6;
        if (!(uint32_t)value_4)
        {
            goto block_3;
        }
        values[0] = 0;
        file_name = allocation_2;
        if (data_pointer_10)
        {
            value_14 = IoCheckEaBufferValidity(data_pointer_10, value_4 & 0xffffffff, values);
            value_9 = (uint32_t)((uint64_t)bytes >> 0x20);
            if (0 <= value_14)
            {
                data_pointer_5 = allocation;
                while (true)
                {
                    data_pointer_3 = allocation_2;
                    file_name = allocation_2;
                    if (0xc > value_7)
                    {
                        break;
                    }
                    value_14 = _stricmp(&data_pointer_5[2], "$Kernel.SEC.EndpointDlp");
                    value_9 = (uint32_t)((uint64_t)bytes >> 0x20);
                    if (!value_14)
                    {
                        data_pointer_3 = data_pointer_2;
                        file_name = data_pointer_6;
                        if (!data_pointer_5)
                        {
                            break;
                        }
                        value_14 = MpQueryFileName(data, value_10, &data_pointer_4, &buffer_2[1]);
                        if (0 <= value_14)
                        {
                            value_14 = FltParseFileName(((uint64_t *)input_2)[0x10], 0, 0, &value_6);
                            file_name = data_pointer_4;
                            data_pointer_12 = input_5;
                            if (0 <= value_14)
                            {
                                value_7 = *(uint16_t *)(&data_pointer_4[2]) + 0xa6;
                                if (0xa4 <= value_7)
                                {
                                    allocation_size = (uint16_t)value_6 + 2 + value_7;
                                    if (allocation_size < value_7)
                                    {
                                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                                        {
                                            if (*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                            {
                                                value = 0x15;
                                                goto block_1;
                                            }
                                        }
                                        break;
                                    }
                                    value_7 = ((uint16_t *)data_pointer_5)[3] + allocation_size;
                                    if (value_7 < allocation_size)
                                    {
                                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                                        {
                                            if (*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                            {
                                                value = 0x16;
                                                goto block_1;
                                            }
                                        }
                                        break;
                                    }
                                    allocation_size = value_7;
                                    if (((char *)input_5)[0x18] && (allocation_size = value_7 + 0x84, allocation_size < value_7))
                                    {
                                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                                        {
                                            if (*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                            {
                                                value = 0x17;
                                                goto block_1;
                                            }
                                        }
                                        break;
                                    }
                                    allocation_2 = (uint32_t *)MpAllocatePoolWithTag(1, allocation_size, 0x6c64504d);
                                    data_pointer_3 = allocation_2;
                                    if (allocation_2)
                                    {
                                        *allocation_2 = 0x600a3;
                                        allocation_2[1] = allocation_size;
                                        MpGetPriorityInfo(data, ((uint64_t *)data_pointer_7)[4], (WD_LAYOUT_26 *)(&allocation_2[2]));
                                        allocation_2[6] = 1;
                                        allocation_2[7] = 1;
                                        allocation_2[0x18] = ((uint32_t *)data_pointer_8)[6];
                                        value_2 = ((uint64_t *)data_pointer_8)[4];
                                        *(uint64_t *)(&allocation_2[8]) = MpFileTimeFromUlong64(value_2);
                                        MpQuerySessionId();
                                        value = value_10;
                                        allocation_2[0x25] = value_10;
                                        *(uint64_t *)(&allocation_2[10]) = 0xa4;
                                        memmove(&allocation_2[0x29], data_pointer_11, value_6 & 0xffff);
                                        *(uint16_t *)(*(int64_t *)(&allocation_2[10]) + (uint64_t)((uint16_t)value_6 >> 1) * 2 + (int64_t)allocation_2) = 0;
                                        allocation_2[0x21] = (uint32_t)((uint16_t)value_6);
                                        value_3 = *(int64_t *)(&allocation_2[10]) + (value_6 & 0xffff) + 2;
                                        *(int64_t *)(&allocation_2[0xc]) = value_3;
                                        memmove((uint64_t *)((int64_t)allocation_2 + value_3), *(uint64_t **)(&file_name[4]), *(uint16_t *)(&file_name[2]));
                                        *(uint16_t *)(*(int64_t *)(&allocation_2[0xc]) + (uint64_t)(*(uint16_t *)(&file_name[2]) >> 1) * 2 + (int64_t)allocation_2) = 0;
                                        value_5 = *(uint16_t *)(&file_name[2]);
                                        allocation_2[0x22] = (uint32_t)value_5;
                                        value_3 = *(int64_t *)(&allocation_2[0xc]) + value_5 + 2ULL;
                                        *(int64_t *)(&allocation_2[0x10]) = value_3;
                                        memmove((uint64_t *)((int64_t)allocation_2 + value_3), (uint64_t *)(((uint8_t *)data_pointer_5)[5] + 9ULL + (int64_t)data_pointer_5), ((uint16_t *)data_pointer_5)[3]);
                                        allocation_2[0x24] = (uint32_t)((uint16_t *)data_pointer_5)[3];
                                        if (((char *)data_pointer_12)[0x18])
                                        {
                                            *(uint64_t *)(&allocation_2[0x12]) = (uint64_t)((uint32_t)allocation_2[0x24]) + *(int64_t *)(&allocation_2[0x10]);
                                            value_2 = ((uint64_t *)data_pointer_12)[5];
                                            data_pointer = (uint64_t *)((uint64_t)((uint32_t)allocation_2[0x24]) + *(int64_t *)(&allocation_2[0x10]) + (int64_t)allocation_2);
                                            *data_pointer = ((uint64_t *)data_pointer_12)[4];
                                            data_pointer[1] = value_2;
                                            value_2 = ((uint64_t *)data_pointer_12)[7];
                                            data_pointer[2] = ((uint64_t *)data_pointer_12)[6];
                                            data_pointer[3] = value_2;
                                            value_2 = ((uint64_t *)data_pointer_12)[9];
                                            data_pointer[4] = ((uint64_t *)data_pointer_12)[8];
                                            data_pointer[5] = value_2;
                                            value_2 = ((uint64_t *)data_pointer_12)[0xb];
                                            data_pointer[6] = ((uint64_t *)data_pointer_12)[10];
                                            data_pointer[7] = value_2;
                                            value_2 = ((uint64_t *)data_pointer_12)[0xd];
                                            data_pointer[8] = ((uint64_t *)data_pointer_12)[0xc];
                                            data_pointer[9] = value_2;
                                            value_2 = ((uint64_t *)data_pointer_12)[0xf];
                                            data_pointer[10] = ((uint64_t *)data_pointer_12)[0xe];
                                            data_pointer[0xb] = value_2;
                                            value_2 = ((uint64_t *)data_pointer_12)[0x11];
                                            data_pointer[0xc] = ((uint64_t *)data_pointer_12)[0x10];
                                            data_pointer[0xd] = value_2;
                                            value_8 = ((uint32_t *)data_pointer_12)[0x25];
                                            value_12 = ((uint32_t *)data_pointer_12)[0x26];
                                            value_13 = ((uint32_t *)data_pointer_12)[0x27];
                                            *(uint32_t *)(&data_pointer[0xe]) = ((uint32_t *)data_pointer_12)[0x24];
                                            ((uint32_t *)data_pointer)[0x1d] = value_8;
                                            *(uint32_t *)(&data_pointer[0xf]) = value_12;
                                            ((uint32_t *)data_pointer)[0x1f] = value_13;
                                            *(uint16_t *)(&data_pointer[0x10]) = ((uint16_t *)data_pointer_12)[0x50];
                                            *(uint16_t *)((int64_t)allocation_2 + *(int64_t *)(&allocation_2[0x12]) + 0x82) = 0;
                                            allocation_2[0x26] = 0x82;
                                        }
                                        value_14 = MpDlpQueryService(value, allocation_2, values_2, data_pointer_9);
                                        if (value_14 <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                        {
                                            value_2 = 0x19;
                                            goto block_2;
                                        }
                                        break;
                                    }
                                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                                    {
                                        break;
                                    }
                                    value = 0x18;
                                    value_2 = ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INSUFFICIENT_RESOURCES & 0xffffffffULL;
                                }
                                else
                                {
                                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                                    {
                                        break;
                                    }
                                    if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                                    {
                                        break;
                                    }
                                    value = 0x14;
                                    block_1:
                                    value_2 = ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INTEGER_OVERFLOW & 0xffffffffULL;
                                }
                                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread(), value_2);
                                data_pointer_3 = allocation_2;
                                break;
                            }
                            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                            {
                                break;
                            }
                            value_2 = 0x13;
                        }
                        else
                        {
                            file_name = data_pointer_4;
                            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                            {
                                break;
                            }
                            value_2 = 0x12;
                        }
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)value_14 & 0xffffffffULL);
                        file_name = data_pointer_4;
                        break;
                    }
                    allocation_size = *data_pointer_5;
                    data_pointer_3 = data_pointer_2;
                    file_name = data_pointer_6;
                    if (!allocation_size)
                    {
                        break;
                    }
                    data_pointer_5 = (uint32_t *)((int64_t)data_pointer_5 + (uint64_t)allocation_size);
                    value_7 -= allocation_size;
                }
            }
            else
            {
                file_name = data_pointer_6;
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    current_thread = (uint64_t)KeGetCurrentThread();
                    value_2 = 0x6c;
                    file_name = allocation_2;
                    value_14 = values[0];
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), current_thread, ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)value_14 & 0xffffffffULL);
                    data_pointer_3 = allocation_2;
                }
            }
            goto block_3;
        }
    }
    else
    {
        data_pointer_3 = allocation_2;
        file_name = allocation_2;
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
        {
            data_pointer_3 = data_pointer_2;
            file_name = data_pointer_6;
            if (*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                value_2 = 0x11;
                file_name = allocation_2;
                block_2:
                current_thread = (uint64_t)KeGetCurrentThread();

                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), current_thread, ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)value_14 & 0xffffffffULL);
                data_pointer_3 = allocation_2;
            }
        }
        block_3:
        allocation_2 = data_pointer_3;

        if (allocation && buffer_2[0])
        {
            ExFreePoolWithTag(allocation, 0x6165504d);
        }
    }
    if (allocation_2)
    {
        ExFreePoolWithTag(allocation_2, 0x6c64504d);
    }
    if (file_name)
    {
        FltReleaseFileNameInformation(file_name);
    }
    return;
}

void MpDlpQueryService(uint32_t input, void *input_2, uint32_t *input_3, uint32_t *input_4)
{
    int64_t value;
    uint32_t values[2];
    uint64_t value_2;
    uint8_t byte_value;
    uint64_t provider;
    uint64_t value_3;
    uint64_t *data_pointer;
    uint32_t value_4;
    uint64_t value_5;
    uint32_t *data_pointer_2;
    int32_t status;
    uint32_t value_6;
    uint64_t value_7;
    uint32_t value_8;
    uint64_t value_9;
    uint64_t value_10;
    uint64_t value_11;
    uint64_t value_12;
    uint32_t value_13;
    int64_t *data_pointer_3;
    int64_t *data_pointer_4;
    uint64_t event_id;
    uint32_t value_15;
    int64_t *data_pointer_5;
    int64_t value_16;
    value_4 = (uint32_t)((uint64_t)value_3 >> 0x20);
    value_6 = (uint32_t)((uint64_t)value_5 >> 0x20);
    value_8 = (uint32_t)((uint64_t)value_7 >> 0x20);
    values[0] = 0x2c;
    value_12 = 0;
    value_13 = 0;
    *input_3 = 0;
    provider = (uint64_t)((uint64_t)input_3) & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
    value_15 = 1;
    data_pointer_4 = (int64_t *)0x7530;
    value_2 = 0;
    value_9 = 0;
    value_10 = 0;
    value_11 = 0;
    byte_value = 1;
    if ((int32_t *)((int64_t)input_2 + 8))
    {
        data_pointer_5 = (int64_t *)(MpData + 0x150);
        value = *data_pointer_5;
        if (value)
        {
            block_1:
            if (!(*(char *)(MpData + 0xd0)) && !(*(char *)(MpDlpData + 0x10d)))
            {
                if (input & 0x10 && (*(int64_t *)(MpData + 0x180) || *(int64_t *)(MpData + 400)))
                {
                    data_pointer_5 = (int64_t *)(MpData + 400);
                    if (!(*data_pointer_5) || !value)
                    {
                        data_pointer_5 = (int64_t *)(MpData + 0x180);
                        byte_value = 0;
                    }
                    value_15 = 2;
                    data_pointer_4 = (int64_t *)0xea60;
                }
                else if (*(int32_t *)((int64_t)input_2 + 8) <= 1)
                {
                    data_pointer_5 = (int64_t *)(MpData + 0x170);
                    if (!(*data_pointer_5) || !value)
                    {
                        data_pointer_5 = (int64_t *)(MpData + 0x160);
                        byte_value = 0;
                    }
                    value_15 = 3;
                    data_pointer_4 = (int64_t *)0xea60;
                }
                data_pointer_3 = NULL;
                if (!(*(char *)(MpData + 0x9a0)))
                {
                    data_pointer_3 = data_pointer_4;
                }
                value_16 = (int64_t)data_pointer_3 * -10000;
                KeEnterCriticalRegion();
                data_pointer_4 = &value_16;
                if (!value_16)
                {
                    data_pointer_4 = NULL;
                }
                data_pointer_2 = values;
                data_pointer = &value_2;
                status = FltSendMessage(*(uint64_t *)(MpData + 0x10), data_pointer_5, input_2, ((uint32_t *)input_2)[1], data_pointer, data_pointer_2, data_pointer_4);
                KeLeaveCriticalRegion();
                value_8 = (uint32_t)((uint64_t)data_pointer_4 >> 0x20);
                value_4 = (uint32_t)((uint64_t)data_pointer >> 0x20);
                value_6 = (uint32_t)((uint64_t)data_pointer_2 >> 0x20);
                if (status != 0x102)
                {
                    if (0 <= status)
                    {
                        if (0x2c <= values[0] && 0x2c <= WdLoadField(&value_2, 2, 2))
                        {
                            if ((uint8_t)value_2 != 0xa3)
                            {
                                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                {
                                    WPP_SF_qdddd(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x41, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)((uint32_t)((uint8_t)value_2)) & 0xffffffffULL, ((uint64_t)value_6 & 0xffffffffULL) << 32 | (uint64_t)((uint32_t)WdLoadField(&value_2, 1, 1)) & 0xffffffffULL, ((uint64_t)value_8 & 0xffffffffULL) << 32 | (uint64_t)0xa3 & 0xffffffffULL, 0);
                                }
                            }
                            else
                            {
                                if (WdLoadField(&value_2, 1, 1) && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                                {
                                    data_pointer_2 = (uint32_t *)(((uint64_t)value_6 & 0xffffffffULL) << 32 | (uint64_t)((uint32_t)WdLoadField(&value_2, 1, 1)) & 0xffffffffULL);
                                    data_pointer = (uint64_t *)(((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)0xa3 & 0xffffffffULL);
                                    WPP_SF_qdddd(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x42, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread(), data_pointer, data_pointer_2, ((uint64_t)value_8 & 0xffffffffULL) << 32 | (uint64_t)0xa3 & 0xffffffffULL, 0);
                                }
                                if (4 <= (uint32_t)value_10)
                                {
                                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                    {
                                        WPP_SF_qDL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x43, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread(), (uint64_t)((uint64_t)data_pointer) & 0xffffffff00000000 | (uint64_t)((uint32_t)value_10) & 0xffffffff, (uint64_t)((uint64_t)data_pointer_2) & 0xffffffff00000000 | (uint64_t)WD_STATUS_INVALID_PARAMETER & 0xffffffff);
                                    }
                                }
                                else
                                {
                                    *input_3 = (uint32_t)value_10;
                                    if (input_4)
                                    {
                                        *input_4 = WdLoadField(&value_10, 4, 4);
                                    }
                                }
                            }
                        }
                        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            WPP_SF_qDDD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18));
                        }
                    }
                    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        WPP_SF_qDDDD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x3f);
                    }
                }
                else
                {
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        data_pointer_4 = (int64_t *)(((uint64_t)value_8 & 0xffffffffULL) << 32 | (uint64_t)value_15 & 0xffffffffULL);
                        data_pointer_2 = (uint32_t *)(((uint64_t)value_6 & 0xffffffffULL) << 32 | (uint64_t)((uint32_t)((uint16_t *)input_2)[1]) & 0xffffffffULL);
                        data_pointer = (uint64_t *)(((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)((uint32_t)byte_value) & 0xffffffffULL);
                        WPP_SF_qDDDD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x3d);
                    }
                    MpTraceDlpSyncMessageTimeout(byte_value, ((uint16_t *)input_2)[1], value_15);
                    if (*(int32_t *)(MpData + 0x1034))
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x3e, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread(), data_pointer, data_pointer_2, data_pointer_4);
                        }
                        *(char *)(MpDlpData + 0x10d) = 1;
                    }
                }
                return;
            }
        }
        else
        {
            byte_value = 0;
            data_pointer_5 = (int64_t *)(MpData + 0x140);
            if (*(int64_t *)(MpData + 0x140))
            {
                goto block_1;
            }
        }
        if (*(char *)(MpData + 0xd0) || *(char *)(MpDlpData + 0x10d))
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                event_id = 0x34;
                WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), 0xc0000037);
            }
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            event_id = 0x35;
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), 0xc0000037);
        }
        value_15 = 0xc0000037;
        provider = 1;
    }
    else
    {
        value_15 = WD_STATUS_INVALID_PARAMETER;
    }
    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_DDDD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x3c, provider, provider & 0xff, ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)((uint32_t)((uint16_t *)input_2)[1]) & 0xffffffffULL, ((uint64_t)value_6 & 0xffffffffULL) << 32 | (uint64_t)1 & 0xffffffffULL, ((uint64_t)value_8 & 0xffffffffULL) << 32 | (uint64_t)value_15 & 0xffffffffULL);
    }
    return;
}

uint64_t MpDlpProcessRemoveSensitiveSectionFromRunningProcesses(int64_t input, uint64_t input_2)
{
    int64_t process_table;
    int64_t value;
    uint64_t *index;
    int64_t value_2;
    int64_t value_3;
    process_table = MpProcessTable;
    value = 0;
    if (!input)
    {
        return WD_STATUS_INVALID_PARAMETER;
    }
    if (!(*(int64_t *)(MpProcessTable + 0x180)))
    {
        return 0;
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(process_table + 8, (uint64_t)input_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
    value_3 = 0x80;
    process_table = *(int64_t *)(MpProcessTable + 0x180);
    value_2 = value;
    do
    {
        for (index = *(uint64_t **)(value_2 + process_table); index != (uint64_t *)(value + process_table); index = (uint64_t *)(*index))
        {
            MpDlpProcessRemoveSensitiveSectionFile((WD_LAYOUT_103 *)(&index[-1]), input);
            process_table = *(int64_t *)(MpProcessTable + 0x180);
        }

        value += 0x10;
        value_2 += 0x10;
        value_3 -= 1;
    }
    while (value_3);
    ExReleaseResourceLite(MpProcessTable + 8);
    KeLeaveCriticalRegion();
    return 0;
}

uint64_t MpDlpProcessRemoveSensitiveSectionFile(WD_LAYOUT_103 *input, int64_t input_2)
{
    int64_t *data_pointer;
    int64_t *data_pointer_2;
    int64_t *allocation;
    if (!input || !input_2)
    {
        return WD_STATUS_INVALID_PARAMETER;
    }
    FltAcquirePushLockExclusive(&input->field_0x0[200]);
    data_pointer = input->field_0xd0;
    do
    {
        allocation = data_pointer;
        if ((uint64_t **)allocation == &input->field_0xd0)
        {
            FltReleasePushLock(&input->field_0x0[200]);
            return 0;
        }
        data_pointer = (int64_t *)(*allocation);
    }
    while (allocation[3] != input_2);
    if ((int64_t *)data_pointer[1] != allocation || (data_pointer_2 = (int64_t *)allocation[1], (int64_t *)(*data_pointer_2) != allocation))
    {
        (*(WD_ROUTINE)swi(0x29))(3);
    }
    *data_pointer_2 = (int64_t)data_pointer;
    data_pointer[1] = (int64_t)data_pointer_2;
    MpDeleteDlpSectionFileNameEntry(allocation);
    FltReleasePushLock(&input->field_0x0[200]);
    return 0;
}

uint64_t MpDlpGetProcessEntryFlags(WD_LAYOUT_29 *input, int64_t input_2, uint32_t *input_3)
{
    uint64_t *data_pointer;
    uint64_t value;
    if (!input || !input_2 || !input_3)
    {
        return WD_STATUS_INVALID_PARAMETER;
    }
    value = WD_STATUS_NOT_FOUND;
    *input_3 = 0;
    FltAcquirePushLockShared(&input[1].field_0x0[8]);
    data_pointer = input->field_0x30;
    while (true)
    {
        if ((uint64_t **)data_pointer == &input->field_0x30)
        {
            FltReleasePushLock(&input[1].field_0x0[8]);
            return value;
        }
        if (data_pointer[2] == input_2)
        {
            value = 0;
            *input_3 = *(uint32_t *)(&data_pointer[5]);
            FltReleasePushLock(&input[1].field_0x0[8]);
            return value;
        }
        data_pointer = (uint64_t *)(*data_pointer);
    }
}

void MpDlpCheckFileAccess(void *input, void *input_2, void *input_3, uint32_t input_4, void *input_5, void *input_6, uint8_t *input_7, uint32_t input_8, int64_t input_9, uint64_t input_10)
{
    void *data_pointer;
    bool enabled;
    char byte_value;
    int32_t status;
    uint32_t value;
    uint64_t value_2;
    int64_t *allocation;
    uint32_t allocation_size;
    uint32_t *data_pointer_2;
    uint64_t value_3;
    int64_t allocation_2;
    uint32_t value_4;
    void *data;
    WD_UNICODE_STRING_VALUE *source_string;
    char buffer_2[3];
    uint64_t *file_name;
    char extension_id[8];
    char byte_value_2;
    uint64_t value_5;
    void *data_pointer_3;
    uint64_t value_6;
    bool enabled_2;
    uint64_t value_7;
    uint64_t value_8;
    uint64_t value_9;
    uint64_t value_10;
    int64_t file_name_2;
    uint32_t value_11;
    void *stream_context;
    void *handle_context;
    uint32_t *data_pointer_4;
    uint32_t value_12;
    bool enabled_3;
    int64_t value_13;
    uint64_t value_14;
    uint32_t values[2];
    uint32_t *data_pointer_5;
    uint64_t **data_pointer_6;
    uint32_t *data_pointer_7;
    uint32_t *data_pointer_8;
    uint32_t *data_pointer_9;
    uint32_t *data_pointer_10;
    uint32_t *allocation_3;
    bool enabled_4;
    uint32_t *allocation_4;
    char *bytes;
    uint64_t instance;
    uint64_t *data_pointer_11;
    uint32_t value_15;
    void **data_pointer_12;
    uint32_t value_16;
    uint32_t value_17;
    uint32_t value_18;
    bool enabled_5;
    void *data_2;
    uint32_t value_19;
    uint32_t *allocation_5;
    void *data_pointer_13;
    uint8_t *bytes_2;
    void *data_pointer_14;
    int64_t value_20;
    void *data_pointer_15;
    uint32_t *data_pointer_16;
    uint64_t *data_pointer_17;
    bool enabled_6;
    uint64_t value_21;
    uint64_t value_22;
    uint64_t value_23;
    uint64_t value_24;
    uint64_t value_25;
    uint64_t value_26;
    uint64_t value_27;
    uint64_t value_28;
    uint64_t value_29;
    uint64_t value_30;
    void *data_pointer_18;
    uint64_t value_31;
    uint32_t value_32;
    uint32_t value_33;
    uint32_t value_34;
    uint32_t value_35;
    uint32_t value_36;
    uint32_t value_37;
    uint32_t **data_pointer_19;
    void *data_pointer_20;
    data_pointer_18 = input_5;
    bytes_2 = input_7;
    value_13 = input_9;
    value_14 = input_10;
    data_pointer_5 = NULL;
    data_pointer_7 = NULL;
    data_pointer_9 = NULL;
    allocation_3 = NULL;
    data_pointer_15 = input_6;
    data_pointer_4 = NULL;
    enabled_3 = 0;
    enabled_5 = 0;
    enabled_6 = 0;
    value_11 = 0;
    file_name = NULL;
    value_30 = 0;
    buffer_2[0] = 0;
    handle_context = input_6;
    stream_context = NULL;
    byte_value_2 = '\0';
    value_20 = 0;
    enabled_2 = 0;
    value_19 &= 0xffffff00;
    file_name_2 = 0;
    value_5 = 0;
    allocation_5 = NULL;
    value_9 = 0;
    value_21 = 0;
    value_22 = 0;
    value_23 = 0;
    value_24 = 0;
    value_25 = 0;
    value_26 = 0;
    value_8 = 0;
    value_27 = 0;
    value_6 = 0;
    value_28 = 0;
    value_7 = 0;
    value_29 = 0;
    data_pointer_3 = NULL;
    value_10 = 0;
    data_pointer_17 = NULL;
    value_18 = input_4;
    data_2 = input;
    data_pointer_13 = input_2;
    data_pointer_14 = input_3;
    if (!input || !input_2 || !input_3 || !MpDlpIsEnabled(input, input_3))
    {
        return;
    }
    byte_value = *(char *)(((int64_t *)input)[2] + 4);
    if (!byte_value && *(uint32_t *)(*(int64_t *)(((int64_t *)input)[2] + 0x18) + 0x10) & 0x20)
    {
        return;
    }
    data_pointer_8 = data_pointer_5;
    data_pointer_10 = data_pointer_5;
    allocation_4 = allocation_3;
    if (input_8 && value_13)
    {
        data_pointer_6 = &file_name;
        status = MpQueryFileName(data_2, value_18, data_pointer_6, buffer_2);
        data_pointer_11 = file_name;
        if (0 <= status)
        {
            WdStoreField(&extension_id, 0, 4, (uint64_t)0);
            if (data_pointer_18)
            {
                status = ((int32_t *)data_pointer_18)[0x2e];
            }
            else
            {
                status = FltParseFileNameInformation(file_name);
                if (0 <= status)
                {
                    status = 0;
                    if (0 <= (int32_t)MpGetFileExtensionId(&data_pointer_11[7], extension_id))
                    {
                        status = WdLoadField(&extension_id, 0, 4);
                    }
                }
                else
                {
                    status = 0;
                }
            }
            if (!MpDlpIsExtSupported(status))
            {
                goto block_21;
            }
            enabled_3 = 1;
            enabled_4 = 1;
            goto block_11;
        }
        allocation_4 = data_pointer_5;
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || (allocation_4 = allocation_3, !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)))
        {
            goto block_21;
        }
        value_2 = 0x1d;
        instance = (uint64_t)((uint64_t)bytes) & 0xffffffff00000000 | (uint64_t)status & 0xffffffff;
        allocation_3 = data_pointer_5;
        goto block_19;
    }
    data_pointer_2 = data_pointer_5;
    if ((byte_value || !(value_18 & 0x10) || !bytes_2 || !(*(int64_t *)(&bytes_2[8]))) && (!handle_context || !((int64_t *)handle_context)[10] || '\0' <= (char)((uint32_t *)handle_context)[10]))
    {
        status = MpDlpQueryEaEx(data_2, data_pointer_13, &value_5, &byte_value_2);
    }
    else
    {
        if (handle_context && ((uint32_t **)handle_context)[10])
        {
            data_pointer_2 = ((uint32_t **)handle_context)[10];
        }
        else if (bytes_2)
        {
            data_pointer_2 = NULL;
            if (*(uint32_t **)(&bytes_2[8]))
            {
                data_pointer_2 = *(uint32_t **)(&bytes_2[8]);
            }
        }
        if ((*(char *)(((int64_t *)data_2)[2] + 4) || !(*(uint32_t *)(*(int64_t *)(((int64_t *)data_2)[2] + 0x18) + 0x10) & 8)) && (!handle_context || !(((uint32_t *)handle_context)[0x16] & 8)))
        {
            block_1:
            value_3 = (uint32_t)MpDlpQueryEaByName(data_pointer_2, &value_5, &byte_value_2);
        }
        else
        {
            bytes = &byte_value_2;
            value = MpDlpQueryEa(NULL, ((int64_t *)data_pointer_13)[3], ((int64_t *)data_pointer_13)[4], &value_5, bytes);
            value_3 = value;
            if (!(value + 0x80000000 & 0x80000000) && value != 0xc000004f)
            {
                goto block_1;
            }
        }
        status = (int32_t)value_3;
        value_19 = (uint32_t)(value_3 >> 0x1f) ^ 1;
    }
    if (status <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
    {
        bytes = (char *)((uint64_t)((uint64_t)bytes) & 0xffffffff00000000 | (uint64_t)status & 0xffffffff);
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1a, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread(), bytes);
    }
    if ((char)value_19)
    {
        value_21 = *(uint64_t *)data_pointer_2;
        value_22 = *(uint64_t *)(&data_pointer_2[2]);
        data_pointer_12 = &data_pointer_3;
        bytes = (char *)(&value_7);
        status = MpParseFileName(data_pointer_2, NULL, &value_8, &value_6, bytes, data_pointer_12);
        if (0 <= status)
        {
            file_name = &value_9;
        }
        block_2:
        data_pointer_11 = file_name;

        WdStoreField(&extension_id, 0, 4, (uint64_t)0);
        if (data_pointer_18)
        {
            status = ((int32_t *)data_pointer_18)[0x2e];
        }
        else
        {
            status = FltParseFileNameInformation(file_name);
            if (0 <= status)
            {
                if (0 <= (int32_t)MpGetFileExtensionId(&data_pointer_11[7], extension_id))
                {
                    status = WdLoadField(&extension_id, 0, 4);
                }
                else
                {
                    status = 0;
                }
            }
            else
            {
                status = 0;
            }
        }
        byte_value = MpDlpIsExtSupported(status);
        if (!byte_value)
        {
            goto block_21;
        }
        byte_value = 0;
        if (*(int32_t *)(MpData + 0x364) <= -1)
        {
            byte_value = *(char *)(MpDlpData + 0x108);
        }
        data_pointer_6 = (uint64_t **)((uint64_t)((uint32_t)(status - 2U)));
        switch (status - 2U)
        {
            case 0:
                if (((int32_t *)input_3)[0x3c] != 5 && ((int32_t *)input_3)[0x3c] - 4U & 0xfffffffdU)
            {
                if (!byte_value)
                {
                    break;
                }
                enabled_2 = 1;
            }
            else
            {
                block_3:
                enabled_2 = 1;
            }
                goto block_4;

            case 2:

            case 3:

            case 4:

            case 5:

            case 6:

            case 7:

            case 8:

            case 9:

            case 10:

            case 0xb:

            case 0xc:

            case 0xd:

            case 0xe:

            case 0xf:

            case 0x10:

            case 0x11:

            case 0x12:

            case 0x13:

            case 0x14:

            case 0x15:

            case 0x16:

            case 0x17:

            case 0x18:

            case 0x19:

            case 0x1a:

            case 0x1c:

            case 0x1d:

            case 0x1e:

            case 0x22:
                status = ((int32_t *)input_3)[0x3c];
                if (status == 4 || status == 5 || (status == 6 || (status == 0xb || status == 0xc || status == 0x10) || (MpIsCloudSyncType(input_3) || byte_value)))
            {
                goto block_3;
            }
                break;

            case 0x1b:
                status = ((int32_t *)input_3)[0x3c];
                if (status == 4 || status == 5 || (status == 6 || (status == 0xb || status == 0xc || status == 10 || (status == 0x10 || MpIsCloudSyncType(input_3)) || ((int32_t *)input_3)[0x3c] == 0xd)))
            {
                goto block_3;
            }
                if (((int32_t *)input_3)[0x3c] == 0xe)
            {
                enabled_2 = 1;
                goto block_4;
            }
                break;

            case 0x24:

            case 0x25:

            case 0x26:

            case 0x27:

            case 0x28:

            case 0x29:
                if (((int32_t *)input_3)[0x3c] == 0x10)
            {
                goto block_3;
            }
                if (MpIsCloudSyncType(input_3))
            {
                enabled_2 = 1;
                goto block_4;
            }
        }

        enabled_2 = 0;
        block_4:
        value = (uint32_t)value_5;

        if ((uint32_t)value_5)
        {
            WdStoreField(&extension_id, 0, 4, (uint64_t)0);
            if (allocation_5 && (data_pointer_8 = data_pointer_7, (uint32_t)value_5))
            {
                data_pointer_6 = (uint64_t **)extension_id;
                status = IoCheckEaBufferValidity(allocation_5, value_5 & 0xffffffff, data_pointer_6);
                data_pointer_8 = allocation_5;
                if (0 <= status)
                {
                    while (0xc <= value)
                    {
                        if (!_stricmp(&data_pointer_8[2], "$Kernel.SEC.EndpointDlp"))
                        {
                            if (!data_pointer_8)
                            {
                                goto block_5;
                            }
                            enabled_3 = 1;
                            goto block_6;
                        }
                        allocation_size = *data_pointer_8;
                        if (!allocation_size)
                        {
                            break;
                        }
                        data_pointer_8 = (uint32_t *)((int64_t)data_pointer_8 + (uint64_t)allocation_size);
                        value -= allocation_size;
                    }

                    data_pointer_8 = NULL;
                }
                else
                {
                    data_pointer_8 = data_pointer_7;
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        data_pointer_6 = &WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids;
                        bytes = (char *)(((uint64_t)((int32_t)((uint64_t)bytes >> 0x20)) & 0xffffffffULL) << 32 | (uint64_t)WdLoadField(&extension_id, 0, 4) & 0xffffffffULL);
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x6c, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread(), bytes);
                    }
                }
            }
            block_5:
            enabled_3 = 0;
        }
        else if (!enabled_2 && (data_pointer_8 = data_pointer_7, !(*(char *)(MpDlpData + 0x109))) && !(*(char *)(MpDlpData + 0x10a)))
        {
            goto block_21;
        }
        block_6:
        value = (uint32_t)value_5;

        if (*(char *)(MpDlpData + 0x10a) && (data_pointer_10 = data_pointer_9, (uint32_t)value_5))
        {
            values[0] = 0;
            if (allocation_5)
            {
                data_pointer_6 = (uint64_t **)values;
                status = IoCheckEaBufferValidity(allocation_5, value_5 & 0xffffffff, data_pointer_6);
                data_pointer_7 = allocation_5;
                if (0 <= status)
                {
                    while (0xc <= value)
                    {
                        data_pointer_4 = data_pointer_7;
                        if (!_stricmp(&data_pointer_7[2], "$Kernel.SEC.MarkOfWeb"))
                        {
                            if (!data_pointer_7)
                            {
                                goto block_7;
                            }
                            enabled_5 = 1;
                            goto block_8;
                        }
                        allocation_size = *data_pointer_7;
                        if (!allocation_size)
                        {
                            break;
                        }
                        data_pointer_7 = (uint32_t *)((int64_t)data_pointer_7 + (uint64_t)allocation_size);
                        value -= allocation_size;
                    }
                }
                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    data_pointer_6 = &WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids;
                    bytes = (char *)((uint64_t)((uint64_t)bytes) & 0xffffffff00000000 | (uint64_t)values[0] & 0xffffffff);
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x6c, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread(), bytes);
                }
            }
            data_pointer_4 = NULL;
            block_7:
            enabled_5 = 0;

            block_8:
            value = (uint32_t)value_5;

            WdStoreField(&extension_id, 4, 4, (uint64_t)0);
            data_pointer_10 = data_pointer_5;
            if (allocation_5)
            {
                data_pointer_6 = (uint64_t **)(&extension_id[4]);
                status = IoCheckEaBufferValidity(allocation_5, value_5 & 0xffffffff, data_pointer_6);
                data_pointer_10 = allocation_5;
                if (0 <= status)
                {
                    while (0xc <= value)
                    {
                        if (!_stricmp(&data_pointer_10[2], "$Kernel.SEC.ApplicationSource"))
                        {
                            if (!data_pointer_10)
                            {
                                goto block_9;
                            }
                            enabled_6 = 1;
                            goto block_10;
                        }
                        allocation_size = *data_pointer_10;
                        if (!allocation_size)
                        {
                            break;
                        }
                        data_pointer_10 = (uint32_t *)((int64_t)data_pointer_10 + (uint64_t)allocation_size);
                        value -= allocation_size;
                    }

                    data_pointer_10 = NULL;
                }
                else
                {
                    data_pointer_10 = data_pointer_9;
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        data_pointer_6 = &WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids;
                        bytes = (char *)(((uint64_t)((int32_t)((uint64_t)bytes >> 0x20)) & 0xffffffffULL) << 32 | (uint64_t)WdLoadField(&extension_id, 4, 4) & 0xffffffffULL);
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x6c, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread(), bytes);
                    }
                }
            }
            block_9:
            enabled_6 = 0;

            block_10:
            input_3 = data_pointer_14;
        }
        enabled_4 = enabled_3;
        if (!enabled_3 && enabled_2 && data_pointer_18 && (((int32_t *)input_3)[0x3c] == 0x10 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            data_pointer_12 = &((void **)data_pointer_18)[0x1e];
            bytes = ((char **)input_3)[0x10];
            WPP_SF_dZZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18));
        }
        block_11:
        data_pointer_11 = file_name;

        if (*(int32_t *)(MpData + 0x1030))
        {
            enabled = 1;
            if (data_pointer_18 && ((int64_t *)data_pointer_18)[1])
            {
                enabled = (bool)(*(uint8_t *)(((int64_t *)data_pointer_18)[1] + 0x50) & 1);
            }
            if (*(int64_t *)(MpDlpData + 0x118) && *(int64_t *)(MpDlpData + 0x120) && file_name && enabled)
            {
                value_2 = (uint64_t)((uint64_t)data_pointer_6) & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
                byte_value = RtlPrefixUnicodeString(*(int64_t *)(MpDlpData + 0x118), &file_name[1], value_2);
                if (byte_value && (instance = *(uint64_t *)(MpDlpData + 0x120), !RtlPrefixUnicodeString(instance, &data_pointer_11[1], (uint64_t)value_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff)))
                {
                    goto block_21;
                }
            }
        }
        data_pointer_20 = data_pointer_14;
        if (enabled_4 || (enabled_2 || *(char *)(MpDlpData + 0x109)) || (enabled_5 || enabled_6))
        {
            status = FltParseFileName(((uint64_t *)data_pointer_14)[0x10], 0, 0, &value_10);
            if (0 <= status)
            {
                value = *(uint16_t *)(&file_name[1]) + 0xa6;
                if (0xa4 <= value)
                {
                    allocation_size = (uint16_t)value_10 + 2 + value;
                    if (value <= allocation_size)
                    {
                        value = allocation_size;
                        if (enabled_3)
                        {
                            if (input_8 && value_13)
                            {
                                value = input_8 + allocation_size;
                                if (allocation_size <= value)
                                {
                                    goto block_12;
                                }
                                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                {
                                    value_2 = 0x21;
                                    goto block_20;
                                }
                            }
                            else
                            {
                                value = ((uint16_t *)data_pointer_8)[3] + allocation_size;
                                if (allocation_size <= value)
                                {
                                    goto block_12;
                                }
                                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                {
                                    value_2 = 0x22;
                                    goto block_20;
                                }
                            }
                        }
                        else
                        {
                            block_12:
                            allocation_size = value;

                            if (!enabled_5 || (allocation_size = ((uint16_t *)data_pointer_4)[3] + value, allocation_size >= value))
                            {
                                value = allocation_size;
                                if (!enabled_6 || (value = ((uint16_t *)data_pointer_10)[3] + allocation_size, value >= allocation_size))
                                {
                                    allocation_size = value;
                                    if ((char)value_19)
                                    {
                                        status = FltGetFileNameInformation(data_2, 0x102, &file_name_2);
                                        if (0 <= status)
                                        {
                                            allocation_size = *(uint16_t *)(file_name_2 + 8) + 2 + value;
                                            if (value <= allocation_size)
                                            {
                                                goto block_13;
                                            }
                                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                            {
                                                value_2 = 0x26;
                                                goto block_20;
                                            }
                                        }
                                        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                        {
                                            value_2 = 0x25;
                                            instance = (uint64_t)((uint64_t)bytes) & 0xffffffff00000000 | (uint64_t)status & 0xffffffff;
                                            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread(), instance);
                                            allocation_4 = allocation_3;
                                        }
                                    }
                                    else
                                    {
                                        block_13:
                                        allocation_3 = (uint32_t *)MpAllocatePoolWithTag(1, allocation_size, 0x6c64504d);

                                        data = data_2;
                                        allocation_4 = allocation_3;
                                        if (allocation_3)
                                        {
                                            allocation_3[1] = allocation_size;
                                            *allocation_3 = 0x400a3;
                                            MpGetPriorityInfo(data_2, ((uint64_t *)data_pointer_13)[4], (WD_LAYOUT_26 *)(&allocation_3[2]));
                                            byte_value = *(char *)(((int64_t *)data)[2] + 4);
                                            value = 2;
                                            if (byte_value)
                                            {
                                                if (byte_value != '\xff')
                                                {
                                                    if (byte_value != '\x03')
                                                    {
                                                        value = 0;
                                                        if (byte_value == '\b')
                                                        {
                                                            value = 5;
                                                        }
                                                    }
                                                    else
                                                    {
                                                        value = 3;
                                                    }
                                                }
                                            }
                                            else
                                            {
                                                value = 1;
                                            }
                                            allocation_3[6] = value;
                                            allocation_3[0x18] = ((uint32_t *)data_pointer_20)[6];
                                            allocation_3[0x19] = ((uint32_t *)data_pointer_20)[0x3c];
                                            if (data_pointer_18)
                                            {
                                                *(uint64_t *)(&allocation_3[0x1e]) = ((uint64_t *)data_pointer_18)[0x15];
                                                allocation_2 = ((int64_t *)data_pointer_18)[1];
                                                value = *(uint32_t *)(allocation_2 + 0x3c);
                                                allocation_size = *(uint32_t *)(allocation_2 + 0x40);
                                                value_4 = *(uint32_t *)(allocation_2 + 0x44);
                                                allocation_3[0x1a] = *(uint32_t *)(allocation_2 + 0x38);
                                                allocation_3[0x1b] = value;
                                                allocation_3[0x1c] = allocation_size;
                                                allocation_3[0x1d] = value_4;
                                            }
                                            else
                                            {
                                                allocation_3[0x1e] = 0;
                                                allocation_3[0x1f] = 0;
                                            }
                                            value_2 = ((uint64_t *)data_pointer_20)[4];
                                            *(uint64_t *)(&allocation_3[8]) = MpFileTimeFromUlong64(value_2);
                                            allocation_3[0x20] = ((uint32_t *)data_pointer_20)[0x40];
                                            allocation_3[0x25] = value_18;
                                            allocation_3[10] = 0xa4;
                                            allocation_3[0xb] = 0;
                                            memmove(&allocation_3[0x29], data_pointer_17, value_10 & 0xffff);
                                            data_pointer_11 = file_name;
                                            *(uint16_t *)((int64_t)allocation_3 + *(int64_t *)(&allocation_3[10]) + (uint64_t)((uint16_t)value_10 >> 1) * 2) = 0;
                                            allocation_3[0x21] = (uint32_t)((uint16_t)value_10);
                                            value_3 = value_10 & 0xffff;
                                            allocation_2 = value_3 + 0xa6;
                                            *(int64_t *)(&allocation_3[0xc]) = allocation_2;
                                            memmove((uint64_t *)((int64_t)allocation_3 + allocation_2), (uint64_t *)file_name[2], *(uint16_t *)(&file_name[1]));
                                            *(uint16_t *)((int64_t)allocation_3 + *(int64_t *)(&allocation_3[0xc]) + (uint64_t)(*(uint16_t *)(&data_pointer_11[1]) >> 1) * 2) = 0;
                                            allocation_3[0x22] = (uint32_t)(*(uint16_t *)(&data_pointer_11[1]));
                                            allocation_2 = value_3 + 0xa8 + *(uint16_t *)(&data_pointer_11[1]);
                                            allocation_3[0xe] = 0;
                                            allocation_3[0xf] = 0;
                                            allocation_3[0x23] = 0;
                                            if ((char)value_19 && file_name_2)
                                            {
                                                *(int64_t *)(&allocation_3[0xe]) = allocation_2;
                                                memmove((uint64_t *)((int64_t)allocation_3 + allocation_2), *(uint64_t **)(file_name_2 + 0x10), *(uint16_t *)(file_name_2 + 8));
                                                *(uint16_t *)((int64_t)allocation_3 + *(int64_t *)(&allocation_3[0xe]) + (uint64_t)(*(uint16_t *)(file_name_2 + 8) >> 1) * 2) = 0;
                                                allocation_3[0x23] = (uint32_t)(*(uint16_t *)(file_name_2 + 8));
                                                allocation_2 += *(uint16_t *)(file_name_2 + 8) + 2ULL;
                                            }
                                            allocation_3[0x10] = 0;
                                            allocation_3[0x11] = 0;
                                            allocation_3[0x24] = 0;
                                            if (enabled_3)
                                            {
                                                *(int64_t *)(&allocation_3[0x10]) = allocation_2;
                                                if (input_8 && value_13)
                                                {
                                                    value_3 = input_8;
                                                    memmove((uint64_t *)((int64_t)allocation_3 + allocation_2), value_13, input_8);
                                                    allocation_2 += value_3;
                                                    allocation_3[0x24] = input_8;
                                                }
                                                else
                                                {
                                                    memmove((uint64_t *)((int64_t)allocation_3 + allocation_2), (uint64_t *)(((uint8_t *)data_pointer_8)[5] + 9ULL + (int64_t)data_pointer_8), ((uint16_t *)data_pointer_8)[3]);
                                                    allocation_3[0x24] = (uint32_t)((uint16_t *)data_pointer_8)[3];
                                                    allocation_2 += (uint64_t)((uint16_t *)data_pointer_8)[3];
                                                }
                                            }
                                            allocation_3[0x14] = 0;
                                            allocation_3[0x15] = 0;
                                            allocation_3[0x27] = 0;
                                            if (enabled_6)
                                            {
                                                *(int64_t *)(&allocation_3[0x14]) = allocation_2;
                                                memmove((uint64_t *)((int64_t)allocation_3 + allocation_2), (uint64_t *)(((uint8_t *)data_pointer_10)[5] + 9ULL + (int64_t)data_pointer_10), ((uint16_t *)data_pointer_10)[3]);
                                                allocation_3[0x27] = (uint32_t)((uint16_t *)data_pointer_10)[3];
                                                allocation_2 += (uint64_t)((uint16_t *)data_pointer_10)[3];
                                            }
                                            data_pointer_5 = data_pointer_4;
                                            allocation_3[0x16] = 0;
                                            allocation_3[0x17] = 0;
                                            allocation_3[0x28] = 0;
                                            if (enabled_5)
                                            {
                                                *(int64_t *)(&allocation_3[0x16]) = allocation_2;
                                                memmove((uint64_t *)((int64_t)allocation_3 + allocation_2), (uint64_t *)((int64_t)data_pointer_4 + ((uint8_t *)data_pointer_4)[5] + 9ULL), ((uint16_t *)data_pointer_4)[3]);
                                                allocation_3[0x28] = (uint32_t)((uint16_t *)data_pointer_5)[3];
                                            }
                                            status = MpDlpQueryService(value_18, allocation_3, &value_11, value_14);
                                            data_pointer_20 = data_pointer_13;
                                            if (0 <= status)
                                            {
                                                if (value_11 & 0xfffffffd)
                                                {
                                                    if (data_pointer_18)
                                                    {
                                                        data = data_2;
                                                    }
                                                    else
                                                    {
                                                        status = FltGetStreamContext(((uint64_t *)data_pointer_13)[3], ((uint64_t *)data_pointer_13)[4], &stream_context);
                                                        data = data_2;
                                                        if (status <= -1)
                                                        {
                                                            data_pointer_12 = &stream_context;
                                                            bytes = (char *)((uint64_t)bytes & 0xffffffffffffff00);
                                                            status = MpCreateStreamContext(data_2, data_pointer_20, bytes_2, 0, bytes, data_pointer_12);
                                                            if (!(status + 0x80000000U & 0x80000000) && status != -0x3fe3fffe)
                                                            {
                                                                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                                                {
                                                                    value_2 = 0x29;
                                                                    instance = (uint64_t)((uint64_t)bytes) & 0xffffffff00000000 | (uint64_t)status & 0xffffffff;
                                                                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread(), instance);
                                                                    allocation_4 = allocation_3;
                                                                }
                                                                goto block_21;
                                                            }
                                                        }
                                                    }
                                                    value_15 = (uint32_t)((uint64_t)bytes >> 0x20);
                                                    if (!handle_context && (value_2 = ((uint64_t *)data_pointer_20)[4], instance = ((uint64_t *)data_pointer_20)[3], (int32_t)FltGetStreamHandleContext(instance, value_2, &handle_context) <= -1))
                                                    {
                                                        status = MpCreateHandleContext(data_pointer_20, &handle_context, NULL);
                                                        if (status <= -1)
                                                        {
                                                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                                            {
                                                                value_2 = 0x2a;
                                                                instance = ((uint64_t)value_15 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL;
                                                                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread(), instance);
                                                                allocation_4 = allocation_3;
                                                            }
                                                            goto block_21;
                                                        }
                                                        if (!(*(char *)(((int64_t *)data)[2] + 4)))
                                                        {
                                                            ((uint32_t *)handle_context)[0x16] = *(uint32_t *)(*(int64_t *)(((int64_t *)data)[2] + 0x18) + 0x10);
                                                        }
                                                    }
                                                    allocation_2 = MpGetRequestorProcess(data);
                                                    data_pointer_20 = data_pointer_14;
                                                    data_pointer_4 = NULL;
                                                    value_31 = 0;
                                                    value_13 = 0;
                                                    value_14 = 0;
                                                    data_pointer_16 = NULL;
                                                    if (allocation_2)
                                                    {
                                                        value_36 = 0x41;
                                                        data_pointer_4 = ((uint32_t **)data_pointer_14)[3];
                                                        value_31 = ((uint64_t *)data_pointer_14)[4];
                                                        value_35 = 2;
                                                        value_37 = 2;
                                                        data_pointer_19 = &data_pointer_4;
                                                        data_pointer_16 = &value_12;
                                                        value_12 = WdDlpStorage4;
                                                        value_32 = WdDlpStorage5;
                                                        value_33 = WdDlpStorage6;
                                                        value_34 = WdDlpStorage7;
                                                        value_14 = 0x100000001;
                                                        allocation_2 = PsReferencePrimaryToken(allocation_2);
                                                        allocation = &value_13;
                                                        value_2 = *__imp_SeTokenObjectType;
                                                        value_3 = (uint64_t)data_pointer_12 & 0xffffffffffffff00;
                                                        status = ObOpenObjectByPointer(allocation_2, 0x200, 0, 0xf01ff, value_2, value_3, allocation);
                                                        value_15 = (uint32_t)((uint64_t)value_2 >> 0x20);
                                                        value_16 = (uint32_t)(value_3 >> 0x20);
                                                        value_17 = (uint32_t)((uint64_t)allocation >> 0x20);
                                                        if (0 <= status)
                                                        {
                                                            WdStoreField(&extension_id, 4, 4, (uint64_t)4);
                                                            status = SeSetSecurityAttributesToken(value_13, 0, &extension_id[4], &value_14);
                                                            if (0 <= status)
                                                            {
                                                                status = 0;
                                                            }
                                                            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                                            {
                                                                value_2 = 0x48;
                                                                instance = ((uint64_t)value_15 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL;
                                                                goto block_14;
                                                            }
                                                        }
                                                        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                                        {
                                                            value_2 = 0x47;
                                                            instance = ((uint64_t)value_15 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL;
                                                            block_14:
                                                            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread(), instance);

                                                            value_15 = (uint32_t)((uint64_t)instance >> 0x20);
                                                        }
                                                        if (value_13)
                                                        {
                                                            ZwClose();
                                                        }
                                                        if (allocation_2)
                                                        {
                                                            PsDereferencePrimaryToken(allocation_2);
                                                        }
                                                        data = data_2;
                                                        if (0 <= status)
                                                        {
                                                            WdAtomicOr32((volatile int32_t *)((uint32_t *)((int64_t)handle_context + 0x28)), 0x40);
                                                            if (data_pointer_18)
                                                            {
                                                                data_pointer = data_pointer_18;
                                                            }
                                                            else
                                                            {
                                                                data_pointer = stream_context;
                                                            }
                                                            WdAtomicOr32((volatile int32_t *)((uint32_t *)((int64_t)data_pointer + 0x30)), 0x10000);
                                                            if (enabled_3)
                                                            {
                                                                if (data_pointer_18)
                                                                {
                                                                    WdAtomicOr32((volatile int32_t *)((uint32_t *)((int64_t)data_pointer_18 + 0x30)), 0x200000);
                                                                    WdAtomicAnd32((volatile int32_t *)((uint32_t *)((int64_t)data_pointer_18 + 0x30)), 0xffbfffff);
                                                                }
                                                                else
                                                                {
                                                                    WdAtomicOr32((volatile int32_t *)((uint32_t *)((int64_t)stream_context + 0x30)), 0x200000);
                                                                    WdAtomicAnd32((volatile int32_t *)((uint32_t *)((int64_t)stream_context + 0x30)), 0xffbfffff);
                                                                }
                                                            }
                                                            else
                                                            {
                                                                if (data_pointer_18)
                                                                {
                                                                    data_pointer = data_pointer_18;
                                                                }
                                                                else
                                                                {
                                                                    data_pointer = stream_context;
                                                                }
                                                                WdAtomicAnd32((volatile int32_t *)((uint32_t *)((int64_t)data_pointer + 0x30)), 0xffdfffff);
                                                                if (enabled_2)
                                                                {
                                                                    if (data_pointer_18)
                                                                    {
                                                                        data_pointer = data_pointer_18;
                                                                    }
                                                                    else
                                                                    {
                                                                        data_pointer = stream_context;
                                                                    }
                                                                    WdAtomicOr32((volatile int32_t *)((uint32_t *)((int64_t)data_pointer + 0x30)), 0x400000);
                                                                }
                                                            }
                                                            if (!(*(char *)(((int64_t *)data_2)[2] + 4)) && bytes_2 && (source_string = *(WD_UNICODE_STRING_VALUE **)(&bytes_2[8]), source_string) && (allocation = &((int64_t *)handle_context)[10], 0 <= (int32_t)MpDuplicateString(source_string, allocation)))
                                                            {
                                                                WdAtomicOr32((volatile int32_t *)((uint32_t *)((int64_t)handle_context + 0x28)), 0x80);
                                                            }
                                                            if (*(char *)(((int64_t *)data)[2] + 4) != '\xff')
                                                            {
                                                                data_pointer_11 = file_name;
                                                                status = MpDlpSetProcessEntryFlags(data, data_pointer_13, data_pointer_20, handle_context, file_name, ((uint64_t)value_16 & 0xffffffffULL) << 32 | (uint64_t)value_18 & 0xffffffffULL, ((uint64_t)value_17 & 0xffffffffULL) << 32 | (uint64_t)1 & 0xffffffffULL);
                                                                if (status <= -1)
                                                                {
                                                                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                                                    {
                                                                        value_2 = 0x2c;
                                                                        instance = (uint64_t)((uint64_t)data_pointer_11) & 0xffffffff00000000 | (uint64_t)status & 0xffffffff;
                                                                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread(), instance);
                                                                        allocation_4 = allocation_3;
                                                                    }
                                                                    goto block_21;
                                                                }
                                                                if (((char *)data_pointer_20)[0xc4])
                                                                {
                                                                    (*(WD_ROUTINE)swi(3))();
                                                                    return;
                                                                }
                                                                WdAtomicAdd32((volatile int32_t *)((int32_t *)((int64_t)data_pointer_20 + 0xc0)), 1);
                                                                block_15:
                                                                if (value_11 == 3)
                                                                {
                                                                    WdAtomicOr32((volatile int32_t *)((uint32_t *)((int64_t)data_pointer_20 + 0x34)), 0x1000);
                                                                    value_11 = 1;
                                                                }

                                                                if (enabled_3 || enabled_2)
                                                                {
                                                                    data = stream_context;
                                                                    if (data_pointer_18)
                                                                    {
                                                                        data = data_pointer_18;
                                                                    }
                                                                    source_string = (WD_UNICODE_STRING_VALUE *)(&file_name[1]);
                                                                    if (MpDlpRegisterForPolicyUpdate(data_pointer_20, source_string, data, 0) <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                                                    {
                                                                        WPP_SF_qZZDD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18));
                                                                    }
                                                                }
                                                                goto block_21;
                                                            }
                                                            source_string = (WD_UNICODE_STRING_VALUE *)(&file_name[1]);
                                                            if (source_string)
                                                            {
                                                                if (!source_string->Length || !file_name[2])
                                                                {
                                                                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                                                    {
                                                                        value_2 = 0x15;
                                                                        goto block_17;
                                                                    }
                                                                    goto block_18;
                                                                }
                                                                allocation_2 = (int64_t)MpAllocatePoolWithTag(1, (char *)0x30, 0x6670504d);
                                                                if (allocation_2)
                                                                {
                                                                    *(uint64_t *)(allocation_2 + 0x10) = 0;
                                                                    allocation = MpAllocatePoolWithTag(1, source_string->Length, 0x6e66504d);
                                                                    *(int64_t **)(allocation_2 + 0x20) = allocation;
                                                                    if (allocation)
                                                                    {
                                                                        ((WD_UNICODE_STRING_VALUE *)(allocation_2 + 0x18))->Length = 0;
                                                                        *(uint16_t *)(allocation_2 + 0x1a) = source_string->Length;
                                                                        status = RtlUnicodeStringCopy((WD_UNICODE_STRING_VALUE *)(allocation_2 + 0x18), source_string);
                                                                        if (status <= -1)
                                                                        {
                                                                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                                                            {
                                                                                value_2 = ((uint64_t)value_15 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL;
                                                                                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x17, WD_SYMBOL_ADDRESS(WPP_cb3208452d573ca4daa63a8ca1f3e9a4_Traceguids), (uint64_t)KeGetCurrentThread(), value_2);
                                                                                value_15 = (uint32_t)((uint64_t)value_2 >> 0x20);
                                                                            }
                                                                            goto block_16;
                                                                        }
                                                                        *(uint32_t *)(allocation_2 + 0x28) = 0;
                                                                        status = 0;
                                                                    }
                                                                    else
                                                                    {
                                                                        status = -0x3fffff66;
                                                                        block_16:
                                                                        if (*(void **)(allocation_2 + 0x10))
                                                                        {
                                                                            MpReleaseProcessContext(*(void **)(allocation_2 + 0x10));
                                                                            *(uint64_t *)(allocation_2 + 0x10) = 0;
                                                                        }

                                                                        if (*(int64_t *)(allocation_2 + 0x20))
                                                                        {
                                                                            ExFreePoolWithTag(*(int64_t *)(allocation_2 + 0x20), 0x6e66504d);
                                                                            *(uint64_t *)(allocation_2 + 0x20) = 0;
                                                                        }
                                                                        ExFreePoolWithTag(allocation_2, 0x6670504d);
                                                                        allocation_2 = value_20;
                                                                    }
                                                                    if (0 <= status)
                                                                    {
                                                                        if (data_pointer_18)
                                                                        {
                                                                            data = data_pointer_18;
                                                                        }
                                                                        else
                                                                        {
                                                                            data = stream_context;
                                                                        }
                                                                        ExpInterlockedPushEntrySList((int64_t)data + 0x110, allocation_2);
                                                                        goto block_15;
                                                                    }
                                                                }
                                                                else
                                                                {
                                                                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                                                    {
                                                                        value_2 = ((uint64_t)value_15 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INSUFFICIENT_RESOURCES & 0xffffffffULL;
                                                                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x16, WD_SYMBOL_ADDRESS(WPP_cb3208452d573ca4daa63a8ca1f3e9a4_Traceguids), (uint64_t)KeGetCurrentThread(), value_2);
                                                                        value_15 = (uint32_t)((uint64_t)value_2 >> 0x20);
                                                                    }
                                                                    status = -0x3fffff66;
                                                                }
                                                            }
                                                            else
                                                            {
                                                                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                                                {
                                                                    value_2 = 0x14;
                                                                    block_17:
                                                                    instance = ((uint64_t)value_15 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INVALID_PARAMETER & 0xffffffffULL;

                                                                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_cb3208452d573ca4daa63a8ca1f3e9a4_Traceguids), (uint64_t)KeGetCurrentThread(), instance);
                                                                    value_15 = (uint32_t)((uint64_t)instance >> 0x20);
                                                                }
                                                                block_18:
                                                                status = -0x3ffffff3;
                                                            }
                                                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                                            {
                                                                value_2 = 0x2d;
                                                                instance = ((uint64_t)value_15 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL;
                                                                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread(), instance);
                                                                allocation_4 = allocation_3;
                                                            }
                                                            goto block_21;
                                                        }
                                                    }
                                                    else
                                                    {
                                                        status = -0x3ffffff3;
                                                    }
                                                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                                    {
                                                        value_2 = 0x2b;
                                                        instance = ((uint64_t)value_15 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL;
                                                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread(), instance);
                                                        allocation_4 = allocation_3;
                                                    }
                                                }
                                            }
                                            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                            {
                                                value_2 = 0x28;
                                                instance = (uint64_t)((uint64_t)bytes) & 0xffffffff00000000 | (uint64_t)status & 0xffffffff;
                                                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread(), instance);
                                                allocation_4 = allocation_3;
                                            }
                                        }
                                        else
                                        {
                                            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                                            {
                                                goto block_21;
                                            }
                                            value_2 = 0x27;
                                            instance = (uint64_t)((uint64_t)bytes) & 0xffffffff00000000 | (uint64_t)WD_STATUS_INSUFFICIENT_RESOURCES & 0xffffffff;
                                            block_19:
                                            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread(), instance);

                                            allocation_4 = allocation_3;
                                        }
                                    }
                                }
                                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                {
                                    value_2 = 0x24;
                                    goto block_20;
                                }
                            }
                            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                            {
                                value_2 = 0x23;
                                block_20:
                                instance = (uint64_t)((uint64_t)bytes) & 0xffffffff00000000 | (uint64_t)WD_STATUS_INTEGER_OVERFLOW & 0xffffffff;

                                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread(), instance);
                                allocation_4 = allocation_3;
                            }
                        }
                    }
                    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        value_2 = 0x20;
                        goto block_20;
                    }
                }
                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    value_2 = 0x1f;
                    goto block_20;
                }
            }
            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                value_2 = 0x1e;
                instance = (uint64_t)((uint64_t)bytes) & 0xffffffff00000000 | (uint64_t)status & 0xffffffff;
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread(), instance);
                allocation_4 = allocation_3;
            }
        }
    }
    else
    {
        status = MpQueryFileName(data_2, value_18, &file_name, buffer_2);
        if (0 <= status)
        {
            goto block_2;
        }
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            value_2 = 0x1b;
            instance = (uint64_t)((uint64_t)bytes) & 0xffffffff00000000 | (uint64_t)status & 0xffffffff;
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread(), instance);
            allocation_4 = allocation_3;
        }
    }
    block_21:
    if (allocation_5 && byte_value_2)
    {
        ExFreePoolWithTag(allocation_5, 0x6165504d);
    }

    if (allocation_4)
    {
        ExFreePoolWithTag(allocation_4, 0x6c64504d);
    }
    if (stream_context)
    {
        FltReleaseContext();
    }
    if (handle_context && handle_context != data_pointer_15)
    {
        FltReleaseContext();
    }
    if (file_name && file_name != &value_9)
    {
        FltReleaseFileNameInformation(file_name);
    }
    if (file_name_2)
    {
        FltReleaseFileNameInformation(file_name_2);
    }
    return;
}

uint64_t MpDlpLoadProcessModuleNotifyRoutine(WD_LAYOUT_14 *input, WD_UNICODE_STRING_ADDRESS_VIEW *source_string)
{
    uint32_t *data_pointer;
    uint32_t index;
    if (!input || !source_string)
    {
        return WD_STATUS_INVALID_PARAMETER;
    }
    if (input->field_0xe4 != 2)
    {
        data_pointer = &WdDlpStorage8;
        for (index = 0; index <= 3; index = index + 1)
        {
            if (*(uint32_t *)(MpData + 0x360) & data_pointer[-1] && (!(*(int16_t *)(&data_pointer[-5])) || MpSuffixUnicodeString((WD_UNICODE_STRING_POINTER_VIEW *)((int32_t)index * 0x20LL + WD_DLP_UNRECOVERED_ADDRESS7), source_string)) && (!(*data_pointer) || *data_pointer & *(uint32_t *)(MpDlpData + 0x28)))
            {
                input->field_0xe4 = *(uint32_t *)((int32_t)index * 0x20LL + WD_DLP_UNRECOVERED_ADDRESS8);
                return 0;
            }
            data_pointer = &data_pointer[8];
        }
    }
    return 0;
}

uint64_t MpDlpIsProtectedProcess(void *input)
{
    uint32_t value;
    uint64_t value_2;
    uint64_t value_3;
    if (!(((uint32_t *)input)[0xd] & 0x1000))
    {
        value_2 = 0;
        WdUnresolvedAtomicBegin();
        value = *(uint32_t *)((int64_t)input + 0xc0);
        if (!value)
        {
            *(uint32_t *)((int64_t)input + 0xc0) = 0;
        }
        else
        {
            value_2 = value;
        }
        WdUnresolvedAtomicEnd();
        value_3 = (uint64_t)(value_2 >> 8);
        value_2 = ((uint64_t)value_3 & 0xffffffffffffffULL) << 8 | (uint64_t)(value != 0) & 0xffULL;
        return value_2;
    }
    value_3 = (uint64_t)(value_2 >> 8);
    value_2 = ((uint64_t)value_3 & 0xffffffffffffffULL) << 8 | (uint64_t)1 & 0xffULL;
    return value_2;
}

void MpDlpSearchNamedEA(uint32_t *input, uint64_t input_2, char *input_3)
{
    uint32_t value;
    uint32_t values[2];
    uint64_t value_2;
    values[0] = 0;
    value_2 = input_2 & 0xffffffff;
    if (input_3 && input && (int32_t)input_2)
    {
        if (0 <= (int32_t)IoCheckEaBufferValidity(input, input_2, values))
        {
            while (0xc <= (uint32_t)value_2 && _stricmp(&input[2], input_3))
            {
                value = *input;
                if (!value)
                {
                    break;
                }
                value_2 = (uint32_t)value_2 - value;
                input = (uint32_t *)((int64_t)input + (uint64_t)value);
            }
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x6c, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread(), values[0]);
        }
    }
    return;
}

void MpDlpCheckPreWriteOperation(int64_t data, void *input, void *input_2)
{
    uint64_t value;
    int64_t lock;
    int64_t handle_context;
    uint32_t event_id;
    uint32_t value_2;
    uint32_t value_3;
    uint32_t value_4;
    uint64_t value_5;
    uint32_t value_6;
    uint64_t value_7;
    uint32_t value_8;
    uint64_t trace_handle;
    uint32_t *data_pointer;
    int32_t value_9;
    uint32_t value_10;
    void *data_pointer_2;
    char byte_value;
    int32_t status;
    uint32_t requestor_process_id;
    int64_t requestor_process;
    uint64_t *index;
    int64_t process_context;
    value_6 = (uint32_t)((uint64_t)value_5 >> 0x20);
    value_8 = (uint32_t)((uint64_t)value_7 >> 0x20);
    lock = 0;
    event_id = 0;
    handle_context = 0;
    data_pointer_2 = input_2;
    if (!data || !input || !input_2)
    {
        return;
    }
    requestor_process = MpGetRequestorProcess();
    process_context = 0;
    if (requestor_process)
    {
        value_4 = 0x10;
        value_3 = *(uint32_t *)(((int64_t *)input_2)[1] + 0x54);
        if (value_3 & 0x10)
        {
            value_10 = 1;
            value_3 = 4;
            value_4 = 0x20;
        }
        else
        {
            process_context = 0;
            if (!(value_3 >> 0xb & 1))
            {
                goto block_1;
            }
            value_10 = 0;
            value_3 = 2;
        }
        status = MpGetProcessContextByObject(requestor_process, &lock);
        process_context = lock;
        if (0 <= status)
        {
            byte_value = MpDlpIsEnabled(data, lock);
            if (byte_value && (status = FltGetStreamHandleContext(((uint64_t *)input)[3], ((uint64_t *)input)[4], &handle_context), requestor_process = handle_context, 0 <= status))
            {
                if (handle_context && process_context)
                {
                    lock = handle_context + 0x40;
                    value_9 = -0x3ffffddb;
                    value_2 = 0;
                    FltAcquirePushLockShared(lock);
                    for (index = *(uint64_t **)((uint64_t *)(requestor_process + 0x30)); index != (uint64_t *)(requestor_process + 0x30); index = (uint64_t *)(*index))
                    {
                        if (index[2] == process_context)
                        {
                            value_2 = *(uint32_t *)(&index[5]);
                            value_9 = 0;
                            break;
                        }
                    }

                    FltReleasePushLock(lock);
                    if (0 <= value_9 && ((value_2 & value_4) == value_4 || (value_2 & value_3) == value_3))
                    {
                        goto block_1;
                    }
                    input_2 = data_pointer_2;
                }
                data_pointer = &event_id;
                value_8 = 0;
                status = MpDlpCheckOperation(data, input, process_context, *(uint32_t *)(((int64_t *)input_2)[1] + 0x54), ((uint64_t)value_6 & 0xffffffffULL) << 32 | (uint64_t)value_10 & 0xffffffffULL, NULL, data_pointer);
                if (status != 2)
                {
                    value_4 = value_3;
                }
                MpDlpSetProcessEntryFlags(data, input, process_context, handle_context, NULL, ((uint64_t)value_8 & 0xffffffffULL) << 32 | (uint64_t)(*(uint32_t *)(((int64_t *)input_2)[1] + 0x54)) & 0xffffffffULL, (uint64_t)((uint64_t)data_pointer) & 0xffffffff00000000 | (uint64_t)value_4 & 0xffffffff);
                if (status == 2)
                {
                    MpDlpBlockActionToNtStatus(process_context, &event_id, (uint32_t *)(data + 0x18));
                }
            }
        }
        else
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
            {
                value = *(uint64_t *)(data + 8);
                trace_handle = *(uint64_t *)(WPP_GLOBAL_Control + 0x18);
                requestor_process_id = MpGetRequestorProcessId(data);
                WPP_SF_qDL(trace_handle, 0x59, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), value, ((uint64_t)value_6 & 0xffffffffULL) << 32 | (uint64_t)requestor_process_id & 0xffffffffULL, ((uint64_t)value_8 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
            }
            process_context = lock;
        }
    }
    block_1:
    if (handle_context)
    {
        FltReleaseContext();
    }

    if (process_context)
    {
        MpReleaseProcessContext(process_context);
    }
    return;
}

uint64_t MpDlpProcessClearSensitiveSectionFileList(WD_LAYOUT_7 *input)
{
    int64_t *allocation;
    int64_t *data_pointer;
    int64_t **data_pointer_2;
    if (!input)
    {
        return WD_STATUS_INVALID_PARAMETER;
    }
    FltAcquirePushLockExclusive(&input->field_0x0[200]);
    data_pointer_2 = &input->field_0xd0;
    while (true)
    {
        allocation = *data_pointer_2;
        if ((int64_t **)allocation == data_pointer_2)
        {
            FltReleasePushLock(&input->field_0x0[200]);
            return 0;
        }
        if ((int64_t **)allocation[1] != data_pointer_2 || (data_pointer = (int64_t *)(*allocation), (int64_t *)data_pointer[1] != allocation))
        {
            break;
        }
        *data_pointer_2 = data_pointer;
        data_pointer[1] = (int64_t)data_pointer_2;
        MpDeleteDlpSectionFileNameEntry(allocation);
    }

    (*(WD_ROUTINE)swi(0x29))(3);
}

void MpDlpSetEnlightenedAppMarker(void *input, uint32_t input_2)
{
    uint16_t value;
    uint32_t value_2;
    uint32_t *allocation;
    uint64_t value_3;
    uint64_t value_4;
    uint32_t value_5;
    uint32_t *data_pointer;
    uint16_t value_6;
    uint32_t value_7;
    int64_t value_8;
    int64_t value_9;
    uint32_t value_10;
    uint64_t value_11;
    uint16_t *wide_text;
    uint32_t value_12;
    uint32_t value_13;
    uint64_t value_14;
    uint64_t value_15;
    uint64_t value_16;
    int32_t value_18;
    uint32_t value_19;
    uint16_t trace_argument_2;
    int64_t value_20;
    int64_t value_21;
    uint64_t value_22;
    value_5 = (uint32_t)((uint64_t)value_3 >> 0x20);
    value = ((uint16_t *)input)[8];
    value_21 = 0;
    allocation = NULL;
    value_20 = 0;
    value_10 = 0;
    value_13 = 0;
    value_22 = 0;
    value_16 = 0;
    if (!value || input_2 < value + 0x12)
    {
        return;
    }
    value_8 = (int64_t)input + 0x12;
    value_7 = 0;
    trace_argument_2 = value;
    value_6 = value;
    if ((int32_t)RtlUnicodeStringValidateWorker(&trace_argument_2, 0x7fff, 0) <= -1)
    {
        return;
    }
    wide_text = &trace_argument_2;
    value_2 = 0x30;
    value_11 = 0;
    data_pointer = &value_2;
    value_12 = 0x200;
    value_14 = 0;
    value_15 = 0;
    value_4 = ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)0x100000 & 0xffffffffULL;
    value_18 = MpFltCreateFileEx(*(uint64_t *)(MpData + 0x10), 0, &value_21, &value_20, value_4, data_pointer, &value_22);
    value_5 = (uint32_t)((uint64_t)value_4 >> 0x20);
    if (0 <= value_18 && value_18 != 0x108)
    {
        allocation = (uint32_t *)MpAllocatePoolWithTag(1, (char *)0x2c, 0x6165504d);
        if (allocation)
        {
            *allocation = 0;
            allocation[1] = 0x12100;
            allocation[2] = WdLoadField(&s_14001dce0, 0, 4);
            allocation[3] = WdLoadField(&s_14001dce0, 4, 4);
            allocation[4] = WdLoadField(&s_14001dce0, 8, 4);
            allocation[5] = WdLoadField(&s_14001dce0, 12, 4);
            allocation[6] = WdLoadField(&s_14001dce0, 16, 4);
            allocation[7] = WdLoadField(&s_14001dce0, 20, 4);
            allocation[8] = WdLoadField(&s_14001dce0, 24, 4);
            allocation[9] = WdLoadField(&s_14001dce0, 28, 4);
            *(uint16_t *)(&allocation[10]) = WdLoadField(&s_14001dce0, 32, 2);
            value_18 = MpSetFileKernelEa(value_20, allocation, 0x2c);
            if (value_18 <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                value_19 = 0x6b;
                value_4 = ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)value_18 & 0xffffffffULL;
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_19, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread(), value_4);
            }
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            value_19 = 0x6a;
            value_4 = ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INSUFFICIENT_RESOURCES & 0xffffffffULL;
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_19, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread(), value_4);
        }
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_qZD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x69, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread(), &trace_argument_2, (uint64_t)((uint64_t)data_pointer) & 0xffffffff00000000 | (uint64_t)value_18 & 0xffffffff);
    }
    if (value_21)
    {
        FltClose();
    }
    if (value_20)
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
    if (allocation)
    {
        ExFreePoolWithTag(allocation, 0x6165504d);
    }
    return;
}

void MpDlpShouldCheckMappedFileOperation(int64_t input, void *input_2, uint64_t *input_3)
{
    uint16_t value;
    char buffer[32];
    int64_t process[3];
    int64_t dlp_data;
    uint64_t *data_pointer;
    uint64_t *data_pointer_2;
    uint32_t value_2;
    uint16_t *wide_text;
    uint64_t process_id;
    uint64_t *data_pointer_3;
    int64_t *data_pointer_4;
    char byte_value;
    uint16_t *list_entry;
    int64_t lock;
    int64_t value_3;
    uint16_t *wide_text_2;
    process[2] = __security_cookie ^ (uint64_t)buffer;
    wide_text_2 = NULL;
    process[0] = 0;
    if (input_2)
    {
        if (!input)
        {
            process_id = ((uint64_t *)input_2)[3];
            if ((int32_t)PsLookupProcessByProcessId(process_id, process) < 0)
            {
                __security_check_cookie(process[2] ^ (uint64_t)buffer);
                return;
            }
            WdUnresolvedAtomicBegin();
            ObTotalReferences += 1;
            WdUnresolvedAtomicEnd();
        }
        if (input_3)
        {
            *input_3 = 0;
        }
        if (((char *)input_2)[0xe0])
        {
            lock = MpDlpData + 8;
            data_pointer_2 = (uint64_t *)(MpDlpData + 0x10);
        }
        else
        {
            lock = (int64_t)input_2 + 200;
            data_pointer_2 = &((uint64_t *)input_2)[0x1a];
        }
        FltAcquirePushLockShared();
        list_entry = wide_text_2;
        data_pointer_3 = (uint64_t *)(*data_pointer_2);
        wide_text = wide_text_2;
        while (data_pointer = data_pointer_3, value_2 = (uint32_t)wide_text_2, data_pointer != data_pointer_2)
        {
            data_pointer_3 = (uint64_t *)(*data_pointer);
            if (!(*(uint32_t *)(&data_pointer[2]) & 1))
            {
                process[1] = 0;
                data_pointer_4 = (int64_t *)data_pointer[6];
                if (data_pointer_4 && *data_pointer_4 && MmCanFileBeTruncated(data_pointer_4, &process[1]))
                {
                    *(uint32_t *)(&data_pointer[2]) = *(uint32_t *)(&data_pointer[2]) | 1;
                    data_pointer[6] = 0;
                }
                else
                {
                    dlp_data = process[0];
                    if (input)
                    {
                        dlp_data = input;
                    }
                    byte_value = MpIsFileMappedInProcess(&data_pointer[4], dlp_data, ((uint64_t *)input_2)[0x1f]);
                    dlp_data = MpDlpData;
                    if (byte_value == '\x01')
                    {
                        if (!input_3)
                        {
                            break;
                        }
                        if (!list_entry)
                        {
                            value_3 = MpDlpData + 0x90;
                            *(int32_t *)(MpDlpData + 0xa4) = *(int32_t *)(MpDlpData + 0xa4) + 1;
                            list_entry = (uint16_t *)ExpInterlockedPopEntrySList(value_3);
                            if (!list_entry)
                            {
                                *(int32_t *)(dlp_data + 0xa8) = *(int32_t *)(dlp_data + 0xa8) + 1;
                                list_entry = (uint16_t *)(*__guard_dispatch_icall_fptr)(*(uint32_t *)(dlp_data + 0xb4), *(uint32_t *)(dlp_data + 0xbc), *(uint32_t *)(dlp_data + 0xb8), value_3);
                            }
                            if (!list_entry)
                            {
                                value_2 = WD_STATUS_INSUFFICIENT_RESOURCES;
                                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                {
                                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x58, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread(), WD_STATUS_INSUFFICIENT_RESOURCES);
                                }
                                break;
                            }
                            list_entry[8] = 0;
                            list_entry[9] = 0;
                            list_entry[10] = 0xfe;
                            list_entry[0xb] = 0;
                            memset(&list_entry[0xc], 0, (char *)0xfe);
                            list_entry[0] = 0;
                            list_entry[1] = 0;
                            list_entry[2] = 0;
                            list_entry[3] = 0;
                            list_entry[4] = 0;
                            list_entry[5] = 0;
                            list_entry[6] = 0;
                            list_entry[7] = 0;
                            list_entry[1] = list_entry[10];
                            *(uint16_t **)(&list_entry[4]) = &list_entry[0xc];
                        }
                        value_2 = (int32_t)wide_text + 2 + (uint32_t)(*(uint16_t *)(&data_pointer[4]));
                        wide_text = (uint16_t *)((uint64_t)value_2);
                        if (0xffff <= value_2)
                        {
                            value_2 = 0xc0000106;
                            break;
                        }
                        if ((uint64_t)value_2 <= *(uint32_t *)(&list_entry[10]) - 2ULL)
                        {
                            wide_text_2 = NULL;
                        }
                        else
                        {
                            value_2 = MpDlpReallocMappedFileNamesArray(list_entry, value_2 + 2);
                            wide_text_2 = (uint16_t *)((uint64_t)value_2);
                            if ((int32_t)value_2 < 0)
                            {
                                break;
                            }
                        }
                        memmove((uint64_t *)((uint64_t)(*list_entry) + *(int64_t *)(&list_entry[4])), (uint64_t *)data_pointer[5], *(uint16_t *)(&data_pointer[4]));
                        *list_entry = *list_entry + *(int16_t *)(&data_pointer[4]) + 2;
                    }
                }
            }
        }

        FltReleasePushLock(lock);
        if (process[0])
        {
            ObfDereferenceObject();
            lock = ObTotalReferences;
            WdUnresolvedAtomicBegin();
            ObTotalReferences -= 1;
            WdUnresolvedAtomicEnd();
            if (lock + -1 <= -1 && *(int32_t *)(MpData + 0x364) <= -1)
            {
                if (KdRefreshDebuggerNotPresent())
                {
                    KeBugCheck(1);
                }
                (*(WD_ROUTINE)swi(3))();
                return;
            }
        }
        if (list_entry)
        {
            if (0 <= (int32_t)value_2)
            {
                *input_3 = list_entry;
            }
            else
            {
                MpDlpCleanupMappedFileNamesArray(list_entry);
                lock = MpDlpData;
                dlp_data = MpDlpData + 0x90;
                *(int32_t *)(MpDlpData + 0xac) = *(int32_t *)(MpDlpData + 0xac) + 1;
                value = *(uint16_t *)(lock + 0xa0);
                if (value <= (uint16_t)ExQueryDepthSList(dlp_data))
                {
                    *(int32_t *)(lock + 0xb0) = *(int32_t *)(lock + 0xb0) + 1;
                    (*__guard_dispatch_icall_fptr)(list_entry, dlp_data);
                }
                else
                {
                    ExpInterlockedPushEntrySList(dlp_data, list_entry);
                }
            }
        }
    }
    __security_check_cookie(process[2] ^ (uint64_t)buffer);
    return;
}

uint16_t *MpDlpCheckOperation(int64_t data, WD_LAYOUT_39 *input, void *input_2, uint32_t input_3, uint32_t input_4, uint16_t *input_5, uint32_t *input_6)
{
    uint16_t value;
    int32_t allocation_size;
    int64_t value_2;
    uint16_t *wide_text;
    uint16_t *wide_text_2 = NULL;
    uint64_t value_3;
    int64_t dlp_data;
    uint16_t *requestor_process;
    uint32_t *allocation;
    uint16_t *wide_text_3;
    char buffer[4];
    int64_t values[2];
    uint32_t value_4 = 0;
    values[0] = 0;
    buffer[0] = 0;
    wide_text_3 = NULL;
    if (!MpDlpIsEnabled(data, input_2))
    {
        return NULL;
    }
    requestor_process = wide_text_2;
    if (!MpDlpIsProtectedProcess(input_2))
    {
        if (2 <= input_4)
        {
            return NULL;
        }
        if (data && (dlp_data = MpGetRequestorProcessIdEx(data), dlp_data == ((int64_t *)input_2)[3]))
        {
            requestor_process = (uint16_t *)MpGetRequestorProcess(data);
        }
        else
        {
            dlp_data = ((int64_t *)input_2)[3];
            if (PsGetCurrentProcessId() == dlp_data)
            {
                requestor_process = (uint16_t *)IoGetCurrentProcess();
            }
        }
        if (!MpDlpShouldCheckMappedFileOperation(requestor_process, input_2, &wide_text_3) && (((int32_t *)input_2)[0x3c] != 0x14 || !(MpFcKernelGetValue(0xd8) & 2)))
        {
            requestor_process = wide_text_3;
            goto block_2;
        }
        requestor_process = wide_text_3;
    }
    if (input_5 && *input_5)
    {
        wide_text = input_5;
        block_1:
        allocation_size = 0x48;

        if (*wide_text)
        {
            allocation_size = *wide_text + 0x4a;
        }
    }
    else
    {
        wide_text = wide_text_2;
        if (data)
        {
            wide_text = NULL;
            if (0 <= (int32_t)MpQueryFileName(data, input_3, values, buffer))
            {
                wide_text = (uint16_t *)(values[0] + 8);
            }
        }
        allocation_size = 0x48;
        if (wide_text)
        {
            goto block_1;
        }
    }
    dlp_data = 0x48;
    if (requestor_process && *requestor_process)
    {
        allocation_size += (uint32_t)(*requestor_process);
    }
    allocation = (uint32_t *)MpAllocatePoolWithTag(1, allocation_size, 0x6c64504d);
    if (allocation)
    {
        *allocation = 0x500a3;
        allocation[1] = allocation_size;
        if (input)
        {
            wide_text_2 = input->field_0x20;
        }
        MpGetPriorityInfo(data, wide_text_2, (WD_LAYOUT_26 *)(&allocation[2]));
        allocation[0xe] = ((uint32_t *)input_2)[6];
        value_3 = ((uint64_t *)input_2)[4];
        *(uint64_t *)(&allocation[6]) = MpFileTimeFromUlong64(value_3);
        MpQuerySessionId(&allocation[0xf]);
        allocation[0x10] = input_4;
        allocation[0x11] = input_3;
        if (wide_text && *wide_text)
        {
            *(uint64_t *)(&allocation[8]) = 0x48;
            memmove(&allocation[0x12], *(uint64_t **)(&wide_text[4]), *wide_text);
            *(uint16_t *)((int64_t)allocation + *(int64_t *)(&allocation[8]) + (uint64_t)(*wide_text >> 1) * 2) = 0;
            value = *wide_text;
            allocation[0xc] = (uint32_t)value;
            dlp_data = value + 0x4aULL;
        }
        if (requestor_process && *requestor_process)
        {
            *(int64_t *)(&allocation[10]) = dlp_data;
            memmove((uint64_t *)((int64_t)allocation + dlp_data), *(uint64_t **)(&requestor_process[4]), *requestor_process);
            allocation[0xd] = (uint32_t)(*requestor_process);
        }
        allocation_size = MpDlpQueryService(input_3, allocation, &value_4, input_6);
        if (0 <= allocation_size)
        {
            wide_text_2 = (uint16_t *)((uint64_t)value_4);
            if (value_4 == 3)
            {
                wide_text_2 = NULL;
            }
        }
        else
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x33, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread(), allocation_size);
            }
            wide_text_2 = (uint16_t *)((uint64_t)value_4);
        }
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && (wide_text_2 = NULL, *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
    {
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x32, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread(), WD_STATUS_INSUFFICIENT_RESOURCES);
    }
    if (values[0])
    {
        FltReleaseFileNameInformation(values[0]);
    }
    if (allocation)
    {
        ExFreePoolWithTag(allocation, 0x6c64504d);
    }
    block_2:
    if (requestor_process)
    {
        MpDlpCleanupMappedFileNamesArray(requestor_process);
        dlp_data = MpDlpData;
        value_2 = MpDlpData + 0x90;
        *(int32_t *)(MpDlpData + 0xac) = *(int32_t *)(MpDlpData + 0xac) + 1;
        value = *(uint16_t *)(dlp_data + 0xa0);
        if (value <= (uint16_t)ExQueryDepthSList(value_2))
        {
            *(int32_t *)(dlp_data + 0xb0) = *(int32_t *)(dlp_data + 0xb0) + 1;
            (*__guard_dispatch_icall_fptr)(requestor_process, value_2);
        }
        else
        {
            ExpInterlockedPushEntrySList(value_2, requestor_process);
        }
    }

    return wide_text_2;
}

void MpDlpCleanupMappedFileNamesArray(void *input)
{
    uint16_t value;
    uint64_t allocation;
    int64_t dlp_data;
    int64_t value_2;
    dlp_data = MpDlpData;
    if (!(((uint32_t *)input)[4] & 1))
    {
        return;
    }
    allocation = ((uint64_t *)input)[1];
    if (((uint32_t *)input)[4] & 2)
    {
        value_2 = MpDlpData + 0x30;
        *(int32_t *)(MpDlpData + 0x4c) = *(int32_t *)(MpDlpData + 0x4c) + 1;
        value = *(uint16_t *)(dlp_data + 0x40);
        if (value <= (uint16_t)ExQueryDepthSList(value_2))
        {
            *(int32_t *)(dlp_data + 0x50) = *(int32_t *)(dlp_data + 0x50) + 1;
            (*__guard_dispatch_icall_fptr)(allocation, value_2);
        }
        else
        {
            ExpInterlockedPushEntrySList(value_2, allocation);
        }
        *(uint32_t *)((int64_t)input + 0x10) = *(uint32_t *)((int64_t)input + 0x10) & 0xfffffffd;
    }
    else
    {
        ExFreePoolWithTag(allocation, 0x666d504d);
    }
    *(uint32_t *)((int64_t)input + 0x10) = *(uint32_t *)((int64_t)input + 0x10) & 0xfffffffe;
    return;
}

void MpDlpCopyPolicyToDestination(WD_LAYOUT_88 *input, int16_t *input_2)
{
    bool enabled;
    uint64_t value;
    uint64_t value_2;
    uint64_t value_3;
    int64_t value_4;
    uint32_t value_5;
    int64_t value_6;
    uint64_t value_7;
    uint64_t value_8;
    uint64_t value_9;
    int64_t value_10;
    uint32_t values[2];
    uint32_t *data_pointer;
    bool enabled_2;
    uint64_t value_11;
    uint64_t value_12;
    uint64_t *data_pointer_2;
    uint32_t *data_pointer_3;
    uint64_t *data_pointer_4;
    uint64_t value_13;
    uint64_t value_14;
    uint32_t value_15;
    uint64_t *data_pointer_5;
    uint32_t value_16;
    uint32_t value_17;
    uint32_t value_18;
    uint64_t value_19;
    int16_t *wide_text;
    uint32_t value_20;
    uint32_t value_21;
    uint64_t value_22;
    int32_t status;
    uint64_t value_23;
    uint32_t value_24;
    uint64_t value_25;
    uint64_t value_26;
    uint64_t value_27;
    uint64_t value_28;
    uint32_t *allocation;
    uint32_t *data_pointer_6;
    uint32_t *data_pointer_7;
    WD_LAYOUT_87 *record;
    uint32_t value_30;
    value_15 = (uint32_t)((uint64_t)value_13 >> 0x20);
    data_pointer_6 = NULL;
    value_6 = 0;
    value_4 = 0;
    value_18 = 0;
    value_21 = 0;
    data_pointer = NULL;
    value_8 = 0;
    value_24 = 0;
    value_28 = 0;
    enabled = 0;
    values[0] = 0;
    value_3 = 0;
    value_25 = 0;
    value_9 = 0;
    value_26 = 0;
    value_7 = 0;
    value_27 = 0;
    if (!input_2 || !(*input_2) || !(*(int64_t *)(MpData + 0x98)))
    {
        return;
    }
    value_17 = 0x10040;
    value_16 = 1;
    data_pointer_3 = &value_5;
    value_19 = 0;
    value_5 = 0x30;
    value_20 = 0x240;
    value_22 = 0;
    value_23 = 0;
    wide_text = input_2;
    status = MpFltCreateFileEx(*(uint64_t *)(MpData + 0x10), 0, &value_6, &value_4, (uint64_t)value_11 & 0xffffffff00000000 | (uint64_t)8 & 0xffffffff, data_pointer_3, &value_3);
    allocation = data_pointer_6;
    if (status <= -1)
    {
        goto block_5;
    }
    data_pointer_5 = &value_7;
    data_pointer_4 = &value_8;
    data_pointer_2 = &value_9;
    value_8 = 0x3000c0001;
    value_24 = 1;
    status = ZwFsControlFile(value_6, 0, 0, 0, data_pointer_2, (uint64_t)((uint64_t)data_pointer_3) & 0xffffffff00000000 | (uint64_t)0x90240 & 0xffffffff, data_pointer_4, ((uint64_t)value_15 & 0xffffffffULL) << 32 | (uint64_t)0xc & 0xffffffffULL, data_pointer_5, 0x18, value_16, value_17);
    allocation = data_pointer;
    if (status != 0x103)
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2))
        {
            goto block_5;
        }
        value = 0x60;
        allocation = data_pointer_6;
        block_1:
        value_12 = (uint64_t)((uint64_t)data_pointer_2) & 0xffffffff00000000 | (uint64_t)status & 0xffffffff;

        data_pointer = allocation;
        block_2:
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread(), value_12);

        allocation = data_pointer;
    }
    else
    {
        data_pointer_2 = (uint64_t *)((uint64_t)((uint64_t)data_pointer_2) & 0xffffffff00000000 | (uint64_t)7 & 0xffffffff);
        status = ZwQueryInformationFile(value_6, &value_3, values, 4, data_pointer_2);
        if (0 <= status)
        {
            value_2 = (uint64_t)values[0];
            allocation = data_pointer_6;
            if (values[0])
            {
                do
                {
                    if (allocation)
                    {
                        ExFreePoolWithTag(allocation, 0x6165504d);
                        data_pointer = NULL;
                        value_2 = (value_2 & 0xffffffff) * 2;
                        if (0x100000000 <= value_2)
                        {
                            allocation = NULL;
                            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                            {
                                goto block_5;
                            }
                            value = 0x62;
                            value_12 = (uint64_t)((uint64_t)data_pointer_2) & 0xffffffff00000000 | (uint64_t)WD_STATUS_INTEGER_OVERFLOW & 0xffffffff;
                            goto block_2;
                        }
                    }
                    allocation = (uint32_t *)MpAllocatePoolWithTag(1, value_2 & 0xffffffff, 0x6165504d);
                    data_pointer = allocation;
                    if (!allocation)
                    {
                        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                        {
                            goto block_5;
                        }
                        value = 99;
                        value_12 = (uint64_t)((uint64_t)data_pointer_2) & 0xffffffff00000000 | (uint64_t)WD_STATUS_INSUFFICIENT_RESOURCES & 0xffffffff;
                        goto block_2;
                    }
                    data_pointer_5 = (uint64_t *)((uint64_t)((uint64_t)data_pointer_5) & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
                    data_pointer_4 = (uint64_t *)((uint64_t)data_pointer_4 & 0xffffffff00000000);
                    data_pointer_2 = (uint64_t *)((uint64_t)data_pointer_2 & 0xffffffffffffff00);
                    status = ZwQueryEaFile(value_6, &value_3, allocation, value_2 & 0xffffffff, data_pointer_2, 0, data_pointer_4, 0, data_pointer_5);
                    value_14 = value_25;
                }
                while (status == -0x7ffffffb || status == -0x3fffffdd);
                if (0 <= status)
                {
                    status = (int32_t)value_25;
                    data_pointer_7 = data_pointer_6;
                    enabled_2 = enabled;
                    if (*(char *)(MpDlpData + 0x10a))
                    {
                        if (!(int32_t)value_25)
                        {
                            goto block_5;
                        }
                        data_pointer_6 = (uint32_t *)MpDlpSearchNamedEA(allocation, value_25 & 0xffffffff, "$Kernel.SEC.MarkOfWeb");
                        enabled_2 = data_pointer_6 != NULL;
                        data_pointer_7 = (uint32_t *)MpDlpSearchNamedEA(allocation, value_14 & 0xffffffff, "$Kernel.SEC.ApplicationSource");
                        if (data_pointer_7)
                        {
                            enabled = 1;
                        }
                    }
                    value_15 = (uint32_t)((uint64_t)data_pointer_2 >> 0x20);
                    if (status && (record = (WD_LAYOUT_87 *)MpDlpSearchNamedEA(allocation, value_14 & 0xffffffff, "$Kernel.SEC.EndpointDlp"), record))
                    {
                        value_30 = record->field_0x6;
                        record->field_0x0 = 0;
                        status = (*__guard_dispatch_icall_fptr)(input->field_0x20, record, (uint32_t)record->field_0x5 + value_30 + 9);
                        if (0 <= status)
                        {
                            goto block_4;
                        }
                        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                        {
                            goto block_5;
                        }
                        value = 0x65;
                        block_3:
                        value_12 = ((uint64_t)value_15 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL;

                        goto block_2;
                    }
                    block_4:
                    if (enabled_2)
                    {
                        value_30 = ((uint16_t *)data_pointer_6)[3];
                        *data_pointer_6 = 0;
                        status = (*__guard_dispatch_icall_fptr)(input->field_0x20, data_pointer_6, (uint32_t)((uint8_t *)data_pointer_6)[5] + value_30 + 9);
                        if (status <= -1)
                        {
                            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                            {
                                goto block_5;
                            }
                            value = 0x66;
                            goto block_3;
                        }
                    }

                    if (enabled)
                    {
                        value_30 = ((uint16_t *)data_pointer_7)[3];
                        *data_pointer_7 = 0;
                        status = (*__guard_dispatch_icall_fptr)(input->field_0x20, data_pointer_7, (uint32_t)((uint8_t *)data_pointer_7)[5] + value_30 + 9);
                        if (status <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            value = 0x67;
                            goto block_3;
                        }
                    }
                }
                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    value = 100;
                    goto block_1;
                }
            }
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            value = 0x61;
            goto block_1;
        }
    }
    block_5:
    if (value_6)
    {
        FltClose();
    }

    if (value_4)
    {
        ObfDereferenceObject();
        value_10 = ObTotalReferences;
        WdUnresolvedAtomicBegin();
        ObTotalReferences -= 1;
        WdUnresolvedAtomicEnd();
        if (value_10 + -1 <= -1 && *(int32_t *)(MpData + 0x364) <= -1)
        {
            if (KdRefreshDebuggerNotPresent())
            {
                KeBugCheck(1);
            }
            (*(WD_ROUTINE)swi(3))();
            return;
        }
    }
    if (allocation)
    {
        ExFreePoolWithTag(allocation, 0x6165504d);
    }
    return;
}

uint64_t MpDlpDetermineServiceQueryParameters(uint32_t input, int32_t *input_2, char *input_3, int64_t *input_4, int64_t *input_5, uint32_t *input_6)
{
    int64_t *data_pointer;
    bool enabled;
    int64_t value;
    int64_t value_2;
    int64_t data;
    int64_t data_2;
    int64_t *data_pointer_2;
    uint64_t event_id;
    uint32_t value_3;
    int64_t value_4;
    data_2 = MpData;
    value_4 = 30000;
    value_3 = 1;
    data_pointer = (int64_t *)(MpData + 0x140);
    if (!input_3 || !input_4 || !input_5 || !input_2)
    {
        return WD_STATUS_INVALID_PARAMETER;
    }
    *input_5 = 0;
    if (input_6)
    {
        *input_6 = 1;
    }
    data = MpData;
    value = *(int64_t *)(data_2 + 0x150);
    enabled = value != 0;
    data_pointer_2 = (int64_t *)(data_2 + 0x150);
    value_2 = value;
    if (!enabled)
    {
        value_2 = *data_pointer;
        data_pointer_2 = data_pointer;
    }
    if (!value_2 || *(char *)(data_2 + 0xd0) || *(char *)(MpDlpData + 0x10d))
    {
        if (*(char *)(MpData + 0xd0) || *(char *)(MpDlpData + 0x10d))
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return 0xc0000037;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return 0xc0000037;
            }
            event_id = 0x34;
        }
        else
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return 0xc0000037;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return 0xc0000037;
            }
            event_id = 0x35;
        }
        WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), 0xc0000037);
        return 0xc0000037;
    }
    if (input & 0x10 && (*(int64_t *)(MpData + 0x180) || *(int64_t *)(MpData + 400)))
    {
        if (!(*(int64_t *)(MpData + 400)) || (data_pointer_2 = (int64_t *)(MpData + 400), !value))
        {
            enabled = 0;
            data_pointer_2 = (int64_t *)(MpData + 0x180);
        }
        value_3 = 2;
    }
    else
    {
        if (2 <= *input_2)
        {
            goto block_1;
        }
        data_pointer_2 = (int64_t *)(MpData + 0x170);
        if (!(*data_pointer_2) || !value)
        {
            data_pointer_2 = (int64_t *)(MpData + 0x160);
            enabled = 0;
        }
        value_3 = 3;
    }
    value_4 = 60000;
    block_1:
    *input_3 = enabled;

    *input_5 = (int64_t)data_pointer_2;
    data_2 = 0;
    if (!(*(char *)(data + 0x9a0)))
    {
        data_2 = value_4;
    }
    *input_4 = data_2 * -10000;
    if (input_6)
    {
        *input_6 = value_3;
    }
    return 0;
}

void MpDlpDeviceCallback(uint64_t input, int32_t *input_2, WD_LAYOUT_121 *input_3)
{
    uint32_t value;
    if (*(int32_t *)(MpDlpData + 0x128) && input_2 && *input_2 == 1 && (value = input_2[1], (uint32_t)(value - 1U) <= 3 && input_3))
    {
        if (MpDlpIsEnabled(2))
        {
            if (value != 1)
            {
                if (value != 2)
                {
                    if (value != 3)
                    {
                        if (value == 4)
                        {
                            MpDlpDeviceCallbackOnEnumerateDevice(input_2, input_3);
                        }
                    }
                    else
                    {
                        MpDlpDeviceCallbackOnDeviceAccess(input_2, input_3);
                    }
                }
                else
                {
                    MpDlpDeviceCallbackOnDeviceRemoval(input_2, input_3);
                }
            }
            else
            {
                MpDlpDeviceCallbackOnDeviceArrival(input_2, input_3);
            }
        }
    }
    return;
}

void MpDlpDeviceCallbackOnDeviceAccess(int32_t *input, WD_LAYOUT_120 *input_2)
{
    int64_t value;
    uint32_t value_2;
    int64_t process_context;
    char byte_value;
    int32_t trace_argument_1;
    int64_t process_context_2;
    int32_t values[2];
    uint32_t event_id[2];
    if (input)
    {
        process_context_2 = 0;
        values[0] = 0;
        event_id[0] = 0;
        if (*input == 1 && input[1] == 3 && input_2)
        {
            value = input_2->field_0x0;
            if (value && input_2->field_0x40 && (trace_argument_1 = input_2->field_0x10, trace_argument_1 != 5 && trace_argument_1 != 2))
            {
                if (trace_argument_1 != 4)
                {
                    value_2 = input_2->field_0x8 & 2;
                }
                else
                {
                    value_2 = input_2->field_0x8 & 0x10;
                }
                if (value_2)
                {
                    trace_argument_1 = MpGetProcessContextByObject(*(uint64_t *)(input_2->field_0x40 + 0x10), &process_context_2);
                    process_context = process_context_2;
                    if (0 <= trace_argument_1)
                    {
                        if (process_context_2)
                        {
                            byte_value = MpDlpIsEnabled(0, process_context_2);
                            if (byte_value && (MpDlpIsProtectedProcess(process_context) || input_2->field_0x10 == 4 || input_2->field_0x10 == 3))
                            {
                                trace_argument_1 = MpDlpSendOnDeviceAccessServiceMessage();
                                if (0 <= trace_argument_1)
                                {
                                    if (values[0] == 2)
                                    {
                                        MpLogPrintfW(L"[DLP-Filter] Denied Process \'%wZ\' (pid = %#x) from writing to Device \'%wZ\', reason: %d.", *(uint64_t *)(process_context + 0x80), *(uint32_t *)(process_context + 0x18), *(uint64_t *)(value + 0x58), event_id[0]);
                                        values[0] = -0x3fffffde;
                                        MpDlpBlockActionToNtStatus(process_context, event_id, values);
                                        input_2->field_0x54 = values[0];
                                        input_2->field_0x50 = 0;
                                        input_2->field_0x4c = 0xc;
                                        input_2->field_0x48 = 1;
                                    }
                                }
                                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                {
                                    WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xb1, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), trace_argument_1);
                                }
                            }
                            MpReleaseProcessContext(process_context);
                        }
                    }
                    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xb0, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), trace_argument_1);
                    }
                }
            }
        }
    }
    return;
}

void MpDlpDeviceCallbackOnDeviceArrival(int32_t *input, WD_LAYOUT_121 *input_2)
{
    int32_t value;
    if (input && *input == 1 && input[1] == 1 && (input_2 && MpDlpIsEnabled(2)) && (value = MpDlpSendOnDeviceArrivalServiceMessage(input_2), value <= -1 && (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)))
    {
        WPP_SF_ZD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xad, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), input_2->field_0x58, value);
    }
    return;
}

void MpDlpDeviceCallbackOnDeviceRemoval(int32_t *input, WD_LAYOUT_121 *input_2)
{
    int32_t value;
    if (input && *input == 1 && input[1] == 2 && (input_2 && MpDlpIsEnabled(2)) && (value = MpDlpSendOnDeviceRemovalServiceMessage(input_2), value <= -1 && (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)))
    {
        WPP_SF_ZD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xae, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), input_2->field_0x58, value);
    }
    return;
}

void MpDlpDeviceCallbackOnEnumerateDevice(int32_t *input, WD_LAYOUT_122 *input_2)
{
    WD_LAYOUT_121 *record;
    int32_t value;
    if (input && *input == 1 && input[1] == 4 && (input_2 && MpDlpIsEnabled(2)) && (input_2->field_0x0 == 1 && (record = input_2->field_0x8, record && (value = MpDlpSendOnDeviceEnumerationServiceMessage(record), value <= -1))) && (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2))
    {
        WPP_SF_ZD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xaf, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), record->field_0x58, value);
    }
    return;
}

uint64_t MpDlpFreeDeviceAccessServiceMessageRequest(int64_t allocation)
{
    if (!allocation)
    {
        return WD_STATUS_INVALID_PARAMETER;
    }
    ExFreePoolWithTag(allocation, 0x6c64504d);
    return 0;
}

void MpDlpGetOsDependentEnlightmentFlags(uint32_t *input)
{
    int32_t value;
    uint64_t value_2;
    uint64_t value_3;
    uint32_t value_4;
    uint32_t value_5 = 0;
    uint64_t value_6;
    uint64_t value_7;
    int64_t allocation;
    uint32_t object_attributes;
    int64_t key_handle = 0;
    uint32_t values[2];
    uint32_t *data_pointer;
    int64_t value_9 = 0;
    uint32_t value_10 = 0;
    values[0] = 0;
    if (input)
    {
        *input = 0;
        if (*(uint32_t *)(MpData + 0x360) >> 10 & 1)
        {
            if (*(uint32_t *)(MpData + 0x360) >> 0xd & 1)
            {
                *input = 1;
            }
            else
            {
                object_attributes = 0x30;
                value_3 = WD_DLP_UNRECOVERED_ADDRESS6;
                value_2 = 0;
                value_4 = 0x240;
                value_6 = 0;
                value_7 = 0;
                allocation = 0;
                if (0 <= (int32_t)ZwOpenKey(&key_handle, 0x20019, &object_attributes))
                {
                    data_pointer = values;
                    value = MpQueryValueKey(key_handle, WD_DLP_UNRECOVERED_ADDRESS5);
                    allocation = value_9;
                    if (0 <= value && *(int32_t *)(value_9 + 4) == 3 && *(uint32_t *)(value_9 + 8) <= 8 && *(uint8_t *)(value_9 + 0xc) & 1)
                    {
                        *input = *input | 1;
                    }
                }
                if (key_handle)
                {
                    ZwClose();
                }
                if (allocation)
                {
                    MpFreeKeyData(allocation);
                }
            }
        }
    }
    return;
}

uint64_t MpDlpInitializeEnlightenment(void)
{
    int64_t dlp_data;
    uint64_t value;
    uint32_t values[8];
    if (!MpDlpData)
    {
        return WD_STATUS_INVALID_PARAMETER;
    }
    if (*(char *)(MpDlpData + 0x2c))
    {
        return 0;
    }
    if (*(uint32_t *)(MpData + 0x360) & 0x2000)
    {
        *(uint32_t *)(MpDlpData + 0x28) = *(uint32_t *)(MpDlpData + 0x28) | 1;
    }
    values[0] = 0;
    value = MpDlpGetOsDependentEnlightmentFlags(values);
    dlp_data = MpDlpData;
    if (0 <= (int32_t)value)
    {
        *(uint32_t *)(MpDlpData + 0x28) = values[0];
        *(char *)(dlp_data + 0x2c) = 1;
    }
    return value;
}

uint64_t MpDlpInitializeSystemFolders(void)
{
    uint64_t value;
    int32_t value_2;
    uint64_t dlp_data;
    uint64_t name = 0;
    int64_t name_2 = 0;
    uint64_t name_3 = 0;
    bool enabled;
    if (!(*(int64_t *)(MpDlpData + 0x118)) || (dlp_data = MpDlpData, !(*(int64_t *)(MpDlpData + 0x120))))
    {
        dlp_data = MpGetSystemFolderPath(L"\\SystemRoot\\", &name_2);
        if (0 <= value_2)
        {
            dlp_data = MpGetSystemFolderPath(L"\\SystemRoot\\Temp\\", &name_3);
            if (0 <= value_2)
            {
                WdUnresolvedAtomicBegin();
                enabled = *(int64_t *)(MpDlpData + 0x118) == 0;
                if (enabled)
                {
                    *(int64_t *)(MpDlpData + 0x118) = name_2;
                }
                WdUnresolvedAtomicEnd();
                if (enabled)
                {
                    name_2 = 0;
                }
                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                {
                    WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x6f, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids));
                }
                name = name_3;
                dlp_data = 0;
                WdUnresolvedAtomicBegin();
                value = *(uint64_t *)(MpDlpData + 0x120);
                if (!value)
                {
                    *(uint64_t *)(MpDlpData + 0x120) = name_3;
                }
                else
                {
                    dlp_data = value;
                }
                WdUnresolvedAtomicEnd();
                if (!value)
                {
                    name = 0;
                }
                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && (dlp_data = *(uint32_t *)(WPP_GLOBAL_Control + 0x2c), *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4))
                {
                    dlp_data = WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x70, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids));
                }
            }
            else
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    dlp_data = WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x6e, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread(), value_2);
                }
                name = name_3;
            }
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            dlp_data = WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x6d, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread(), value_2);
        }
        if (name_2)
        {
            dlp_data = MpFreeObjectName(name_2);
        }
        if (name)
        {
            dlp_data = MpFreeObjectName(name);
        }
    }
    return dlp_data;
}

int64_t MpDlpIsExtSupported(int32_t input)
{
    uint64_t value;
    int32_t value_2;
    uint64_t dlp_data;
    dlp_data = MpDlpData;
    if (!(*(char *)(MpDlpData + 0x10b)))
    {
        value_2 = input + -1;
        dlp_data = 0;
        switch (value_2)
        {
            case 0:

            case 0x24:

            case 0x2b:

            case 0x2c:

            case 0x2d:

            case 0x2e:

            case 0x2f:

            case 0x30:

            case 0x31:

            case 0x32:

            case 0x33:

            case 0x34:
                dlp_data = 0;
                return dlp_data;
        }
    }
    value = dlp_data >> 8;
    dlp_data = ((uint64_t)((uint64_t)value) & 0xffffffffffffffULL) << 8 | (uint64_t)1 & 0xffULL;
    return dlp_data;
}

void MpDlpQueryEaByName(int64_t input, WD_LAYOUT_32 *input_2, char *input_3)
{
    int64_t value;
    uint64_t value_2;
    uint32_t value_3;
    uint64_t instance;
    uint32_t value_4;
    uint32_t value_5 = 0;
    uint64_t value_6;
    int64_t value_7;
    uint32_t value_8;
    uint32_t value_9 = 0;
    uint64_t value_10;
    char byte_value;
    uint64_t value_11;
    uint64_t value_12;
    int32_t trace_argument_1;
    uint64_t event_id;
    int64_t value_14 = 0;
    int64_t *data_pointer = NULL;
    int64_t file_object;
    int64_t values[10];
    values[9] &= 0xffffffffffff0000;
    values[3] = 0;
    values[4] &= 0xffffffffffff0000;
    file_object = 0;
    values[0] = 0;
    value_2 = 0;
    value_12 = 0;
    values[5] = 0;
    values[6] = 0;
    values[7] = 0;
    values[8] = 0;
    values[1] = 0;
    values[2] = 0;
    if (!input || !input_2 || !input_3)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x4d, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), WD_STATUS_INVALID_PARAMETER);
        }
        return;
    }
    *input_3 = '\0';
    input_2->field_0x0 = 0;
    input_2->field_0x8 = 0;
    if (*(uint32_t *)(MpData + 0x360) & 0x40)
    {
        values[9] = 1;
        values[5] = 0x28;
    }
    else
    {
        values[1] = 0x20;
        values[4] = 0;
    }
    values[8] = 0;
    values[7] = 0;
    values[6] = 0;
    values[3] = 0;
    values[2] = 0;
    value_3 = 0x30;
    value_6 = 0;
    value_8 = 0x240;
    value_10 = 0;
    value_11 = 0;
    value_7 = input;
    trace_argument_1 = FltAllocateExtraCreateParameterList(*(uint64_t *)(MpData + 0x10), 0, &value_14);
    if (0 <= trace_argument_1)
    {
        value_4 = 0;
        trace_argument_1 = FltAllocateExtraCreateParameterFromLookasideList(*(uint64_t *)(MpData + 0x10), WD_SYMBOL_ADDRESS(GUID_MP_ECP_QUERY_EA), 0x10, 0, 0, MpData + 0x7c0, &data_pointer);
        if (0 <= trace_argument_1)
        {
            *data_pointer = 0;
            data_pointer[1] = 0;
            trace_argument_1 = FltInsertExtraCreateParameter(*(uint64_t *)(MpData + 0x10), value_14, data_pointer);
            if (0 <= trace_argument_1)
            {
                if (*(uint32_t *)(MpData + 0x360) & 0x40)
                {
                    values[6] = value_14;
                }
                else
                {
                    values[2] = value_14;
                }
                trace_argument_1 = MpFltCreateFileEx2(*(uint64_t *)(MpData + 0x10), 0, values, &file_object, ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)0x80 & 0xffffffffULL, &value_3, &value_2);
                if (0 <= trace_argument_1)
                {
                    if (*(uint32_t *)(MpData + 0x360) & 0x800 && *(int64_t *)(MpData + 0x60) && *(int64_t *)(MpData + 0x58))
                    {
                        byte_value = FltIsEcpAcknowledged(*(uint64_t *)(MpData + 0x10), data_pointer);
                        if (byte_value)
                        {
                            input_2->field_0x0 = *(uint32_t *)(&data_pointer[1]);
                            *(uint32_t *)(&data_pointer[1]) = 0;
                            input_2->field_0x8 = *data_pointer;
                            *data_pointer = 0;
                            *input_3 = '\x01';
                        }
                        else
                        {
                            *input_3 = '\0';
                        }
                    }
                    else
                    {
                        instance = 0;
                        trace_argument_1 = MpGetInstanceFromFileObject(file_object, &instance);
                        if (0 <= trace_argument_1)
                        {
                            MpDlpQueryEa(NULL, instance, file_object, input_2, input_3);
                            FltObjectDereference(instance);
                            instance = 0;
                        }
                    }
                }
                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    event_id = 0x51;
                    WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), trace_argument_1);
                }
            }
            else
            {
                FltFreeExtraCreateParameter(*(uint64_t *)(MpData + 0x10), data_pointer);
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    event_id = 0x50;
                    WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), trace_argument_1);
                }
            }
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            event_id = 0x4f;
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), trace_argument_1);
        }
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        event_id = 0x4e;
        WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), trace_argument_1);
    }
    if (values[0])
    {
        FltClose();
    }
    if (file_object)
    {
        ObfDereferenceObject();
        value = ObTotalReferences;
        WdUnresolvedAtomicBegin();
        ObTotalReferences -= 1;
        WdUnresolvedAtomicEnd();
        if (value + -1 <= -1 && *(int32_t *)(MpData + 0x364) <= -1)
        {
            if (!KdRefreshDebuggerNotPresent())
            {
                (*(WD_ROUTINE)swi(3))();
                return;
            }
            KeBugCheck(1);
        }
    }
    if (data_pointer)
    {
        if (*data_pointer)
        {
            ExFreePoolWithTag(*data_pointer, 0x6165504d);
        }
        *(uint32_t *)(&data_pointer[1]) = 0;
    }
    if (value_14)
    {
        FltFreeExtraCreateParameterList(*(uint64_t *)(MpData + 0x10));
    }
    return;
}

uint64_t MpDlpReallocMappedFileNamesArray(WD_LAYOUT_38 *input, uint32_t allocation_size)
{
    uint16_t value;
    uint64_t *allocation;
    int64_t dlp_data;
    uint32_t value_2;
    int64_t *allocation_2;
    uint32_t value_3;
    int64_t value_4;
    dlp_data = MpDlpData;
    value_3 = 1;
    if (0x401 <= allocation_size)
    {
        allocation_2 = MpAllocatePoolWithTag(1, allocation_size, 0x666d504d);
    }
    else
    {
        *(int32_t *)(MpDlpData + 0x44) = *(int32_t *)(MpDlpData + 0x44) + 1;
        allocation_2 = (int64_t *)ExpInterlockedPopEntrySList(dlp_data + 0x30);
        if (!allocation_2)
        {
            *(int32_t *)(dlp_data + 0x48) = *(int32_t *)(dlp_data + 0x48) + 1;
            allocation_2 = (int64_t *)(*__guard_dispatch_icall_fptr)(*(uint32_t *)(dlp_data + 0x54), *(uint32_t *)(dlp_data + 0x5c), *(uint32_t *)(dlp_data + 0x58), dlp_data + 0x30);
        }
        if (allocation_2)
        {
            memset(allocation_2, 0, allocation_size);
        }
        allocation_size = 0x400;
        value_3 = 3;
    }
    if (!allocation_2)
    {
        return WD_STATUS_INSUFFICIENT_RESOURCES;
    }
    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_qqDDZDD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18));
    }
    if (input->field_0x0)
    {
        memmove(allocation_2, input->field_0x8, (uint16_t)input->field_0x0);
    }
    dlp_data = MpDlpData;
    value_2 = input->field_0x10;
    if (value_2 & 1)
    {
        allocation = input->field_0x8;
        if (value_2 & 2)
        {
            value_4 = MpDlpData + 0x30;
            *(int32_t *)(MpDlpData + 0x4c) = *(int32_t *)(MpDlpData + 0x4c) + 1;
            value = *(uint16_t *)(dlp_data + 0x40);
            if (value <= (uint16_t)ExQueryDepthSList(value_4))
            {
                *(int32_t *)(dlp_data + 0x50) = *(int32_t *)(dlp_data + 0x50) + 1;
                (*__guard_dispatch_icall_fptr)(allocation, value_4);
            }
            else
            {
                ExpInterlockedPushEntrySList(value_4, allocation);
            }
            input->field_0x10 = input->field_0x10 & 0xfffffffd;
        }
        else
        {
            ExFreePoolWithTag(allocation, 0x666d504d);
        }
        value_2 = input->field_0x10 & 0xfffffffe;
    }
    input->field_0x14 = allocation_size;
    input->field_0x10 = value_2 | value_3;
    input->field_0x8 = allocation_2;
    if (0xffff <= allocation_size)
    {
        allocation_size = 0xfffe;
    }
    input->field_0x2 = (int16_t)allocation_size;
    return 0;
}

void MpDlpSendOnDeviceAccessServiceMessage(uint64_t input, WD_LAYOUT_119 *input_2, uint32_t *input_3, uint32_t *input_4)
{
    int64_t value;
    int32_t trace_argument_1;
    int64_t allocation = 0;
    uint64_t value_2 = 0;
    uint64_t value_3 = 0;
    uint64_t value_4 = 0;
    if (input_2 && input_3)
    {
        *input_3 = 0;
        if (input_4)
        {
            *input_4 = 0;
        }
        value = input_2->field_0x0;
        trace_argument_1 = MpDlpSerializeDeviceAccessServiceMessageRequest(0, input_2, &allocation);
        if (0 <= trace_argument_1)
        {
            trace_argument_1 = MpDlpSendServiceMessage(0x800, allocation, &value_2);
            if (0 <= trace_argument_1)
            {
                if ((int32_t)value_3 == 1 && WdLoadField(&value_2, 4, 4) == 0x18 && (int32_t)value_2 == 2)
                {
                    *input_3 = (uint32_t)value_4;
                    if (input_4)
                    {
                        *input_4 = WdLoadField(&value_4, 4, 4);
                    }
                }
            }
            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xb9, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), trace_argument_1);
            }
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_ZD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xb8, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), *(int16_t **)(value + 0x58), trace_argument_1);
        }
        if (allocation)
        {
            ExFreePoolWithTag(allocation, 0x6c64504d);
        }
    }
    return;
}

void MpDlpSendOnDeviceArrivalServiceMessage(WD_LAYOUT_121 *input)
{
    int32_t trace_argument_1;
    uint64_t event_id;
    int64_t allocation = 0;
    uint64_t value = 0;
    uint64_t value_2 = 0;
    uint64_t value_3 = 0;
    if (!input)
    {
        return;
    }
    trace_argument_1 = MpDlpSerializeDeviceInformationServiceMessageRequest(1, input, &allocation);
    if (0 <= trace_argument_1)
    {
        trace_argument_1 = MpDlpSendServiceMessage(0x800, allocation, &value);
        if (trace_argument_1 <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            event_id = 0xb3;
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), trace_argument_1);
        }
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        event_id = 0xb2;
        WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), trace_argument_1);
    }
    if (allocation)
    {
        ExFreePoolWithTag(allocation, 0x6c64504d);
    }
    return;
}

void MpDlpSendOnDeviceEnumerationServiceMessage(WD_LAYOUT_121 *input)
{
    int32_t trace_argument_1;
    int64_t allocation = 0;
    uint64_t value = 0;
    uint64_t value_2 = 0;
    uint64_t value_3 = 0;
    if (input)
    {
        trace_argument_1 = MpDlpSerializeDeviceInformationServiceMessageRequest(4, input, &allocation);
        if (0 <= trace_argument_1)
        {
            trace_argument_1 = MpDlpSendServiceMessage(0x800, allocation, &value);
            if (trace_argument_1 <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xb7, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), trace_argument_1);
            }
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_ZD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xb6, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), input->field_0x58, trace_argument_1);
        }
        if (allocation)
        {
            ExFreePoolWithTag(allocation, 0x6c64504d);
        }
    }
    return;
}

void MpDlpSendOnDeviceRemovalServiceMessage(WD_LAYOUT_121 *input)
{
    int32_t trace_argument_1;
    uint64_t event_id;
    int64_t allocation = 0;
    uint64_t value = 0;
    uint64_t value_2 = 0;
    uint64_t value_3 = 0;
    if (!input)
    {
        return;
    }
    trace_argument_1 = MpDlpSerializeDeviceInformationServiceMessageRequest(2, input, &allocation);
    if (0 <= trace_argument_1)
    {
        trace_argument_1 = MpDlpSendServiceMessage(0x800, allocation, &value);
        if (trace_argument_1 <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            event_id = 0xb5;
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), trace_argument_1);
        }
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        event_id = 0xb4;
        WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), trace_argument_1);
    }
    if (allocation)
    {
        ExFreePoolWithTag(allocation, 0x6c64504d);
    }
    return;
}

void MpDlpSendServiceMessage(uint64_t input, void *input_2, WD_LAYOUT_51 *input_3)
{
    uint32_t value;
    uint32_t values[2];
    uint64_t value_2;
    uint64_t *data_pointer;
    uint32_t value_3;
    uint32_t *data_pointer_2;
    uint32_t value_4;
    uint64_t value_5;
    uint64_t value_6;
    uint64_t value_7;
    uint64_t value_8;
    int32_t status;
    uint32_t value_9;
    uint64_t trace_handle;
    uint64_t event_id;
    int64_t value_11;
    char buffer_2[4];
    uint32_t value_12;
    int64_t value_13;
    value_13 = MpData + 0x140;
    value_11 = 30000;
    value_12 = 1;
    value_8 = 0;
    value_9 = 0;
    buffer_2[0] = 1;
    values[0] = 0x2c;
    value_2 = 0;
    value_5 = 0;
    value_6 = 0;
    value_7 = 0;
    if (0 <= (int32_t)MpDlpDetermineServiceQueryParameters(0, &((int32_t *)input_2)[2], buffer_2, &value_11, &value_13, &value_12))
    {
        KeEnterCriticalRegion();
        data_pointer_2 = values;
        data_pointer = &value_2;
        status = FltSendMessage(*(uint64_t *)(MpData + 0x10), value_13, input_2, ((uint32_t *)input_2)[1], data_pointer, data_pointer_2, -(uint64_t)(value_11 != 0) & (uint64_t)(&value_11));
        value_3 = (uint32_t)((uint64_t)data_pointer >> 0x20);
        value_4 = (uint32_t)((uint64_t)data_pointer_2 >> 0x20);
        KeLeaveCriticalRegion();
        value = value_12;
        if (status == 0x102)
        {
            trace_handle = WPP_GLOBAL_Control;
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                trace_handle = *(int64_t *)(WPP_GLOBAL_Control + 0x18);
                WPP_SF_DDDD(trace_handle, 0x37);
            }
            MpTraceDlpSyncMessageTimeout((uint64_t)trace_handle & 0xffffffffffffff00 | (uint64_t)buffer_2[0] & 0xff, ((uint16_t *)input_2)[1], value);
            if (MpFcKernelGetValue(0xe2))
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x38, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids));
                }
                *(char *)(MpDlpData + 0x10d) = 1;
            }
            return;
        }
        if (0 <= status)
        {
            if (0x2c <= values[0] && 0x2c <= WdLoadField(&value_2, 2, 2))
            {
                if ((char)value_2 != '\xa3' || WdLoadField(&value_2, 1, 1))
                {
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        WPP_SF_dddd(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), WdLoadField(&value_2, 1, 1), values[0], value_2 & 0xff, ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)((uint32_t)WdLoadField(&value_2, 1, 1)) & 0xffffffffULL);
                    }
                }
                else
                {
                    input_3->field_0x0 = (uint32_t)value_6;
                    input_3->field_0x4 = WdLoadField(&value_6, 4, 4);
                    input_3->field_0x8 = (uint32_t)value_7;
                    input_3->field_0xc = WdLoadField(&value_7, 4, 4);
                    input_3->field_0x10 = value_8;
                }
            }
            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_ddd(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x3a, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), 0x2c, ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)values[0] & 0xffffffffULL, ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INVALID_PARAMETER & 0xffffffffULL);
            }
            return;
        }
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return;
        }
        event_id = 0x39;
    }
    else
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return;
        }
        event_id = 0x36;
    }
    WPP_SF_DDDD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id);
    return;
}

int32_t MpDlpSendServiceMessageTest(void)
{
    int32_t value;
    uint32_t *allocation;
    int32_t value_2;
    int32_t value_3;
    int64_t value_4;
    uint64_t value_5;
    allocation = (uint32_t *)MpAllocatePoolWithTag(1, (char *)0x30, 0x6c64504d);
    if (allocation)
    {
        *allocation = 0x700a3;
        allocation[1] = 0x30;
        MpGetPriorityInfo(0, 0, (WD_LAYOUT_26 *)(&allocation[2]));
        allocation[6] = 1;
        allocation[8] = 1;
        value_4 = 0;
        value_2 = 0;
        value_3 = 0x18;
        allocation[7] = 0x30;
        allocation[9] = 0xdeadbeef;
        allocation[10] = 0xbeefdead;
        allocation[0xb] = 0xbeefcafe;
        value_5 = 0;
        value = MpDlpSendServiceMessage(0, allocation, &value_2);
        if (0 <= value)
        {
            value = 0;
            if (value_3 != 0x18 || (int32_t)value_4 != 1 || value_2 != 1 || value_4 <= -1)
            {
                value = -0x3fffffff;
            }
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x31, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread(), value);
        }
        ExFreePoolWithTag(allocation, 0x6c64504d);
    }
    else
    {
        value = -0x3fffff66;
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x30, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread(), WD_STATUS_INSUFFICIENT_RESOURCES);
        }
    }
    return value;
}

uint64_t MpDlpSerializeDeviceAccessServiceMessageRequest(void *input, WD_LAYOUT_119 *input_2, uint64_t *input_3)
{
    int64_t value;
    uint16_t *wide_text;
    uint32_t allocation_size;
    uint32_t trace_argument_1;
    uint32_t *allocation;
    uint64_t value_2;
    uint64_t event_id;
    uint64_t value_3;
    uint16_t *wide_text_2;
    if (!input || !input_2 || !input_3 || (value = input_2->field_0x0, !value))
    {
        return WD_STATUS_INVALID_PARAMETER;
    }
    wide_text_2 = *(uint16_t **)(value + 0x38);
    value_3 = 0x4c;
    trace_argument_1 = 0x4c;
    *input_3 = 0;
    if (wide_text_2)
    {
        trace_argument_1 = *wide_text_2;
        allocation_size = trace_argument_1 + 0x4c;
        if (allocation_size < 0x4c)
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            event_id = 0x9f;
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), WD_STATUS_INTEGER_OVERFLOW);
            return WD_STATUS_INTEGER_OVERFLOW;
        }
        trace_argument_1 += 0x4e;
        if (trace_argument_1 < allocation_size)
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            event_id = 0xa0;
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), WD_STATUS_INTEGER_OVERFLOW);
            return WD_STATUS_INTEGER_OVERFLOW;
        }
    }
    if (*(uint16_t **)(value + 0x58))
    {
        allocation_size = *(*(uint16_t **)(value + 0x58)) + trace_argument_1;
        if (allocation_size < trace_argument_1)
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            event_id = 0xa1;
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), WD_STATUS_INTEGER_OVERFLOW);
            return WD_STATUS_INTEGER_OVERFLOW;
        }
        trace_argument_1 = allocation_size + 2;
        if (trace_argument_1 < allocation_size)
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            event_id = 0xa2;
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), WD_STATUS_INTEGER_OVERFLOW);
            return WD_STATUS_INTEGER_OVERFLOW;
        }
    }
    wide_text_2 = NULL;
    if (input_2->field_0x10 == 4 && (wide_text_2 = NULL, input_2->field_0x28) && (wide_text_2 = *(uint16_t **)(input_2->field_0x28 + 0x38), wide_text_2))
    {
        allocation_size = *wide_text_2 + trace_argument_1;
        if (allocation_size < trace_argument_1)
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            event_id = 0xa3;
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), WD_STATUS_INTEGER_OVERFLOW);
            return WD_STATUS_INTEGER_OVERFLOW;
        }
        trace_argument_1 = allocation_size + 2;
        if (trace_argument_1 < allocation_size)
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            event_id = 0xa4;
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), WD_STATUS_INTEGER_OVERFLOW);
            return WD_STATUS_INTEGER_OVERFLOW;
        }
    }
    allocation_size = trace_argument_1 + 0x28;
    if (allocation_size <= 0x27)
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
        {
            return WD_STATUS_INTEGER_OVERFLOW;
        }
        if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return WD_STATUS_INTEGER_OVERFLOW;
        }
        event_id = 0xa5;
        WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), WD_STATUS_INTEGER_OVERFLOW);
        return WD_STATUS_INTEGER_OVERFLOW;
    }
    allocation = (uint32_t *)MpAllocatePoolWithTag(1, allocation_size, 0x6c64504d);
    if (!allocation)
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
        {
            return WD_STATUS_INSUFFICIENT_RESOURCES;
        }
        if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return WD_STATUS_INSUFFICIENT_RESOURCES;
        }
        WPP_SF_DD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xa6, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), trace_argument_1, WD_STATUS_INSUFFICIENT_RESOURCES);
        return WD_STATUS_INSUFFICIENT_RESOURCES;
    }
    allocation[1] = allocation_size;
    *allocation = 0x700a3;
    MpGetPriorityInfo(0, 0, (WD_LAYOUT_26 *)(&allocation[2]));
    allocation[7] = allocation_size;
    allocation[8] = 1;
    allocation[6] = 2;
    allocation[9] = 3;
    allocation[10] = trace_argument_1;
    allocation[0xb] = 1;
    allocation[0x1c] = input_2->field_0xc;
    event_id = ((uint64_t *)input)[4];
    *(uint64_t *)(&allocation[0xc]) = MpFileTimeFromUlong64(event_id);
    allocation[0xe] = ((uint32_t *)input)[6];
    allocation[0xf] = ((uint32_t *)input)[0x40];
    wide_text = *(uint16_t **)(value + 0x38);
    if (wide_text)
    {
        memmove(&allocation[0x1d], *(uint64_t **)(&wide_text[4]), *wide_text);
        allocation[0x10] = (uint32_t)(*(*(uint16_t **)(value + 0x38)));
        *(uint64_t *)(&allocation[0x12]) = 0x4c;
        value_2 = (uint64_t)(*(*(uint16_t **)(value + 0x38))) + 0x4c;
        if (0x4c <= value_2)
        {
            value_3 = (uint64_t)(*(*(uint16_t **)(value + 0x38))) + 0x4e;
            if (value_2 <= value_3)
            {
                goto block_1;
            }
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                MpDlpFreeDeviceAccessServiceMessageRequest(allocation);
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            event_id = 0xa8;
        }
        else
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                MpDlpFreeDeviceAccessServiceMessageRequest(allocation);
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            event_id = 0xa7;
        }
    }
    else
    {
        block_1:
        wide_text = *(uint16_t **)(value + 0x58);

        if (wide_text)
        {
            memmove((uint64_t *)(value_3 + 0x28 + (int64_t)allocation), *(uint64_t **)(&wide_text[4]), *wide_text);
            allocation[0x14] = (uint32_t)(*(*(uint16_t **)(value + 0x58)));
            *(uint64_t *)(&allocation[0x16]) = value_3;
            value_2 = *(*(uint16_t **)(value + 0x58)) + value_3;
            if (value_3 <= value_2)
            {
                value_3 = value_2 + 2;
                if (value_2 <= value_3)
                {
                    goto block_3;
                }
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    MpDlpFreeDeviceAccessServiceMessageRequest(allocation);
                    return WD_STATUS_INTEGER_OVERFLOW;
                }
                event_id = 0xaa;
            }
            else
            {
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    MpDlpFreeDeviceAccessServiceMessageRequest(allocation);
                    return WD_STATUS_INTEGER_OVERFLOW;
                }
                event_id = 0xa9;
            }
        }
        else
        {
            block_3:
            if (!wide_text_2)
            {
                block_2:
                *input_3 = allocation;

                return 0;
            }

            memmove((uint64_t *)(value_3 + 0x28 + (int64_t)allocation), *(uint64_t **)(&wide_text_2[4]), *wide_text_2);
            allocation[0x18] = (uint32_t)(*wide_text_2);
            *(uint64_t *)(&allocation[0x1a]) = value_3;
            value_2 = *wide_text_2 + value_3;
            if (value_3 <= value_2)
            {
                if (value_2 <= value_2 + 2)
                {
                    goto block_2;
                }
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    MpDlpFreeDeviceAccessServiceMessageRequest(allocation);
                    return WD_STATUS_INTEGER_OVERFLOW;
                }
                event_id = 0xac;
            }
            else
            {
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    MpDlpFreeDeviceAccessServiceMessageRequest(allocation);
                    return WD_STATUS_INTEGER_OVERFLOW;
                }
                event_id = 0xab;
            }
        }
    }
    WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), WD_STATUS_INTEGER_OVERFLOW);
    MpDlpFreeDeviceAccessServiceMessageRequest(allocation);
    return WD_STATUS_INTEGER_OVERFLOW;
}

uint64_t MpDlpSerializeDeviceInformationServiceMessageRequest(int32_t input, void *input_2, uint64_t *input_3)
{
    uint16_t *wide_text;
    uint64_t event_id;
    uint64_t value;
    uint16_t *wide_text_2;
    uint32_t value_2;
    uint32_t value_3;
    uint32_t value_4;
    uint32_t allocation_size;
    uint32_t value_5;
    uint32_t *allocation;
    uint64_t value_6;
    if (!input_2 || !input_3 || 5 <= input)
    {
        return WD_STATUS_INVALID_PARAMETER;
    }
    wide_text = ((uint16_t **)input_2)[0xf];
    value = 0xe0;
    *input_3 = 0;
    value_5 = 0xe0;
    if (wide_text)
    {
        value_5 = *wide_text;
        allocation_size = value_5 + 0xe0;
        if (allocation_size < 0xe0)
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            event_id = 0x71;
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), WD_STATUS_INTEGER_OVERFLOW);
            return WD_STATUS_INTEGER_OVERFLOW;
        }
        value_5 += 0xe2;
        if (value_5 < allocation_size)
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            event_id = 0x72;
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), WD_STATUS_INTEGER_OVERFLOW);
            return WD_STATUS_INTEGER_OVERFLOW;
        }
    }
    if (((uint16_t **)input_2)[6])
    {
        allocation_size = *((uint16_t **)input_2)[6] + value_5;
        if (allocation_size < value_5)
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            event_id = 0x73;
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), WD_STATUS_INTEGER_OVERFLOW);
            return WD_STATUS_INTEGER_OVERFLOW;
        }
        value_5 = allocation_size + 2;
        if (value_5 < allocation_size)
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            event_id = 0x74;
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), WD_STATUS_INTEGER_OVERFLOW);
            return WD_STATUS_INTEGER_OVERFLOW;
        }
    }
    if (((uint16_t **)input_2)[0x10])
    {
        allocation_size = *((uint16_t **)input_2)[0x10] + value_5;
        if (allocation_size < value_5)
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            event_id = 0x75;
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), WD_STATUS_INTEGER_OVERFLOW);
            return WD_STATUS_INTEGER_OVERFLOW;
        }
        value_5 = allocation_size + 2;
        if (value_5 < allocation_size)
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            event_id = 0x76;
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), WD_STATUS_INTEGER_OVERFLOW);
            return WD_STATUS_INTEGER_OVERFLOW;
        }
    }
    if (((uint16_t **)input_2)[0xe])
    {
        allocation_size = *((uint16_t **)input_2)[0xe] + value_5;
        if (allocation_size < value_5)
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            event_id = 0x77;
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), WD_STATUS_INTEGER_OVERFLOW);
            return WD_STATUS_INTEGER_OVERFLOW;
        }
        value_5 = allocation_size + 2;
        if (value_5 < allocation_size)
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            event_id = 0x78;
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), WD_STATUS_INTEGER_OVERFLOW);
            return WD_STATUS_INTEGER_OVERFLOW;
        }
    }
    if (((uint16_t **)input_2)[0xd])
    {
        allocation_size = *((uint16_t **)input_2)[0xd] + value_5;
        if (allocation_size < value_5)
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            event_id = 0x79;
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), WD_STATUS_INTEGER_OVERFLOW);
            return WD_STATUS_INTEGER_OVERFLOW;
        }
        value_5 = allocation_size + 2;
        if (value_5 < allocation_size)
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            event_id = 0x7a;
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), WD_STATUS_INTEGER_OVERFLOW);
            return WD_STATUS_INTEGER_OVERFLOW;
        }
    }
    if (((uint16_t **)input_2)[0xb])
    {
        allocation_size = *((uint16_t **)input_2)[0xb] + value_5;
        if (allocation_size < value_5)
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            event_id = 0x7b;
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), WD_STATUS_INTEGER_OVERFLOW);
            return WD_STATUS_INTEGER_OVERFLOW;
        }
        value_5 = allocation_size + 2;
        if (value_5 < allocation_size)
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            event_id = 0x7c;
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), WD_STATUS_INTEGER_OVERFLOW);
            return WD_STATUS_INTEGER_OVERFLOW;
        }
    }
    if (((uint16_t **)input_2)[0xc])
    {
        allocation_size = *((uint16_t **)input_2)[0xc] + value_5;
        if (allocation_size < value_5)
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            event_id = 0x7d;
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), WD_STATUS_INTEGER_OVERFLOW);
            return WD_STATUS_INTEGER_OVERFLOW;
        }
        value_5 = allocation_size + 2;
        if (value_5 < allocation_size)
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            event_id = 0x7e;
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), WD_STATUS_INTEGER_OVERFLOW);
            return WD_STATUS_INTEGER_OVERFLOW;
        }
    }
    if (((uint16_t **)input_2)[10])
    {
        allocation_size = *((uint16_t **)input_2)[10] + value_5;
        if (allocation_size < value_5)
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            event_id = 0x7f;
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), WD_STATUS_INTEGER_OVERFLOW);
            return WD_STATUS_INTEGER_OVERFLOW;
        }
        value_5 = allocation_size + 2;
        if (value_5 < allocation_size)
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            event_id = 0x80;
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), WD_STATUS_INTEGER_OVERFLOW);
            return WD_STATUS_INTEGER_OVERFLOW;
        }
    }
    if (((uint16_t **)input_2)[9])
    {
        allocation_size = *((uint16_t **)input_2)[9] + value_5;
        if (allocation_size < value_5)
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            event_id = 0x81;
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), WD_STATUS_INTEGER_OVERFLOW);
            return WD_STATUS_INTEGER_OVERFLOW;
        }
        value_5 = allocation_size + 2;
        if (value_5 < allocation_size)
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            event_id = 0x82;
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), WD_STATUS_INTEGER_OVERFLOW);
            return WD_STATUS_INTEGER_OVERFLOW;
        }
    }
    if (((uint16_t **)input_2)[8])
    {
        allocation_size = *((uint16_t **)input_2)[8] + value_5;
        if (allocation_size < value_5)
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            event_id = 0x83;
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), WD_STATUS_INTEGER_OVERFLOW);
            return WD_STATUS_INTEGER_OVERFLOW;
        }
        value_5 = allocation_size + 2;
        if (value_5 < allocation_size)
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            event_id = 0x84;
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), WD_STATUS_INTEGER_OVERFLOW);
            return WD_STATUS_INTEGER_OVERFLOW;
        }
    }
    if (((uint16_t **)input_2)[7])
    {
        allocation_size = *((uint16_t **)input_2)[7] + value_5;
        if (allocation_size < value_5)
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            event_id = 0x85;
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), WD_STATUS_INTEGER_OVERFLOW);
            return WD_STATUS_INTEGER_OVERFLOW;
        }
        value_5 = allocation_size + 2;
        if (value_5 < allocation_size)
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            event_id = 0x86;
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), WD_STATUS_INTEGER_OVERFLOW);
            return WD_STATUS_INTEGER_OVERFLOW;
        }
    }
    allocation_size = value_5 + 0x28;
    if (allocation_size <= 0x27)
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
        {
            return WD_STATUS_INTEGER_OVERFLOW;
        }
        if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return WD_STATUS_INTEGER_OVERFLOW;
        }
        event_id = 0x87;
        WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), WD_STATUS_INTEGER_OVERFLOW);
        return WD_STATUS_INTEGER_OVERFLOW;
    }
    allocation = (uint32_t *)MpAllocatePoolWithTag(1, allocation_size, 0x6c64504d);
    if (!allocation)
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
        {
            return WD_STATUS_INSUFFICIENT_RESOURCES;
        }
        if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return WD_STATUS_INSUFFICIENT_RESOURCES;
        }
        WPP_SF_DD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x88, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), allocation_size, WD_STATUS_INSUFFICIENT_RESOURCES);
        return WD_STATUS_INSUFFICIENT_RESOURCES;
    }
    allocation[1] = allocation_size;
    *allocation = 0x700a3;
    MpGetPriorityInfo(0, 0, (WD_LAYOUT_26 *)(&allocation[2]));
    allocation[7] = allocation_size;
    allocation[8] = 1;
    allocation[6] = 2;
    allocation[9] = input;
    allocation[10] = value_5;
    allocation[0xb] = 1;
    allocation[0xc] = ((uint32_t *)input_2)[1];
    *(uint64_t *)(&allocation[0xd]) = ((uint64_t *)input_2)[1];
    *(char *)(&allocation[0xf]) = ((char *)input_2)[0x10];
    value_2 = ((uint32_t *)input_2)[6];
    value_3 = ((uint32_t *)input_2)[7];
    value_4 = ((uint32_t *)input_2)[8];
    allocation[0x10] = ((uint32_t *)input_2)[5];
    allocation[0x11] = value_2;
    allocation[0x12] = value_3;
    allocation[0x13] = value_4;
    allocation[0x14] = ((uint32_t *)input_2)[9];
    allocation[0x15] = ((uint32_t *)input_2)[10];
    wide_text_2 = ((uint16_t **)input_2)[6];
    if (wide_text_2)
    {
        memmove(&allocation[0x42], *(uint64_t **)(&wide_text_2[4]), *wide_text_2);
        allocation[0x16] = (uint32_t)(*((uint16_t **)input_2)[6]);
        *(uint64_t *)(&allocation[0x18]) = 0xe0;
        value_6 = (uint64_t)(*((uint16_t **)input_2)[6]) + 0xe0;
        if (0xe0 <= value_6)
        {
            value = (uint64_t)(*((uint16_t **)input_2)[6]) + 0xe2;
            if (value_6 <= value)
            {
                goto block_1;
            }
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                ExFreePoolWithTag(allocation, 0x6c64504d);
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            event_id = 0x8a;
        }
        else
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                ExFreePoolWithTag(allocation, 0x6c64504d);
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            event_id = 0x89;
        }
    }
    else
    {
        block_1:
        wide_text_2 = ((uint16_t **)input_2)[7];

        if (wide_text_2)
        {
            memmove((uint64_t *)((int64_t)allocation + value + 0x28), *(uint64_t **)(&wide_text_2[4]), *wide_text_2);
            allocation[0x1a] = (uint32_t)(*((uint16_t **)input_2)[7]);
            *(uint64_t *)(&allocation[0x1c]) = value;
            value_6 = *((uint16_t **)input_2)[7] + value;
            if (value <= value_6)
            {
                value = value_6 + 2;
                if (value_6 <= value)
                {
                    goto block_2;
                }
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    ExFreePoolWithTag(allocation, 0x6c64504d);
                    return WD_STATUS_INTEGER_OVERFLOW;
                }
                event_id = 0x8c;
            }
            else
            {
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    ExFreePoolWithTag(allocation, 0x6c64504d);
                    return WD_STATUS_INTEGER_OVERFLOW;
                }
                event_id = 0x8b;
            }
        }
        else
        {
            block_2:
            wide_text_2 = ((uint16_t **)input_2)[8];

            if (wide_text_2)
            {
                memmove((uint64_t *)((int64_t)allocation + value + 0x28), *(uint64_t **)(&wide_text_2[4]), *wide_text_2);
                allocation[0x1e] = (uint32_t)(*((uint16_t **)input_2)[8]);
                *(uint64_t *)(&allocation[0x20]) = value;
                value_6 = *((uint16_t **)input_2)[8] + value;
                if (value <= value_6)
                {
                    value = value_6 + 2;
                    if (value_6 <= value)
                    {
                        goto block_3;
                    }
                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                    {
                        ExFreePoolWithTag(allocation, 0x6c64504d);
                        return WD_STATUS_INTEGER_OVERFLOW;
                    }
                    event_id = 0x8e;
                }
                else
                {
                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                    {
                        ExFreePoolWithTag(allocation, 0x6c64504d);
                        return WD_STATUS_INTEGER_OVERFLOW;
                    }
                    event_id = 0x8d;
                }
            }
            else
            {
                block_3:
                wide_text_2 = ((uint16_t **)input_2)[9];

                if (wide_text_2)
                {
                    memmove((uint64_t *)((int64_t)allocation + value + 0x28), *(uint64_t **)(&wide_text_2[4]), *wide_text_2);
                    allocation[0x22] = (uint32_t)(*((uint16_t **)input_2)[9]);
                    *(uint64_t *)(&allocation[0x24]) = value;
                    value_6 = *((uint16_t **)input_2)[9] + value;
                    if (value <= value_6)
                    {
                        value = value_6 + 2;
                        if (value_6 <= value)
                        {
                            goto block_4;
                        }
                        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                        {
                            ExFreePoolWithTag(allocation, 0x6c64504d);
                            return WD_STATUS_INTEGER_OVERFLOW;
                        }
                        event_id = 0x90;
                    }
                    else
                    {
                        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                        {
                            ExFreePoolWithTag(allocation, 0x6c64504d);
                            return WD_STATUS_INTEGER_OVERFLOW;
                        }
                        event_id = 0x8f;
                    }
                }
                else
                {
                    block_4:
                    wide_text_2 = ((uint16_t **)input_2)[10];

                    if (wide_text_2)
                    {
                        memmove((uint64_t *)((int64_t)allocation + value + 0x28), *(uint64_t **)(&wide_text_2[4]), *wide_text_2);
                        allocation[0x26] = (uint32_t)(*((uint16_t **)input_2)[10]);
                        *(uint64_t *)(&allocation[0x28]) = value;
                        value_6 = *((uint16_t **)input_2)[10] + value;
                        if (value <= value_6)
                        {
                            value = value_6 + 2;
                            if (value_6 <= value)
                            {
                                goto block_5;
                            }
                            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                            {
                                ExFreePoolWithTag(allocation, 0x6c64504d);
                                return WD_STATUS_INTEGER_OVERFLOW;
                            }
                            event_id = 0x92;
                        }
                        else
                        {
                            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                            {
                                ExFreePoolWithTag(allocation, 0x6c64504d);
                                return WD_STATUS_INTEGER_OVERFLOW;
                            }
                            event_id = 0x91;
                        }
                    }
                    else
                    {
                        block_5:
                        wide_text_2 = ((uint16_t **)input_2)[0xb];

                        if (wide_text_2)
                        {
                            memmove((uint64_t *)((int64_t)allocation + value + 0x28), *(uint64_t **)(&wide_text_2[4]), *wide_text_2);
                            allocation[0x2a] = (uint32_t)(*((uint16_t **)input_2)[0xb]);
                            *(uint64_t *)(&allocation[0x2c]) = value;
                            value_6 = *((uint16_t **)input_2)[0xb] + value;
                            if (value <= value_6)
                            {
                                value = value_6 + 2;
                                if (value_6 <= value)
                                {
                                    goto block_6;
                                }
                                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                                {
                                    ExFreePoolWithTag(allocation, 0x6c64504d);
                                    return WD_STATUS_INTEGER_OVERFLOW;
                                }
                                event_id = 0x94;
                            }
                            else
                            {
                                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                                {
                                    ExFreePoolWithTag(allocation, 0x6c64504d);
                                    return WD_STATUS_INTEGER_OVERFLOW;
                                }
                                event_id = 0x93;
                            }
                        }
                        else
                        {
                            block_6:
                            wide_text_2 = ((uint16_t **)input_2)[0xc];

                            if (wide_text_2)
                            {
                                memmove((uint64_t *)((int64_t)allocation + value + 0x28), *(uint64_t **)(&wide_text_2[4]), *wide_text_2);
                                allocation[0x2e] = (uint32_t)(*((uint16_t **)input_2)[0xc]);
                                *(uint64_t *)(&allocation[0x30]) = value;
                                value_6 = *((uint16_t **)input_2)[0xc] + value;
                                if (value <= value_6)
                                {
                                    value = value_6 + 2;
                                    if (value_6 <= value)
                                    {
                                        goto block_7;
                                    }
                                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                                    {
                                        ExFreePoolWithTag(allocation, 0x6c64504d);
                                        return WD_STATUS_INTEGER_OVERFLOW;
                                    }
                                    event_id = 0x96;
                                }
                                else
                                {
                                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                                    {
                                        ExFreePoolWithTag(allocation, 0x6c64504d);
                                        return WD_STATUS_INTEGER_OVERFLOW;
                                    }
                                    event_id = 0x95;
                                }
                            }
                            else
                            {
                                block_7:
                                wide_text_2 = ((uint16_t **)input_2)[0xd];

                                if (wide_text_2)
                                {
                                    memmove((uint64_t *)((int64_t)allocation + value + 0x28), *(uint64_t **)(&wide_text_2[4]), *wide_text_2);
                                    allocation[0x32] = (uint32_t)(*((uint16_t **)input_2)[0xd]);
                                    *(uint64_t *)(&allocation[0x34]) = value;
                                    value_6 = *((uint16_t **)input_2)[0xd] + value;
                                    if (value <= value_6)
                                    {
                                        value = value_6 + 2;
                                        if (value_6 <= value)
                                        {
                                            goto block_8;
                                        }
                                        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                                        {
                                            ExFreePoolWithTag(allocation, 0x6c64504d);
                                            return WD_STATUS_INTEGER_OVERFLOW;
                                        }
                                        event_id = 0x98;
                                    }
                                    else
                                    {
                                        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                                        {
                                            ExFreePoolWithTag(allocation, 0x6c64504d);
                                            return WD_STATUS_INTEGER_OVERFLOW;
                                        }
                                        event_id = 0x97;
                                    }
                                }
                                else
                                {
                                    block_8:
                                    wide_text_2 = ((uint16_t **)input_2)[0xe];

                                    if (wide_text_2)
                                    {
                                        memmove((uint64_t *)((int64_t)allocation + value + 0x28), *(uint64_t **)(&wide_text_2[4]), *wide_text_2);
                                        allocation[0x36] = (uint32_t)(*((uint16_t **)input_2)[0xe]);
                                        *(uint64_t *)(&allocation[0x38]) = value;
                                        value_6 = *((uint16_t **)input_2)[0xe] + value;
                                        if (value <= value_6)
                                        {
                                            value = value_6 + 2;
                                            if (value_6 <= value)
                                            {
                                                goto block_9;
                                            }
                                            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                                            {
                                                ExFreePoolWithTag(allocation, 0x6c64504d);
                                                return WD_STATUS_INTEGER_OVERFLOW;
                                            }
                                            event_id = 0x9a;
                                        }
                                        else
                                        {
                                            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                                            {
                                                ExFreePoolWithTag(allocation, 0x6c64504d);
                                                return WD_STATUS_INTEGER_OVERFLOW;
                                            }
                                            event_id = 0x99;
                                        }
                                    }
                                    else
                                    {
                                        block_9:
                                        wide_text_2 = ((uint16_t **)input_2)[0xf];

                                        if (wide_text_2)
                                        {
                                            memmove((uint64_t *)((int64_t)allocation + value + 0x28), *(uint64_t **)(&wide_text_2[4]), *wide_text_2);
                                            allocation[0x3a] = (uint32_t)(*((uint16_t **)input_2)[0xf]);
                                            *(uint64_t *)(&allocation[0x3c]) = value;
                                            value_6 = *((uint16_t **)input_2)[0xf] + value;
                                            if (value <= value_6)
                                            {
                                                value = value_6 + 2;
                                                if (value_6 <= value)
                                                {
                                                    goto block_10;
                                                }
                                                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                                                {
                                                    ExFreePoolWithTag(allocation, 0x6c64504d);
                                                    return WD_STATUS_INTEGER_OVERFLOW;
                                                }
                                                event_id = 0x9c;
                                            }
                                            else
                                            {
                                                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                                                {
                                                    ExFreePoolWithTag(allocation, 0x6c64504d);
                                                    return WD_STATUS_INTEGER_OVERFLOW;
                                                }
                                                event_id = 0x9b;
                                            }
                                        }
                                        else
                                        {
                                            block_10:
                                            wide_text_2 = ((uint16_t **)input_2)[0x10];

                                            if (!wide_text_2)
                                            {
                                                block_11:
                                                *input_3 = allocation;

                                                return 0;
                                            }
                                            memmove((uint64_t *)((int64_t)allocation + value + 0x28), *(uint64_t **)(&wide_text_2[4]), *wide_text_2);
                                            allocation[0x3e] = (uint32_t)(*((uint16_t **)input_2)[0x10]);
                                            *(uint64_t *)(&allocation[0x40]) = value;
                                            value_6 = *((uint16_t **)input_2)[0x10] + value;
                                            if (value <= value_6)
                                            {
                                                if (value_6 <= value_6 + 2)
                                                {
                                                    goto block_11;
                                                }
                                                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                                                {
                                                    ExFreePoolWithTag(allocation, 0x6c64504d);
                                                    return WD_STATUS_INTEGER_OVERFLOW;
                                                }
                                                event_id = 0x9e;
                                            }
                                            else
                                            {
                                                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                                                {
                                                    ExFreePoolWithTag(allocation, 0x6c64504d);
                                                    return WD_STATUS_INTEGER_OVERFLOW;
                                                }
                                                event_id = 0x9d;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), WD_STATUS_INTEGER_OVERFLOW);
    ExFreePoolWithTag(allocation, 0x6c64504d);
    return WD_STATUS_INTEGER_OVERFLOW;
}

void MpDlpShutdown(void)
{
    if (!MpDlpData)
    {
        return;
    }
    if (*(int64_t *)(MpDlpData + 0x138))
    {
        ExUnregisterCallback();
    }
    if (*(int64_t *)(MpDlpData + 0x130))
    {
        ObfDereferenceObject();
    }
    if (*(int64_t *)(MpDlpData + 0x118))
    {
        ExFreePoolWithTag(*(int64_t *)(MpDlpData + 0x118), 0x6e6f704d);
    }
    if (*(int64_t *)(MpDlpData + 0x120))
    {
        ExFreePoolWithTag(*(int64_t *)(MpDlpData + 0x120), 0x6e6f704d);
    }
    FltDeletePushLock(MpDlpData + 0xf8);
    FltDeletePushLock(MpDlpData + 8);
    ExDeleteLookasideListEx(MpDlpData + 0x30);
    ExDeleteLookasideListEx(MpDlpData + 0x90);
    ExFreePoolWithTag(MpDlpData, 0x4464504d);
    return;
}

void MpDlpSetEaOnDestination__finally_0(uint64_t input, void *input_2)
{
    uint32_t *data_pointer;
    if (((int64_t *)input_2)[0xc])
    {
        FltReleaseFileNameInformation();
    }
    if (((int64_t *)input_2)[10])
    {
        MpFreeString(((int64_t *)input_2)[10]);
    }
    if (!((int64_t *)input_2)[0x13])
    {
        return;
    }
    WdUnresolvedAtomicBegin();
    data_pointer = (uint32_t *)(((int64_t *)input_2)[0x13] + 0x28);
    *data_pointer = *data_pointer & 0xfffffbff;
    WdUnresolvedAtomicEnd();
    if (((int64_t *)input_2)[0x13] == ((int64_t *)input_2)[0x12])
    {
        return;
    }
    FltReleaseContext();
    return;
}

int32_t MpDlpInitialize(void)
{
    uint32_t *allocation;
    uint64_t value;
    int32_t value_2;
    int32_t trace_argument_1;
    allocation = (uint32_t *)MpAllocatePoolWithTag(ExDefaultNonPagedPoolType, (char *)0x140, 0x4464504d);
    MpDlpData = allocation;
    if (allocation)
    {
        *allocation = 0x140da1d;
        *(char *)(&allocation[8]) = 0;
        *(char *)(&allocation[0x3c]) = 0;
        ((char *)allocation)[0xf1] = 0;
        ((char *)allocation)[0x109] = 0;
        ((char *)allocation)[0x10d] = 0;
        ((char *)allocation)[0x10a] = 0;
        ((char *)allocation)[0x10b] = 0;
        *(char *)(&allocation[0x43]) = 0;
        FltInitializePushLock(&allocation[0x3e]);
        allocation = MpDlpData;
        *(uint64_t *)(&MpDlpData[0x40]) = 0;
        *(uint64_t *)(&allocation[0x46]) = 0;
        *(uint64_t *)(&allocation[0x48]) = 0;
        FltInitializePushLock(&allocation[2]);
        allocation = &MpDlpData[4];
        *(uint32_t **)(&MpDlpData[6]) = allocation;
        *(uint32_t **)allocation = allocation;
        trace_argument_1 = MpDlpInitializeEnlightenment();
        if (trace_argument_1 <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xb, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread(), trace_argument_1);
        }
        trace_argument_1 = ExInitializeLookasideListEx(&MpDlpData[0xc], 0, 0, 1, 0, 0x400, 0x6c6d504d, 0);
        if (0 <= trace_argument_1)
        {
            trace_argument_1 = ExInitializeLookasideListEx(&MpDlpData[0x24], 0, 0, 1, 0, 0x118, 0x736d504d, 0);
            if (0 <= trace_argument_1)
            {
                trace_argument_1 = MpCreateCallback(&MpDlpData[0x4c], L"\\Callback\\WddDeviceNotifcationsCallback");
                if (0 <= trace_argument_1)
                {
                    trace_argument_1 = MpRegisterCallback(*(int64_t *)(&MpDlpData[0x4c]), MpDlpDeviceCallback, MpDlpData, &MpDlpData[0x4e]);
                    if (0 <= trace_argument_1)
                    {
                        return 0;
                    }
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xf, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), trace_argument_1);
                    }
                }
                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_SD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18));
                }
                MpDlpShutdown();
                return trace_argument_1;
            }
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                MpDlpShutdown();
                return trace_argument_1;
            }
            value = 0xd;
            value_2 = trace_argument_1;
        }
        else
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                MpDlpShutdown();
                return trace_argument_1;
            }
            value = 0xc;
            value_2 = trace_argument_1;
        }
    }
    else
    {
        value_2 = -0x3fffff66;
        trace_argument_1 = value_2;
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            MpDlpShutdown();
            return trace_argument_1;
        }
        value = 10;
        trace_argument_1 = -0x3fffff66;
    }
    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread(), trace_argument_1);
    trace_argument_1 = value_2;
    MpDlpShutdown();
    return trace_argument_1;
}

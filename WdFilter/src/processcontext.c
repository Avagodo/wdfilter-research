#include "wdfilter.h"

char MpIsCloudSyncType(void *input)
{
    WD_UNICODE_STRING_ADDRESS_VIEW *source_string;
    if (input && ((source_string = ((WD_UNICODE_STRING_ADDRESS_VIEW **)input)[0x10], MpSuffixUnicodeString(&WdProcesscontextStorage, source_string) || (source_string = ((WD_UNICODE_STRING_ADDRESS_VIEW **)input)[0x10], MpSuffixUnicodeString(&WdProcesscontextStorage2, source_string))) || (source_string = ((WD_UNICODE_STRING_ADDRESS_VIEW **)input)[0x10], MpSuffixUnicodeString(&WdProcesscontextStorage3, source_string)) || (source_string = ((WD_UNICODE_STRING_ADDRESS_VIEW **)input)[0x10], MpSuffixUnicodeString(&WdProcesscontextStorage4, source_string))))
    {
        ((uint32_t *)input)[0x3c] = 0x10;
        return 1;
    }
    return 0;
}

void WPP_SF_DqSDd(uint64_t input, uint64_t input_2, uint64_t input_3, uint32_t input_4, uint64_t input_5, int16_t *input_6)
{
    int64_t index;
    int16_t *wide_text;
    uint64_t value;
    uint32_t values[2];
    value = input_5;
    if (input_6)
    {
        index = -1;
        do
        {
            index += 1;
        }
        while (input_6[index]);
        index = index * 2 + 2;
    }
    else
    {
        index = 10;
    }
    wide_text = input_6;
    if (!input_6)
    {
        wide_text = &WdAsyncnotificationStorage3;
    }
    values[0] = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids), 0x30, values, 4, &value, 8, wide_text, index, &unrecovered_stack_argument_7, 4, &unrecovered_stack_argument_8, 4, 0);
    return;
}

void WPP_SF_ZdddiSdd(uint64_t input, uint64_t input_2, uint64_t input_3, int16_t *input_4)
{
    int64_t index;
    int16_t *wide_text;
    int16_t value;
    uint64_t value_2;
    int16_t *wide_text_2;
    if (wide_text_2)
    {
        index = -1;
        do
        {
            index += 1;
        }
        while (wide_text_2[index]);
        index = index * 2 + 2;
    }
    else
    {
        index = 10;
    }
    value_2 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    wide_text = wide_text_2;
    if (!wide_text_2)
    {
        wide_text = &WdAsyncnotificationStorage3;
    }
    if (input_4)
    {
        value = *input_4;
        if (*input_4)
        {
            value_2 = *(uint64_t *)(&input_4[4]);
        }
    }
    else
    {
        value = 8;
    }
    if (!input_4)
    {
        input_4 = &WdCleanupStorage;
    }
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids), 0x23, input_4, 2, value_2, (uint16_t)value, &unrecovered_stack_argument_5, 4, &unrecovered_stack_argument_6, 4, &unrecovered_stack_argument_7, 4, &unrecovered_stack_argument_8, 8, wide_text, index, &unrecovered_stack_argument_10, 4, &unrecovered_stack_argument_11, 4, 0);
    return;
}

void WPP_SF_dSdd(uint64_t input, uint64_t input_2, uint64_t input_3, uint32_t input_4, int16_t *input_5)
{
    int64_t index;
    int16_t *wide_text;
    uint32_t values[2];
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
    values[0] = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids), 0x24, values, 4, wide_text, index, &unrecovered_stack_argument_6, 4, &unrecovered_stack_argument_7, 4, 0);
    return;
}

void WPP_SF_dddD(uint64_t input, uint64_t input_2, uint64_t input_3, uint32_t input_4)
{
    uint32_t values[2];
    values[0] = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids), 0x27, values, 4, &unrecovered_stack_argument_5, 4, &unrecovered_stack_argument_6, 4, &unrecovered_stack_argument_7, 4, 0);
    return;
}

void MpResetRunningProcessesHardeningExclusions(uint64_t input, uint64_t input_2)
{
    uint64_t *data_pointer;
    int32_t status;
    uint64_t *data_pointer_2;
    uint64_t *process_list = NULL;
    status = MpGetProcessContextList(&process_list, (uint64_t)input_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
    if (0 <= status)
    {
        data_pointer_2 = process_list;
        while (data_pointer_2)
        {
            data_pointer = (uint64_t *)(*data_pointer_2);
            MpSetProcessHardeningExclusion((void *)data_pointer_2[1], 0, ((int16_t **)data_pointer_2[1])[0x10]);
            MpReleaseProcessContextListEntry((WD_LAYOUT_15 *)(&data_pointer_2[-1]));
            data_pointer_2 = data_pointer;
        }

        return;
    }
    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x32, WD_SYMBOL_ADDRESS(WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids), (uint64_t)KeGetCurrentThread(), status);
    }
    if (!process_list)
    {
        return;
    }
    MpReleaseProcessContextList(&process_list);
    return;
}

void MpSetDocOpenRule(WD_LAYOUT_58 *input, WD_LAYOUT_57 *input_2)
{
    void *data_pointer;
    int64_t process_table;
    process_table = MpProcessTable;
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(process_table + 8, 1);
    data_pointer = input->field_0x50;
    input->field_0x50 = input_2;
    if (input_2)
    {
        WdAtomicAdd32((volatile int32_t *)(&input_2->field_0x4), 1);
    }
    ExReleaseResourceLite(MpProcessTable + 8);
    KeLeaveCriticalRegion();
    if (!data_pointer)
    {
        return;
    }
    MpReleaseDocOpenRule(data_pointer);
    return;
}

void MpReleaseProcessContextListEntry(WD_LAYOUT_15 *input)
{
    if (input->field_0x10)
    {
        MpReleaseProcessContext(input->field_0x10);
    }
    ExFreeToPagedLookasideList((void *)(MpProcessTable + 0x100), input);
    return;
}

uint64_t MpAllocateProcessContextListEntry(uint64_t *input)
{
    uint64_t *data_pointer;
    data_pointer = (uint64_t *)ExAllocateFromPagedLookasideList((void *)(MpProcessTable + 0x100));
    if (data_pointer)
    {
        *input = data_pointer;
        *data_pointer = 0;
        data_pointer[1] = 0;
        data_pointer[2] = 0;
        *(uint32_t *)data_pointer = 0x18da17;
        return 0;
    }
    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x29, WD_SYMBOL_ADDRESS(WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids), (uint64_t)KeGetCurrentThread(), WD_STATUS_INSUFFICIENT_RESOURCES);
    }
    return WD_STATUS_INSUFFICIENT_RESOURCES;
}

void MpGetProcessContextList(int64_t *input, bool input_2)
{
    int32_t *data_pointer;
    int64_t process;
    int64_t process_context;
    int64_t process_entry;
    int64_t value;
    uint64_t trace_argument_1 = 0;
    uint64_t trace_argument_2;
    uint16_t *event_id;
    uint32_t value_2;
    int64_t value_4;
    int32_t status;
    int64_t creation_time;
    uint64_t value_5;
    int64_t allocation;
    uint32_t values[2];
    int64_t value_6 = 0;
    values[0] = 0;
    process_context = 0;
    value = NULL;
    process_entry = 0;
    process = 0;
    WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpProcessTable + 0x1a0)), 1);
    KeClearEvent(MpProcessTable + 0x188);
    status = MpGetRunningProcesses(&value_6, values);
    if (0 <= status)
    {
        allocation = value_6;
        for (; (uint32_t)trace_argument_1 < values[0]; trace_argument_1 = (uint32_t)trace_argument_1 + 1)
        {
            if (!(*(int64_t *)(allocation + trace_argument_1 * 8)))
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                {
                    trace_argument_2 = (uint64_t)trace_argument_2 & 0xffffffff00000000 | (uint64_t)(*(uint32_t *)(allocation + trace_argument_1 * 8)) & 0xffffffff;
                    WPP_SF_DD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2b, WD_SYMBOL_ADDRESS(WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids), trace_argument_1, trace_argument_2);
                }
                goto block_4;
            }
            if (process)
            {
                ObfDereferenceObject();
                creation_time = ObTotalReferences;
                WdUnresolvedAtomicBegin();
                ObTotalReferences -= 1;
                WdUnresolvedAtomicEnd();
                if (creation_time + -1 < 0 && *(int32_t *)(MpData + 0x364) <= -1)
                {
                    if (!KdRefreshDebuggerNotPresent())
                    {
                        (*(WD_ROUTINE)swi(3))();
                        return;
                    }
                    KeBugCheck(1);
                }
                process = 0;
            }
            status = PsLookupProcessByProcessId(*(uint64_t *)(allocation + trace_argument_1 * 8), &process);
            creation_time = value_6;
            if (0 <= status)
            {
                WdUnresolvedAtomicBegin();
                ObTotalReferences += 1;
                WdUnresolvedAtomicEnd();
                creation_time = PsGetProcessCreateTimeQuadPart(process);
                if (process == *__imp_PsInitialSystemProcess && creation_time)
                {
                    g_bSystemProcessContextCreateTimeFixed = 1;
                }
                status = MpGetProcessContextByIdAndCreationTime(*(uint64_t *)(allocation + trace_argument_1 * 8), creation_time, &process_context);
                value_4 = value_6;
                if (0 <= status)
                {
                    block_1:
                    status = MpAllocateProcessContextListEntry(&process_entry);

                    value_2 = (uint32_t)((uint64_t)trace_argument_2 >> 0x20);
                    if (0 <= status)
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                        {
                            if (*(*(int16_t **)(process_context + 0x80)))
                            {
                                event_id = *(uint16_t **)(&(*(int16_t **)(process_context + 0x80))[4]);
                            }
                            else
                            {
                                event_id = L"(empty)";
                            }
                            trace_argument_2 = *(uint64_t *)(process_context + 0x18);
                            WPP_SF_DqSDd(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, process_context, trace_argument_1, trace_argument_2, event_id, *(uint32_t *)(allocation + trace_argument_1 * 8), *(uint32_t *)(process_context + 0x78));
                        }
                        creation_time = process_entry;
                        process_entry = 0;
                        *(int64_t *)(creation_time + 0x10) = process_context;
                        process_context = 0;
                        *(int64_t *)(creation_time + 8) = value;
                        value = (int64_t *)(creation_time + 8);
                        goto block_3;
                    }
                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                    {
                        goto block_5;
                    }
                    value_5 = 0x2f;
                }
                else
                {
                    if (!input_2)
                    {
                        goto block_4;
                    }
                    status = MpCreateProcessContext(*(uint64_t *)(value_6 + trace_argument_1 * 8), creation_time, NULL, &process_context);
                    value_2 = (uint32_t)((uint64_t)trace_argument_2 >> 0x20);
                    allocation = value_4;
                    if (0 <= status)
                    {
                        goto block_1;
                    }
                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                    {
                        goto block_5;
                    }
                    value_5 = 0x2e;
                }
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_5, WD_SYMBOL_ADDRESS(WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_2 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
                allocation = value_6;
                goto block_5;
            }
            value_2 = (uint32_t)((uint64_t)event_id >> 0x20);
            if (status != -0x3ffffff5)
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                {
                    value_5 = 0x2c;
                    event_id = (uint16_t *)(((uint64_t)value_2 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
                    block_2:
                    trace_argument_2 = (uint64_t)trace_argument_2 & 0xffffffff00000000 | (uint64_t)(*(uint32_t *)(value_6 + trace_argument_1 * 8)) & 0xffffffff;

                    WPP_SF_qDL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_5, WD_SYMBOL_ADDRESS(WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids), (uint64_t)KeGetCurrentThread(), trace_argument_2, event_id);
                    allocation = creation_time;
                }
            }
            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                value_5 = 0x2d;
                event_id = (uint16_t *)(((uint64_t)value_2 & 0xffffffffULL) << 32 | (uint64_t)0xc000000b & 0xffffffffULL);
                goto block_2;
            }
            block_4:
            block_3:
            ;

        }

        *input = value;
        value = NULL;
    }
    else
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2a, WD_SYMBOL_ADDRESS(WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids), (uint64_t)KeGetCurrentThread(), (uint64_t)trace_argument_2 & 0xffffffff00000000 | (uint64_t)status & 0xffffffff);
        }
        allocation = value_6;
    }
    block_5:
    WdUnresolvedAtomicBegin();

    data_pointer = (int32_t *)(MpProcessTable + 0x1a0);
    status = *data_pointer;
    *data_pointer = *data_pointer + -1;
    WdUnresolvedAtomicEnd();
    if (status == 1)
    {
        KeSetEvent(MpProcessTable + 0x188, 0, 0);
    }
    if (allocation)
    {
        ExFreePoolWithTag(allocation, 0x7072704d);
    }
    if (process_context)
    {
        MpReleaseProcessContext(process_context);
    }
    if (value)
    {
        MpReleaseProcessContextList(&value);
    }
    if (process_entry)
    {
        MpReleaseProcessContextListEntry(process_entry);
    }
    if (process)
    {
        ObfDereferenceObject();
        allocation = ObTotalReferences;
        WdUnresolvedAtomicBegin();
        ObTotalReferences -= 1;
        WdUnresolvedAtomicEnd();
        if (allocation + -1 <= -1 && *(int32_t *)(MpData + 0x364) <= -1)
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

uint64_t MpGetProcessContextByIdAndCreationTime(uint64_t input, int64_t input_2, int64_t *input_3)
{
    int64_t process_table;
    uint64_t *data_pointer;
    uint64_t value;
    uint64_t *data_pointer_2;
    *input_3 = 0;
    process_table = MpProcessTable;
    value = WD_STATUS_NOT_FOUND;
    if (!input)
    {
        return WD_STATUS_NOT_FOUND;
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(process_table + 8, 1);
    data_pointer_2 = (uint64_t *)(((uint32_t)(input >> 2) & 0x7f) * 0x10ULL + *(int64_t *)(MpProcessTable + 0x180));
    data_pointer = (uint64_t *)(*data_pointer_2);
    while (true)
    {
        if (data_pointer == data_pointer_2)
        {
            ExReleaseResourceLite(MpProcessTable + 8);
            KeLeaveCriticalRegion();
            return value;
        }
        if (input == data_pointer[2] && input_2 == data_pointer[3])
        {
            WdAtomicAdd32((volatile int32_t *)((int32_t *)(&data_pointer[5])), 1);
            *input_3 = (int64_t)(&data_pointer[-1]);
            value = 0;
            ExReleaseResourceLite(MpProcessTable + 8);
            KeLeaveCriticalRegion();
            return value;
        }
        data_pointer = (uint64_t *)(*data_pointer);
    }
}

int32_t MpGetProcessContextByObject(uint64_t process, int64_t *input)
{
    int64_t process_table;
    int64_t creation_time;
    uint64_t process_id;
    uint64_t *data_pointer;
    uint64_t value;
    uint64_t *data_pointer_2;
    creation_time = PsGetProcessCreateTimeQuadPart((void *)(uintptr_t)process);
    process_id = PsGetProcessId((void *)(uintptr_t)process);
    value = WD_STATUS_NOT_FOUND;
    *input = 0;
    process_table = MpProcessTable;
    if (!process_id)
    {
        return WD_STATUS_NOT_FOUND;
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(process_table + 8, 1);
    data_pointer_2 = (uint64_t *)(((uint32_t)(process_id >> 2) & 0x7f) * 0x10ULL + *(int64_t *)(MpProcessTable + 0x180));
    data_pointer = (uint64_t *)(*data_pointer_2);
    while (true)
    {
        if (data_pointer == data_pointer_2)
        {
            ExReleaseResourceLite(MpProcessTable + 8);
            KeLeaveCriticalRegion();
            return value;
        }
        if (process_id == data_pointer[2] && creation_time == data_pointer[3])
        {
            WdAtomicAdd32((volatile int32_t *)((int32_t *)(&data_pointer[5])), 1);
            *input = (int64_t)(&data_pointer[-1]);
            value = 0;
            ExReleaseResourceLite(MpProcessTable + 8);
            KeLeaveCriticalRegion();
            return value;
        }
        data_pointer = (uint64_t *)(*data_pointer);
    }
}

uint64_t MpReleaseProcessContext(void *context)
{
    uint32_t *data_pointer;
    uint64_t value;
    uint32_t value_2;
    uint32_t value_3;
    int64_t process_table;
    int32_t status;
    uint64_t value_4;
    uint16_t *provider;
    bool enabled;
    uint64_t value_5;
    value_2 = (uint32_t)((uint64_t)value_5 >> 0x20);
    WdUnresolvedAtomicBegin();
    data_pointer = &((uint32_t *)context)[0xc];
    value_3 = *data_pointer;
    value_4 = value_3;
    *data_pointer = *data_pointer - 1;
    process_table = MpProcessTable;
    WdUnresolvedAtomicEnd();
    if (value_3 == 1)
    {
        enabled = 0;
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(process_table + 8, 1);
        if (((uint32_t *)context)[0xd] & 0x40)
        {
            WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpProcessTable + 0x1a4)), -1);
        }
        else
        {
            WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpProcessTable + 0x1a8)), -1);
            enabled = *(int32_t *)(MpProcessTable + 0x1a8) == 0;
        }
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 0x10)
        {
            provider = L"trusted";
            if (!(((uint32_t *)context)[0xd] & 0x40))
            {
                provider = L"untrusted";
            }
            WPP_SF_dSdd(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), MpProcessTable, provider, ((uint32_t *)context)[6], provider, *(uint32_t *)(MpProcessTable + 0x1a4), *(uint32_t *)(MpProcessTable + 0x1a8));
            value_2 = (uint32_t)((uint64_t)provider >> 0x20);
        }
        if (Microsoft_Antimalware_AMFilterEnableBits & 8)
        {
            value_2 = 1;
            McTemplateK0qzqqqz_EtwWriteTransfer();
        }
        ExReleaseResourceLite(MpProcessTable + 8);
        KeLeaveCriticalRegion();
        if (enabled)
        {
            status = MpSendTrustedProcessMessage(0, NULL);
            if (status <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                value = ((uint64_t)value_2 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL;
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x25, WD_SYMBOL_ADDRESS(WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids), (uint64_t)KeGetCurrentThread(), value);
                value_2 = (uint32_t)((uint64_t)value >> 0x20);
            }
            if (Microsoft_Antimalware_AMFilterEnableBits & 8)
            {
                value_2 = 1;
                McTemplateK0qzqqqz_EtwWriteTransfer();
            }
        }
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            WPP_SF_ddd(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x26, WD_SYMBOL_ADDRESS(WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids), ((uint32_t *)context)[6], ((uint64_t)value_2 & 0xffffffffULL) << 32 | (uint64_t)((uint32_t)enabled) & 0xffffffffULL, *(uint32_t *)(MpProcessTable + 0x1a8));
        }
        if (*(int32_t *)(MpProcessTable + 0x1a8) && *(int32_t *)(MpProcessTable + 0x1a8) <= 10 && !(~(Microsoft_Antimalware_AMFilterEnableBits >> 3) & (*(uint8_t *)(WPP_GLOBAL_Control + 0x2c) & 0x10) == 0))
        {
            MpDumpUntrustedProcesses();
        }
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            WPP_SF_dddD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18));
        }
        value_4 = MpFreeProcessContext(context);
    }
    return value_4;
}

uint64_t MpInitializeKnownProcessPaths(void)
{
    uint64_t source_text;
    uint32_t value = 0;
    uint64_t *data_pointer;
    data_pointer = &WdProcesscontextStorage32;
    do
    {
        source_text = *data_pointer;
        if ((int32_t)MpGetSystemFolderPath(source_text, (uint64_t *)((int32_t)value * 0x18LL + WD_PROCESSCONTEXT_UNRECOVERED_ADDRESS)) <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x12, WD_SYMBOL_ADDRESS(WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids), (uint64_t)KeGetCurrentThread(), value);
        }
        value += 1;
        data_pointer = &data_pointer[3];
    }
    while (value < 10);
    return 0;
}

void MpGetProcessContextById(int64_t process_id, int64_t *input)
{
    int64_t process;
    int32_t value_2;
    int64_t creation_time;
    uint64_t process_id_2;
    uint64_t *index;
    int64_t *process_2;
    int64_t process_3 = 0;
    uint64_t *data_pointer;
    if (process_id)
    {
        process_2 = &process_3;
        value_2 = PsLookupProcessByProcessId(process_id, process_2);
        process = process_3;
        if (0 <= value_2)
        {
            WdUnresolvedAtomicBegin();
            ObTotalReferences += 1;
            WdUnresolvedAtomicEnd();
            creation_time = PsGetProcessCreateTimeQuadPart(process_3);
            process_id_2 = PsGetProcessId(process);
            *input = 0;
            process = MpProcessTable;
            if (process_id_2)
            {
                KeEnterCriticalRegion();
                ExAcquireResourceSharedLite(process + 8, (uint64_t)((uint64_t)process_2) & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
                data_pointer = (uint64_t *)(((uint32_t)(process_id_2 >> 2) & 0x7f) * 0x10ULL + *(int64_t *)(MpProcessTable + 0x180));
                for (index = (uint64_t *)(*data_pointer); index != data_pointer; index = (uint64_t *)(*index))
                {
                    if (process_id_2 == index[2] && creation_time == index[3])
                    {
                        WdAtomicAdd32((volatile int32_t *)((int32_t *)(&index[5])), 1);
                        *input = (int64_t)(&index[-1]);
                        break;
                    }
                }

                ExReleaseResourceLite(MpProcessTable + 8);
                KeLeaveCriticalRegion();
            }
            if (process_3)
            {
                ObfDereferenceObject();
                process = ObTotalReferences;
                WdUnresolvedAtomicBegin();
                ObTotalReferences -= 1;
                WdUnresolvedAtomicEnd();
                if (process + -1 < 0 && *(int32_t *)(MpData + 0x364) <= -1)
                {
                    if (KdRefreshDebuggerNotPresent())
                    {
                        KeBugCheck(1);
                    }
                    (*(WD_ROUTINE)swi(3))();
                    return;
                }
            }
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x28, WD_SYMBOL_ADDRESS(WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids), (uint64_t)KeGetCurrentThread(), value_2);
        }
    }
    return;
}

void MpReferenceProcessContext(WD_PROCESS_REFERENCE_VIEW *context)
{
    WdAtomicAdd32((volatile int32_t *)(&context->ReferenceCount), 1);
    return;
}

int32_t MpInitializeCsrssHookDataIfNeeded(void)
{
    int32_t value;
    int64_t *allocation;
    uint64_t value_2;
    bool enabled;
    if (*(int64_t *)(MpData + 0x9b0) && !(*(char *)(MpData + 0x250)))
    {
        return 0;
    }
    allocation = MpAllocatePoolWithTag(1, (char *)0x20, 0x7370504d);
    if (!allocation)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xd, WD_SYMBOL_ADDRESS(WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids), (uint64_t)KeGetCurrentThread());
        }
        return -0x3fffffe9;
    }
    value = MpGetSystemFolderPath(L"\\SystemRoot\\System32\\csrss.exe", &allocation[2]);
    if (0 <= value)
    {
        value = MpGetSystemFolderPath(L"\\SystemRoot\\WinSxs\\", &allocation[1]);
        if (0 <= value)
        {
            value = MpGetSystemFolderPath(L"\\SystemRoot\\", allocation);
            if (0 <= value)
            {
                WdUnresolvedAtomicBegin();
                enabled = *(int64_t *)(MpData + 0x9b0) == 0;
                if (enabled)
                {
                    *(int64_t *)(MpData + 0x9b0) = (int64_t)allocation;
                }
                WdUnresolvedAtomicEnd();
                if (enabled)
                {
                    allocation = NULL;
                }
                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                {
                    WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x11, WD_SYMBOL_ADDRESS(WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids));
                }
                value = 0;
                if (!allocation)
                {
                    return 0;
                }
                MpFreeCsrssHookData(allocation);
                return value;
            }
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                MpFreeCsrssHookData(allocation);
                return value;
            }
            value_2 = 0x10;
        }
        else
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                MpFreeCsrssHookData(allocation);
                return value;
            }
            value_2 = 0xf;
        }
    }
    else
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            MpFreeCsrssHookData(allocation);
            return value;
        }
        value_2 = 0xe;
    }
    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids), (uint64_t)KeGetCurrentThread(), value);
    MpFreeCsrssHookData(allocation);
    return value;
}

uint64_t MpFreeProcessContext(void *context)
{
    uint64_t value;
    if (((void **)context)[10])
    {
        MpReleaseDocOpenRule(((void **)context)[10]);
    }
    if (((int64_t *)context)[5])
    {
        MpFreeString(((int64_t *)context)[5]);
    }
    if (((int64_t *)context)[0x10])
    {
        MpFreeString(((int64_t *)context)[0x10]);
    }
    MpFreeCopyCache(context);
    MpDlpProcessClearSensitiveSectionFileList(context);
    FltDeletePushLock((int64_t)context + 200);
    FltDeletePushLock((int64_t)context + 0x110);
    value = ExFreeToPagedLookasideList((void *)(MpProcessTable + 0x80), context);
    return value;
}

void CsrssPreScanFilterRoutine(uint64_t data, uint64_t input, void *input_2)
{
    char byte_value;
    uint64_t value;
    uint32_t value_2;
    int32_t status;
    uint64_t event_id;
    int64_t value_3;
    char byte_value_2;
    char byte_value_3;
    char buffer[32];
    int64_t values[8];
    int64_t *file_name;
    value_2 = (uint32_t)((uint64_t)value >> 0x20);
    values[7] = __security_cookie ^ (uint64_t)buffer;
    values[0] = 0;
    values[1] = 0;
    values[2] = 0;
    byte_value_3 = 0;
    byte_value_2 = 0;
    values[3] = 0;
    values[4] = 0;
    values[5] = 0;
    values[6] = 0;
    if (*(uint32_t *)(((int64_t *)input_2)[1] + 0x50) & 1)
    {
        if (*(int64_t *)(*(int64_t *)(MpData + 0x9b0) + 8))
        {
            if (*(*(int64_t **)(MpData + 0x9b0)))
            {
                file_name = values;
                status = FltGetFileNameInformation(data, 0x101, file_name);
                if (0 <= status)
                {
                    byte_value_2 = byte_value_3;
                    if (*(int16_t *)(values[0] + 8))
                    {
                        event_id = (uint64_t)((uint64_t)file_name) & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
                        byte_value = RtlPrefixUnicodeString(*(*(uint64_t **)(MpData + 0x9b0)), (int16_t *)(values[0] + 8), event_id);
                        if (byte_value)
                        {
                            status = FltParseFileNameInformation(values[0]);
                            if (0 <= status)
                            {
                                if (*(int16_t *)(values[0] + 0x38))
                                {
                                    RtlInitUnicodeString(&values[1], WD_PROCESSCONTEXT_UNRECOVERED_ADDRESS2);
                                    event_id = (uint64_t)event_id & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
                                    byte_value = RtlEqualUnicodeString(&values[1], values[0] + 0x38, event_id);
                                    if (!byte_value)
                                    {
                                        event_id = (uint64_t)event_id & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
                                        byte_value = RtlPrefixUnicodeString(*(uint64_t *)(*(int64_t *)(MpData + 0x9b0) + 8), values[0] + 8, event_id);
                                        if (!byte_value)
                                        {
                                            goto block_2;
                                        }
                                        RtlInitUnicodeString(&values[3], L"manifest");
                                        RtlInitUnicodeString(&values[5], L"policy");
                                        event_id = (uint64_t)event_id & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
                                        byte_value = RtlEqualUnicodeString(&values[3], values[0] + 0x38, event_id);
                                        if (!byte_value)
                                        {
                                            value_3 = values[0] + 0x38;
                                            if (!RtlEqualUnicodeString(&values[5], value_3, (uint64_t)event_id & 0xffffffffffffff00 | (uint64_t)1 & 0xff))
                                            {
                                                goto block_2;
                                            }
                                        }
                                    }
                                    byte_value_2 = 1;
                                }
                            }
                            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                            {
                                event_id = 0x3a;
                                goto block_1;
                            }
                        }
                    }
                }
                else
                {
                    byte_value_2 = byte_value_3;
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        event_id = 0x39;
                        block_1:
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_2 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);

                        byte_value_2 = byte_value_3;
                    }
                }
                block_2:
                if (values[0])
                {
                    FltReleaseFileNameInformation();
                }
            }
            else
            {
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                {
                    __security_check_cookie(values[7] ^ (uint64_t)buffer);
                    return;
                }
                if (*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    event_id = 0x38;
                    goto block_3;
                }
            }
        }
        else
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                __security_check_cookie(values[7] ^ (uint64_t)buffer);
                return;
            }
            if (*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                event_id = 0x37;
                block_3:
                WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids), (uint64_t)KeGetCurrentThread());

                byte_value_2 = byte_value_3;
                goto block_2;
            }
        }
    }
    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
    {
        WPP_SF_dZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x3b, WD_SYMBOL_ADDRESS(WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids), (uint8_t)byte_value_2, &((int16_t *)input_2)[0x78]);
    }
    __security_check_cookie(values[7] ^ (uint64_t)buffer);
    return;
}

void MpCreateProcessContext(uint64_t process_id, int64_t input, uint64_t *input_2, int64_t *input_3)
{
    uint64_t *index;
    int64_t token;
    int64_t *list_entry;
    int64_t *data_pointer;
    uint64_t event_id;
    uint64_t value;
    int64_t process_table;
    uint64_t value_2;
    int64_t process = 0;
    int64_t value_3 = 0;
    WD_UNICODE_STRING_VALUE *source_string;
    int32_t token_information[2];
    int64_t process_context;
    uint64_t *data_pointer_2;
    uint64_t value_4;
    uint32_t value_5;
    uint32_t value_6;
    WD_UNICODE_STRING_ADDRESS_VIEW *source_string_2;
    bool enabled;
    char byte_value;
    int32_t buffer_size;
    int32_t trace_argument_1;
    uint32_t trace_argument_1_2;
    int64_t *list_entry_2;
    token = input;
    if (!input && 0xb <= (uint32_t)process_id && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        token = 0;
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x14, WD_SYMBOL_ADDRESS(WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids), (uint64_t)KeGetCurrentThread(), (uint64_t)value_4 & 0xffffffff00000000 | (uint64_t)((uint32_t)process_id) & 0xffffffff);
    }
    *input_3 = 0;
    process_table = MpProcessTable;
    if (process_id)
    {
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(process_table + 8, (uint64_t)token & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
        trace_argument_1_2 = (uint32_t)(process_id >> 2);
        data_pointer_2 = (uint64_t *)((trace_argument_1_2 & 0x7f) * 0x10ULL + *(int64_t *)(MpProcessTable + 0x180));
        for (index = (uint64_t *)(*data_pointer_2); index != data_pointer_2; index = (uint64_t *)(*index))
        {
            if (process_id == index[2] && input == index[3])
            {
                WdAtomicAdd32((volatile int32_t *)((int32_t *)(&index[5])), 1);
                ExReleaseResourceLite(MpProcessTable + 8);
                KeLeaveCriticalRegion();
                if (!(&index[-1]))
                {
                    goto block_1;
                }
                *input_3 = (int64_t)(&index[-1]);
                list_entry_2 = NULL;
                goto block_10;
            }
        }

        ExReleaseResourceLite(MpProcessTable + 8);
        KeLeaveCriticalRegion();
    }
    block_1:
    token = MpProcessTable;

    process_table = MpProcessTable + 0x80;
    *(int32_t *)(MpProcessTable + 0x94) = *(int32_t *)(MpProcessTable + 0x94) + 1;
    list_entry_2 = (int64_t *)ExpInterlockedPopEntrySList(process_table);
    if (!list_entry_2)
    {
        *(int32_t *)(token + 0x98) = *(int32_t *)(token + 0x98) + 1;
        list_entry_2 = (int64_t *)(*__guard_dispatch_icall_fptr)(*(uint32_t *)(token + 0xa4), *(uint32_t *)(token + 0xac), *(uint32_t *)(token + 0xa8));
    }
    if (!list_entry_2)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qqL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x15, WD_SYMBOL_ADDRESS(WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids), (uint64_t)KeGetCurrentThread(), process_id, WD_STATUS_INSUFFICIENT_RESOURCES);
        }
        goto block_10;
    }
    memset(list_entry_2, 0, (char *)0x130);
    *(uint32_t *)list_entry_2 = 0x130da0f;
    list_entry_2[3] = process_id;
    list_entry_2[4] = input;
    *(uint32_t *)(&list_entry_2[0x24]) = *(uint32_t *)(&list_entry_2[0x24]) & 0xfffffffd | 0x38;
    *(uint32_t *)(&list_entry_2[6]) = 1;
    list_entry_2[9] = -1;
    *(uint32_t *)(&list_entry_2[0x18]) = 0;
    FltInitializePushLock(&list_entry_2[0x19]);
    list_entry = &list_entry_2[0x1a];
    *(char *)(&list_entry_2[0x1d]) = 0;
    list_entry_2[0x1b] = (int64_t)list_entry;
    *list_entry = (int64_t)list_entry;
    FltInitializePushLock(&list_entry_2[0x22]);
    buffer_size = PsLookupProcessByProcessId(process_id, &process);
    if (0 <= buffer_size)
    {
        WdUnresolvedAtomicBegin();
        ObTotalReferences += 1;
        WdUnresolvedAtomicEnd();
        value = *__imp_PsProcessType;
        buffer_size = ObOpenObjectByPointer(process, 0x200, 0, 0x1fffff, value, value_6 & 0xffffff00, &value_3);
        if (0 <= buffer_size)
        {
            list_entry = &list_entry_2[0x1c];
            token_information[0] = 0;
            buffer_size = -0x3ffffff3;
            if (process && list_entry)
            {
                *(char *)list_entry = 0;
                token = PsReferencePrimaryToken(process);
                if (!token)
                {
                    trace_argument_1 = -0x3fffffff;
                    goto block_2;
                }
                trace_argument_1 = SeQueryInformationToken(token, 0x1d, token_information);
                if (0 <= trace_argument_1)
                {
                    *(bool *)list_entry = token_information[0] != 0;
                }
                PsDereferencePrimaryToken(token);
                if (trace_argument_1 < 0)
                {
                    goto block_2;
                }
            }
            else
            {
                trace_argument_1 = -0x3ffffff3;
                block_2:
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    value = process_id;
                    WPP_SF_qqL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x18, WD_SYMBOL_ADDRESS(WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids), (uint64_t)KeGetCurrentThread(), process_id, trace_argument_1);
                }
            }
            if (input_2 && (source_string = (WD_UNICODE_STRING_VALUE *)(*input_2), source_string) && source_string->Length)
            {
                trace_argument_1 = MpDuplicateString(source_string, &list_entry_2[0x10]);
                if (0 <= trace_argument_1)
                {
                    block_3:
                    trace_argument_1 = MpGetKnownProcessType((WD_UNICODE_STRING_ADDRESS_VIEW *)list_entry_2[0x10], &list_entry_2[0x1e]);

                    value_5 = (uint32_t)(value >> 0x20);
                    if (trace_argument_1 <= -1)
                    {
                        *(uint32_t *)(&list_entry_2[0x1e]) = 0;
                    }
                    if (*(char *)(MpData + 0xfd1))
                    {
                        source_string_2 = (WD_UNICODE_STRING_ADDRESS_VIEW *)list_entry_2[0x10];
                        if (source_string_2)
                        {
                            value_2 = 0;
                            do
                            {
                                byte_value = MpSuffixUnicodeString((WD_UNICODE_STRING_POINTER_VIEW *)(value_2 * 0x10 + WD_UTIL_UNRECOVERED_ADDRESS5), source_string_2);
                                value_5 = (uint32_t)(value >> 0x20);
                                if (byte_value)
                                {
                                    trace_argument_1_2 = 0x40;
                                    goto block_4;
                                }
                                trace_argument_1_2 = (int32_t)value_2 + 1;
                                value_2 = trace_argument_1_2;
                            }
                            while (trace_argument_1_2 < 8);
                            trace_argument_1_2 = 0;
                        }
                        else
                        {
                            trace_argument_1_2 = 0;
                        }
                        block_4:
                        *(uint32_t *)(&list_entry_2[0x24]) = *(uint32_t *)(&list_entry_2[0x24]) & 0xffffffbf | trace_argument_1_2;
                    }
                    else
                    {
                        *(uint32_t *)(&list_entry_2[0x24]) = *(uint32_t *)(&list_entry_2[0x24]) & 0xffffffbf;
                    }
                    if (*(int32_t *)(&list_entry_2[0x1e]) == 0x14 && (source_string_2 = (WD_UNICODE_STRING_ADDRESS_VIEW *)list_entry_2[0x10], (int32_t)MpDlpLoadProcessModuleNotifyRoutine(list_entry_2, source_string_2) <= -1))
                    {
                        ((uint32_t *)list_entry_2)[0x39] = 0;
                    }
                    if ((*(int32_t *)(&list_entry_2[0x1e]) == 0x11 || *(int32_t *)(&list_entry_2[0x1e]) == 0x12) && (byte_value = MpMatchPerServiceSidByObj(process, *(int64_t *)(MpData + 0x960)), !byte_value))
                    {
                        *(uint32_t *)(&list_entry_2[0x1e]) = 0;
                    }
                    if (!(*(int32_t *)(&list_entry_2[0x1e])))
                    {
                        if (input_2 && input_2[2] && (byte_value = MpMatchPerServiceSidByObj(process, *(int64_t *)(MpData + 0x960)), byte_value))
                        {
                            token = input_2[2];
                            if (token == PsGetCurrentProcessId())
                            {
                                process_context = 0;
                                trace_argument_1 = MpGetProcessContextById(token, &process_context);
                                token = process_context;
                                if (0 <= trace_argument_1)
                                {
                                    if ((*(int32_t *)(process_context + 0xf0) == 0x11 || *(int32_t *)(process_context + 0xf0) == 0x12) && (!(*(int32_t *)(MpData + 0x1014)) || (source_string_2 = (WD_UNICODE_STRING_ADDRESS_VIEW *)list_entry_2[0x10], MpSuffixUnicodeString(&WdProcesscontextStorage22, source_string_2) || (source_string_2 = (WD_UNICODE_STRING_ADDRESS_VIEW *)list_entry_2[0x10], MpSuffixUnicodeString(&WdProcesscontextStorage26, source_string_2)))))
                                    {
                                        *(uint32_t *)(&list_entry_2[0x1e]) = 0x12;
                                    }
                                    MpReleaseProcessContext(token);
                                }
                            }
                        }
                        if (!(*(int32_t *)(&list_entry_2[0x1e])) && *(uint32_t *)(MpData + 0x360) & 0x4000 && (byte_value = MpMatchPerServiceSidByObj(process, *(int64_t *)(MpData + 0x960)), byte_value))
                        {
                            *(uint32_t *)(&list_entry_2[0x1e]) = 0x12;
                        }
                    }
                    if (input_2 && (source_string = (WD_UNICODE_STRING_VALUE *)input_2[1], source_string) && source_string->Length)
                    {
                        trace_argument_1 = MpDuplicateString(source_string, &list_entry_2[5]);
                        if (trace_argument_1 <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            event_id = 0x1b;
                            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids), trace_argument_1);
                        }
                    }
                    else
                    {
                        trace_argument_1 = MpGetProcessCommandLineByHandle(value_3, &list_entry_2[5]);
                        if (0 > trace_argument_1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            event_id = 0x1c;
                            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids), trace_argument_1);
                        }
                    }
                    enabled = 0;
                    process_context = process;
                    if (&list_entry_2[0x20])
                    {
                        token = process;
                        if (!process)
                        {
                            buffer_size = PsLookupProcessByProcessId(process_id, &process_context);
                            if (buffer_size < 0)
                            {
                                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                {
                                    event_id = ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)buffer_size & 0xffffffffULL;
                                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x11, WD_SYMBOL_ADDRESS(WPP_fa8e7b00178136a6e2a2b6da068185ef_Traceguids), (uint64_t)KeGetCurrentThread(), event_id);
                                    value_5 = (uint32_t)((uint64_t)event_id >> 0x20);
                                }
                                goto block_7;
                            }
                            WdUnresolvedAtomicBegin();
                            ObTotalReferences += 1;
                            WdUnresolvedAtomicEnd();
                            enabled = 1;
                            token = process_context;
                        }
                        token = PsReferencePrimaryToken(token);
                        token_information[0] = 0;
                        if (token)
                        {
                            trace_argument_1 = SeQueryInformationToken(token, 0xc, token_information);
                            buffer_size = trace_argument_1;
                            if (trace_argument_1 <= -1)
                            {
                                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                {
                                    event_id = ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)trace_argument_1 & 0xffffffffULL;
                                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x10, WD_SYMBOL_ADDRESS(WPP_fa8e7b00178136a6e2a2b6da068185ef_Traceguids), (uint64_t)KeGetCurrentThread(), event_id);
                                    value_5 = (uint32_t)((uint64_t)event_id >> 0x20);
                                }
                                goto block_6;
                            }
                            *(int32_t *)(&list_entry_2[0x20]) = token_information[0];
                            block_5:
                            PsDereferencePrimaryToken(token);
                        }
                        else
                        {
                            trace_argument_1 = -0x3ffffff3;
                            buffer_size = -0x3ffffff3;
                            block_6:
                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                            {
                                event_id = ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)trace_argument_1 & 0xffffffffULL;
                                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x12, WD_SYMBOL_ADDRESS(WPP_fa8e7b00178136a6e2a2b6da068185ef_Traceguids), (uint64_t)KeGetCurrentThread(), event_id);
                                value_5 = (uint32_t)((uint64_t)event_id >> 0x20);
                            }

                            if (token)
                            {
                                goto block_5;
                            }
                        }
                        if (enabled)
                        {
                            ObfDereferenceObject(process_context);
                            token = ObTotalReferences;
                            WdUnresolvedAtomicBegin();
                            ObTotalReferences -= 1;
                            WdUnresolvedAtomicEnd();
                            if (token + -1 <= -1 && *(int32_t *)(MpData + 0x364) <= -1)
                            {
                                if (KdRefreshDebuggerNotPresent())
                                {
                                    KeBugCheck(1);
                                }
                                (*(WD_ROUTINE)swi(3))();
                                return;
                            }
                        }
                        if (buffer_size <= -1)
                        {
                            goto block_7;
                        }
                    }
                    else
                    {
                        block_7:
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1d, WD_SYMBOL_ADDRESS(WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)buffer_size & 0xffffffffULL);
                        }

                        *(uint32_t *)(&list_entry_2[0x20]) = 0xffffffff;
                    }
                    byte_value = (char)(*(uint32_t *)(MpData + 0x360));
                    if ('\0' <= byte_value || (trace_argument_1_2 = ZwQueryInformationProcess(value_3, 0x4b, &list_entry_2[0xf], 4, 0), 0 <= (int32_t)trace_argument_1_2))
                    {
                        trace_argument_1_2 = ZwQueryInformationProcess(value_3, 0x3d, &list_entry_2[0x17], 1, 0);
                        *(uint32_t *)(&list_entry_2[0x24]) = ~trace_argument_1_2 >> 0x1f | *(uint32_t *)(&list_entry_2[0x24]) & 0xfffffffe;
                        if ((int32_t)trace_argument_1_2 <= -1)
                        {
                            if (*(uint32_t *)(MpData + 0x360) & 0x100)
                            {
                                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                                {
                                    goto block_10;
                                }
                                event_id = 0x1f;
                                goto block_9;
                            }
                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                            {
                                WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x20, WD_SYMBOL_ADDRESS(WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids), trace_argument_1_2);
                            }
                        }
                        if (process_id == 4)
                        {
                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                            {
                                WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x21, WD_SYMBOL_ADDRESS(WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids));
                            }
                            *(uint32_t *)((int64_t)list_entry_2 + 0x34) = *(uint32_t *)((int64_t)list_entry_2 + 0x34) | 0x4040;
                            *(uint32_t *)(&list_entry_2[0x1e]) = 0x1e;
                        }
                        list_entry = &list_entry_2[1];
                        list_entry_2[2] = (int64_t)list_entry;
                        *list_entry = (int64_t)list_entry;
                        buffer_size = WdDataStorage10 * 0x38;
                        list_entry_2[0x21] = 0;
                        *(uint32_t *)(&list_entry_2[0x23]) = 0;
                        if (buffer_size && !list_entry_2[0x21])
                        {
                            WdCopycacheStorage6 += 1;
                            list_entry = (int64_t *)ExpInterlockedPopEntrySList(WD_SYMBOL_ADDRESS(gs_CopyCacheLookaside));
                            if (!list_entry)
                            {
                                WdCopycacheStorage7 += 1;
                                list_entry = (int64_t *)(*__guard_dispatch_icall_fptr)(WdCopycacheStorage10, WdCopycacheStorage12, WdCopycacheStorage11, WD_SYMBOL_ADDRESS(gs_CopyCacheLookaside));
                            }
                            list_entry_2[0x21] = (int64_t)list_entry;
                            if (!list_entry)
                            {
                                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                                {
                                    goto block_10;
                                }
                                event_id = 0x22;
                                trace_argument_1_2 = WD_STATUS_INSUFFICIENT_RESOURCES;
                                goto block_9;
                            }
                            memset(list_entry, 0, buffer_size);
                        }
                        token = process;
                        byte_value = MpIsCryptServiceProcess(list_entry_2, process);
                        if (byte_value)
                        {
                            *(uint32_t *)(&list_entry_2[0x1e]) = 0x1d;
                        }
                        process_table = MpProcessTable;
                        KeEnterCriticalRegion();
                        event_id = (uint64_t)token & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
                        ExAcquireResourceExclusiveLite(process_table + 8, event_id);
                        token = MpProcessTable;
                        if (process_id)
                        {
                            KeEnterCriticalRegion();
                            ExAcquireResourceSharedLite(token + 8, (uint64_t)event_id & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
                            trace_argument_1_2 = (uint32_t)(process_id >> 2);
                            value = trace_argument_1_2 & 0x7f;
                            token = *(int64_t *)(MpProcessTable + 0x180);
                            list_entry = *(int64_t **)(token + value * 0x10);
                            if (list_entry != (int64_t *)(token + value * 0x10))
                            {
                                do
                                {
                                    if (process_id == list_entry[2] && input == list_entry[3])
                                    {
                                        WdAtomicAdd32((volatile int32_t *)((int32_t *)(&list_entry[5])), 1);
                                        ExReleaseResourceLite(MpProcessTable + 8);
                                        KeLeaveCriticalRegion();
                                        if (!(&list_entry[-1]))
                                        {
                                            goto block_8;
                                        }
                                        token = MpProcessTable + 8;
                                        *input_3 = (int64_t)(&list_entry[-1]);
                                        ExReleaseResourceLite(token);
                                        KeLeaveCriticalRegion();
                                        goto block_10;
                                    }
                                    list_entry = (int64_t *)(*list_entry);
                                }
                                while (list_entry != (int64_t *)(token + value * 0x10));
                            }
                            ExReleaseResourceLite(MpProcessTable + 8);
                            KeLeaveCriticalRegion();
                        }
                        block_8:
                        list_entry = &list_entry_2[1];

                        trace_argument_1_2 = (uint32_t)(process_id >> 2);
                        data_pointer = (int64_t *)(*(int64_t *)(MpProcessTable + 0x180) + (trace_argument_1_2 & 0x7f) * 0x10ULL);
                        token = *data_pointer;
                        if (*(int64_t **)(token + 8) != data_pointer)
                        {
                            (*(WD_ROUTINE)swi(0x29))(3);
                        }
                        *list_entry = token;
                        list_entry_2[2] = (int64_t)data_pointer;
                        *(int64_t **)(token + 8) = list_entry;
                        *data_pointer = (int64_t)list_entry;
                        WdAtomicAdd32((volatile int32_t *)((int32_t *)(&list_entry_2[6])), 1);
                        if (((uint32_t *)list_entry_2)[0xd] & 0x40)
                        {
                            *(int32_t *)(MpProcessTable + 0x1a4) = *(int32_t *)(MpProcessTable + 0x1a4) + 1;
                        }
                        else
                        {
                            *(int32_t *)(MpProcessTable + 0x1a8) = *(int32_t *)(MpProcessTable + 0x1a8) + 1;
                        }
                        ExReleaseResourceLite(MpProcessTable + 8);
                        KeLeaveCriticalRegion();
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 0x10)
                        {
                            WPP_SF_ZdddiSdd(*(uint64_t *)(WPP_GLOBAL_Control + 0x18));
                        }
                        if (Microsoft_Antimalware_AMFilterEnableBits & 8)
                        {
                            McTemplateK0qzqqqz_EtwWriteTransfer(process_id & 0xffffffff);
                        }
                        if (Microsoft_Antimalware_AMFilterEnableBits & 0x10)
                        {
                            McTemplateK0qzqqzxx_EtwWriteTransfer(process_id & 0xffffffff);
                        }
                        *input_3 = (int64_t)list_entry_2;
                        list_entry_2 = NULL;
                    }
                    else
                    {
                        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                        {
                            goto block_10;
                        }
                        event_id = 0x1e;
                        block_9:
                        WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids), trace_argument_1_2);
                    }
                    goto block_10;
                }
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    goto block_10;
                }
                event_id = 0x19;
            }
            else
            {
                trace_argument_1 = MpGetProcessNameByHandle(value_3, &list_entry_2[0x10]);
                if (0 <= trace_argument_1)
                {
                    goto block_3;
                }
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    goto block_10;
                }
                event_id = 0x1a;
            }
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids), trace_argument_1);
            goto block_10;
        }
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            goto block_10;
        }
        event_id = 0x17;
    }
    else
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            goto block_10;
        }
        event_id = 0x16;
    }
    WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids), buffer_size);
    block_10:
    if (value_3)
    {
        ZwClose();
    }

    if (process)
    {
        ObfDereferenceObject(process);
        token = ObTotalReferences;
        WdUnresolvedAtomicBegin();
        ObTotalReferences -= 1;
        WdUnresolvedAtomicEnd();
        if (token + -1 <= -1 && *(int32_t *)(MpData + 0x364) <= -1)
        {
            if (KdRefreshDebuggerNotPresent())
            {
                KeBugCheck(1);
            }
            (*(WD_ROUTINE)swi(3))();
            return;
        }
    }
    if (list_entry_2)
    {
        MpFreeProcessContext(list_entry_2);
    }
    return;
}

void MpCreateProcessContextByObject(uint64_t process, int64_t *input)
{
    int64_t creation_time;
    creation_time = PsGetProcessCreateTimeQuadPart();
    MpCreateProcessContext(PsGetProcessId(process), creation_time, NULL, input);
    return;
}

uint64_t MpCryptSvcPreScanFilterRoutine(uint64_t input, uint64_t input_2, uint64_t input_3, void *input_4)
{
    uint64_t value;
    value = MpFcKernelGetValue(0xe5);
    if ((int32_t)value && ((int32_t *)input_4)[0x3c] == 0x1d)
    {
        value = (uint64_t)(((uint32_t *)input_4)[0xd] >> 6) & 0xffffffffffffff01;
    }
    else
    {
        value &= 0xffffffffffffff00;
    }
    return value;
}

void MpFreeCsrssHookData(int64_t *allocation)
{
    if (!allocation)
    {
        return;
    }
    if (*allocation)
    {
        ExFreePoolWithTag(*allocation, 0x6e6f704d);
    }
    if (allocation[1])
    {
        ExFreePoolWithTag(allocation[1], 0x6e6f704d);
    }
    if (allocation[2])
    {
        ExFreePoolWithTag(allocation[2], 0x6e6f704d);
    }
    ExFreePoolWithTag(allocation, 0x7370504d);
    return;
}

uint64_t MpGetKnownProcessType(WD_UNICODE_STRING_ADDRESS_VIEW *source_string, uint32_t *trace_argument_3, uint64_t ignore_case)
{
    uint16_t *target_name;
    int64_t value;
    char byte_value;
    int32_t value_2;
    uint32_t value_3;
    uint64_t *data_pointer;
    if (!source_string || !trace_argument_3)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
        {
            WPP_SF_qqq(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x3e, WD_SYMBOL_ADDRESS(WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids), (uint64_t)KeGetCurrentThread(), source_string, trace_argument_3);
        }
        return WD_STATUS_INVALID_PARAMETER;
    }
    *trace_argument_3 = 0;
    data_pointer = &WdProcesscontextStorage33;
    value_3 = 0;
    do
    {
        target_name = (uint16_t *)(*data_pointer);
        if (target_name && *target_name == source_string->Length)
        {
            ignore_case = (uint64_t)ignore_case & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
            value_2 = RtlCompareUnicodeString(source_string, target_name, ignore_case);
            if (!value_2)
            {
                *trace_argument_3 = *(uint32_t *)((int32_t)value_3 * 0x18LL + WD_PROCESSCONTEXT_UNRECOVERED_ADDRESS3);
                return 0;
            }
        }
        value_3 += 1;
        data_pointer = &data_pointer[3];
    }
    while (value_3 < 10);
    if (*(int32_t *)(MpData + 0x364) <= -1)
    {
        if (MpSuffixUnicodeString(&WdProcesscontextStorage25, source_string))
        {
            *trace_argument_3 = 0x18;
            return 0;
        }
        if (MpSuffixUnicodeString(&WdProcesscontextStorage9, source_string))
        {
            *trace_argument_3 = 0x19;
            return 0;
        }
    }
    if (*(int64_t *)(MpData + 0xcc0))
    {
        ignore_case = (uint64_t)ignore_case & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
        byte_value = RtlPrefixUnicodeString(*(int64_t *)(MpData + 0xcc0), source_string, ignore_case);
        if (byte_value)
        {
            if (MpSuffixUnicodeString(&WdProcesscontextStorage11, source_string) && (uint32_t)source_string->Length == *(*(uint16_t **)(MpData + 0xcc0)) + 0x8c)
            {
                block_1:
                *trace_argument_3 = 7;

                return 0;
            }
            if (MpSuffixUnicodeString(&WdProcesscontextStorage24, source_string))
            {
                ignore_case = (uint64_t)ignore_case & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
                byte_value = FsRtlIsNameInExpression(WD_PROCESSCONTEXT_UNRECOVERED_ADDRESS4, source_string, ignore_case, 0);
                if (byte_value)
                {
                    goto block_1;
                }
            }
            if (MpSuffixUnicodeString(&WdProcesscontextStorage21, source_string))
            {
                ignore_case = (uint64_t)ignore_case & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
                byte_value = FsRtlIsNameInExpression(WD_PROCESSCONTEXT_UNRECOVERED_ADDRESS5, source_string, ignore_case, 0);
                if (byte_value)
                {
                    *trace_argument_3 = 0x17;
                    return 0;
                }
            }
            if (MpSuffixUnicodeString(&WdProcesscontextStorage22, source_string))
            {
                ignore_case = (uint64_t)ignore_case & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
                byte_value = FsRtlIsNameInExpression(WD_PROCESSCONTEXT_UNRECOVERED_ADDRESS6, source_string, ignore_case, 0);
                if (byte_value)
                {
                    *trace_argument_3 = 0x12;
                    return 0;
                }
            }
        }
    }
    value = *(int64_t *)(MpData + 0xf60);
    if (value && RtlPrefixUnicodeString(value, source_string, (uint64_t)ignore_case & 0xffffffffffffff00 | (uint64_t)1 & 0xff) && MpSuffixUnicodeString(&WdProcesscontextStorage28, source_string))
    {
        *trace_argument_3 = 8;
    }
    else if (MpSuffixUnicodeString(&WdProcesscontextStorage20, source_string))
    {
        *trace_argument_3 = 4;
    }
    else if (MpSuffixUnicodeString(&WdProcesscontextStorage27, source_string))
    {
        *trace_argument_3 = 5;
    }
    else if (MpSuffixUnicodeString(&WdProcesscontextStorage15, source_string))
    {
        *trace_argument_3 = 6;
    }
    else if (MpSuffixUnicodeString(&WdProcesscontextStorage23, source_string) || MpSuffixUnicodeString(&WdProcesscontextStorage18, source_string))
    {
        *trace_argument_3 = 9;
    }
    else if (MpSuffixUnicodeString(&WdProcesscontextStorage29, source_string))
    {
        *trace_argument_3 = 10;
    }
    else if (MpSuffixUnicodeString(&WdProcesscontextStorage14, source_string))
    {
        *trace_argument_3 = 0xc;
    }
    else if (MpSuffixUnicodeString(&WdProcesscontextStorage31, source_string))
    {
        *trace_argument_3 = 0xb;
    }
    else if (MpSuffixUnicodeString(&WdProcesscontextStorage5, source_string))
    {
        *trace_argument_3 = 0xd;
    }
    else if (MpSuffixUnicodeString(&WdProcesscontextStorage30, source_string))
    {
        *trace_argument_3 = 0xe;
    }
    else if (MpSuffixUnicodeString(&WdProcesscontextStorage17, source_string) || MpSuffixUnicodeString(&WdProcesscontextStorage12, source_string))
    {
        *trace_argument_3 = 0xf;
    }
    else if (MpSuffixUnicodeString(&WdProcesscontextStorage6, source_string))
    {
        *trace_argument_3 = 0x1b;
    }
    else if (MpSuffixUnicodeString(&WdProcesscontextStorage19, source_string) || MpSuffixUnicodeString(&WdProcesscontextStorage16, source_string))
    {
        *trace_argument_3 = 0x1c;
    }
    else
    {
        if (!MpSuffixUnicodeString(&WdProcesscontextStorage8, source_string))
        {
            return WD_STATUS_NOT_FOUND;
        }
        *trace_argument_3 = 0x20;
    }
    return 0;
}

int32_t MpGetProcessBlockExecStatus(WD_LAYOUT_27 *input)
{
    if (input && input->field_0xf0 == 0x14)
    {
        return (-(uint32_t)((*(uint32_t *)(MpData + 0x360) & 4) != 0) & 0x8e4) + WD_STATUS_ACCESS_DENIED;
    }
    return -0x3fffffde;
}

void MpIsCryptServiceProcess(void *input, int64_t input_2)
{
    WD_UNICODE_STRING_VALUE *text;
    int64_t string = 0;
    int64_t value = 0;
    int64_t value_2;
    int64_t value_4;
    int32_t status;
    uint64_t value_5;
    int64_t process = 0;
    int64_t process_context = 0;
    int64_t source_string = 0;
    int32_t trace_argument_3[2];
    trace_argument_3[0] = 0;
    if (((int32_t *)input)[0x3c] != 0x13 || (text = ((WD_UNICODE_STRING_VALUE **)input)[5], !text))
    {
        return;
    }
    value_2 = string;
    if (text->Length && ((value_2 = value, text->Buffer && MpFindUnicodeSubstring(text)) && (value_4 = *(int64_t *)(MpData + 0x978), MpMatchPerServiceSidByObj(input_2, value_4))))
    {
        status = MpGetParentProcessByObject(input_2, &process);
        if (status <= -1)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
            {
                value_5 = 0x3f;
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_5, WD_SYMBOL_ADDRESS(WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids), (uint64_t)KeGetCurrentThread(), status);
                value_2 = string;
            }
            goto block_1;
        }
        status = MpGetProcessContextByObject(process, &process_context);
        if (status < 0)
        {
            status = MpGetProcessNameByObject(process, &source_string);
            string = source_string;
            if (0 <= status)
            {
                status = MpGetKnownProcessType(source_string, trace_argument_3);
                value_2 = string;
                if (0 <= status)
                {
                    if (trace_argument_3[0] == 0x1a)
                    {
                        goto block_2;
                    }
                }
                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                {
                    value_5 = 0x41;
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_5, WD_SYMBOL_ADDRESS(WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids), (uint64_t)KeGetCurrentThread(), status);
                    value_2 = string;
                }
            }
            else
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                {
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x40, WD_SYMBOL_ADDRESS(WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids), (uint64_t)KeGetCurrentThread(), status);
                }
                value_2 = source_string;
            }
            goto block_1;
        }
        if (*(int32_t *)(process_context + 0xf0) != 0x1a)
        {
            goto block_1;
        }
    }
    else
    {
        block_1:
        string = value_2;
    }
    block_2:
    if (process)
    {
        ObfDereferenceObject();
    }

    if (string)
    {
        MpFreeString(string);
    }
    if (process_context)
    {
        MpReleaseProcessContext(process_context);
    }
    return;
}

void MpReleaseProcessContextList(int64_t *input)
{
    int64_t *data_pointer;
    while (data_pointer = (int64_t *)(*input), data_pointer)
    {
        *input = *data_pointer;
        MpReleaseProcessContextListEntry(&data_pointer[-1]);
    }

    return;
}

void MpSetCsrssPreScanFilterRoutine(int64_t input, void *trace_argument_2, int16_t *input_2)
{
    uint64_t value;
    int32_t value_2;
    int32_t values[2];
    int16_t *wide_text;
    uint64_t value_3;
    uint32_t value_4;
    value_4 = (uint32_t)((uint64_t)value_3 >> 0x20);
    values[0] = -1;
    if (trace_argument_2 && input_2)
    {
        wide_text = input_2;
        MpInitializeCsrssHookDataIfNeeded();
        if (*(int64_t *)(MpData + 0x9b0) && !(*(char *)(*(int64_t *)(MpData + 0x9b0) + 0x18)) && !((int64_t *)trace_argument_2)[0xb] && *input_2)
        {
            if (*(int64_t *)(*(int64_t *)(MpData + 0x9b0) + 0x10))
            {
                value = *(uint64_t *)(*(int64_t *)(MpData + 0x9b0) + 0x10);
                if (RtlEqualUnicodeString(input_2, value, (uint64_t)((uint64_t)wide_text) & 0xffffffffffffff00 | (uint64_t)1 & 0xff))
                {
                    value_2 = MpQuerySessionIdFromProcess(input, ((uint64_t *)trace_argument_2)[3], values);
                    if (0 <= value_2)
                    {
                        if (!values[0])
                        {
                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                            {
                                WPP_SF_qq(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x36, WD_SYMBOL_ADDRESS(WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids), (uint64_t)KeGetCurrentThread(), trace_argument_2);
                            }
                            *(WD_ROUTINE *)((int64_t)trace_argument_2 + 0x58) = CsrssPreScanFilterRoutine;
                            *(char *)(*(int64_t *)(MpData + 0x9b0) + 0x18) = 1;
                        }
                    }
                    else
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x35, WD_SYMBOL_ADDRESS(WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)value_2 & 0xffffffffULL);
                        }
                        *(WD_ROUTINE *)((int64_t)trace_argument_2 + 0x58) = CsrssPreScanFilterRoutine;
                    }
                }
            }
            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x34, WD_SYMBOL_ADDRESS(WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids), (uint64_t)KeGetCurrentThread());
            }
        }
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x33, WD_SYMBOL_ADDRESS(WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INVALID_PARAMETER & 0xffffffffULL);
    }
    return;
}

void MpSetProcessPreScanFilterRoutine(int64_t input, void *trace_argument_2, int16_t *input_2)
{
    int32_t value;
    WD_ROUTINE system_pre_scan_filter_routine;
    value = ((int32_t *)trace_argument_2)[0x3c];
    if (value != 0x1d)
    {
        if (value != 0x1e)
        {
            if (value != 0x1f)
            {
                return;
            }
            MpSetCsrssPreScanFilterRoutine(input, trace_argument_2, input_2);
            return;
        }
        system_pre_scan_filter_routine = MpSystemPreScanFilterRoutine;
    }
    else
    {
        system_pre_scan_filter_routine = MpCryptSvcPreScanFilterRoutine;
    }
    ((WD_ROUTINE *)trace_argument_2)[0xb] = system_pre_scan_filter_routine;
    return;
}

void MpShutdownProcessTable(void)
{
    int64_t value;
    int64_t *data_pointer;
    uint32_t value_2;
    int64_t *data_pointer_2;
    if (!MpProcessTable)
    {
        return;
    }
    if (*(int64_t *)(MpProcessTable + 0x180))
    {
        value_2 = 0;
        do
        {
            while (true)
            {
                data_pointer = (int64_t *)(*(int64_t *)(MpProcessTable + 0x180) + value_2 * 0x10ULL);
                data_pointer_2 = (int64_t *)(*data_pointer);
                if (data_pointer_2 == data_pointer)
                {
                    break;
                }
                if ((int64_t *)data_pointer_2[1] != data_pointer || (value = *data_pointer_2, (int64_t *)(*(int64_t *)(value + 8)) != data_pointer_2))
                {
                    (*(WD_ROUTINE)swi(0x29))(3);
                }
                *data_pointer = value;
                *(int64_t **)(value + 8) = data_pointer;
                MpReleaseProcessContext(&data_pointer_2[-1]);
            }

            value_2 += 1;
        }
        while (value_2 < 0x80);
    }
    if (*(int64_t *)(MpProcessTable + 0x180))
    {
        ExFreePoolWithTag(*(int64_t *)(MpProcessTable + 0x180), 0x5470504d);
    }
    ExDeletePagedLookasideList(MpProcessTable + 0x100);
    ExDeletePagedLookasideList(MpProcessTable + 0x80);
    ExDeleteResourceLite(MpProcessTable + 8);
    ExFreePoolWithTag(MpProcessTable, 0x5470504d);
    value_2 = 0;
    MpProcessTable = 0;
    data_pointer_2 = &WdProcesscontextStorage33;
    do
    {
        if (*data_pointer_2)
        {
            ExFreePoolWithTag(*data_pointer_2, 0x6e6f704d);
            *data_pointer_2 = 0;
        }
        value_2 += 1;
        data_pointer_2 = &data_pointer_2[3];
    }
    while (value_2 < 10);
    return;
}

void MpSystemPreScanFilterRoutine(void *data, uint64_t input, void *input_2, void *input_3)
{
    int32_t status;
    WD_UNICODE_STRING_ADDRESS_VIEW *source_string;
    int64_t file_name = 0;
    void *data_pointer;
    if (((uint32_t *)input_3)[0xd] & 0x4000)
    {
        if (!(*(uint32_t *)(((int64_t *)input_2)[1] + 0x50) & 1) || ((char *)data)[0x50])
        {
            return;
        }
        data_pointer = input_2;
        if (MpFcKernelGetValue(0xe6) && (!(((uint32_t *)data_pointer)[0xc] >> 0x17 & 1) && !(((uint32_t *)data_pointer)[0xc] >> 0x18 & 1)))
        {
            status = FltGetFileNameInformation(data, 0x102, &file_name);
            if (0 <= status)
            {
                source_string = (WD_UNICODE_STRING_ADDRESS_VIEW *)(file_name + 8);
                if (MpSuffixUnicodeString(&WdProcesscontextStorage13, source_string) || (source_string = (WD_UNICODE_STRING_ADDRESS_VIEW *)(file_name + 8), MpSuffixUnicodeString(&WdProcesscontextStorage10, source_string)))
                {
                    WdAtomicOr32((volatile int32_t *)((uint32_t *)((int64_t)input_2 + 0x30)), 0x800000);
                }
                else
                {
                    WdAtomicOr32((volatile int32_t *)((uint32_t *)((int64_t)input_2 + 0x30)), 0x1000000);
                }
            }
            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x3d, WD_SYMBOL_ADDRESS(WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids), (uint64_t)KeGetCurrentThread(), status);
            }
        }
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x3c, WD_SYMBOL_ADDRESS(WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids), (uint64_t)KeGetCurrentThread());
    }
    if (file_name)
    {
        FltReleaseFileNameInformation();
    }
    return;
}

int64_t MpInitializeProcessTable(void)
{
    uint32_t *process_table;
    uint32_t value;
    uint32_t *allocation;
    int64_t *allocation_2;
    int64_t value_2;
    int64_t value_3;
    int64_t value_4;
    int64_t value_5;
    uint64_t value_6;
    value = (uint32_t)((uint64_t)value_6 >> 0x20);
    allocation = (uint32_t *)MpAllocatePoolWithTag(ExDefaultNonPagedPoolType, (char *)0x1c0, 0x5470504d);
    value_4 = 0;
    MpProcessTable = allocation;
    if (!allocation)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 10, WD_SYMBOL_ADDRESS(WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INSUFFICIENT_RESOURCES & 0xffffffffULL);
        }
        return WD_STATUS_INSUFFICIENT_RESOURCES;
    }
    *allocation = 0x1c0da13;
    ExInitializeResourceLite(&allocation[2]);
    ExInitializePagedLookasideList(&MpProcessTable[0x20], 0, 0, 0, 0x130, 0x5870504d, 0);
    value = 0;
    ExInitializePagedLookasideList(&MpProcessTable[0x40], 0, 0, 0, 0x18, 0x6570504d, 0);
    allocation_2 = MpAllocatePoolWithTag(1, (char *)0x800, 0x5470504d);
    allocation = MpProcessTable;
    *(int64_t **)(&MpProcessTable[0x60]) = allocation_2;
    if (allocation_2)
    {
        value_5 = 0x80;
        value_3 = value_4;
        do
        {
            value_2 = *(int64_t *)(&allocation[0x60]) + value_3;
            value_3 += 0x10;
            *(int64_t *)(value_2 + 8) = value_2;
            *(int64_t *)value_2 = value_2;
            process_table = MpProcessTable;
            value_5 -= 1;
        }
        while (value_5);
        MpProcessTable[0x68] = 0;
        KeInitializeEvent(&process_table[0x62], 0, 1);
    }
    else
    {
        value_4 = WD_STATUS_INSUFFICIENT_RESOURCES;
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xb, WD_SYMBOL_ADDRESS(WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INSUFFICIENT_RESOURCES & 0xffffffffULL);
        }
    }
    return value_4;
}

void MpUpdateRunningProcesses(uint64_t input, uint64_t input_2)
{
    uint64_t *data_pointer;
    int32_t status;
    uint64_t *data_pointer_2;
    uint64_t *process_list = NULL;
    status = MpGetProcessContextList(&process_list, (uint64_t)input_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
    if (0 <= status)
    {
        data_pointer_2 = process_list;
        while (data_pointer_2)
        {
            data_pointer = (uint64_t *)(*data_pointer_2);
            MpSetProcessPreScanFilterRoutine(0, (void *)data_pointer_2[1], ((int16_t **)data_pointer_2[1])[0x10]);
            MpSetProcessHardening(0, (void *)data_pointer_2[1], ((int16_t **)data_pointer_2[1])[0x10]);
            MpSetProcessHardeningExclusion((void *)data_pointer_2[1], 0, ((int16_t **)data_pointer_2[1])[0x10]);
            MpReleaseProcessContextListEntry((WD_LAYOUT_15 *)(&data_pointer_2[-1]));
            data_pointer_2 = data_pointer;
        }

        return;
    }
    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x31, WD_SYMBOL_ADDRESS(WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids), (uint64_t)KeGetCurrentThread(), status);
    }
    if (!process_list)
    {
        return;
    }
    MpReleaseProcessContextList(&process_list);
    return;
}

#include "wdfilter.h"

int32_t MpCreateDlpSectionFileNameEntry(int64_t input, WD_UNICODE_STRING_VALUE *input_2, int64_t *input_3)
{
    int32_t value;
    int64_t allocation;
    int64_t *allocation_2;
    uint64_t value_2;
    if (input && input_2)
    {
        if (input_2->Length && input_2->Buffer)
        {
            allocation = (int64_t)MpAllocatePoolWithTag(1, (char *)0x38, 0x6673504d);
            if (!allocation)
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1a, WD_SYMBOL_ADDRESS(WPP_cb3208452d573ca4daa63a8ca1f3e9a4_Traceguids), (uint64_t)KeGetCurrentThread(), WD_STATUS_INSUFFICIENT_RESOURCES);
                }
                return -0x3fffff66;
            }
            *(int64_t *)(allocation + 0x18) = input;
            *(uint32_t *)(allocation + 0x10) = 0;
            allocation_2 = MpAllocatePoolWithTag(1, input_2->Length, 0x6e66504d);
            *(int64_t **)(allocation + 0x28) = allocation_2;
            if (allocation_2)
            {
                ((WD_UNICODE_STRING_VALUE *)(allocation + 0x20))->Length = 0;
                *(uint16_t *)(allocation + 0x22) = input_2->Length;
                value = RtlUnicodeStringCopy((WD_UNICODE_STRING_VALUE *)(allocation + 0x20), input_2);
                if (0 <= value)
                {
                    *input_3 = allocation;
                    return 0;
                }
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1b, WD_SYMBOL_ADDRESS(WPP_cb3208452d573ca4daa63a8ca1f3e9a4_Traceguids), (uint64_t)KeGetCurrentThread(), value);
                }
            }
            else
            {
                value = -0x3fffff66;
            }
            if (*(int64_t *)(allocation + 0x18))
            {
                *(uint64_t *)(allocation + 0x18) = 0;
            }
            if (*(int64_t *)(allocation + 0x28))
            {
                ExFreePoolWithTag(*(int64_t *)(allocation + 0x28), 0x6e66504d);
                *(uint64_t *)(allocation + 0x28) = 0;
            }
            ExFreePoolWithTag(allocation, 0x6673504d);
            return value;
        }
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
        {
            return -0x3ffffff3;
        }
        if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return -0x3ffffff3;
        }
        value_2 = 0x19;
    }
    else
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
        {
            return -0x3ffffff3;
        }
        if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return -0x3ffffff3;
        }
        value_2 = 0x18;
    }
    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_cb3208452d573ca4daa63a8ca1f3e9a4_Traceguids), (uint64_t)KeGetCurrentThread(), WD_STATUS_INVALID_PARAMETER);
    return -0x3ffffff3;
}

void RtlUnicodeStringCopy(WD_UNICODE_STRING_VALUE *input, WD_UNICODE_STRING_VALUE *input_2)
{
    int32_t value;
    uint64_t value_2 = 0;
    uint64_t value_3 = 0;
    uint64_t value_4;
    uint64_t value_5;
    uint64_t value_6;
    uint64_t value_7 = 0;
    value = RtlUnicodeStringValidateDestWorker(input, &value_2, &value_3, NULL, 0x7fff, 0);
    if (0 <= value)
    {
        value_5 = 0;
        value_4 = 0;
        value_6 = 0;
        value = RtlUnicodeStringValidateSrcWorker(input_2, &value_5, &value_4, 0x7fff, value_7 & 0xffffffff00000000);
        if (0 <= value)
        {
            value = RtlWideCharArrayCopyWorker(value_2, value_3, &value_6, value_5, value_4);
        }
        input->Length = (int16_t)value_6 * 2;
    }
    return;
}

void MpDeleteDlpSectionFileNameEntry(void *allocation)
{
    if (!allocation)
    {
        return;
    }
    if (((int64_t *)allocation)[3])
    {
        ((uint64_t *)allocation)[3] = 0;
    }
    if (((int64_t *)allocation)[5])
    {
        ExFreePoolWithTag(((int64_t *)allocation)[5], 0x6e66504d);
        ((uint64_t *)allocation)[5] = 0;
    }
    ExFreePoolWithTag(allocation, 0x6673504d);
    return;
}

void WPP_SF_Zq(uint64_t input, uint64_t input_2, uint64_t input_3, int16_t *input_4, uint64_t input_5)
{
    int16_t value;
    uint64_t value_2;
    uint64_t value_3;
    value_3 = input_5;
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

    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_cb3208452d573ca4daa63a8ca1f3e9a4_Traceguids), 10, input_4, 2, value_2, (uint16_t)value, &value_3, 8, 0);
    return;
}

void WPP_SF_ZqDD(uint64_t input, uint64_t input_2, uint64_t input_3, int16_t *input_4, uint64_t input_5)
{
    int16_t value;
    uint64_t value_2;
    uint64_t value_3;
    value_3 = input_5;
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

    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_cb3208452d573ca4daa63a8ca1f3e9a4_Traceguids), 0xb, input_4, 2, value_2, (uint16_t)value, &value_3, 8, &unrecovered_stack_argument_6, 4, &unrecovered_stack_argument_7, 4, 0);
    return;
}

int32_t MpCreateDlpProcessEntry(WD_PROCESS_REFERENCE_VIEW *input, WD_UNICODE_STRING_VALUE *input_2, int64_t *input_3)
{
    int32_t value;
    int64_t allocation;
    int64_t *allocation_2;
    uint64_t value_2;
    if (input_2)
    {
        if (input_2->Length && input_2->Buffer)
        {
            allocation = (int64_t)MpAllocatePoolWithTag(1, (char *)0x30, 0x6670504d);
            if (!allocation)
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x16, WD_SYMBOL_ADDRESS(WPP_cb3208452d573ca4daa63a8ca1f3e9a4_Traceguids), (uint64_t)KeGetCurrentThread(), WD_STATUS_INSUFFICIENT_RESOURCES);
                }
                return -0x3fffff66;
            }
            if (input)
            {
                *(WD_PROCESS_REFERENCE_VIEW **)(allocation + 0x10) = input;
                WdAtomicAdd32((volatile int32_t *)(&input->ReferenceCount), 1);
            }
            else
            {
                *(uint64_t *)(allocation + 0x10) = 0;
            }
            allocation_2 = MpAllocatePoolWithTag(1, input_2->Length, 0x6e66504d);
            *(int64_t **)(allocation + 0x20) = allocation_2;
            if (allocation_2)
            {
                ((WD_UNICODE_STRING_VALUE *)(allocation + 0x18))->Length = 0;
                *(uint16_t *)(allocation + 0x1a) = input_2->Length;
                value = RtlUnicodeStringCopy((WD_UNICODE_STRING_VALUE *)(allocation + 0x18), input_2);
                if (0 <= value)
                {
                    *(uint32_t *)(allocation + 0x28) = 0;
                    *input_3 = allocation;
                    return 0;
                }
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x17, WD_SYMBOL_ADDRESS(WPP_cb3208452d573ca4daa63a8ca1f3e9a4_Traceguids), (uint64_t)KeGetCurrentThread(), value);
                }
            }
            else
            {
                value = -0x3fffff66;
            }
            if (*(void **)(allocation + 0x10))
            {
                MpReleaseProcessContext(*(void **)(allocation + 0x10));
                *(uint64_t *)(allocation + 0x10) = 0;
            }
            if (*(int64_t *)(allocation + 0x20))
            {
                ExFreePoolWithTag(*(int64_t *)(allocation + 0x20), 0x6e66504d);
                *(uint64_t *)(allocation + 0x20) = 0;
            }
            ExFreePoolWithTag(allocation, 0x6670504d);
            return value;
        }
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
        {
            return -0x3ffffff3;
        }
        if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return -0x3ffffff3;
        }
        value_2 = 0x15;
    }
    else
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
        {
            return -0x3ffffff3;
        }
        if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return -0x3ffffff3;
        }
        value_2 = 0x14;
    }
    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_cb3208452d573ca4daa63a8ca1f3e9a4_Traceguids), (uint64_t)KeGetCurrentThread(), WD_STATUS_INVALID_PARAMETER);
    return -0x3ffffff3;
}

void MpDeleteDlpProcessEntry(void *allocation)
{
    if (!allocation)
    {
        return;
    }
    if (((void **)allocation)[2])
    {
        MpReleaseProcessContext(((void **)allocation)[2]);
        ((uint64_t *)allocation)[2] = 0;
    }
    if (((int64_t *)allocation)[4])
    {
        ExFreePoolWithTag(((int64_t *)allocation)[4], 0x6e66504d);
        ((uint64_t *)allocation)[4] = 0;
    }
    ExFreePoolWithTag(allocation, 0x6670504d);
    return;
}

void MpIsGoodBootSector(int64_t input, uint64_t input_2)
{
    int32_t value;
    int64_t index;
    uint64_t value_2;
    int32_t values[2];
    values[0] = 0;
    if (input)
    {
        value_2 = (uint64_t)input_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
        value = RtlHashUnicodeString(input, value_2, 0, values);
        index = MpData;
        if (0 <= value)
        {
            KeEnterCriticalRegion();
            ExAcquireResourceSharedLite(index + 0x2f0, (uint64_t)value_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
            for (index = 0; index <= 99 && *(int32_t *)(index + *(int64_t *)(MpData + 0x220)) != values[0]; index = index + 4)
            {
            }

            ExReleaseResourceLite(MpData + 0x2f0);
            KeLeaveCriticalRegion();
        }
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xc, WD_SYMBOL_ADDRESS(WPP_cb3208452d573ca4daa63a8ca1f3e9a4_Traceguids), (uint64_t)KeGetCurrentThread());
    }
    return;
}

char MpCompareFileStateGenericTableEntry(uint64_t input, int64_t *input_2, int64_t *input_3)
{
    if (*input_2 < *input_3)
    {
        return '\0';
    }
    return (*input_2 <= *input_3) + '\x01';
}

uint64_t MpQueryKnownBadTable(void *input, uint32_t input_2)
{
    uint64_t value;
    uint64_t *data_pointer;
    uint64_t value_2;
    uint64_t *data_pointer_2;
    uint64_t value_3 = 0;
    value = input_2 % (uint64_t)WdDataStorage11;
    if (((int32_t *)input)[0x1e] != 2 || !((int64_t *)input)[0x37])
    {
        return ((uint64_t)((uint64_t)(input_2 / (uint64_t)WdDataStorage11 >> 8)) & 0xffffffffffffffULL) << 8 | (uint64_t)(WdDataStorage12 == '\0') & 0xffULL;
    }
    value_2 = value;
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((int64_t)input + 0x120, (uint64_t)value_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
    data_pointer_2 = (uint64_t *)(value * 0x10 + ((int64_t *)input)[0x37]);
    data_pointer = (uint64_t *)(*data_pointer_2);
    while (true)
    {
        if (data_pointer == data_pointer_2)
        {
            ExReleaseResourceLite((int64_t)input + 0x120);
            KeLeaveCriticalRegion();
            return value_3;
        }
        if (*(uint32_t *)(&data_pointer[2]) == input_2)
        {
            value_3 = 1;
            ExReleaseResourceLite((int64_t)input + 0x120);
            KeLeaveCriticalRegion();
            return value_3;
        }
        data_pointer = (uint64_t *)(*data_pointer);
    }
}

void MpQueryFileName(uint64_t data, uint64_t input, int64_t *input_2, char *input_3)
{
    uint64_t name_options;
    int64_t file_name = 0;
    if (WdDataStorage13)
    {
        name_options = 0x201;
    }
    else
    {
        name_options = 0x201;
        if (!(input & 0x11))
        {
            name_options = 0x101;
        }
    }
    if (0 <= (int32_t)FltGetFileNameInformation(data, name_options, &file_name))
    {
        *input_3 = 1;
    }
    else if (0 <= (int32_t)FltGetFileNameInformation(data, 0x102, &file_name))
    {
        *input_3 = 0;
    }
    if (file_name)
    {
        *input_2 = file_name;
    }
    return;
}

void MpPurgeCache(uint64_t input, uint64_t input_2)
{
    uint64_t ***data_pointer;
    int64_t data;
    uint64_t *data_pointer_2;
    uint64_t *index;
    uint64_t ***data_pointer_3;
    uint64_t ***event_id;
    uint64_t ***data_pointer_4;
    uint64_t ***data_pointer_5;
    data = MpData;
    data_pointer_5 = &event_id;
    event_id = &event_id;
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(data + 0x2f0, (uint64_t)input_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
    memset(*(int64_t **)(MpData + 0x220), 0, (char *)0x64);
    data_pointer_2 = (uint64_t *)(MpData + 0x228);
    for (index = (uint64_t *)(*data_pointer_2); index != data_pointer_2; index = (uint64_t *)(*index))
    {
        MpPurgeScannedFileCache(&index[-1], &event_id);
        data_pointer_2 = (uint64_t *)(MpData + 0x228);
    }

    ExReleaseResourceLite(MpData + 0x2f0);
    KeLeaveCriticalRegion();
    data_pointer_3 = event_id;
    while ((uint64_t ****)data_pointer_3 != &event_id)
    {
        data_pointer = (uint64_t ***)(*data_pointer_3);
        data_pointer_4 = data_pointer_3;
        MpClearFileStateGenericTable(&data_pointer_4);
        data_pointer_3 = data_pointer;
    }

    WdAtomicExchange32((volatile int32_t *)((uint32_t *)(MpData + 0xf68)), 0);
    return;
}

void MpPurgeScannedFileCache(void *trace_argument_2, WD_LAYOUT_24 *event_id, uint64_t provider)
{
    WD_LAYOUT_24 *record;
    if (((int32_t *)trace_argument_2)[0x1e] != 2 || !(((uint32_t *)trace_argument_2)[0x14] & 2))
    {
        record = event_id;
        if (Microsoft_Antimalware_AMFilterEnableBits & 1)
        {
            record = &AMFilter_CacheFlushEvent;
            McTemplateK0_EtwWriteTransfer(trace_argument_2, WD_SYMBOL_ADDRESS(AMFilter_CacheFlushEvent));
        }
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite((int64_t)trace_argument_2 + 0x120, (uint64_t)((uint64_t)record) & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
        WdAtomicAdd32((volatile int32_t *)((int32_t *)((int64_t)trace_argument_2 + 0x90)), 1);
        if (WdDataStorage15 == 1)
        {
            MpPurgeFileStateGenericTable(trace_argument_2, 0x1b, event_id);
        }
        if (WdDataStorage16 == 1)
        {
            MpPurgeFileStateGenericTable(trace_argument_2, 0x1c, event_id);
        }
        if (WdDataStorage17 == 1)
        {
            MpPurgeFileStateGenericTable(trace_argument_2, 2, event_id);
        }
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            WPP_SF_ZqDD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18));
        }
        ExReleaseResourceLite((int64_t)trace_argument_2 + 0x120);
        KeLeaveCriticalRegion();
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
    {
        WPP_SF_Zq(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, provider, &((int16_t *)trace_argument_2)[0xc], trace_argument_2);
    }
    return;
}

void MpQueryTargetFileName(WD_LAYOUT_4 *input, void *input_2, uint32_t input_3, int32_t input_4, char input_5, int64_t input_6, char *input_7)
{
    uint32_t value;
    int64_t instance_context;
    uint64_t instance;
    uint64_t value_3;
    int64_t value_4;
    uint64_t value_5;
    int64_t value_6;
    char *bytes;
    uint32_t value_7;
    bytes = input_7;
    value_6 = input_6;
    if ((input_4 == 5 || input_4 == 2) && input_7 && input_6)
    {
        *input_7 = 0;
        if (!input_3)
        {
            instance = ((uint64_t *)input_2)[3];
            instance_context = 0;
            if (0 <= (int32_t)FltGetInstanceContext(instance, &instance_context))
            {
                input_3 = *(uint32_t *)(instance_context + 0x54);
                FltReleaseContext();
            }
        }
        if (input_5)
        {
            value_7 = 0x101;
        }
        else if (input_3 & 0x11)
        {
            value_7 = 0x102;
        }
        else
        {
            value_7 = 0x201;
            if (!WdDataStorage13)
            {
                value_7 = 0x101;
            }
        }
        instance = ((uint64_t *)input_2)[4];
        value_3 = ((uint64_t *)input_2)[3];
        value_4 = *(int64_t *)(input->field_0x10 + 0x38);
        value = *(uint32_t *)(value_4 + 0x10);
        value_5 = *(uint64_t *)(value_4 + 8);
        if (0 <= (int32_t)FltGetDestinationFileNameInformation(value_3, instance, value_5, value_4 + 0x14, value, value_7, value_6))
        {
            if (value_7 & 1)
            {
                *bytes = 1;
            }
        }
        else if (!input_5)
        {
            FltGetDestinationFileNameInformation(((uint64_t *)input_2)[3], ((uint64_t *)input_2)[4], *(uint64_t *)(value_4 + 8), value_4 + 0x14, *(uint32_t *)(value_4 + 0x10), 0x102, value_6);
        }
    }
    return;
}

void MpFreeFileStateGenericTableEntry(uint64_t input, uint64_t allocation)
{
    ExFreePoolWithTag(allocation, 0x6574504d);
    return;
}

int64_t *MpAllocateFileStateGenericTableEntry(uint64_t input, uint32_t allocation_size)
{
    return MpAllocatePoolWithTag(1, allocation_size, 0x6574504d);
}

void MpStoreGoodBootSector(int16_t *trace_argument_2, uint64_t input)
{
    int32_t value;
    int32_t value_2;
    int64_t index;
    uint64_t value_3;
    int32_t values[2];
    values[0] = 0;
    if (trace_argument_2)
    {
        value_3 = (uint64_t)input & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
        value_2 = RtlHashUnicodeString(trace_argument_2, value_3, 0, values);
        index = MpData;
        if (0 <= value_2)
        {
            KeEnterCriticalRegion();
            ExAcquireResourceExclusiveLite(index + 0x2f0, (uint64_t)value_3 & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
            value_2 = 0;
            for (index = 0; index <= 99; index = index + 4)
            {
                value = *(int32_t *)(index + *(int64_t *)(MpData + 0x220));
                if (value == values[0])
                {
                    break;
                }
                if (!value)
                {
                    *(int32_t *)(*(int64_t *)(MpData + 0x220) + value_2 * 4LL) = values[0];
                    break;
                }
                value_2 += 1;
            }

            if (value_2 != 0x19)
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                {
                    WPP_SF_qZD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xf, WD_SYMBOL_ADDRESS(WPP_cb3208452d573ca4daa63a8ca1f3e9a4_Traceguids), (uint64_t)KeGetCurrentThread(), trace_argument_2, value_2);
                }
            }
            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                WPP_SF_qZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xe, WD_SYMBOL_ADDRESS(WPP_cb3208452d573ca4daa63a8ca1f3e9a4_Traceguids), (uint64_t)KeGetCurrentThread(), trace_argument_2);
            }
            ExReleaseResourceLite(MpData + 0x2f0);
            KeLeaveCriticalRegion();
        }
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xd, WD_SYMBOL_ADDRESS(WPP_cb3208452d573ca4daa63a8ca1f3e9a4_Traceguids), (uint64_t)KeGetCurrentThread());
    }
    return;
}

void MpRemoveAllKnownBadEntries(void *input, uint64_t input_2)
{
    int64_t *allocation;
    int64_t value;
    int64_t *data_pointer;
    uint32_t value_2;
    uint64_t value_3;
    if (((int32_t *)input)[0x1e] == 2 && (value_3 = 0, ((int64_t *)input)[0x37]))
    {
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite((int64_t)input + 0x120, (uint64_t)input_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
        if (WdDataStorage11)
        {
            do
            {
                while (true)
                {
                    data_pointer = (int64_t *)(((int64_t *)input)[0x37] + value_3 * 0x10);
                    allocation = (int64_t *)(*data_pointer);
                    if (allocation == data_pointer)
                    {
                        break;
                    }
                    if ((int64_t *)allocation[1] != data_pointer || (value = *allocation, (int64_t *)(*(int64_t *)(value + 8)) != allocation))
                    {
                        (*(WD_ROUTINE)swi(0x29))(3);
                    }
                    *data_pointer = value;
                    *(int64_t **)(value + 8) = data_pointer;
                    ExFreePoolWithTag(allocation, 0x6862504d);
                }

                value_2 = (int32_t)value_3 + 1;
                value_3 = value_2;
            }
            while (value_2 < WdDataStorage11);
        }
        ExReleaseResourceLite((int64_t)input + 0x120);
        KeLeaveCriticalRegion();
    }
    return;
}

uint64_t MpAddKnownBadEntry(void *input, uint32_t input_2)
{
    int64_t value;
    uint64_t value_2;
    WD_LAYOUT_25 *allocation;
    uint64_t value_3;
    int64_t *data_pointer;
    value_2 = (uint64_t)WdDataStorage11;
    if (((int32_t *)input)[0x1e] != 2 || !((int64_t *)input)[0x37])
    {
        return 0xc0000002;
    }
    if (!MpQueryKnownBadTable(input, input_2))
    {
        value_3 = 0;
        allocation = (WD_LAYOUT_25 *)MpAllocatePoolWithTag(1, (char *)0x18, 0x6862504d);
        if (!allocation)
        {
            return WD_STATUS_INSUFFICIENT_RESOURCES;
        }
        allocation->field_0x10 = input_2;
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite((int64_t)input + 0x120, (uint64_t)value_3 & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
        data_pointer = (int64_t *)(input_2 % value_2 * 0x10 + ((int64_t *)input)[0x37]);
        value = *data_pointer;
        if (*(int64_t **)(value + 8) != data_pointer)
        {
            (*(WD_ROUTINE)swi(0x29))(3);
        }
        allocation->field_0x0 = value;
        allocation->field_0x8 = data_pointer;
        *(WD_LAYOUT_25 **)(value + 8) = allocation;
        *data_pointer = (int64_t)allocation;
        ExReleaseResourceLite((int64_t)input + 0x120);
        KeLeaveCriticalRegion();
    }
    return 0;
}

void MpDeleteBootSectorCache(void)
{
    if (!(*(int64_t *)(MpData + 0x220)))
    {
        return;
    }
    ExFreePoolWithTag(*(int64_t *)(MpData + 0x220), 0x6267504d);
    *(uint64_t *)(MpData + 0x220) = 0;
    return;
}

void MpPurgeInstanceScannedFileCache(void *trace_argument_2)
{
    uint64_t ***event_id;
    uint64_t ***data_pointer;
    data_pointer = &event_id;
    event_id = &event_id;
    MpPurgeScannedFileCache(trace_argument_2, &event_id);
    MpClearFileStateGenericTableList(&event_id);
    return;
}

void MpRemoveGoodBootSector(int16_t *trace_argument_2, uint64_t input)
{
    int32_t value;
    int64_t index;
    uint64_t value_2;
    int32_t values[2];
    values[0] = 0;
    if (trace_argument_2)
    {
        value_2 = (uint64_t)input & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
        value = RtlHashUnicodeString(trace_argument_2, value_2, 0, values);
        index = MpData;
        if (0 <= value)
        {
            KeEnterCriticalRegion();
            ExAcquireResourceExclusiveLite(index + 0x2f0, (uint64_t)value_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
            value = 0;
            for (index = 0; index <= 99; index = index + 4)
            {
                if (*(int32_t *)(index + *(int64_t *)(MpData + 0x220)) == values[0])
                {
                    *(uint32_t *)(*(int64_t *)(MpData + 0x220) + value * 4LL) = 0;
                    break;
                }
                value += 1;
            }

            if (value != 0x19)
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                {
                    WPP_SF_qZD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x12, WD_SYMBOL_ADDRESS(WPP_cb3208452d573ca4daa63a8ca1f3e9a4_Traceguids), (uint64_t)KeGetCurrentThread(), trace_argument_2, value);
                }
            }
            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                WPP_SF_qZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x11, WD_SYMBOL_ADDRESS(WPP_cb3208452d573ca4daa63a8ca1f3e9a4_Traceguids), (uint64_t)KeGetCurrentThread(), trace_argument_2);
            }
            ExReleaseResourceLite(MpData + 0x2f0);
            KeLeaveCriticalRegion();
        }
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x10, WD_SYMBOL_ADDRESS(WPP_cb3208452d573ca4daa63a8ca1f3e9a4_Traceguids), (uint64_t)KeGetCurrentThread());
    }
    return;
}

uint64_t MpInitBootSectorCache(void)
{
    int64_t data;
    data = MpData;
    *(int64_t **)(data + 0x220) = MpAllocatePoolWithTag(1, (char *)0x64, 0x6267504d);
    if (!(*(int64_t *)(MpData + 0x220)))
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x13, WD_SYMBOL_ADDRESS(WPP_cb3208452d573ca4daa63a8ca1f3e9a4_Traceguids), (uint64_t)KeGetCurrentThread(), WD_STATUS_INSUFFICIENT_RESOURCES);
        }
        return WD_STATUS_INSUFFICIENT_RESOURCES;
    }
    return 0;
}

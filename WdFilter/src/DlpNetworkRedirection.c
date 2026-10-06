#include "wdfilter.h"

void WPP_SF_qZZD(uint64_t input, uint16_t input_2, uint64_t input_3, uint64_t input_4, int16_t *input_5, int16_t *input_6)
{
    int16_t value;
    int16_t value_2;
    uint64_t value_3;
    int16_t *wide_text;
    uint64_t value_4;
    int16_t *wide_text_2;
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
        value_2 = *input_5;
        if (*input_5)
        {
            value_4 = *(uint64_t *)(&input_5[4]);
        }
    }
    else
    {
        value_2 = 8;
    }
    wide_text_2 = input_5;
    if (!input_5)
    {
        wide_text_2 = &WdCleanupStorage;
    }
    value_3 = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_f2c34df88cc13f3dc1b943142014e233_Traceguids), input_2, &value_3, 8, wide_text_2, 2, value_4, (uint16_t)value_2, wide_text, 2, value_5, (uint16_t)value, &unrecovered_stack_argument_7, 4, 0);
    return;
}

void WPP_SF_ZZDDDDDDDI(uint64_t input, uint64_t input_2, uint64_t input_3, int16_t *input_4, int16_t *input_5)
{
    int16_t value;
    int16_t *wide_text;
    int16_t value_2;
    uint64_t value_3;
    uint64_t value_4;
    value_3 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    if (input_5)
    {
        value = *input_5;
        if (*input_5)
        {
            value_4 = *(uint64_t *)(&input_5[4]);
            goto block_1;
        }
    }
    else
    {
        value = 8;
    }
    value_4 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    block_1:
    wide_text = input_5;

    if (!input_5)
    {
        wide_text = &WdCleanupStorage;
    }
    if (input_4)
    {
        value_2 = *input_4;
        if (*input_4)
        {
            value_3 = *(uint64_t *)(&input_4[4]);
        }
    }
    else
    {
        value_2 = 8;
    }
    if (!input_4)
    {
        input_4 = &WdCleanupStorage;
    }
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_f2c34df88cc13f3dc1b943142014e233_Traceguids), 0x1e, input_4, 2, value_3, (uint16_t)value_2, wide_text, 2, value_4, (uint16_t)value, &unrecovered_stack_argument_6, 4, &unrecovered_stack_argument_7, 4, &unrecovered_stack_argument_8, 4, &unrecovered_stack_argument_9, 4, &unrecovered_stack_argument_10, 4, &unrecovered_stack_argument_11, 4, &unrecovered_stack_argument_12, 4, &unrecovered_stack_argument_13, 8, 0);
    return;
}

void WPP_SF_qsZ(uint64_t input, uint64_t input_2, uint64_t input_3, uint64_t input_4, char *input_5, int16_t *input_6)
{
    int64_t index;
    int16_t *wide_text;
    int16_t value;
    uint64_t value_2;
    char *bytes;
    int64_t value_3;
    uint64_t value_4;
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
    if (input_5)
    {
        index = -1;
        do
        {
            value_3 = index;
            index = value_3 + 1;
        }
        while (input_5[index]);
        value_3 += 2;
    }
    else
    {
        value_3 = 5;
    }
    bytes = input_5;
    if (!input_5)
    {
        bytes = "NULL";
    }
    value_2 = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_f2c34df88cc13f3dc1b943142014e233_Traceguids), 0x13, &value_2, 8, bytes, value_3, wide_text, 2, value_4, (uint16_t)value, 0);
    return;
}

void MpGetDlpStubFileNameForNetworkFile(WD_LAYOUT_97 *input, WD_LAYOUT_98 *input_2, uint64_t *input_3)
{
    uint16_t *wide_text;
    int16_t string_size;
    int16_t *string = NULL;
    uint8_t *bytes;
    uint64_t value;
    uint64_t value_2;
    uint64_t value_3;
    uint64_t value_4;
    uint32_t value_5;
    uint8_t byte_value;
    int16_t value_7;
    int32_t trace_argument_1;
    uint16_t *wide_text_2;
    uint64_t event_id;
    uint64_t hash_value;
    int16_t *string_2;
    *input_3 = 0;
    string_2 = NULL;
    hash_value = 0;
    value_2 = 0;
    value_5 = 0;
    value_3 = 0;
    value_4 = 0;
    trace_argument_1 = MpHashDataBuffer(input->field_0x8, input->field_0x0, &hash_value);
    value = hash_value;
    if (trace_argument_1 <= -1)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xe, WD_SYMBOL_ADDRESS(WPP_f2c34df88cc13f3dc1b943142014e233_Traceguids), trace_argument_1);
        }
        return;
    }
    value_7 = (int16_t)hash_value;
    if ((int16_t)hash_value)
    {
        string_size = (int16_t)hash_value << 2;
        trace_argument_1 = MpAllocateString((uint16_t)string_size, &string_2);
        string = string_2;
        if (trace_argument_1 < 0)
        {
            goto block_1;
        }
        bytes = &((uint8_t *)(&hash_value))[4];
        if (value_7)
        {
            value &= 0xffff;
            wide_text_2 = *(uint16_t **)(&string_2[4]);
            do
            {
                *wide_text_2 = WdStringStorage[*bytes >> 4];
                wide_text = &wide_text_2[2];
                byte_value = *bytes;
                bytes = &bytes[1];
                wide_text_2[1] = WdStringStorage[(int32_t)((char)byte_value) & 0xf];
                value -= 1;
                wide_text_2 = wide_text;
            }
            while (value);
        }
        *string_2 = string_size;
        trace_argument_1 = MpAppendUnicodeStringToUnicodeString(input_2->field_0x8, string_2, input_3, 0x666e504d);
        if (trace_argument_1 <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            event_id = 0x10;
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_f2c34df88cc13f3dc1b943142014e233_Traceguids), trace_argument_1);
        }
    }
    else
    {
        trace_argument_1 = -0x3ffffff3;
        block_1:
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            event_id = 0xf;
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_f2c34df88cc13f3dc1b943142014e233_Traceguids), trace_argument_1);
        }
    }
    if (string)
    {
        MpFreeString(string);
    }
    return;
}

int32_t MpGetDlpDefaultStubFileName(WD_LAYOUT_98 *input, uint64_t *input_2)
{
    int32_t trace_argument_1;
    *input_2 = 0;
    trace_argument_1 = MpAppendUnicodeStringToUnicodeString(input->field_0x8, &MpNetworkFilesMappingDefaultStubName, input_2, 0x666e504d);
    if (trace_argument_1 <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x11, WD_SYMBOL_ADDRESS(WPP_f2c34df88cc13f3dc1b943142014e233_Traceguids), trace_argument_1);
    }
    return trace_argument_1;
}

void MpQueryEaFromNetworkFileStubIfNeeded(void *data, void *input, uint64_t *input_2)
{
    uint8_t byte_value;
    int32_t value;
    char buffer[3];
    uint64_t *data_pointer;
    int64_t file_name;
    uint64_t allocation;
    uint64_t value_2;
    uint64_t value_3;
    int64_t value_4;
    int64_t value_5;
    uint32_t value_6;
    int32_t *data_pointer_2;
    int64_t value_7;
    uint64_t *allocation_2;
    uint32_t value_8;
    uint64_t current_thread;
    uint32_t value_9;
    int64_t value_10;
    uint64_t value_11;
    uint64_t value_12;
    uint64_t trace_argument_2;
    uint32_t value_13;
    int64_t event_id;
    uint64_t value_14;
    uint64_t *data_pointer_3;
    uint64_t *data_pointer_4;
    uint32_t value_15;
    uint32_t value_16;
    uint32_t *data_pointer_5;
    uint32_t value_17;
    uint32_t value_18;
    int32_t provider;
    uint64_t *data_pointer_6;
    bool enabled;
    uint64_t *data_pointer_7;
    void *data_pointer_8;
    uint64_t *data_pointer_9;
    int32_t allocation_size;
    uint64_t *data_pointer_10;
    uint64_t value_19;
    uint64_t value_20;
    uint64_t value_21;
    uint64_t value_22;
    uint64_t value_23;
    uint64_t value_24;
    uint64_t *allocation_3;
    int16_t *trace_argument_2_2;
    uint64_t value_26;
    value_13 = (uint32_t)((uint64_t)value_11 >> 0x20);
    value_16 = (uint32_t)((uint64_t)value_14 >> 0x20);
    value_9 = 0;
    value = 0;
    buffer[0] = '\0';
    data_pointer = NULL;
    allocation_2 = NULL;
    data_pointer_6 = NULL;
    data_pointer_9 = NULL;
    value_5 = 0;
    value_3 = 0;
    value_19 = 0;
    value_20 = 0;
    value_21 = 0;
    value_22 = 0;
    value_23 &= 0xffffffff00000000;
    value_2 = 0;
    value_24 = 0;
    allocation = 0;
    file_name = 0;
    value_4 = 0;
    value_6 = 0;
    enabled = 0;
    *(char *)input_2 = 0;
    if (!(*(char *)(MpDlpData + 0xf1)) || (current_thread = ((uint64_t *)input)[3], (int32_t)FltGetFileSystemType(current_thread, &value) < 0) || value != 0xd)
    {
        return;
    }
    allocation_size = MpIsLoopbackByObj(input, 0, buffer);
    if (allocation_size <= -1)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x12, WD_SYMBOL_ADDRESS(WPP_f2c34df88cc13f3dc1b943142014e233_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_13 & 0xffffffffULL) << 32 | (uint64_t)allocation_size & 0xffffffffULL);
        }
        return;
    }
    if (buffer[0] && !(*(uint32_t *)(MpData + 0x100c) & 4))
    {
        return;
    }
    data_pointer_2 = *(int32_t **)(((int64_t *)data)[2] + 0x20);
    if (data_pointer_2)
    {
        if (*data_pointer_2)
        {
            return;
        }
        value_7 = (int64_t)data_pointer_2 + 5;
        if (_stricmp(value_7, "$Kernel.SEC.EndpointDlp") && _stricmp(value_7, "$Kernel.SEC.MarkOfWeb") && _stricmp(value_7, "$Kernel.SEC.ApplicationSource"))
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                data_pointer_8 = *(void **)(value_10 + 0x188);
                WPP_SF_qsZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18));
            }
            return;
        }
    }
    provider = MpDlpGetNetworkRedirectionInfo(&data_pointer);
    allocation_3 = allocation_2;
    if (0 <= provider)
    {
        if (MpFcKernelGetValue(0xd8) & 1)
        {
            value_15 = 1;
            block_1:
            value_9 = value_15;

            allocation_3 = NULL;
        }
        else
        {
            provider = FltGetFileNameInformation(data, 0x101, &file_name);
            value_15 = 0;
            if (0 <= provider)
            {
                goto block_1;
            }
            if (file_name)
            {
                FltReleaseFileNameInformation();
                file_name = 0;
            }
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                current_thread = (uint64_t)KeGetCurrentThread();
                trace_argument_2_2 = (int16_t *)(((int64_t *)input)[4] + 0x58);
                value_26 = ((uint64_t)value_16 & 0xffffffffULL) << 32 | (uint64_t)provider & 0xffffffffULL;
                WPP_SF_qZD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x16, WD_SYMBOL_ADDRESS(WPP_f2c34df88cc13f3dc1b943142014e233_Traceguids), current_thread, trace_argument_2_2, value_26);
                value_13 = (uint32_t)((uint64_t)trace_argument_2_2 >> 0x20);
                value_16 = (uint32_t)((uint64_t)value_26 >> 0x20);
                allocation_3 = data_pointer_6;
            }
        }
        if (!file_name)
        {
            provider = FltGetFileNameInformation(data, 0x102, &file_name);
            if (0 <= provider)
            {
                goto block_3;
            }
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                goto block_5;
            }
            current_thread = (uint64_t)KeGetCurrentThread();
            WPP_SF_qZD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x17, WD_SYMBOL_ADDRESS(WPP_f2c34df88cc13f3dc1b943142014e233_Traceguids), current_thread, (int16_t *)(((int64_t *)input)[4] + 0x58), ((uint64_t)value_16 & 0xffffffffULL) << 32 | (uint64_t)provider & 0xffffffffULL);
            block_2:
            allocation_3 = data_pointer_6;

            goto block_5;
        }
        block_3:
        allocation_2 = data_pointer;

        allocation_size = MpGetDlpStubFileNameForNetworkFile((WD_LAYOUT_97 *)(file_name + 8), data_pointer, &allocation);
        trace_argument_2 = allocation;
        provider = allocation_size;
        if (0 <= allocation_size)
        {
            value_3 = ((uint64_t)WdLoadField(&value_3, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)0x30 & 0xffffffffULL;
            value_19 = 0;
            value_21 = ((uint64_t)WdLoadField(&value_21, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)0x240 & 0xffffffffULL;
            value_20 = allocation;
            value_22 = 0;
            value_23 = 0;
            value_18 = 0x40;
            value_17 = 1;
            value_16 = 0;
            data_pointer_4 = &value_2;
            data_pointer_3 = &value_3;
            value_12 = ((uint64_t)value_13 & 0xffffffffULL) << 32 | (uint64_t)0x100008 & 0xffffffffULL;
            provider = MpFltCreateFileEx(*(uint64_t *)(MpData + 0x10), *allocation_2, &value_5, &value_4, value_12, data_pointer_3, data_pointer_4);
            value_15 = (uint32_t)((uint64_t)data_pointer_4 >> 0x20);
            value_13 = (uint32_t)((uint64_t)data_pointer_3 >> 0x20);
            if (0 <= provider)
            {
                block_4:
                *(char *)data_pointer_7 = 1;

                value_7 = ((int64_t *)data)[2];
                allocation_size = *(int32_t *)(value_7 + 0x18);
                if (allocation_size)
                {
                    allocation_3 = *(uint64_t **)(value_7 + 0x38);
                    value_7 = *(int64_t *)(value_7 + 0x40);
                    if (value_7)
                    {
                        if (*(uint8_t *)(value_7 + 10) & 5)
                        {
                            allocation_3 = *(uint64_t **)(value_7 + 0x18);
                        }
                        else
                        {
                            value_12 &= 0xffffffff00000000;
                            allocation_3 = (uint64_t *)MmMapLockedPagesSpecifyCache(value_7, 0, 1, 0, value_12, ((uint64_t)value_13 & 0xffffffffULL) << 32 | (uint64_t)ExDefaultMdlProtection & 0xffffffffULL | 0x40000010);
                            data_pointer_10 = allocation_3;
                        }
                        if (!allocation_3)
                        {
                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                            {
                                current_thread = (uint64_t)KeGetCurrentThread();
                                WPP_SF_qq(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1c, WD_SYMBOL_ADDRESS(WPP_f2c34df88cc13f3dc1b943142014e233_Traceguids), current_thread, *(uint64_t *)(((int64_t *)data)[2] + 0x40));
                            }
                            goto block_6;
                        }
                    }
                    if (((char *)data)[0x50])
                    {
                        allocation_3 = (uint64_t *)MpAllocatePoolWithTag(1, allocation_size, 0x6165504d);
                        data_pointer_6 = allocation_3;
                        if (!allocation_3)
                        {
                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                            {
                                current_thread = (uint64_t)KeGetCurrentThread();
                                WPP_SF_qZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1d, WD_SYMBOL_ADDRESS(WPP_f2c34df88cc13f3dc1b943142014e233_Traceguids), current_thread, (int16_t *)(((int64_t *)input)[4] + 0x58));
                                goto block_2;
                            }
                            goto block_6;
                        }
                        enabled = 1;
                    }
                }
                event_id = ((int64_t *)data)[2];
                byte_value = *(uint8_t *)(event_id + 6);
                value_7 = event_id + 0x30;
                if (!(byte_value & 4))
                {
                    value_7 = 0;
                }
                data_pointer_5 = &value_6;
                value_26 = ((uint64_t)value_15 & 0xffffffffULL) << 32 | (uint64_t)(*(uint32_t *)(event_id + 0x28)) & 0xffffffffULL;
                current_thread = *(uint64_t *)(event_id + 0x20);
                provider = FltQueryEaFile(*allocation_2, value_4, allocation_3, allocation_size, ((uint64_t)value_12 & 0xffffffffffffff00 | (uint64_t)(byte_value >> 1) & 0xff) & 0xffffffffffffff01, current_thread, value_26, value_7, ((uint32_t)value_16 & 0xffffff00 | (uint32_t)byte_value & 0xff) & 0xffffff01, data_pointer_5, value_17, value_18);
                ((int32_t *)data)[6] = provider;
                ((uint64_t *)data)[4] = value_6;
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                {
                    event_id = ((int64_t *)data)[2];
                    value_8 = *(uint8_t *)(event_id + 6);
                    WPP_SF_ZZDDDDDDDI(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, *(uint8_t *)(event_id + 6), (int16_t *)(file_name + 8), allocation, (uint64_t)current_thread & 0xffffffff00000000 | (uint64_t)value_9 & 0xffffffff, (uint64_t)value_26 & 0xffffffff00000000 | (uint64_t)allocation_size & 0xffffffff, (uint64_t)value_7 & 0xffffffff00000000 | (uint64_t)value_8 & 0xffffffff, *(uint32_t *)(event_id + 0x28), (uint64_t)((uint64_t)data_pointer_5) & 0xffffffff00000000 | (uint64_t)(*(uint32_t *)(event_id + 0x30)) & 0xffffffff, provider, provider, (uint64_t)value_6);
                }
                if (allocation_size && data_pointer_9)
                {
                    memmove(data_pointer_9, allocation_3, allocation_size);
                }
            }
            else
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                {
                    current_thread = (uint64_t)KeGetCurrentThread();
                    WPP_SF_qZZD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x19, provider, current_thread, trace_argument_2, (int16_t *)(file_name + 8), ((uint64_t)value_15 & 0xffffffffULL) << 32 | (uint64_t)provider & 0xffffffffULL);
                    value_12 = trace_argument_2;
                }
                value_13 = (uint32_t)(value_12 >> 0x20);
                if (allocation)
                {
                    ExFreePoolWithTag(allocation, 0x666e504d);
                    allocation = 0;
                }
                allocation_size = MpGetDlpDefaultStubFileName(allocation_2, &allocation);
                trace_argument_2 = allocation;
                provider = allocation_size;
                if (0 <= allocation_size)
                {
                    value_3 = ((uint64_t)WdLoadField(&value_3, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)0x30 & 0xffffffffULL;
                    value_19 = 0;
                    value_21 = ((uint64_t)WdLoadField(&value_21, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)0x240 & 0xffffffffULL;
                    value_20 = allocation;
                    value_22 = 0;
                    value_23 = 0;
                    value_18 = 0x40;
                    value_17 = 3;
                    value_16 = 0;
                    data_pointer_4 = &value_2;
                    data_pointer_3 = &value_3;
                    value_12 = ((uint64_t)value_13 & 0xffffffffULL) << 32 | (uint64_t)0x100008 & 0xffffffffULL;
                    provider = MpFltCreateFileEx(*(uint64_t *)(MpData + 0x10), *allocation_2, &value_5, &value_4, value_12, data_pointer_3, data_pointer_4);
                    value_15 = (uint32_t)((uint64_t)data_pointer_4 >> 0x20);
                    value_13 = (uint32_t)((uint64_t)data_pointer_3 >> 0x20);
                    if (0 <= provider)
                    {
                        goto block_4;
                    }
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                    {
                        current_thread = (uint64_t)KeGetCurrentThread();
                        WPP_SF_qZZD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1b, provider, current_thread, trace_argument_2, (int16_t *)(file_name + 8), ((uint64_t)value_15 & 0xffffffffULL) << 32 | (uint64_t)provider & 0xffffffffULL);
                    }
                }
                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    current_thread = (uint64_t)KeGetCurrentThread();
                    value_26 = 0x1a;
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_26, WD_SYMBOL_ADDRESS(WPP_f2c34df88cc13f3dc1b943142014e233_Traceguids), current_thread, ((uint64_t)value_13 & 0xffffffffULL) << 32 | (uint64_t)allocation_size & 0xffffffffULL);
                }
            }
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            current_thread = (uint64_t)KeGetCurrentThread();
            value_26 = 0x18;
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_26, WD_SYMBOL_ADDRESS(WPP_f2c34df88cc13f3dc1b943142014e233_Traceguids), current_thread, ((uint64_t)value_13 & 0xffffffffULL) << 32 | (uint64_t)allocation_size & 0xffffffffULL);
        }
    }
    else
    {
        allocation_3 = NULL;
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && (allocation_3 = allocation_2, *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            data_pointer_8 = *(void **)(value_10 + 0x188);
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x15, WD_SYMBOL_ADDRESS(WPP_f2c34df88cc13f3dc1b943142014e233_Traceguids), data_pointer_8, ((uint64_t)value_13 & 0xffffffffULL) << 32 | (uint64_t)provider & 0xffffffffULL);
        }
        block_5:
        allocation_2 = data_pointer;
    }
    block_6:
    if (value_5)
    {
        FltClose();
    }

    if (value_4)
    {
        ObfDereferenceObject();
        value_7 = ObTotalReferences;
        WdUnresolvedAtomicBegin();
        ObTotalReferences -= 1;
        WdUnresolvedAtomicEnd();
        if (value_7 + -1 <= -1 && *(int32_t *)(MpData + 0x364) <= -1)
        {
            if (KdRefreshDebuggerNotPresent())
            {
                KeBugCheck(1);
            }
            (*(WD_ROUTINE)swi(3))();
            return;
        }
    }
    if (allocation_2)
    {
        MpDlpReleaseNetworkRedirectionInfo(allocation_2);
    }
    if (allocation)
    {
        ExFreePoolWithTag(allocation, 0x666e504d);
    }
    if (file_name)
    {
        FltReleaseFileNameInformation();
    }
    if (enabled)
    {
        ExFreePoolWithTag(allocation_3, 0x6165504d);
    }
    return;
}

uint64_t MpDlpGetNetworkRedirectionInfo(int64_t *input)
{
    int64_t value;
    if (!input)
    {
        return WD_STATUS_INVALID_PARAMETER;
    }
    *input = 0;
    FltAcquirePushLockShared(MpDlpData + 0xf8);
    value = *(int64_t *)(MpDlpData + 0x100);
    *input = value;
    if (value)
    {
        WdAtomicAdd32((volatile int32_t *)((int32_t *)(value + 0x10)), 1);
    }
    FltReleasePushLock(MpDlpData + 0xf8);
    if (*input)
    {
        return 0;
    }
    return WD_STATUS_NOT_FOUND;
}

void MpDlpReleaseNetworkRedirectionInfo(WD_LAYOUT_106 *allocation)
{
    int32_t *atomic_value;
    int32_t value;
    if (!allocation)
    {
        return;
    }
    atomic_value = &allocation->field_0x10;
    value = WdAtomicAdd32((volatile int32_t *)atomic_value, -1);
    if (value != 1)
    {
        return;
    }
    if (allocation->field_0x0)
    {
        FltObjectDereference();
        allocation->field_0x0 = 0;
    }
    if (allocation->field_0x8)
    {
        ExFreePoolWithTag(allocation->field_0x8, 0x6e76504d);
    }
    allocation->field_0x8 = 0;
    ExFreePoolWithTag(allocation, 0x726e504d);
    return;
}

int32_t MpDlpSetNetworkRedirectionInfo(int64_t input)
{
    int64_t dlp_data;
    int32_t value;
    int64_t *allocation;
    uint32_t value_2;
    int32_t value_3;
    int64_t *allocation_2 = NULL;
    int64_t *atomic_value = NULL;
    if (!(*(int64_t *)(MpData + 0xcc0)))
    {
        return 0;
    }
    allocation = (int64_t *)MpAllocatePoolWithTag(1, (char *)0x18, 0x726e504d);
    if (allocation)
    {
        *(uint32_t *)(&allocation[2]) = 1;
        value_3 = MpAppendUnicodeStringToUnicodeString(*(WD_LAYOUT_10 **)(MpData + 0xcc0), &MpNetworkFilesMappingStubPathPartial, &allocation[1], 0x6e76504d);
        if (0 <= value_3)
        {
            if (input)
            {
                *allocation = input;
                value = FltObjectReference(input);
                if (value <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xd, WD_SYMBOL_ADDRESS(WPP_f2c34df88cc13f3dc1b943142014e233_Traceguids), (uint64_t)KeGetCurrentThread(), value);
                }
            }
            else
            {
                value_3 = MpGetInstanceFromVolumeName(*(uint64_t *)(MpData + 0xcc0), allocation);
                if (value_3 <= -1)
                {
                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                    {
                        goto block_2;
                    }
                    value_2 = 0xc;
                    goto block_1;
                }
            }
            FltAcquirePushLockExclusive(MpDlpData + 0xf8);
            dlp_data = MpDlpData;
            allocation_2 = *(int64_t **)(MpDlpData + 0x100);
            *(int64_t **)(MpDlpData + 0x100) = allocation;
            allocation = NULL;
            FltReleasePushLock(dlp_data + 0xf8);
            value_3 = 0;
            goto block_2;
        }
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            goto block_2;
        }
        value_2 = 0xb;
        block_1:
        value = value_3;
    }
    else
    {
        value_3 = -0x3fffff66;
        allocation_2 = atomic_value;
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            goto block_2;
        }
        value_2 = 10;
        value = -0x3fffff66;
    }
    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_f2c34df88cc13f3dc1b943142014e233_Traceguids), (uint64_t)KeGetCurrentThread(), value);
    allocation_2 = atomic_value;
    block_2:
    if (allocation)
    {
        atomic_value = &allocation[2];
        value = WdAtomicAdd32((volatile int32_t *)((int32_t *)atomic_value), -1);
        if (value == 1)
        {
            if (*allocation)
            {
                FltObjectDereference();
                *allocation = 0;
            }
            MpFreeWithTag(allocation[1], 0x6e76504d);
            allocation[1] = 0;
            ExFreePoolWithTag(allocation, 0x726e504d);
        }
    }

    if (allocation_2)
    {
        atomic_value = &allocation_2[2];
        value = WdAtomicAdd32((volatile int32_t *)((int32_t *)atomic_value), -1);
        if (value == 1)
        {
            if (*allocation_2)
            {
                FltObjectDereference();
                *allocation_2 = 0;
            }
            MpFreeWithTag(allocation_2[1], 0x6e76504d);
            allocation_2[1] = 0;
            ExFreePoolWithTag(allocation_2, 0x726e504d);
        }
    }
    return value_3;
}

void MpDlpDeleteNetworkRedirectionInfo(void)
{
    int64_t *atomic_value;
    int32_t value;
    int64_t *allocation;
    int64_t dlp_data;
    FltAcquirePushLockExclusive(MpDlpData + 0xf8);
    dlp_data = MpDlpData;
    allocation = *(int64_t **)(MpDlpData + 0x100);
    *(uint64_t *)(MpDlpData + 0x100) = 0;
    FltReleasePushLock(dlp_data + 0xf8);
    if (!allocation)
    {
        return;
    }
    atomic_value = &allocation[2];
    value = WdAtomicAdd32((volatile int32_t *)((int32_t *)atomic_value), -1);
    if (value != 1)
    {
        return;
    }
    if (*allocation)
    {
        FltObjectDereference();
        *allocation = 0;
    }
    if (allocation[1])
    {
        ExFreePoolWithTag(allocation[1], 0x6e76504d);
    }
    allocation[1] = 0;
    ExFreePoolWithTag(allocation, 0x726e504d);
    return;
}

void MpSetEaForNetworkFileStubIfNeeded(WD_LAYOUT_4 *data, void *input, char *input_2)
{
    int32_t status;
    int64_t allocation;
    uint64_t value;
    uint64_t value_2;
    int64_t file_object;
    int64_t value_3;
    uint64_t byte_offset;
    uint64_t current_thread;
    uint64_t value_4;
    uint64_t buffer;
    int64_t trace_argument_2;
    uint32_t value_5;
    uint64_t value_6;
    uint64_t value_7;
    uint64_t *data_pointer;
    uint64_t value_8;
    uint32_t value_9;
    uint32_t value_10;
    uint32_t value_11;
    uint32_t value_12;
    int32_t status_2;
    int16_t *trace_argument_2_2;
    uint32_t value_13;
    int64_t value_14;
    int64_t value_15;
    uint64_t value_16;
    uint64_t current_thread_2;
    uint64_t value_17;
    uint64_t value_18;
    uint64_t value_19;
    uint64_t value_20;
    int64_t value_21;
    uint64_t event_id;
    uint64_t current_thread_3;
    uint64_t value_22;
    uint64_t current_thread_4;
    uint64_t value_23;
    int64_t value_24;
    uint64_t value_25;
    uint64_t value_26;
    uint64_t value_27;
    uint64_t value_28;
    int32_t values[2];
    char buffer_3[4];
    uint64_t *allocation_2;
    int64_t file_name;
    value_5 = (uint32_t)((uint64_t)value_4 >> 0x20);
    value_10 = (uint32_t)((uint64_t)value_6 >> 0x20);
    values[0] = 0;
    buffer_3[0] = '\0';
    file_name = 0;
    value_3 = 0;
    file_object = 0;
    value_2 = 0;
    value_23 = 0;
    value_24 = 0;
    value_25 = 0;
    value_26 = 0;
    value_27 = 0;
    value = 0;
    value_28 = 0;
    allocation = 0;
    byte_offset = 0;
    allocation_2 = NULL;
    *input_2 = '\0';
    if (!(*(int64_t *)(MpData + 0x98)))
    {
        return;
    }
    if (!(*(char *)(MpDlpData + 0xf1)))
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x20, WD_SYMBOL_ADDRESS(WPP_f2c34df88cc13f3dc1b943142014e233_Traceguids), (uint64_t)KeGetCurrentThread());
        }
        return;
    }
    current_thread = ((uint64_t *)input)[3];
    if ((int32_t)FltGetFileSystemType(current_thread, values) <= -1 || values[0] != 0xd)
    {
        return;
    }
    status_2 = MpIsLoopbackByObj(input, 0, buffer_3);
    if (status_2 <= -1)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x21, WD_SYMBOL_ADDRESS(WPP_f2c34df88cc13f3dc1b943142014e233_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)status_2 & 0xffffffffULL);
        }
        return;
    }
    if (buffer_3[0] && !(MpFcKernelGetValue(0xd8) & 4))
    {
        return;
    }
    status_2 = MpDlpGetNetworkRedirectionInfo(&allocation_2);
    if (0 <= status_2)
    {
        if (!(MpFcKernelGetValue(0xd8) & 1))
        {
            status_2 = FltGetFileNameInformation(data, 0x101, &file_name);
            if (0 > status_2)
            {
                if (file_name)
                {
                    FltReleaseFileNameInformation();
                    file_name = 0;
                }
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    current_thread_2 = (uint64_t)KeGetCurrentThread();
                    trace_argument_2_2 = (int16_t *)(((int64_t *)input)[4] + 0x58);
                    current_thread = ((uint64_t)value_10 & 0xffffffffULL) << 32 | (uint64_t)status_2 & 0xffffffffULL;
                    WPP_SF_qZD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x23, WD_SYMBOL_ADDRESS(WPP_f2c34df88cc13f3dc1b943142014e233_Traceguids), current_thread_2, trace_argument_2_2, current_thread);
                    value_5 = (uint32_t)((uint64_t)trace_argument_2_2 >> 0x20);
                    value_10 = (uint32_t)((uint64_t)current_thread >> 0x20);
                }
            }
        }
        if (file_name)
        {
            block_1:
            status_2 = MpGetDlpStubFileNameForNetworkFile((WD_LAYOUT_97 *)(file_name + 8), allocation_2, &allocation);

            trace_argument_2 = allocation;
            if (0 <= status_2)
            {
                value_2 = ((uint64_t)WdLoadField(&value_2, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)0x30 & 0xffffffffULL;
                value_23 = 0;
                value_25 = ((uint64_t)WdLoadField(&value_25, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)0x240 & 0xffffffffULL;
                value_24 = allocation;
                value_26 = 0;
                value_27 = 0;
                value_12 = 0x40;
                value_11 = 3;
                value_10 = 7;
                data_pointer = &value_2;
                status_2 = MpFltCreateFileEx(*(uint64_t *)(MpData + 0x10), *allocation_2, &value_3, &file_object, ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)0x100012 & 0xffffffffULL, data_pointer, &value);
                value_9 = (uint32_t)((uint64_t)data_pointer >> 0x20);
                if (0 <= status_2)
                {
                    trace_argument_2 = (uint64_t)value_9 << 0x20;
                    buffer = *(uint64_t *)(file_name + 0x10);
                    status = FltWriteFile(*allocation_2, file_object, &byte_offset, *(uint16_t *)(file_name + 8), buffer, trace_argument_2, 0, 0, 0, value_10, value_11, value_12);
                    value_10 = (uint32_t)((uint64_t)trace_argument_2 >> 0x20);
                    status_2 = status;
                    if (0 <= status)
                    {
                        value_14 = *(int64_t *)(data->field_0x10 + 0x20);
                        trace_argument_2 = *(int64_t *)(data->field_0x10 + 0x28);
                        if (trace_argument_2)
                        {
                            if (*(uint8_t *)(trace_argument_2 + 10) & 5)
                            {
                                value_14 = *(int64_t *)(trace_argument_2 + 0x18);
                            }
                            else
                            {
                                value_8 = ((uint64_t)value_10 & 0xffffffffULL) << 32 | (uint64_t)ExDefaultMdlProtection & 0xffffffffULL | 0x40000010;
                                value_14 = MmMapLockedPagesSpecifyCache(trace_argument_2, 0, 1, 0, buffer & 0xffffffff00000000, value_8);
                                value_10 = (uint32_t)(value_8 >> 0x20);
                                value_21 = value_14;
                            }
                            value_15 = value_14;
                            if (!value_14)
                            {
                                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                                {
                                    if (*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                    {
                                        current_thread_3 = (uint64_t)KeGetCurrentThread();
                                        WPP_SF_qq(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x28, WD_SYMBOL_ADDRESS(WPP_f2c34df88cc13f3dc1b943142014e233_Traceguids), current_thread_3, *(uint64_t *)(data->field_0x10 + 0x28));
                                    }
                                }
                                goto block_4;
                            }
                        }
                        value_13 = *(uint32_t *)(data->field_0x10 + 0x18);
                        status = (*__guard_dispatch_icall_fptr)(file_object, value_14, value_13);
                        status_2 = status;
                        if (0 <= status)
                        {
                            *input_2 = '\x01';
                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                            {
                                current_thread_4 = (uint64_t)KeGetCurrentThread();
                                WPP_SF_qZZD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2a);
                            }
                            status_2 = 0;
                        }
                        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            current_thread = (uint64_t)KeGetCurrentThread();
                            event_id = 0x29;
                            value_22 = current_thread;
                            block_2:
                            trace_argument_2 = allocation;

                            status_2 = status;
                            goto block_3;
                        }
                    }
                    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                    {
                        if (*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            current_thread = (uint64_t)KeGetCurrentThread();
                            event_id = 0x27;
                            value_20 = current_thread;
                            goto block_2;
                        }
                    }
                }
                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                {
                    if (*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        current_thread = (uint64_t)KeGetCurrentThread();
                        event_id = 0x26;
                        value_7 = ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)status_2 & 0xffffffffULL;
                        value_19 = current_thread;
                        WPP_SF_qZD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_f2c34df88cc13f3dc1b943142014e233_Traceguids), current_thread, trace_argument_2, value_7);
                    }
                }
            }
            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                if (*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    current_thread = (uint64_t)KeGetCurrentThread();
                    event_id = 0x25;
                    value_18 = current_thread;
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_f2c34df88cc13f3dc1b943142014e233_Traceguids), current_thread, ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)status_2 & 0xffffffffULL);
                }
            }
        }
        else
        {
            status = FltGetFileNameInformation(data, 0x102, &file_name);
            status_2 = status;
            if (0 <= status)
            {
                goto block_1;
            }
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                goto block_4;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                goto block_4;
            }
            current_thread = (uint64_t)KeGetCurrentThread();
            event_id = 0x24;
            trace_argument_2 = ((int64_t *)input)[4] + 0x58;
            value_17 = current_thread;
            block_3:
            value_7 = ((uint64_t)value_10 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL;

            WPP_SF_qZD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_f2c34df88cc13f3dc1b943142014e233_Traceguids), current_thread, trace_argument_2, value_7);
        }
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
    {
        if (*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            current_thread = (uint64_t)KeGetCurrentThread();
            event_id = 0x22;
            value_16 = current_thread;
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_f2c34df88cc13f3dc1b943142014e233_Traceguids), current_thread, ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)status_2 & 0xffffffffULL);
        }
    }
    block_4:
    if (file_object)
    {
        ObfDereferenceObject();
        trace_argument_2 = ObTotalReferences;
        WdUnresolvedAtomicBegin();
        ObTotalReferences -= 1;
        WdUnresolvedAtomicEnd();
        if (trace_argument_2 + -1 <= -1 && *(int32_t *)(MpData + 0x364) <= -1)
        {
            if (!KdRefreshDebuggerNotPresent())
            {
                (*(WD_ROUTINE)swi(3))();
                return;
            }
            KeBugCheck(1);
        }
    }

    if (value_3)
    {
        FltClose();
    }
    if (allocation_2)
    {
        MpDlpReleaseNetworkRedirectionInfo(allocation_2);
    }
    if (allocation)
    {
        MpFreeWithTag(allocation, 0x666e504d);
    }
    if (file_name)
    {
        FltReleaseFileNameInformation();
    }
    return;
}

void MpQueryEaFromNetworkFileStubIfNeeded__finally_0(uint64_t input, void *input_2)
{
    int64_t value;
    if (((int64_t *)input_2)[0x24])
    {
        FltClose(((int64_t *)input_2)[0x24], input_2);
    }
    if (((int64_t *)input_2)[0x23])
    {
        ObfDereferenceObject();
        value = ObTotalReferences;
        WdUnresolvedAtomicBegin();
        ObTotalReferences -= 1;
        WdUnresolvedAtomicEnd();
        if (value + -1 <= -1 && *(int32_t *)(MpData + 0x364) <= -1)
        {
            if (KdRefreshDebuggerNotPresent())
            {
                KeBugCheck(1);
            }
            (*(WD_ROUTINE)swi(3))();
            return;
        }
    }
    if (((WD_LAYOUT_106 **)input_2)[0x11])
    {
        MpDlpReleaseNetworkRedirectionInfo(((WD_LAYOUT_106 **)input_2)[0x11]);
    }
    if (((int64_t *)input_2)[0x12])
    {
        ExFreePoolWithTag(((int64_t *)input_2)[0x12], 0x666e504d);
    }
    if (((int64_t *)input_2)[0x22])
    {
        FltReleaseFileNameInformation();
    }
    if (!((char *)input_2)[0x80])
    {
        return;
    }
    ExFreePoolWithTag(((uint64_t *)input_2)[0x13], 0x6165504d);
    return;
}

void MpDlpSetNetworkRedirectionInfo__finally_0(uint64_t input, void *input_2)
{
    int64_t *atomic_value;
    int32_t value;
    int64_t *allocation;
    allocation = ((int64_t **)input_2)[6];
    if (allocation)
    {
        atomic_value = &allocation[2];
        value = WdAtomicAdd32((volatile int32_t *)((int32_t *)atomic_value), -1);
        if (value == 1)
        {
            if (*allocation)
            {
                FltObjectDereference(*allocation);
                *allocation = 0;
            }
            if (allocation[1])
            {
                ExFreePoolWithTag(allocation[1], 0x6e76504d);
            }
            allocation[1] = 0;
            ExFreePoolWithTag(allocation, 0x726e504d);
        }
    }
    allocation = ((int64_t **)input_2)[7];
    if (!allocation)
    {
        return;
    }
    atomic_value = &allocation[2];
    value = WdAtomicAdd32((volatile int32_t *)((int32_t *)atomic_value), -1);
    if (value != 1)
    {
        return;
    }
    if (*allocation)
    {
        FltObjectDereference(*allocation);
        *allocation = 0;
    }
    if (allocation[1])
    {
        ExFreePoolWithTag(allocation[1], 0x6e76504d);
    }
    allocation[1] = 0;
    ExFreePoolWithTag(allocation, 0x726e504d);
    return;
}

void MpSetEaForNetworkFileStubIfNeeded__finally_0(uint64_t input, void *input_2)
{
    int64_t value;
    if (((int64_t *)input_2)[0x21])
    {
        ObfDereferenceObject();
        value = ObTotalReferences;
        WdUnresolvedAtomicBegin();
        ObTotalReferences -= 1;
        WdUnresolvedAtomicEnd();
        if (value + -1 <= -1 && *(int32_t *)(MpData + 0x364) <= -1)
        {
            if (KdRefreshDebuggerNotPresent())
            {
                KeBugCheck(1);
            }
            (*(WD_ROUTINE)swi(3))();
            return;
        }
    }
    if (((int64_t *)input_2)[0x22])
    {
        FltClose();
    }
    if (((WD_LAYOUT_106 **)input_2)[0x12])
    {
        MpDlpReleaseNetworkRedirectionInfo(((WD_LAYOUT_106 **)input_2)[0x12]);
    }
    if (((int64_t *)input_2)[0x11])
    {
        MpFreeWithTag(((int64_t *)input_2)[0x11], 0x666e504d);
    }
    if (!((int64_t *)input_2)[0x20])
    {
        return;
    }
    FltReleaseFileNameInformation();
    return;
}

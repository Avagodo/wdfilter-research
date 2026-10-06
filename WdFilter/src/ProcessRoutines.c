#include "wdfilter.h"

void McTemplateK0qzqqzxx_EtwWriteTransfer(uint64_t input, uint64_t input_2, uint64_t input_3, uint32_t input_4)
{
    int64_t index;
    int16_t *wide_text;
    int32_t value;
    uint32_t value_2;
    char *bytes;
    uint64_t value_3;
    char *bytes_2;
    uint64_t value_4;
    int16_t *wide_text_2;
    int32_t value_5;
    uint32_t value_6;
    int64_t index_2;
    char *bytes_3;
    uint64_t value_7;
    char *bytes_4;
    uint64_t value_8;
    uint32_t values[2];
    char buffer_2[16];
    int16_t *wide_text_3;
    int16_t *wide_text_4;
    uint32_t *data_pointer;
    uint64_t value_10;
    data_pointer = values;
    index = -1;
    value_10 = 4;
    value = 10;
    value_5 = 10;
    if (wide_text_3)
    {
        index_2 = -1;
        do
        {
            index_2 += 1;
        }
        while (wide_text_3[index_2]);
        value = (int32_t)index_2 * 2 + 2;
    }
    bytes = &unrecovered_stack_argument_6;
    value_2 = 0;
    bytes_2 = &unrecovered_stack_argument_7;
    value_3 = 4;
    wide_text = wide_text_3;
    if (!wide_text_3)
    {
        wide_text = &WdAsyncnotificationStorage3;
    }
    value_4 = 4;
    if (wide_text_4)
    {
        do
        {
            index += 1;
        }
        while (wide_text_4[index]);
        value_5 = (int32_t)index * 2 + 2;
    }
    bytes_3 = &unrecovered_stack_argument_9;
    value_6 = 0;
    bytes_4 = &unrecovered_stack_argument_10;
    value_7 = 8;
    wide_text_2 = wide_text_4;
    if (!wide_text_4)
    {
        wide_text_2 = &WdAsyncnotificationStorage3;
    }
    value_8 = 8;
    values[0] = input_4;
    McGenEventWrite_EtwWriteTransfer(wide_text_2, WD_SYMBOL_ADDRESS(AMFilter_ProcessContextEvent), value_5, 8, buffer_2);
    return;
}

void WPP_SF_DDqZ(uint64_t input, uint64_t input_2, uint64_t input_3, uint32_t input_4, uint64_t input_5, uint64_t input_6, int16_t *input_7)
{
    int16_t *wide_text;
    int16_t value;
    uint64_t value_2;
    uint32_t values[2];
    uint64_t value_3;
    value_2 = input_6;
    if (input_7)
    {
        value = *input_7;
        if (*input_7)
        {
            value_3 = *(uint64_t *)(&input_7[4]);
            goto block_1;
        }
    }
    else
    {
        value = 8;
    }
    value_3 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    block_1:
    wide_text = input_7;

    if (!input_7)
    {
        wide_text = &WdCleanupStorage;
    }
    values[0] = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_81ce4eda48113c4f6bf3f9fecccebfe2_Traceguids), 0x13, values, 4, &input_5, 4, &value_2, 8, wide_text, 2, value_3, (uint16_t)value, 0);
    return;
}

void WPP_SF_DZD(uint64_t input, uint64_t input_2, uint64_t input_3, uint32_t input_4, int16_t *input_5)
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
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_81ce4eda48113c4f6bf3f9fecccebfe2_Traceguids), 0x39, values, 4, wide_text, 2, value_2, (uint16_t)value, &unrecovered_stack_argument_6, 4, 0);
    return;
}

void WPP_SF_DZDiis(uint64_t input, uint64_t input_2, uint64_t input_3, uint32_t input_4, int16_t *input_5)
{
    int64_t index;
    int16_t *wide_text;
    char *bytes;
    uint32_t values[2];
    int16_t value_2;
    uint64_t value_3;
    int64_t value_4;
    char *bytes_2;
    if (bytes_2)
    {
        index = -1;
        do
        {
            value_4 = index;
            index = value_4 + 1;
        }
        while (bytes_2[index]);
        value_4 += 2;
    }
    else
    {
        value_4 = 5;
    }
    bytes = bytes_2;
    if (!bytes_2)
    {
        bytes = "NULL";
    }
    if (input_5)
    {
        value_2 = *input_5;
        if (*input_5)
        {
            value_3 = *(uint64_t *)(&input_5[4]);
            goto block_1;
        }
    }
    else
    {
        value_2 = 8;
    }
    value_3 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    block_1:
    wide_text = input_5;

    if (!input_5)
    {
        wide_text = &WdCleanupStorage;
    }
    values[0] = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_81ce4eda48113c4f6bf3f9fecccebfe2_Traceguids), 0x3c, values, 4, wide_text, 2, value_3, (uint16_t)value_2, &unrecovered_stack_argument_6, 4, &unrecovered_stack_argument_7, 8, &unrecovered_stack_argument_8, 8, bytes, value_4, 0);
    return;
}

void WPP_SF_IIIII(uint64_t input, uint64_t input_2, uint64_t input_3, uint64_t input_4)
{
    uint64_t value;
    value = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_81ce4eda48113c4f6bf3f9fecccebfe2_Traceguids), 0x38, &value, 8, &unrecovered_stack_argument_5, 8, &unrecovered_stack_argument_6, 8, &unrecovered_stack_argument_7, 8, &unrecovered_stack_argument_8, 8, 0);
    return;
}

void WPP_SF_qqZD(uint64_t input, uint64_t input_2, uint64_t input_3, uint64_t input_4, uint64_t input_5, int16_t *input_6)
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
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_81ce4eda48113c4f6bf3f9fecccebfe2_Traceguids), 0x17, &value_3, 8, &value_2, 8, wide_text, 2, value_4, (uint16_t)value, &unrecovered_stack_argument_7, 4, 0);
    return;
}

void WPP_SF_qqZL(uint64_t input, uint64_t input_2, uint64_t input_3, uint64_t input_4, uint64_t input_5, int16_t *input_6)
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
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_81ce4eda48113c4f6bf3f9fecccebfe2_Traceguids), 0x19, &value_3, 8, &value_2, 8, wide_text, 2, value_4, (uint16_t)value, &unrecovered_stack_argument_7, 4, 0);
    return;
}

void MpSendProcessMessage(char input, int64_t input_2, int64_t input_3, uint64_t process_id, uint32_t input_4, int64_t input_5, int64_t *input_6, uint16_t *input_7, void *input_8, WD_UNICODE_STRING_VALUE *input_9, char *input_10)
{
    uint16_t *wide_text;
    uint16_t *wide_text_2;
    uint64_t trace_argument_1;
    int64_t value;
    uint32_t value_2;
    int64_t *token_information;
    int64_t *data_pointer;
    uint64_t process;
    char buffer_2[2];
    int64_t values[2];
    uint16_t value_3;
    char event_id[12];
    uint32_t *token_information_2;
    uint32_t *token_information_3;
    uint32_t token_information_4[2];
    uint16_t *allocation;
    int32_t trace_argument_1_2;
    uint64_t *data_pointer_2;
    uint32_t value_4;
    uint32_t value_5;
    WD_UNICODE_STRING_VALUE *record;
    uint64_t value_6;
    uint16_t *wide_text_3;
    void *data_pointer_3;
    uint16_t *wide_text_4;
    void *data_pointer_4;
    uint64_t *data_pointer_5;
    int64_t *data_pointer_6;
    int32_t value_7;
    uint32_t value_8;
    uint32_t value_9;
    char *bytes;
    uint32_t value_10;
    uint32_t value_11;
    int32_t value_12;
    uint32_t value_13;
    int16_t value_14;
    uint32_t value_15;
    int64_t *data_pointer_7;
    char byte_value;
    int64_t *data_pointer_8;
    int32_t value_17;
    uint32_t value_18;
    int64_t token;
    uint64_t creation_time;
    bytes = input_10;
    record = input_9;
    data_pointer_4 = input_8;
    wide_text_4 = input_7;
    value_18 = (uint32_t)((uint64_t)value_6 >> 0x20);
    trace_argument_1_2 = 0x80;
    value_5 = 0;
    value_8 = 0;
    values[0] = input_5;
    value_7 = 0x80;
    data_pointer = NULL;
    value_13 = 0;
    value_12 = 0;
    value_11 = 0;
    allocation = NULL;
    process &= 0xffffffff00000000;
    value_10 = 0;
    value_9 = 0;
    token_information_2 = NULL;
    token_information_3 = NULL;
    token_information_4[0] = 0;
    if (input && input_10)
    {
        *input_10 = 0;
    }
    if (process_id && input_8 && input_2)
    {
        value_2 = value_5;
        if (input_7)
        {
            value_3 = *input_7;
            if (value_3)
            {
                trace_argument_1_2 = value_3 + 0x82;
                value_13 = 0x80;
                value_2 = value_3 + 2;
                value_7 = trace_argument_1_2;
                value_8 = value_2;
            }
        }
        value_4 = value_5;
        if (input_9)
        {
            value_3 = input_9->Length;
            value_4 = 0;
            if (value_3)
            {
                value_4 = value_3 + 2;
                trace_argument_1_2 = trace_argument_1_2 + 2 + (uint32_t)value_3;
                value_5 = value_2 + 0x80;
                value_7 = trace_argument_1_2;
                value_9 = value_5;
                value_10 = value_4;
            }
        }
        if (input_4 & 4 && input_3)
        {
            if (0 <= (int32_t)IoQueryFileDosDeviceName(input_3, &allocation) && allocation)
            {
                trace_argument_1_2 = trace_argument_1_2 + 2 + (uint32_t)(*allocation);
                value_12 = *allocation + 2;
                value_11 = value_5 + value_4;
                value_7 = trace_argument_1_2;
            }
        }
        token = PsReferencePrimaryToken(input_2);
        token_information = (int64_t *)((uint64_t)WdLoadField(&token_information, 4, 4) << 0x20);
        if (token)
        {
            value_17 = SeQueryInformationToken(token, 0xc, &token_information);
            if (value_17 < 0)
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    creation_time = ((uint64_t)value_18 & 0xffffffffULL) << 32 | (uint64_t)value_17 & 0xffffffffULL;
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x10, WD_SYMBOL_ADDRESS(WPP_fa8e7b00178136a6e2a2b6da068185ef_Traceguids), (uint64_t)KeGetCurrentThread(), creation_time);
                    value_18 = (uint32_t)((uint64_t)creation_time >> 0x20);
                }
                goto block_1;
            }
            process = ((uint64_t)WdLoadField(&process, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)((uint32_t)token_information) & 0xffffffffULL;
        }
        else
        {
            value_17 = -0x3ffffff3;
            block_1:
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                creation_time = ((uint64_t)value_18 & 0xffffffffULL) << 32 | (uint64_t)value_17 & 0xffffffffULL;
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x32, WD_SYMBOL_ADDRESS(WPP_81ce4eda48113c4f6bf3f9fecccebfe2_Traceguids), (uint64_t)KeGetCurrentThread(), creation_time);
                value_18 = (uint32_t)((uint64_t)creation_time >> 0x20);
            }
        }
        if (*(uint32_t *)(MpData + 0x360) & 1)
        {
            value_17 = SeQueryInformationToken(token, 0x12, &token_information_2);
            if (value_17 < 0 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                creation_time = ((uint64_t)value_18 & 0xffffffffULL) << 32 | (uint64_t)value_17 & 0xffffffffULL;
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x33, WD_SYMBOL_ADDRESS(WPP_81ce4eda48113c4f6bf3f9fecccebfe2_Traceguids), (uint64_t)KeGetCurrentThread(), creation_time);
                value_18 = (uint32_t)((uint64_t)creation_time >> 0x20);
            }
            value_17 = SeQueryInformationToken(token, 0x14, &token_information_3);
            if (value_17 < 0 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                creation_time = ((uint64_t)value_18 & 0xffffffffULL) << 32 | (uint64_t)value_17 & 0xffffffffULL;
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x34, WD_SYMBOL_ADDRESS(WPP_81ce4eda48113c4f6bf3f9fecccebfe2_Traceguids), (uint64_t)KeGetCurrentThread(), creation_time);
                value_18 = (uint32_t)((uint64_t)creation_time >> 0x20);
            }
            value_17 = SeQueryInformationToken(token, 0x19, token_information_4);
            if (value_17 <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                creation_time = ((uint64_t)value_18 & 0xffffffffULL) << 32 | (uint64_t)value_17 & 0xffffffffULL;
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x35, WD_SYMBOL_ADDRESS(WPP_81ce4eda48113c4f6bf3f9fecccebfe2_Traceguids), (uint64_t)KeGetCurrentThread(), creation_time);
                value_18 = (uint32_t)((uint64_t)creation_time >> 0x20);
            }
        }
        trace_argument_1_2 = MpAsyncCreateNotification(&data_pointer, trace_argument_1_2);
        data_pointer_8 = data_pointer;
        if (0 <= trace_argument_1_2)
        {
            if (value_8 && (wide_text = (uint16_t *)((int64_t)data_pointer + (uint64_t)value_13), (int32_t)RtlStringCbCopyUnicodeString(wide_text, value_8, wide_text_4) <= -1))
            {
                value_8 = 0;
                value_13 = 0;
            }
            if (value_10 && (int32_t)RtlStringCbCopyUnicodeString((uint16_t *)((uint64_t)value_9 + (int64_t)data_pointer_8), value_10, record) <= -1)
            {
                value_10 = 0;
                value_9 = 0;
            }
            if (value_12 && allocation && (trace_argument_1_2 = RtlStringCbCopyUnicodeString((uint16_t *)((uint64_t)value_11 + (int64_t)data_pointer_8), value_12, allocation), trace_argument_1_2 <= -1))
            {
                value_12 = 0;
                value_11 = 0;
            }
            if (input && input_6)
            {
                data_pointer_8[0xd] = *input_6;
                *(uint32_t *)(&data_pointer_8[0xe]) = *(uint32_t *)(&input_6[1]);
            }
            creation_time = 0;
            ((uint32_t *)data_pointer_8)[0x11] = (uint32_t)process;
            *(uint32_t *)(&data_pointer_8[8]) = value_13;
            *(int32_t *)(&data_pointer_8[3]) = (int32_t)values[0];
            if (values[0])
            {
                process = 0;
                trace_argument_1_2 = PsLookupProcessByProcessId(values[0], &process);
                if (0 <= trace_argument_1_2)
                {
                    creation_time = PsGetProcessCreateTimeQuadPart(process);
                    ObfDereferenceObject(process);
                }
            }
            *(uint64_t *)((int64_t)data_pointer_8 + 0x1c) = MpFileTimeFromUlong64(creation_time);
            creation_time = 0;
            process = 0;
            ((uint8_t *)data_pointer_8)[0x31] = ((uint8_t *)data_pointer_4)[0x34] & 1;
            *(char *)(&data_pointer_8[6]) = input;
            ((uint32_t *)data_pointer_8)[9] = (int32_t)process_id;
            if (0 <= (int32_t)PsLookupProcessByProcessId(process_id, &process))
            {
                creation_time = PsGetProcessCreateTimeQuadPart(process);
                ObfDereferenceObject(process);
            }
            data_pointer_8[5] = MpFileTimeFromUlong64(creation_time);
            *(int32_t *)(&data_pointer_8[1]) = value_7;
            *(uint32_t *)(&data_pointer_8[2]) = 0;
            ((uint32_t *)data_pointer_8)[0xf] = value_8;
            value_18 = 1;
            if (token_information_2)
            {
                value_18 = *token_information_2;
            }
            *(uint32_t *)(&data_pointer_8[0xb]) = value_18;
            if (token_information_3)
            {
                value_18 = *token_information_3;
            }
            else
            {
                value_18 = 0;
            }
            ((uint32_t *)data_pointer_8)[0x17] = value_18;
            *(uint32_t *)(&data_pointer_8[0xc]) = token_information_4[0];
            ((uint32_t *)data_pointer_8)[0x13] = value_9;
            *(uint32_t *)(&data_pointer_8[9]) = value_10;
            ((uint32_t *)data_pointer_8)[0x19] = input_4;
            ((uint32_t *)data_pointer_8)[0x1d] = ((uint32_t *)data_pointer_4)[0x3c];
            *(uint32_t *)(&data_pointer_8[0xf]) = ((uint32_t *)data_pointer_4)[0xe];
            ((uint32_t *)data_pointer_8)[0x1f] = ((uint32_t *)data_pointer_4)[0xf];
            ((uint32_t *)data_pointer_8)[0x15] = value_11;
            *(int32_t *)(&data_pointer_8[10]) = value_12;
            if (*(int64_t *)(MpData + 0x1b0))
            {
                data_pointer_3 = data_pointer_4;
                trace_argument_1_2 = MpAsyncSendNotification(data_pointer_8, value_7, 0, 2, data_pointer_4);
                if (trace_argument_1_2 < 0 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x37, WD_SYMBOL_ADDRESS(WPP_81ce4eda48113c4f6bf3f9fecccebfe2_Traceguids), (uint64_t)KeGetCurrentThread(), (uint64_t)((uint64_t)data_pointer_3) & 0xffffffff00000000 | (uint64_t)trace_argument_1_2 & 0xffffffff);
                }
            }
            if (input && *(int64_t *)(MpData + 0x140))
            {
                token_information = NULL;
                memset(buffer_2, 0, (char *)0x70);
                values[0] = (uint64_t)WdDataStorage3 * -10000;
                process = ((uint64_t)WdLoadField(&process, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)0x70 & 0xffffffffULL;
                WdUnresolvedAtomicBegin();
                data_pointer_6 = (int64_t *)(MpData + 0x358);
                value = *data_pointer_6;
                *data_pointer_6 = *data_pointer_6 + 1;
                WdUnresolvedAtomicEnd();
                *data_pointer_8 = value + 1;
                wide_text_2 = (uint16_t *)KeQueryPerformanceCounter(&token_information);
                data_pointer_6 = values;
                trace_argument_1 = value_7 + 0x18;
                data_pointer_5 = &process;
                wide_text_3 = (uint16_t *)buffer_2;
                trace_argument_1_2 = FltSendMessage(*(uint64_t *)(MpData + 0x10), MpData + 0x140, &data_pointer_8[-3], trace_argument_1, wide_text_3, data_pointer_5, data_pointer_6);
                if (token_information)
                {
                    trace_argument_1 = KeQueryPerformanceCounter(0);
                    data_pointer_2 = (uint64_t *)(trace_argument_1 - (int64_t)wide_text_2);
                    value = (int64_t)data_pointer_2 * 1000 / (int64_t)token_information;
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                    {
                        if (*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                        {
                            data_pointer_6 = token_information;
                            WPP_SF_IIIII(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), *(uint32_t *)(WPP_GLOBAL_Control + 0x2c), token_information, trace_argument_1, wide_text_2, data_pointer_2, token_information, value);
                            wide_text_3 = wide_text_2;
                            data_pointer_5 = data_pointer_2;
                        }
                    }
                    if (*(int32_t *)(MpData + 3000) < 0)
                    {
                        WdAtomicExchange64((volatile int64_t *)((uint64_t *)(MpData + 0xbb0)), 0);
                        WdAtomicExchange32((volatile int32_t *)((uint32_t *)(MpData + 3000)), 0);
                    }
                    WdAtomicAdd64((volatile int64_t *)((int64_t *)(MpData + 0xbb0)), value);
                    WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 3000)), 1);
                }
                value_18 = (uint32_t)((uint64_t)data_pointer_5 >> 0x20);
                if (trace_argument_1_2 != 0x102)
                {
                    if (0 <= trace_argument_1_2)
                    {
                        if (buffer_2[0] != '\xa3' || value_14 != 0x70)
                        {
                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                            {
                                WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x3b, WD_SYMBOL_ADDRESS(WPP_81ce4eda48113c4f6bf3f9fecccebfe2_Traceguids));
                            }
                            WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0xbd0)), 1);
                            ((uint32_t *)data_pointer_4)[0x49] = ((uint32_t *)data_pointer_4)[0x49] & 0xfffffff4 | 4;
                        }
                        else
                        {
                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                            {
                                data_pointer_5 = (uint64_t *)(((uint64_t)value_18 & 0xffffffffULL) << 32 | (uint64_t)value_15 & 0xffffffffULL);
                                WPP_SF_DZDiis(*(uint64_t *)(WPP_GLOBAL_Control + 0x18));
                                data_pointer_6 = data_pointer_7;
                            }
                            ((uint32_t *)data_pointer_4)[0x49] = ((uint32_t *)data_pointer_4)[0x49] & 0xfffffff1 | 1;
                            if (byte_value)
                            {
                                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                                {
                                    WPP_SF_dZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x3d, WD_SYMBOL_ADDRESS(WPP_81ce4eda48113c4f6bf3f9fecccebfe2_Traceguids), process_id & 0xffffffff, wide_text_4, data_pointer_5, data_pointer_6);
                                }
                                if (bytes)
                                {
                                    *bytes = 1;
                                }
                                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                                {
                                    WPP_SF_dZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x3e, WD_SYMBOL_ADDRESS(WPP_81ce4eda48113c4f6bf3f9fecccebfe2_Traceguids), process_id & 0xffffffff, wide_text_4, data_pointer_5, data_pointer_6);
                                }
                            }
                            else
                            {
                                MpSetProcessInfoByContext(data_pointer_4, event_id);
                                WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0xbc0)), 1);
                                if (Microsoft_Antimalware_AMFilterEnableBits & 0x10)
                                {
                                    McTemplateK0qzqqzxx_EtwWriteTransfer();
                                }
                            }
                        }
                    }
                    else
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x3a, WD_SYMBOL_ADDRESS(WPP_81ce4eda48113c4f6bf3f9fecccebfe2_Traceguids), trace_argument_1_2);
                        }
                        WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0xbc4)), 1);
                        WdUnresolvedAtomicBegin();
                        *(int32_t *)(MpData + 0xbc8) = trace_argument_1_2;
                        WdUnresolvedAtomicEnd();
                        ((uint32_t *)data_pointer_4)[0x49] = ((uint32_t *)data_pointer_4)[0x49] & 0xfffffff3 | 3;
                    }
                }
                else
                {
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                    {
                        if (*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                        {
                            data_pointer_5 = (uint64_t *)(((uint64_t)value_18 & 0xffffffffULL) << 32 | (uint64_t)WdDataStorage3 & 0xffffffffULL);
                            WPP_SF_DZD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18));
                            trace_argument_1 = process_id;
                            wide_text_3 = wide_text_4;
                        }
                    }
                    WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0xbcc)), 1);
                    if (*(char *)(MpData + 0xfb8))
                    {
                        WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0x264)), 1);
                        if (WdDataStorage4 < *(uint32_t *)(MpData + 0x264))
                        {
                            MpSendAsyncPanicModeMessage(2, NULL, (uint8_t)(*(char *)(MpData + 0xd0)), (uint64_t)trace_argument_1 & 0xffffffffffffff00 | (uint64_t)1 & 0xff, (uint64_t)wide_text_3 & 0xffffffff00000000, data_pointer_5);
                        }
                    }
                    ((uint32_t *)data_pointer_4)[0x49] = ((uint32_t *)data_pointer_4)[0x49] & 0xfffffff2 | 2;
                }
            }
            else if (*(uint32_t *)(MpData + 0x364) & 2)
            {
                trace_argument_1_2 = MpAsyncSendNotification(data_pointer_8, value_7, 0, 1, data_pointer_4);
                value_18 = (uint32_t)((uint64_t)data_pointer_4 >> 0x20);
                if (trace_argument_1_2 <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    creation_time = 0x3f;
                    goto block_2;
                }
            }
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            creation_time = 0x36;
            block_2:
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), creation_time, WD_SYMBOL_ADDRESS(WPP_81ce4eda48113c4f6bf3f9fecccebfe2_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_18 & 0xffffffffULL) << 32 | (uint64_t)trace_argument_1_2 & 0xffffffffULL);
        }
        if (data_pointer_8)
        {
            MpAsyncDereferenceNotification(data_pointer_8);
        }
        if (token)
        {
            PsDereferencePrimaryToken(token);
        }
    }
    else
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return;
        }
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x31, WD_SYMBOL_ADDRESS(WPP_81ce4eda48113c4f6bf3f9fecccebfe2_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_18 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INVALID_PARAMETER & 0xffffffffULL);
    }
    if (token_information_2)
    {
        ExFreePoolWithTag(token_information_2, 0);
    }
    if (token_information_3)
    {
        ExFreePoolWithTag(token_information_3, 0);
    }
    if (allocation)
    {
        ExFreePoolWithTag(allocation, 0);
    }
    return;
}

void MpCreateThreadNotifyRoutine(uint64_t process_id, int64_t input, bool input_2)
{
    bool enabled;
    int64_t *process;
    int32_t value;
    int64_t process_2;
    int64_t process_3;
    uint64_t value_2;
    uint64_t *data_pointer;
    uint64_t values[3];
    int64_t value_3;
    uint64_t value_4;
    int64_t process_4;
    uint16_t *wide_text;
    uint64_t *data_pointer_2;
    bool enabled_2;
    bool enabled_3;
    uint64_t value_5;
    uint64_t *data_pointer_3;
    uint32_t *data_pointer_4;
    uint32_t *data_pointer_5;
    uint32_t value_6;
    int32_t status;
    uint64_t *process_context;
    uint32_t value_7;
    uint64_t value_8;
    int64_t value_9;
    uint32_t value_10;
    uint64_t value_11;
    uint64_t value_12;
    uint64_t value_13;
    uint64_t value_14;
    uint64_t value_15;
    uint32_t value_16;
    uint64_t value_17;
    uint64_t process_id_2;
    int64_t creation_time;
    uint64_t *index;
    uint64_t *index_2;
    uint64_t current_thread;
    value_6 = (uint32_t)((uint64_t)value_5 >> 0x20);
    index_2 = NULL;
    value_3 = 0;
    data_pointer = NULL;
    enabled_3 = 0;
    value_8 = process_id;
    value_9 = input;
    if (!input_2)
    {
        MpDeleteThreadContext((uint64_t)KeGetCurrentThread());
        return;
    }
    if ((int32_t)process_id == 4 || (current_thread = (uint64_t)KeGetCurrentThread(), PsIsSystemThread(current_thread)))
    {
        return;
    }
    process_id_2 = PsGetCurrentProcessId();
    values[0] = process_id_2;
    values[2] = PsGetCurrentThreadId();
    enabled_2 = process_id_2 != process_id;
    process_2 = 0;
    if (!process_id_2)
    {
        return;
    }
    process = &process_2;
    status = PsLookupProcessByProcessId(process_id_2, process);
    process_4 = process_2;
    if (status < 0)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x28, WD_SYMBOL_ADDRESS(WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_6 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
        }
        return;
    }
    WdUnresolvedAtomicBegin();
    ObTotalReferences += 1;
    WdUnresolvedAtomicEnd();
    creation_time = PsGetProcessCreateTimeQuadPart(process_2);
    process_id_2 = PsGetProcessId(process_4);
    process_4 = MpProcessTable;
    process_context = NULL;
    if (process_id_2)
    {
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(process_4 + 8, (uint64_t)((uint64_t)process) & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
        data_pointer_2 = (uint64_t *)(((uint32_t)(process_id_2 >> 2) & 0x7f) * 0x10ULL + *(int64_t *)(MpProcessTable + 0x180));
        for (index = (uint64_t *)(*data_pointer_2); index != data_pointer_2; index = (uint64_t *)(*index))
        {
            if (process_id_2 == index[2] && creation_time == index[3])
            {
                WdAtomicAdd32((volatile int32_t *)((int32_t *)(&index[5])), 1);
                index_2 = &index[-1];
                process_context = index_2;
                break;
            }
        }

        ExReleaseResourceLite(MpProcessTable + 8);
        KeLeaveCriticalRegion();
    }
    if (process_2)
    {
        ObfDereferenceObject();
        process_4 = ObTotalReferences;
        WdUnresolvedAtomicBegin();
        ObTotalReferences -= 1;
        WdUnresolvedAtomicEnd();
        if (process_4 + -1 < 0 && *(int32_t *)(MpData + 0x364) <= -1)
        {
            if (KdRefreshDebuggerNotPresent())
            {
                KeBugCheck(1);
            }
            (*(WD_ROUTINE)swi(3))();
            return;
        }
    }
    if (!index_2)
    {
        return;
    }
    if (values[0] == process_id)
    {
        enabled_3 = (*(uint32_t *)(&index_2[7]) & 0x10000000) != 0;
    }
    process_3 = 0;
    enabled = enabled_2;
    if (process_id)
    {
        status = PsLookupProcessByProcessId(process_id, &process_3);
        process_4 = process_3;
        if (status < 0)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                current_thread = ((uint64_t)value_6 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL;
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x28, WD_SYMBOL_ADDRESS(WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids), (uint64_t)KeGetCurrentThread(), current_thread);
                value_6 = (uint32_t)((uint64_t)current_thread >> 0x20);
            }
            index = data_pointer;
            goto block_2;
        }
        WdUnresolvedAtomicBegin();
        ObTotalReferences += 1;
        WdUnresolvedAtomicEnd();
        creation_time = PsGetProcessCreateTimeQuadPart(process_3);
        process_id_2 = PsGetProcessId(process_4);
        process_4 = MpProcessTable;
        status = -0x3ffffddb;
        index = NULL;
        if (process_id_2)
        {
            KeEnterCriticalRegion();
            ExAcquireResourceSharedLite(process_4 + 8, 1);
            data_pointer_2 = (uint64_t *)(((uint32_t)(process_id_2 >> 2) & 0x7f) * 0x10ULL + *(int64_t *)(MpProcessTable + 0x180));
            for (index_2 = (uint64_t *)(*data_pointer_2); index_2 != data_pointer_2; index_2 = (uint64_t *)(*index_2))
            {
                if (process_id_2 == index_2[2] && creation_time == index_2[3])
                {
                    WdAtomicAdd32((volatile int32_t *)((int32_t *)(&index_2[5])), 1);
                    index = &index_2[-1];
                    status = 0;
                    break;
                }
            }

            ExReleaseResourceLite(MpProcessTable + 8);
            KeLeaveCriticalRegion();
        }
        if (process_3)
        {
            ObfDereferenceObject();
            process_4 = ObTotalReferences;
            WdUnresolvedAtomicBegin();
            ObTotalReferences -= 1;
            WdUnresolvedAtomicEnd();
            if (process_4 + -1 < 0 && *(int32_t *)(MpData + 0x364) <= -1)
            {
                if (KdRefreshDebuggerNotPresent())
                {
                    KeBugCheck(1);
                }
                (*(WD_ROUTINE)swi(3))();
                return;
            }
        }
        process_id = value_8;
        index_2 = process_context;
        if (status <= -1 || !(((uint32_t *)index)[0xd] & 4))
        {
            goto block_2;
        }
        enabled_2 = 0;
        ((uint32_t *)index)[0xd] = ((uint32_t *)index)[0xd] & 0xfffffffb;
        enabled = 0;
        if (!(*(uint32_t *)(&index[7]) & 0x10000000))
        {
            goto block_2;
        }
        enabled_3 = 1;
        block_1:
        value_2 = 0;

        value_10 = 0;
        GetMpUniquePidFromProcessId(process_id, &value_2);
        process_id_2 = values[0];
        data_pointer = NULL;
        value_7 = 0;
        GetMpUniquePidFromProcessId(values[0], &data_pointer);
        values[0] = 0;
        values[1] = 0;
        MpGetPriorityInfo(0, 0, values);
        if (enabled_3)
        {
            value_17 = 0;
            data_pointer_3 = &value_4;
            value_4 = 0;
            value_11 = 0;
            value_12 = 0;
            value_13 = 0;
            value_14 = 0;
            value_15 = 0;
            status = MpCreatePsThreadSyncMonitorData(process_context, index, values[2], value_9, data_pointer_3);
            value_6 = (uint32_t)((uint64_t)data_pointer_3 >> 0x20);
            if (0 <= status)
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                {
                    WPP_SF_DD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2a, WD_SYMBOL_ADDRESS(WPP_81ce4eda48113c4f6bf3f9fecccebfe2_Traceguids), process_id_2 & 0xffffffff, ((uint64_t)value_6 & 0xffffffffULL) << 32 | (uint64_t)((int32_t)process_id) & 0xffffffffULL);
                }
                data_pointer_4 = (uint32_t *)(&process_context[7]);
                status = MpSendSyncMonitorNotification(6, &data_pointer, &value_4, values, data_pointer_4);
                value_6 = (uint32_t)((uint64_t)data_pointer_4 >> 0x20);
                if (status <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    current_thread = ((uint64_t)value_6 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL;
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2b, WD_SYMBOL_ADDRESS(WPP_81ce4eda48113c4f6bf3f9fecccebfe2_Traceguids), (uint64_t)KeGetCurrentThread(), current_thread);
                    value_6 = (uint32_t)((uint64_t)current_thread >> 0x20);
                }
            }
        }
        if (enabled)
        {
            data_pointer_4 = (uint32_t *)(&process_context[7]);
            if (*(uint32_t *)(&process_context[7]) & 0x400000)
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                {
                    WPP_SF_DD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2c, WD_SYMBOL_ADDRESS(WPP_81ce4eda48113c4f6bf3f9fecccebfe2_Traceguids), process_id_2 & 0xffffffff, ((uint64_t)value_6 & 0xffffffffULL) << 32 | (uint64_t)((int32_t)process_id) & 0xffffffffULL);
                }
                data_pointer_5 = data_pointer_4;
                status = MpSendSyncMonitorNotification(3, &data_pointer, &value_2, values, data_pointer_4);
                if (status <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2d, WD_SYMBOL_ADDRESS(WPP_81ce4eda48113c4f6bf3f9fecccebfe2_Traceguids), (uint64_t)KeGetCurrentThread(), (uint64_t)((uint64_t)data_pointer_5) & 0xffffffff00000000 | (uint64_t)status & 0xffffffff);
                }
            }
            if (MpShouldSendBmMessage(process_context) && '\0' <= (char)(*data_pointer_4))
            {
                if (index && (wide_text = (uint16_t *)index[0x10], wide_text))
                {
                    value_16 = *wide_text;
                }
                else
                {
                    wide_text = NULL;
                    value_16 = 0;
                }
                value = value_16 + 0x48;
                status = MpAsyncCreateNotification(&value_3, value);
                process_4 = value_3;
                if (0 <= status)
                {
                    *(uint64_t *)(value_3 + 0x1c) = 0;
                    *(uint64_t *)(value_3 + 0x24) = 0;
                    *(uint64_t *)(value_3 + 0x2c) = 0;
                    *(uint64_t *)(value_3 + 0x34) = 0;
                    *(uint64_t *)(value_3 + 0x3c) = 0;
                    *(int32_t *)(value_3 + 8) = value;
                    *(uint32_t *)(value_3 + 0x10) = 6;
                    *(int32_t *)(value_3 + 0x18) = (int32_t)process_id_2;
                    current_thread = PsGetProcessCreateTimeQuadPart(IoGetCurrentProcess());
                    *(uint64_t *)(process_4 + 0x1c) = MpFileTimeFromUlong64(current_thread);
                    *(int32_t *)(process_4 + 0x24) = (int32_t)values[2];
                    *(uint64_t *)(process_4 + 0x28) = value_2;
                    *(uint32_t *)(process_4 + 0x30) = value_10;
                    *(int32_t *)(process_4 + 0x34) = (int32_t)value_9;
                    *(uint64_t *)(process_4 + 0x38) = MpFileTimeFromUlong64(0);
                    if (wide_text && *wide_text)
                    {
                        memmove((uint64_t *)(process_4 + 0x40), *(uint64_t **)(&wide_text[4]), *wide_text);
                        *(uint16_t *)(process_4 + 0x40 + (uint64_t)(*wide_text >> 1) * 2) = 0;
                    }
                    MpAsyncSendNotification(process_4, value, 0, 1, process_context);
                    MpAsyncDereferenceNotification(process_4);
                }
            }
        }
    }
    else
    {
        index = data_pointer;
        block_2:
        process_context = index_2;

        if (enabled_3 || enabled_2)
        {
            goto block_1;
        }
    }
    MpReleaseProcessContext(process_context);
    if (index)
    {
        MpReleaseProcessContext(index);
    }
    return;
}

void MpCreateThreadNotifyRoutineEx(int64_t process_id, uint64_t input, bool input_2)
{
    int64_t process_table;
    uint64_t value;
    uint64_t *data_pointer;
    uint64_t *process_context;
    uint64_t *string;
    uint32_t *data_pointer_2;
    uint32_t value_2;
    uint64_t value_3;
    uint64_t *data_pointer_3;
    int32_t status;
    int64_t process;
    int64_t creation_time;
    uint64_t process_id_2;
    uint64_t *index;
    uint64_t *target_name;
    uint64_t value_5;
    if (!input_2)
    {
        return;
    }
    string = NULL;
    target_name = NULL;
    process = IoGetCurrentProcess();
    if (process != *__imp_PsInitialSystemProcess)
    {
        creation_time = PsGetProcessCreateTimeQuadPart(process);
        process_id_2 = PsGetProcessId(process);
        process_table = MpProcessTable;
        if (process_id_2)
        {
            KeEnterCriticalRegion();
            ExAcquireResourceSharedLite(process_table + 8, (uint64_t)input & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
            data_pointer = (uint64_t *)(((uint32_t)(process_id_2 >> 2) & 0x7f) * 0x10ULL + *(int64_t *)(MpProcessTable + 0x180));
            for (index = (uint64_t *)(*data_pointer); process_context = string, index != data_pointer; index = (uint64_t *)(*index))
            {
                if (process_id_2 == index[2] && creation_time == index[3])
                {
                    WdAtomicAdd32((volatile int32_t *)((int32_t *)(&index[5])), 1);
                    process_context = &index[-1];
                    break;
                }
            }

            ExReleaseResourceLite(MpProcessTable + 8);
            KeLeaveCriticalRegion();
            if (process_context)
            {
                if (((uint32_t *)process_context)[0xd] >> 10 & 1)
                {
                    data_pointer_2 = (uint32_t *)(&process_context[7]);
                    ((uint32_t *)process_context)[0xd] = ((uint32_t *)process_context)[0xd] & 0xfffffbff;
                    if (*data_pointer_2 & 0x20000000 && (status = MpGetProcessCommandLineByPointer(process, &target_name), string = target_name, 0 <= status) && (status = RtlCompareUnicodeString(process_context[5], target_name, 0), status))
                    {
                        value_5 = 0;
                        value_3 = 0;
                        MpGetPriorityInfo(0, 0, &value_5);
                        target_name = NULL;
                        value_2 = 0;
                        GetMpUniquePidFromProcessId(process_id, &target_name);
                        value = process_context[5];
                        data_pointer_3 = string;
                        status = MpSendSyncMonitorNotification(7, &target_name, &value, &value_5, data_pointer_2);
                        if (status <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x29, WD_SYMBOL_ADDRESS(WPP_81ce4eda48113c4f6bf3f9fecccebfe2_Traceguids), (uint64_t)KeGetCurrentThread(), (uint64_t)((uint64_t)data_pointer_2) & 0xffffffff00000000 | (uint64_t)status & 0xffffffff);
                        }
                    }
                }
                MpReleaseProcessContext(process_context);
                if (string)
                {
                    MpFreeString(string);
                }
            }
        }
    }
    return;
}

void MpCreateProcessNotifyRoutineEx(int64_t process, uint64_t process_id, void *provider)
{
    int32_t value;
    int16_t *string;
    char byte_value;
    uint32_t value_2;
    uint32_t value_3;
    int16_t *process_id_2;
    uint64_t value_4;
    uint64_t trace_argument_2;
    uint32_t value_5;
    uint64_t file_object;
    int16_t *trace_argument_1;
    int64_t value_7;
    uint64_t value_8;
    int16_t *string_2;
    char buffer_2[8];
    int64_t file_name;
    value_5 = (uint32_t)((uint64_t)value_4 >> 0x20);
    string_2 = NULL;
    file_name = 0;
    string = NULL;
    byte_value = '\0';
    value_3 = 0;
    value_2 = 0;
    process_id_2 = string_2;
    if (!provider)
    {
        goto block_2;
    }
    byte_value = '\x01';
    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
    {
        trace_argument_2 = (((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)(((uint32_t *)provider)[2] >> 1) & 0xffffffffULL) & 0xffffffff00000001;
        WPP_SF_DDqZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), WPP_GLOBAL_Control, provider, ((uint32_t *)provider)[2] & 1, trace_argument_2, ((uint64_t *)provider)[5], ((int16_t **)provider)[6]);
        value_5 = (uint32_t)(trace_argument_2 >> 0x20);
    }
    if (((uint32_t *)provider)[2] & 1)
    {
        block_1:
        string_2 = ((int16_t **)provider)[6];
    }
    else
    {
        value = MpGetProcessName(process_id, &string);
        if (value <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            file_object = ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)value & 0xffffffffULL;
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x14, WD_SYMBOL_ADDRESS(WPP_81ce4eda48113c4f6bf3f9fecccebfe2_Traceguids), (uint64_t)KeGetCurrentThread(), file_object);
            value_5 = (uint32_t)((uint64_t)file_object >> 0x20);
        }
        if (!string)
        {
            goto block_1;
        }
        if (!(*string))
        {
            MpFreeString(string);
            goto block_1;
        }
        string_2 = string;
    }
    value_7 = ((int64_t *)provider)[5];
    if (value_7)
    {
        if (*(uint32_t *)(value_7 + 0x50) & 0x4000)
        {
            value_7 = 0;
        }
        value = MpGetImageNormalizedName(value_7, string_2, &file_name);
        if (value < 0 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            file_object = ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)value & 0xffffffffULL;
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x15, WD_SYMBOL_ADDRESS(WPP_81ce4eda48113c4f6bf3f9fecccebfe2_Traceguids), (uint64_t)KeGetCurrentThread(), file_object);
            value_5 = (uint32_t)((uint64_t)file_object >> 0x20);
        }
        if (((int64_t *)provider)[5] && MpTxfData)
        {
            value_2 = IoGetTransactionParameterBlock() != 0;
        }
        else
        {
            value_2 = 0;
        }
    }
    else
    {
        value_2 = value_3;
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x16, WD_SYMBOL_ADDRESS(WPP_81ce4eda48113c4f6bf3f9fecccebfe2_Traceguids));
        }
    }
    process_id_2 = ((int16_t **)provider)[2];
    block_2:
    file_object = 0;

    buffer_2[0] = '\0';
    if (provider)
    {
        value_8 = ((uint64_t *)provider)[7];
    }
    else
    {
        value_8 = file_object;
    }
    trace_argument_1 = (int16_t *)(file_name + 8);
    if (!file_name)
    {
        trace_argument_1 = string_2;
    }
    if (provider)
    {
        file_object = ((uint64_t *)provider)[5];
    }
    MpHandleProcessNotification(process, process_id_2, process_id, (uint64_t)((uint64_t)buffer_2) & 0xffffffffffffff00 | (uint64_t)byte_value & 0xff, ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)value_2 & 0xffffffffULL, file_object, trace_argument_1, value_8, buffer_2);
    if (byte_value && buffer_2[0] && (((uint32_t *)provider)[0x10] = WD_STATUS_ACCESS_DENIED, WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control)) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
    {
        WPP_SF_qqZD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18));
    }
    if ((char)value_2)
    {
        trace_argument_1 = (int16_t *)(file_name + 8);
        if (!file_name)
        {
            trace_argument_1 = string_2;
        }
        MpLogPrintfW(L"[Mini-filter] Blocked transacted process creation from %wZ, parent pid: %u", trace_argument_1, (uint64_t)process_id_2 & 0xffffffff);
        ((uint32_t *)provider)[0x10] = WD_STATUS_ACCESS_DENIED;
    }
    if (string_2 && ((int16_t **)provider)[6] != string_2)
    {
        MpFreeString(string_2);
    }
    if (file_name)
    {
        FltReleaseFileNameInformation();
    }
    return;
}

void MpHandleProcessNotification(int64_t process, int64_t process_id, uint64_t process_id_2, bool input, uint32_t input_2, int64_t file_object, int16_t *trace_argument_1, WD_UNICODE_STRING_VALUE *input_3, char *input_4)
{
    uint64_t *index;
    uint64_t *data_pointer;
    int16_t *wide_text;
    uint64_t current_thread;
    int64_t *process_context;
    int64_t process_context_2;
    int16_t *wide_text_2;
    int64_t process_context_3;
    int16_t *handle_context;
    uint64_t value;
    bool enabled;
    uint64_t value_2;
    int16_t *instance;
    uint32_t value_3;
    uint64_t *data_pointer_2;
    int16_t **token_information;
    uint32_t value_4;
    uint64_t value_5;
    uint64_t value_6;
    uint32_t value_7;
    char byte_value;
    int64_t value_8;
    int16_t *wide_text_3;
    uint64_t value_9;
    WD_UNICODE_STRING_VALUE *record;
    int64_t value_10;
    uint32_t value_11;
    int32_t status;
    int32_t value_13;
    int32_t status_2;
    uint64_t process_id_3;
    int64_t creation_time;
    int64_t token;
    value_7 = (uint32_t)((uint64_t)value_5 >> 0x20);
    value_4 = input_2 | 2;
    process_context_2 = 0;
    value_2 = 0;
    value_11 = 0;
    value_10 = 0;
    instance = trace_argument_1;
    value = 0;
    value_8 = 0;
    wide_text_3 = NULL;
    value_9 = 0;
    wide_text_2 = NULL;
    record = NULL;
    if (!g_bSystemProcessContextCreateTimeFixed)
    {
        token = process_id;
        process_id_3 = PsGetProcessId(*__imp_PsInitialSystemProcess);
        creation_time = MpProcessTable;
        if (process_id_3)
        {
            KeEnterCriticalRegion();
            ExAcquireResourceSharedLite(creation_time + 8, (uint64_t)token & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
            value_3 = (uint32_t)(process_id_3 >> 2);
            data_pointer_2 = (uint64_t *)((value_3 & 0x7f) * 0x10ULL + *(int64_t *)(MpProcessTable + 0x180));
            for (index = (uint64_t *)(*data_pointer_2); index != data_pointer_2; index = (uint64_t *)(*index))
            {
                if (process_id_3 == index[2] && !index[3])
                {
                    WdAtomicAdd32((volatile int32_t *)((int32_t *)(&index[5])), 1);
                    ExReleaseResourceLite(MpProcessTable + 8);
                    KeLeaveCriticalRegion();
                    creation_time = PsGetProcessCreateTimeQuadPart(*__imp_PsInitialSystemProcess);
                    index[3] = creation_time;
                    g_bSystemProcessContextCreateTimeFixed = creation_time != 0;
                    MpReleaseProcessContext(&index[-1]);
                    goto block_7;
                }
            }

            ExReleaseResourceLite(MpProcessTable + 8);
            KeLeaveCriticalRegion();
        }
        g_bSystemProcessContextCreateTimeFixed = '\x01';
    }
    block_7:
    if (input)
    {
        if (MpDlpData && !(*(char *)(MpDlpData + 0x2c)))
        {
            MpDlpInitializeEnlightenment();
        }
        if (input_4)
        {
            *input_4 = 0;
        }
        record = input_3;
        wide_text_2 = trace_argument_1;
        value_10 = process_id;
        token_information = &wide_text_2;
        status = MpCreateProcessContext(process_id_2, PsGetProcessCreateTimeQuadPart(process), token_information, &process_context_2);
        if (0 <= status)
        {
            *(uint32_t *)(process_context_2 + 0x34) = *(uint32_t *)(process_context_2 + 0x34) | 4;
            if (*(int64_t *)(MpData + 0x28))
            {
                *(uint32_t *)(process_context_2 + 0x34) = *(uint32_t *)(process_context_2 + 0x34) | 0x400;
            }
            if (*(int32_t *)(MpData + 0xff4))
            {
                process_context_3 = 0;
                if (0 <= (int32_t)MpGetProcessContextById(process_id, &process_context_3) && process_context_3)
                {
                    *(uint32_t *)(process_context_3 + 0x34) = *(uint32_t *)(process_context_3 + 0x34) | 0x8000;
                    MpReleaseProcessContext(process_context_3);
                }
            }
            status = MpSetProcessDocOpenRule(process_context_2, trace_argument_1);
            if (status <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                process_id_3 = process_id_2;
                WPP_SF_qqZL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18));
                value_7 = (uint32_t)(process_id_3 >> 0x20);
            }
            creation_time = process_context_2;
            status = *(int32_t *)(process_context_2 + 0xf0);
            if (status != 0x1d)
            {
                if (status != 0x1e)
                {
                    if (status == 0x1f)
                    {
                        status = -1;
                        if (trace_argument_1)
                        {
                            MpInitializeCsrssHookDataIfNeeded();
                            if (*(int64_t *)(MpData + 0x9b0) && !(*(char *)(*(int64_t *)(MpData + 0x9b0) + 0x18)) && (!(*(int64_t *)(creation_time + 0x58)) && *trace_argument_1))
                            {
                                if (*(int64_t *)(*(int64_t *)(MpData + 0x9b0) + 0x10))
                                {
                                    token_information = (int16_t **)((uint64_t)((uint64_t)token_information) & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
                                    byte_value = RtlEqualUnicodeString(trace_argument_1, *(uint64_t *)(*(int64_t *)(MpData + 0x9b0) + 0x10), token_information);
                                    if (byte_value)
                                    {
                                        enabled = 0;
                                        token = process;
                                        process_context_3 = process;
                                        if (process)
                                        {
                                            block_1:
                                            token = PsReferencePrimaryToken(token);

                                            handle_context = (int16_t *)((uint64_t)WdLoadField(&handle_context, 4, 4) << 0x20);
                                            if (token)
                                            {
                                                token_information = (int16_t **)(&handle_context);
                                                value_13 = SeQueryInformationToken(token, 0xc, token_information);
                                                status_2 = value_13;
                                                if (value_13 <= -1)
                                                {
                                                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                                    {
                                                        token_information = &WPP_fa8e7b00178136a6e2a2b6da068185ef_Traceguids;
                                                        current_thread = ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)value_13 & 0xffffffffULL;
                                                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x10, WD_SYMBOL_ADDRESS(WPP_fa8e7b00178136a6e2a2b6da068185ef_Traceguids), (uint64_t)KeGetCurrentThread(), current_thread);
                                                        value_7 = (uint32_t)((uint64_t)current_thread >> 0x20);
                                                    }
                                                    goto block_3;
                                                }
                                                status = (int32_t)handle_context;
                                                block_2:
                                                PsDereferencePrimaryToken(token);
                                            }
                                            else
                                            {
                                                status_2 = -0x3ffffff3;
                                                value_13 = -0x3ffffff3;
                                                block_3:
                                                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                                {
                                                    token_information = &WPP_fa8e7b00178136a6e2a2b6da068185ef_Traceguids;
                                                    current_thread = ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)value_13 & 0xffffffffULL;
                                                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x12, WD_SYMBOL_ADDRESS(WPP_fa8e7b00178136a6e2a2b6da068185ef_Traceguids), (uint64_t)KeGetCurrentThread(), current_thread);
                                                    value_7 = (uint32_t)((uint64_t)current_thread >> 0x20);
                                                }

                                                if (token)
                                                {
                                                    goto block_2;
                                                }
                                            }
                                            if (enabled)
                                            {
                                                ObfDereferenceObject(process_context_3);
                                                token = ObTotalReferences;
                                                WdUnresolvedAtomicBegin();
                                                ObTotalReferences -= 1;
                                                WdUnresolvedAtomicEnd();
                                                if (token + -1 <= -1 && *(int32_t *)(MpData + 0x364) <= -1)
                                                {
                                                    if (!KdRefreshDebuggerNotPresent())
                                                    {
                                                        (*(WD_ROUTINE)swi(3))();
                                                        return;
                                                    }
                                                    KeBugCheck(1);
                                                }
                                            }
                                            if (status_2 <= -1)
                                            {
                                                goto block_4;
                                            }
                                            if (!status)
                                            {
                                                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                                                {
                                                    token_information = &WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids;
                                                    token = creation_time;
                                                    WPP_SF_qq(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x36, WD_SYMBOL_ADDRESS(WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids), (uint64_t)KeGetCurrentThread(), creation_time);
                                                    value_7 = (uint32_t)((uint64_t)token >> 0x20);
                                                }
                                                *(WD_ROUTINE *)(creation_time + 0x58) = CsrssPreScanFilterRoutine;
                                                *(char *)(*(int64_t *)(MpData + 0x9b0) + 0x18) = 1;
                                            }
                                        }
                                        else
                                        {
                                            status_2 = PsLookupProcessByProcessId(*(uint64_t *)(creation_time + 0x18), &process_context_3);
                                            if (0 <= status_2)
                                            {
                                                WdUnresolvedAtomicBegin();
                                                ObTotalReferences += 1;
                                                WdUnresolvedAtomicEnd();
                                                enabled = 1;
                                                token = process_context_3;
                                                goto block_1;
                                            }
                                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                            {
                                                token_information = &WPP_fa8e7b00178136a6e2a2b6da068185ef_Traceguids;
                                                current_thread = ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)status_2 & 0xffffffffULL;
                                                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x11, WD_SYMBOL_ADDRESS(WPP_fa8e7b00178136a6e2a2b6da068185ef_Traceguids), (uint64_t)KeGetCurrentThread(), current_thread);
                                                value_7 = (uint32_t)((uint64_t)current_thread >> 0x20);
                                            }
                                            block_4:
                                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                            {
                                                token_information = &WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids;
                                                current_thread = ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)status_2 & 0xffffffffULL;
                                                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x35, WD_SYMBOL_ADDRESS(WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids), (uint64_t)KeGetCurrentThread(), current_thread);
                                                value_7 = (uint32_t)((uint64_t)current_thread >> 0x20);
                                            }

                                            *(WD_ROUTINE *)(creation_time + 0x58) = CsrssPreScanFilterRoutine;
                                        }
                                        trace_argument_1 = instance;
                                    }
                                }
                                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                {
                                    token_information = &WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids;
                                    WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x34, WD_SYMBOL_ADDRESS(WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids), (uint64_t)KeGetCurrentThread());
                                }
                            }
                        }
                        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            token_information = &WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids;
                            current_thread = ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INVALID_PARAMETER & 0xffffffffULL;
                            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x33, WD_SYMBOL_ADDRESS(WPP_07b90269f12934d5d1c5d46469ead7e4_Traceguids), (uint64_t)KeGetCurrentThread(), current_thread);
                            value_7 = (uint32_t)((uint64_t)current_thread >> 0x20);
                        }
                    }
                }
                else
                {
                    *(WD_ROUTINE *)(process_context_2 + 0x58) = MpSystemPreScanFilterRoutine;
                }
            }
            else
            {
                *(WD_ROUTINE *)(process_context_2 + 0x58) = MpCryptSvcPreScanFilterRoutine;
            }
            MpSetProcessExempt(process_context_2, trace_argument_1, (uint64_t)((uint64_t)token_information) & 0xffffffffffffff00 | (uint64_t)1 & 0xff, 0);
            MpSetProcessHardening(process, process_context_2, trace_argument_1);
            MpSetProcessHardeningExclusion(process_context_2, process, trace_argument_1);
            value_9 = (((uint64_t)WdLoadField(&value_9, 5, 3) & 0xffffffULL) << 40 | (uint64_t)(((uint64_t)(*(uint8_t *)(process_context_2 + 0x34) >> 6) & 0xffULL) << 32 | (uint64_t)1 & 0xffffffffULL) & 0xffffffffffULL) & 0xffffff01ffffffff;
            value_9 = (((uint64_t)WdLoadField(&value_9, 6, 2) & 0xffffULL) << 48 | (uint64_t)(((uint64_t)(*(uint8_t *)(process_context_2 + 0x3c) >> 1) & 0xffULL) << 40 | (uint64_t)((uint64_t)value_9) & 0xffffffffffULL) & 0xffffffffffffULL) & 0xffff01ffffffffff;
            value = process_id_2;
            value_8 = process_id;
            wide_text_3 = trace_argument_1;
            ExNotifyCallback(*(uint64_t *)(MpData + 0x9b8), &value, 0);
            status = GetMpUniquePidFromProcessId(PsGetCurrentProcessId(), &value_2);
            current_thread = (uint64_t)KeGetCurrentThread();
            creation_time = *(int64_t *)(MpData + 0xe8);
            if (IoThreadToProcess(current_thread) != creation_time && (current_thread = (uint64_t)KeGetCurrentThread(), creation_time = *(int64_t *)(MpData + 0x100), IoThreadToProcess(current_thread) != creation_time) && file_object && (*(uint32_t *)(MpData + 0x360) & 0x10 && !(*(int32_t *)(process_context_2 + 0x78))))
            {
                instance = NULL;
                handle_context = NULL;
                status_2 = MpGetInstanceFromFileObject(file_object, &instance);
                if (0 <= status_2)
                {
                    status_2 = FltGetStreamHandleContext(instance, file_object, &handle_context);
                    if (status_2 <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                    {
                        current_thread = 0x5f;
                        value_6 = ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)status_2 & 0xffffffffULL;
                        block_5:
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), current_thread, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), (uint64_t)KeGetCurrentThread(), value_6);

                        value_7 = (uint32_t)((uint64_t)value_6 >> 0x20);
                    }
                }
                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                {
                    current_thread = 0x5e;
                    value_6 = ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)status_2 & 0xffffffffULL;
                    goto block_5;
                }
                if (instance)
                {
                    FltObjectDereference();
                }
                if (0 <= status_2)
                {
                    wide_text = handle_context;
                    enabled = 1;
                    if (!(*(uint32_t *)(&handle_context[0x14]) & 0x100))
                    {
                        enabled = 0;
                    }
                }
                else
                {
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        current_thread = ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)status_2 & 0xffffffffULL;
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xf, WD_SYMBOL_ADDRESS(WPP_81ce4eda48113c4f6bf3f9fecccebfe2_Traceguids), (uint64_t)KeGetCurrentThread(), current_thread);
                        value_7 = (uint32_t)((uint64_t)current_thread >> 0x20);
                    }
                    wide_text = handle_context;
                    enabled = 1;
                }
                if (wide_text)
                {
                    FltReleaseContext();
                }
                if (!enabled)
                {
                    value_4 &= 0xfffffffd;
                }
            }
            if ((7 < (uint8_t)((*(uint8_t *)(process_context_2 + 0xb8) >> 4) - 1) || 2 <= (uint8_t)((*(uint8_t *)(process_context_2 + 0xb8) & 7) - 1)) && (*(int32_t *)(process_context_2 + 0xf0) == 0x11 || *(int32_t *)(process_context_2 + 0xf0) == 0x12))
            {
                value_4 |= 0xc;
            }
            data_pointer = &value_2;
            if (status <= -1)
            {
                data_pointer = NULL;
            }
            current_thread = ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)value_4 & 0xffffffffULL;
            status = MpSendProcessMessage((uint64_t)process_context_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff, process, file_object, process_id_2, current_thread, process_id, data_pointer, trace_argument_1, process_context_2, input_3, input_4);
            value_7 = (uint32_t)((uint64_t)current_thread >> 0x20);
            if (0 <= status || WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                goto block_8;
            }
            current_thread = 0x1a;
        }
        else
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                goto block_8;
            }
            current_thread = 0x18;
        }
        block_6:
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), current_thread, WD_SYMBOL_ADDRESS(WPP_81ce4eda48113c4f6bf3f9fecccebfe2_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
    }
    else
    {
        value_7 = 0;
        KeWaitForSingleObject(MpProcessTable + 0x188, 0, 0, 0, 0);
        process_context = &process_context_2;
        status = MpGetProcessContextById(process_id_2, process_context);
        creation_time = process_context_2;
        if (0 <= status)
        {
            WdUnresolvedAtomicBegin();
            *(uint32_t *)(process_context_2 + 0x34) = *(uint32_t *)(process_context_2 + 0x34) | 0x2000;
            token = MpProcessTable;
            WdUnresolvedAtomicEnd();
            KeEnterCriticalRegion();
            ExAcquireResourceExclusiveLite(token + 8, (uint64_t)((uint64_t)process_context) & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
            token = *(int64_t *)(creation_time + 8);
            if (*(int64_t *)(token + 8) != creation_time + 8 || (process_context = *(int64_t **)(creation_time + 0x10), *process_context != creation_time + 8))
            {
                (*(WD_ROUTINE)swi(0x29))(3);
            }
            *process_context = token;
            *(int64_t **)(token + 8) = process_context;
            if (Microsoft_Antimalware_AMFilterEnableBits & 0x10)
            {
                value_7 = 1;
                McTemplateK0qzqqzxx_EtwWriteTransfer();
            }
            MpReleaseProcessContext(creation_time);
            ExReleaseResourceLite(MpProcessTable + 8);
            KeLeaveCriticalRegion();
            wide_text_3 = NULL;
            value_9 = ((uint64_t)WdLoadField(&value_9, 6, 2) & 0xffffULL) << 48 | (uint64_t)2 & 0xffffffffffffULL;
            value = process_id_2;
            ExNotifyCallback(*(uint64_t *)(MpData + 0x9b8), &value, 0);
            if (!process_context_2)
            {
                return;
            }
            if (!(*(uint32_t *)(process_context_2 + 0x34) & 8))
            {
                process_id_3 = ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)input_2 & 0xffffffffULL | 2;
                status = MpSendProcessMessage(0, process, file_object, process_id_2, process_id_3, 0, NULL, NULL, process_context_2, NULL, NULL);
                value_7 = (uint32_t)(process_id_3 >> 0x20);
                if (status <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    current_thread = 0x1c;
                    goto block_6;
                }
            }
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1b, WD_SYMBOL_ADDRESS(WPP_81ce4eda48113c4f6bf3f9fecccebfe2_Traceguids), process_id_2 & 0xffffffff);
        }
    }

    block_8:
    if (process_context_2)
    {
        MpReleaseProcessContext(process_context_2);
    }

    return;
}

uint64_t MpGetImageNormalizedName(int64_t input, uint64_t input_2, uint64_t file_name)
{
    uint32_t status;
    uint64_t value;
    uint64_t value_2;
    int64_t file_object;
    int64_t value_3 = 0;
    int64_t value_4 = 0;
    if (input)
    {
        file_object = input;
        value_4 = input;
        block_1:
        status = FltGetFileNameInformationUnsafe(file_object, 0, 0x101, file_name);

        value = status;
        if (0 <= (int32_t)status || WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            goto block_2;
        }
        value_2 = 0x30;
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_81ce4eda48113c4f6bf3f9fecccebfe2_Traceguids), (uint64_t)KeGetCurrentThread(), (int32_t)value);
    }
    else
    {
        status = MpGetProcessFileObject(input_2, &value_4, &value_3);
        value = status;
        if (0 <= (int32_t)status)
        {
            file_object = value_4;
            goto block_1;
        }
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            value_2 = 0x2f;
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_81ce4eda48113c4f6bf3f9fecccebfe2_Traceguids), (uint64_t)KeGetCurrentThread(), (int32_t)value);
        }
    }
    file_object = value_4;
    block_2:
    if (value_3)
    {
        FltClose();
    }

    if (file_object != input && file_object)
    {
        ObfDereferenceObject(file_object);
        file_object = ObTotalReferences;
        WdUnresolvedAtomicBegin();
        ObTotalReferences -= 1;
        WdUnresolvedAtomicEnd();
        if (file_object + -1 <= -1 && *(int32_t *)(MpData + 0x364) <= -1)
        {
            if (!KdRefreshDebuggerNotPresent())
            {
                value = (*(WD_ROUTINE)swi(3))();
                return value;
            }
            KeBugCheck(1);
        }
    }
    return value;
}

uint64_t MpCreatePsThreadSyncMonitorData(int64_t input, void *input_2, int64_t input_3, int64_t input_4, uint32_t *input_5)
{
    uint64_t value;
    uint32_t *data_pointer;
    uint64_t value_2;
    data_pointer = input_5;
    if (input && input_2 && input_3 && (input_4 && input_5))
    {
        value_2 = 0;
        if (0 <= (int32_t)MpGetThreadCreateTimeById(input_4, &value_2))
        {
            *data_pointer = (int32_t)input_4;
            *(uint64_t *)(&data_pointer[1]) = MpFileTimeFromUlong64(value_2);
        }
        if (&data_pointer[3])
        {
            value_2 = 0;
            if (0 <= (int32_t)MpGetThreadCreateTimeById(input_3, &value_2))
            {
                data_pointer[3] = (int32_t)input_3;
                *(uint64_t *)(&data_pointer[4]) = MpFileTimeFromUlong64(value_2);
            }
        }
        data_pointer[6] = ((uint32_t *)input_2)[6];
        value = ((uint64_t *)input_2)[4];
        *(uint64_t *)(&data_pointer[7]) = MpFileTimeFromUlong64(value);
        *(uint64_t *)(&data_pointer[10]) = 0;
        MpGetThreadWin32StartAddressById(input_4, &data_pointer[0xc]);
        return 0;
    }
    return WD_STATUS_INVALID_PARAMETER;
}

int32_t MpSendTrustedProcessMessage(char trace_argument_1, WD_LAYOUT_10 *input)
{
    int64_t value;
    int32_t value_2;
    uint64_t value_3;
    int64_t values[2];
    uint64_t value_4;
    uint32_t value_5;
    value_5 = (uint32_t)((uint64_t)value_4 >> 0x20);
    value_3 = 0;
    values[0] = 0;
    if (!(*(uint32_t *)(MpData + 0x364) & 2))
    {
        value_2 = 0;
        return value_2;
    }
    if (input)
    {
        value_3 = input->field_0x0;
    }
    value_2 = MpAsyncCreateNotification(values, (int32_t)value_3 + 0x20);
    value = values[0];
    if (0 <= value_2)
    {
        *(char *)(values[0] + 0x18) = trace_argument_1;
        if ((int32_t)value_3)
        {
            memcpy_s((int64_t *)(values[0] + 0x1a), (char *)(value_3 + 2), input->field_0x8, value_3);
            *(uint16_t *)(value + 0x1a + (value_3 & 0xfffffffffffffffe)) = 0;
        }
        else
        {
            *(uint16_t *)(values[0] + 0x1a) = 0;
        }
        value_5 = 0;
        *(uint32_t *)(value + 8) = 0x20;
        *(uint32_t *)(value + 0x10) = 0xd;
        value_2 = MpAsyncSendNotification(value, 0x20, 1, 1, NULL);
        if (0 <= value_2)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x42, WD_SYMBOL_ADDRESS(WPP_81ce4eda48113c4f6bf3f9fecccebfe2_Traceguids), (uint8_t)trace_argument_1);
            }
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x41, WD_SYMBOL_ADDRESS(WPP_81ce4eda48113c4f6bf3f9fecccebfe2_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)value_2 & 0xffffffffULL);
        }
        MpAsyncDereferenceNotification(value);
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x40, WD_SYMBOL_ADDRESS(WPP_81ce4eda48113c4f6bf3f9fecccebfe2_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)value_2 & 0xffffffffULL);
    }
    return value_2;
}

void MpGetProcessFileObject(uint64_t input, int64_t *input_2, int64_t *input_3)
{
    int32_t value;
    uint64_t value_2;
    uint64_t value_3;
    int64_t value_5;
    int64_t values[4];
    int64_t value_6;
    uint64_t value_7;
    uint64_t value_8;
    uint64_t value_9;
    values[2] = 0;
    values[0] = 0;
    value_6 = 0;
    values[1] = 0x30;
    value_8 = 0x240;
    value_7 = 0;
    value_3 = 0;
    value_9 = 0;
    value_2 = 0;
    values[3] = input;
    value = MpFltCreateFileEx(*(uint64_t *)(MpData + 0x10), 0, &value_6, values, 0x80100000, &values[1], &value_7);
    if (0 <= value)
    {
        value_5 = 0;
        *input_2 = values[0];
        *input_3 = value_6;
        values[0] = 0;
        value_6 = 0;
    }
    else
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2e, WD_SYMBOL_ADDRESS(WPP_81ce4eda48113c4f6bf3f9fecccebfe2_Traceguids), (uint64_t)KeGetCurrentThread(), value);
        }
        value_5 = value_6;
    }
    if (value_5)
    {
        FltClose();
    }
    if (values[0])
    {
        ObfDereferenceObject();
        value_5 = ObTotalReferences;
        WdUnresolvedAtomicBegin();
        ObTotalReferences -= 1;
        WdUnresolvedAtomicEnd();
        if (value_5 + -1 <= -1 && *(int32_t *)(MpData + 0x364) <= -1)
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

void MpCreateProcessNotifyRoutine(int64_t process_id, uint64_t process_id_2, char input, uint64_t current_thread)
{
    int32_t value;
    int64_t trace_argument_1;
    uint64_t value_2;
    int64_t string = 0;
    int64_t file_name = 0;
    int64_t process = 0;
    if (input)
    {
        value = MpGetProcessName(process_id_2, &string);
        if (0 <= value)
        {
            value = MpGetImageNormalizedName(0, string, &file_name);
            if (0 <= value || WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                goto block_1;
            }
            value_2 = 0x10;
        }
        else
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                goto block_1;
            }
            value_2 = 0x11;
        }
        current_thread = (uint64_t)KeGetCurrentThread();
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_81ce4eda48113c4f6bf3f9fecccebfe2_Traceguids), current_thread, value);
    }
    block_1:
    value = PsLookupProcessByProcessId(process_id_2, &process);

    if (0 <= value)
    {
        WdUnresolvedAtomicBegin();
        ObTotalReferences += 1;
        WdUnresolvedAtomicEnd();
        if (file_name)
        {
            trace_argument_1 = file_name + 8;
        }
        else
        {
            trace_argument_1 = string;
        }
        MpHandleProcessNotification(process, process_id, process_id_2, (uint64_t)current_thread & 0xffffffffffffff00 | (uint64_t)input & 0xff, 0, 0, trace_argument_1, NULL, NULL);
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x12, WD_SYMBOL_ADDRESS(WPP_81ce4eda48113c4f6bf3f9fecccebfe2_Traceguids), (uint64_t)KeGetCurrentThread(), value);
    }
    if (process)
    {
        ObfDereferenceObject();
        trace_argument_1 = ObTotalReferences;
        WdUnresolvedAtomicBegin();
        ObTotalReferences -= 1;
        WdUnresolvedAtomicEnd();
        if (trace_argument_1 + -1 <= -1 && *(int32_t *)(MpData + 0x364) <= -1)
        {
            if (!KdRefreshDebuggerNotPresent())
            {
                (*(WD_ROUTINE)swi(3))();
                return;
            }
            KeBugCheck(1);
        }
    }
    if (string)
    {
        MpFreeString(string);
    }
    if (file_name)
    {
        FltReleaseFileNameInformation();
    }
    return;
}

void MpLoadImageNotifyRoutine(uint16_t *source_string, int64_t process_id, uint32_t *input, uint16_t *trace_argument_1)
{
    int32_t *data_pointer;
    uint64_t trace_handle;
    uint32_t *allocation;
    int64_t value;
    int64_t value_2;
    uint32_t value_3;
    uint32_t *data_pointer_2;
    uint16_t *trace_argument_1_2;
    uint64_t *process;
    int64_t value_4;
    int64_t file_object;
    uint32_t values[2];
    uint64_t value_5;
    int64_t stream_context;
    uint64_t value_6;
    int64_t value_7 = 0;
    uint64_t value_8;
    int64_t file_object_2;
    uint64_t value_9;
    uint64_t value_10;
    uint32_t values_2[2];
    bool enabled;
    uint64_t value_11;
    uint32_t value_12 = 0;
    bool enabled_2;
    int64_t value_13;
    bool enabled_3;
    uint64_t *data_pointer_3;
    uint64_t value_14;
    uint64_t *data_pointer_4;
    uint64_t *data_pointer_5;
    uint64_t *data_pointer_6;
    bool enabled_4;
    uint32_t *data_pointer_7;
    uint32_t *data_pointer_8;
    int32_t value_15 = 0x80;
    int64_t value_16;
    uint64_t value_17;
    uint64_t *allocation_2;
    uint32_t value_18;
    uint64_t value_19;
    uint64_t value_20;
    uint64_t value_21;
    uint64_t *process_context;
    uint64_t value_22;
    uint32_t value_23;
    uint64_t value_24;
    uint64_t value_25;
    uint64_t value_26;
    uint64_t value_27;
    uint32_t value_28;
    uint64_t value_29;
    uint64_t value_30;
    uint64_t value_31;
    char byte_value;
    uint64_t value_32;
    uint64_t value_33;
    uint64_t value_34;
    uint64_t value_35;
    uint64_t value_36;
    uint64_t value_37;
    uint64_t value_38;
    uint64_t value_39;
    uint64_t value_40;
    uint64_t value_41;
    int32_t status;
    uint32_t value_43;
    uint64_t **data_pointer_9;
    values_2[0] = 0;
    value_18 = 0;
    value_10 &= 0xffffffff00000000;
    process = NULL;
    stream_context = 0;
    file_object_2 = process_id;
    if (!source_string)
    {
        return;
    }
    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
    {
        trace_argument_1 = source_string;
        WPP_SF_Z(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1d, WD_SYMBOL_ADDRESS(WPP_81ce4eda48113c4f6bf3f9fecccebfe2_Traceguids), source_string);
    }
    enabled_2 = 0;
    status = MpGetProcessContextById(process_id, &process);
    process_context = process;
    if (0 <= status)
    {
        enabled_2 = (bool)((uint8_t)((uint32_t)(*(uint32_t *)(&process[7])) >> 0x1b) & 1);
        WdUnresolvedAtomicBegin();
        if (!process[0x1f])
        {
            process[0x1f] = *(int64_t *)(&input[2]);
        }
        WdUnresolvedAtomicEnd();
        byte_value = MpDlpIsEnabled(0, process);
        if (byte_value && ((int32_t *)process_context)[0x39] != 2)
        {
            data_pointer_2 = &WdDlpStorage8;
            do
            {
                if (*(uint32_t *)(MpData + 0x360) & data_pointer_2[-1] && (!(*(int16_t *)(&data_pointer_2[-5])) || MpSuffixUnicodeString((WD_UNICODE_STRING_POINTER_VIEW *)((int32_t)value_12 * 0x20LL + WD_DLP_UNRECOVERED_ADDRESS7), source_string)) && (!(*data_pointer_2) || *data_pointer_2 & *(uint32_t *)(MpDlpData + 0x28)))
                {
                    ((uint32_t *)process_context)[0x39] = *(uint32_t *)((int32_t)value_12 * 0x20LL + WD_DLP_UNRECOVERED_ADDRESS8);
                    break;
                }
                value_12 += 1;
                data_pointer_2 = &data_pointer_2[8];
            }
            while (value_12 < 4);
        }
        if (*(uint32_t *)(&process_context[7]) & 0x8000 && (MpSuffixUnicodeString(&s_MicrosoftUevAppAgentModule, source_string) || MpSuffixUnicodeString(&s_MicrosoftUevAppAgentModuleX86, source_string)))
        {
            *(uint32_t *)(&process_context[0x24]) = *(uint32_t *)(&process_context[0x24]) | 2;
        }
        if ((!(((uint32_t *)process_context)[0xd] & 8) || !(*(uint32_t *)(&process_context[7]) & 0x4000)) && (!(((uint32_t *)process_context)[0xd] & 1) || *(uint32_t *)(&process_context[7]) & 0x4000))
        {
            if (*(uint32_t *)(&process_context[7]) & 0x800 && *(int64_t *)(MpData + 0x140))
            {
                if (MpSuffixUnicodeString(&Wow64cpuModulePath, source_string))
                {
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                    {
                        trace_argument_1 = *(uint16_t **)(&input[2]);
                        WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1e, WD_SYMBOL_ADDRESS(WPP_81ce4eda48113c4f6bf3f9fecccebfe2_Traceguids), trace_argument_1);
                    }
                    *(uint32_t *)((int64_t)process_context + 0x34) = *(uint32_t *)((int64_t)process_context + 0x34) | 0x200;
                    process_context[0xe] = *(uint64_t *)(&input[2]);
                }
                else if (((uint32_t *)process_context)[0xd] >> 9 & 1)
                {
                    value_4 = 0;
                    ((uint32_t *)process_context)[0xd] = ((uint32_t *)process_context)[0xd] & 0xfffffdff;
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                    {
                        trace_argument_1 = (uint16_t *)process_context[0xe];
                        WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1f, WD_SYMBOL_ADDRESS(WPP_81ce4eda48113c4f6bf3f9fecccebfe2_Traceguids), trace_argument_1);
                    }
                    status = MpAsyncCreateNotification(&value_4, 0x28);
                    file_object = value_4;
                    if (0 <= status)
                    {
                        value_5 = 0;
                        value_29 = 0;
                        values[0] = 0x70;
                        value_30 = 0;
                        value_31 = 0;
                        value_32 = 0;
                        value_33 = 0;
                        value_34 = 0;
                        value_35 = 0;
                        value_36 = 0;
                        value_37 = 0;
                        value_38 = 0;
                        value_39 = 0;
                        value_40 = 0;
                        value_41 = 0;
                        process = (uint64_t *)(*(uint32_t *)(MpData + 0x980) * -10000ULL);
                        *(uint32_t *)(value_4 + 8) = 0x80;
                        *(uint32_t *)(value_4 + 0x10) = 0xf;
                        *(uint32_t *)(value_4 + 0x18) = *(uint32_t *)(&process_context[3]);
                        *(uint32_t *)(file_object + 0x1c) = PsGetCurrentThreadId();
                        trace_argument_1 = NULL;
                        *(uint64_t *)(file_object + 0x20) = process_context[0xe];
                        data_pointer_9 = &process;
                        if (!process)
                        {
                            data_pointer_9 = NULL;
                        }
                        data_pointer_3 = &value_5;
                        value_12 = FltSendMessage(*(uint64_t *)(MpData + 0x10), MpData + 0x140, file_object + -0x18, 0x40, data_pointer_3, values, data_pointer_9);
                        if (0 <= (int32_t)value_12)
                        {
                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                            {
                                trace_argument_1 = (uint16_t *)((uint64_t)value_12);
                                data_pointer_3 = process;
                                WPP_SF_Di(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x21, WD_SYMBOL_ADDRESS(WPP_81ce4eda48113c4f6bf3f9fecccebfe2_Traceguids), trace_argument_1, process);
                            }
                            if (value_12 == 0x102 && *(char *)(MpData + 0xfb8))
                            {
                                WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0x26c)), 1);
                                if (WdDataStorage4 < *(uint32_t *)(MpData + 0x26c))
                                {
                                    trace_argument_1 = (uint16_t *)((uint64_t)((uint64_t)trace_argument_1) & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
                                    data_pointer_3 = (uint64_t *)((uint64_t)data_pointer_3 & 0xffffffff00000000);
                                    MpSendAsyncPanicModeMessage(1, NULL, (uint8_t)(*(char *)(MpData + 0xd0)), trace_argument_1, data_pointer_3);
                                }
                            }
                        }
                        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            trace_argument_1 = (uint16_t *)((uint64_t)value_12);
                            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x20, WD_SYMBOL_ADDRESS(WPP_81ce4eda48113c4f6bf3f9fecccebfe2_Traceguids), trace_argument_1);
                        }
                        WdUnresolvedAtomicBegin();
                        data_pointer = (int32_t *)(file_object + 0xc);
                        status = *data_pointer;
                        *data_pointer = *data_pointer + -1;
                        WdUnresolvedAtomicEnd();
                        if (status == 1)
                        {
                            ExFreePoolWithTag(file_object + -0x18, 0x6d61504d);
                        }
                    }
                }
            }
            process_id = file_object_2;
            goto block_13;
        }
    }
    else
    {
        block_13:
        if (*(uint32_t *)(MpData + 0x364) & 2 && (*(int64_t *)(MpData + 0x1a0) || *(int64_t *)(MpData + 0x1b0)))
        {
            if (*(int64_t *)(&source_string[4]) && *source_string)
            {
                value_15 = *source_string + 0x82;
                values_2[0] = 0x80;
            }
            enabled_3 = 0;
            value_6 = 0;
            value_17 = 0;
            file_object_2 = 0;
            if (*input & 0x400 && 0x38 <= *(uint64_t *)(&input[-2]))
            {
                file_object = *(int64_t *)(&input[10]);
                file_object_2 = file_object;
                status = MpGetStreamContextFromFileObject(file_object, &stream_context);
                if (0 <= status)
                {
                    data_pointer = (int32_t *)(stream_context + 0x20);
                    if (data_pointer && *(int64_t *)(stream_context + 8))
                    {
                        if (*data_pointer != 5 || *(uint32_t *)(MpData + 0x364) >> 0xf & 1)
                        {
                            if (*(int32_t *)(stream_context + 0x24) != *(int32_t *)(*(int64_t *)(stream_context + 8) + 0x90))
                            {
                                goto block_1;
                            }
                            value_10 = ((uint64_t)WdLoadField(&value_10, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)(*data_pointer) & 0xffffffffULL;
                        }
                        else
                        {
                            value_10 = ((uint64_t)WdLoadField(&value_10, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)5 & 0xffffffffULL;
                        }
                    }
                    else
                    {
                        block_1:
                        value_10 = (uint64_t)WdLoadField(&value_10, 4, 4) << 0x20;
                    }
                    value_12 = *(uint32_t *)(stream_context + 0x30) & 0x8000;
                    if (value_12 || enabled_2)
                    {
                        enabled_3 = value_12 != 0;
                        MpGetPriorityInfo(0, file_object, &value_6);
                    }
                    goto block_4;
                }
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                {
                    trace_argument_1 = *(uint16_t **)(value_13 + 0x188);
                    data_pointer_3 = (uint64_t *)((uint64_t)((uint64_t)data_pointer_3) & 0xffffffff00000000 | (uint64_t)status & 0xffffffff);
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x22, WD_SYMBOL_ADDRESS(WPP_81ce4eda48113c4f6bf3f9fecccebfe2_Traceguids), trace_argument_1, data_pointer_3);
                }
                block_3:
                if (process_context && *(uint32_t *)(&process_context[7]) & 0x200)
                {
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                    {
                        trace_argument_1 = source_string;
                        WPP_SF_Z(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x24, WD_SYMBOL_ADDRESS(WPP_81ce4eda48113c4f6bf3f9fecccebfe2_Traceguids), source_string);
                    }
                    enabled = 0;
                    enabled_4 = 0;
                }
                else
                {
                    block_2:
                    enabled_4 = 1;

                    enabled = 1;
                }
            }
            else
            {
                block_4:
                if ((int32_t)value_10 != 2)
                {
                    goto block_3;
                }

                if (!process_context || !(*(uint32_t *)(&process_context[7]) & 0x100))
                {
                    goto block_2;
                }
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                {
                    trace_argument_1 = source_string;
                    WPP_SF_Z(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x23, WD_SYMBOL_ADDRESS(WPP_81ce4eda48113c4f6bf3f9fecccebfe2_Traceguids), source_string);
                }
                enabled = 0;
                enabled_4 = 0;
            }
            if (enabled_3 || enabled_2 || enabled)
            {
                status = MpAsyncCreateNotification(&value_7, value_15);
                value_12 = values_2[0];
                file_object = value_7;
                if (0 <= status)
                {
                    if (*source_string)
                    {
                        memmove((uint64_t *)(value_7 + (uint64_t)values_2[0]), *(uint64_t **)(&source_string[4]), *source_string);
                        *(uint16_t *)(file_object + (*source_string + 0x80ULL & 0xfffffffffffffffe)) = 0;
                    }
                    *(uint32_t *)(file_object + 0x3c) = *source_string + 2;
                    *(uint32_t *)(file_object + 0x40) = value_12;
                    trace_handle = 0;
                    *(int32_t *)(file_object + 0x24) = (int32_t)process_id;
                    if (process_id)
                    {
                        process = NULL;
                        if (0 <= (int32_t)PsLookupProcessByProcessId(process_id, &process))
                        {
                            trace_handle = PsGetProcessCreateTimeQuadPart(process);
                            ObfDereferenceObject(process);
                        }
                    }
                    *(uint64_t *)(file_object + 0x28) = MpFileTimeFromUlong64(trace_handle);
                    *(int32_t *)(file_object + 8) = value_15;
                    *(uint32_t *)(file_object + 0x10) = 3;
                    status = MpQuerySessionId();
                    if (status <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        trace_argument_1 = *(uint16_t **)(value_13 + 0x188);
                        data_pointer_3 = (uint64_t *)((uint64_t)((uint64_t)data_pointer_3) & 0xffffffff00000000 | (uint64_t)status & 0xffffffff);
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x25, WD_SYMBOL_ADDRESS(WPP_81ce4eda48113c4f6bf3f9fecccebfe2_Traceguids), trace_argument_1, data_pointer_3);
                    }
                    value_2 = 0;
                    *(uint32_t *)(file_object + 0x44) = value_18;
                    *(uint16_t *)(file_object + 0x30) = 0;
                    *(uint32_t *)(file_object + 0x18) = 0;
                    *(uint64_t *)(file_object + 0x1c) = MpFileTimeFromUlong64(0);
                    value_3 = (uint32_t)value_2;
                    if (process_context)
                    {
                        value_43 = *(uint32_t *)(&process_context[0x1e]);
                    }
                    else
                    {
                        value_43 = value_3;
                    }
                    *(uint32_t *)(file_object + 0x74) = value_43;
                    if (process_context)
                    {
                        value_43 = *(uint32_t *)(&process_context[7]);
                    }
                    else
                    {
                        value_43 = value_3;
                    }
                    *(uint32_t *)(file_object + 0x78) = value_43;
                    if (process_context)
                    {
                        value_3 = ((uint32_t *)process_context)[0xf];
                    }
                    *(uint32_t *)(file_object + 0x7c) = value_3;
                    if ((enabled_3 || enabled_2) && (uint16_t)value_2 != *source_string && *(int64_t *)(&source_string[4]) != value_2)
                    {
                        value_7 = *(int64_t *)(file_object + 0x28);
                        value_3 = *(uint32_t *)(file_object + 0x24);
                        value_8 = 0;
                        allocation_2 = NULL;
                        status = MpNormalizeNameUnsafe(file_object_2, source_string, &value_8);
                        value_43 = (uint32_t)((uint64_t)data_pointer_3 >> 0x20);
                        if (0 <= status)
                        {
                            if (enabled_2)
                            {
                                data_pointer_2 = (uint32_t *)(&process_context[7]);
                                if (!(*(int32_t *)(MpData + 0xe1c)))
                                {
                                    goto block_10;
                                }
                                if (data_pointer_2)
                                {
                                    value_16 = MpData + 0x140;
                                    if (!value_16)
                                    {
                                        block_5:
                                        value_16 = MpData + 0x140;

                                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                        {
                                            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x10, WD_SYMBOL_ADDRESS(WPP_08fcbcbc57df34e6eaa3c5bf09140d00_Traceguids), (uint64_t)KeGetCurrentThread());
                                        }
                                        status = -0x3fffffff;
                                        goto block_12;
                                    }
                                    value_12 = (uint32_t)((uint16_t)value_8);
                                    allocation = (uint32_t *)MpAllocatePoolWithTag(1, value_12 + 0x3a, 0x6d73504d);
                                    value_43 = (uint32_t)((uint64_t)data_pointer_3 >> 0x20);
                                    if (!allocation)
                                    {
                                        status = -0x3fffff66;
                                        goto block_12;
                                    }
                                    allocation[1] = value_12 + 0x3a;
                                    data_pointer = &allocation[0xc];
                                    *allocation = 0x300a3;
                                    allocation[6] = 5;
                                    allocation[2] = (uint32_t)value_6;
                                    allocation[3] = WdLoadField(&value_6, 4, 4);
                                    allocation[4] = (uint32_t)value_17;
                                    allocation[5] = WdLoadField(&value_17, 4, 4);
                                    allocation[7] = value_3;
                                    *(int64_t *)(&allocation[8]) = value_7;
                                    allocation[10] = value_12 + 10;
                                    if (data_pointer && 8 <= value_12 + 10)
                                    {
                                        *data_pointer = (uint16_t)value_8 + 2;
                                        trace_argument_1_2 = (uint16_t *)(value_8 & 0xffff);
                                        trace_argument_1 = trace_argument_1_2;
                                        status = memcpy_s(&allocation[0xe], value_12 + 2, allocation_2, trace_argument_1_2);
                                        if (!status)
                                        {
                                            *(uint16_t *)((int64_t)(&trace_argument_1_2[4]) + (int64_t)data_pointer) = 0;
                                        }
                                    }
                                    file_object_2 = *(int64_t *)(MpData + 0xe20);
                                    if (*(int64_t *)(MpData + 0xe20))
                                    {
                                        file_object_2 = -file_object_2;
                                    }
                                    WdUnresolvedAtomicBegin();
                                    enabled_2 = *(int32_t *)(MpData + 0x1bc) == 0;
                                    if (enabled_2)
                                    {
                                        *(int32_t *)(MpData + 0x1bc) = 0;
                                    }
                                    WdUnresolvedAtomicEnd();
                                    if (enabled_2)
                                    {
                                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                        {
                                            WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xb, WD_SYMBOL_ADDRESS(WPP_08fcbcbc57df34e6eaa3c5bf09140d00_Traceguids));
                                        }
                                        status = -0x3fffffff;
                                        block_6:
                                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                        {
                                            trace_argument_1 = *(uint16_t **)(value_13 + 0x188);
                                            data_pointer_3 = (uint64_t *)((uint64_t)((uint64_t)data_pointer_3) & 0xffffffff00000000 | (uint64_t)status & 0xffffffff);
                                            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x11, WD_SYMBOL_ADDRESS(WPP_08fcbcbc57df34e6eaa3c5bf09140d00_Traceguids), trace_argument_1, data_pointer_3);
                                        }

                                        WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0xda0)), 1);
                                        WdAtomicExchange32((volatile int32_t *)((uint32_t *)(MpData + 0xdc4)), WD_STATUS_INSUFFICIENT_RESOURCES);
                                        ExFreePoolWithTag(allocation, 0x6d73504d);
                                        value_43 = (uint32_t)((uint64_t)data_pointer_3 >> 0x20);
                                        if (status == -0x3fffff4b && *(char *)(MpData + 0xfb8))
                                        {
                                            WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0x268)), 1);
                                            if (WdDataStorage4 < *(uint32_t *)(MpData + 0x268))
                                            {
                                                value_14 = (uint64_t)data_pointer_3 & 0xffffffff00000000;
                                                MpSendAsyncPanicModeMessage(4, NULL, (uint8_t)(*(char *)(MpData + 0xd0)), (uint64_t)((uint64_t)trace_argument_1) & 0xffffffffffffff00 | (uint64_t)1 & 0xff, value_14);
                                                value_43 = (uint32_t)(value_14 >> 0x20);
                                            }
                                        }
                                        goto block_12;
                                    }
                                    value_12 = FltCancellableWaitForSingleObject(MpData + 0x200, &file_object_2, 0);
                                    trace_argument_1_2 = (uint16_t *)((uint64_t)value_12);
                                    if (value_12 == 0x102)
                                    {
                                        trace_argument_1_2 = (uint16_t *)0xc00000b5;
                                        block_7:
                                        status = (int32_t)trace_argument_1_2;

                                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                        {
                                            value_2 = file_object_2 + WdSignedMultiplyHigh(-0x29406b2a1a85bd43, file_object_2);
                                            data_pointer_3 = (uint64_t *)((value_2 >> 0x17) - (value_2 >> 0x3f));
                                            WPP_SF_Di(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xc, WD_SYMBOL_ADDRESS(WPP_08fcbcbc57df34e6eaa3c5bf09140d00_Traceguids), trace_argument_1_2, data_pointer_3);
                                            trace_argument_1 = trace_argument_1_2;
                                        }
                                        goto block_6;
                                    }
                                    if (value_12)
                                    {
                                        goto block_7;
                                    }
                                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                                    {
                                        trace_handle = *(uint64_t *)(WPP_GLOBAL_Control + 0x18);
                                        value_2 = MpData + 0x200;
                                        WPP_SF_D(trace_handle, 0xd, WD_SYMBOL_ADDRESS(WPP_08fcbcbc57df34e6eaa3c5bf09140d00_Traceguids), KeReadStateSemaphore(value_2));
                                    }
                                    process = NULL;
                                    values[0] = 0x2c;
                                    value_22 = 0;
                                    value_9 = 0;
                                    value_19 = 0;
                                    value_23 = 0;
                                    value_20 = 0;
                                    value_21 = 0;
                                    value_2 = KeQueryPerformanceCounter(&process);
                                    data_pointer_7 = values;
                                    data_pointer_4 = &value_9;
                                    status = FltSendMessage(*(uint64_t *)(MpData + 0x10), value_16, allocation, allocation[1], data_pointer_4, data_pointer_7, &file_object_2);
                                    value_43 = (uint32_t)((uint64_t)data_pointer_4 >> 0x20);
                                    value_3 = (uint32_t)((uint64_t)data_pointer_7 >> 0x20);
                                    if (process)
                                    {
                                        value = KeQueryPerformanceCounter(0);
                                        if (*(int32_t *)(MpData + 0xd30) <= -1)
                                        {
                                            WdAtomicExchange64((volatile int64_t *)((uint64_t *)(MpData + 0xd28)), 0);
                                            WdAtomicExchange32((volatile int32_t *)((uint32_t *)(MpData + 0xd30)), 0);
                                        }
                                        WdAtomicAdd64((volatile int64_t *)((int64_t *)(MpData + 0xd28)), (value - value_2) * 1000 / (int64_t)process);
                                        WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0xd30)), 1);
                                    }
                                    if (status == 0x102)
                                    {
                                        status = -0x3fffff4b;
                                    }
                                    KeReleaseSemaphore(MpData + 0x200, 0, 1, 0);
                                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                                    {
                                        trace_handle = *(uint64_t *)(WPP_GLOBAL_Control + 0x18);
                                        value_2 = MpData + 0x200;
                                        WPP_SF_D(trace_handle, 0xe, WD_SYMBOL_ADDRESS(WPP_08fcbcbc57df34e6eaa3c5bf09140d00_Traceguids), KeReadStateSemaphore(value_2));
                                    }
                                    ExFreePoolWithTag(allocation, 0x6d73504d);
                                    if (status)
                                    {
                                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                        {
                                            WPP_SF_qDi(*(uint64_t *)(WPP_GLOBAL_Control + 0x18));
                                        }
                                        if (status != -0x3fffff4b)
                                        {
                                            WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0xda0)), 1);
                                            WdUnresolvedAtomicBegin();
                                            *(int32_t *)(MpData + 0xdc4) = status;
                                            WdUnresolvedAtomicEnd();
                                        }
                                        else
                                        {
                                            WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0xde8)), 1);
                                        }
                                        goto block_12;
                                    }
                                    if ((int32_t)value_19 != 5)
                                    {
                                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                        {
                                            trace_handle = ((uint64_t)value_43 & 0xffffffffULL) << 32 | (uint64_t)((int32_t)value_19) & 0xffffffffULL;
                                            WPP_SF_qDL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x13, WD_SYMBOL_ADDRESS(WPP_08fcbcbc57df34e6eaa3c5bf09140d00_Traceguids), (uint64_t)KeGetCurrentThread(), trace_handle, ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)5 & 0xffffffffULL);
                                            value_43 = (uint32_t)((uint64_t)trace_handle >> 0x20);
                                        }
                                        WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0xe0c)), 1);
                                        status = -0x3ffffbdc;
                                        goto block_12;
                                    }
                                    WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0xd7c)), 1);
                                    value_14 = value_19;
                                    if (value_19 & 0x200000000)
                                    {
                                        switch (WD_PROCESSROUTINES_UNRECOVERED_ADDRESS)
                                        {
                                            case WD_PROCESSROUTINES_BRANCH_TARGET:
                                                WdUnresolvedAtomicBegin();
                                                *data_pointer_2 = *data_pointer_2 & 0xf7ffffff;
                                                WdUnresolvedAtomicEnd();
                                        }
                                    }
                                    block_8:
                                    if (value_14 & 0x100000000)
                                    {
                                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                                        {
                                            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x14, WD_SYMBOL_ADDRESS(WPP_08fcbcbc57df34e6eaa3c5bf09140d00_Traceguids), (uint64_t)KeGetCurrentThread());
                                            status = 0;
                                            goto block_12;
                                        }
                                    }

                                    goto block_11;
                                }
                                block_9:
                                status = -0x3ffffff3;
                            }
                            else
                            {
                                data_pointer_2 = (uint32_t *)(stream_context + 0x30);
                                if (*(int32_t *)(MpData + 0xe1c))
                                {
                                    if (!data_pointer_2)
                                    {
                                        goto block_9;
                                    }
                                    value_16 = MpData + 0x140;
                                    if (!value_16)
                                    {
                                        goto block_5;
                                    }
                                    value_12 = (uint32_t)((uint16_t)value_8);
                                    allocation = (uint32_t *)MpAllocatePoolWithTag(1, value_12 + 0x3a, 0x6d73504d);
                                    value_43 = (uint32_t)((uint64_t)data_pointer_3 >> 0x20);
                                    if (allocation)
                                    {
                                        allocation[1] = value_12 + 0x3a;
                                        *allocation = 0x300a3;
                                        allocation[6] = 1;
                                        allocation[2] = (uint32_t)value_6;
                                        allocation[3] = WdLoadField(&value_6, 4, 4);
                                        allocation[4] = (uint32_t)value_17;
                                        allocation[5] = WdLoadField(&value_17, 4, 4);
                                        allocation[7] = value_3;
                                        *(int64_t *)(&allocation[8]) = value_7;
                                        allocation[10] = value_12 + 10;
                                        if (&allocation[0xc] && 8 <= value_12 + 10)
                                        {
                                            allocation[0xc] = (uint16_t)value_8 + 2;
                                            trace_argument_1_2 = (uint16_t *)(value_8 & 0xffff);
                                            trace_argument_1 = trace_argument_1_2;
                                            status = memcpy_s(&allocation[0xe], value_12 + 2, allocation_2, trace_argument_1_2);
                                            if (!status)
                                            {
                                                *(uint16_t *)((int64_t)(&allocation[0xe]) + (int64_t)trace_argument_1_2) = 0;
                                            }
                                        }
                                        value_4 = *(int64_t *)(MpData + 0xe20);
                                        if (*(int64_t *)(MpData + 0xe20))
                                        {
                                            value_4 = -value_4;
                                        }
                                        WdUnresolvedAtomicBegin();
                                        enabled_2 = *(int32_t *)(MpData + 0x1bc) == 0;
                                        if (enabled_2)
                                        {
                                            *(int32_t *)(MpData + 0x1bc) = 0;
                                        }
                                        WdUnresolvedAtomicEnd();
                                        if (enabled_2)
                                        {
                                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                            {
                                                WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xb, WD_SYMBOL_ADDRESS(WPP_08fcbcbc57df34e6eaa3c5bf09140d00_Traceguids));
                                            }
                                            status = -0x3fffffff;
                                        }
                                        else
                                        {
                                            value_12 = FltCancellableWaitForSingleObject(MpData + 0x200, &value_4, 0);
                                            trace_argument_1_2 = (uint16_t *)((uint64_t)value_12);
                                            if (value_12 != 0x102)
                                            {
                                                if (!value_12)
                                                {
                                                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                                                    {
                                                        trace_handle = *(uint64_t *)(WPP_GLOBAL_Control + 0x18);
                                                        value_2 = MpData + 0x200;
                                                        WPP_SF_D(trace_handle, 0xd, WD_SYMBOL_ADDRESS(WPP_08fcbcbc57df34e6eaa3c5bf09140d00_Traceguids), KeReadStateSemaphore(value_2));
                                                    }
                                                    value_10 = 0;
                                                    values_2[0] = 0x2c;
                                                    value_27 = 0;
                                                    value_11 = 0;
                                                    value_24 = 0;
                                                    value_28 = 0;
                                                    value_25 = 0;
                                                    value_26 = 0;
                                                    value_2 = KeQueryPerformanceCounter(&value_10);
                                                    data_pointer_8 = values_2;
                                                    data_pointer_5 = &value_11;
                                                    status = FltSendMessage(*(uint64_t *)(MpData + 0x10), value_16, allocation, allocation[1], data_pointer_5, data_pointer_8, &value_4);
                                                    value_43 = (uint32_t)((uint64_t)data_pointer_5 >> 0x20);
                                                    value_3 = (uint32_t)((uint64_t)data_pointer_8 >> 0x20);
                                                    if (value_10)
                                                    {
                                                        value = KeQueryPerformanceCounter(0);
                                                        if (*(int32_t *)(MpData + 0xcf0) <= -1)
                                                        {
                                                            WdAtomicExchange64((volatile int64_t *)((uint64_t *)(MpData + 0xce8)), 0);
                                                            WdAtomicExchange32((volatile int32_t *)((uint32_t *)(MpData + 0xcf0)), 0);
                                                        }
                                                        WdAtomicAdd64((volatile int64_t *)((int64_t *)(MpData + 0xce8)), (value - value_2) * 1000 / (int64_t)value_10);
                                                        WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0xcf0)), 1);
                                                    }
                                                    if (status == 0x102)
                                                    {
                                                        status = -0x3fffff4b;
                                                    }
                                                    KeReleaseSemaphore(MpData + 0x200, 0, 1, 0);
                                                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                                                    {
                                                        trace_handle = *(uint64_t *)(WPP_GLOBAL_Control + 0x18);
                                                        value_2 = MpData + 0x200;
                                                        WPP_SF_D(trace_handle, 0xe, WD_SYMBOL_ADDRESS(WPP_08fcbcbc57df34e6eaa3c5bf09140d00_Traceguids), KeReadStateSemaphore(value_2));
                                                    }
                                                    ExFreePoolWithTag(allocation, 0x6d73504d);
                                                    if (status)
                                                    {
                                                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                                        {
                                                            WPP_SF_qDi(*(uint64_t *)(WPP_GLOBAL_Control + 0x18));
                                                        }
                                                        if (status != -0x3fffff4b)
                                                        {
                                                            WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0xd90)), 1);
                                                            WdUnresolvedAtomicBegin();
                                                            *(int32_t *)(MpData + 0xdb4) = status;
                                                            WdUnresolvedAtomicEnd();
                                                        }
                                                        else
                                                        {
                                                            WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0xdd8)), 1);
                                                        }
                                                    }
                                                    else
                                                    {
                                                        if ((int32_t)value_24 == 1)
                                                        {
                                                            WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0xd6c)), 1);
                                                            value_14 = value_24;
                                                            if (value_24 & 0x200000000)
                                                            {
                                                                switch (WD_PROCESSROUTINES_UNRECOVERED_ADDRESS2)
                                                                {
                                                                    case WD_PROCESSROUTINES_BRANCH_TARGET2:
                                                                        WdUnresolvedAtomicBegin();
                                                                        *data_pointer_2 = *data_pointer_2 & 0xffff7fff;
                                                                        WdUnresolvedAtomicEnd();
                                                                }
                                                            }
                                                            goto block_8;
                                                        }
                                                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                                        {
                                                            trace_handle = ((uint64_t)value_43 & 0xffffffffULL) << 32 | (uint64_t)((int32_t)value_24) & 0xffffffffULL;
                                                            WPP_SF_qDL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x13, WD_SYMBOL_ADDRESS(WPP_08fcbcbc57df34e6eaa3c5bf09140d00_Traceguids), (uint64_t)KeGetCurrentThread(), trace_handle, ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)1 & 0xffffffffULL);
                                                            value_43 = (uint32_t)((uint64_t)trace_handle >> 0x20);
                                                        }
                                                        WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0xdfc)), 1);
                                                        status = -0x3ffffbdc;
                                                    }
                                                    goto block_12;
                                                }
                                            }
                                            else
                                            {
                                                trace_argument_1_2 = (uint16_t *)0xc00000b5;
                                            }
                                            status = (int32_t)trace_argument_1_2;
                                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                            {
                                                value_2 = value_4 + WdSignedMultiplyHigh(-0x29406b2a1a85bd43, value_4);
                                                data_pointer_3 = (uint64_t *)((value_2 >> 0x17) - (value_2 >> 0x3f));
                                                WPP_SF_Di(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xc, WD_SYMBOL_ADDRESS(WPP_08fcbcbc57df34e6eaa3c5bf09140d00_Traceguids), trace_argument_1_2, data_pointer_3);
                                                trace_argument_1 = trace_argument_1_2;
                                            }
                                        }
                                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                        {
                                            trace_argument_1 = *(uint16_t **)(value_13 + 0x188);
                                            data_pointer_3 = (uint64_t *)((uint64_t)((uint64_t)data_pointer_3) & 0xffffffff00000000 | (uint64_t)status & 0xffffffff);
                                            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x11, WD_SYMBOL_ADDRESS(WPP_08fcbcbc57df34e6eaa3c5bf09140d00_Traceguids), trace_argument_1, data_pointer_3);
                                        }
                                        WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0xd90)), 1);
                                        WdAtomicExchange32((volatile int32_t *)((uint32_t *)(MpData + 0xdb4)), WD_STATUS_INSUFFICIENT_RESOURCES);
                                        ExFreePoolWithTag(allocation, 0x6d73504d);
                                        value_43 = (uint32_t)((uint64_t)data_pointer_3 >> 0x20);
                                        if (status == -0x3fffff4b && *(char *)(MpData + 0xfb8))
                                        {
                                            WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0x268)), 1);
                                            if (WdDataStorage4 < *(uint32_t *)(MpData + 0x268))
                                            {
                                                value_14 = (uint64_t)data_pointer_3 & 0xffffffff00000000;
                                                MpSendAsyncPanicModeMessage(4, NULL, (uint8_t)(*(char *)(MpData + 0xd0)), (uint64_t)((uint64_t)trace_argument_1) & 0xffffffffffffff00 | (uint64_t)1 & 0xff, value_14);
                                                value_43 = (uint32_t)(value_14 >> 0x20);
                                            }
                                        }
                                    }
                                    else
                                    {
                                        status = -0x3fffff66;
                                    }
                                    goto block_12;
                                }
                                block_10:
                                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                                {
                                    value_14 = (uint64_t)data_pointer_3 & 0xffffffff00000000;
                                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xf, WD_SYMBOL_ADDRESS(WPP_08fcbcbc57df34e6eaa3c5bf09140d00_Traceguids), (uint64_t)KeGetCurrentThread(), value_14);
                                    value_43 = (uint32_t)(value_14 >> 0x20);
                                }

                                block_11:
                                status = 0;
                            }
                            block_12:
                            if (allocation_2)
                            {
                                ExFreePoolWithTag(allocation_2, 0x6e66504d);
                                allocation_2 = NULL;
                            }

                            value_8 &= 0xffffffff00000000;
                            if (status <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                            {
                                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x26, WD_SYMBOL_ADDRESS(WPP_81ce4eda48113c4f6bf3f9fecccebfe2_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_43 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
                            }
                        }
                    }
                    if (enabled_4)
                    {
                        data_pointer_6 = process_context;
                        status = MpAsyncSendNotification(file_object, value_15, 0, 0xffffffff, process_context);
                        if (status <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x27, WD_SYMBOL_ADDRESS(WPP_81ce4eda48113c4f6bf3f9fecccebfe2_Traceguids), (uint64_t)KeGetCurrentThread(), (uint64_t)((uint64_t)data_pointer_6) & 0xffffffff00000000 | (uint64_t)status & 0xffffffff);
                        }
                    }
                    if (file_object)
                    {
                        WdUnresolvedAtomicBegin();
                        data_pointer = (int32_t *)(file_object + 0xc);
                        status = *data_pointer;
                        *data_pointer = *data_pointer + -1;
                        WdUnresolvedAtomicEnd();
                        if (status == 1)
                        {
                            ExFreePoolWithTag(file_object + -0x18, 0x6d61504d);
                        }
                    }
                    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                    {
                        WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1c, WD_SYMBOL_ADDRESS(WPP_5c114a40c3de3145ebb792b3b9433cba_Traceguids), (uint64_t)KeGetCurrentThread());
                    }
                }
                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x28, WD_SYMBOL_ADDRESS(WPP_81ce4eda48113c4f6bf3f9fecccebfe2_Traceguids), (uint64_t)KeGetCurrentThread(), (uint64_t)((uint64_t)data_pointer_3) & 0xffffffff00000000 | (uint64_t)status & 0xffffffff);
                }
            }
        }
    }
    if (stream_context)
    {
        FltReleaseContext();
    }
    if (process_context)
    {
        MpReleaseProcessContext(process_context);
    }
    return;
}

void MpRemoveProcessNotifyRoutine(uint64_t input, uint64_t input_2)
{
    uint64_t value;
    if (*(int64_t *)(MpData + 0x9b8))
    {
        ObfDereferenceObject();
    }
    if (*(int64_t *)(MpData + 0x9c8))
    {
        ExUnregisterCallback();
    }
    if (*(int64_t *)(MpData + 0x9c0))
    {
        ObfDereferenceObject();
    }
    if (*(int64_t *)(MpData + 0x20))
    {
        (*__guard_dispatch_icall_fptr)(0, MpCreateProcessNotifyRoutineEx, 1);
        return;
    }
    value = (uint64_t)input_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
    if (*(int64_t *)(MpData + 0x18))
    {
        (*__guard_dispatch_icall_fptr)(MpCreateProcessNotifyRoutineEx, value);
        return;
    }
    PsSetCreateProcessNotifyRoutine(MpCreateProcessNotifyRoutine, value);
    return;
}

int32_t MpSetProcessNotifyRoutine(void)
{
    int32_t value;
    uint64_t value_2;
    if (*(int64_t *)(MpData + 0x20))
    {
        value = (*__guard_dispatch_icall_fptr)(0, MpCreateProcessNotifyRoutineEx, 0);
    }
    else if (*(int64_t *)(MpData + 0x18))
    {
        value = (*__guard_dispatch_icall_fptr)(MpCreateProcessNotifyRoutineEx, 0);
    }
    else
    {
        value = PsSetCreateProcessNotifyRoutine(MpCreateProcessNotifyRoutine, 0);
    }
    if (0 <= value)
    {
        value = MpCreateCallback(MpData + 0x9b8, L"\\Callback\\WdProcessNotificationCallback");
        if (0 <= value)
        {
            value = MpCreateCallback(MpData + 0x9c0, L"\\Callback\\WdNriNotificationCallback");
            if (0 <= value)
            {
                value = MpRegisterCallback(*(int64_t *)(MpData + 0x9c0), MpNriNotificationCallback, MpData, (int64_t *)(MpData + 0x9c8));
                if (0 <= value)
                {
                    return 0;
                }
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                {
                    return value;
                }
                if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    return value;
                }
                value_2 = 0xd;
            }
            else
            {
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                {
                    return value;
                }
                if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    return value;
                }
                value_2 = 0xc;
            }
        }
        else
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return value;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return value;
            }
            value_2 = 0xb;
        }
    }
    else
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
        {
            return value;
        }
        if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return value;
        }
        value_2 = 10;
    }
    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_81ce4eda48113c4f6bf3f9fecccebfe2_Traceguids), (uint64_t)KeGetCurrentThread(), value);
    return value;
}

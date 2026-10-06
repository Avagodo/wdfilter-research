#include "wdfilter.h"

void WPP_SF_ZDZDDD(uint64_t input, uint16_t input_2, uint64_t input_3, int16_t *input_4, uint64_t input_5, int16_t *input_6)
{
    int16_t value;
    int16_t value_2;
    int16_t *wide_text;
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
    if (input_4 && (value_2 = *input_4, *input_4))
    {
        value_3 = *(uint64_t *)(&input_4[4]);
    }
    if (!input_4)
    {
        input_4 = &WdCleanupStorage;
    }
    (*__guard_dispatch_icall_fptr)(input, 0x2b, input_3, input_2, input_4, 2, value_3, (uint16_t)value_2, &input_5, 4, wide_text, 2, value_4, (uint16_t)value, &unrecovered_stack_argument_7, 4, &unrecovered_stack_argument_8, 4, &unrecovered_stack_argument_9, 4, 0);
    return;
}

void WPP_SF_qdddDD(uint64_t input, uint16_t input_2, uint64_t input_3, uint64_t input_4)
{
    uint64_t value;
    value = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_987d9fc7520d333ff9fdca1fa9c66d57_Traceguids), input_2, &value, 8, &unrecovered_stack_argument_5, 4, &unrecovered_stack_argument_6, 4, &unrecovered_stack_argument_7, 4, &unrecovered_stack_argument_8, 4, &unrecovered_stack_argument_9, 4, 0);
    return;
}

uint64_t MpObOperationFillSyncData(WD_LAYOUT_52 *input, int64_t *input_2, uint64_t input_3, uint64_t input_4, void *input_5, int32_t *input_6)
{
    int32_t *data_pointer;
    int64_t process_context;
    int64_t *data_pointer_2;
    int64_t *process_context_2;
    void *process_context_3;
    int64_t *process_context_4;
    int64_t process_context_5;
    int64_t *process_context_6;
    void *process_context_7;
    int64_t *process_context_8;
    data_pointer = input_6;
    process_context_6 = NULL;
    process_context_5 = 0;
    process_context_3 = input_5;
    if (input && input_6)
    {
        process_context_7 = input_5;
        process_context_4 = input_2;
        if (!input_5)
        {
            MpGetProcessContextByObject(input->field_0x8, &process_context_3);
            process_context_7 = process_context_3;
        }
        process_context_2 = input_2;
        if (!input_2)
        {
            MpGetProcessContextByObject(IoGetCurrentProcess(), &process_context_4);
            process_context_2 = process_context_4;
        }
        data_pointer_2 = &input->field_0x20;
        *data_pointer = input->field_0x0;
        data_pointer[4] = ((int32_t *)process_context_7)[6];
        process_context_3 = ((void **)process_context_7)[4];
        *(void **)(&data_pointer[5]) = process_context_3;
        process_context_4 = data_pointer_2;
        if (input->field_0x0 != 1)
        {
            MpGetProcessContextByObject(*(uint64_t *)(*data_pointer_2 + 0x10), &process_context_5);
            MpGetProcessContextByObject(*(uint64_t *)(*process_context_4 + 8), &process_context_6);
            data_pointer[1] = *(int32_t *)(&process_context_6[3]);
            *(int64_t *)(&data_pointer[2]) = process_context_6[4];
            data_pointer[8] = *(int32_t *)(process_context_5 + 0x18);
            process_context_3 = *(void **)(process_context_5 + 0x20);
            *(void **)(&data_pointer[9]) = process_context_3;
            data_pointer_2 = process_context_4;
            process_context_8 = process_context_6;
            process_context = process_context_5;
        }
        else
        {
            MpReferenceProcessContext(process_context_2);
            data_pointer[1] = *(int32_t *)(&process_context_2[3]);
            process_context_3 = (void *)process_context_2[4];
            *(void **)(&data_pointer[2]) = process_context_3;
            process_context_8 = process_context_2;
            process_context = 0;
        }
        data_pointer[7] = *(int32_t *)(*data_pointer_2 + 4);
        if (process_context_2 && process_context_2 != input_2)
        {
            MpReleaseProcessContext(process_context_2);
        }
        if (process_context_8)
        {
            MpReleaseProcessContext(process_context_8);
        }
        if (process_context)
        {
            MpReleaseProcessContext(process_context);
        }
        if (process_context_7 && process_context_7 != input_5)
        {
            MpReleaseProcessContext(process_context_7);
        }
        return 0;
    }
    return WD_STATUS_INVALID_PARAMETER;
}

void WPP_SF_DDDS(uint64_t input, uint64_t input_2, uint64_t input_3, uint32_t input_4, uint64_t input_5, uint64_t input_6, int16_t *input_7)
{
    int64_t index;
    int16_t *wide_text;
    uint32_t values[4];
    if (input_7)
    {
        index = -1;
        do
        {
            index += 1;
        }
        while (input_7[index]);
        index = index * 2 + 2;
    }
    else
    {
        index = 10;
    }
    wide_text = input_7;
    if (!input_7)
    {
        wide_text = &WdAsyncnotificationStorage3;
    }
    values[0] = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_987d9fc7520d333ff9fdca1fa9c66d57_Traceguids), 0x1c, values, 4, &input_5, 4, &input_6, 4, wide_text, index, 0);
    return;
}

void WPP_SF_SZZdD(uint64_t input, uint64_t input_2, uint64_t input_3, int16_t *input_4, int16_t *input_5, int16_t *input_6)
{
    int64_t index;
    int16_t value;
    int16_t *wide_text;
    uint64_t value_2;
    uint64_t value_3;
    int16_t *wide_text_2;
    int16_t value_4 = 8;
    if (input_6)
    {
        value = *input_6;
        if (*input_6)
        {
            value_3 = *(uint64_t *)(&input_6[4]);
            goto block_1;
        }
    }
    else
    {
        value = 8;
    }
    value_3 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    block_1:
    wide_text_2 = input_6;

    if (!input_6)
    {
        wide_text_2 = &WdCleanupStorage;
    }
    if (input_5 && (value_4 = *input_5, *input_5))
    {
        value_2 = *(uint64_t *)(&input_5[4]);
    }
    else
    {
        value_2 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    }
    wide_text = input_5;
    if (!input_5)
    {
        wide_text = &WdCleanupStorage;
    }
    if (input_4)
    {
        index = -1;
        do
        {
            index += 1;
        }
        while (input_4[index]);
        index = index * 2 + 2;
    }
    else
    {
        index = 10;
    }
    if (!input_4)
    {
        input_4 = &WdAsyncnotificationStorage3;
    }
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_987d9fc7520d333ff9fdca1fa9c66d57_Traceguids), 0x15, input_4, index, wide_text, 2, value_2, (uint16_t)value_4, wide_text_2, 2, value_3, (uint16_t)value, &unrecovered_stack_argument_7, 4, &unrecovered_stack_argument_8, 4, 0);
    return;
}

void WPP_SF_ZDZD(uint64_t input, uint64_t input_2, uint64_t input_3, int16_t *input_4, uint64_t input_5, int16_t *input_6)
{
    int16_t value;
    int16_t *wide_text;
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
    if (input_4 && (value_2 = *input_4, *input_4))
    {
        value_3 = *(uint64_t *)(&input_4[4]);
    }
    if (!input_4)
    {
        input_4 = &WdCleanupStorage;
    }
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_987d9fc7520d333ff9fdca1fa9c66d57_Traceguids), 0x1b, input_4, 2, value_3, (uint16_t)value_2, &input_5, 4, wide_text, 2, value_4, (uint16_t)value, &unrecovered_stack_argument_7, 4, 0);
    return;
}

void WPP_SF_qDddZDZDDD(uint64_t input, uint64_t input_2, uint64_t input_3, uint64_t input_4)
{
    int16_t value;
    int16_t *wide_text;
    int16_t *wide_text_2;
    int16_t *wide_text_3;
    uint32_t values[2];
    uint64_t value_3;
    int16_t *wide_text_4;
    int16_t value_4;
    uint64_t value_5;
    uint64_t value_6;
    value_5 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    values[0] = 0x2a;
    if (wide_text_2)
    {
        value = *wide_text_2;
        if (*wide_text_2)
        {
            value_6 = *(uint64_t *)(&wide_text_2[4]);
            goto block_1;
        }
    }
    else
    {
        value = 8;
    }
    value_6 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    block_1:
    wide_text_3 = wide_text_2;

    if (!wide_text_2)
    {
        wide_text_3 = &WdCleanupStorage;
    }
    if (wide_text)
    {
        value_4 = *wide_text;
        if (*wide_text)
        {
            value_5 = *(uint64_t *)(&wide_text[4]);
        }
    }
    else
    {
        value_4 = 8;
    }
    wide_text_4 = wide_text;
    if (!wide_text)
    {
        wide_text_4 = &WdCleanupStorage;
    }
    value_3 = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_987d9fc7520d333ff9fdca1fa9c66d57_Traceguids), 0x2d, &value_3, 8, values, 4, &unrecovered_stack_argument_6, 4, &unrecovered_stack_argument_7, 4, wide_text_4, 2, value_5, (uint16_t)value_4, &unrecovered_stack_argument_9, 4, wide_text_3, 2, value_6, (uint16_t)value, &unrecovered_stack_argument_11, 4, &unrecovered_stack_argument_12, 4, &unrecovered_stack_argument_13, 4, 0);
    return;
}

void WPP_SF_qZDZD(uint64_t input, uint16_t input_2, uint64_t input_3, uint64_t input_4, int16_t *input_5, uint64_t input_6, int16_t *input_7)
{
    int16_t value;
    int16_t value_2;
    uint64_t value_3;
    int16_t *wide_text;
    uint64_t value_4;
    int16_t *wide_text_2;
    uint64_t value_5;
    value_4 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    if (input_7)
    {
        value = *input_7;
        if (*input_7)
        {
            value_5 = *(uint64_t *)(&input_7[4]);
            goto block_1;
        }
    }
    else
    {
        value = 8;
    }
    value_5 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    block_1:
    wide_text = input_7;

    if (!input_7)
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
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_987d9fc7520d333ff9fdca1fa9c66d57_Traceguids), input_2, &value_3, 8, wide_text_2, 2, value_4, (uint16_t)value_2, &input_6, 4, wide_text, 2, value_5, (uint16_t)value, &unrecovered_stack_argument_8, 4, 0);
    return;
}

void WPP_SF_qdZDZDdddDD(uint64_t input, uint64_t input_2, uint64_t input_3, uint64_t input_4, uint64_t input_5, int16_t *input_6, uint64_t input_7, int16_t *input_8)
{
    int16_t value;
    int16_t *wide_text;
    uint64_t value_2;
    int16_t *wide_text_2;
    int16_t value_3;
    uint64_t value_4;
    uint64_t value_5;
    value_4 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    if (input_8)
    {
        value = *input_8;
        if (*input_8)
        {
            value_5 = *(uint64_t *)(&input_8[4]);
            goto block_1;
        }
    }
    else
    {
        value = 8;
    }
    value_5 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    block_1:
    wide_text = input_8;

    if (!input_8)
    {
        wide_text = &WdCleanupStorage;
    }
    if (input_6)
    {
        value_3 = *input_6;
        if (*input_6)
        {
            value_4 = *(uint64_t *)(&input_6[4]);
        }
    }
    else
    {
        value_3 = 8;
    }
    wide_text_2 = input_6;
    if (!input_6)
    {
        wide_text_2 = &WdCleanupStorage;
    }
    value_2 = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_987d9fc7520d333ff9fdca1fa9c66d57_Traceguids), 0x2e, &value_2, 8, &input_5, 4, wide_text_2, 2, value_4, (uint16_t)value_3, &input_7, 4, wide_text, 2, value_5, (uint16_t)value, &unrecovered_stack_argument_9, 4, &unrecovered_stack_argument_10, 4, &unrecovered_stack_argument_11, 4, &unrecovered_stack_argument_12, 4, &unrecovered_stack_argument_13, 4, &unrecovered_stack_argument_14, 4, 0);
    return;
}

void WPP_SF_qddDD(uint64_t input, uint64_t input_2, uint64_t input_3, uint64_t input_4)
{
    uint64_t value;
    value = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_987d9fc7520d333ff9fdca1fa9c66d57_Traceguids), 0x2a, &value, 8, &unrecovered_stack_argument_5, 4, &unrecovered_stack_argument_6, 4, &unrecovered_stack_argument_7, 4, &unrecovered_stack_argument_8, 4, 0);
    return;
}

uint64_t MpObPreOperationCallback(uint64_t input, void *input_2)
{
    if (!((int64_t *)input_2)[1])
    {
        return 0;
    }
    if (((int64_t *)input_2)[2] == *__imp_ExDesktopObjectType)
    {
        MpObHandleOpenDesktopCallback(input_2);
        return 0;
    }
    if (((int64_t *)input_2)[2] != *__imp_PsProcessType)
    {
        return 0;
    }
    MpObHandleOpenProcessCallback(input_2);
    return 0;
}

void MpObHandleOpenDesktopCallback(WD_LAYOUT_60 *input)
{
    uint32_t *data_pointer;
    int64_t process_context;
    uint16_t *name;
    uint64_t *data_pointer_2;
    uint32_t values[2];
    int64_t trace_argument_3;
    uint16_t *trace_argument_1;
    int32_t value;
    uint64_t value_2;
    int64_t process_context_2;
    uint64_t value_3;
    uint32_t value_4;
    uint16_t *trace_argument_2;
    uint64_t *data_pointer_3;
    int32_t trace_argument_1_2;
    uint32_t event_id;
    uint64_t event_id_2;
    int64_t value_6;
    int64_t string;
    value_4 = (uint32_t)((uint64_t)value_2 >> 0x20);
    string = 0;
    value_6 = 0;
    values[0] = 0;
    process_context = 0;
    name = NULL;
    trace_argument_3 = 0;
    data_pointer_2 = NULL;
    if (!(*(uint32_t *)(MpData + 0x364) & 2))
    {
        return;
    }
    MpGetProcessContextByObject(IoGetCurrentProcess(), &process_context);
    process_context_2 = process_context;
    if (process_context && (!(*(uint32_t *)(process_context + 0x34) & 8) || !(*(uint32_t *)(process_context + 0x38) & 0x4000)) && (!(*(uint32_t *)(process_context + 0x34) & 1) || *(uint32_t *)(process_context + 0x38) & 0x4000))
    {
        if (*(uint32_t *)(process_context + 0x38) & 8)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                event_id_2 = 0xf;
                WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id_2, WD_SYMBOL_ADDRESS(WPP_987d9fc7520d333ff9fdca1fa9c66d57_Traceguids));
            }
        }
        else
        {
            trace_argument_1_2 = MpQueryObjectName(input->field_0x8, &name);
            trace_argument_2 = name;
            if (trace_argument_1_2)
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && (string = value_6, *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x10, WD_SYMBOL_ADDRESS(WPP_987d9fc7520d333ff9fdca1fa9c66d57_Traceguids), trace_argument_1_2);
                }
            }
            else if (*name && (input->field_0x0 == 1 || input->field_0x0 == 2))
            {
                value = *name + 0x38;
                data_pointer = input->field_0x20;
                trace_argument_1_2 = MpAsyncCreateNotification(&data_pointer_2, value);
                data_pointer_3 = data_pointer_2;
                if (0 <= trace_argument_1_2)
                {
                    trace_argument_1_2 = MpQuerySessionId(values);
                    if (trace_argument_1_2 < 0 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x12, WD_SYMBOL_ADDRESS(WPP_987d9fc7520d333ff9fdca1fa9c66d57_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)trace_argument_1_2 & 0xffffffffULL);
                    }
                    *data_pointer_3 = 0;
                    *(int32_t *)(&data_pointer_3[1]) = value;
                    *(uint32_t *)(&data_pointer_3[2]) = 9;
                    *(uint32_t *)(&data_pointer_3[3]) = PsGetCurrentProcessId();
                    event_id_2 = PsGetProcessCreateTimeQuadPart(IoGetCurrentProcess());
                    *(uint64_t *)((int64_t)data_pointer_3 + 0x1c) = MpFileTimeFromUlong64(event_id_2);
                    *(uint32_t *)(&data_pointer_3[5]) = values[0];
                    ((uint32_t *)data_pointer_3)[9] = PsGetCurrentThreadId();
                    ((bool *)data_pointer_3)[0x2c] = input->field_0x0 != 1;
                    ((uint8_t *)data_pointer_3)[0x2d] = *(uint8_t *)(&input->field_0x4) & 1;
                    *(uint32_t *)(&data_pointer_3[6]) = *data_pointer;
                    memmove((uint64_t *)((int64_t)data_pointer_3 + 0x34), *(uint64_t **)(&trace_argument_2[4]), *trace_argument_2);
                    *(uint16_t *)((int64_t)data_pointer_3 + (uint64_t)(*trace_argument_2 >> 1) * 2 + 0x34) = 0;
                    value_3 = process_context_2;
                    trace_argument_1_2 = MpAsyncSendNotification(data_pointer_3, value, 0, 1, process_context_2);
                    if (0 <= trace_argument_1_2)
                    {
                        value_6 = string;
                        if (*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                        {
                            trace_argument_1_2 = MpGetProcessName(PsGetCurrentProcessId(), &trace_argument_3);
                            value_6 = trace_argument_3;
                            if (trace_argument_1_2)
                            {
                                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                {
                                    WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x14, WD_SYMBOL_ADDRESS(WPP_987d9fc7520d333ff9fdca1fa9c66d57_Traceguids), trace_argument_1_2);
                                }
                            }
                            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                            {
                                trace_argument_1 = L"CreateHandle";
                                event_id = input->field_0x4 & 1;
                                if (input->field_0x0 != 1)
                                {
                                    trace_argument_1 = L"DuplicateHandle";
                                }
                                WPP_SF_SZZdD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, L"DuplicateHandle", trace_argument_1, trace_argument_2, trace_argument_3, event_id, *data_pointer);
                                goto block_1;
                            }
                            value_6 = trace_argument_3;
                        }
                    }
                    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x13, WD_SYMBOL_ADDRESS(WPP_987d9fc7520d333ff9fdca1fa9c66d57_Traceguids), (uint64_t)KeGetCurrentThread(), (uint64_t)value_3 & 0xffffffff00000000 | (uint64_t)trace_argument_1_2 & 0xffffffff);
                    }
                }
                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x11, WD_SYMBOL_ADDRESS(WPP_987d9fc7520d333ff9fdca1fa9c66d57_Traceguids), trace_argument_1_2);
                }
                block_1:
                string = value_6;

                if (data_pointer_3)
                {
                    MpAsyncDereferenceNotification(data_pointer_3);
                }
            }
            if (trace_argument_2)
            {
                ExFreePoolWithTag(trace_argument_2, 0x6e6f704d);
            }
            if (string)
            {
                MpFreeString(string);
            }
        }
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
    {
        event_id_2 = 0xe;
        WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id_2, WD_SYMBOL_ADDRESS(WPP_987d9fc7520d333ff9fdca1fa9c66d57_Traceguids));
    }
    if (process_context_2)
    {
        MpReleaseProcessContext(process_context_2);
    }
    return;
}

void MpObHandleOpenProcessCallback(WD_LAYOUT_63 *input)
{
    int64_t process_context;
    uint64_t *trace_argument_1;
    int64_t process_context_2[2];
    uint64_t *process_context_3;
    char byte_value;
    char buffer_2[7];
    uint64_t string;
    uint64_t string_2;
    uint32_t values[2];
    uint64_t value;
    uint32_t *data_pointer;
    uint32_t values_2[2];
    int64_t value_2;
    uint32_t values_3[2];
    uint16_t *wide_text;
    int64_t value_3;
    uint64_t process_id;
    uint32_t value_4;
    uint64_t *data_pointer_2;
    uint64_t *data_pointer_3;
    uint64_t *process_context_4;
    int32_t status;
    int64_t value_5;
    bool enabled;
    uint64_t value_6;
    uint32_t value_7;
    uint64_t value_8;
    int16_t *trace_argument_3;
    int64_t *data_pointer_4;
    uint32_t value_9;
    char *bytes;
    uint64_t value_10;
    int64_t process;
    uint32_t value_11;
    char *bytes_2;
    uint64_t value_12;
    uint32_t value_13;
    int32_t value_14;
    uint32_t value_15;
    uint64_t value_16;
    uint64_t value_17;
    uint64_t value_18;
    uint64_t value_19;
    int64_t process_2;
    uint32_t value_20;
    int64_t value_21;
    int64_t value_22;
    uint64_t value_23;
    uint64_t value_24;
    uint64_t value_25;
    uint64_t value_26;
    uint32_t value_27;
    uint64_t value_28;
    uint32_t value_29;
    WD_LAYOUT_62 *allocation;
    uint32_t value_30;
    uint64_t value_31;
    uint32_t value_32;
    uint32_t value_33;
    uint64_t **data_pointer_5;
    uint64_t value_34;
    uint32_t *data_pointer_6;
    uint64_t value_35;
    int64_t value_36;
    uint32_t *data_pointer_7;
    uint64_t value_37;
    uint64_t value_38;
    int64_t value_39;
    int64_t *data_pointer_8;
    uint64_t value_40;
    uint32_t *data_pointer_9;
    uint64_t value_41;
    uint64_t trace_handle;
    uint32_t value_43;
    value_7 = (uint32_t)((uint64_t)value_6 >> 0x20);
    process_context_2[0] = 0;
    process_context_3 = NULL;
    if (input->field_0x4 & 1)
    {
        return;
    }
    process = IoGetCurrentProcess();
    process_2 = input->field_0x8;
    if (process_2 == process || (trace_handle = (uint64_t)KeGetCurrentThread(), process_context = *(int64_t *)(MpData + 0xe8), IoThreadToProcess(trace_handle) == process_context) || (trace_handle = (uint64_t)KeGetCurrentThread(), process_context = *(int64_t *)(MpData + 0x100), IoThreadToProcess(trace_handle) == process_context) || input->field_0x0 != 1 && input->field_0x0 != 2)
    {
        return;
    }
    data_pointer = input->field_0x20;
    value_4 = *data_pointer;
    status = MpGetProcessContextByObject(process, process_context_2);
    process_context = process_context_2[0];
    if (0 <= status)
    {
        if ((int32_t)MpGetProcessContextByObject(process_2, &process_context_3) < 0)
        {
            process_context_4 = process_context_3;
            goto block_1;
        }
        process_id = PsGetProcessId(process);
        process = PsGetProcessId(process_2);
        process_context_4 = process_context_3;
        bytes_2 = &byte_value;
        bytes = buffer_2;
        buffer_2[0] = 0;
        byte_value = 0;
        process_2 = process_context;
        data_pointer_2 = process_context_3;
        MpObHipsCallback(input, data_pointer, process_id, process, process_context, process_context_3, bytes, bytes_2);
        value_12 = (uint64_t)((uint64_t)bytes_2) & 0xffffffffffffff00 | (uint64_t)byte_value & 0xff;
        value_10 = (uint64_t)((uint64_t)bytes) & 0xffffffffffffff00 | (uint64_t)buffer_2[0] & 0xff;
        value_8 = (uint64_t)((uint64_t)data_pointer_2) & 0xffffffff00000000 | (uint64_t)(*data_pointer) & 0xffffffff;
        trace_handle = (uint64_t)process_2 & 0xffffffff00000000 | (uint64_t)value_4 & 0xffffffff;
        data_pointer_2 = process_context_4;
        MpObSendOpenProcessBMNotification(process_id, process, process_context, process_context_4, trace_handle, value_8, value_10, value_12);
        value_37 = WdSharedTickCount;
        value_7 = (uint32_t)((uint64_t)trace_handle >> 0x20);
        value_9 = (uint32_t)((uint64_t)value_8 >> 0x20);
        value_11 = (uint32_t)((uint64_t)value_10 >> 0x20);
        value_13 = (uint32_t)((uint64_t)value_12 >> 0x20);
        if (data_pointer && process_context && process_context_4)
        {
            if (!(*(int32_t *)(MpData + 0x98c)) && ((*(int64_t *)(MpData + 0xe8) || value_37 <= (uint64_t)((uint64_t)((0 | (uint64_t)36000000000) / (uint64_t)((uint32_t)KeQueryTimeIncrement())) + *(int64_t *)(MpData + 0xfc0))) && ((uint32_t *)process_context_4)[0xd] & 0x10) && (!MpIsObHardeningExemptByContext(process_context) && !(*(uint32_t *)(process_context + 0x34) & 0x10)))
            {
                value_4 = *data_pointer;
                value_43 = value_4 & 0xfffff7d4;
                value_2 = ((uint64_t)WdLoadField(&value_2, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)value_4 & 0xffffffffULL;
                if (value_43 != value_4)
                {
                    *data_pointer = value_43;
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                    {
                        value_8 = ((uint64_t)value_11 & 0xffffffffULL) << 32 | (uint64_t)(*(uint32_t *)(process_context + 0x18)) & 0xffffffffULL;
                        trace_argument_3 = *(int16_t **)(process_context + 0x80);
                        trace_handle = ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)(*(uint32_t *)(&process_context_4[3])) & 0xffffffffULL;
                        WPP_SF_ZDZDDD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x32, WD_SYMBOL_ADDRESS(WPP_987d9fc7520d333ff9fdca1fa9c66d57_Traceguids), (int16_t *)process_context_4[0x10], trace_handle, trace_argument_3, value_8, ((uint64_t)value_13 & 0xffffffffULL) << 32 | (uint64_t)value_4 & 0xffffffffULL, value_43);
                        value_7 = (uint32_t)((uint64_t)trace_handle >> 0x20);
                        value_9 = (uint32_t)((uint64_t)trace_argument_3 >> 0x20);
                        value_11 = (uint32_t)((uint64_t)value_8 >> 0x20);
                        value_4 = (uint32_t)value_2;
                    }
                    data_pointer_2 = *(uint64_t **)(process_context + 0x80);
                    trace_handle = ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)(*(uint32_t *)(process_context + 0x18)) & 0xffffffffULL;
                    MpLogPrintfW(L"[Mini-filter] Denied OB operation OpenProcess[%wZ][Pid:%u] from process [%wZ][Pid:%u]. OriginalDesiredAccess: [0x%x] ResultingAccess: [0x%x]", process_context_4[0x10], *(uint32_t *)(&process_context_4[3]), data_pointer_2, trace_handle, ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)value_4 & 0xffffffffULL, ((uint64_t)value_11 & 0xffffffffULL) << 32 | (uint64_t)(*data_pointer) & 0xffffffffULL);
                    value_7 = (uint32_t)((uint64_t)trace_handle >> 0x20);
                    process_context_3 = *(uint64_t **)(process_context + 0x80);
                    trace_argument_3 = (int16_t *)process_context_4[0x10];
                    string = 0;
                    value_21 = 0;
                    string_2 = 0;
                    value_22 = 0;
                    RtlInitUnicodeString(&string, WD_EXCLUDEPROCESS_UNRECOVERED_ADDRESS);
                    RtlInitUnicodeString(&string_2, WD_EXCLUDEPROCESS_UNRECOVERED_ADDRESS);
                    if (process_context_3 && process_context_3[1] && *(int16_t *)process_context_3)
                    {
                        data_pointer_2 = &string;
                        FltParseFileName(process_context_3, 0, 0, data_pointer_2);
                    }
                    if (trace_argument_3 && *(int64_t *)(&trace_argument_3[4]) && *trace_argument_3)
                    {
                        data_pointer_2 = &string_2;
                        FltParseFileName(trace_argument_3, 0, 0, data_pointer_2);
                    }
                    if ((uint16_t)string && value_21)
                    {
                        data_pointer_2 = (uint64_t *)(string_2 & 0xffff);
                        if ((uint16_t)string_2 && (value_22 && 6 <= WdTracelogStorage8 && WdTracelogStorage10 & 0x400000000000 && (WdTracelogStorage11 & 0x400000000000) == WdTracelogStorage11))
                        {
                            value_36 = value_21;
                            data_pointer_5 = &process_context_3;
                            values[0] = (uint32_t)((uint16_t)string);
                            data_pointer_6 = values;
                            values_2[0] = (uint32_t)((uint16_t)string_2);
                            data_pointer_7 = values_2;
                            data_pointer_2 = NULL;
                            data_pointer_8 = &value_2;
                            data_pointer_9 = values_3;
                            wide_text = WdTracelogStorage9;
                            process_context_3 = (uint64_t *)0x1000000;
                            value_34 = 8;
                            value_35 = 2;
                            values[1] = 0;
                            value_38 = 2;
                            value_39 = value_22;
                            values_2[1] = 0;
                            value_40 = 4;
                            value_41 = 4;
                            WdStoreField(&value, 4, 4, (uint64_t)((uint32_t)WdAsyncnotificationStorage18));
                            value = ((uint64_t)WdLoadField(&value, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)0xb000000 & 0xffffffffULL;
                            value_28 = 0x400000000000;
                            value_29 = *WdTracelogStorage9;
                            value_31 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS2;
                            value_30 = 2;
                            value_32 = 0x86;
                            value_33 = 1;
                            process_context_2[0] = ((uint64_t)WdLoadField(&process_context_2[0], 4, 4) & 0xffffffffULL) << 32 | (uint64_t)0x104f & 0xffffffffULL;
                            values_3[0] = value_43;
                            EtwWriteTransfer(WdTracelogStorage12, &value, 0, 0, ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)9 & 0xffffffffULL, &wide_text);
                        }
                    }
                }
            }
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x31, WD_SYMBOL_ADDRESS(WPP_987d9fc7520d333ff9fdca1fa9c66d57_Traceguids));
        }
        trace_handle = process_id;
        if (!(int32_t)process_id || (value_14 = (int32_t)process, !value_14))
        {
            goto block_1;
        }
        if (process_context)
        {
            if (process_context_4 && *(uint32_t *)(process_context + 0x3c) & 4)
            {
                value_19 = 0;
                value_20 = 0;
                data_pointer_4 = &value_3;
                value_3 = 0;
                value_16 = 0;
                value_17 = 0;
                value_18 = 0;
                data_pointer_3 = process_context_4;
                MpObOperationFillSyncData(input, process_context);
                value = 0;
                value_28 = 0;
                MpGetPriorityInfo(0, 0, &value);
                process_id = 0;
                value_15 = 0;
                GetMpUniquePidFromProcessId(trace_handle, &process_id);
                data_pointer = (uint32_t *)(process_context + 0x38);
                if (*(int32_t *)(MpData + 0xe1c))
                {
                    if (data_pointer)
                    {
                        process_2 = MpData + 0x140;
                        if (process_2)
                        {
                            allocation = (WD_LAYOUT_62 *)MpAllocatePoolWithTag(1, (char *)0x5c, 0x6d73504d);
                            if (allocation)
                            {
                                allocation->field_0x4 = 0x5c;
                                allocation->field_0x0 = 0x300a3;
                                allocation->field_0x18 = 8;
                                allocation->field_0x28 = 0x2c;
                                allocation->field_0x8 = value;
                                allocation->field_0x10 = value_28;
                                *(uint64_t *)allocation->field_0x1c = process_id;
                                allocation->field_0x24 = value_15;
                                if (&allocation->field_0x30)
                                {
                                    allocation->field_0x30 = value_3;
                                    allocation->field_0x38 = value_16;
                                    allocation->field_0x40 = value_17;
                                    allocation->field_0x48 = value_18;
                                    allocation->field_0x50 = value_19;
                                    allocation->field_0x58 = value_20;
                                }
                                value_2 = *(int64_t *)(MpData + 0xe20);
                                if (*(int64_t *)(MpData + 0xe20))
                                {
                                    value_2 = -value_2;
                                }
                                WdUnresolvedAtomicBegin();
                                enabled = *(int32_t *)(MpData + 0x1bc) == 0;
                                if (enabled)
                                {
                                    *(int32_t *)(MpData + 0x1bc) = 0;
                                }
                                WdUnresolvedAtomicEnd();
                                if (enabled)
                                {
                                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                    {
                                        WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xb, WD_SYMBOL_ADDRESS(WPP_08fcbcbc57df34e6eaa3c5bf09140d00_Traceguids));
                                    }
                                    status = -0x3fffffff;
                                }
                                else
                                {
                                    value_37 = FltCancellableWaitForSingleObject(MpData + 0x200, &value_2, 0);
                                    trace_argument_1 = (uint64_t *)(value_37 & 0xffffffff);
                                    if ((int32_t)value_37 != 0x102)
                                    {
                                        if (!(int32_t)value_37)
                                        {
                                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                                            {
                                                trace_handle = *(uint64_t *)(WPP_GLOBAL_Control + 0x18);
                                                process = MpData + 0x200;
                                                WPP_SF_D(trace_handle, 0xd, WD_SYMBOL_ADDRESS(WPP_08fcbcbc57df34e6eaa3c5bf09140d00_Traceguids), KeReadStateSemaphore(process));
                                            }
                                            process_context_3 = NULL;
                                            process_context_2[0] = ((uint64_t)WdLoadField(&process_context_2[0], 4, 4) & 0xffffffffULL) << 32 | (uint64_t)0x2c & 0xffffffffULL;
                                            value_26 = 0;
                                            process_context_2[1] = 0;
                                            value_23 = 0;
                                            value_27 = 0;
                                            value_24 = 0;
                                            value_25 = 0;
                                            process = KeQueryPerformanceCounter(&process_context_3);
                                            data_pointer_4 = process_context_2;
                                            data_pointer_3 = (uint64_t *)(&process_context_2[1]);
                                            values_3[0] = FltSendMessage(*(uint64_t *)(MpData + 0x10), process_2, allocation, allocation->field_0x4, data_pointer_3, data_pointer_4, &value_2);
                                            if (process_context_3)
                                            {
                                                process_2 = KeQueryPerformanceCounter(0);
                                                if (*(int32_t *)(MpData + 0xd60) <= -1)
                                                {
                                                    WdAtomicExchange64((volatile int64_t *)((uint64_t *)(MpData + 0xd58)), 0);
                                                    WdAtomicExchange32((volatile int32_t *)((uint32_t *)(MpData + 0xd60)), 0);
                                                }
                                                WdAtomicAdd64((volatile int64_t *)((int64_t *)(MpData + 0xd58)), (process_2 - process) * 1000 / (int64_t)process_context_3);
                                                WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0xd60)), 1);
                                            }
                                            value_4 = values_3[0];
                                            if (values_3[0] == 0x102)
                                            {
                                                value_4 = 0xc00000b5;
                                            }
                                            KeReleaseSemaphore(MpData + 0x200, 0, 1, 0);
                                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                                            {
                                                trace_handle = *(uint64_t *)(WPP_GLOBAL_Control + 0x18);
                                                process_2 = MpData + 0x200;
                                                WPP_SF_D(trace_handle, 0xe, WD_SYMBOL_ADDRESS(WPP_08fcbcbc57df34e6eaa3c5bf09140d00_Traceguids), KeReadStateSemaphore(process_2));
                                            }
                                            ExFreePoolWithTag(allocation, 0x6d73504d);
                                            if (value_4)
                                            {
                                                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                                {
                                                    WPP_SF_qDi(*(uint64_t *)(WPP_GLOBAL_Control + 0x18));
                                                }
                                                if (value_4 != 0xc00000b5)
                                                {
                                                    WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0xdac)), 1);
                                                    WdUnresolvedAtomicBegin();
                                                    *(uint32_t *)(MpData + 0xdd0) = value_4;
                                                    WdUnresolvedAtomicEnd();
                                                }
                                                else
                                                {
                                                    WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0xdf4)), 1);
                                                }
                                            }
                                            else if ((int32_t)value_23 != 8)
                                            {
                                                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                                {
                                                    WPP_SF_qDL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x13, WD_SYMBOL_ADDRESS(WPP_08fcbcbc57df34e6eaa3c5bf09140d00_Traceguids), (uint64_t)KeGetCurrentThread(), (uint64_t)((uint64_t)data_pointer_3) & 0xffffffff00000000 | (uint64_t)((int32_t)value_23) & 0xffffffff, (uint64_t)((uint64_t)data_pointer_4) & 0xffffffff00000000 | (uint64_t)8 & 0xffffffff);
                                                }
                                                WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0xe18)), 1);
                                            }
                                            else
                                            {
                                                WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0xd88)), 1);
                                                if (value_23 & 0x200000000)
                                                {
                                                    switch (WD_OBCALLBACK_UNRECOVERED_ADDRESS)
                                                    {
                                                        case WD_OBCALLBACK_BRANCH_TARGET:
                                                            WdUnresolvedAtomicBegin();
                                                            *data_pointer = *data_pointer & 0xfffffffb;
                                                            WdUnresolvedAtomicEnd();
                                                    }
                                                }
                                                if (value_23 & 0x100000000 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                                                {
                                                    trace_handle = 0x14;
                                                    WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), trace_handle, WD_SYMBOL_ADDRESS(WPP_08fcbcbc57df34e6eaa3c5bf09140d00_Traceguids), (uint64_t)KeGetCurrentThread(), data_pointer_3, data_pointer_4);
                                                }
                                            }
                                            goto block_1;
                                        }
                                    }
                                    else
                                    {
                                        trace_argument_1 = (uint64_t *)0xc00000b5;
                                    }
                                    status = (int32_t)trace_argument_1;
                                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                    {
                                        process_2 = value_2 + WdSignedMultiplyHigh(-0x29406b2a1a85bd43, value_2);
                                        data_pointer_3 = (uint64_t *)((process_2 >> 0x17) - (process_2 >> 0x3f));
                                        WPP_SF_Di(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xc, WD_SYMBOL_ADDRESS(WPP_08fcbcbc57df34e6eaa3c5bf09140d00_Traceguids), trace_argument_1, data_pointer_3);
                                        data_pointer_2 = trace_argument_1;
                                    }
                                }
                                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                {
                                    data_pointer_2 = *(uint64_t **)(value_5 + 0x188);
                                    data_pointer_3 = (uint64_t *)((uint64_t)((uint64_t)data_pointer_3) & 0xffffffff00000000 | (uint64_t)status & 0xffffffff);
                                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x11, WD_SYMBOL_ADDRESS(WPP_08fcbcbc57df34e6eaa3c5bf09140d00_Traceguids), data_pointer_2, data_pointer_3);
                                }
                                WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0xdac)), 1);
                                WdAtomicExchange32((volatile int32_t *)((uint32_t *)(MpData + 0xdd0)), WD_STATUS_INSUFFICIENT_RESOURCES);
                                ExFreePoolWithTag(allocation, 0x6d73504d);
                                if (status == -0x3fffff4b && *(char *)(MpData + 0xfb8))
                                {
                                    WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0x268)), 1);
                                    if (WdDataStorage4 < *(uint32_t *)(MpData + 0x268))
                                    {
                                        MpSendAsyncPanicModeMessage(4, NULL, (uint8_t)(*(char *)(MpData + 0xd0)), (uint64_t)((uint64_t)data_pointer_2) & 0xffffffffffffff00 | (uint64_t)1 & 0xff, (uint64_t)data_pointer_3 & 0xffffffff00000000);
                                    }
                                }
                            }
                        }
                        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            trace_handle = 0x10;
                            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), trace_handle, WD_SYMBOL_ADDRESS(WPP_08fcbcbc57df34e6eaa3c5bf09140d00_Traceguids), (uint64_t)KeGetCurrentThread(), data_pointer_3, data_pointer_4);
                        }
                    }
                }
                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                {
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xf, WD_SYMBOL_ADDRESS(WPP_08fcbcbc57df34e6eaa3c5bf09140d00_Traceguids), (uint64_t)KeGetCurrentThread(), (uint64_t)data_pointer_3 & 0xffffffff00000000);
                }
            }
            goto block_1;
        }
    }
    else
    {
        process_context_4 = NULL;
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && (process_context_4 = NULL, *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x16, WD_SYMBOL_ADDRESS(WPP_987d9fc7520d333ff9fdca1fa9c66d57_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
        }
        block_1:
        if (process_context)
        {
            MpReleaseProcessContext(process_context);
        }
    }
    if (process_context_4)
    {
        MpReleaseProcessContext(process_context_4);
    }
    return;
}

void MpObSendOpenProcessBMNotification(uint64_t input, int64_t input_2, void *input_3, int64_t input_4, uint32_t input_5, uint32_t input_6, char input_7, char input_8)
{
    int32_t *atomic_value;
    uint16_t value;
    uint64_t event_id;
    uint16_t *string;
    int64_t values[4];
    uint32_t token_information[2];
    uint64_t *creation_time;
    uint16_t *process;
    uint16_t *wide_text;
    uint16_t *allocation;
    uint32_t value_2;
    uint32_t trace_argument_1;
    uint64_t value_3;
    uint32_t value_4;
    uint8_t byte_value;
    uint32_t value_5;
    uint32_t value_6;
    uint32_t value_7;
    int64_t process_id;
    uint64_t process_id_2;
    uint32_t value_8;
    int64_t value_9;
    char byte_value_2;
    char byte_value_3;
    uint64_t *data_pointer;
    int32_t trace_argument_1_2;
    uint32_t value_11;
    int64_t token;
    byte_value_3 = input_8;
    byte_value_2 = input_7;
    value_4 = (uint32_t)((uint64_t)value_3 >> 0x20);
    string = NULL;
    values[0] = 0;
    values[1] = 0;
    values[2] = 0;
    values[3] = 0;
    creation_time = NULL;
    value_5 = 0x70;
    wide_text = NULL;
    process = NULL;
    value_6 = 0;
    value_7 = 0;
    process_id = input_2;
    process_id_2 = input;
    value_9 = input_4;
    if (!(*(uint32_t *)(MpData + 0x364) & 2) || !(input_5 & 0x2ea) && !input_7 && !input_8)
    {
        return;
    }
    if (!input)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1d, WD_SYMBOL_ADDRESS(WPP_987d9fc7520d333ff9fdca1fa9c66d57_Traceguids), (uint64_t)KeGetCurrentThread());
        }
        return;
    }
    if (((int32_t *)input_3)[0x1a] == 1)
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4))
        {
            return;
        }
        event_id = 0x1e;
        WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_987d9fc7520d333ff9fdca1fa9c66d57_Traceguids));
        return;
    }
    if (!input_7 && !input_8)
    {
        if (((uint32_t *)input_3)[0xd] & 8 && ((uint32_t *)input_3)[0xe] & 0x4000 || (trace_argument_1 = ((uint32_t *)input_3)[0xe], ((uint32_t *)input_3)[0xd] & 1 && !(trace_argument_1 >> 0xe & 1)))
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4))
            {
                return;
            }
            event_id = 0x1f;
            WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_987d9fc7520d333ff9fdca1fa9c66d57_Traceguids));
            return;
        }
        if (trace_argument_1 & 8)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x20, WD_SYMBOL_ADDRESS(WPP_987d9fc7520d333ff9fdca1fa9c66d57_Traceguids), trace_argument_1);
            }
            return;
        }
    }
    SeCaptureSubjectContext(values);
    token = values[2];
    if (values[0])
    {
        token = values[0];
    }
    if (!token)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x21, WD_SYMBOL_ADDRESS(WPP_987d9fc7520d333ff9fdca1fa9c66d57_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_UNSUCCESSFUL & 0xffffffffULL);
        }
        SeReleaseSubjectContext(values);
        return;
    }
    token_information[0] = 0;
    trace_argument_1_2 = SeQueryInformationToken(token, 0xc, token_information);
    value_2 = token_information[0];
    if (trace_argument_1_2 < 0)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            event_id = ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)trace_argument_1_2 & 0xffffffffULL;
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x10, WD_SYMBOL_ADDRESS(WPP_fa8e7b00178136a6e2a2b6da068185ef_Traceguids), (uint64_t)KeGetCurrentThread(), event_id);
            value_4 = (uint32_t)((uint64_t)event_id >> 0x20);
        }
        SeReleaseSubjectContext(values);
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x22, WD_SYMBOL_ADDRESS(WPP_987d9fc7520d333ff9fdca1fa9c66d57_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)trace_argument_1_2 & 0xffffffffULL);
        }
        return;
    }
    SeReleaseSubjectContext(values);
    if (input_5 != input_6)
    {
        byte_value = 1;
        trace_argument_1_2 = MpGetProcessName(input, &wide_text);
        string = wide_text;
        if (trace_argument_1_2)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x23, WD_SYMBOL_ADDRESS(WPP_987d9fc7520d333ff9fdca1fa9c66d57_Traceguids), trace_argument_1_2);
            }
            trace_argument_1 = 0x70;
        }
        else
        {
            value_5 = *wide_text + 0x72;
            value_6 = 0x70;
            trace_argument_1 = value_5;
        }
        trace_argument_1_2 = MpGetProcessName(process_id, &process);
        if (trace_argument_1_2)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x24, WD_SYMBOL_ADDRESS(WPP_987d9fc7520d333ff9fdca1fa9c66d57_Traceguids), trace_argument_1_2);
            }
            allocation = process;
        }
        else
        {
            value_5 = trace_argument_1 + *process + 2;
            allocation = process;
            value_7 = trace_argument_1;
            trace_argument_1 = value_5;
        }
    }
    else
    {
        byte_value = 0;
        allocation = string;
        trace_argument_1 = 0x70;
    }
    trace_argument_1_2 = MpAsyncCreateNotification(&creation_time, trace_argument_1);
    data_pointer = creation_time;
    if (0 <= trace_argument_1_2)
    {
        *creation_time = 0;
        creation_time = NULL;
        process = NULL;
        *(uint32_t *)(&data_pointer[1]) = value_5;
        *(uint32_t *)(&data_pointer[2]) = 4;
        trace_argument_1_2 = PsLookupProcessByProcessId(process_id_2, &process);
        if (0 <= trace_argument_1_2)
        {
            creation_time = (uint64_t *)PsGetProcessCreateTimeQuadPart(process);
            ObfDereferenceObject(process);
        }
        *(int32_t *)(&data_pointer[3]) = (int32_t)process_id_2;
        *(uint64_t *)((int64_t)data_pointer + 0x1c) = MpFileTimeFromUlong64(creation_time);
        creation_time = NULL;
        if (process_id)
        {
            process = NULL;
            trace_argument_1_2 = PsLookupProcessByProcessId(process_id, &process);
            if (0 <= trace_argument_1_2)
            {
                creation_time = (uint64_t *)PsGetProcessCreateTimeQuadPart(process);
                ObfDereferenceObject(process);
            }
        }
        value = 0;
        ((uint32_t *)data_pointer)[9] = (int32_t)process_id;
        event_id = MpFileTimeFromUlong64(creation_time);
        trace_argument_1 = value_6;
        value_11 = byte_value;
        data_pointer[5] = event_id;
        ((uint32_t *)data_pointer)[0xd] = input_5;
        *(uint32_t *)(&data_pointer[6]) = value_2;
        data_pointer[7] = 0;
        data_pointer[8] = 0;
        ((uint32_t *)data_pointer)[0x1b] = (uint32_t)byte_value;
        if (byte_value_2)
        {
            value_11 |= 2;
            ((uint32_t *)data_pointer)[0x1b] = value_11;
            if (!byte_value)
            {
                value_11 = 10;
                ((uint32_t *)data_pointer)[0x1b] = 10;
            }
        }
        if (byte_value_3 && (((uint32_t *)data_pointer)[0x1b] = value_11 | 4, !byte_value))
        {
            ((uint32_t *)data_pointer)[0x1b] = value_11 | 0x14;
        }
        data_pointer[9] = 0;
        data_pointer[10] = 0;
        if (byte_value_2)
        {
            event_id = ((uint64_t *)input_3)[0x12];
            data_pointer[9] = ((uint64_t *)input_3)[0x11];
            data_pointer[10] = event_id;
        }
        data_pointer[0xb] = 0;
        data_pointer[0xc] = 0;
        if (byte_value_3)
        {
            value_4 = *(uint32_t *)(value_9 + 0x9c);
            value_2 = *(uint32_t *)(value_9 + 0xa0);
            value_8 = *(uint32_t *)(value_9 + 0xa4);
            *(uint32_t *)(&data_pointer[0xb]) = *(uint32_t *)(value_9 + 0x98);
            ((uint32_t *)data_pointer)[0x17] = value_4;
            *(uint32_t *)(&data_pointer[0xc]) = value_2;
            ((uint32_t *)data_pointer)[0x19] = value_8;
        }
        if (string && value != *string)
        {
            *(uint32_t *)(&data_pointer[7]) = *string + 2;
            ((uint32_t *)data_pointer)[0xf] = value_6;
            memmove((uint64_t *)((int64_t)data_pointer + (uint64_t)value_6), *(uint64_t **)(&string[4]), *string);
            value = 0;
            ((uint16_t *)data_pointer)[*string + trace_argument_1 >> 1] = 0;
        }
        trace_argument_1 = value_7;
        if (allocation && value != *allocation)
        {
            *(uint32_t *)(&data_pointer[8]) = *allocation + 2;
            ((uint32_t *)data_pointer)[0x11] = value_7;
            memmove((uint64_t *)((int64_t)data_pointer + (uint64_t)value_7), *(uint64_t **)(&allocation[4]), *allocation);
            ((uint16_t *)data_pointer)[*allocation + trace_argument_1 >> 1] = 0;
        }
        trace_argument_1_2 = MpAsyncSendNotification(data_pointer, value_5, 0, 1, input_3);
        value_4 = (uint32_t)((uint64_t)input_3 >> 0x20);
        if (0 <= trace_argument_1_2)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                WPP_SF_ddd(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x27, WD_SYMBOL_ADDRESS(WPP_987d9fc7520d333ff9fdca1fa9c66d57_Traceguids), process_id_2 & 0xffffffff, ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)((int32_t)process_id) & 0xffffffffULL, input_5);
            }
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            event_id = 0x26;
            goto block_1;
        }
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        event_id = 0x25;
        block_1:
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_987d9fc7520d333ff9fdca1fa9c66d57_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)trace_argument_1_2 & 0xffffffffULL);
    }
    if (data_pointer)
    {
        atomic_value = &((int32_t *)data_pointer)[3];
        trace_argument_1_2 = WdAtomicAdd32((volatile int32_t *)atomic_value, -1);
        if (trace_argument_1_2 == 1)
        {
            ExFreePoolWithTag(&data_pointer[-3], 0x6d61504d);
        }
    }
    if (string)
    {
        MpFreeString(string);
    }
    if (allocation)
    {
        ExFreePoolWithTag(allocation, 0x7375704d);
    }
    return;
}

int32_t MpAppendUnicodeStringToUnicodeString(WD_LAYOUT_10 *input, uint16_t *input_2, uint64_t *input_3, uint32_t pool_tag)
{
    int32_t value;
    uint16_t *allocation;
    uint32_t value_2;
    value_2 = *input_2 + 2 + (uint32_t)input->field_0x0;
    value = -0x3fffffff;
    if (0x10000 <= value_2)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qDL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x33, WD_SYMBOL_ADDRESS(WPP_987d9fc7520d333ff9fdca1fa9c66d57_Traceguids), (uint64_t)KeGetCurrentThread(), WD_STATUS_UNSUCCESSFUL, value_2);
        }
    }
    else
    {
        allocation = (uint16_t *)MpAllocatePoolWithTag(1, value_2 + 0x10, pool_tag);
        if (allocation)
        {
            *(uint16_t **)(&allocation[4]) = &allocation[8];
            memmove(&allocation[8], input->field_0x8, input->field_0x0);
            *allocation = input->field_0x0;
            allocation[1] = (uint16_t)value_2;
            value = RtlAppendUnicodeStringToString(allocation, input_2);
            if (0 <= value)
            {
                *input_3 = allocation;
            }
            else
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x35, WD_SYMBOL_ADDRESS(WPP_987d9fc7520d333ff9fdca1fa9c66d57_Traceguids), (uint64_t)KeGetCurrentThread(), value);
                }
                ExFreePoolWithTag(allocation, pool_tag);
            }
        }
        else
        {
            value = -0x3fffff66;
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x34, WD_SYMBOL_ADDRESS(WPP_987d9fc7520d333ff9fdca1fa9c66d57_Traceguids), (uint64_t)KeGetCurrentThread(), WD_STATUS_INSUFFICIENT_RESOURCES);
            }
        }
    }
    return value;
}

uint64_t MpAllowCodeInjection(void *input, void *input_2, uint64_t input_3)
{
    uint32_t value;
    char byte_value;
    uint64_t value_2;
    uint64_t event_id;
    uint64_t value_3;
    uint64_t event_id_2;
    byte_value = MpIsProcessExemptByContext(input);
    value_2 = WdSharedTickCount;
    if (byte_value)
    {
        value_2 = WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control);
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || (value_2 = *(uint32_t *)(WPP_GLOBAL_Control + 0x2c), !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)))
        {
            return (uint64_t)value_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
        }
        event_id_2 = 0x17;
    }
    else
    {
        if (input && !(*(int32_t *)(MpData + 0x98c)) && (*(int64_t *)(MpData + 0xe8) || value_2 <= (uint64_t)((uint64_t)((0 | (uint64_t)36000000000) / (uint64_t)((uint32_t)KeQueryTimeIncrement())) + *(int64_t *)(MpData + 0xfc0))))
        {
            value = ((uint32_t *)input)[0xd];
            if (value >> 0xf & 1)
            {
                ((uint32_t *)input)[0xd] = value & 0xffff7fff;
            }
            else if (!(((uint32_t *)input)[0x48] & 0x20))
            {
                if (value & 0x10 && (!input_2 || ((uint32_t *)input_2)[0xd] & 0x10))
                {
                    value_2 = WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control);
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && (value_2 = *(uint32_t *)(WPP_GLOBAL_Control + 0x2c), *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4))
                    {
                        value_2 = WPP_SF_DD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x19, WD_SYMBOL_ADDRESS(WPP_987d9fc7520d333ff9fdca1fa9c66d57_Traceguids), ((uint32_t *)input)[6], ((uint32_t *)input_2)[6]);
                    }
                }
                else
                {
                    if (((int32_t *)input)[0x3c] != 0x13)
                    {
                        event_id = 0;
                        WdUnresolvedAtomicBegin();
                        value_2 = *(uint64_t *)((int64_t)input_2 + 0x40);
                        if (value_2)
                        {
                            event_id = value_2;
                        }
                        else
                        {
                            *(uint64_t *)((int64_t)input_2 + 0x40) = 0;
                        }
                        WdUnresolvedAtomicEnd();
                        value_3 = 0;
                        WdUnresolvedAtomicBegin();
                        value_2 = *(uint64_t *)((int64_t)input + 0x48);
                        if (value_2)
                        {
                            value_3 = value_2;
                        }
                        else
                        {
                            *(uint64_t *)((int64_t)input + 0x48) = 0;
                        }
                        WdUnresolvedAtomicEnd();
                        if (!event_id || value_3 == 0xffffffffffffffff || value_3 & event_id)
                        {
                            event_id_2 = 1;
                        }
                        else
                        {
                            event_id_2 = 0;
                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                            {
                                WPP_SF_ZDZD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, ((uint64_t)((uint64_t)((uint64_t)input_3 >> 8)) & 0xffffffffffffffULL) << 8 | (uint64_t)(value_3 == 0xffffffffffffffff) & 0xffULL, ((int16_t **)input_2)[0x10], ((uint32_t *)input_2)[6], ((int16_t **)input)[0x10], ((uint32_t *)input)[6]);
                            }
                            MpLogPrintfW(L"[Mini-filter] Denied injection into process [%wZ][Pid:%u] from process [%wZ][Pid:%u].", ((uint64_t *)input_2)[0x10], ((uint32_t *)input_2)[6], ((uint64_t *)input)[0x10], ((uint32_t *)input)[6]);
                        }
                        return event_id_2;
                    }
                    value_2 = WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control);
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && (value_2 = *(uint32_t *)(WPP_GLOBAL_Control + 0x2c), *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4))
                    {
                        value_2 = WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1a, WD_SYMBOL_ADDRESS(WPP_987d9fc7520d333ff9fdca1fa9c66d57_Traceguids));
                    }
                }
                return (uint64_t)value_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
            }
        }
        value_2 = WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control);
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || (value_2 = *(uint32_t *)(WPP_GLOBAL_Control + 0x2c), !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)))
        {
            return (uint64_t)value_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
        }
        event_id_2 = 0x18;
    }
    value_2 = WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id_2, WD_SYMBOL_ADDRESS(WPP_987d9fc7520d333ff9fdca1fa9c66d57_Traceguids), ((uint32_t *)input)[6]);
    return (uint64_t)value_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
}

uint64_t MpAllowAccessBasedOnHipsRule(void *input, void *event_id, uint32_t provider, uint32_t input_2, uint32_t input_3, char *input_4)
{
    uint64_t value;
    uint64_t value_2;
    uint64_t value_3;
    uint16_t *trace_argument_4;
    if (provider & ((uint32_t *)input)[0xe] && (value = ((uint32_t *)event_id)[0xe], !(input_3 & ((uint32_t *)event_id)[0xe])))
    {
        input_2 = ((uint32_t *)input)[0xe] & input_2;
        *input_4 = 1;
        value_3 = WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control);
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && (value_3 = *(uint32_t *)(WPP_GLOBAL_Control + 0x2c), *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4))
        {
            trace_argument_4 = L"ALLOWED";
            if (!input_2)
            {
                trace_argument_4 = L"BLOCKED";
            }
            value_3 = WPP_SF_DDDS(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, provider, provider, ((uint32_t *)input)[6], ((uint32_t *)event_id)[6], trace_argument_4);
        }
        value_2 = ((uint64_t)((uint64_t)(value_3 >> 8)) & 0xffffffffffffffULL) << 8 | (uint64_t)(input_2 != 0) & 0xffULL;
    }
    else
    {
        value_2 = (uint64_t)value & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
    }
    return value_2;
}

void MpFreeWithTag(void *allocation, uint32_t tag)
{
    if (allocation)
    {
        ExFreePoolWithTag(allocation, tag);
    }
}

void MpObHipsCallback(WD_LAYOUT_61 *input, uint32_t *input_2, int32_t input_3, int32_t input_4, void *input_5, void *input_6, uint8_t *input_7, char *input_8)
{
    int32_t *atomic_value;
    char byte_value;
    uint8_t byte_value_2;
    char byte_value_3;
    uint8_t buffer[2];
    uint64_t provider;
    uint64_t value;
    uint64_t value_2;
    uint64_t value_3;
    int16_t *trace_argument_2;
    int32_t value_4;
    uint32_t value_5;
    uint64_t value_6;
    uint8_t *bytes;
    uint32_t value_7;
    uint64_t value_8;
    uint64_t value_9;
    uint32_t value_10;
    uint8_t event_id;
    uint32_t value_11;
    uint32_t value_12;
    int64_t value_13;
    int64_t value_14;
    bool enabled;
    void *event_id_2;
    void *event_id_3;
    char byte_value_4;
    event_id_3 = input_6;
    event_id_2 = input_5;
    value_5 = (uint32_t)((uint64_t)value_2 >> 0x20);
    value_10 = (uint32_t)((uint64_t)value_9 >> 0x20);
    value_7 = (uint32_t)((uint64_t)value_6 >> 0x20);
    if (!input_2 || !input_3 || !input_4 || (!input_5 || !input_6) || !input)
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
        {
            return;
        }
        if (*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x28, WD_SYMBOL_ADDRESS(WPP_987d9fc7520d333ff9fdca1fa9c66d57_Traceguids));
            return;
        }
        return;
    }
    if (input_7)
    {
        *input_7 = 0;
    }
    if (input_8)
    {
        *input_8 = '\0';
    }
    byte_value_2 = 0;
    event_id = 0;
    buffer[0] = 0;
    byte_value = '\0';
    byte_value_3 = '\0';
    if (!(*(uint32_t *)(MpData + 0x360) & 8))
    {
        goto block_2;
    }
    if (*input_2 & 0x2a)
    {
        atomic_value = &((int32_t *)input_6)[0x1a];
        value_4 = WdAtomicAdd32((volatile int32_t *)atomic_value, 1);
        value_11 = value_4 + 1;
        provider = value_11;
        if (value_11 <= 2)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                value_3 = ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)value_11 & 0xffffffffULL;
                WPP_SF_qdddd(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x29, WD_SYMBOL_ADDRESS(WPP_987d9fc7520d333ff9fdca1fa9c66d57_Traceguids), (uint64_t)KeGetCurrentThread(), value_3, (((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)(*(uint32_t *)(MpData + 0x360) >> 3) & 0xffffffffULL) & 0xffffffff00000001, (uint64_t)value_8 & 0xffffffff00000000 | (uint64_t)input_3 & 0xffffffff, ((uint64_t)value_10 & 0xffffffffULL) << 32 | (uint64_t)input_4 & 0xffffffffULL);
                value_5 = (uint32_t)((uint64_t)value_3 >> 0x20);
            }
            goto block_1;
        }
        byte_value = MpAllowCodeInjection(input_5, input_6);
        if (byte_value && !(((uint32_t *)event_id_3)[0xd] & 0x400))
        {
            bytes = buffer;
            provider = 0x8000;
            value_3 = ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)0x80000 & 0xffffffffULL;
            byte_value = MpAllowAccessBasedOnHipsRule(event_id_2, event_id_3, 0x8000, 0x10000, value_3, bytes);
            value_5 = (uint32_t)((uint64_t)value_3 >> 0x20);
            value_7 = (uint32_t)((uint64_t)bytes >> 0x20);
            if (((uint8_t)((uint32_t *)event_id_3)[0x49] & 0xf) != 1 && (((int32_t *)event_id_3)[0x4a] <= 0 && *(int32_t *)(MpData + 0x1048) && !byte_value))
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qddDD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18));
                }
                byte_value = 1;
                event_id = byte_value_2;
            }
            else
            {
                event_id = buffer[0];
            }
            byte_value_2 = event_id;
        }
        value_4 = ((int32_t *)event_id_2)[0x3c];
        value = (uint64_t)(provider >> 8);
        if (value_4 != 4 && value_4 != 5 && (value_4 != 6 && (value_4 != 0xb && value_4 != 0xc)))
        {
            provider = (uint64_t)value << 8;
        }
        else
        {
            provider = ((uint64_t)value & 0xffffffffffffffULL) << 8 | (uint64_t)1 & 0xffULL;
        }
        value_12 = ((uint32_t *)event_id_3)[0x3c];
        buffer[0] = (uint8_t)provider;
        if (value_12 != 4 && value_12 != 5 && value_12 != 6 && (value_12 != 0xb && value_12 != 0xc) && (value_12 != 0xf && (0x21 <= value_12 || !(0x110004000U >> ((int64_t)((int32_t)value_12) & 0x3fU) & 1))))
        {
            enabled = 0;
        }
        else
        {
            enabled = 1;
        }
        if (byte_value_2)
        {
            if (!(*(int32_t *)(MpData + 0x1020)) && buffer[0] && enabled && ((uint32_t *)event_id_2)[0x48] & 2)
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                {
                    trace_argument_2 = ((int16_t **)event_id_2)[0x10];
                    WPP_SF_qZDZD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2b, provider, (uint64_t)KeGetCurrentThread(), trace_argument_2, ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)input_3 & 0xffffffffULL, ((int16_t **)event_id_3)[0x10], ((uint64_t)value_10 & 0xffffffffULL) << 32 | (uint64_t)input_4 & 0xffffffffULL);
                    value_5 = (uint32_t)((uint64_t)trace_argument_2 >> 0x20);
                    provider = (uint64_t)buffer[0];
                }
                event_id = 0;
                byte_value = 1;
            }
            if (*(int32_t *)(MpData + 0xff8) && input->field_0x0 == 2 && ((char)provider && enabled))
            {
                value_13 = input->field_0x20;
                value_14 = *(int64_t *)(value_13 + 0x10);
                if (IoGetCurrentProcess() == value_14 && value_14 == *(int64_t *)(value_13 + 8))
                {
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                    {
                        value_5 = (uint32_t)((uint64_t)((uint64_t *)event_id_2)[0x10] >> 0x20);
                        WPP_SF_qZDZD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2c);
                    }
                    goto block_1;
                }
            }
        }
        byte_value_2 = event_id;
        if (!byte_value)
        {
            *input_2 = *input_2 & 0xffffffd5;
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qDddZDZDDD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, ((uint64_t *)event_id_3)[0x10], (uint64_t)KeGetCurrentThread());
            }
            if (buffer[0] && enabled && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
            {
                if (input->field_0x0 == 2)
                {
                    PsGetProcessId(*(uint64_t *)(input->field_0x20 + 0x10));
                }
                if (input->field_0x0 == 2)
                {
                    PsGetProcessId(*(uint64_t *)(input->field_0x20 + 8));
                }
                WPP_SF_qdZDZDdddDD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18));
            }
        }
    }
    else
    {
        block_1:
        byte_value_2 = 0;
    }
    byte_value = '\0';
    if (*input_2 & 0xffede7fe && (!(((uint32_t *)event_id_2)[0x48] & 1) || !(((uint8_t *)event_id_2)[0xb8] & 7) || 5 <= (uint8_t)((((uint8_t *)event_id_2)[0xb8] >> 4) - 3)))
    {
        byte_value_4 = MpAllowAccessBasedOnHipsRule(event_id_3, event_id_2, 0x800000, 0x1000000, ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)0x2000000 & 0xffffffffULL, &byte_value_3);
        byte_value = byte_value_3;
        if (((uint8_t)((uint32_t *)event_id_2)[0x49] & 0xf) != 1 && ((int32_t *)event_id_2)[0x4a] <= 0)
        {
            enabled = 0;
        }
        else
        {
            enabled = 1;
        }
        if (!(*(int32_t *)(MpData + 0xffc)))
        {
            enabled = 1;
        }
        if (byte_value_4 || !enabled)
        {
            if (byte_value_3 && !enabled)
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qdddDD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x30);
                }
                byte_value = '\0';
            }
        }
        else
        {
            *input_2 = *input_2 & 0x121801;
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qdddDD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2f);
            }
        }
    }
    block_2:
    if (input_7)
    {
        *input_7 = byte_value_2;
    }

    if (input_8)
    {
        *input_8 = byte_value;
        return;
    }
    return;
}

void MpObShutdown(void)
{
    if (MpData && *(int64_t *)(MpData + 0x38) && *(int64_t *)(MpData + 0x940))
    {
        (*__guard_dispatch_icall_fptr)();
        *(uint64_t *)(MpData + 0x940) = 0;
    }
    return;
}

void MpObAddCallback(uint64_t *input)
{
    int32_t value;
    uint32_t value_2;
    uint32_t value_3;
    uint32_t value_4;
    uint32_t value_5;
    uint64_t value_6;
    uint64_t *data_pointer;
    uint64_t value_7 = 0;
    uint64_t value_8 = 0;
    WD_ROUTINE ob_pre_operation_callback = NULL;
    uint64_t value_9 = 0;
    uint64_t value_10 = 0;
    uint64_t value_11 = 0;
    WD_ROUTINE ob_pre_operation_callback_2 = NULL;
    uint64_t value_12 = 0;
    uint64_t string = 0;
    uint64_t value_14;
    uint64_t value_15 = 0;
    uint16_t value_16;
    uint16_t value_17;
    uint32_t value_18 = 0;
    if (MpData && *(int64_t *)(MpData + 0x30))
    {
        *input = 0;
        RtlInitUnicodeString(&string, L"328010");
        value_8 |= 3;
        value_14 = __imp_PsProcessType;
        value_16 = 0x100;
        ob_pre_operation_callback = MpObPreOperationCallback;
        if (*(uint32_t *)(MpData + 0x360) & 0x10)
        {
            value_11 |= 3;
            value_10 = __imp_ExDesktopObjectType;
            value_17 = 2;
            ob_pre_operation_callback_2 = MpObPreOperationCallback;
        }
        else
        {
            value_17 = 1;
        }
        data_pointer = &value_14;
        value_6 = 0;
        value_2 = (uint32_t)string;
        value_3 = WdLoadField(&string, 4, 4);
        value_4 = (uint32_t)value_7;
        value_5 = WdLoadField(&value_7, 4, 4);
        value = (*__guard_dispatch_icall_fptr)(&value_16, &value_15);
        if (0 <= value)
        {
            *input = value_15;
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xd, WD_SYMBOL_ADDRESS(WPP_987d9fc7520d333ff9fdca1fa9c66d57_Traceguids), (uint64_t)KeGetCurrentThread(), value);
        }
    }
    return;
}

void MpObInitialize(void)
{
    int64_t routine;
    uint64_t value = 0;
    uint64_t value_2 = 0;
    int64_t routine_2;
    uint64_t value_4;
    uint64_t string = 0;
    uint64_t string_2 = 0;
    uint64_t value_5 = 0;
    int32_t value_6;
    if (!(*(uint32_t *)(MpData + 0x360) & 1))
    {
        return;
    }
    RtlInitUnicodeString(&string, L"ObRegisterCallbacks");
    routine = MmGetSystemRoutineAddress(&string);
    if (routine)
    {
        RtlInitUnicodeString(&string_2, L"ObUnRegisterCallbacks");
        routine_2 = MmGetSystemRoutineAddress(&string_2);
        if (!routine_2)
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return;
            }
            value_4 = 0xb;
            goto block_1;
        }
        *(int64_t *)(MpData + 0x30) = routine;
        *(int64_t *)(MpData + 0x38) = routine_2;
        value_6 = MpObAddCallback(&value_5);
        if (0 <= value_6)
        {
            *(uint64_t *)(MpData + 0x940) = value_5;
            return;
        }
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return;
        }
        value_4 = 0xc;
    }
    else
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return;
        }
        value_4 = 10;
        block_1:
        value_6 = -0x3ffffffe;
    }
    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_4, WD_SYMBOL_ADDRESS(WPP_987d9fc7520d333ff9fdca1fa9c66d57_Traceguids), (uint64_t)KeGetCurrentThread(), value_6);
    return;
}

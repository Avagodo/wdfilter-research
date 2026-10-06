#include "wdfilter.h"

void WPP_SF_D(uint64_t trace_handle, uint16_t event_id, uint64_t provider, uint32_t value)
{
    pfnWppTraceMessage(trace_handle, 43, (const WD_GUID *)(uintptr_t)provider,
                      event_id, &value, sizeof(value), (void *)0);
}

int32_t GetMpFileStateWithSeq__cleanup(int32_t *input, WD_LAYOUT_42 *input_2)
{
    if (input && input_2)
    {
        if (*input == 5 && !(*(uint32_t *)(MpData + 0x364) >> 0xf & 1))
        {
            return 5;
        }
        if (input[1] == input_2->field_0x90)
        {
            return *input;
        }
    }
    return 0;
}

uint64_t MpSetStreamState__cleanup(WD_LAYOUT_2 *input, int16_t input_2, void *input_3)
{
    uint32_t value;
    if (input)
    {
        if (input->field_0xa8 & 1)
        {
            return 0xc00000e5;
        }
        if (0xfffd <= (uint16_t)(input_2 - 1U))
        {
            FltAcquirePushLockShared((int64_t)input_3 + 0xc0);
            if (((int64_t *)input_3)[0x1a])
            {
                *(uint32_t *)(((int64_t *)input_3)[0x1a] + 0x18) = 3;
                *(uint32_t *)(((int64_t *)input_3)[0x1a] + 0x1c) = *(uint32_t *)(((int64_t *)input_3)[1] + 0x90);
            }
            else
            {
                ((uint32_t *)input_3)[8] = 3;
                value = ((uint32_t *)input_3)[8];
                ((uint32_t *)input_3)[9] = *(uint32_t *)(((int64_t *)input_3)[1] + 0x90);
                if (value != 3 && (8 <= value || !(0x94U >> (value & 0x1f) & 1)))
                {
                    WdAtomicAnd32((volatile int32_t *)((uint32_t *)((int64_t)input_3 + 0x30)), 0xffffbfff);
                }
            }
            FltReleasePushLock((int64_t)input_3 + 0xc0);
        }
    }
    else
    {
        ((uint32_t *)input_3)[8] = 3;
        ((uint32_t *)input_3)[9] = *(uint32_t *)(((int64_t *)input_3)[1] + 0x90);
        value = ((uint32_t *)input_3)[8];
        if (value != 3 && (7 < value || !(0x94U >> (value & 0x1f) & 1)))
        {
            WdAtomicAnd32((volatile int32_t *)((uint32_t *)((int64_t)input_3 + 0x30)), 0xffffbfff);
        }
    }
    return 0;
}

void WPP_SF_Di(uint64_t input, uint16_t input_2, uint64_t input_3, uint32_t input_4)
{
    uint32_t values[2];
    values[0] = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, input_3, input_2, values, 4, &unrecovered_stack_argument_5, 8, 0);
    return;
}

void WPP_SF_II(uint64_t input, uint64_t input_2, uint64_t input_3, uint64_t input_4)
{
    uint64_t value;
    value = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_b54df57aea2c34b04f95f22ee0a6a450_Traceguids), 0x28, &value, 8, &unrecovered_stack_argument_5, 8, 0);
    return;
}

void WPP_SF_Z(uint64_t input, uint16_t input_2, uint64_t input_3, int16_t *input_4)
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

    (*__guard_dispatch_icall_fptr)(input, 0x2b, input_3, input_2, input_4, 2, value_2, (uint16_t)value, 0);
    return;
}

void WPP_SF_dDdZ(uint64_t input, uint64_t input_2, uint64_t input_3, uint32_t input_4, uint64_t input_5, uint64_t input_6, int16_t *input_7)
{
    int16_t *wide_text;
    int16_t value;
    uint32_t values[2];
    uint64_t value_2;
    if (input_7)
    {
        value = *input_7;
        if (*input_7)
        {
            value_2 = *(uint64_t *)(&input_7[4]);
            goto block_1;
        }
    }
    else
    {
        value = 8;
    }
    value_2 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    block_1:
    wide_text = input_7;

    if (!input_7)
    {
        wide_text = &WdCleanupStorage;
    }
    values[0] = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_b54df57aea2c34b04f95f22ee0a6a450_Traceguids), 0x23, values, 4, &input_5, 4, &input_6, 4, wide_text, 2, value_2, (uint16_t)value, 0);
    return;
}

void WPP_SF_dddZZ(uint64_t input, uint64_t input_2, uint64_t input_3, uint32_t input_4, uint64_t input_5, uint64_t input_6, int16_t *input_7, int16_t *input_8)
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
    if (input_7 && (value_2 = *input_7, *input_7))
    {
        value_3 = *(uint64_t *)(&input_7[4]);
    }
    wide_text_2 = input_7;
    if (!input_7)
    {
        wide_text_2 = &WdCleanupStorage;
    }
    values[0] = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_b54df57aea2c34b04f95f22ee0a6a450_Traceguids), 0x18, values, 4, &input_5, 4, &input_6, 4, wide_text_2, 2, value_3, (uint16_t)value_2, wide_text, 2, value_4, (uint16_t)value, 0);
    return;
}

void WPP_SF_qDDZ(uint64_t input, uint64_t input_2, uint64_t input_3, uint64_t input_4, uint64_t input_5, uint64_t input_6, int16_t *input_7)
{
    int16_t *wide_text;
    int16_t value;
    uint64_t value_2;
    uint64_t value_3;
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
    value_2 = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_b54df57aea2c34b04f95f22ee0a6a450_Traceguids), 0x2d, &value_2, 8, &input_5, 4, &input_6, 4, wide_text, 2, value_3, (uint16_t)value, 0);
    return;
}

void WPP_SF_qDDdqDiiZ(uint64_t input, uint64_t input_2, uint64_t input_3, uint64_t input_4)
{
    int16_t *wide_text;
    int16_t value;
    uint64_t value_2;
    uint64_t value_3;
    uint64_t value_4;
    uint64_t value_5;
    int16_t *wide_text_2;
    value_2 = value_5;
    if (wide_text_2)
    {
        value = *wide_text_2;
        if (*wide_text_2)
        {
            value_4 = *(uint64_t *)(&wide_text_2[4]);
            goto block_1;
        }
    }
    else
    {
        value = 8;
    }
    value_4 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    block_1:
    wide_text = wide_text_2;

    if (!wide_text_2)
    {
        wide_text = &WdCleanupStorage;
    }
    value_3 = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_b54df57aea2c34b04f95f22ee0a6a450_Traceguids), 0x32, &value_3, 8, &unrecovered_stack_argument_5, 4, &unrecovered_stack_argument_6, 4, &unrecovered_stack_argument_7, 4, &value_2, 8, &unrecovered_stack_argument_9, 4, &unrecovered_stack_argument_10, 8, &unrecovered_stack_argument_11, 8, wide_text, 2, value_4, (uint16_t)value, 0);
    return;
}

void WPP_SF_qLqZqq(uint64_t input, uint64_t input_2, uint64_t input_3, uint64_t input_4, uint64_t input_5, uint64_t input_6, int16_t *input_7, uint64_t input_8, uint64_t input_9)
{
    int16_t *wide_text;
    int16_t value;
    uint64_t value_2;
    uint64_t value_3;
    uint64_t value_4;
    uint64_t value_5;
    uint64_t value_6;
    value_4 = input_6;
    value_3 = input_8;
    value_2 = input_9;
    if (input_7)
    {
        value = *input_7;
        if (*input_7)
        {
            value_6 = *(uint64_t *)(&input_7[4]);
            goto block_1;
        }
    }
    else
    {
        value = 8;
    }
    value_6 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    block_1:
    wide_text = input_7;

    if (!input_7)
    {
        wide_text = &WdCleanupStorage;
    }
    value_5 = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_b54df57aea2c34b04f95f22ee0a6a450_Traceguids), 0x21, &value_5, 8, &input_5, 4, &value_4, 8, wide_text, 2, value_6, (uint16_t)value, &value_3, 8, &value_2, 8, 0);
    return;
}

void WPP_SF_qZZ(uint64_t input, uint16_t input_2, uint64_t input_3, uint64_t input_4, int16_t *input_5, int16_t *input_6)
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
    (*__guard_dispatch_icall_fptr)(input, 0x2b, input_3, input_2, &value_3, 8, wide_text_2, 2, value_4, (uint16_t)value_2, wide_text, 2, value_5, (uint16_t)value, 0);
    return;
}

void WPP_SF_qqq(uint64_t input, uint16_t input_2, uint64_t input_3, uint64_t input_4, uint64_t input_5, uint64_t input_6)
{
    uint64_t value;
    uint64_t value_2;
    uint64_t value_3;
    value_2 = input_5;
    value = input_6;
    value_3 = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, input_3, input_2, &value_3, 8, &value_2, 8, &value, 8, 0);
    return;
}

void WPP_SF_qqqiZ(uint64_t input, uint16_t input_2, uint64_t input_3, uint64_t input_4, uint64_t input_5, uint64_t input_6, uint64_t input_7, int16_t *input_8)
{
    int16_t *wide_text;
    int16_t value;
    uint64_t value_2;
    uint64_t value_3;
    uint64_t value_4;
    uint64_t value_5;
    value_3 = input_5;
    value = 8;
    value_2 = input_6;
    if (input_8 && (value = *input_8, *input_8))
    {
        value_5 = *(uint64_t *)(&input_8[4]);
    }
    else
    {
        value_5 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    }
    wide_text = input_8;
    if (!input_8)
    {
        wide_text = &WdCleanupStorage;
    }
    value_4 = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_b54df57aea2c34b04f95f22ee0a6a450_Traceguids), input_2, &value_4, 8, &value_3, 8, &value_2, 8, &input_7, 8, wide_text, 2, value_5, (uint16_t)value, 0);
    return;
}

uint64_t MpPostCleanup(uint64_t data, void *objects, WD_LAYOUT_64 *completion_context, uint32_t flags)
{
    uint16_t value;
    uint16_t value_2;
    int64_t event_id;
    void *data_pointer;
    uint64_t value_3;
    int32_t trace_argument_1;
    int64_t value_4;
    uint64_t value_5;
    uint32_t value_6;
    value_6 = (uint32_t)((uint64_t)value_5 >> 0x20);
    event_id = completion_context->field_0x8;
    value = *(uint16_t *)(event_id + 0x80);
    data_pointer = completion_context->field_0x18;
    value_3 = ((uint64_t *)objects)[4];
    *(uint64_t *)(event_id + 0x48) = MpGetUsn(value_3, data_pointer, value);
    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
    {
        event_id = completion_context->field_0x8;
        WPP_SF_qDDdqDiiZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, (int32_t)completion_context->field_0x2, completion_context, ((uint64_t)value_6 & 0xffffffffULL) << 32 | (uint64_t)flags & 0xffffffffULL, completion_context->field_0x0, (int32_t)completion_context->field_0x2, completion_context->field_0x18, *(uint32_t *)(event_id + 0x8c), *(uint64_t *)(event_id + 0x40), *(uint64_t *)(event_id + 0x48), ((int64_t *)objects)[4] + 0x58);
    }
    trace_argument_1 = MpAsyncSendNotification(completion_context->field_0x8, completion_context->field_0x10, 0, 0xffffffff, completion_context->field_0x20);
    if (trace_argument_1 < 0 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
    {
        WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x33, WD_SYMBOL_ADDRESS(WPP_b54df57aea2c34b04f95f22ee0a6a450_Traceguids), trace_argument_1);
    }
    MpAsyncDereferenceNotification(completion_context->field_0x8);
    FltReleaseContext(completion_context->field_0x18);
    if (completion_context->field_0x20)
    {
        MpReleaseProcessContext(completion_context->field_0x20);
    }
    event_id = MpData;
    value_4 = MpData + 0x840;
    *(int32_t *)(MpData + 0x85c) = *(int32_t *)(MpData + 0x85c) + 1;
    value_2 = *(uint16_t *)(event_id + 0x850);
    if ((uint16_t)ExQueryDepthSList(value_4) < value_2)
    {
        ExpInterlockedPushEntrySList(value_4, completion_context);
        return 0;
    }
    *(int32_t *)(event_id + 0x860) = *(int32_t *)(event_id + 0x860) + 1;
    (*__guard_dispatch_icall_fptr)(completion_context);
    return 0;
}

void MpPreCleanup(void *data, uint64_t *****objects, uint64_t *completion_context)
{
    int32_t *atomic_value;
    int64_t w_p_p__g_l_o_b_a_l__control;
    uint64_t value = 0;
    uint64_t ****provider = NULL;
    uint64_t value_2 = 0;
    uint64_t process_id;
    uint64_t *index;
    uint64_t *****process_id_2;
    uint64_t process_id_3;
    uint64_t *data_pointer;
    uint64_t ****instance;
    uint32_t value_4;
    uint64_t event_id;
    uint64_t ****file_object;
    int64_t *data_pointer_2;
    uint64_t *****data_pointer_3 = NULL;
    uint64_t ****data_pointer_4 = NULL;
    uint64_t ****data_pointer_5 = NULL;
    uint64_t ****stream_context = NULL;
    uint64_t *****handle_context;
    uint64_t ****information_buffer = NULL;
    uint32_t values[2];
    uint64_t value_5;
    char byte_value = 0;
    WD_LAYOUT_42 *record;
    uint64_t ****trace_argument_5 = NULL;
    uint64_t ****data_pointer_6 = NULL;
    uint64_t *****context = NULL;
    int64_t value_6 = 0;
    char buffer_2[8];
    uint64_t ****data_pointer_7;
    uint64_t *****handle_context_2;
    uint64_t *data_pointer_8;
    uint64_t *****data_pointer_9;
    uint64_t value_7;
    void *data_2;
    uint64_t *****data_pointer_10;
    uint64_t *****trace_argument_1;
    uint64_t *****data_pointer_11;
    uint32_t value_8;
    uint64_t ***data_pointer_12;
    uint8_t byte_value_2;
    int64_t process = 0;
    uint64_t *****data_pointer_13 = NULL;
    bool enabled;
    bool enabled_2 = 0;
    bool enabled_3;
    uint64_t ****trace_argument_3;
    uint64_t ****event_id_2;
    uint32_t value_9;
    uint64_t value_10;
    uint64_t trace_handle;
    uint32_t value_11;
    char byte_value_3 = '\0';
    bool enabled_4;
    uint8_t byte_value_4 = 0;
    char byte_value_5;
    uint32_t value_12 = 0;
    uint64_t *****data_pointer_14 = NULL;
    int32_t trace_argument_1_2;
    int32_t provider_2 = 0;
    int32_t value_13 = 0;
    uint32_t value_14 = 0;
    uint64_t *****data_pointer_15 = NULL;
    uint32_t value_15;
    uint32_t value_16;
    uint32_t value_17;
    int32_t trace_argument_1_3;
    uint32_t value_18;
    uint32_t value_19;
    uint32_t value_20 = 0;
    void *data_3;
    int32_t value_21;
    uint32_t value_22;
    uint64_t *data_pointer_16;
    void *data_pointer_17;
    uint64_t value_23 = 0;
    int64_t value_24 = 0;
    int32_t trace_argument_1_4;
    uint64_t value_25 = 0;
    uint64_t value_26 = 0;
    uint64_t current_thread;
    uint64_t value_27;
    uint64_t current_thread_2;
    uint64_t *****data_pointer_18;
    uint64_t current_thread_3;
    uint64_t current_thread_4;
    uint64_t value_28;
    uint64_t current_thread_5;
    int32_t trace_argument_1_5 = 0;
    uint64_t value_29;
    uint64_t value_30;
    uint64_t value_31;
    uint64_t current_thread_6;
    uint64_t current_thread_7;
    uint64_t value_32;
    uint64_t value_33;
    uint64_t value_34 = 0;
    int64_t value_35 = 0;
    uint64_t value_36 = 0;
    data_pointer_9 = objects;
    data_pointer_8 = completion_context;
    data_3 = data;
    data_pointer_16 = completion_context;
    data_pointer_17 = data;
    if (!objects[4])
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return;
        }
        event_id = 10;
        WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_b54df57aea2c34b04f95f22ee0a6a450_Traceguids));
        return;
    }
    enabled_3 = 0;
    if (FltSupportsStreamHandleContexts())
    {
        if (!(*(char *)(MpData + 0xe30)))
        {
            block_1:
            handle_context_2 = NULL;

            file_object = objects[4];
            instance = objects[3];
            if (0 <= (int32_t)FltGetStreamHandleContext(instance, file_object, &handle_context_2))
            {
                process_id_2 = handle_context_2;
                enabled_3 = (*(uint32_t *)(&handle_context_2[5]) & 4) != 0;
                trace_argument_1 = handle_context_2;
                if (enabled_3)
                {
                    handle_context_2 = NULL;
                    trace_argument_1 = data_pointer_13;
                    context = process_id_2;
                }
                if (trace_argument_1)
                {
                    FltReleaseContext(trace_argument_1);
                }
            }
            goto block_2;
        }
        WdUnresolvedAtomicBegin();
        enabled = *(int64_t *)(MpData + 0xe38) == 0;
        if (enabled)
        {
            *(int64_t *)(MpData + 0xe38) = 0;
        }
        WdUnresolvedAtomicEnd();
        if (!enabled)
        {
            goto block_1;
        }
    }
    else
    {
        block_2:
        if (enabled_3)
        {
            if (context)
            {
                WdAtomicAnd32((volatile int32_t *)((uint32_t *)(&context[5])), 0xfffffffb);
                WdUnresolvedAtomicBegin();
                data_pointer_2 = (int64_t *)(MpData + 0xe38);
                process = *data_pointer_2;
                *data_pointer_2 = *data_pointer_2 + -1;
                WdUnresolvedAtomicEnd();
                if (process + -1 < 0)
                {
                    *(char *)(MpData + 0xe30) = 0;
                }
                FltDeleteStreamHandleContext(objects[3], objects[4], 0);
                FltReleaseContext(context);
                return;
            }
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return;
            }
            event_id = 0xb;
            WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_b54df57aea2c34b04f95f22ee0a6a450_Traceguids));
            return;
        }
    }
    process_id_2 = &data_pointer_3;
    trace_argument_1_3 = KeWaitForSingleObject(IoGetCurrentProcess(), 0, 0, 0, process_id_2);
    if (trace_argument_1_3 != 0x102)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xc, WD_SYMBOL_ADDRESS(WPP_b54df57aea2c34b04f95f22ee0a6a450_Traceguids), ((uint64_t *)data)[1], (uint64_t)((uint64_t)process_id_2) & 0xffffffff00000000 | (uint64_t)trace_argument_1_3 & 0xffffffff);
        }
        return;
    }
    IoGetStackLimits(&data_pointer_5, &data_pointer_4);
    if (objects[4] < data_pointer_4 && data_pointer_5 < objects[4] || (event_id = (uint64_t)KeGetCurrentThread(), w_p_p__g_l_o_b_a_l__control = *(int64_t *)(MpData + 0xe8), IoThreadToProcess(event_id) == w_p_p__g_l_o_b_a_l__control) || (event_id = (uint64_t)KeGetCurrentThread(), w_p_p__g_l_o_b_a_l__control = *(int64_t *)(MpData + 0x100), IoThreadToProcess(event_id) == w_p_p__g_l_o_b_a_l__control || (file_object = objects[4], instance = objects[3], (int32_t)FltGetStreamContext(instance, file_object, &stream_context) <= -1)))
    {
        return;
    }
    if (stream_context == BreakOnStream)
    {
        file_object = stream_context;
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            WPP_SF_qqq(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xd, WD_SYMBOL_ADDRESS(WPP_b54df57aea2c34b04f95f22ee0a6a450_Traceguids), ((uint64_t *)data)[1], stream_context, objects[4]);
            file_object = stream_context;
        }
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            data_pointer_12 = file_object[0x16];
            event_id = *(uint64_t *)(WPP_GLOBAL_Control + 0x18);
            record = (WD_LAYOUT_42 *)file_object[1];
            WPP_SF_Di(event_id, 0xe, WD_SYMBOL_ADDRESS(WPP_b54df57aea2c34b04f95f22ee0a6a450_Traceguids), GetMpFileStateWithSeq__cleanup(&file_object[4], record), data_pointer_12);
        }
        (*(WD_ROUTINE)swi(3))();
        return;
    }
    trace_argument_1 = objects;
    MpDlpPreCleanup(data, objects);
    if (*(char *)(MpData + 0x9a0))
    {
        current_thread = (uint64_t)KeGetCurrentThread();
        value_27 = current_thread;
        byte_value_5 = PsIsSystemThread();
        value_11 = (uint32_t)(value_10 >> 0x20);
        if (!byte_value_5)
        {
            goto block_5;
        }
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            event_id = 0xf;
            w_p_p__g_l_o_b_a_l__control = WPP_GLOBAL_Control;
            goto block_6;
        }
        block_3:
        trace_argument_1 = data_pointer_14;

        block_4:
        ;
    }
    else
    {
        block_5:
        value_11 = (uint32_t)(value_10 >> 0x20);

        if (*(int32_t *)(&stream_context[1][10]) < 0)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                event_id = 0x10;
                w_p_p__g_l_o_b_a_l__control = WPP_GLOBAL_Control;
                goto block_6;
            }
            goto block_3;
        }
        if (*(uint32_t *)(&stream_context[6]) & 1)
        {
            buffer_2[0] = 0;
            file_object = objects[4];
            instance = objects[3];
            if (0 <= (int32_t)FltGetStreamHandleContext(instance, file_object, &context))
            {
                if (!(*(char *)(MpData + 0x250)) || !(*(uint32_t *)(MpData + 0x254) & 4) || *(uint32_t *)(&context[5]) & 1)
                {
                    if (*(uint32_t *)(&context[5]) & 2)
                    {
                        MpScanBootSector(data, objects, 2, buffer_2, NULL);
                    }
                    atomic_value = &((int32_t *)stream_context[1])[0x19];
                    trace_argument_1_5 = WdAtomicAdd32((volatile int32_t *)atomic_value, -1);
                    if (trace_argument_1_5 == 1)
                    {
                        MpPurgeInstanceScannedFileCache(stream_context[1]);
                    }
                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4))
                    {
                        goto block_3;
                    }
                    event_id = 0x13;
                    w_p_p__g_l_o_b_a_l__control = WPP_GLOBAL_Control;
                    block_6:
                    WPP_SF_Z(*(uint64_t *)(w_p_p__g_l_o_b_a_l__control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_b54df57aea2c34b04f95f22ee0a6a450_Traceguids), &objects[4][0xb]);

                    trace_argument_1 = NULL;
                    goto block_4;
                }
                *(uint32_t *)(&context[5]) = 0;
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                {
                    event_id = 0x12;
                    w_p_p__g_l_o_b_a_l__control = WPP_GLOBAL_Control;
                    goto block_6;
                }
            }
            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                event_id = 0x11;
                w_p_p__g_l_o_b_a_l__control = WPP_GLOBAL_Control;
                goto block_6;
            }
            goto block_3;
        }
        value_2 = ((uint64_t)WdLoadField(&value_2, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)0xffffffff & 0xffffffffULL;
        process = MpGetRequestorProcess(data);
        w_p_p__g_l_o_b_a_l__control = PsGetProcessCreateTimeQuadPart(process);
        process_id = PsGetProcessId(process);
        process = MpProcessTable;
        trace_argument_1_3 = -0x3ffffddb;
        data_pointer_14 = NULL;
        data_pointer_15 = NULL;
        data_pointer_10 = data_pointer_13;
        if (process_id)
        {
            value_22 = (uint32_t)(process_id >> 2) & 0x7f;
            value_7 = value_22;
            KeEnterCriticalRegion();
            ExAcquireResourceSharedLite(process + 8, (uint64_t)((uint64_t)trace_argument_1) & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
            for (index = *(uint64_t **)(value_7 * 0x10 + *(int64_t *)(MpProcessTable + 0x180)); index != (uint64_t *)(*(int64_t *)(MpProcessTable + 0x180) + value_7 * 0x10); index = (uint64_t *)(*index))
            {
                if (process_id == index[2] && w_p_p__g_l_o_b_a_l__control == index[3])
                {
                    WdAtomicAdd32((volatile int32_t *)((int32_t *)(&index[5])), 1);
                    data_pointer_14 = (uint64_t *****)(&index[-1]);
                    data_pointer_10 = data_pointer_14;
                    trace_argument_1_3 = trace_argument_1_5;
                    data_pointer_15 = data_pointer_14;
                    goto block_7;
                }
            }

            trace_argument_1_3 = -0x3ffffddb;
            block_7:
            ExReleaseResourceLite(MpProcessTable + 8);

            KeLeaveCriticalRegion();
        }
        value_20 = 0;
        enabled_3 = ((char *)objects[4])[0x49] != '\0';
        value_21 = trace_argument_1_3;
        if (FltSupportsStreamHandleContexts())
        {
            handle_context = NULL;
            trace_argument_1_3 = FltGetStreamHandleContext(objects[3], objects[4], &handle_context);
            trace_argument_1 = handle_context;
            if (trace_argument_1_3 <= -1)
            {
                goto block_8;
            }
            enabled = (*(uint32_t *)(&handle_context[5]) & 8) != 0;
            if (enabled)
            {
                *(uint32_t *)(&handle_context[5]) = *(uint32_t *)(&handle_context[5]) & 0xfffffff7;
            }
            enabled_4 = enabled || enabled_3;
            context = handle_context;
            enabled_3 = enabled || enabled_3;
            value_20 = ((uint32_t *)handle_context)[0xb];
            handle_context = NULL;
        }
        else
        {
            block_8:
            trace_argument_1 = context;

            enabled_4 = enabled_3;
        }
        value_11 = (uint32_t)(value_10 >> 0x20);
        if (trace_argument_1 && trace_argument_1[0xd] && *(char *)trace_argument_1[0xd])
        {
            WdAtomicAdd32((volatile int32_t *)((int32_t *)(&stream_context[0x4f])), -1);
        }
        enabled = enabled_2;
        if (!(*(uint32_t *)(MpData + 0x364) & 1) || !enabled_3)
        {
            block_9:
            value_4 = value_12;

            enabled_4 = enabled_3;
        }
        else
        {
            trace_argument_1_2 = MpQueryNetworkOpenInformation(objects, &information_buffer);
            if (0 <= trace_argument_1_2)
            {
                enabled_2 = 1;
                enabled = 1;
            }
            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                current_thread_2 = (uint64_t)KeGetCurrentThread();
                process_id_2 = (uint64_t *****)((uint64_t)((uint64_t)process_id_2) & 0xffffffff00000000 | (uint64_t)trace_argument_1_2 & 0xffffffff);
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x14, WD_SYMBOL_ADDRESS(WPP_b54df57aea2c34b04f95f22ee0a6a450_Traceguids), current_thread_2, process_id_2);
            }
            value_11 = (uint32_t)(value_10 >> 0x20);
            trace_argument_1 = data_pointer_13;
            if (context)
            {
                trace_argument_1 = (uint64_t *****)context[0xd];
            }
            data_pointer_11 = &information_buffer;
            if (!enabled_2)
            {
                data_pointer_11 = data_pointer_13;
            }
            file_object = objects[5];
            value_8 = ((uint32_t *)stream_context[1])[0x15];
            value_5 = 0;
            values[0] = 0;
            data_pointer_18 = data_pointer_11;
            if (!(*(uint32_t *)(MpData + 0x364) & 1))
            {
                goto block_9;
            }
            byte_value_5 = MpShouldSendBmMessage(data_pointer_10);
            value_11 = (uint32_t)(value_10 >> 0x20);
            if (!byte_value_5 || data_pointer_10 && *(uint32_t *)(&data_pointer_10[7]) & 4)
            {
                goto block_9;
            }
            process_id = value_10 & 0xffffffff00000000;
            event_id_2 = (uint64_t ****)((uint64_t)((uint64_t)event_id_2) & 0xffffffff00000000 | (uint64_t)0xffffffff & 0xffffffff);
            trace_argument_3 = (uint64_t ****)((uint64_t)((uint64_t)trace_argument_3) & 0xffffffff00000000 | (uint64_t)value_8 & 0xffffffff);
            process_id_2 = objects;
            trace_argument_1_3 = MpCreateFileAsyncMessage(&value_5, values, 1, data_3, objects, trace_argument_3, event_id_2, process_id, file_object, NULL, NULL, trace_argument_1, data_pointer_10, data_pointer_11);
            event_id = value_5;
            value_11 = (uint32_t)(process_id >> 0x20);
            if (0 <= trace_argument_1_3)
            {
                trace_argument_1_3 = MpAsyncSendNotification(value_5, values[0], 0, 0xffffffff, data_pointer_10);
                if (trace_argument_1_3 < 0 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                {
                    WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x3f, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), trace_argument_1_3);
                    event_id = value_5;
                }
                MpAsyncDereferenceNotification(event_id);
                data_pointer_14 = data_pointer_15;
                value_13 = provider_2;
                value_12 = value_14;
                value_4 = value_14;
                process_id_2 = data_pointer_10;
            }
            else
            {
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4))
                {
                    goto block_9;
                }
                WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x3e, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), trace_argument_1_3);
                data_pointer_14 = data_pointer_15;
                value_13 = provider_2;
                value_12 = value_14;
                value_4 = value_14;
            }
        }
        if ((char)(*(uint32_t *)(&stream_context[6])) < '\0')
        {
            if (!(*(int32_t *)(MpData + 0x988)))
            {
                value_4 |= 1;
                value_12 = value_4;
                value_14 = value_4;
            }
            WdAtomicAnd32((volatile int32_t *)((uint32_t *)(&stream_context[6])), 0xffffff7f);
        }
        if (*(uint32_t *)(&stream_context[6]) >> 9 & 1 && !(*(uint32_t *)(&stream_context[6]) >> 8 & 1))
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x15, WD_SYMBOL_ADDRESS(WPP_b54df57aea2c34b04f95f22ee0a6a450_Traceguids));
            }
            if (!(*(int32_t *)(MpData + 0x988)))
            {
                value_12 = value_4 | 1;
                value_14 = value_12;
            }
            WdAtomicAnd32((volatile int32_t *)((uint32_t *)(&stream_context[6])), 0xfffffdff);
        }
        if (*(uint32_t *)(&stream_context[6]) & 0x10 && !objects[5])
        {
            goto block_16;
        }
        if (objects[5])
        {
            trace_argument_1_2 = MpTxfGetContext(objects, 0, objects[5], &value_6);
            if (0 <= trace_argument_1_2)
            {
                goto block_10;
            }
            if (trace_argument_1_2 != -0x3ffffddb)
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    event_id = 0x17;
                    WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_b54df57aea2c34b04f95f22ee0a6a450_Traceguids), trace_argument_1_2);
                }
            }
            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                event_id = 0x16;
                WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_b54df57aea2c34b04f95f22ee0a6a450_Traceguids), trace_argument_1_2);
            }
            goto block_16;
        }
        block_10:
        if ((*(uint32_t *)(&stream_context[6]) & 0xd28) == 0x400)
        {
            WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0xccc)), 1);
            if (*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                data_pointer_7 = NULL;
                trace_argument_1_3 = MpGetProcessName(PsGetCurrentProcessId(), &data_pointer_7);
                file_object = data_pointer_7;
                if (!trace_argument_1_3)
                {
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                    {
                        value_11 = (uint32_t)((uint64_t)(&stream_context[0x1e]) >> 0x20);
                        trace_argument_3 = (uint64_t ****)((uint64_t)((uint64_t)trace_argument_3) & 0xffffffff00000000 | (uint64_t)(*(uint32_t *)(MpData + 0xcd0)) & 0xffffffff);
                        process_id_2 = (uint64_t *****)((uint64_t)((uint64_t)process_id_2) & 0xffffffff00000000 | (uint64_t)(*(uint32_t *)(MpData + 0xcc8)) & 0xffffffff);
                        event_id_2 = data_pointer_7;
                        WPP_SF_dddZZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18));
                    }
                    MpFreeString(file_object);
                }
            }
            if (!(*(char *)(MpData + 0xcd4)) && 0x2711 <= *(int32_t *)(MpData + 0xcd0) + *(int32_t *)(MpData + 0xcc8))
            {
                MpSendOpenWithoutReadNotification();
                *(char *)(MpData + 0xcd4) = 1;
            }
        }

        file_object = stream_context;
        process = value_6;
        *(uint32_t *)(&stream_context[6]) = *(uint32_t *)(&stream_context[6]) & 0xfffff3ff;
        if (value_6)
        {
            if (!(*(uint32_t *)(value_6 + 0xa8) & 1))
            {
                if (0xfffd <= (uint16_t)(((int16_t *)objects)[1] - 1U))
                {
                    instance = &stream_context[0x18];
                    FltAcquirePushLockShared(instance);
                    if (file_object[0x1a])
                    {
                        byte_value_2 = (uint8_t)(*(uint32_t *)(&file_object[0x1a][6]) >> 3);
                    }
                    else
                    {
                        byte_value_2 = (uint8_t)(*(uint32_t *)(&file_object[6]) >> 3);
                    }
                    FltReleasePushLock(instance);
                    goto block_11;
                }
                enabled_2 = 0;
                goto block_12;
            }
            trace_argument_1 = (uint64_t *****)0xc00000e5;
            value_15 = 0xc00000e5;
            enabled_2 = 0;
            trace_argument_1_3 = -0x3fffff1b;
        }
        else
        {
            byte_value_2 = (uint8_t)(*(uint32_t *)(&stream_context[6]) >> 3);
            block_11:
            enabled_2 = (bool)(byte_value_2 & 1);

            file_object = stream_context;
            block_12:
            value_15 = 0;

            trace_argument_1 = data_pointer_13;
            trace_argument_1_3 = trace_argument_1_5;
        }
        trace_argument_1_2 = (int32_t)trace_argument_1;
        if (trace_argument_1_3 < 0)
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                goto block_3;
            }
            event_id = 0x19;
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_b54df57aea2c34b04f95f22ee0a6a450_Traceguids), trace_argument_1);
            goto block_3;
        }
        if (!enabled_2)
        {
            w_p_p__g_l_o_b_a_l__control = WPP_GLOBAL_Control;
            if (*(uint32_t *)(&file_object[6]) & 0x1000)
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                {
                    event_id = 0x1a;
                    WPP_SF_Z(*(uint64_t *)(w_p_p__g_l_o_b_a_l__control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_b54df57aea2c34b04f95f22ee0a6a450_Traceguids), &objects[4][0xb]);
                }
            }
            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                event_id = 0x1b;
                WPP_SF_Z(*(uint64_t *)(w_p_p__g_l_o_b_a_l__control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_b54df57aea2c34b04f95f22ee0a6a450_Traceguids), &objects[4][0xb]);
            }
            goto block_3;
        }
        trace_argument_1_3 = 0;
        if (process)
        {
            if (!(*(uint32_t *)(process + 0xa8) & 1))
            {
                if (0xfffd <= (uint16_t)(((int16_t *)objects)[1] - 1U))
                {
                    FltAcquirePushLockShared(&file_object[0x18]);
                    if (file_object[0x1a])
                    {
                        instance = (uint64_t ****)(&file_object[0x1a][3]);
                    }
                    else
                    {
                        instance = &file_object[4];
                    }
                    trace_argument_1_5 = GetMpFileStateWithSeq__cleanup(instance, (WD_LAYOUT_42 *)file_object[1]);
                    provider_2 = trace_argument_1_5;
                    FltReleasePushLock(&file_object[0x18]);
                }
                else
                {
                    provider_2 = 0;
                }
                goto block_13;
            }
            trace_argument_1 = (uint64_t *****)0xc00000e5;
            value_16 = 0xc00000e5;
            trace_argument_1_4 = -0x3fffff1b;
            trace_argument_1_5 = value_13;
        }
        else
        {
            instance = &file_object[4];
            if (instance && file_object[1])
            {
                if (*(int32_t *)instance != 5 || *(uint32_t *)(MpData + 0x364) >> 0xf & 1)
                {
                    if (((int32_t *)file_object)[9] == *(int32_t *)(&file_object[1][0x12]))
                    {
                        trace_argument_1_5 = *(int32_t *)instance;
                    }
                }
                else
                {
                    trace_argument_1_5 = 5;
                }
            }
            provider_2 = trace_argument_1_5;
            value_13 = trace_argument_1_5;
            block_13:
            value_16 = 0;

            trace_argument_1 = data_pointer_13;
            trace_argument_1_4 = trace_argument_1_3;
        }
        trace_argument_1_2 = (int32_t)trace_argument_1;
        if (trace_argument_1_4 < 0)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                event_id = 0x1c;
                WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_b54df57aea2c34b04f95f22ee0a6a450_Traceguids), trace_argument_1);
            }
            goto block_3;
        }
        if ((uint32_t)(trace_argument_1_5 - 2U) <= 2 || trace_argument_1_5 == 7)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                event_id = 0x1d;
                w_p_p__g_l_o_b_a_l__control = WPP_GLOBAL_Control;
                WPP_SF_Z(*(uint64_t *)(w_p_p__g_l_o_b_a_l__control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_b54df57aea2c34b04f95f22ee0a6a450_Traceguids), &objects[4][0xb]);
            }
            goto block_3;
        }
        if (!enabled)
        {
            trace_argument_1_2 = MpQueryNetworkOpenInformation(objects, &information_buffer);
            if (trace_argument_1_2 < 0)
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    current_thread_3 = (uint64_t)KeGetCurrentThread();
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1e, WD_SYMBOL_ADDRESS(WPP_b54df57aea2c34b04f95f22ee0a6a450_Traceguids), current_thread_3, (uint64_t)((uint64_t)process_id_2) & 0xffffffff00000000 | (uint64_t)trace_argument_1_2 & 0xffffffff);
                }
                goto block_3;
            }
        }
        current_thread_4 = (uint64_t)KeGetCurrentThread();
        value_28 = current_thread_4;
        w_p_p__g_l_o_b_a_l__control = IoThreadToProcess(current_thread_4);
        if (w_p_p__g_l_o_b_a_l__control == *(int64_t *)(MpData + 0xe8))
        {
            block_14:
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                event_id = 0x1f;
                w_p_p__g_l_o_b_a_l__control = WPP_GLOBAL_Control;
                WPP_SF_Z(*(uint64_t *)(w_p_p__g_l_o_b_a_l__control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_b54df57aea2c34b04f95f22ee0a6a450_Traceguids), &objects[4][0xb]);
            }

            goto block_3;
        }
        current_thread_5 = (uint64_t)KeGetCurrentThread();
        value_29 = current_thread_5;
        w_p_p__g_l_o_b_a_l__control = IoThreadToProcess(current_thread_5);
        file_object = stream_context;
        if (w_p_p__g_l_o_b_a_l__control == *(int64_t *)(MpData + 0x100))
        {
            goto block_14;
        }
        byte_value_2 = 1;
        process = value_6;
        if (value_6)
        {
            if (!(*(uint32_t *)(value_6 + 0xa8) & 1))
            {
                if (0xfffd <= (uint16_t)(((int16_t *)objects)[1] - 1U))
                {
                    FltAcquirePushLockShared(&stream_context[0x18]);
                    if (file_object[0x1a])
                    {
                        byte_value_2 = (uint8_t)((uint32_t)(*(uint32_t *)(&file_object[0x1a][6])) >> 8);
                    }
                    else
                    {
                        byte_value_2 = (uint8_t)((uint32_t)(*(uint32_t *)(&file_object[6])) >> 8);
                    }
                    byte_value_2 &= 1;
                    FltReleasePushLock(&file_object[0x18]);
                    process = value_6;
                }
                else
                {
                    byte_value_2 = 0;
                }
            }
        }
        else
        {
            byte_value_2 = (uint8_t)((uint32_t)(*(uint32_t *)(&stream_context[6])) >> 8) & 1;
        }
        file_object = stream_context;
        if (process)
        {
            if (!(*(uint32_t *)(process + 0xa8) & 1) && 0xfffd <= (uint16_t)(((int16_t *)objects)[1] - 1U))
            {
                FltAcquirePushLockShared(&stream_context[0x18]);
                if (*(uint32_t *)(&file_object[6]) & 0x100)
                {
                    if (file_object[0x1a])
                    {
                        WdUnresolvedAtomicBegin();
                        data_pointer_12 = &file_object[0x1a][6];
                        *(uint32_t *)data_pointer_12 = *(uint32_t *)data_pointer_12 & 0xfffffeff;
                        WdUnresolvedAtomicEnd();
                    }
                    else
                    {
                        WdAtomicAnd32((volatile int32_t *)((uint32_t *)(&file_object[6])), 0xfffffeff);
                    }
                }
                FltReleasePushLock(&file_object[0x18]);
                process = value_6;
            }
        }
        else if (*(uint32_t *)(&stream_context[6]) & 0x100)
        {
            WdAtomicAnd32((volatile int32_t *)((uint32_t *)(&stream_context[6])), 0xfffffeff);
        }
        trace_argument_1 = data_pointer_14;
        byte_value_4 = byte_value_2;
        if (byte_value_2 && *(char *)(MpData + 0xfd8) && !(*(int32_t *)(MpData + 0x988)))
        {
            if (data_pointer_14)
            {
                trace_argument_3 = (uint64_t ****)(&byte_value);
                process_id_2 = &trace_argument_5;
                byte_value_5 = MpCopyCacheMatch(trace_argument_1, PsGetCurrentThreadId(), provider, value_35, process_id_2, trace_argument_3);
                if (byte_value_5 == '\x01')
                {
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                    {
                        event_id = (uint64_t)KeGetCurrentThread();
                        trace_handle = *(uint64_t *)(WPP_GLOBAL_Control + 0x18);
                        value_30 = event_id;
                        value_31 = event_id;
                        trace_argument_3 = (uint64_t ****)PsGetCurrentThreadId();
                        process_id_2 = (uint64_t *****)PsGetCurrentProcessId();
                        event_id_2 = provider;
                        file_object = trace_argument_5;
                        WPP_SF_qqqiZ(trace_handle, 0x20, provider, event_id, process_id_2, trace_argument_3, provider, trace_argument_5);
                        value_11 = (uint32_t)((uint64_t)file_object >> 0x20);
                    }
                    value_12 |= 1;
                    value_14 = value_12;
                }
                process = value_6;
            }
            byte_value_3 = '\x01';
        }
        instance = provider;
        file_object = stream_context;
        if (process)
        {
            if (!(*(uint32_t *)(process + 0xa8) & 1))
            {
                if (0xfffc < (uint16_t)(((int16_t *)objects)[1] - 1U))
                {
                    FltAcquirePushLockShared(&stream_context[0x18]);
                    if (file_object[0x1a])
                    {
                        WdUnresolvedAtomicBegin();
                        file_object[0x1a][4] = instance;
                        WdUnresolvedAtomicEnd();
                    }
                    FltReleasePushLock(&file_object[0x18]);
                    process = value_6;
                }
                goto block_15;
            }
            data_pointer_10 = (uint64_t *****)0xc00000e5;
            value_17 = 0xc00000e5;
            trace_argument_1_5 = -0x3fffff1b;
        }
        else
        {
            WdUnresolvedAtomicBegin();
            stream_context[0x16] = provider;
            WdUnresolvedAtomicEnd();
            block_15:
            value_17 = 0;

            data_pointer_10 = data_pointer_13;
            trace_argument_1_5 = trace_argument_1_3;
        }
        file_object = stream_context;
        trace_argument_1 = data_pointer_14;
        trace_argument_1_4 = -0x3fffff1b;
        trace_argument_1_2 = (int32_t)data_pointer_10;
        if (trace_argument_1_5 < 0)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                current_thread_6 = (uint64_t)KeGetCurrentThread();
                event_id_2 = &objects[4][0xb];
                value_11 = (uint32_t)((uint64_t)objects[5] >> 0x20);
                trace_argument_3 = stream_context;
                WPP_SF_qLqZqq(*(uint64_t *)(WPP_GLOBAL_Control + 0x18));
            }
            block_16:
            process = value_6;

            goto block_3;
        }
        if (!(*(uint32_t *)(MpData + 0x364) & 0x10) || *(int32_t *)(MpData + 0x988) == 2)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                WPP_SF_Z(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x22, WD_SYMBOL_ADDRESS(WPP_b54df57aea2c34b04f95f22ee0a6a450_Traceguids), &objects[4][0xb]);
            }
            goto block_16;
        }
        if (!data_pointer_14 || !(*(uint32_t *)(&data_pointer_14[7]) & 2))
        {
            value_4 = *(uint32_t *)(&stream_context[6]);
            if (value_4 & 0x20)
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                {
                    WPP_SF_Z(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x24, WD_SYMBOL_ADDRESS(WPP_b54df57aea2c34b04f95f22ee0a6a450_Traceguids), &objects[4][0xb]);
                    process = value_6;
                    goto block_4;
                }
                goto block_20;
            }
            if (enabled_4)
            {
                if (process)
                {
                    if (*(uint32_t *)(process + 0xa8) & 1)
                    {
                        trace_argument_1_3 = -0x3fffff1b;
                        value_18 = 0xc00000e5;
                        goto block_19;
                    }
                    if (0xfffd <= (uint16_t)(((int16_t *)objects)[1] - 1U))
                    {
                        FltAcquirePushLockShared(&stream_context[0x18]);
                        if (!(*(uint32_t *)(&file_object[6]) & 4))
                        {
                            if (file_object[0x1a])
                            {
                                WdUnresolvedAtomicBegin();
                                data_pointer_12 = &file_object[0x1a][6];
                                *(uint32_t *)data_pointer_12 = *(uint32_t *)data_pointer_12 | 4;
                                WdUnresolvedAtomicEnd();
                            }
                            else
                            {
                                WdAtomicOr32((volatile int32_t *)((uint32_t *)(&file_object[6])), 4);
                            }
                        }
                        FltReleasePushLock(&file_object[0x18]);
                    }
                }
                else if (!(value_4 & 4))
                {
                    WdAtomicOr32((volatile int32_t *)((uint32_t *)(&stream_context[6])), 4);
                }
                value_18 = 0;
                block_17:
                trace_argument_1_4 = trace_argument_1_3;
            }
            else
            {
                if (!process)
                {
                    if (value_4 & 4)
                    {
                        WdAtomicAnd32((volatile int32_t *)((uint32_t *)(&stream_context[6])), 0xfffffffb);
                    }
                    block_18:
                    value_19 = 0;

                    goto block_17;
                }
                if (!(*(uint32_t *)(process + 0xa8) & 1))
                {
                    if (0xfffd <= (uint16_t)(((int16_t *)objects)[1] - 1U))
                    {
                        FltAcquirePushLockShared(&stream_context[0x18]);
                        if (*(uint32_t *)(&file_object[6]) & 4)
                        {
                            if (file_object[0x1a])
                            {
                                WdUnresolvedAtomicBegin();
                                data_pointer_12 = &file_object[0x1a][6];
                                *(uint32_t *)data_pointer_12 = *(uint32_t *)data_pointer_12 & 0xfffffffb;
                                WdUnresolvedAtomicEnd();
                            }
                            else
                            {
                                WdAtomicAnd32((volatile int32_t *)((uint32_t *)(&file_object[6])), 0xfffffffb);
                            }
                        }
                        FltReleasePushLock(&file_object[0x18]);
                    }
                    goto block_18;
                }
                value_19 = 0xc00000e5;
                trace_argument_1_3 = -0x3fffff1b;
            }
            block_19:
            trace_argument_1_2 = trace_argument_1_4;

            if (trace_argument_1_3 >= 0)
            {
                data_pointer_3 = (uint64_t *****)0xffffffffffffffff;
                if (!byte_value_2 && *(int64_t *)(MpData + 0x70))
                {
                    trace_argument_1_2 = (*__guard_dispatch_icall_fptr)(objects[4], &data_pointer_3);
                    if (0 > trace_argument_1_2 && (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4))
                    {
                        current_thread_7 = (uint64_t)KeGetCurrentThread();
                        process_id_2 = (uint64_t *****)((uint64_t)((uint64_t)process_id_2) & 0xffffffff00000000 | (uint64_t)trace_argument_1_2 & 0xffffffff);
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x26, WD_SYMBOL_ADDRESS(WPP_b54df57aea2c34b04f95f22ee0a6a450_Traceguids), current_thread_7, process_id_2);
                    }
                }
                process = value_6;
                file_object = objects[4];
                if (!((char *)file_object)[0x4a] && !((char *)file_object)[0x4b] && !((char *)file_object)[0x4c] && !(*(uint32_t *)(&file_object[10]) & 0x3000))
                {
                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4))
                    {
                        goto block_20;
                    }
                    WPP_SF_Z(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x27, WD_SYMBOL_ADDRESS(WPP_b54df57aea2c34b04f95f22ee0a6a450_Traceguids), &file_object[0xb]);
                    process = value_6;
                    goto block_4;
                }
                if (data_pointer_3 && 5 <= (int64_t)provider)
                {
                    if (*(uint32_t *)(MpData + 0x364) & 0x10 && (((char *)objects[4])[0x4a] || ((int32_t *)stream_context[1])[0x1f] != 0x14) && (!(((uint32_t *)stream_context[1])[0x15] & 0x10) || !MpFcKernelGetValue(0xdf)))
                    {
                        value_8 = (uint32_t)((uint64_t)process_id_2 >> 0x20);
                        if (!MpIsProcessExemptByContext(trace_argument_1) && !enabled_4 && !(*(char *)(MpData + 0xd0)))
                        {
                            if (!(*(int32_t *)(MpData + 0x988)) && !byte_value_3)
                            {
                                if (trace_argument_1)
                                {
                                    trace_argument_3 = (uint64_t ****)(&byte_value);
                                    file_object = &trace_argument_5;
                                    byte_value_5 = MpCopyCacheMatch(trace_argument_1, PsGetCurrentThreadId(), provider, value_35, file_object, trace_argument_3);
                                    value_8 = (uint32_t)((uint64_t)file_object >> 0x20);
                                    if (byte_value_5 == '\x01')
                                    {
                                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                                        {
                                            event_id = (uint64_t)KeGetCurrentThread();
                                            trace_handle = *(uint64_t *)(WPP_GLOBAL_Control + 0x18);
                                            value_32 = event_id;
                                            value_33 = event_id;
                                            trace_argument_3 = (uint64_t ****)PsGetCurrentThreadId();
                                            process_id_3 = PsGetCurrentProcessId();
                                            event_id_2 = provider;
                                            file_object = trace_argument_5;
                                            WPP_SF_qqqiZ(trace_handle, 0x2b, provider, event_id, process_id_3, trace_argument_3, provider, trace_argument_5);
                                            value_11 = (uint32_t)((uint64_t)file_object >> 0x20);
                                            value_8 = (uint32_t)((uint64_t)process_id_3 >> 0x20);
                                            trace_argument_1 = data_pointer_14;
                                        }
                                        value_12 |= 1;
                                        value_14 = value_12;
                                    }
                                }
                                byte_value_3 = '\x01';
                            }
                            data_2 = data_3;
                            if (trace_argument_1 && trace_argument_1[0xb] && (byte_value_5 = (*__guard_dispatch_icall_fptr)(data_3, objects, stream_context, trace_argument_1), byte_value_5))
                            {
                                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                                {
                                    trace_argument_3 = trace_argument_1[0x10];
                                    WPP_SF_qZZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2c, WD_SYMBOL_ADDRESS(WPP_b54df57aea2c34b04f95f22ee0a6a450_Traceguids), ((uint64_t *)data_2)[1], &objects[4][0xb], trace_argument_3);
                                }
                                process = value_6;
                            }
                            else
                            {
                                process = value_6;
                                value_25 = value_36;
                                data_pointer_6 = information_buffer;
                                value_26 = ((uint64_t)WdLoadField(&value_26, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)((uint32_t)value_2) & 0xffffffffULL;
                                value_23 = value_34;
                                value_24 = value_35;
                                if (trace_argument_1)
                                {
                                    WdAtomicAdd32((volatile int32_t *)((int32_t *)((int64_t)trace_argument_1 + 100)), 1);
                                }
                                byte_value_4 = 0;
                                trace_handle = ((uint64_t)value_11 & 0xffffffffULL) << 32 | (uint64_t)value_20 & 0xffffffffULL;
                                event_id_2 = &data_pointer_6;
                                event_id = ((uint64_t)value_8 & 0xffffffffULL) << 32 | (uint64_t)value_12 & 0xffffffffULL;
                                trace_argument_3 = trace_argument_5;
                                provider_2 = MpScanFile(value_6, data_2, objects, 4, event_id, trace_argument_5, event_id_2, trace_handle, NULL, stream_context, trace_argument_1, NULL);
                                value_11 = (uint32_t)((uint64_t)trace_handle >> 0x20);
                                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                                {
                                    event_id_2 = &stream_context[0x1e];
                                    trace_argument_3 = (uint64_t ****)((uint64_t)((uint64_t)trace_argument_3) & 0xffffffff00000000 | (uint64_t)(*(uint32_t *)(&stream_context[0x15])) & 0xffffffff);
                                    WPP_SF_qDDZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id_2, provider_2, ((uint64_t *)data_2)[1], (uint64_t)event_id & 0xffffffff00000000 | (uint64_t)provider_2 & 0xffffffff, trace_argument_3, event_id_2);
                                }
                            }
                            goto block_21;
                        }
                    }
                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4))
                    {
                        goto block_20;
                    }
                    WPP_SF_Z(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2a, WD_SYMBOL_ADDRESS(WPP_b54df57aea2c34b04f95f22ee0a6a450_Traceguids), &objects[4][0xb]);
                    process = value_6;
                    goto block_4;
                }
                provider_2 = 3;
                trace_argument_1_5 = MpSetStreamState__cleanup(value_6, ((uint16_t *)objects)[1], stream_context);
                trace_argument_1_2 = trace_argument_1_5;
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                {
                    process_id_2 = data_pointer_3;
                    WPP_SF_II(*(uint64_t *)(WPP_GLOBAL_Control + 0x18));
                }
                if (trace_argument_1_5 < 0 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x29, WD_SYMBOL_ADDRESS(WPP_b54df57aea2c34b04f95f22ee0a6a450_Traceguids), trace_argument_1_5, process_id_2);
                }
                goto block_21;
            }
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                goto block_20;
            }
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x25, WD_SYMBOL_ADDRESS(WPP_b54df57aea2c34b04f95f22ee0a6a450_Traceguids), trace_argument_1_4);
            process = value_6;
            goto block_4;
        }
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            data_pointer_14 = (uint64_t *****)(((uint64_t)WdLoadField(&data_pointer_14, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)(*(uint32_t *)(&data_pointer_14[3])) & 0xffffffffULL);
            event_id_2 = &objects[4][0xb];
            trace_argument_3 = (uint64_t ****)((uint64_t)trace_argument_3 & 0xffffffff00000000);
            WPP_SF_dDdZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18));
        }
        block_20:
        process = value_6;
    }
    block_21:
    if (MpDlpIsEnabled(0, NULL) && !(*(uint32_t *)(&stream_context[6]) & 1) && *(int32_t *)(&stream_context[1][0xf]) != 0xd)
    {
        event_id_2 = (uint64_t ****)((uint64_t)((uint64_t)event_id_2) & 0xffffffffffffff00 | (uint64_t)byte_value_3 & 0xff);
        trace_argument_3 = (uint64_t ****)((uint64_t)((uint64_t)trace_argument_3) & 0xffffffffffffff00 | (uint64_t)byte_value & 0xff);
        MpDlpSetEaOnDestination(trace_argument_1, objects, &information_buffer, context, trace_argument_5, trace_argument_3, event_id_2);
    }

    index = data_pointer_8;
    value_8 = (uint32_t)((uint64_t)trace_argument_3 >> 0x20);
    value_9 = (uint32_t)((uint64_t)event_id_2 >> 0x20);
    *data_pointer_8 = 0;
    if (*(uint32_t *)(&stream_context[6]) & 0x1000 && trace_argument_1 && (*(int32_t *)(&trace_argument_1[7]) <= -1 && (trace_argument_1_5 = MpSetStreamState__cleanup(process, ((uint16_t *)objects)[1], stream_context), trace_argument_1_5 <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
    {
        WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2e, WD_SYMBOL_ADDRESS(WPP_b54df57aea2c34b04f95f22ee0a6a450_Traceguids), trace_argument_1_5);
    }
    if (byte_value_4 == 1)
    {
        if (*(uint32_t *)(MpData + 0x364) & 1)
        {
            if (MpShouldSendBmMessage(trace_argument_1))
            {
                if (trace_argument_1)
                {
                    if (*(uint32_t *)(&trace_argument_1[7]) & 4)
                    {
                        goto block_22;
                    }
                }
                data_pointer_9 = NULL;
                data_pointer_8 = (uint64_t *)((uint64_t)data_pointer_8 & 0xffffffff00000000);
                value_4 = value_12 & 1;
                if (*(uint32_t *)(&stream_context[6]) >> 0xc & 1)
                {
                    *(uint32_t *)(&stream_context[6]) = *(uint32_t *)(&stream_context[6]) & 0xffffefff;
                    value_4 |= 0x4000;
                }
                trace_argument_1_5 = MpCreateFileAsyncMessage(&data_pointer_9, &data_pointer_8, 3, data_3, objects, ((uint64_t)value_8 & 0xffffffffULL) << 32 | (uint64_t)((uint32_t *)stream_context[1])[0x15] & 0xffffffffULL, ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)((uint32_t)value_2) & 0xffffffffULL, ((uint64_t)value_11 & 0xffffffffULL) << 32 | (uint64_t)value_4 & 0xffffffffULL, objects[5], NULL, stream_context, NULL, trace_argument_1, NULL);
                process_id_2 = data_pointer_9;
                if (0 <= trace_argument_1_5)
                {
                    *(uint32_t *)(&data_pointer_9[0xc]) = *(uint32_t *)(&stream_context[1][0xc]);
                    data_pointer_9[8] = (uint64_t ****)stream_context[0x15];
                    data_pointer_12 = stream_context[1];
                    value_11 = ((uint32_t *)data_pointer_12)[0xf];
                    value_8 = *(uint32_t *)(&data_pointer_12[8]);
                    value_9 = ((uint32_t *)data_pointer_12)[0x11];
                    *(uint32_t *)(&data_pointer_9[10]) = *(uint32_t *)(&data_pointer_12[7]);
                    ((uint32_t *)data_pointer_9)[0x15] = value_11;
                    *(uint32_t *)(&data_pointer_9[0xb]) = value_8;
                    ((uint32_t *)data_pointer_9)[0x17] = value_9;
                    data_pointer = (uint64_t *)ExAllocateFromPagedLookasideList((void *)(MpData + 0x840));
                    if (data_pointer)
                    {
                        *data_pointer = 0x28da20;
                        *(uint64_t *)((int64_t)data_pointer + 0x14) = 0;
                        *(uint64_t *)((int64_t)data_pointer + 0x1c) = 0;
                        ((uint32_t *)data_pointer)[9] = 0;
                        data_pointer[1] = data_pointer_9;
                        *(uint32_t *)(&data_pointer[2]) = WdLoadField(&data_pointer_8, 0, 4);
                        data_pointer[3] = stream_context;
                        stream_context = NULL;
                        data_pointer[4] = data_pointer_15;
                        *index = data_pointer;
                        trace_argument_1 = data_pointer_13;
                        process = value_6;
                    }
                    else
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2f, WD_SYMBOL_ADDRESS(WPP_b54df57aea2c34b04f95f22ee0a6a450_Traceguids));
                        }
                        MpAsyncDereferenceNotification(process_id_2);
                    }
                }
                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x30, WD_SYMBOL_ADDRESS(WPP_b54df57aea2c34b04f95f22ee0a6a450_Traceguids), trace_argument_1_5);
                }
            }
        }
    }
    block_22:
    if (trace_argument_5)
    {
        MpFreeString(trace_argument_5);
    }

    if (trace_argument_1)
    {
        MpReleaseProcessContext(trace_argument_1);
    }
    if (process)
    {
        FltReleaseContext(process);
    }
    if (context)
    {
        FltReleaseContext(context);
    }
    if (stream_context)
    {
        *(uint32_t *)(&stream_context[6]) = *(uint32_t *)(&stream_context[6]) & 0xffffefff;
        FltReleaseContext(stream_context);
    }
    return;
}

void MpDlpPreCleanup(uint64_t data, void *input, void *input_2)
{
    int64_t ****data_pointer;
    int64_t value;
    int64_t *****allocation;
    int64_t handle_context = 0;
    int64_t *****data_pointer_2;
    int64_t process_context = 0;
    int64_t file_name = 0;
    int64_t process_context_2 = 0;
    bool enabled;
    uint32_t value_2;
    int64_t *****data_pointer_3;
    uint64_t file_object;
    uint64_t instance;
    int64_t ****data_pointer_4;
    int64_t ***data_pointer_5;
    int64_t *****data_pointer_6;
    bool enabled_2;
    int32_t status;
    file_object = ((uint64_t *)input)[4];
    instance = ((uint64_t *)input)[3];
    if (0 <= (int32_t)FltGetStreamHandleContext(instance, file_object, &handle_context))
    {
        value_2 = *(uint32_t *)(((int64_t *)input_2)[1] + 0x54);
        if (value_2 & 0x10 || value_2 & 1 || value_2 & 4 || value_2 >> 0xb & 1)
        {
            enabled_2 = 1;
        }
        else
        {
            enabled_2 = 0;
        }
        value_2 = *(uint32_t *)(((int64_t *)input)[4] + 0x50);
        enabled = value_2 >> 0xc & 1 || value_2 >> 0xd & 1 || ((uint32_t *)input_2)[0xc] & 0x100;
        if (*(uint32_t *)(handle_context + 0x28) & 0x40)
        {
            data_pointer_3 = (int64_t *****)(&data_pointer_2);
            data_pointer_2 = (int64_t *****)(&data_pointer_2);
            FltAcquirePushLockExclusive(handle_context + 0x40);
            data_pointer = (int64_t ****)(handle_context + 0x30);
            data_pointer_4 = (int64_t ****)(*data_pointer);
            if (data_pointer_4 != data_pointer)
            {
                data_pointer_5 = *(int64_t ****)(handle_context + 0x38);
                if ((int64_t ****)data_pointer_4[1] != data_pointer || (int64_t ****)(*data_pointer_5) != data_pointer)
                {
                    (*(WD_ROUTINE)swi(0x29))(3);
                }
                *data_pointer_5 = (int64_t **)data_pointer_4;
                data_pointer_4[1] = data_pointer_5;
                value = handle_context + 0x30;
                *(int64_t *)(handle_context + 0x38) = value;
                *(int64_t *)value = value;
                if ((int64_t ******)data_pointer_2[1] != &data_pointer_2 || (int64_t ******)(*data_pointer_3) != &data_pointer_2)
                {
                    (*(WD_ROUTINE)swi(0x29))(3);
                }
                if ((int64_t ****)(*data_pointer_4)[1] != data_pointer_4 || (int64_t ****)(*data_pointer_4[1]) != data_pointer_4)
                {
                    (*(WD_ROUTINE)swi(0x29))(3);
                }
                *data_pointer_3 = data_pointer_4;
                allocation = (int64_t *****)data_pointer_4[1];
                *data_pointer_4[1] = (int64_t **)(&data_pointer_2);
                data_pointer_4[1] = (int64_t ***)data_pointer_3;
                data_pointer_3 = allocation;
            }
            FltReleasePushLock(handle_context + 0x40);
            allocation = data_pointer_2;
            while ((int64_t ******)allocation != &data_pointer_2)
            {
                MpDlpOnFileObjectClose(allocation[2], (WD_LAYOUT_65 *)(&allocation[3]));
                data_pointer_6 = (int64_t *****)(*allocation);
                data_pointer = allocation[1];
                if ((int64_t *****)data_pointer_6[1] != allocation || (int64_t *****)(*data_pointer) != allocation)
                {
                    (*(WD_ROUTINE)swi(0x29))(3);
                }
                *data_pointer = (int64_t ***)data_pointer_6;
                data_pointer_6[1] = data_pointer;
                MpDeleteDlpProcessEntry(allocation);
                allocation = data_pointer_6;
            }
        }
        else
        {
            MpGetProcessContextByObject(MpGetRequestorProcess(data), &process_context);
            process_context_2 = process_context;
            if (process_context && (*(char *)(process_context + 0xe8) || MpDlpData && *(char *)(MpDlpData + 0x20) && (enabled && (enabled_2 && *(uint32_t *)(MpDlpData + 0x110) & 4))))
            {
                status = FltGetFileNameInformation(data, 0x102, &file_name);
                if (0 <= status)
                {
                    if (file_name)
                    {
                        MpDlpOnFileObjectClose(process_context_2, (WD_LAYOUT_65 *)(file_name + 8));
                    }
                }
                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x31, WD_SYMBOL_ADDRESS(WPP_b54df57aea2c34b04f95f22ee0a6a450_Traceguids), (uint64_t)KeGetCurrentThread(), status);
                }
            }
        }
    }
    if (process_context_2)
    {
        MpReleaseProcessContext(process_context_2);
    }
    if (handle_context)
    {
        FltReleaseContext();
    }
    if (file_name)
    {
        FltReleaseFileNameInformation();
    }
    return;
}

void MpPreCleanup__finally_0(uint64_t input, void *input_2)
{
    uint64_t *data_pointer;
    int64_t process_context;
    int64_t string;
    void *data_pointer_2;
    uint32_t value;
    WD_LAYOUT_2 *context;
    uint32_t value_2;
    uint32_t value_3;
    int64_t value_4;
    int64_t value_5;
    uint32_t value_6;
    uint32_t value_7;
    uint32_t value_8;
    int32_t trace_argument_1;
    uint64_t *data_pointer_3;
    void *data_pointer_4;
    if (MpDlpIsEnabled(0, NULL) && !(*(uint32_t *)(((int64_t *)input_2)[0x36] + 0x30) & 1) && *(int32_t *)(*(int64_t *)(((int64_t *)input_2)[0x36] + 8) + 0x78) != 0xd)
    {
        string = ((int64_t *)input_2)[0x15];
        data_pointer_2 = ((void **)input_2)[0x14];
        process_context = ((int64_t *)input_2)[0x16];
        MpDlpSetEaOnDestination(process_context, data_pointer_2, (WD_LAYOUT_86 *)((int64_t)input_2 + 0x1e0), ((void **)input_2)[0x37], string, (uint32_t)value_2 & 0xffffff00 | (uint32_t)((char *)input_2)[0x80] & 0xff, (uint32_t)value_3 & 0xffffff00 | (uint32_t)((char *)input_2)[0x70] & 0xff);
    }
    else
    {
        data_pointer_2 = ((void **)input_2)[0x14];
        string = ((int64_t *)input_2)[0x15];
        process_context = ((int64_t *)input_2)[0x16];
    }
    data_pointer = ((uint64_t **)input_2)[0x20];
    *data_pointer = 0;
    if (((uint32_t *)((void **)input_2)[0x36])[0xc] >> 0xc & 1 && process_context && *(int32_t *)(process_context + 0x38) <= -1)
    {
        context = ((WD_LAYOUT_2 **)input_2)[0xf];
        trace_argument_1 = MpSetStreamState__cleanup(context, ((uint16_t *)data_pointer_2)[1], ((void **)input_2)[0x36]);
        if (trace_argument_1 <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
        {
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2e, WD_SYMBOL_ADDRESS(WPP_b54df57aea2c34b04f95f22ee0a6a450_Traceguids), trace_argument_1);
        }
    }
    else
    {
        context = ((WD_LAYOUT_2 **)input_2)[0xf];
    }
    if (((char *)input_2)[0x81] == '\x01' && *(uint32_t *)(MpData + 0x364) & 1 && MpShouldSendBmMessage(process_context) && (!process_context || !(*(uint32_t *)(process_context + 0x38) & 4)))
    {
        ((uint64_t *)input_2)[0x14] = 0;
        ((uint32_t *)input_2)[0x2e] = 0;
        value = (((uint8_t *)input_2)[0x9c] & 1) != 0;
        data_pointer_4 = ((void **)input_2)[0x36];
        if (((uint32_t *)data_pointer_4)[0xc] & 0x1000)
        {
            *(uint32_t *)((int64_t)data_pointer_4 + 0x30) = *(uint32_t *)((int64_t)data_pointer_4 + 0x30) & 0xffffefff;
            value |= 0x4000;
            data_pointer_4 = ((void **)input_2)[0x36];
        }
        trace_argument_1 = MpCreateFileAsyncMessage(&((uint64_t *)input_2)[0x14], &((uint32_t *)input_2)[0x2e], 3, ((void **)input_2)[0x21], data_pointer_2, *(uint32_t *)(((int64_t *)data_pointer_4)[1] + 0x54), ((uint32_t *)input_2)[0x84], value, ((int64_t *)data_pointer_2)[5], NULL, data_pointer_4, NULL, process_context, NULL);
        if (0 <= trace_argument_1)
        {
            value_4 = ((int64_t *)input_2)[0x14];
            *(uint32_t *)(value_4 + 0x60) = *(uint32_t *)(*(int64_t *)(((int64_t *)input_2)[0x36] + 8) + 0x60);
            *(uint64_t *)(value_4 + 0x40) = *(uint64_t *)(((int64_t *)input_2)[0x36] + 0xa8);
            value_5 = *(int64_t *)(((int64_t *)input_2)[0x36] + 8);
            value_6 = *(uint32_t *)(value_5 + 0x3c);
            value_7 = *(uint32_t *)(value_5 + 0x40);
            value_8 = *(uint32_t *)(value_5 + 0x44);
            *(uint32_t *)(value_4 + 0x50) = *(uint32_t *)(value_5 + 0x38);
            *(uint32_t *)(value_4 + 0x54) = value_6;
            *(uint32_t *)(value_4 + 0x58) = value_7;
            *(uint32_t *)(value_4 + 0x5c) = value_8;
            data_pointer_3 = (uint64_t *)ExAllocateFromPagedLookasideList((void *)(MpData + 0x840));
            if (data_pointer_3)
            {
                *data_pointer_3 = 0;
                data_pointer_3[1] = 0;
                data_pointer_3[2] = 0;
                data_pointer_3[3] = 0;
                data_pointer_3[4] = 0;
                *(uint32_t *)data_pointer_3 = 0x28da20;
                data_pointer_3[1] = value_4;
                *(uint32_t *)(&data_pointer_3[2]) = ((uint32_t *)input_2)[0x2e];
                data_pointer_3[3] = ((uint64_t *)input_2)[0x36];
                ((uint64_t *)input_2)[0x36] = 0;
                data_pointer_3[4] = process_context;
                process_context = 0;
                *data_pointer = data_pointer_3;
            }
            else
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2f, WD_SYMBOL_ADDRESS(WPP_b54df57aea2c34b04f95f22ee0a6a450_Traceguids));
                }
                MpAsyncDereferenceNotification(value_4);
            }
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x30, WD_SYMBOL_ADDRESS(WPP_b54df57aea2c34b04f95f22ee0a6a450_Traceguids), trace_argument_1);
        }
    }
    if (string)
    {
        MpFreeString(string);
    }
    if (process_context)
    {
        MpReleaseProcessContext(process_context);
    }
    if (context)
    {
        FltReleaseContext(context);
    }
    if (((int64_t *)input_2)[0x37])
    {
        FltReleaseContext(((int64_t *)input_2)[0x37]);
    }
    string = ((int64_t *)input_2)[0x36];
    if (!string)
    {
        return;
    }
    *(uint32_t *)(string + 0x30) = *(uint32_t *)(string + 0x30) & 0xffffefff;
    FltReleaseContext(((uint64_t *)input_2)[0x36]);
    return;
}

void MpDlpPreCleanup__finally_0(uint64_t input, void *input_2)
{
    if (((void **)input_2)[6])
    {
        MpReleaseProcessContext(((void **)input_2)[6]);
    }
    if (((int64_t *)input_2)[7])
    {
        FltReleaseContext();
    }
    if (!((int64_t *)input_2)[10])
    {
        return;
    }
    FltReleaseFileNameInformation();
    return;
}

#include "wdfilter.h"

int32_t RtlULongToUShort(uint32_t value, uint16_t *result)
{
    if (value > UINT16_MAX)
    {
        *result = UINT16_MAX;
        return (int32_t)WD_STATUS_INTEGER_OVERFLOW;
    }
    *result = (uint16_t)value;
    return 0;
}

void WPP_SF_ZDD(uint64_t input, uint16_t input_2, uint64_t input_3, int16_t *input_4)
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

    (*__guard_dispatch_icall_fptr)(input, 0x2b, input_3, input_2, input_4, 2, value_2, (uint16_t)value, &unrecovered_stack_argument_5, 4, &unrecovered_stack_argument_6, 4, 0);
    return;
}

void WPP_SF_qqD(uint64_t input, uint16_t input_2, uint64_t input_3, uint64_t input_4, uint64_t input_5)
{
    uint64_t value;
    uint64_t value_2;
    value = input_5;
    value_2 = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, input_3, input_2, &value_2, 8, &value, 8, &unrecovered_stack_argument_6, 4, 0);
    return;
}

void McTemplateK0x_EtwWriteTransfer(uint64_t input, uint64_t input_2, uint64_t input_3, uint64_t input_4)
{
    uint64_t value;
    char buffer_2[16];
    char *bytes;
    uint64_t *data_pointer;
    uint64_t value_2;
    data_pointer = &value;
    value_2 = 8;
    bytes = buffer_2;
    value = input_4;
    McGenEventWrite_EtwWriteTransfer();
    return;
}

void WPP_SF_ZD(uint64_t input, uint16_t input_2, uint64_t input_3, int16_t *input_4)
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

    (*__guard_dispatch_icall_fptr)(input, 0x2b, input_3, input_2, input_4, 2, value_2, (uint16_t)value, &unrecovered_stack_argument_5, 4, 0);
    return;
}

void WPP_SF_Zi(uint64_t input, uint64_t input_2, uint64_t input_3, int16_t *input_4)
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

    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_49dcc05efb723005c5388b24d04d6cac_Traceguids), 0x17, input_4, 2, value_2, (uint16_t)value, &unrecovered_stack_argument_5, 8, 0);
    return;
}

void WPP_SF_qDZq(uint64_t input, uint64_t input_2, uint64_t input_3, uint64_t input_4, uint64_t input_5, int16_t *input_6, uint64_t input_7)
{
    int16_t *wide_text;
    int16_t value;
    uint64_t value_2;
    uint64_t value_3;
    uint64_t value_4;
    value_2 = input_7;
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
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_49dcc05efb723005c5388b24d04d6cac_Traceguids), 0x24, &value_3, 8, &input_5, 4, wide_text, 2, value_4, (uint16_t)value, &value_2, 8, 0);
    return;
}

void WPP_SF_qZ(uint64_t input, uint16_t input_2, uint64_t input_3, uint64_t input_4, int16_t *input_5)
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
    (*__guard_dispatch_icall_fptr)(input, 0x2b, input_3, input_2, &value_2, 8, wide_text, 2, value_3, (uint16_t)value, 0);
    return;
}

void WPP_SF_qZq(uint64_t input, uint16_t input_2, uint64_t input_3, uint64_t input_4, int16_t *input_5, uint64_t input_6)
{
    int16_t *wide_text;
    int16_t value;
    uint64_t value_2;
    uint64_t value_3;
    uint64_t value_4;
    value_2 = input_6;
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
    value_3 = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_49dcc05efb723005c5388b24d04d6cac_Traceguids), input_2, &value_3, 8, wide_text, 2, value_4, (uint16_t)value, &value_2, 8, 0);
    return;
}

void WPP_SF_qZqD(uint64_t input, uint64_t input_2, uint64_t input_3, uint64_t input_4, int16_t *input_5, uint64_t input_6)
{
    int16_t *wide_text;
    int16_t value;
    uint64_t value_2;
    uint64_t value_3;
    uint64_t value_4;
    value_2 = input_6;
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
    value_3 = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_49dcc05efb723005c5388b24d04d6cac_Traceguids), 0x26, &value_3, 8, wide_text, 2, value_4, (uint16_t)value, &value_2, 8, &unrecovered_stack_argument_7, 4, 0);
    return;
}

void WPP_SF_qZqDD(uint64_t input, uint64_t input_2, uint64_t input_3, uint64_t input_4, int16_t *input_5, uint64_t input_6)
{
    int16_t *wide_text;
    int16_t value;
    uint64_t value_2;
    uint64_t value_3;
    uint64_t value_4;
    value_2 = input_6;
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
    value_3 = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_49dcc05efb723005c5388b24d04d6cac_Traceguids), 0x28, &value_3, 8, wide_text, 2, value_4, (uint16_t)value, &value_2, 8, &unrecovered_stack_argument_7, 4, &unrecovered_stack_argument_8, 4, 0);
    return;
}

void WPP_SF_qZqL(uint64_t input, uint64_t input_2, uint64_t input_3, uint64_t input_4, int16_t *input_5, uint64_t input_6)
{
    int16_t *wide_text;
    int16_t value;
    uint64_t value_2;
    uint64_t value_3;
    uint64_t value_4;
    value_2 = input_6;
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
    value_3 = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_49dcc05efb723005c5388b24d04d6cac_Traceguids), 0x29, &value_3, 8, wide_text, 2, value_4, (uint16_t)value, &value_2, 8, &unrecovered_stack_argument_7, 4, 0);
    return;
}

void WPP_SF_qLZ(uint64_t input, uint16_t input_2, uint64_t input_3, uint64_t input_4, uint64_t input_5, int16_t *input_6)
{
    int16_t *wide_text;
    int16_t value;
    uint64_t value_2;
    uint64_t value_3;
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
    wide_text = input_6;

    if (!input_6)
    {
        wide_text = &WdCleanupStorage;
    }
    value_2 = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, input_3, input_2, &value_2, 8, &input_5, 4, wide_text, 2, value_3, (uint16_t)value, 0);
    return;
}

void MpCreateHandleContext(void *input, uint64_t *input_2, char *input_3)
{
    uint16_t *wide_text;
    uint64_t *data_pointer;
    uint32_t value;
    int32_t status;
    uint16_t *wide_text_2;
    uint64_t process_id;
    uint16_t *context = NULL;
    uint64_t value_3 = 0;
    uint16_t **wide_text_3;
    if (input_3)
    {
        *input_3 = 0;
    }
    wide_text_3 = &context;
    status = FltAllocateContext(((uint64_t *)input)[1], 0x10, 0x78, 1, wide_text_3);
    value = (uint32_t)((uint64_t)wide_text_3 >> 0x20);
    if (0 <= status)
    {
        memset(context, 0, (char *)0x78);
        wide_text_2 = context;
        *context = 0xda04;
        context[1] = 0x78;
        *(uint64_t *)(&context[8]) = (uint64_t)KeGetCurrentThread();
        process_id = PsGetCurrentProcessId();
        wide_text = context;
        *(uint64_t *)(&wide_text_2[0xc]) = process_id;
        process_id = IoGetCurrentProcess();
        *(uint64_t *)(&wide_text[0x10]) = PsGetProcessCreateTimeQuadPart(process_id);
        wide_text_2 = &context[0x18];
        *(uint16_t **)(&context[0x1c]) = wide_text_2;
        *(uint16_t **)wide_text_2 = wide_text_2;
        FltInitializePushLock(&context[0x20]);
        FltInitializePushLock(&context[0x24]);
        *(uint64_t *)(&context[0x30]) = 0;
        *(uint64_t *)(&context[0x34]) = 0;
        data_pointer = &value_3;
        status = FltSetStreamHandleContext(((uint64_t *)input)[3], ((uint64_t *)input)[4], 1, context, data_pointer);
        value = (uint32_t)((uint64_t)data_pointer >> 0x20);
        if (0 <= status)
        {
            *input_2 = context;
            context = NULL;
            goto block_1;
        }
        FltReleaseContext(context);
        context = NULL;
        if (status == -0x3fe3fffe)
        {
            *input_2 = value_3;
            if (input_3)
            {
                *input_3 = 1;
            }
            goto block_1;
        }
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            goto block_1;
        }
        process_id = 0x34;
    }
    else
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            goto block_1;
        }
        process_id = 0x33;
    }
    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), process_id, WD_SYMBOL_ADDRESS(WPP_49dcc05efb723005c5388b24d04d6cac_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
    block_1:
    if (context)
    {
        FltReleaseContext(context);
    }

    return;
}

void MpCreateStreamContext(void *data, void *input, uint8_t *input_2, uint64_t input_3, char input_4, uint64_t *input_5)
{
    int64_t *data_pointer;
    WD_LAYOUT_31 *record;
    uint64_t *data_pointer_2;
    uint16_t *wide_text;
    uint64_t *data_pointer_3;
    int64_t *data_pointer_4;
    int64_t value;
    uint64_t information_class;
    uint8_t byte_value;
    int64_t instance_context;
    uint32_t value_2;
    int32_t result_length[2];
    uint64_t information_buffer;
    uint32_t values[2];
    uint16_t *buffer_2;
    int64_t file_name;
    uint64_t buffer_3[2];
    uint16_t *context;
    uint32_t value_3;
    uint64_t information_buffer_2;
    uint32_t value_4;
    uint64_t value_5;
    uint16_t **wide_text_2;
    uint64_t value_6;
    uint32_t value_7;
    uint32_t value_8;
    uint32_t value_9;
    uint32_t value_10;
    uint32_t value_11;
    uint64_t value_12;
    uint64_t value_13;
    bool enabled;
    uint64_t value_14;
    bool enabled_2;
    uint64_t *data_pointer_5;
    uint64_t *data_pointer_6;
    uint64_t *data_pointer_7;
    int32_t status;
    data_pointer_5 = input_5;
    value_7 = (uint32_t)((uint64_t)value_5 >> 0x20);
    buffer_2 = NULL;
    context = NULL;
    instance_context = 0;
    result_length[0] = 0;
    information_buffer = 0;
    value_13 = 0;
    value_14 = 0;
    information_buffer_2 = 0;
    enabled = 1;
    enabled_2 = 1;
    file_name = 0;
    value_8 = 0xffffffff;
    if (!input || !input_5 || !data)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2b, WD_SYMBOL_ADDRESS(WPP_49dcc05efb723005c5388b24d04d6cac_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INVALID_PARAMETER & 0xffffffffULL);
        }
        return;
    }
    information_class = ((uint64_t *)input)[3];
    if ((int32_t)FltGetInstanceContext(information_class, &instance_context) < 0)
    {
        return;
    }
    if (input_2)
    {
        byte_value = *input_2;
    }
    else
    {
        byte_value = (uint8_t)(*(uint32_t *)(((int64_t *)input)[4] + 0x50) >> 0x16);
    }
    if (byte_value & 1)
    {
        information_buffer = *(uint64_t *)(instance_context + 0x48);
        value_14 = ((uint64_t)WdLoadField(&value_14, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)1 & 0xffffffffULL;
        value_13 = information_buffer;
        if (*(int32_t *)(instance_context + 0x78) == 2)
        {
            information_buffer_2 = 0x3000000000003;
        }
        block_1:
        wide_text_2 = &buffer_2;

        status = FltAllocateContext(((uint64_t *)input)[1], 8, 0x280, 1, wide_text_2);
        if (0 <= status)
        {
            memset(buffer_2, 0, (char *)0x280);
            *buffer_2 = 0xda03;
            buffer_2[1] = 0x280;
            *(uint64_t *)(&buffer_2[0x58]) = value_13;
            *(uint64_t *)(&buffer_2[0x54]) = information_buffer_2;
            *(uint32_t *)(&buffer_2[0x1a]) = 0xffffffff;
            *(uint32_t *)(&buffer_2[0x10]) = 0;
            *(uint32_t *)(&buffer_2[0x80]) = 0;
            *(uint32_t *)(&buffer_2[0x13e]) = value_8;
            *(int64_t *)(&buffer_2[4]) = instance_context;
            FltReferenceContext(instance_context);
            *(char *)(&buffer_2[0x52]) = 1;
            if (WdLoadField(&value_14, 4, 1))
            {
                *(uint32_t *)(&buffer_2[0x18]) = *(uint32_t *)(&buffer_2[0x18]) | 4;
            }
            if (byte_value & 1)
            {
                *(uint32_t *)(&buffer_2[0x18]) = *(uint32_t *)(&buffer_2[0x18]) | 1;
            }
            if (0 <= (int32_t)FltGetFileNameInformation(data, 0x102, &file_name) && (status = FltParseFileNameInformation(file_name), 0 <= status))
            {
                MpGetFileExtensionId(file_name + 0x38, &buffer_2[0x5c]);
            }
            if (input_2)
            {
                if (*input_2 & 2)
                {
                    block_2:
                    *(uint32_t *)(&buffer_2[0x18]) = *(uint32_t *)(&buffer_2[0x18]) | 2;
                }
            }
            else if (file_name)
            {
                value_3 = *(uint32_t *)(file_name + 8);
                value_9 = *(uint32_t *)(file_name + 0xc);
                value_10 = *(uint32_t *)(file_name + 0x10);
                value_11 = *(uint32_t *)(file_name + 0x14);
                if (!MpIsUnNamedDataAttribute(&value_3))
                {
                    goto block_2;
                }
            }
            if (((int64_t *)input)[5] && input_4)
            {
                *(uint32_t *)(&buffer_2[0x18]) = *(uint32_t *)(&buffer_2[0x18]) | 0x10;
            }
            if (!enabled_2)
            {
                *(uint32_t *)(&buffer_2[0x18]) = *(uint32_t *)(&buffer_2[0x18]) | 0x40;
            }
            wide_text = &buffer_2[0x1c];
            *(uint16_t **)(&buffer_2[0x20]) = wide_text;
            *(uint16_t **)wide_text = wide_text;
            wide_text = &buffer_2[8];
            *(uint16_t **)(&buffer_2[0xc]) = wide_text;
            *(uint16_t **)wide_text = wide_text;
            InitializeSListHead(&buffer_2[0x88]);
            wide_text = &buffer_2[0x94];
            *(uint16_t **)(&buffer_2[0x98]) = wide_text;
            *(uint16_t **)wide_text = wide_text;
            wide_text = &buffer_2[0x9c];
            *(uint16_t **)(&buffer_2[0xa0]) = wide_text;
            *(uint16_t **)wide_text = wide_text;
            *(uint32_t *)(&buffer_2[0xa4]) = 0;
            FltInitializePushLock(&buffer_2[0x60]);
            FltInitializePushLock(&buffer_2[0x90]);
            FltInitializePushLock(&buffer_2[0x138]);
            memset(buffer_3, 0, (char *)0x120);
            value_12 = 0xffffffffffffffff;
            value = 2;
            data_pointer_6 = (uint64_t *)(&buffer_2[0xa8]);
            data_pointer_7 = buffer_3;
            do
            {
                data_pointer_3 = data_pointer_7;
                data_pointer_2 = data_pointer_6;
                information_class = data_pointer_3[1];
                *data_pointer_2 = *data_pointer_3;
                data_pointer_2[1] = information_class;
                information_class = data_pointer_3[3];
                data_pointer_2[2] = data_pointer_3[2];
                data_pointer_2[3] = information_class;
                information_class = data_pointer_3[5];
                data_pointer_2[4] = data_pointer_3[4];
                data_pointer_2[5] = information_class;
                information_class = data_pointer_3[7];
                data_pointer_2[6] = data_pointer_3[6];
                data_pointer_2[7] = information_class;
                information_class = data_pointer_3[9];
                data_pointer_2[8] = data_pointer_3[8];
                data_pointer_2[9] = information_class;
                information_class = data_pointer_3[0xb];
                data_pointer_2[10] = data_pointer_3[10];
                data_pointer_2[0xb] = information_class;
                information_class = data_pointer_3[0xd];
                data_pointer_2[0xc] = data_pointer_3[0xc];
                data_pointer_2[0xd] = information_class;
                information_class = data_pointer_3[0xf];
                data_pointer_2[0xe] = data_pointer_3[0xe];
                data_pointer_2[0xf] = information_class;
                value -= 1;
                data_pointer_6 = &data_pointer_2[0x10];
                data_pointer_7 = &data_pointer_3[0x10];
            }
            while (value);
            value_7 = ((uint32_t *)data_pointer_3)[0x21];
            value_2 = *(uint32_t *)(&data_pointer_3[0x11]);
            value_4 = ((uint32_t *)data_pointer_3)[0x23];
            *(uint32_t *)(&data_pointer_2[0x10]) = *(uint32_t *)(&data_pointer_3[0x10]);
            ((uint32_t *)data_pointer_2)[0x21] = value_7;
            *(uint32_t *)(&data_pointer_2[0x11]) = value_2;
            ((uint32_t *)data_pointer_2)[0x23] = value_4;
            value_7 = ((uint32_t *)data_pointer_3)[0x25];
            value_2 = *(uint32_t *)(&data_pointer_3[0x13]);
            value_4 = ((uint32_t *)data_pointer_3)[0x27];
            *(uint32_t *)(&data_pointer_2[0x12]) = *(uint32_t *)(&data_pointer_3[0x12]);
            ((uint32_t *)data_pointer_2)[0x25] = value_7;
            *(uint32_t *)(&data_pointer_2[0x13]) = value_2;
            ((uint32_t *)data_pointer_2)[0x27] = value_4;
            if (((int64_t *)data)[4] == 2)
            {
                WdAtomicOr32((volatile int32_t *)((uint32_t *)(&buffer_2[0xc2])), 1);
            }
            if (*(uint32_t *)(&buffer_2[0x18]) & 0x10)
            {
                WdAtomicOr32((volatile int32_t *)((uint32_t *)(&buffer_2[0xc2])), 2);
            }
            information_class = ((uint64_t *)input)[4];
            status = FltSetStreamContext(((uint64_t *)input)[3], information_class, 1, buffer_2, &context);
            if (0 <= status)
            {
                if (context)
                {
                    FltReleaseContext(context);
                    context = NULL;
                }
                value = instance_context;
                KeEnterCriticalRegion();
                ExAcquireResourceExclusiveLite(value + 0x120, (uint64_t)information_class & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
                data_pointer_4 = (int64_t *)(&buffer_2[8]);
                data_pointer = *(int64_t **)(instance_context + 0x88);
                if (*data_pointer != instance_context + 0x80)
                {
                    (*(WD_ROUTINE)swi(0x29))(3);
                }
                *data_pointer_4 = instance_context + 0x80;
                *(int64_t **)(&buffer_2[0xc]) = data_pointer;
                *data_pointer = (int64_t)data_pointer_4;
                *(int64_t **)(instance_context + 0x88) = data_pointer_4;
                *(int32_t *)(instance_context + 4) = *(int32_t *)(instance_context + 4) + 1;
                ExReleaseResourceLite(instance_context + 0x120);
                KeLeaveCriticalRegion();
                wide_text = buffer_2;
            }
            else
            {
                FltReleaseContext(buffer_2);
                if (status != -0x3fe3fffe)
                {
                    goto block_7;
                }
                wide_text = context;
            }
            *data_pointer_5 = wide_text;
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            information_class = 0x30;
            value_6 = (uint64_t)((uint64_t)wide_text_2) & 0xffffffff00000000 | (uint64_t)status & 0xffffffff;
            block_3:
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), information_class, WD_SYMBOL_ADDRESS(WPP_49dcc05efb723005c5388b24d04d6cac_Traceguids), (uint64_t)KeGetCurrentThread(), value_6);
        }
    }
    else if (*(int64_t *)(MpData + 0x60) && !(*(char *)(((int64_t *)data)[2] + 4)))
    {
        values[0] = 0;
        record = (WD_LAYOUT_31 *)(*__guard_dispatch_icall_fptr)(*(uint64_t *)(MpData + 0x10), data, 1, values);
        if (!record)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
            {
                WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2c, WD_SYMBOL_ADDRESS(WPP_49dcc05efb723005c5388b24d04d6cac_Traceguids), (uint64_t)KeGetCurrentThread());
            }
            goto block_5;
        }
        value_13 = record->field_0x30;
        WdStoreField(&value_14, 0, 5, (uint64_t)(((uint64_t)(*(char *)(((int64_t *)input)[4] + 0x49)) & 0xffULL) << 32 | (uint64_t)record->field_0x40 & 0xffffffffULL));
        value_14 = (((uint64_t)(((uint64_t)WdLoadField(&value_14, 6, 2) & 0xffffULL) << 8 | (uint64_t)((char)(record->field_0x38 >> 4)) & 0xffULL) & 0xffffffULL) << 40 | (uint64_t)((uint64_t)value_14) & 0xffffffffffULL) & 0xffff01ffffffffff;
        information_buffer = record->field_0x28;
        information_buffer_2 = record->field_0x0;
        value_8 = record->field_0x3c;
        block_4:
        if (!WdLoadField(&value_14, 5, 1))
        {
            if (*(int32_t *)(instance_context + 0x78) == 2 && WdLoadField(&information_buffer_2, 4, 2) && enabled)
            {
                enabled_2 = 0;
            }
            goto block_1;
        }
    }
    else
    {
        block_5:
        information_class = ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)5 & 0xffffffffULL;

        status = FltQueryInformationFile(((uint64_t *)input)[3], ((uint64_t *)input)[4], &information_buffer, 0x18, information_class, result_length);
        value_7 = (uint32_t)((uint64_t)information_class >> 0x20);
        if (status < 0)
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                goto block_7;
            }
            information_class = 0x2d;
            value_6 = ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL;
            goto block_3;
        }
        if (result_length[0] == 0x18)
        {
            information_class = ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)6 & 0xffffffffULL;
            status = FltQueryInformationFile(((uint64_t *)input)[3], ((uint64_t *)input)[4], &information_buffer_2, 8, information_class, result_length);
            value_7 = (uint32_t)((uint64_t)information_class >> 0x20);
            if (0 <= status)
            {
                if (result_length[0] != 8)
                {
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2f, WD_SYMBOL_ADDRESS(WPP_49dcc05efb723005c5388b24d04d6cac_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)result_length[0] & 0xffffffffULL);
                    }
                    goto block_6;
                }
            }
            else
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2e, WD_SYMBOL_ADDRESS(WPP_49dcc05efb723005c5388b24d04d6cac_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
                }
                block_6:
                if (*(int32_t *)(instance_context + 0x78) == 2 || (uint32_t)(*(int32_t *)(instance_context + 0x78) - 0x1bU) <= 1)
                {
                    enabled = 0;
                    enabled_2 = 0;
                    goto block_4;
                }
            }
            enabled = 1;
            goto block_4;
        }
    }
    block_7:
    if (file_name)
    {
        FltReleaseFileNameInformation();
    }

    if (instance_context)
    {
        FltReleaseContext(instance_context);
    }
    return;
}

void MpCreateInstanceContext(void *input, uint8_t input_2, int32_t input_3, int32_t input_4)
{
    int16_t *provider;
    int64_t *data_pointer;
    uint64_t current_thread;
    uint64_t value;
    uint64_t value_2;
    uint64_t value_3;
    int32_t value_4;
    char buffer_2[8];
    int32_t value_5;
    uint16_t *buffer_3;
    char byte_value;
    char byte_value_2;
    uint64_t value_6;
    uint64_t value_7;
    int64_t value_8;
    int64_t name;
    uint32_t value_9;
    int64_t *data_pointer_2;
    uint32_t value_10;
    uint64_t value_11;
    int32_t status;
    uint64_t value_12;
    uint16_t **wide_text;
    uint32_t value_13;
    uint64_t value_14;
    uint32_t value_15;
    uint64_t value_16;
    uint16_t *wide_text_2;
    uint32_t value_17;
    int32_t value_18;
    char byte_value_3;
    uint32_t value_19;
    int32_t status_2;
    char byte_value_4;
    uint32_t value_20;
    uint64_t value_21;
    uint64_t value_22;
    int32_t value_23;
    int64_t value_24;
    uint64_t value_25;
    uint64_t value_26;
    WD_LAYOUT_101 *buffer_4;
    uint16_t *wide_text_3;
    int64_t data;
    uint16_t value_28;
    value_17 = (uint32_t)((uint64_t)value_16 >> 0x20);
    value_15 = (uint32_t)((uint64_t)value_14 >> 0x20);
    value_13 = (uint32_t)((uint64_t)value_11 >> 0x20);
    value_3 = 0;
    value_25 = 0;
    buffer_3 = NULL;
    value_9 = 0;
    value_5 = 0;
    buffer_2[0] = '\0';
    byte_value_2 = '\0';
    value_4 = 0;
    value_10 = value_9;
    status_2 = input_4;
    if (input_3 != 0x14)
    {
        buffer_4 = (WD_LAYOUT_101 *)ExAllocateFromPagedLookasideList((void *)(MpData + 0x600));
        if (!buffer_4)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x18, WD_SYMBOL_ADDRESS(WPP_49dcc05efb723005c5388b24d04d6cac_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_13 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INSUFFICIENT_RESOURCES & 0xffffffffULL);
            }
            return;
        }
        memset(buffer_4, 0, (char *)0x800);
        current_thread = ((uint64_t)value_13 & 0xffffffffULL) << 32 | (uint64_t)5 & 0xffffffffULL;
        status = FltQueryVolumeInformation(((uint64_t *)input)[3], &value_3, buffer_4, 0x800, current_thread);
        value_10 = (uint32_t)((uint64_t)current_thread >> 0x20);
        value_9 = buffer_4->field_0x0;
        if (status <= -1 && status != -0x7ffffffb && status != -0x3ffffc97 && (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            current_thread = ((uint64_t)value_10 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL;
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x19, WD_SYMBOL_ADDRESS(WPP_49dcc05efb723005c5388b24d04d6cac_Traceguids), (uint64_t)KeGetCurrentThread(), current_thread);
            value_10 = (uint32_t)((uint64_t)current_thread >> 0x20);
        }
        memset(buffer_4, 0, (char *)0x800);
        current_thread = ((uint64_t)value_10 & 0xffffffffULL) << 32 | (uint64_t)1 & 0xffffffffULL;
        value_19 = FltQueryVolumeInformation(((uint64_t *)input)[3], &value_3, buffer_4, 0x800, current_thread);
        value_10 = buffer_4->field_0x8;
        if ((value_19 & 0xc0000000) == 0xc0000000 && value_19 != 0xc0000369 && (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1a, WD_SYMBOL_ADDRESS(WPP_49dcc05efb723005c5388b24d04d6cac_Traceguids), (uint64_t)KeGetCurrentThread(), (uint64_t)current_thread & 0xffffffff00000000 | (uint64_t)value_19 & 0xffffffff);
        }
        ExFreeToPagedLookasideList((void *)(MpData + 0x600), buffer_4);
        current_thread = ((uint64_t *)input)[2];
        if (FltGetVolumeGuidName(current_thread, 0, &value_4) != -0x3fffffdd)
        {
            value_4 = 0;
        }
        status = FltIsVolumeSnapshot(((uint64_t *)input)[2], buffer_2);
        if (status < 0 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qqL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1b, WD_SYMBOL_ADDRESS(WPP_49dcc05efb723005c5388b24d04d6cac_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t *)input)[2], ((uint64_t)value_15 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
        }
        input_4 = status_2;
    }
    current_thread = ((uint64_t *)input)[2];
    if (FltGetVolumeName(current_thread, 0, &value_5) != -0x3fffffdd)
    {
        return;
    }
    wide_text = &buffer_3;
    status = FltAllocateContext(((uint64_t *)input)[1], 2, 0x1d0, ExDefaultNonPagedPoolType, wide_text);
    if (status < 0)
    {
        return;
    }
    data_pointer_2 = (int64_t *)0x1d0;
    memset(buffer_3, 0, (char *)0x1d0);
    *buffer_3 = 0xda01;
    buffer_3[1] = 0x1d0;
    *(uint64_t *)(&buffer_3[0x34]) = ((uint64_t *)input)[3];
    *(uint64_t *)(&buffer_3[0x38]) = ((uint64_t *)input)[2];
    *(int32_t *)(&buffer_3[0x3e]) = input_3;
    *(int32_t *)(&buffer_3[0x3c]) = input_4;
    *(uint32_t *)(&buffer_3[0x2e]) = value_9;
    *(uint32_t *)(&buffer_3[0x30]) = value_10;
    byte_value = '\0';
    if (buffer_2[0])
    {
        *(uint32_t *)(&buffer_3[0x28]) = *(uint32_t *)(&buffer_3[0x28]) | 2;
    }
    if ((input_2 & 0x30) == 0x30)
    {
        *(uint32_t *)(&buffer_3[0x28]) = *(uint32_t *)(&buffer_3[0x28]) | 0x10;
        *(uint32_t *)(&buffer_3[0x28]) = *(uint32_t *)(&buffer_3[0x28]) | 0x20;
    }
    wide_text_2 = &buffer_3[0x40];
    *(uint16_t **)(&buffer_3[0x44]) = wide_text_2;
    *(uint16_t **)wide_text_2 = wide_text_2;
    wide_text_2 = &buffer_3[4];
    *(uint16_t **)(&buffer_3[8]) = wide_text_2;
    *(uint16_t **)wide_text_2 = wide_text_2;
    ExInitializeResourceLite(&buffer_3[0x90]);
    wide_text_2 = buffer_3;
    wide_text_3 = &buffer_3[0xc4];
    *(uint16_t **)(&buffer_3[200]) = wide_text_3;
    *(uint16_t **)wide_text_3 = wide_text_3;
    *(uint64_t *)(&wide_text_2[0xcc]) = FltAllocateGenericWorkItem();
    if (*(int64_t *)(&buffer_3[0xcc]))
    {
        InitializeSListHead(&buffer_3[0xd0]);
        wide_text_2 = buffer_3;
        *(uint32_t *)(&buffer_3[0xd8]) = 0;
        if (value_5)
        {
            status = value_5 + 2;
            *(int64_t **)(&wide_text_2[0x10]) = MpAllocatePoolWithTag(1, status, 0x6e76504d);
            if (*(int64_t *)(&buffer_3[0x10]))
            {
                status = RtlULongToUShort(value_5, &buffer_3[0xd]);
                if (0 <= status)
                {
                    data_pointer_2 = NULL;
                    status = FltGetVolumeName(((uint64_t *)input)[2], &buffer_3[0xc], 0);
                    value_18 = status;
                    if (0 <= status)
                    {
                        goto block_3;
                    }
                }
                else
                {
                    value_18 = status;
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        current_thread = (uint64_t)KeGetCurrentThread();
                        value_2 = 0x1d;
                        value_12 = (uint64_t)((uint64_t)wide_text) & 0xffffffff00000000 | (uint64_t)status & 0xffffffff;
                        value_22 = current_thread;
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_49dcc05efb723005c5388b24d04d6cac_Traceguids), current_thread, value_12);
                    }
                }
            }
            else
            {
                block_1:
                status = -0x3fffff66;

                block_2:
                value_18 = status;
            }
        }
        else
        {
            block_3:
            wide_text_2 = buffer_3;

            if (0xefff <= (uint32_t)(value_4 - 1U))
            {
                block_4:
                wide_text_2 = buffer_3;

                if (status_2 == 2)
                {
                    value = (uint64_t)WdDataStorage11;
                    data_pointer_2 = (int64_t *)0x6862504d;
                    *(int64_t **)(&wide_text_2[0xdc]) = MpAllocatePoolWithTag(1, value << 4, 0x6862504d);
                    if (*(int64_t *)(&buffer_3[0xdc]))
                    {
                        value_20 = 0;
                        data_pointer_2 = NULL;
                        while (value_19 = (uint32_t)data_pointer_2, value_19 < WdDataStorage11)
                        {
                            data = *(int64_t *)(&buffer_3[0xdc]) + (int64_t)data_pointer_2 * 0x10;
                            *(int64_t *)(data + 8) = data;
                            *(int64_t *)data = data;
                            value_20 = value_19 + 1;
                            data_pointer_2 = (int64_t *)((uint64_t)value_20);
                        }
                    }
                    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        wide_text = (uint16_t **)(&buffer_3[0xc]);
                        current_thread = (uint64_t)KeGetCurrentThread();
                        WPP_SF_qZq(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x20);
                    }
                }
                if (WdDataStorage15 == 1)
                {
                    data_pointer_2 = (int64_t *)0x1388;
                    MpInitFileStateGenericTable(buffer_3, 0x1b, 5000);
                }
                if (WdDataStorage16 == 1)
                {
                    data_pointer_2 = (int64_t *)0x2000;
                    MpInitFileStateGenericTable(buffer_3, 0x1c, 0x2000);
                }
                if (WdDataStorage17 == 1)
                {
                    data_pointer_2 = (int64_t *)0x2000;
                    MpInitFileStateGenericTable(buffer_3, 2, 0x2000);
                }
                MpGetVolumeProperties(input, buffer_3);
                status = MpIsSystemVolume(((uint64_t *)input)[2], &byte_value_2);
                if (0 <= status)
                {
                    if (byte_value_2)
                    {
                        *(uint32_t *)(&buffer_3[0x28]) = *(uint32_t *)(&buffer_3[0x28]) | 1;
                        status = MpInitializeKnownProcessPaths();
                        if (status <= -1)
                        {
                            value_18 = status;
                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                            {
                                current_thread = (uint64_t)KeGetCurrentThread();
                                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x21, WD_SYMBOL_ADDRESS(WPP_49dcc05efb723005c5388b24d04d6cac_Traceguids), current_thread, (uint64_t)((uint64_t)wide_text) & 0xffffffff00000000 | (uint64_t)status & 0xffffffff);
                            }
                            goto block_5;
                        }
                        data_pointer_2 = (int64_t *)(MpData + 0xcc0);
                        if (!(*data_pointer_2))
                        {
                            value_7 = 0;
                            value_26 = 0;
                            status = MpAppendUnicodeStringToUnicodeString((WD_LAYOUT_10 *)(&buffer_3[0xc]), &value_7, data_pointer_2, 0x6e76504d);
                            if (status <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                            {
                                current_thread = (uint64_t)KeGetCurrentThread();
                                wide_text = (uint16_t **)((uint64_t)((uint64_t)wide_text) & 0xffffffff00000000 | (uint64_t)status & 0xffffffff);
                                data_pointer_2 = &WPP_49dcc05efb723005c5388b24d04d6cac_Traceguids;
                                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x22, WD_SYMBOL_ADDRESS(WPP_49dcc05efb723005c5388b24d04d6cac_Traceguids), current_thread, wide_text);
                            }
                            if (*(WD_LAYOUT_10 **)(MpData + 0xcc0) && (data_pointer_2 = (int64_t *)(MpData + 0xf60), !(*data_pointer_2)) && (status = MpAppendUnicodeStringToUnicodeString(*(WD_LAYOUT_10 **)(MpData + 0xcc0), &MsSenseSProcessPathPartial, data_pointer_2, 0x6e76504d), status <= -1 && (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)))
                            {
                                current_thread = (uint64_t)KeGetCurrentThread();
                                wide_text = (uint16_t **)((uint64_t)((uint64_t)wide_text) & 0xffffffff00000000 | (uint64_t)status & 0xffffffff);
                                data_pointer_2 = &WPP_49dcc05efb723005c5388b24d04d6cac_Traceguids;
                                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x23, WD_SYMBOL_ADDRESS(WPP_49dcc05efb723005c5388b24d04d6cac_Traceguids), current_thread, wide_text);
                            }
                        }
                    }
                }
                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    current_thread = (uint64_t)KeGetCurrentThread();
                    wide_text = (uint16_t **)((uint64_t)((uint64_t)wide_text) & 0xffffffff00000000 | (uint64_t)status & 0xffffffff);
                    wide_text_2 = buffer_3;
                    WPP_SF_qDZq(*(uint64_t *)(WPP_GLOBAL_Control + 0x18));
                    value_17 = (uint32_t)((uint64_t)wide_text_2 >> 0x20);
                }
                if (*(int64_t *)(MpData + 0x40) && (value_19 = *(uint32_t *)(&buffer_3[0x3c]), value_19 == 2 || value_19 <= 0x1c && 0x18402038U >> (value_19 & 0x1f) & 1))
                {
                    status = (*__guard_dispatch_icall_fptr)(((uint64_t *)input)[3]);
                    if (status)
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                        {
                            current_thread = (uint64_t)KeGetCurrentThread();
                            wide_text = (uint16_t **)(&buffer_3[0xc]);
                            WPP_SF_qZqD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18));
                        }
                    }
                    else
                    {
                        *(uint32_t *)(&buffer_3[0x28]) = *(uint32_t *)(&buffer_3[0x28]) | 4;
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                        {
                            current_thread = (uint64_t)KeGetCurrentThread();
                            wide_text = (uint16_t **)(&buffer_3[0xc]);
                            WPP_SF_qZq(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x25);
                        }
                    }
                }
                if (*(uint32_t *)(&buffer_3[0x2a]) & 0x800)
                {
                    byte_value_3 = '\0';
                    value_8 = 0;
                    name = 0;
                    if (!(*(int32_t *)(&buffer_3[0x3c])))
                    {
                        status_2 = FltGetDiskDeviceObject(((uint64_t *)input)[2], &value_8);
                        if (0 <= status_2)
                        {
                            WdUnresolvedAtomicBegin();
                            ObTotalReferences += 1;
                            WdUnresolvedAtomicEnd();
                        }
                        if (0 <= status_2 && (data = *(int64_t *)(value_8 + 8), 0 <= (int32_t)MpQueryObjectName(data, &name)))
                        {
                            byte_value = RtlPrefixUnicodeString(WD_UTIL_UNRECOVERED_ADDRESS, name, (uint64_t)((uint64_t)data_pointer_2) & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
                            byte_value_3 = byte_value;
                        }
                    }
                    if (value_8)
                    {
                        ObfDereferenceObject();
                        data = ObTotalReferences;
                        WdUnresolvedAtomicBegin();
                        ObTotalReferences -= 1;
                        WdUnresolvedAtomicEnd();
                        if (data + -1 <= -1 && *(int32_t *)(MpData + 0x364) <= -1)
                        {
                            if (!KdRefreshDebuggerNotPresent())
                            {
                                (*(WD_ROUTINE)swi(3))();
                                return;
                            }
                            KeBugCheck(1);
                        }
                    }
                    if (name)
                    {
                        MpFreeObjectName(name);
                    }
                    byte_value_4 = byte_value;
                    if (byte_value)
                    {
                        *(uint32_t *)(&buffer_3[0x2a]) = *(uint32_t *)(&buffer_3[0x2a]) & 0xfffff7ff;
                        *(uint32_t *)(&buffer_3[0x2a]) = *(uint32_t *)(&buffer_3[0x2a]) | 0x10;
                        *(char *)(&buffer_3[0xe4]) = 1;
                    }
                }
                if (*(uint32_t *)(&buffer_3[0x2a]) & 0x800)
                {
                    WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpDlpData + 0x24)), 1);
                }
                current_thread = 0;
                status = FltSetInstanceContext(((uint64_t *)input)[3], 1, buffer_3, 0, wide_text);
                data = MpData;
                value_9 = (uint32_t)((uint64_t)wide_text >> 0x20);
                value_18 = status;
                if (0 <= status)
                {
                    KeEnterCriticalRegion();
                    ExAcquireResourceExclusiveLite(data + 0x2f0, (uint64_t)current_thread & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
                    data = MpData;
                    data_pointer = (int64_t *)(&buffer_3[4]);
                    data_pointer_2 = *(int64_t **)(MpData + 0x230);
                    if (*data_pointer_2 != MpData + 0x228)
                    {
                        (*(WD_ROUTINE)swi(0x29))(3);
                    }
                    *data_pointer = MpData + 0x228;
                    *(int64_t **)(&buffer_3[8]) = data_pointer_2;
                    *data_pointer_2 = (int64_t)data_pointer;
                    *(int64_t **)(data + 0x230) = data_pointer;
                    ExReleaseResourceLite(MpData + 0x2f0);
                    KeLeaveCriticalRegion();
                    if (*(uint32_t *)(&buffer_3[0x28]) & 0x10)
                    {
                        WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0xfdc)), 1);
                    }
                    if (byte_value_2 && MpDlpData && *(char *)(MpDlpData + 0xf1))
                    {
                        value_23 = MpDlpSetNetworkRedirectionInfo(((int64_t *)input)[3]);
                        if (value_23 <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            current_thread = (uint64_t)KeGetCurrentThread();
                            status = value_18;
                            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x27, WD_SYMBOL_ADDRESS(WPP_49dcc05efb723005c5388b24d04d6cac_Traceguids), current_thread, ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)value_23 & 0xffffffffULL);
                            value_18 = status;
                        }
                    }
                }
            }
            else
            {
                value_6 = 0;
                value_24 = 0;
                status = value_4 + 2;
                *(int64_t **)(&wide_text_2[0x18]) = MpAllocatePoolWithTag(1, status, 0x6e67504d);
                if (!(*(int64_t *)(&buffer_3[0x18])))
                {
                    goto block_1;
                }
                value_28 = (uint16_t)value_4;
                buffer_3[0x15] = value_28;
                data_pointer_2 = NULL;
                status = FltGetVolumeGuidName(((uint64_t *)input)[2], &buffer_3[0x14], 0);
                value_18 = status;
                if (0 <= status)
                {
                    if ((uint16_t)buffer_3[0x14] < 0x60)
                    {
                        status = -0x3fffffff;
                        goto block_2;
                    }
                    data = *(int64_t *)(&buffer_3[0x18]) + 0x14;
                    value_6 = ((uint64_t)WdLoadField(&value_6, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)0x4c004c & 0xffffffffULL;
                    status = RtlGUIDFromString(&value_6, &buffer_3[0x1c]);
                    if (0 <= status)
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                        {
                            data_pointer_2 = &WPP_49dcc05efb723005c5388b24d04d6cac_Traceguids;
                            WPP_SF_Z(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1f, WD_SYMBOL_ADDRESS(WPP_49dcc05efb723005c5388b24d04d6cac_Traceguids), &buffer_3[0x14]);
                        }
                        goto block_4;
                    }
                    value_18 = status;
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        WPP_SF_dZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1e, WD_SYMBOL_ADDRESS(WPP_49dcc05efb723005c5388b24d04d6cac_Traceguids), status, &value_6);
                    }
                }
            }
        }
    }
    else
    {
        status = -0x3fffff66;
        value_18 = -0x3fffff66;
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            current_thread = (uint64_t)KeGetCurrentThread();
            value_2 = 0x1c;
            value_12 = (uint64_t)((uint64_t)wide_text) & 0xffffffff00000000 | (uint64_t)WD_STATUS_INSUFFICIENT_RESOURCES & 0xffffffff;
            status = -0x3fffff66;
            value_21 = current_thread;
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_49dcc05efb723005c5388b24d04d6cac_Traceguids), current_thread, value_12);
        }
    }
    block_5:
    provider = &buffer_3[0xc];

    if (*provider)
    {
        if (0 <= status)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                WPP_SF_qZqDD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), buffer_3[0x2c], provider, (uint64_t)KeGetCurrentThread(), provider, buffer_3, ((uint64_t)value_17 & 0xffffffffULL) << 32 | (uint64_t)((uint32_t)((uint16_t)buffer_3[0x2c])) & 0xffffffffULL, *(uint32_t *)(&buffer_3[0x28]), value_18);
            }
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qZqL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18));
        }
    }
    FltReleaseContext(buffer_3);
    return;
}

void MpGetVolumeProperties(WD_LAYOUT_45 *input, void *input_2)
{
    int32_t trace_argument_1;
    int64_t allocation;
    uint64_t event_id;
    int32_t result_length[2];
    uint64_t value;
    uint32_t value_2;
    value_2 = (uint32_t)((uint64_t)value >> 0x20);
    result_length[0] = 0;
    if (((int32_t *)input_2)[0x1f] == 0x14)
    {
        ((uint32_t *)input_2)[0x15] = 0x10;
        ((uint16_t *)input_2)[0x2c] = 0;
        return;
    }
    ((uint32_t *)input_2)[0x15] = 0;
    ((uint16_t *)input_2)[0x2c] = (uint16_t)(*(uint32_t *)(MpData + 0x360) >> 6) & 1;
    trace_argument_1 = FltGetVolumeProperties(input->field_0x10, 0, 0, result_length);
    if (trace_argument_1 != -0x3fffffdd)
    {
        if (0 <= trace_argument_1)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
            {
                WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x14, WD_SYMBOL_ADDRESS(WPP_49dcc05efb723005c5388b24d04d6cac_Traceguids));
            }
            goto block_3;
        }
        block_2:
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
        {
            event_id = 0x15;
            block_1:
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_49dcc05efb723005c5388b24d04d6cac_Traceguids), trace_argument_1);
        }
    }
    else
    {
        if (!result_length[0])
        {
            goto block_2;
        }
        allocation = (int64_t)MpAllocatePoolWithTag(1, result_length[0], 0x7670504d);
        if (!allocation)
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2))
            {
                goto block_3;
            }
            event_id = 0x13;
            trace_argument_1 = -0x3fffff66;
            goto block_1;
        }
        trace_argument_1 = FltGetVolumeProperties(input->field_0x10, allocation, result_length[0], result_length);
        if (0 <= trace_argument_1)
        {
            ((uint32_t *)input_2)[0x15] = *(uint32_t *)(allocation + 4);
            ((uint16_t *)input_2)[0x2c] = *(uint16_t *)(allocation + 0x12);
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                event_id = ((uint64_t)value_2 & 0xffffffffULL) << 32 | (uint64_t)(*(uint32_t *)(allocation + 4)) & 0xffffffffULL;
                WPP_SF_ZDD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x11, WD_SYMBOL_ADDRESS(WPP_49dcc05efb723005c5388b24d04d6cac_Traceguids), &((int16_t *)input_2)[0xc], event_id, *(uint16_t *)(allocation + 0x12));
                value_2 = (uint32_t)((uint64_t)event_id >> 0x20);
            }
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
        {
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x12, WD_SYMBOL_ADDRESS(WPP_49dcc05efb723005c5388b24d04d6cac_Traceguids), trace_argument_1);
        }
        ExFreePoolWithTag(allocation, 0x7670504d);
    }
    block_3:
    *(uint32_t *)((int64_t)input_2 + 0x54) = *(uint32_t *)((int64_t)input_2 + 0x54) & 0xfffff7ff;

    if (MpIsHotPluggable(input))
    {
        *(uint32_t *)((int64_t)input_2 + 0x54) = *(uint32_t *)((int64_t)input_2 + 0x54) | 0x800;
    }
    trace_argument_1 = MpGetStorageDeviceAttributes(input, &((uint64_t *)input_2)[0x38]);
    if (0 <= trace_argument_1)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            WPP_SF_Zi(*(uint64_t *)(WPP_GLOBAL_Control + 0x18));
        }
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
    {
        WPP_SF_ZD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x16, WD_SYMBOL_ADDRESS(WPP_49dcc05efb723005c5388b24d04d6cac_Traceguids), &((int16_t *)input_2)[0xc], ((uint64_t)value_2 & 0xffffffffULL) << 32 | (uint64_t)trace_argument_1 & 0xffffffffULL);
    }
    return;
}

void MpIsHotPluggable(WD_LAYOUT_45 *input)
{
    int32_t status;
    int64_t *data_pointer;
    uint32_t value;
    uint64_t value_2;
    int64_t value_4;
    uint64_t event_id;
    int64_t *allocation;
    int64_t values[4];
    uint64_t value_5;
    uint64_t value_6;
    value = (uint32_t)((uint64_t)value_6 >> 0x20);
    values[0] = 0;
    allocation = NULL;
    value_5 = 0;
    value_2 = 0;
    values[3] = 0;
    values[1] = 0;
    values[2] = 0;
    status = FltGetDiskDeviceObject(input->field_0x10, values);
    if (0 <= status)
    {
        WdUnresolvedAtomicBegin();
        ObTotalReferences += 1;
        WdUnresolvedAtomicEnd();
        allocation = (int64_t *)MpAllocatePoolWithTag(1, (char *)0x8, 0x6870504d);
        if (allocation)
        {
            KeInitializeEvent(&values[1], 0, 0);
            data_pointer = allocation;
            value_4 = IoBuildDeviceIoControlRequest(0x2d0c14, values[0], 0, 0, allocation, 8, 0, &values[1], &value_5);
            value = (uint32_t)((uint64_t)data_pointer >> 0x20);
            if (value_4)
            {
                status = IofCallDriver(values[0], value_4);
                if (status == 0x103)
                {
                    value = 0;
                    KeWaitForSingleObject(&values[1], 0, 0, 0, 0);
                    status = (int32_t)value_5;
                }
                if (0 <= status || WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4))
                {
                    goto block_2;
                }
                event_id = 0xd;
                goto block_1;
            }
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                goto block_2;
            }
            event_id = 0xc;
        }
        else
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                goto block_2;
            }
            event_id = 0xb;
        }
        WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_49dcc05efb723005c5388b24d04d6cac_Traceguids), (uint64_t)KeGetCurrentThread());
    }
    else
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            goto block_2;
        }
        event_id = 10;
        allocation = NULL;
        block_1:
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_49dcc05efb723005c5388b24d04d6cac_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
    }
    block_2:
    if (values[0])
    {
        ObfDereferenceObject();
        value_4 = ObTotalReferences;
        WdUnresolvedAtomicBegin();
        ObTotalReferences -= 1;
        WdUnresolvedAtomicEnd();
        if (value_4 + -1 < 0 && *(int32_t *)(MpData + 0x364) <= -1)
        {
            if (!KdRefreshDebuggerNotPresent())
            {
                (*(WD_ROUTINE)swi(3))();
                return;
            }
            KeBugCheck(1);
        }
    }

    if (allocation)
    {
        ExFreePoolWithTag(allocation, 0x6870504d);
    }
    return;
}

void MpGetStorageDeviceAttributes(WD_LAYOUT_45 *input, uint64_t *input_2)
{
    int32_t trace_argument_1;
    uint64_t value;
    uint64_t value_2;
    uint64_t value_3;
    uint64_t value_4;
    int64_t value_6;
    uint64_t event_id;
    int64_t values[2];
    uint64_t event;
    uint64_t value_7;
    uint64_t value_8;
    uint32_t value_9;
    values[0] = 0;
    *input_2 = 0;
    values[1] = 0;
    value_9 = 0;
    value_7 = 0;
    value_4 = 0;
    value_3 = 0;
    value_8 = 0;
    value = 0;
    event = 0;
    value_2 = 0;
    trace_argument_1 = FltGetDiskDeviceObject(input->field_0x10, values);
    if (0 <= trace_argument_1)
    {
        WdUnresolvedAtomicBegin();
        ObTotalReferences += 1;
        WdUnresolvedAtomicEnd();
        values[1] = 0x37;
        KeInitializeEvent(&event, 0, 0);
        value_6 = IoBuildDeviceIoControlRequest(0x2d1400, values[0], &values[1], 0xc, &value_8, 0x10, 0, &event, &value_7);
        if (!value_6)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xf, WD_SYMBOL_ADDRESS(WPP_49dcc05efb723005c5388b24d04d6cac_Traceguids));
            }
            goto block_1;
        }
        trace_argument_1 = IofCallDriver(values[0], value_6);
        if (trace_argument_1 == 0x103)
        {
            KeWaitForSingleObject(&event, 0, 0, 0, 0);
            trace_argument_1 = (int32_t)value_7;
        }
        if (0 <= trace_argument_1)
        {
            if (0x10 <= WdLoadField(&value_8, 4, 4))
            {
                *input_2 = value;
            }
            goto block_1;
        }
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4))
        {
            goto block_1;
        }
        event_id = 0x10;
    }
    else
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            goto block_1;
        }
        event_id = 0xe;
    }
    WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_49dcc05efb723005c5388b24d04d6cac_Traceguids), trace_argument_1);
    block_1:
    if (values[0])
    {
        ObfDereferenceObject();
        value_6 = ObTotalReferences;
        WdUnresolvedAtomicBegin();
        ObTotalReferences -= 1;
        WdUnresolvedAtomicEnd();
        if (value_6 + -1 <= -1 && *(int32_t *)(MpData + 0x364) <= -1)
        {
            if (KdRefreshDebuggerNotPresent())
            {
                KeBugCheck(1);
            }
            (*(WD_ROUTINE)swi(3))();
            return;
        }
    }

    return;
}

void MpDeleteHandleContext(void *context, int16_t context_type)
{
    int64_t value;
    uint16_t value_2;
    uint64_t *data_pointer;
    uint64_t *data_pointer_2;
    uint64_t *allocation;
    int64_t data;
    int64_t value_3;
    if (context_type != 0x10)
    {
        KeBugCheckEx(0x108, (uint16_t)context_type, 0x10, 0, 0);
    }
    allocation = *(uint64_t **)((uint64_t *)((int64_t)context + 0x30));
    while (allocation != (uint64_t *)((int64_t)context + 0x30))
    {
        data_pointer = (uint64_t *)(*allocation);
        if ((uint64_t *)data_pointer[1] != allocation || (data_pointer_2 = (uint64_t *)allocation[1], (uint64_t *)(*data_pointer_2) != allocation))
        {
            (*(WD_ROUTINE)swi(0x29))(3);
        }
        *data_pointer_2 = data_pointer;
        data_pointer[1] = data_pointer_2;
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
        allocation = data_pointer;
    }

    FltDeletePushLock((int64_t)context + 0x48);
    FltDeletePushLock((int64_t)context + 0x40);
    if (((int64_t *)context)[10])
    {
        MpFreeString(((int64_t *)context)[10]);
    }
    value = WdAtomicExchange64((volatile int64_t *)((int64_t *)((int64_t)context + 0x70)), 0);
    if (value)
    {
        FltReleaseFileNameInformation();
    }
    data = MpData;
    value = ((int64_t *)context)[0xc];
    if (value)
    {
        value_3 = MpData + 0x1080;
        *(int32_t *)(MpData + 0x109c) = *(int32_t *)(MpData + 0x109c) + 1;
        value_2 = *(uint16_t *)(data + 0x1090);
        if (value_2 <= (uint16_t)ExQueryDepthSList(value_3))
        {
            *(int32_t *)(data + 0x10a0) = *(int32_t *)(data + 0x10a0) + 1;
            (*__guard_dispatch_icall_fptr)(value);
            ((uint64_t *)context)[0xc] = 0;
        }
        else
        {
            ExpInterlockedPushEntrySList(value_3, value);
            ((uint64_t *)context)[0xc] = 0;
        }
    }
    data = MpData;
    value = ((int64_t *)context)[0xd];
    if (value)
    {
        value_3 = MpData + 0x1100;
        *(int32_t *)(MpData + 0x111c) = *(int32_t *)(MpData + 0x111c) + 1;
        value_2 = *(uint16_t *)(data + 0x1110);
        if (value_2 <= (uint16_t)ExQueryDepthSList(value_3))
        {
            *(int32_t *)(data + 0x1120) = *(int32_t *)(data + 0x1120) + 1;
            (*__guard_dispatch_icall_fptr)(value);
        }
        else
        {
            ExpInterlockedPushEntrySList(value_3, value);
        }
        ((uint64_t *)context)[0xd] = 0;
        return;
    }
    return;
}

void MpDeleteStreamContext(void *context, uint64_t context_type)
{
    int64_t *data_pointer;
    uint32_t value;
    int32_t *data_pointer_2;
    int64_t value_2;
    int64_t *allocation;
    uint64_t *allocation_2;
    uint64_t *data_pointer_3;
    uint64_t *allocation_3;
    int16_t value_3;
    uint64_t value_4;
    value = (uint32_t)((uint64_t)value_4 >> 0x20);
    value_3 = (int16_t)context_type;
    if (value_3 != 8)
    {
        KeBugCheckEx(0x108, context_type & 0xffff, 8, 0, 0);
    }
    if (((int64_t *)context)[0x19])
    {
        ObDereferenceObjectDeferDelete();
        value_2 = ObTotalReferences;
        WdUnresolvedAtomicBegin();
        ObTotalReferences -= 1;
        WdUnresolvedAtomicEnd();
        if (value_2 + -1 <= -1 && *(int32_t *)(MpData + 0x364) <= -1)
        {
            if (!KdRefreshDebuggerNotPresent())
            {
                (*(WD_ROUTINE)swi(3))();
                return;
            }
            KeBugCheck(1);
        }
    }
    if (!(((uint32_t *)context)[0xc] & 6))
    {
        if (WdDataStorage15 == 1)
        {
            MpSaveStreamStateToCsvCache(context);
        }
        if (WdDataStorage16 == 1)
        {
            MpSaveStreamStateToRefsCache(context);
        }
        if (WdDataStorage17 == 1)
        {
            MpSaveStreamStateToNtfsCache(context);
        }
    }
    FltDeletePushLock((int64_t)context + 0xc0);
    FltDeletePushLock((int64_t)context + 0x120);
    FltDeletePushLock((int64_t)context + 0x270);
    data_pointer = &((int64_t *)context)[2];
    if ((int64_t *)(*data_pointer) != data_pointer)
    {
        value_2 = ((int64_t *)context)[1];
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(value_2 + 0x120, (uint64_t)context_type & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
        value_2 = *data_pointer;
        if (*(int64_t **)(value_2 + 8) != data_pointer || (allocation = ((int64_t **)context)[3], (int64_t *)(*allocation) != data_pointer))
        {
            (*(WD_ROUTINE)swi(0x29))(3);
        }
        *allocation = value_2;
        *(int64_t **)(value_2 + 8) = allocation;
        data_pointer_2 = (int32_t *)(((int64_t *)context)[1] + 4);
        *data_pointer_2 = *data_pointer_2 + -1;
        ExReleaseResourceLite(((int64_t *)context)[1] + 0x120);
        KeLeaveCriticalRegion();
    }
    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
    {
        WPP_SF_qLZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x32, WD_SYMBOL_ADDRESS(WPP_49dcc05efb723005c5388b24d04d6cac_Traceguids), context, ((uint64_t)value & 0xffffffffULL) << 32 | (uint64_t)(*(uint32_t *)(((int64_t *)context)[1] + 4)) & 0xffffffffULL, &((int16_t *)context)[0x78]);
    }
    if (Microsoft_Antimalware_AMFilterEnableBits & 0x40)
    {
        McTemplateK0x_EtwWriteTransfer();
    }
    FltReleaseContext(((uint64_t *)context)[1]);
    if (((int64_t *)context)[0x12])
    {
        ExFreePoolWithTag(((int64_t *)context)[0x12], 0x6573504d);
    }
    if (((int64_t *)context)[0x13])
    {
        ExFreeToPagedLookasideList((void *)(MpData + 0x580), ((int64_t *)context)[0x13]);
    }
    if (((uint32_t *)context)[0xc] & 0x10000)
    {
        FltAcquirePushLockExclusive(MpDlpData + 8);
        allocation_2 = *(uint64_t **)((uint64_t *)(MpDlpData + 0x10));
        do
        {
            allocation_3 = allocation_2;
            if (allocation_3 == (uint64_t *)(MpDlpData + 0x10))
            {
                FltReleasePushLock(MpDlpData + 8);
                goto block_1;
            }
            allocation_2 = (uint64_t *)(*allocation_3);
        }
        while ((void *)allocation_3[3] != context);
        if ((uint64_t *)allocation_2[1] != allocation_3 || (data_pointer_3 = (uint64_t *)allocation_3[1], (uint64_t *)(*data_pointer_3) != allocation_3))
        {
            (*(WD_ROUTINE)swi(0x29))(3);
        }
        *data_pointer_3 = allocation_2;
        allocation_2[1] = data_pointer_3;
        MpDeleteDlpSectionFileNameEntry(allocation_3);
        FltReleasePushLock(MpDlpData + 8);
        MpDlpProcessRemoveSensitiveSectionFromRunningProcesses(context);
    }
    block_1:
    allocation_2 = (uint64_t *)ExpInterlockedFlushSList((int64_t)context + 0x110);

    while (allocation_2)
    {
        allocation_3 = (uint64_t *)(*allocation_2);
        MpDlpOnFileObjectClose(NULL, (WD_LAYOUT_65 *)(&allocation_2[3]));
        if ((void *)allocation_2[2])
        {
            MpReleaseProcessContext((void *)allocation_2[2]);
            allocation_2[2] = 0;
        }
        if (allocation_2[4])
        {
            ExFreePoolWithTag(allocation_2[4], 0x6e66504d);
            allocation_2[4] = 0;
        }
        ExFreePoolWithTag(allocation_2, 0x6670504d);
        allocation_2 = allocation_3;
    }

    data_pointer = &((int64_t *)context)[0x25];
    while (allocation = (int64_t *)(*data_pointer), allocation != data_pointer)
    {
        if ((int64_t *)allocation[1] != data_pointer || (value_2 = *allocation, (int64_t *)(*(int64_t *)(value_2 + 8)) != allocation))
        {
            (*(WD_ROUTINE)swi(0x29))(3);
        }
        *data_pointer = value_2;
        *(int64_t **)(value_2 + 8) = data_pointer;
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

    data_pointer = &((int64_t *)context)[0x27];
    while (true)
    {
        allocation = (int64_t *)(*data_pointer);
        if (allocation == data_pointer)
        {
            if (((int64_t *)context)[0x1f])
            {
                ExFreePoolWithTag(((int64_t *)context)[0x1f], 0x6e66504d);
                return;
            }
            return;
        }
        if ((int64_t *)allocation[1] != data_pointer || (value_2 = *allocation, (int64_t *)(*(int64_t *)(value_2 + 8)) != allocation))
        {
            break;
        }
        *data_pointer = value_2;
        *(int64_t **)(value_2 + 8) = data_pointer;
        if (allocation[3])
        {
            ExFreePoolWithTag(allocation[3], 0x6165504d);
        }
        ExFreeToPagedLookasideList((void *)(MpData + 0x500), allocation);
    }

    (*(WD_ROUTINE)swi(0x29))(3);
}

void MpDeleteSectionContext(uint64_t context, int16_t context_type)
{
    if (context_type == 0x40)
    {
        return;
    }
    KeBugCheckEx(0x108, (uint16_t)context_type, 0x40, 0, 0);
}

void MpDeleteInstanceContext(void *context, int16_t context_type)
{
    int64_t *data_pointer;
    int64_t data;
    int64_t *data_pointer_2;
    if (context_type != 2)
    {
        KeBugCheckEx(0x108, (uint16_t)context_type, 2, 0, 0);
    }
    data_pointer_2 = *(int64_t **)((int64_t *)((int64_t)context + 0x80));
    if (data_pointer_2 != (int64_t *)((int64_t)context + 0x80))
    {
        KeBugCheckEx(0x108, data_pointer_2, ((uint64_t *)context)[0x11], 0, 0);
    }
    data_pointer_2 = *(int64_t **)((int64_t *)((int64_t)context + 0x188));
    if (data_pointer_2 != (int64_t *)((int64_t)context + 0x188))
    {
        KeBugCheckEx(0x108, data_pointer_2, ((uint64_t *)context)[0x32], 0, 0);
    }
    if (((uint32_t *)context)[0x14] & 0x10)
    {
        WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0xfdc)), -1);
    }
    if (WdDataStorage15 == 1)
    {
        data_pointer_2 = NULL;
        MpFreeFileStateGenericTable(context, 0x1b);
    }
    if (WdDataStorage16 == 1)
    {
        data_pointer_2 = NULL;
        MpFreeFileStateGenericTable(context, 0x1c);
    }
    if (WdDataStorage17 == 1)
    {
        data_pointer_2 = NULL;
        MpFreeFileStateGenericTable(context, 2);
    }
    data = MpData;
    data_pointer = &((int64_t *)context)[1];
    if ((int64_t *)(*data_pointer) != data_pointer)
    {
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(data + 0x2f0, (uint64_t)data_pointer_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
        data = *data_pointer;
        if (*(int64_t **)(data + 8) != data_pointer || (data_pointer_2 = ((int64_t **)context)[2], (int64_t *)(*data_pointer_2) != data_pointer))
        {
            (*(WD_ROUTINE)swi(0x29))(3);
        }
        *data_pointer_2 = data;
        *(int64_t **)(data + 8) = data_pointer_2;
        ExReleaseResourceLite(MpData + 0x2f0);
        KeLeaveCriticalRegion();
    }
    if (((uint32_t *)context)[0x15] & 0x800)
    {
        WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpDlpData + 0x24)), -1);
    }
    if (((int64_t *)context)[0x33])
    {
        FltFreeGenericWorkItem();
    }
    if (((int64_t *)context)[0x37])
    {
        MpRemoveAllKnownBadEntries(context);
        ExFreePoolWithTag(((uint64_t *)context)[0x37], 0x6862504d);
    }
    ExDeleteResourceLite((int64_t)context + 0x120);
    if (*(int16_t *)((int64_t)context + 0x18) && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
    {
        WPP_SF_qZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2a, WD_SYMBOL_ADDRESS(WPP_49dcc05efb723005c5388b24d04d6cac_Traceguids), (uint64_t)KeGetCurrentThread(), (int16_t *)((int64_t)context + 0x18));
    }
    if (((int64_t *)context)[6])
    {
        ExFreePoolWithTag(((int64_t *)context)[6], 0x6e67504d);
    }
    if (!((int64_t *)context)[4])
    {
        return;
    }
    ExFreePoolWithTag(((int64_t *)context)[4], 0x6e76504d);
    return;
}

void MpCreateHandleContext__finally_0(uint64_t input, void *input_2)
{
    if (!((int64_t *)input_2)[7])
    {
        return;
    }
    FltReleaseContext();
    return;
}

void MpCreateStreamContext__finally_0(uint64_t input, void *input_2)
{
    if (((int64_t *)input_2)[0x30])
    {
        FltReleaseFileNameInformation();
    }
    if (!((int64_t *)input_2)[0x2f])
    {
        return;
    }
    FltReleaseContext();
    return;
}

void MpCreateInstanceContext__finally_0(uint64_t input, void *input_2, uint64_t provider)
{
    int32_t event_id;
    int64_t provider_2;
    if (*(int16_t *)(((int64_t *)input_2)[0x16] + 0x18))
    {
        event_id = ((int32_t *)input_2)[0x10];
        if (0 <= event_id)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                provider_2 = ((int64_t *)input_2)[0x16];
                WPP_SF_qZqDD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), provider_2 + 0x18, provider_2, (uint64_t)KeGetCurrentThread(), provider_2 + 0x18, provider_2, *(uint16_t *)(provider_2 + 0x58), *(uint32_t *)(provider_2 + 0x50));
            }
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qZqL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, provider, (uint64_t)KeGetCurrentThread(), (int16_t *)(((int64_t *)input_2)[0x16] + 0x18), ((int64_t *)input_2)[0x16], event_id);
        }
    }
    FltReleaseContext(((uint64_t *)input_2)[0x16]);
    return;
}

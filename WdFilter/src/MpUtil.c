#include "wdfilter.h"

static const uint16_t WdExtensionText1[] = {'s', 'p', 'l', 0};
static const uint16_t WdExtensionText2[] = {'t', 'm', 'p', 0};
static const uint16_t WdExtensionText3[] = {'t', 'i', 'f', 0};
static const uint16_t WdExtensionText4[] = {'d', 'o', 'c', 0};
static const uint16_t WdExtensionText5[] = {'d', 'o', 'c', 'x', 0};
static const uint16_t WdExtensionText6[] = {'d', 'o', 'c', 'm', 0};
static const uint16_t WdExtensionText7[] = {'d', 'o', 't', 0};
static const uint16_t WdExtensionText8[] = {'d', 'o', 't', 'x', 0};
static const uint16_t WdExtensionText9[] = {'d', 'o', 't', 'm', 0};
static const uint16_t WdExtensionText10[] = {'d', 'o', 'c', 'b', 0};
static const uint16_t WdExtensionText11[] = {'x', 'l', 's', 0};
static const uint16_t WdExtensionText12[] = {'x', 'l', 's', 'x', 0};
static const uint16_t WdExtensionText13[] = {'x', 'l', 't', 0};
static const uint16_t WdExtensionText14[] = {'x', 'l', 'm', 0};
static const uint16_t WdExtensionText15[] = {'x', 'l', 's', 'm', 0};
static const uint16_t WdExtensionText16[] = {'x', 'l', 't', 'x', 0};
static const uint16_t WdExtensionText17[] = {'x', 'l', 't', 'm', 0};
static const uint16_t WdExtensionText18[] = {'x', 'l', 's', 'b', 0};
static const uint16_t WdExtensionText19[] = {'x', 'l', 'w', 0};
static const uint16_t WdExtensionText20[] = {'p', 'p', 't', 0};
static const uint16_t WdExtensionText21[] = {'p', 'p', 't', 'x', 0};
static const uint16_t WdExtensionText22[] = {'p', 'o', 's', 0};
static const uint16_t WdExtensionText23[] = {'p', 'p', 's', 0};
static const uint16_t WdExtensionText24[] = {'p', 'p', 't', 'm', 0};
static const uint16_t WdExtensionText25[] = {'p', 'o', 't', 'x', 0};
static const uint16_t WdExtensionText26[] = {'p', 'o', 't', 'm', 0};
static const uint16_t WdExtensionText27[] = {'p', 'p', 'a', 'm', 0};
static const uint16_t WdExtensionText28[] = {'p', 'p', 's', 'x', 0};
static const uint16_t WdExtensionText29[] = {'p', 'd', 'f', 0};
static const uint16_t WdExtensionText30[] = {'t', 'x', 't', 0};
static const uint16_t WdExtensionText31[] = {'c', 's', 'v', 0};
static const uint16_t WdExtensionText32[] = {'t', 's', 'v', 0};
static const uint16_t WdExtensionText33[] = {'x', 'p', 's', 0};
static const uint16_t WdExtensionText34[] = {'o', 'x', 'p', 's', 0};
static const uint16_t WdExtensionText35[] = {'p', 'r', 'n', 0};
static const uint16_t WdExtensionText36[] = {'a', 's', 'd', 0};
static const uint16_t WdExtensionText37[] = {'e', 'x', 'e', 0};
static const uint16_t WdExtensionText38[] = {'z', 'i', 'p', 0};
static const uint16_t WdExtensionText39[] = {'z', 'i', 'p', 'x', 0};
static const uint16_t WdExtensionText40[] = {'r', 'a', 'r', 0};
static const uint16_t WdExtensionText41[] = {'t', 'a', 'r', 0};
static const uint16_t WdExtensionText42[] = {'7', 'z', 0};
static const uint16_t WdExtensionText43[] = {'g', 'z', 0};
static const uint16_t WdExtensionText44[] = {'d', 'l', 'l', 0};
static const uint16_t WdExtensionText45[] = {'s', 'y', 's', 0};
static const uint16_t WdExtensionText46[] = {'l', 'i', 'b', 0};
static const uint16_t WdExtensionText47[] = {'o', 'b', 'j', 0};
static const uint16_t WdExtensionText48[] = {'m', 'u', 'i', 0};
static const uint16_t WdExtensionText49[] = {'d', 'r', 'v', 0};
static const uint16_t WdExtensionText50[] = {'p', 'f', 0};
static const uint16_t WdExtensionText51[] = {'d', 'v', 0};
static const uint16_t WdExtensionText52[] = {'i', 'n', 'i', 0};
static const uint16_t WdExtensionText53[] = {'i', 'n', 'f', 0};

static const WD_FILE_EXTENSION_ITEM WdFileExtensions[] = {
    {1, 0, {6, 8, (uint16_t *)WdExtensionText1}},
    {2, 0, {6, 8, (uint16_t *)WdExtensionText2}},
    {3, 0, {6, 8, (uint16_t *)WdExtensionText3}},
    {4, 0, {6, 8, (uint16_t *)WdExtensionText4}},
    {5, 0, {8, 10, (uint16_t *)WdExtensionText5}},
    {6, 0, {8, 10, (uint16_t *)WdExtensionText6}},
    {7, 0, {6, 8, (uint16_t *)WdExtensionText7}},
    {8, 0, {8, 10, (uint16_t *)WdExtensionText8}},
    {9, 0, {8, 10, (uint16_t *)WdExtensionText9}},
    {10, 0, {8, 10, (uint16_t *)WdExtensionText10}},
    {11, 0, {6, 8, (uint16_t *)WdExtensionText11}},
    {12, 0, {8, 10, (uint16_t *)WdExtensionText12}},
    {13, 0, {6, 8, (uint16_t *)WdExtensionText13}},
    {14, 0, {6, 8, (uint16_t *)WdExtensionText14}},
    {15, 0, {8, 10, (uint16_t *)WdExtensionText15}},
    {16, 0, {8, 10, (uint16_t *)WdExtensionText16}},
    {17, 0, {8, 10, (uint16_t *)WdExtensionText17}},
    {18, 0, {8, 10, (uint16_t *)WdExtensionText18}},
    {19, 0, {6, 8, (uint16_t *)WdExtensionText19}},
    {20, 0, {6, 8, (uint16_t *)WdExtensionText20}},
    {21, 0, {8, 10, (uint16_t *)WdExtensionText21}},
    {22, 0, {6, 8, (uint16_t *)WdExtensionText22}},
    {23, 0, {6, 8, (uint16_t *)WdExtensionText23}},
    {24, 0, {8, 10, (uint16_t *)WdExtensionText24}},
    {25, 0, {8, 10, (uint16_t *)WdExtensionText25}},
    {26, 0, {8, 10, (uint16_t *)WdExtensionText26}},
    {27, 0, {8, 10, (uint16_t *)WdExtensionText27}},
    {28, 0, {8, 10, (uint16_t *)WdExtensionText28}},
    {29, 0, {6, 8, (uint16_t *)WdExtensionText29}},
    {30, 0, {6, 8, (uint16_t *)WdExtensionText30}},
    {31, 0, {6, 8, (uint16_t *)WdExtensionText31}},
    {32, 0, {6, 8, (uint16_t *)WdExtensionText32}},
    {33, 0, {6, 8, (uint16_t *)WdExtensionText33}},
    {34, 0, {8, 10, (uint16_t *)WdExtensionText34}},
    {35, 0, {6, 8, (uint16_t *)WdExtensionText35}},
    {36, 0, {6, 8, (uint16_t *)WdExtensionText36}},
    {37, 0, {6, 8, (uint16_t *)WdExtensionText37}},
    {38, 0, {6, 8, (uint16_t *)WdExtensionText38}},
    {39, 0, {8, 10, (uint16_t *)WdExtensionText39}},
    {40, 0, {6, 8, (uint16_t *)WdExtensionText40}},
    {41, 0, {6, 8, (uint16_t *)WdExtensionText41}},
    {42, 0, {4, 6, (uint16_t *)WdExtensionText42}},
    {43, 0, {4, 6, (uint16_t *)WdExtensionText43}},
    {44, 0, {6, 8, (uint16_t *)WdExtensionText44}},
    {45, 0, {6, 8, (uint16_t *)WdExtensionText45}},
    {46, 0, {6, 8, (uint16_t *)WdExtensionText46}},
    {47, 0, {6, 8, (uint16_t *)WdExtensionText47}},
    {48, 0, {6, 8, (uint16_t *)WdExtensionText48}},
    {49, 0, {6, 8, (uint16_t *)WdExtensionText49}},
    {50, 0, {4, 6, (uint16_t *)WdExtensionText50}},
    {51, 0, {4, 6, (uint16_t *)WdExtensionText51}},
    {52, 0, {6, 8, (uint16_t *)WdExtensionText52}},
    {53, 0, {6, 8, (uint16_t *)WdExtensionText53}},
};

uint64_t MpFileTimeToUlong64(uint64_t file_time)
{
    return file_time;
}

uint64_t MpFileTimeFromUlong64(uint64_t value)
{
    return value;
}

int32_t MpGetFileExtensionId(const WD_UNICODE_STRING *extension, uint32_t *extension_id)
{
    if (!extension || !extension_id)
    {
        return (int32_t)WD_STATUS_INVALID_PARAMETER;
    }
    *extension_id = 0;
    for (size_t index = 0; index < sizeof(WdFileExtensions) / sizeof(WdFileExtensions[0]); ++index)
    {
        if (RtlCompareUnicodeString(extension, &WdFileExtensions[index].Name, 1) == 0)
        {
            *extension_id = WdFileExtensions[index].Id;
            return 0;
        }
    }
    return (int32_t)WD_STATUS_NOT_FOUND;
}

void MpMjCreateGetUserSid(WD_LAYOUT_4 *input, int64_t destination_sid)
{
    int64_t value;
    int32_t status;
    int64_t token;
    uint64_t value_2;
    uint64_t *token_information = NULL;
    if (!input || !destination_sid || (value = input->field_0x10, *(char *)(value + 4)) || (!value || !(*(int64_t *)(value + 0x18)) || (value = *(int64_t *)(*(int64_t *)(value + 0x18) + 8), !value || (token = *(int64_t *)(value + 0x20), !token && (token = *(int64_t *)(value + 0x30), !token)))))
    {
        return;
    }
    status = SeQueryInformationToken(token, 1, &token_information);
    if (0 <= status)
    {
        status = RtlCopySid(0x50, destination_sid, *token_information);
        if (status <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            value_2 = 0x28;
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_fa8e7b00178136a6e2a2b6da068185ef_Traceguids), (uint64_t)KeGetCurrentThread(), status);
        }
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        value_2 = 0x27;
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_fa8e7b00178136a6e2a2b6da068185ef_Traceguids), (uint64_t)KeGetCurrentThread(), status);
    }
    if (token_information)
    {
        ExFreePoolWithTag(token_information, 0);
    }
    return;
}

void MpParseFileNameEx(uint16_t *input, int64_t instance, void *input_2, uint16_t *input_3, int64_t *buffer)
{
    uint16_t value;
    void *data_pointer;
    void *instance_context;
    uint16_t value_3;
    uint32_t value_4;
    uint32_t value_5;
    uint32_t value_6;
    uint32_t value_7;
    int64_t *data_pointer_2;
    int32_t value_8;
    int16_t value_9;
    data_pointer_2 = buffer;
    if (!input || !buffer)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x24, WD_SYMBOL_ADDRESS(WPP_fa8e7b00178136a6e2a2b6da068185ef_Traceguids), (uint64_t)KeGetCurrentThread());
        }
        return;
    }
    memset(buffer, 0, (char *)0x70);
    value_4 = *(uint32_t *)input;
    value_5 = *(uint32_t *)(&input[2]);
    value_6 = *(uint32_t *)(&input[4]);
    value_7 = *(uint32_t *)(&input[6]);
    *(uint32_t *)data_pointer_2 = value_4;
    ((uint32_t *)data_pointer_2)[1] = value_5;
    *(uint32_t *)(&data_pointer_2[1]) = value_6;
    ((uint32_t *)data_pointer_2)[3] = value_7;
    if (!(*input))
    {
        return;
    }
    if (input_3)
    {
        if (*input_3 && *input_3 < *input)
        {
            *(uint32_t *)(&data_pointer_2[2]) = value_4;
            ((uint32_t *)data_pointer_2)[5] = value_5;
            *(uint32_t *)(&data_pointer_2[3]) = value_6;
            ((uint32_t *)data_pointer_2)[7] = value_7;
            value = *input_3;
            ((uint16_t *)data_pointer_2)[9] = value;
            *(uint16_t *)(&data_pointer_2[2]) = value;
        }
    }
    else if (instance || input_2)
    {
        data_pointer = input_2;
        instance_context = input_2;
        if (!input_2)
        {
            if ((int32_t)FltGetInstanceContext(instance, &instance_context) < 0)
            {
                goto block_1;
            }
            data_pointer = instance_context;
        }
        if (data_pointer)
        {
            if (((uint16_t *)data_pointer)[0xc] && ((uint16_t *)data_pointer)[0xc] < *input)
            {
                *(uint32_t *)(&data_pointer_2[2]) = *(uint32_t *)data_pointer_2;
                ((uint32_t *)data_pointer_2)[5] = ((uint32_t *)data_pointer_2)[1];
                *(uint32_t *)(&data_pointer_2[3]) = *(uint32_t *)(&data_pointer_2[1]);
                ((uint32_t *)data_pointer_2)[7] = ((uint32_t *)data_pointer_2)[3];
                value_3 = ((uint16_t *)data_pointer)[0xc];
                ((uint16_t *)data_pointer_2)[9] = value_3;
                *(uint16_t *)(&data_pointer_2[2]) = value_3;
            }
            if (data_pointer != input_2)
            {
                FltReleaseContext();
            }
        }
    }
    block_1:
    value_8 = FltParseFileName(data_pointer_2, &data_pointer_2[6], &data_pointer_2[8], &data_pointer_2[10]);

    if (0 <= value_8)
    {
        value_9 = *(int16_t *)data_pointer_2 - *(int16_t *)(&data_pointer_2[10]) - *(uint16_t *)(&data_pointer_2[4]) - *(uint16_t *)(&data_pointer_2[2]) + -2;
        data_pointer_2[0xd] = data_pointer_2[1] + (uint64_t)(*(uint16_t *)(&data_pointer_2[4])) + *(uint16_t *)(&data_pointer_2[2]);
        ((int16_t *)data_pointer_2)[0x31] = value_9;
        *(int16_t *)(&data_pointer_2[0xc]) = value_9;
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x25, WD_SYMBOL_ADDRESS(WPP_fa8e7b00178136a6e2a2b6da068185ef_Traceguids), (uint64_t)KeGetCurrentThread(), value_8);
    }
    return;
}

void MpQuerySessionId(uint64_t input, uint64_t input_2, uint32_t *input_3)
{
    int32_t status;
    uint64_t value_2;
    int64_t value_3 = 0;
    uint32_t values[2];
    int64_t *data_pointer;
    uint32_t *data_pointer_2;
    uint32_t value_4;
    values[0] = 0;
    if (input_3)
    {
        *input_3 = 0;
    }
    data_pointer = &value_3;
    status = ZwOpenThreadTokenEx(0xfffffffffffffffe, 8, (uint64_t)((uint64_t)input_3) & 0xffffffffffffff00 | (uint64_t)1 & 0xff, 0x200, data_pointer);
    value_4 = (uint32_t)((uint64_t)data_pointer >> 0x20);
    if (status != -0x3fffff84)
    {
        if (0 <= status)
        {
            goto block_1;
        }
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            goto block_2;
        }
        value_2 = 0xd;
    }
    else
    {
        status = ZwOpenProcessTokenEx(0xffffffffffffffff, 8, 0x200, &value_3);
        if (0 <= status)
        {
            block_1:
            data_pointer_2 = values;

            status = ZwQueryInformationToken(value_3, 0xc, input_3, 4, data_pointer_2);
            value_4 = (uint32_t)((uint64_t)data_pointer_2 >> 0x20);
            if (0 <= status || WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                goto block_2;
            }
            value_2 = 0xe;
        }
        else
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                goto block_2;
            }
            value_2 = 0xc;
        }
    }
    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_fa8e7b00178136a6e2a2b6da068185ef_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
    block_2:
    if (value_3)
    {
        ZwClose();
    }

    return;
}

void MpQueryTransactionId(int64_t input, uint32_t *input_2)
{
    int32_t status;
    uint64_t value;
    uint64_t value_2;
    uint64_t value_4;
    int64_t value_5 = 0;
    uint32_t values[2];
    uint64_t value_6;
    uint32_t *data_pointer;
    uint32_t value_7;
    values[0] = 0;
    value_6 = 0;
    value = 0;
    value_2 = 0;
    if (!input || !input_2)
    {
        goto block_1;
    }
    value_7 = 0;
    status = ObOpenObjectByPointer(0, 0x200, 0, 0x80000000, 0, 0, &value_5);
    if (0 <= status)
    {
        data_pointer = values;
        status = ZwQueryInformationTransaction(value_5, 0, &value_6, 0x18, data_pointer);
        value_7 = (uint32_t)((uint64_t)data_pointer >> 0x20);
        if (0 <= status)
        {
            *input_2 = (uint32_t)value_6;
            input_2[1] = WdLoadField(&value_6, 4, 4);
            input_2[2] = (uint32_t)value;
            input_2[3] = WdLoadField(&value, 4, 4);
            goto block_1;
        }
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            goto block_1;
        }
        value_4 = 0xb;
    }
    else
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            goto block_1;
        }
        value_4 = 10;
    }
    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_4, WD_SYMBOL_ADDRESS(WPP_fa8e7b00178136a6e2a2b6da068185ef_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
    block_1:
    if (value_5)
    {
        ZwClose();
    }

    return;
}

void IsThisCallBeingThrottled(void)
{
    int64_t value = 0;
    KeQueryPerformanceCounter(&value);
    return;
}

void MpQueryNetworkOpenInformation(void *input, WD_LAYOUT_86 *information_buffer)
{
    uint64_t file_object;
    uint64_t value;
    uint64_t value_2;
    uint64_t value_3;
    uint64_t value_4;
    uint64_t value_5;
    int32_t status;
    uint64_t instance;
    int32_t result_length[2];
    uint64_t information_buffer_2;
    uint64_t information_buffer_3;
    uint64_t value_7;
    result_length[0] = 0;
    value_5 = 0;
    value_3 = 0;
    information_buffer_2 = 0;
    value_4 = 0;
    information_buffer_3 = 0;
    value_7 = 0;
    value = 0;
    value_2 = 0;
    if (!input || !information_buffer || *(uint32_t *)(MpData + 0x360) & 4 && (instance = ((uint64_t *)input)[3], file_object = ((uint64_t *)input)[4], 0 <= (int32_t)FltQueryInformationFile(instance, file_object, information_buffer, 0x38, 0x22, result_length) && result_length[0] == 0x38))
    {
        return;
    }
    status = FltQueryInformationFile(((uint64_t *)input)[3], ((uint64_t *)input)[4], &information_buffer_2, 0x18, 5, result_length);
    if (0 <= status)
    {
        if (result_length[0] != 0x18)
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return;
            }
            instance = 0x37;
        }
        else
        {
            status = FltQueryInformationFile(((uint64_t *)input)[3], ((uint64_t *)input)[4], &information_buffer_3, 0x28, 4, result_length);
            if (status < 0)
            {
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    return;
                }
                instance = 0x3a;
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), instance, WD_SYMBOL_ADDRESS(WPP_fa8e7b00178136a6e2a2b6da068185ef_Traceguids), (uint64_t)KeGetCurrentThread(), status);
                return;
            }
            if (result_length[0] == 0x28)
            {
                information_buffer->field_0x20 = information_buffer_2;
                information_buffer->field_0x28 = value_4;
                information_buffer->field_0x18 = value_2;
                information_buffer->field_0x0 = information_buffer_3;
                information_buffer->field_0x30 = (uint32_t)value_3;
                information_buffer->field_0x8 = value_7;
                information_buffer->field_0x10 = value;
                return;
            }
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return;
            }
            instance = 0x39;
        }
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), instance, WD_SYMBOL_ADDRESS(WPP_fa8e7b00178136a6e2a2b6da068185ef_Traceguids), (uint64_t)KeGetCurrentThread(), result_length[0]);
    }
    else
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return;
        }
        instance = 0x38;
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), instance, WD_SYMBOL_ADDRESS(WPP_fa8e7b00178136a6e2a2b6da068185ef_Traceguids), (uint64_t)KeGetCurrentThread(), status);
    }
    return;
}

void MpIsSystemVolume(uint64_t input, char *input_2)
{
    int64_t value;
    int64_t object;
    *input_2 = '\0';
    object = 0;
    if (0 <= (int32_t)FltGetDiskDeviceObject(input, &object))
    {
        WdUnresolvedAtomicBegin();
        ObTotalReferences += 1;
        WdUnresolvedAtomicEnd();
        if (*(uint32_t *)(object + 0x30) & 0x100)
        {
            *input_2 = '\x01';
        }
    }
    if (object)
    {
        ObfDereferenceObject(object);
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
    return;
}

void MpGetPriorityInfo(uint64_t input, uint64_t input_2, WD_LAYOUT_26 *input_3)
{
    uint64_t current_thread;
    int32_t trace_argument_1;
    uint32_t value = 0x10;
    uint64_t value_2;
    uint32_t value_3;
    input_3->field_0x0 = 0;
    input_3->field_0x8 = 0;
    value_2 = 0xffff;
    value_3 = 2;
    trace_argument_1 = FltRetrieveIoPriorityInfo(0, input_2, (uint64_t)KeGetCurrentThread(), &value);
    if (trace_argument_1 < 0 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x21, WD_SYMBOL_ADDRESS(WPP_fa8e7b00178136a6e2a2b6da068185ef_Traceguids), trace_argument_1);
    }
    current_thread = (uint64_t)KeGetCurrentThread();
    ((uint32_t *)(&input_3->field_0x0))[1] = KeQueryPriorityThread(current_thread);
    *(uint32_t *)(&input_3->field_0x8) = WdLoadField(&value_2, 4, 4);
    *(uint32_t *)(&input_3->field_0x0) = value_3;
    return;
}

uint64_t MpIsPotentialRemoteOpen(WD_LAYOUT_4 *input)
{
    uint64_t value;
    uint64_t requestor_process;
    if (input && (requestor_process = ExGetPreviousMode(), !(char)requestor_process) && (value = *__imp_PsInitialSystemProcess, requestor_process = MpGetRequestorProcess(input), requestor_process == value) && *(uint8_t *)(input->field_0x10 + 6) & 1)
    {
        requestor_process = *(uint64_t *)(input->field_0x10 + 0x18);
        if (*(int64_t *)(*(int64_t *)(requestor_process + 8) + 0x20))
        {
            return ((uint64_t)((uint64_t)(requestor_process >> 8)) & 0xffffffffffffffULL) << 8 | (uint64_t)(2 <= *(int32_t *)(*(int64_t *)(requestor_process + 8) + 0x28)) & 0xffULL;
        }
    }
    return requestor_process & 0xffffffffffffff00;
}

void MpQuerySessionIdFromObjects(int64_t input, int64_t input_2, WD_LAYOUT_3 *input_3, uint32_t *input_4)
{
    int32_t value;
    int64_t token;
    char byte_value;
    uint32_t value_2;
    char buffer_2[3];
    if (input && input_2 && input_4)
    {
        *input_4 = 0;
        buffer_2[0] = 0;
        byte_value = 0;
        value_2 = 0;
        token = PsReferenceImpersonationToken(input, buffer_2, &byte_value, &value_2);
        if (token)
        {
            value = MpQuerySessionIdToken(token, input_4);
            PsDereferenceImpersonationToken(token);
            if (value <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xf, WD_SYMBOL_ADDRESS(WPP_fa8e7b00178136a6e2a2b6da068185ef_Traceguids), (uint64_t)KeGetCurrentThread(), value);
            }
        }
        else if (input_3)
        {
            *input_4 = input_3->field_0x100;
        }
        else
        {
            MpQuerySessionIdFromProcess(input_2, PsGetCurrentProcessId(), input_4);
        }
    }
    return;
}

void MpQuerySessionIdFromProcess(int64_t input, uint64_t process_id, uint32_t *input_2)
{
    bool enabled = 0;
    int32_t value;
    int64_t token;
    int64_t process;
    uint32_t token_information[2];
    process = input;
    if (!input_2)
    {
        return;
    }
    if (!input)
    {
        value = PsLookupProcessByProcessId(process_id, &process);
        if (value < 0)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x11, WD_SYMBOL_ADDRESS(WPP_fa8e7b00178136a6e2a2b6da068185ef_Traceguids), (uint64_t)KeGetCurrentThread(), value);
            }
            return;
        }
        WdUnresolvedAtomicBegin();
        ObTotalReferences += 1;
        WdUnresolvedAtomicEnd();
        enabled = 1;
        input = process;
    }
    token = PsReferencePrimaryToken(input);
    token_information[0] = 0;
    if (token)
    {
        value = SeQueryInformationToken(token, 0xc, token_information);
        if (value <= -1)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x10, WD_SYMBOL_ADDRESS(WPP_fa8e7b00178136a6e2a2b6da068185ef_Traceguids), (uint64_t)KeGetCurrentThread(), value);
            }
            goto block_2;
        }
        *input_2 = token_information[0];
        block_1:
        PsDereferencePrimaryToken(token);
    }
    else
    {
        value = -0x3ffffff3;
        block_2:
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x12, WD_SYMBOL_ADDRESS(WPP_fa8e7b00178136a6e2a2b6da068185ef_Traceguids), (uint64_t)KeGetCurrentThread(), value);
        }

        if (token)
        {
            goto block_1;
        }
    }
    if (enabled)
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
    return;
}

void MpQuerySessionIdToken(int64_t token, uint32_t *input)
{
    int32_t value;
    uint32_t token_information[2];
    token_information[0] = 0;
    if (input && token)
    {
        value = SeQueryInformationToken(token, 0xc, token_information);
        if (0 <= value)
        {
            *input = token_information[0];
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x10, WD_SYMBOL_ADDRESS(WPP_fa8e7b00178136a6e2a2b6da068185ef_Traceguids), (uint64_t)KeGetCurrentThread(), value);
        }
    }
    return;
}

uint16_t MpIsRenameOrLinkTargetPossibleSymLink(int64_t input, uint32_t input_2, int16_t *input_3)
{
    uint16_t value;
    if (input_2 && input_3 && !input && ((value = 0, *input_3 == 0x5c && 10 <= input_2) && (input_3[1] == 0x3f && (input_3[2] == 0x3f && input_3[3] == 0x5c))) && (input_2 < 0x10 || (input_3[5] != 0x3a || input_3[6] != 0x5c)) && (input_2 <= 0x11 || (input_3[4] != 0x55 || input_3[5] != 0x4e || input_3[6] != 0x43) || input_3[7] != 0x5c))
    {
        return 1;
    }
    return value & 0xff00;
}

void MpGetRenameParentTargetSymLinkNameInformation(int64_t input, void *input_2, bool input_3, uint64_t input_4, void *input_5, uint32_t name_options, uint64_t *file_name, uint64_t *input_6, int64_t *destination_string)
{
    int16_t value;
    int64_t file_object;
    uint64_t value_2;
    int64_t value_3;
    uint64_t value_4;
    uint32_t *string;
    char buffer[8];
    int16_t values[12];
    char buffer_2[16];
    char buffer_3[16];
    char buffer_4[16];
    uint64_t value_5;
    int16_t values_2[8];
    uint64_t value_6;
    char *bytes;
    uint32_t value_7;
    int16_t value_8;
    uint32_t value_9;
    int64_t value_10;
    int64_t value_11;
    uint16_t value_12;
    uint64_t value_13;
    uint64_t *data_pointer;
    uint16_t value_14;
    uint64_t value_15;
    uint16_t value_16;
    uint32_t value_17;
    uint16_t value_18;
    uint64_t value_19;
    uint64_t value_20;
    uint64_t value_21;
    uint64_t value_22;
    uint64_t value_23;
    int32_t value_24;
    uint64_t value_25;
    uint32_t value_26;
    uint64_t value_27;
    int16_t *wide_text;
    uint32_t value_28;
    uint32_t value_29;
    uint64_t value_30;
    uint64_t value_31;
    uint32_t value_32;
    uint32_t value_33;
    int64_t value_34;
    uint32_t value_35;
    uint32_t value_36;
    int16_t value_37;
    uint64_t value_38;
    uint32_t *string_2;
    uint32_t value_40;
    int16_t value_41;
    value_7 = (uint32_t)((uint64_t)value_6 >> 0x20);
    string_2 = NULL;
    value_26 = 0;
    value_29 = 0;
    value_9 = 0;
    value_20 = 0;
    value_3 = 0;
    file_object = 0;
    string = NULL;
    value_2 = 0;
    value_38 = 0;
    value_13 = 0;
    value_12 = 0;
    value_15 = 0;
    value_14 = 0;
    value_18 = 0;
    value_17 = 0;
    value_16 = 0;
    value_19 = 0;
    value_21 = 0;
    value_22 = 0;
    value_23 = 0;
    value_25 = 0;
    if (input && input_2 && input_5)
    {
        data_pointer = file_name;
        if (input_3)
        {
            data_pointer = input_6;
        }
        if (data_pointer && !((int64_t *)input_5)[1])
        {
            value = ((int16_t *)input_5)[8];
            if (input_3)
            {
                value_4 = ((uint64_t)value & 0xffffULL) << 16 | (uint64_t)value & 0xffffULL;
                value_11 = (int64_t)input_5 + 0x14;
                if ((int32_t)MpGetSymlinkFinalTarget(&value_4, &string) <= -1)
                {
                    return;
                }
                memset(buffer, 0, (char *)0x78);
                string_2 = string;
                bytes = buffer_3;
                value_32 = *string;
                value_33 = string[1];
                value_35 = string[2];
                value_36 = string[3];
                value_24 = MpParseFileName(string, values_2, buffer_4, buffer_2, bytes, values);
                value_7 = (uint32_t)((uint64_t)bytes >> 0x20);
                if (value_24 <= -1)
                {
                    MpFreeString(string);
                    return;
                }
                value_10 = ((uint64_t)value_36 & 0xffffffffULL) << 32 | (uint64_t)value_35 & 0xffffffffULL;
                value_41 = values[0] + value_37 + values_2[0];
                value_8 = WdLoadField(&value_32, 2, 2);
            }
            else
            {
                value_10 = (int64_t)input_5 + 0x14;
                value_41 = value;
                value_8 = value;
            }
            value_5 = ((uint64_t *)input_2)[4];
            wide_text = &value_41;
            value_40 = 0x30;
            value_27 = 0;
            value_28 = 0x240;
            value_30 = 0;
            value_31 = 0;
            if (*(uint32_t *)(MpData + 0x360) & 0x40)
            {
                value_17 = 0;
                value_12 = 0x28;
                value_14 = 0;
                value_13 = 0;
                value_16 = 0;
                value_15 = 0;
                value_18 = 0;
                value_20 = 1;
                value_19 = IoGetTransactionParameterBlock(value_5);
                if (*(int64_t *)(MpData + 0xc0))
                {
                    value_34 = (*__guard_dispatch_icall_fptr)(((uint64_t *)input_2)[4]);
                    if (value_34)
                    {
                        value_20 = *(uint64_t *)(value_34 + 8);
                    }
                    else
                    {
                        value_20 = 0;
                    }
                }
            }
            else
            {
                value_22 = 0;
                value_21 = 0x20;
                value_23 = 0;
                value_25 = 0;
                value_25 = IoGetTransactionParameterBlock(value_5);
            }
            value_5 = *(uint64_t *)(MpData + 0x10);
            if (0 <= (int32_t)MpFltCreateFileEx2(value_5, 0, &value_3, &file_object, ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)((-(uint32_t)(input_3 != 0) & 8) + 0x100080) & 0xffffffffULL, &value_40, &value_2))
            {
                value_34 = IoGetRelatedDeviceObject(((uint64_t *)input_2)[4]);
                if (IoGetRelatedDeviceObject(file_object) == value_34)
                {
                    if (input_3)
                    {
                        MpQueryLoopbackLocalPathByFileObject(input_2, file_object, input_6, destination_string);
                    }
                    else
                    {
                        FltGetFileNameInformationUnsafe(file_object, ((uint64_t *)input_2)[3], name_options, file_name);
                    }
                }
            }
            if (string_2)
            {
                MpFreeString(string_2);
            }
            if (value_3)
            {
                FltClose();
            }
            if (file_object)
            {
                ObfDereferenceObject();
                value_34 = ObTotalReferences;
                WdUnresolvedAtomicBegin();
                ObTotalReferences -= 1;
                WdUnresolvedAtomicEnd();
                if (value_34 + -1 <= -1 && *(int32_t *)(MpData + 0x364) <= -1)
                {
                    if (!KdRefreshDebuggerNotPresent())
                    {
                        (*(WD_ROUTINE)swi(3))();
                        return;
                    }
                    KeBugCheck(1);
                }
            }
        }
    }
    return;
}

void GetMpUniquePidFromProcessId(int64_t process_id, uint32_t *input)
{
    int64_t value;
    uint64_t creation_time;
    uint64_t process;
    if (process_id && input)
    {
        process = 0;
        if (0 <= (int32_t)PsLookupProcessByProcessId(process_id, &process))
        {
            WdUnresolvedAtomicBegin();
            ObTotalReferences += 1;
            WdUnresolvedAtomicEnd();
            creation_time = PsGetProcessCreateTimeQuadPart(process);
            ObfDereferenceObject();
            value = ObTotalReferences;
            WdUnresolvedAtomicBegin();
            ObTotalReferences -= 1;
            WdUnresolvedAtomicEnd();
            if (value + -1 < 0 && *(int32_t *)(MpData + 0x364) <= -1)
            {
                if (KdRefreshDebuggerNotPresent())
                {
                    KeBugCheck(1);
                }
                (*(WD_ROUTINE)swi(3))();
                return;
            }
            *input = (int32_t)process_id;
            *(uint64_t *)(&input[1]) = MpFileTimeFromUlong64(creation_time);
        }
    }
    return;
}

void MpGetFileCompressedFileSize(int64_t input, int64_t file_object, uint64_t *input_2)
{
    uint64_t information_buffer = 0;
    uint64_t value = 0;
    if (input && file_object && input_2)
    {
        *input_2 = 0;
        if (0 <= (int32_t)FltQueryInformationFile(0, file_object, &information_buffer, 0x10, 0x1c, 0))
        {
            *input_2 = information_buffer;
        }
    }
    return;
}

void MpIsSrvClientLocalhost(WD_LAYOUT_81 *input, int32_t input_2, int16_t *input_3, int64_t input_4, int32_t input_5, void *input_6)
{
    int16_t value;
    int16_t *wide_text;
    uint64_t value_2;
    int16_t *wide_text_2;
    uint64_t value_3;
    int16_t value_4;
    int16_t value_5;
    int16_t value_6;
    int16_t value_7;
    int16_t value_8;
    int16_t *wide_text_3;
    void *data_pointer;
    int32_t value_10;
    uint32_t values[2];
    int16_t value_11;
    uint64_t string;
    uint64_t value_12;
    data_pointer = input_6;
    value_2 = 0x40;
    values[0] = 0x40;
    if (!input || !input_2 || !input_3)
    {
        return;
    }
    *(char *)input_3 = 0;
    value_10 = -0x3ffffddb;
    wide_text_3 = input->field_0x8;
    if (!wide_text_3)
    {
        return;
    }
    value = *wide_text_3;
    if (value != 2)
    {
        wide_text = input_3;
        if (value == 0x17)
        {
            wide_text = (int16_t *)((uint64_t)((uint16_t)wide_text_3[1]));
            value_10 = RtlIpv6AddressToStringExW(&wide_text_3[4], 0, wide_text, &value_11, values);
            value_2 = (uint64_t)values[0];
        }
    }
    else
    {
        wide_text = &value_11;
        value_10 = RtlIpv4AddressToStringExW(&wide_text_3[2], (uint16_t)wide_text_3[1], wide_text, values);
        value_2 = (uint64_t)values[0];
    }
    if (value_10 <= -1)
    {
        return;
    }
    if (value != 2)
    {
        if (value == 0x17 && value_4 == 0x3a && (0xe <= value_2 * 2 && (value_11 == 0x5b && value_5 == 0x3a)) && value_6 == 0x31 && (value_7 == 0x5d && value_8 == 0x3a))
        {
            block_1:
            *(char *)input_3 = 1;
        }
    }
    else if (0x16 <= value_2 * 2)
    {
        string = 0;
        value_3 = 0;
        value_12 = 0;
        wide_text_2 = NULL;
        RtlInitUnicodeString(&string, L"127.0.0.1:");
        value_12 = ((uint64_t)(((uint64_t)WdLoadField(&value_12, 4, 4) & 0xffffffffULL) << 16 | (uint64_t)((int16_t)values[0] * 2) & 0xffffULL) & 0xffffffffffffULL) << 16 | (uint64_t)((int16_t)values[0] * 2) & 0xffffULL;
        wide_text_2 = &value_11;
        if (RtlPrefixUnicodeString(&string, &value_12, (uint64_t)((uint64_t)wide_text) & 0xffffffffffffff00 | (uint64_t)1 & 0xff))
        {
            goto block_1;
        }
    }
    if (input_4 && input_5)
    {
        wcsncpy_s(input_4, input_5, &value_11, 0x40);
    }
    if (data_pointer)
    {
        *(bool *)data_pointer = value == 0x17;
    }
    return;
}

uint64_t MpAppendList(WD_LAYOUT_25 *input, WD_LAYOUT_99 *input_2)
{
    WD_LAYOUT_99 *record;
    int64_t *data_pointer;
    if (!input || !input_2)
    {
        return WD_STATUS_INVALID_PARAMETER;
    }
    record = (WD_LAYOUT_99 *)input_2->field_0x0;
    if (record == input_2)
    {
        return 0;
    }
    if ((WD_LAYOUT_99 *)record->field_0x8 == input_2 && (data_pointer = input_2->field_0x8, (WD_LAYOUT_99 *)(*data_pointer) == input_2))
    {
        *data_pointer = (int64_t)record;
        record->field_0x8 = data_pointer;
        input_2->field_0x8 = (int64_t *)input_2;
        input_2->field_0x0 = (int64_t *)input_2;
        if (*(WD_LAYOUT_25 **)(input->field_0x0 + 8) == input && ((data_pointer = input->field_0x8, (WD_LAYOUT_25 *)(*data_pointer) == input && (WD_LAYOUT_99 *)record->field_0x0[1] == record) && (WD_LAYOUT_99 *)(*record->field_0x8) == record))
        {
            *data_pointer = (int64_t)record;
            input->field_0x8 = record->field_0x8;
            *record->field_0x8 = (int64_t)input;
            record->field_0x8 = data_pointer;
            return 0;
        }
    }
    (*(WD_ROUTINE)swi(0x29))(3);
}

void MpGetFileReparseTag(int64_t instance, int64_t file_object, uint32_t *input)
{
    uint64_t information_buffer = 0;
    if (instance && file_object && input)
    {
        *input = 0;
        if (0 <= (int32_t)FltQueryInformationFile(instance, file_object, &information_buffer, 8, 0x23, 0))
        {
            *input = WdLoadField(&information_buffer, 4, 4);
        }
    }
    return;
}

void MpIsFileMappedInProcess(int64_t source_name, int64_t input, uint64_t input_2)
{
    int32_t status;
    uint64_t value = 0;
    int64_t value_2 = 0;
    uint64_t value_3 = 0;
    uint64_t value_4 = 0;
    int64_t value_6 = 0;
    uint64_t value_7 = 0;
    char buffer_2[544];
    uint64_t value_8;
    char *bytes;
    uint64_t value_9;
    uint64_t value_10 = 0;
    if (source_name && input)
    {
        value_8 = 0x10000;
        if (input_2 - 1 <= 0xffff)
        {
            input_2 = 0;
        }
        if (input != IoGetCurrentProcess())
        {
            ObOpenObjectByPointer(input, 0x200, 0, 0x1418, *__imp_PsProcessType, value_9 & 0xffffffffffffff00, &value_6);
        }
        else
        {
            value_6 = -1;
        }
        do
        {
            status = ZwQueryVirtualMemory(value_6, value_8, 0, &value_7, 0x30, 0);
            if (status < 0)
            {
                break;
            }
            if ((int32_t)value_4 == 0x40000)
            {
                memset(buffer_2, 0, (char *)0x218);
                bytes = buffer_2;
                status = MpGetMappedFileName(value_6, value_7, bytes);
                if (0 <= status && !RtlCompareUnicodeString(source_name, buffer_2, (uint64_t)((uint64_t)bytes) & 0xffffffffffffff00 | (uint64_t)1 & 0xff))
                {
                    break;
                }
            }
            value_8 += value_2;
        }
        while (!input_2 || value_8 < input_2);
        if ((uint64_t)(value_6 - 1U) <= 0xfffffffffffffffd)
        {
            ZwClose();
        }
    }
    return;
}

void MpParseFileName(WD_UNICODE_STRING_VALUE *input, uint16_t *input_2, WD_LAYOUT_19 *input_3, WD_LAYOUT_19 *input_4, int16_t *input_5, uint16_t *input_6)
{
    uint16_t value;
    uint64_t value_2;
    uint16_t value_4;
    int16_t *wide_text;
    uint16_t *wide_text_2;
    int32_t value_5;
    uint16_t value_6;
    uint64_t value_7;
    int64_t value_8;
    wide_text_2 = input_6;
    wide_text = input_5;
    value_7 = 0;
    value_2 = 0;
    if (input)
    {
        if (input_3)
        {
            input_3->field_0x0 = 0;
            input_3->field_0x8 = 0;
        }
        if (input_4)
        {
            input_4->field_0x0 = 0;
            input_4->field_0x8 = 0;
        }
        if (input_5)
        {
            input_5[0] = 0;
            input_5[1] = 0;
            input_5[4] = 0;
            input_5[5] = 0;
            input_5[6] = 0;
            input_5[7] = 0;
        }
        if (input_6)
        {
            input_6[0] = 0;
            input_6[1] = 0;
            input_6[4] = 0;
            input_6[5] = 0;
            input_6[6] = 0;
            input_6[7] = 0;
        }
        if (input->Length)
        {
            value_5 = FltParseFileName(0, input_3, input_4, &value_7);
            if (0 <= value_5)
            {
                if (wide_text_2)
                {
                    value_8 = input->Buffer;
                    value_6 = input->Length;
                    value = input->MaximumLength;
                    if (input_2)
                    {
                        value_4 = *input_2;
                        if (value_4 && value_4 <= value_6)
                        {
                            value_8 += (uint64_t)value_4;
                            value_6 -= value_4;
                        }
                    }
                    if ((int16_t)value_7)
                    {
                        value_6 -= (int16_t)value_7;
                    }
                    *(int64_t *)(&wide_text_2[4]) = value_8;
                    *wide_text_2 = value_6;
                    wide_text_2[1] = value;
                }
                if (wide_text)
                {
                    wide_text[1] = WdLoadField(&value_7, 2, 2);
                    *(uint64_t *)(&wide_text[4]) = value_2;
                    *wide_text = (int16_t)value_7;
                }
            }
            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x23, WD_SYMBOL_ADDRESS(WPP_fa8e7b00178136a6e2a2b6da068185ef_Traceguids), (uint64_t)KeGetCurrentThread(), value_5);
            }
        }
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x22, WD_SYMBOL_ADDRESS(WPP_fa8e7b00178136a6e2a2b6da068185ef_Traceguids), (uint64_t)KeGetCurrentThread());
    }
    return;
}

void MpSetFileKernelEa(int64_t input, int64_t input_2, uint32_t input_3)
{
    int32_t value;
    uint64_t value_2;
    uint32_t values[2];
    values[0] = 0;
    if (*(int64_t *)(MpData + 0x98) && input && input_2)
    {
        value = IoCheckEaBufferValidity(input_2, input_3, values);
        if (0 <= value)
        {
            value = MpUsnWriteCloseRecord(input);
            if (0 <= value)
            {
                value = (*__guard_dispatch_icall_fptr)(input, input_2, input_3);
                if (0 <= value || WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    return;
                }
                value_2 = 0x2b;
            }
            else
            {
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    return;
                }
                value_2 = 0x2a;
            }
        }
        else
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return;
            }
            value_2 = 0x29;
        }
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_fa8e7b00178136a6e2a2b6da068185ef_Traceguids), (uint64_t)KeGetCurrentThread(), value);
    }
    return;
}

void MpCreateSecurityHealthServiceSID(uint64_t *input)
{
    int32_t status;
    int64_t *allocation;
    uint32_t value;
    uint64_t value_2;
    uint16_t value_3;
    *input = 0;
    value = 0;
    value_3 = 0x500;
    value_2 = 0x6473504d;
    allocation = MpAllocatePoolWithTag(1, RtlLengthRequiredSid(6), 0x6473504d);
    if (allocation)
    {
        status = RtlInitializeSid(allocation, &value, (uint64_t)value_2 & 0xffffffffffffff00 | (uint64_t)6 & 0xff);
        if (0 <= status)
        {
            *(uint32_t *)RtlSubAuthoritySid(allocation, 0) = 0x50;
            *(uint32_t *)RtlSubAuthoritySid(allocation, 1) = 0xf748cdb;
            *(uint32_t *)RtlSubAuthoritySid(allocation, 2) = 0xf37372c2;
            *(uint32_t *)RtlSubAuthoritySid(allocation, 3) = 0x44b9262b;
            *(uint32_t *)RtlSubAuthoritySid(allocation, 4) = 0x24f1e77;
            *(uint32_t *)RtlSubAuthoritySid(allocation, 5) = 0x21b56376;
            *input = allocation;
        }
        else
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x14, WD_SYMBOL_ADDRESS(WPP_fa8e7b00178136a6e2a2b6da068185ef_Traceguids), (uint64_t)KeGetCurrentThread(), status);
            }
            ExFreePoolWithTag(allocation, 0x6473504d);
        }
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x13, WD_SYMBOL_ADDRESS(WPP_fa8e7b00178136a6e2a2b6da068185ef_Traceguids), (uint64_t)KeGetCurrentThread(), WD_STATUS_INSUFFICIENT_RESOURCES);
    }
    return;
}

void MpFreeServiceSID(int64_t allocation)
{
    if (!allocation)
    {
        return;
    }
    ExFreePoolWithTag(allocation, 0x6473504d);
    return;
}

void MpGetMappedFileName(int64_t input, int64_t input_2, int64_t input_3)
{
    uint64_t value = 0;
    if (input && input_2 && input_3)
    {
        ZwQueryVirtualMemory(input, input_2, 2, input_3, 0x218, &value);
    }
    return;
}

void MpGetSymlinkFinalTarget(uint16_t *input, uint64_t *input_2)
{
    uint16_t value;
    uint64_t value_2;
    uint16_t *string = NULL;
    uint16_t *string_2;
    uint32_t value_3 = 0;
    uint64_t value_4;
    uint16_t *wide_text;
    uint32_t value_5;
    uint32_t value_6 = 0;
    uint64_t value_7;
    uint64_t value_8;
    int16_t *wide_text_2;
    uint64_t value_9;
    bool enabled;
    int32_t status;
    uint16_t *string_3;
    uint32_t value_11;
    int64_t handle = 0;
    uint32_t values[2];
    if (input && (string_2 = input, input_2))
    {
        while (true)
        {
            handle = 0;
            string_3 = NULL;
            value_11 = 0x30;
            value_4 = 0;
            value_5 = 0x200;
            value_7 = 0;
            value_8 = 0;
            wide_text = string_2;
            if ((int32_t)ZwOpenSymbolicLinkObject(&handle, 0x80000000, &value_11) < 0)
            {
                break;
            }
            values[0] = 0;
            value_2 = 0;
            value_9 = 0;
            status = ZwQuerySymbolicLinkObject(handle, &value_2, values);
            if (!(status + 0x80000000U & 0x80000000) && status != -0x3fffffdd)
            {
                break;
            }
            status = MpAllocateString((uint16_t)values[0], &string);
            string_3 = string;
            if (status < 0 || (status = ZwQuerySymbolicLinkObject(handle, string, 0), status < 0))
            {
                break;
            }
            value = *string_3;
            wide_text_2 = *(int16_t **)(&string_3[4]);
            if (MpIsRenameOrLinkTargetPossibleSymLink(0, value, wide_text_2))
            {
                if (string_2 != input)
                {
                    MpFreeString(string_2);
                }
                enabled = 1;
                string_2 = string_3;
            }
            else
            {
                *input_2 = string_3;
                enabled = 0;
            }
            string_3 = NULL;
            string = NULL;
            ZwClose(handle);
            handle = 0;
            if (!enabled)
            {
                break;
            }
        }

        if (string_3)
        {
            MpFreeString(string_3);
        }
        if (string_2 && string_2 != input)
        {
            MpFreeString(string_2);
        }
        if (handle)
        {
            ZwClose(handle);
        }
    }
    return;
}

void MpNormalizeNameUnsafe(int64_t file_object, WD_LAYOUT_113 *input, WD_UNICODE_STRING_VALUE *input_2)
{
    uint16_t value;
    char byte_value;
    int64_t *allocation;
    int64_t file_name;
    uint32_t allocation_size;
    WD_UNICODE_STRING_VALUE *record;
    uint64_t value_2;
    if (file_object && input && input->field_0x8 && (input->field_0x0 && input_2))
    {
        if (*input->field_0x8 == 0x5c)
        {
            value_2 = (uint64_t)((uint64_t)input_2) & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
            byte_value = RtlPrefixUnicodeString(WD_UTIL_UNRECOVERED_ADDRESS2, input, value_2);
            if (!byte_value)
            {
                value_2 = (uint64_t)value_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
                byte_value = RtlPrefixUnicodeString(WD_UTIL_UNRECOVERED_ADDRESS3, input, value_2);
                if (!byte_value && !RtlPrefixUnicodeString(WD_UTIL_UNRECOVERED_ADDRESS4, input, (uint64_t)value_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff) && *(uint16_t **)(MpData + 0xcc0))
                {
                    allocation_size = input->field_0x0 + 2 + (uint32_t)(*(*(uint16_t **)(MpData + 0xcc0)));
                    if (allocation_size <= 0xffff && (allocation = MpAllocatePoolWithTag(1, allocation_size, 0x6e66504d), allocation))
                    {
                        input_2->Length = 0;
                        input_2->MaximumLength = 0;
                        input_2->Alignment[0] = 0;
                        input_2->Alignment[1] = 0;
                        input_2->Alignment[2] = 0;
                        input_2->Alignment[3] = 0;
                        input_2->Buffer = 0;
                        input_2->MaximumLength = (uint16_t)allocation_size;
                        input_2->Buffer = (int64_t)allocation;
                        value_2 = *(uint64_t *)(MpData + 0xcc0);
                        if (0 <= (int32_t)RtlAppendUnicodeStringToString(input_2, value_2))
                        {
                            if ((int32_t)RtlAppendUnicodeStringToString(input_2, input) <= -1)
                            {
                                if (input_2->Buffer)
                                {
                                    ExFreePoolWithTag(input_2->Buffer, 0x6e66504d);
                                    input_2->Buffer = 0;
                                }
                                input_2->Length = 0;
                                input_2->MaximumLength = 0;
                            }
                        }
                        else
                        {
                            if (input_2->Buffer)
                            {
                                ExFreePoolWithTag(input_2->Buffer, 0x6e66504d);
                                input_2->Buffer = 0;
                            }
                            input_2->Length = 0;
                            input_2->MaximumLength = 0;
                        }
                    }
                    return;
                }
            }
        }
        file_name = 0;
        if (0 <= (int32_t)FltGetFileNameInformationUnsafe(file_object, 0, 0x101, &file_name))
        {
            record = (WD_UNICODE_STRING_VALUE *)(file_name + 8);
            if (record && &((char *)((uint64_t)record->Length))[2] <= (char *)0xffff && record != input_2 && (allocation = MpAllocatePoolWithTag(1, (char *)((uint64_t)record->Length), 0x6e66504d), allocation))
            {
                value = record->Length;
                input_2->Length = 0;
                input_2->MaximumLength = 0;
                input_2->Alignment[0] = 0;
                input_2->Alignment[1] = 0;
                input_2->Alignment[2] = 0;
                input_2->Alignment[3] = 0;
                input_2->Buffer = 0;
                input_2->Buffer = (int64_t)allocation;
                input_2->MaximumLength = value;
                RtlUnicodeStringCopy(input_2, record);
            }
            FltReleaseFileNameInformation(file_name);
        }
    }
    return;
}

void MpRemoveAdminAndNonAdminSidsFromSd(int64_t input)
{
    char *bytes;
    uint32_t value = 0;
    uint32_t value_2 = 0;
    char buffer[4];
    int64_t value_3;
    char *bytes_2;
    uint32_t value_4 = 0;
    uint32_t value_5;
    uint16_t value_6 = 0x500;
    uint16_t value_7 = 0x100;
    uint16_t value_8;
    int32_t value_10;
    uint32_t *data_pointer;
    uint64_t value_11;
    char buffer_2[80];
    char buffer_4[80];
    char buffer_5[80];
    memset(buffer_4, 0, (char *)0x44);
    memset(buffer_2, 0, (char *)0x44);
    value_11 = 0;
    memset(buffer_5, 0, (char *)0x44);
    buffer[0] = '\0';
    buffer[1] = 0;
    value_3 = 0;
    if (!input)
    {
        return;
    }
    value_11 = (uint64_t)value_11 & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
    value_10 = RtlInitializeSid(buffer_4, &value, value_11);
    if (0 <= value_10)
    {
        data_pointer = (uint32_t *)RtlSubAuthoritySid(buffer_4, 0);
        if (data_pointer)
        {
            value_11 = (uint64_t)value_11 & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
            *data_pointer = 0;
            value_10 = RtlInitializeSid(buffer_2, &value_2, value_11);
            if (value_10 <= -1)
            {
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    return;
                }
                value_11 = 0x2e;
                goto block_1;
            }
            data_pointer = (uint32_t *)RtlSubAuthoritySid(buffer_2, 0);
            if (data_pointer)
            {
                *data_pointer = 0xb;
                value_10 = RtlInitializeSid(buffer_5, &value_2, (uint64_t)value_11 & 0xffffffffffffff00 | (uint64_t)2 & 0xff);
                if (value_10 <= -1)
                {
                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                    {
                        return;
                    }
                    value_11 = 0x30;
                    goto block_1;
                }
                data_pointer = (uint32_t *)RtlSubAuthoritySid(buffer_5, 0);
                if (data_pointer)
                {
                    *data_pointer = 0x20;
                    data_pointer = (uint32_t *)RtlSubAuthoritySid(buffer_5, 1);
                    if (data_pointer)
                    {
                        *data_pointer = 0x220;
                        value_10 = RtlGetDaclSecurityDescriptor(input, buffer, &value_3, &buffer[1]);
                        if (value_10 <= -1)
                        {
                            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                            {
                                return;
                            }
                            value_11 = 0x33;
                            goto block_1;
                        }
                        if (buffer[0])
                        {
                            if (value_3)
                            {
                                value_8 = *(uint16_t *)(value_3 + 4);
                                value_5 = value_4;
                                for (; value_4 < value_8; value_4 = value_4 + 1)
                                {
                                    bytes_2 = NULL;
                                    value_10 = RtlGetAce(value_3, value_5, &bytes_2);
                                    if (value_10 < 0)
                                    {
                                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                        {
                                            value_11 = 0x36;
                                            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_11, WD_SYMBOL_ADDRESS(WPP_fa8e7b00178136a6e2a2b6da068185ef_Traceguids), (uint64_t)KeGetCurrentThread(), value_10);
                                            return;
                                        }
                                        break;
                                    }
                                    if (!(*bytes_2))
                                    {
                                        bytes = &bytes_2[8];
                                        if (RtlEqualSid(bytes, buffer_4) || RtlEqualSid(bytes, buffer_2) || RtlEqualSid(bytes, buffer_5))
                                        {
                                            RtlDeleteAce(value_3, value_5);
                                        }
                                        else
                                        {
                                            value_5 += 1;
                                        }
                                    }
                                }

                                return;
                            }
                            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                            {
                                return;
                            }
                            value_11 = 0x35;
                        }
                        else
                        {
                            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                            {
                                return;
                            }
                            value_11 = 0x34;
                        }
                    }
                    else
                    {
                        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                        {
                            return;
                        }
                        value_11 = 0x32;
                    }
                }
                else
                {
                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                    {
                        return;
                    }
                    value_11 = 0x31;
                }
            }
            else
            {
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    return;
                }
                value_11 = 0x2f;
            }
        }
        else
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return;
            }
            value_11 = 0x2d;
        }
        value_10 = -0x3fffffff;
    }
    else
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return;
        }
        value_11 = 0x2c;
    }
    block_1:
    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_11, WD_SYMBOL_ADDRESS(WPP_fa8e7b00178136a6e2a2b6da068185ef_Traceguids), (uint64_t)KeGetCurrentThread(), value_10);

    block_2:
    ;

    return;
}

void MpUsnWriteCloseRecord(uint64_t input)
{
    uint32_t values[2];
    uint64_t value = 0;
    values[0] = 0;
    if (*(int64_t *)(MpData + 0xa8))
    {
        (*__guard_dispatch_icall_fptr)(input, 0x900ef, 0, 0, &value, 8, values);
    }
    return;
}

void MpCreateCoreServiceSID(int64_t *input)
{
    int32_t status;
    int64_t allocation;
    uint32_t value;
    uint64_t value_2;
    uint16_t value_3;
    *input = 0;
    value = 0;
    value_3 = 0x500;
    value_2 = 0x6473504d;
    allocation = (int64_t)MpAllocatePoolWithTag(1, RtlLengthRequiredSid(6), 0x6473504d);
    if (allocation)
    {
        status = RtlInitializeSid(allocation, &value, (uint64_t)value_2 & 0xffffffffffffff00 | (uint64_t)6 & 0xff);
        if (0 <= status)
        {
            *(uint32_t *)RtlSubAuthoritySid(allocation, 0) = 0x50;
            *(uint32_t *)RtlSubAuthoritySid(allocation, 1) = 0x1d22c9c;
            *(uint32_t *)RtlSubAuthoritySid(allocation, 2) = 0x78fb894a;
            *(uint32_t *)RtlSubAuthoritySid(allocation, 3) = 0xdb5dbe9b;
            *(uint32_t *)RtlSubAuthoritySid(allocation, 4) = 0x8b49a673;
            *(uint32_t *)RtlSubAuthoritySid(allocation, 5) = 0x1f348c88;
            *input = allocation;
        }
        else
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1e, WD_SYMBOL_ADDRESS(WPP_fa8e7b00178136a6e2a2b6da068185ef_Traceguids), (uint64_t)KeGetCurrentThread(), status);
            }
            MpFreeServiceSID(allocation);
        }
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1d, WD_SYMBOL_ADDRESS(WPP_fa8e7b00178136a6e2a2b6da068185ef_Traceguids), (uint64_t)KeGetCurrentThread(), WD_STATUS_INSUFFICIENT_RESOURCES);
    }
    return;
}

void MpCreateCryptServiceSID(int64_t *input)
{
    int32_t status;
    int64_t allocation;
    uint32_t value;
    uint64_t value_2;
    uint16_t value_3;
    *input = 0;
    value = 0;
    value_3 = 0x500;
    value_2 = 0x6473504d;
    allocation = (int64_t)MpAllocatePoolWithTag(1, RtlLengthRequiredSid(6), 0x6473504d);
    if (allocation)
    {
        status = RtlInitializeSid(allocation, &value, (uint64_t)value_2 & 0xffffffffffffff00 | (uint64_t)6 & 0xff);
        if (0 <= status)
        {
            *(uint32_t *)RtlSubAuthoritySid(allocation, 0) = 0x50;
            *(uint32_t *)RtlSubAuthoritySid(allocation, 1) = 0xe77c298;
            *(uint32_t *)RtlSubAuthoritySid(allocation, 2) = 0x10b9bf0a;
            *(uint32_t *)RtlSubAuthoritySid(allocation, 3) = 0x84440f57;
            *(uint32_t *)RtlSubAuthoritySid(allocation, 4) = 0xbdfc00a4;
            *(uint32_t *)RtlSubAuthoritySid(allocation, 5) = 0x84ad33a3;
            *input = allocation;
        }
        else
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x20, WD_SYMBOL_ADDRESS(WPP_fa8e7b00178136a6e2a2b6da068185ef_Traceguids), (uint64_t)KeGetCurrentThread(), status);
            }
            MpFreeServiceSID(allocation);
        }
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1f, WD_SYMBOL_ADDRESS(WPP_fa8e7b00178136a6e2a2b6da068185ef_Traceguids), (uint64_t)KeGetCurrentThread(), WD_STATUS_INSUFFICIENT_RESOURCES);
    }
    return;
}

void MpCreateMpDlpServiceSID(int64_t *input)
{
    int32_t status;
    int64_t allocation;
    uint32_t value;
    uint64_t value_2;
    uint16_t value_3;
    *input = 0;
    value = 0;
    value_3 = 0x500;
    value_2 = 0x6473504d;
    allocation = (int64_t)MpAllocatePoolWithTag(1, RtlLengthRequiredSid(6), 0x6473504d);
    if (allocation)
    {
        status = RtlInitializeSid(allocation, &value, (uint64_t)value_2 & 0xffffffffffffff00 | (uint64_t)6 & 0xff);
        if (0 <= status)
        {
            *(uint32_t *)RtlSubAuthoritySid(allocation, 0) = 0x50;
            *(uint32_t *)RtlSubAuthoritySid(allocation, 1) = 0x61faea8c;
            *(uint32_t *)RtlSubAuthoritySid(allocation, 2) = 0x861fa90a;
            *(uint32_t *)RtlSubAuthoritySid(allocation, 3) = 0xf03ac286;
            *(uint32_t *)RtlSubAuthoritySid(allocation, 4) = 0x6993bf88;
            *(uint32_t *)RtlSubAuthoritySid(allocation, 5) = 0x65f931c8;
            *input = allocation;
        }
        else
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x18, WD_SYMBOL_ADDRESS(WPP_fa8e7b00178136a6e2a2b6da068185ef_Traceguids), (uint64_t)KeGetCurrentThread(), status);
            }
            MpFreeServiceSID(allocation);
        }
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x17, WD_SYMBOL_ADDRESS(WPP_fa8e7b00178136a6e2a2b6da068185ef_Traceguids), (uint64_t)KeGetCurrentThread(), WD_STATUS_INSUFFICIENT_RESOURCES);
    }
    return;
}

void MpCreateMpServiceSID(int64_t *input)
{
    int32_t status;
    int64_t allocation;
    uint32_t value;
    uint64_t value_2;
    uint16_t value_3;
    *input = 0;
    value = 0;
    value_3 = 0x500;
    value_2 = 0x6473504d;
    allocation = (int64_t)MpAllocatePoolWithTag(1, RtlLengthRequiredSid(6), 0x6473504d);
    if (allocation)
    {
        status = RtlInitializeSid(allocation, &value, (uint64_t)value_2 & 0xffffffffffffff00 | (uint64_t)6 & 0xff);
        if (0 <= status)
        {
            *(uint32_t *)RtlSubAuthoritySid(allocation, 0) = 0x50;
            *(uint32_t *)RtlSubAuthoritySid(allocation, 1) = 0x720855bf;
            *(uint32_t *)RtlSubAuthoritySid(allocation, 2) = 0xd028e03b;
            *(uint32_t *)RtlSubAuthoritySid(allocation, 3) = 0xf84b7989;
            *(uint32_t *)RtlSubAuthoritySid(allocation, 4) = 0x7c6e8991;
            *(uint32_t *)RtlSubAuthoritySid(allocation, 5) = 0xf4ec2540;
            *input = allocation;
        }
        else
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x16, WD_SYMBOL_ADDRESS(WPP_fa8e7b00178136a6e2a2b6da068185ef_Traceguids), (uint64_t)KeGetCurrentThread(), status);
            }
            MpFreeServiceSID(allocation);
        }
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x15, WD_SYMBOL_ADDRESS(WPP_fa8e7b00178136a6e2a2b6da068185ef_Traceguids), (uint64_t)KeGetCurrentThread(), WD_STATUS_INSUFFICIENT_RESOURCES);
    }
    return;
}

void MpCreateNriServiceSID(int64_t *input)
{
    int32_t status;
    int64_t allocation;
    uint32_t value;
    uint64_t value_2;
    uint16_t value_3;
    *input = 0;
    value = 0;
    value_3 = 0x500;
    value_2 = 0x6473504d;
    allocation = (int64_t)MpAllocatePoolWithTag(1, RtlLengthRequiredSid(6), 0x6473504d);
    if (allocation)
    {
        status = RtlInitializeSid(allocation, &value, (uint64_t)value_2 & 0xffffffffffffff00 | (uint64_t)6 & 0xff);
        if (0 <= status)
        {
            *(uint32_t *)RtlSubAuthoritySid(allocation, 0) = 0x50;
            *(uint32_t *)RtlSubAuthoritySid(allocation, 1) = 0xdaad9cd1;
            *(uint32_t *)RtlSubAuthoritySid(allocation, 2) = 0x9325bef4;
            *(uint32_t *)RtlSubAuthoritySid(allocation, 3) = 0xf375cf76;
            *(uint32_t *)RtlSubAuthoritySid(allocation, 4) = 0xb48e3ffd;
            *(uint32_t *)RtlSubAuthoritySid(allocation, 5) = 0x19a8d2ec;
            *input = allocation;
        }
        else
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1a, WD_SYMBOL_ADDRESS(WPP_fa8e7b00178136a6e2a2b6da068185ef_Traceguids), (uint64_t)KeGetCurrentThread(), status);
            }
            MpFreeServiceSID(allocation);
        }
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x19, WD_SYMBOL_ADDRESS(WPP_fa8e7b00178136a6e2a2b6da068185ef_Traceguids), (uint64_t)KeGetCurrentThread(), WD_STATUS_INSUFFICIENT_RESOURCES);
    }
    return;
}

void MpCreateTrustedInstallerSID(int64_t *input)
{
    int32_t status;
    int64_t allocation;
    uint32_t value;
    uint64_t value_2;
    uint16_t value_3;
    *input = 0;
    value = 0;
    value_3 = 0x500;
    value_2 = 0x6473504d;
    allocation = (int64_t)MpAllocatePoolWithTag(1, RtlLengthRequiredSid(6), 0x6473504d);
    if (allocation)
    {
        status = RtlInitializeSid(allocation, &value, (uint64_t)value_2 & 0xffffffffffffff00 | (uint64_t)6 & 0xff);
        if (0 <= status)
        {
            *(uint32_t *)RtlSubAuthoritySid(allocation, 0) = 0x50;
            *(uint32_t *)RtlSubAuthoritySid(allocation, 1) = 0x38fb89b5;
            *(uint32_t *)RtlSubAuthoritySid(allocation, 2) = 0xcbc28419;
            *(uint32_t *)RtlSubAuthoritySid(allocation, 3) = 0x6d236c5c;
            *(uint32_t *)RtlSubAuthoritySid(allocation, 4) = 0x6e770057;
            *(uint32_t *)RtlSubAuthoritySid(allocation, 5) = 0x876402c0;
            *input = allocation;
        }
        else
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1c, WD_SYMBOL_ADDRESS(WPP_fa8e7b00178136a6e2a2b6da068185ef_Traceguids), (uint64_t)KeGetCurrentThread(), status);
            }
            MpFreeServiceSID(allocation);
        }
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1b, WD_SYMBOL_ADDRESS(WPP_fa8e7b00178136a6e2a2b6da068185ef_Traceguids), (uint64_t)KeGetCurrentThread(), WD_STATUS_INSUFFICIENT_RESOURCES);
    }
    return;
}

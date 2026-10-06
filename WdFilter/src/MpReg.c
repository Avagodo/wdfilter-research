#include "wdfilter.h"

void WPP_SF_ZZZ(uint64_t input, uint16_t input_2, uint64_t input_3, int16_t *input_4, int16_t *input_5, int16_t *input_6)
{
    int16_t value;
    int16_t *wide_text;
    uint64_t value_2;
    uint64_t value_3;
    uint64_t value_4;
    int16_t value_5;
    int16_t *wide_text_2;
    int16_t value_6;
    value_2 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    value_6 = 8;
    if (input_6)
    {
        value_5 = *input_6;
        if (!(*input_6))
        {
            goto block_1;
        }
        value_4 = *(uint64_t *)(&input_6[4]);
    }
    else
    {
        value_5 = 8;
        block_1:
        value_4 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    }
    wide_text_2 = input_6;
    if (!input_6)
    {
        wide_text_2 = &WdCleanupStorage;
    }
    if (input_5)
    {
        value = *input_5;
        if (*input_5)
        {
            value_3 = *(uint64_t *)(&input_5[4]);
            goto block_2;
        }
    }
    else
    {
        value = 8;
    }
    value_3 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    block_2:
    wide_text = input_5;

    if (!input_5)
    {
        wide_text = &WdCleanupStorage;
    }
    if (input_4 && (value_6 = *input_4, *input_4))
    {
        value_2 = *(uint64_t *)(&input_4[4]);
    }
    if (!input_4)
    {
        input_4 = &WdCleanupStorage;
    }
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), input_2, input_4, 2, value_2, (uint16_t)value_6, wide_text, 2, value_3, (uint16_t)value, wide_text_2, 2, value_4, (uint16_t)value_5, 0);
    return;
}

void WPP_SF_ZZ(uint64_t input, uint16_t input_2, uint64_t input_3, int16_t *input_4, int16_t *input_5)
{
    uint64_t value;
    uint64_t value_2;
    int16_t *wide_text;
    int16_t value_3;
    int16_t value_4;
    value_2 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    value_4 = 8;
    if (input_5)
    {
        value_3 = *input_5;
        if (*input_5)
        {
            value = *(uint64_t *)(&input_5[4]);
            goto block_1;
        }
    }
    else
    {
        value_3 = 8;
    }
    value = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    block_1:
    wide_text = input_5;

    if (!input_5)
    {
        wide_text = &WdCleanupStorage;
    }
    if (input_4 && (value_4 = *input_4, *input_4))
    {
        value_2 = *(uint64_t *)(&input_4[4]);
    }
    if (!input_4)
    {
        input_4 = &WdCleanupStorage;
    }
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), input_2, input_4, 2, value_2, (uint16_t)value_4, wide_text, 2, value, (uint16_t)value_3, 0);
    return;
}

void WPP_SF_SZZZ(uint64_t input, uint16_t input_2, uint64_t input_3, int16_t *input_4, int16_t *input_5, int16_t *input_6, int16_t *input_7)
{
    int64_t index;
    uint64_t value;
    int16_t *wide_text;
    int16_t value_2;
    uint64_t value_3;
    uint64_t value_4;
    int16_t value_5;
    int16_t *wide_text_2;
    int16_t *wide_text_3;
    int16_t value_6;
    value_4 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    value_6 = 8;
    if (input_7)
    {
        value_5 = *input_7;
        if (!(*input_7))
        {
            goto block_1;
        }
        value_3 = *(uint64_t *)(&input_7[4]);
    }
    else
    {
        value_5 = 8;
        block_1:
        value_3 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    }
    wide_text_3 = input_7;
    if (!input_7)
    {
        wide_text_3 = &WdCleanupStorage;
    }
    if (input_6)
    {
        value_2 = *input_6;
        if (*input_6)
        {
            value = *(uint64_t *)(&input_6[4]);
            goto block_2;
        }
    }
    else
    {
        value_2 = 8;
    }
    value = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    block_2:
    wide_text = input_6;

    if (!input_6)
    {
        wide_text = &WdCleanupStorage;
    }
    if (input_5 && (value_6 = *input_5, *input_5))
    {
        value_4 = *(uint64_t *)(&input_5[4]);
    }
    wide_text_2 = input_5;
    if (!input_5)
    {
        wide_text_2 = &WdCleanupStorage;
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
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), input_2, input_4, index, wide_text_2, 2, value_4, (uint16_t)value_6, wide_text, 2, value, (uint16_t)value_2, wide_text_3, 2, value_3, (uint16_t)value_5, 0);
    return;
}

void WPP_SF_ZDq(uint64_t input, uint16_t input_2, uint64_t input_3, int16_t *input_4, uint64_t input_5, uint64_t input_6)
{
    int16_t value;
    uint64_t value_2;
    uint64_t value_3;
    value_3 = input_6;
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

    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), input_2, input_4, 2, value_2, (uint16_t)value, &input_5, 4, &value_3, 8, 0);
    return;
}

void WPP_SF_ZZii(uint64_t input, uint64_t input_2, uint64_t input_3, int16_t *input_4, int16_t *input_5)
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
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), 0x17, input_4, 2, value_3, (uint16_t)value_2, wide_text, 2, value_4, (uint16_t)value, &unrecovered_stack_argument_6, 8, &unrecovered_stack_argument_7, 8, 0);
    return;
}

void WPP_SF_ddZZSddS(uint64_t input, uint64_t input_2, uint64_t input_3, uint32_t input_4, uint64_t input_5, int16_t *input_6, int16_t *input_7, int16_t *input_8, uint64_t input_9, uint64_t input_10, int16_t *input_11)
{
    int64_t index;
    int16_t *wide_text;
    uint64_t value;
    int16_t *wide_text_2;
    int16_t *wide_text_3;
    int16_t value_3;
    int64_t index_2 = -1;
    int16_t value_4;
    uint64_t value_5;
    uint32_t values[2];
    int64_t value_6 = 10;
    int16_t *wide_text_4;
    if (input_11)
    {
        index = -1;
        do
        {
            index += 1;
        }
        while (input_11[index]);
        index = index * 2 + 2;
    }
    else
    {
        index = 10;
    }
    value = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    wide_text_4 = input_11;
    if (!input_11)
    {
        wide_text_4 = &WdAsyncnotificationStorage3;
    }
    if (input_8)
    {
        do
        {
            index_2 += 1;
        }
        while (input_8[index_2]);
        value_6 = index_2 * 2 + 2;
    }
    wide_text_3 = input_8;
    if (!input_8)
    {
        wide_text_3 = &WdAsyncnotificationStorage3;
    }
    value_4 = 8;
    if (input_7)
    {
        value_3 = *input_7;
        if (*input_7)
        {
            value_5 = *(uint64_t *)(&input_7[4]);
            goto block_1;
        }
    }
    else
    {
        value_3 = 8;
    }
    value_5 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    block_1:
    wide_text = input_7;

    if (!input_7)
    {
        wide_text = &WdCleanupStorage;
    }
    if (input_6 && (value_4 = *input_6, *input_6))
    {
        value = *(uint64_t *)(&input_6[4]);
    }
    wide_text_2 = input_6;
    if (!input_6)
    {
        wide_text_2 = &WdCleanupStorage;
    }
    values[0] = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), 0xae, values, 4, &input_5, 4, wide_text_2, 2, value, (uint16_t)value_4, wide_text, 2, value_5, (uint16_t)value_3, wide_text_3, value_6, &input_9, 4, &input_10, 4, wide_text_4, index, 0);
    return;
}

int32_t MpRegPostDeleteValueKey(WD_LAYOUT_70 *input, WD_LAYOUT_69 *input_2)
{
    int64_t value;
    int32_t value_2 = 0;
    WD_LAYOUT_68 *buffer;
    uint64_t value_3;
    uint32_t value_4;
    if (input)
    {
        if (0 <= input->field_0x8)
        {
            if (!input_2)
            {
                return 0;
            }
            if (input_2->field_0x0 != -0x25f3)
            {
                value_2 = -0x3fffffdc;
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qDL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x5c, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), (uint16_t)input_2->field_0x0, 0xc0000024);
                }
            }
            else if (input_2->field_0x40)
            {
                if (input_2->field_0x28)
                {
                    buffer = (WD_LAYOUT_68 *)ExAllocateFromPagedLookasideList((void *)(MpRegData + 0x40));
                    if (buffer)
                    {
                        memset(buffer, 0, (char *)0x78);
                        value = input_2->field_0x40;
                        buffer->field_0x60 = value;
                        buffer->field_0x8 = input_2->field_0x28;
                        buffer->field_0x0 = input->field_0x0;
                        buffer->field_0x40 = 0;
                        buffer->field_0x10 = input_2->field_0x30;
                        if (input_2->field_0x38)
                        {
                            buffer->field_0x34 = *(uint32_t *)(input_2->field_0x38 + 8);
                            buffer->field_0x38 = input_2->field_0x38 + 0xc;
                            buffer->field_0x30 = *(uint32_t *)(input_2->field_0x38 + 4);
                        }
                        buffer->field_0x58 = *(int64_t *)(value + 0x18);
                        ((uint8_t *)(&buffer->field_0x58))[1] = ((uint8_t *)(&buffer->field_0x58))[1] & 0xcf | 8;
                        buffer->field_0x6c = input_2->field_0x48;
                        value_2 = MpRegpSendNotification(NULL, buffer);
                        if (value_2 < 0 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x60, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), value_2);
                        }
                        ExFreeToPagedLookasideList((void *)(MpRegData + 0x40), buffer);
                        MpRegpFreeCallContext(input_2);
                        return value_2;
                    }
                    value_2 = -0x3fffff66;
                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                    {
                        MpRegpFreeCallContext(input_2);
                        return value_2;
                    }
                    value_3 = 0x5f;
                    value_4 = WD_STATUS_INSUFFICIENT_RESOURCES;
                }
                else
                {
                    value_2 = -0x3fffffff;
                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                    {
                        MpRegpFreeCallContext(input_2);
                        return value_2;
                    }
                    value_3 = 0x5e;
                    value_4 = WD_STATUS_UNSUCCESSFUL;
                }
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_3, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), value_4);
            }
            else
            {
                value_2 = -0x3fffffff;
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x5d, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), WD_STATUS_UNSUCCESSFUL);
                }
            }
            MpRegpFreeCallContext(input_2);
            return value_2;
        }
    }
    else
    {
        value_2 = -0x3ffffff3;
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x5b, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), WD_STATUS_INVALID_PARAMETER);
        }
    }
    if (!input_2)
    {
        return value_2;
    }
    MpRegpFreeCallContext(input_2);
    return value_2;
}

int32_t MpRegPostSetValueKey(WD_LAYOUT_72 *input, WD_LAYOUT_71 *input_2)
{
    uint16_t value;
    int64_t *data_pointer;
    uint64_t value_2;
    uint64_t value_3;
    uint32_t value_4;
    int32_t value_5;
    int64_t reg_data;
    int64_t value_6;
    int32_t value_7;
    int64_t *buffer;
    uint64_t value_8;
    uint64_t value_9;
    int64_t *data_pointer_2;
    value_4 = (uint32_t)((uint64_t)value_2 >> 0x20);
    value_7 = 0;
    data_pointer = NULL;
    data_pointer_2 = NULL;
    buffer = data_pointer_2;
    if (input)
    {
        buffer = data_pointer;
        if (input->field_0x8 <= -1 || !input_2)
        {
            goto block_1;
        }
        if (input_2->field_0x0 != 0xda0c)
        {
            value_7 = -0x3fffffdc;
            buffer = data_pointer_2;
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qDL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x45, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)((uint32_t)input_2->field_0x0) & 0xffffffffULL, 0xc0000024);
            }
            goto block_1;
        }
        if (!input_2->field_0x40)
        {
            value_7 = -0x3fffffff;
            buffer = data_pointer_2;
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x46, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_UNSUCCESSFUL & 0xffffffffULL);
            }
            goto block_1;
        }
        if (input_2->field_0x28)
        {
            reg_data = input->field_0x10;
            if (reg_data)
            {
                buffer = (int64_t *)ExAllocateFromPagedLookasideList((void *)(MpRegData + 0x40));
                data_pointer_2 = buffer;
                if (buffer)
                {
                    memset(buffer, 0, (char *)0x78);
                    buffer[0xc] = input_2->field_0x40;
                    buffer[1] = input_2->field_0x28;
                    *buffer = input->field_0x0;
                    value_7 = input_2->field_0x38;
                    *(int32_t *)(&buffer[8]) = value_7;
                    buffer[2] = *(int64_t *)(reg_data + 8);
                    if (*(char *)(input_2->field_0x40 + 0x10) == '\x01')
                    {
                        if (input_2->field_0x30)
                        {
                            ((uint32_t *)buffer)[0xd] = *(uint32_t *)(input_2->field_0x30 + 8);
                            buffer[7] = input_2->field_0x30 + 0xc;
                            *(uint32_t *)(&buffer[6]) = *(uint32_t *)(input_2->field_0x30 + 4);
                        }
                        value_6 = *(int64_t *)(reg_data + 0x18);
                        buffer[10] = value_6;
                        value_5 = *(int32_t *)(reg_data + 0x20);
                        ((int32_t *)buffer)[0x11] = value_5;
                        if (((int32_t *)buffer)[0xd] == value_5 && *(int32_t *)(&buffer[6]) == value_7)
                        {
                            value_7 = 0;
                            if (buffer[7])
                            {
                                if (value_6 && (value_8 = RtlCompareMemory(), value_8 == ((uint32_t *)buffer)[0xd]))
                                {
                                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                                    {
                                        WPP_SF_ZZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x4b);
                                    }
                                    value_7 = 0;
                                    goto block_1;
                                }
                            }
                            else if (!value_6)
                            {
                                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                                {
                                    WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x4a, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids));
                                }
                                goto block_1;
                            }
                        }
                    }
                    reg_data = *(int64_t *)(buffer[0xc] + 0x18);
                    buffer[0xb] = reg_data;
                    ((uint8_t *)buffer)[0x59] = (uint8_t)((uint64_t)reg_data >> 8) & 0xf9 | 1;
                    ((char *)buffer)[0x6c] = input_2->field_0x48;
                    value_7 = MpRegpSendNotification(NULL, buffer);
                    if (0 <= value_7 || WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                    {
                        goto block_1;
                    }
                    value_9 = 0x4d;
                    value_3 = ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)value_7 & 0xffffffffULL;
                }
                else
                {
                    value_7 = -0x3fffff66;
                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                    {
                        goto block_1;
                    }
                    value_9 = 0x49;
                    value_3 = ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INSUFFICIENT_RESOURCES & 0xffffffffULL;
                }
            }
            else
            {
                value_7 = -0x3fffffff;
                buffer = data_pointer_2;
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    goto block_1;
                }
                value_9 = 0x48;
                value_3 = ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_UNSUCCESSFUL & 0xffffffffULL;
                data_pointer_2 = data_pointer;
            }
        }
        else
        {
            value_7 = -0x3fffffff;
            buffer = data_pointer_2;
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                goto block_1;
            }
            value_9 = 0x47;
            value_3 = ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_UNSUCCESSFUL & 0xffffffffULL;
        }
    }
    else
    {
        value_7 = -0x3ffffff3;
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            goto block_1;
        }
        value_9 = 0x44;
        value_3 = ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INVALID_PARAMETER & 0xffffffffULL;
    }
    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_9, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), value_3);
    buffer = data_pointer_2;
    block_1:
    reg_data = MpRegData;

    if (buffer)
    {
        *(int32_t *)(MpRegData + 0x5c) = *(int32_t *)(MpRegData + 0x5c) + 1;
        value = *(uint16_t *)(reg_data + 0x50);
        if (value <= (uint16_t)ExQueryDepthSList(reg_data + 0x40))
        {
            *(int32_t *)(reg_data + 0x60) = *(int32_t *)(reg_data + 0x60) + 1;
            (*__guard_dispatch_icall_fptr)(buffer);
        }
        else
        {
            ExpInterlockedPushEntrySList(reg_data + 0x40, buffer);
        }
    }
    if (input_2)
    {
        MpRegpFreeCallContext(input_2);
    }
    return value_7;
}

int32_t MpRegPostDeleteKey(WD_LAYOUT_70 *input, uint64_t input_2, WD_LAYOUT_74 *input_3)
{
    int32_t value = 0;
    WD_LAYOUT_115 *buffer;
    uint64_t value_2;
    uint32_t value_3;
    if (input)
    {
        if (0 <= input->field_0x8)
        {
            if (!input_3)
            {
                return 0;
            }
            if (input_3->field_0x0 != -0x25ef)
            {
                value = -0x3fffffdc;
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qDL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x31, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), (uint16_t)input_3->field_0x0, 0xc0000024);
                }
            }
            else if (input_3->field_0x30)
            {
                if (input_3->field_0x28)
                {
                    buffer = (WD_LAYOUT_115 *)ExAllocateFromPagedLookasideList((void *)(MpRegData + 0x40));
                    if (buffer)
                    {
                        memset(buffer, 0, (char *)0x78);
                        buffer->field_0x60 = input_3->field_0x30;
                        buffer->field_0x8 = input_3->field_0x28;
                        buffer->field_0x0 = input->field_0x0;
                        buffer->field_0x58 = *(int64_t *)(input_3->field_0x30 + 0x18);
                        value = MpRegpSendNotification(NULL, buffer);
                        if (value < 0 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x35, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), value);
                        }
                        ExFreeToPagedLookasideList((void *)(MpRegData + 0x40), buffer);
                        MpRegpFreeCallContext(input_3);
                        return value;
                    }
                    value = -0x3fffff66;
                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                    {
                        MpRegpFreeCallContext(input_3);
                        return value;
                    }
                    value_2 = 0x34;
                    value_3 = WD_STATUS_INSUFFICIENT_RESOURCES;
                }
                else
                {
                    value = -0x3fffffff;
                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                    {
                        MpRegpFreeCallContext(input_3);
                        return value;
                    }
                    value_2 = 0x33;
                    value_3 = WD_STATUS_UNSUCCESSFUL;
                }
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), value_3);
            }
            else
            {
                value = -0x3fffffff;
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x32, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), WD_STATUS_UNSUCCESSFUL);
                }
            }
            MpRegpFreeCallContext(input_3);
            return value;
        }
    }
    else
    {
        value = -0x3ffffff3;
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x30, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), WD_STATUS_INVALID_PARAMETER);
        }
    }
    if (!input_3)
    {
        return value;
    }
    MpRegpFreeCallContext(input_3);
    return value;
}

int32_t MpRegPostCreateKeyEx(WD_LAYOUT_72 *input, uint64_t input_2, WD_LAYOUT_80 *input_3)
{
    int32_t *data_pointer;
    int32_t value = 0;
    WD_LAYOUT_115 *buffer;
    if (input)
    {
        if (0 <= input->field_0x8 && input->field_0x8 != 0x104)
        {
            if (!input_3)
            {
                return 0;
            }
            if (input_3->field_0x0 != -0x25f5)
            {
                value = -0x3fffffdc;
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qDL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x20, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), (uint16_t)input_3->field_0x0, 0xc0000024);
                }
            }
            else if (input_3->field_0x30)
            {
                if (input_3->field_0x28)
                {
                    if (input_3->field_0x38 && input->field_0x10 && (data_pointer = *(int32_t **)(input->field_0x10 + 0x40), data_pointer) && *data_pointer == 1)
                    {
                        EnforceExclusionProtection(input_3->field_0x28);
                    }
                    buffer = (WD_LAYOUT_115 *)ExAllocateFromPagedLookasideList((void *)(MpRegData + 0x40));
                    if (buffer)
                    {
                        memset(buffer, 0, (char *)0x78);
                        buffer->field_0x60 = input_3->field_0x30;
                        buffer->field_0x8 = input_3->field_0x28;
                        buffer->field_0x0 = input->field_0x0;
                        buffer->field_0x58 = *(int64_t *)(input_3->field_0x30 + 0x18);
                        value = MpRegpSendNotification(NULL, buffer);
                        if (value < 0 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x24, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), value);
                        }
                        ExFreeToPagedLookasideList((void *)(MpRegData + 0x40), buffer);
                    }
                    else
                    {
                        value = -0x3fffff66;
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x23, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), WD_STATUS_INSUFFICIENT_RESOURCES);
                        }
                    }
                }
                else
                {
                    value = -0x3fffffff;
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x22, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), WD_STATUS_UNSUCCESSFUL);
                    }
                }
            }
            else
            {
                value = -0x3fffffff;
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x21, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), WD_STATUS_UNSUCCESSFUL);
                }
            }
            MpRegpFreeCallContext(input_3);
            return value;
        }
    }
    else
    {
        value = -0x3ffffff3;
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1f, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), WD_STATUS_INVALID_PARAMETER);
        }
    }
    if (!input_3)
    {
        return value;
    }
    MpRegpFreeCallContext(input_3);
    return value;
}

void MpRegCallback(uint64_t input, uint64_t input_2, int64_t *input_3)
{
    uint64_t value;
    int64_t *data_pointer;
    char *bytes;
    int64_t *data_pointer_2;
    int64_t *data_pointer_3;
    int64_t value_2 = 0;
    char buffer_2[8];
    uint64_t *data_pointer_4 = NULL;
    char buffer_3[8];
    uint32_t value_3;
    uint64_t current_thread;
    int64_t current_thread_2 = 0;
    uint64_t *data_pointer_5;
    int64_t allocation = 0;
    char *bytes_2;
    uint64_t *data_pointer_6;
    uint64_t *data_pointer_7;
    int64_t *data_pointer_8;
    bool enabled = 1;
    bool enabled_2;
    int32_t value_5;
    uint64_t *data_pointer_9;
    value = *(uint64_t *)(MpRegData + 0x18);
    buffer_2[0] = 0;
    buffer_3[0] = 0;
    value_3 = (uint32_t)input_2;
    if ((!(*(uint32_t *)(MpData + 0x364) & 8) || !(*(int64_t *)(MpRegData + 0x10)) || !(*(uint32_t *)(MpData + 0x364) & 0x10) || !(value >> 0x10 & 0x38) && !(value >> 0x10 & 0x40) && ('\0' <= (char)(value >> 0x10) && !(value >> 0x10 & 4))) && (allocation = 0, value_3 <= 0x2d && 0x224004000017U >> (input_2 & 0x3f) & 1))
    {
        bytes = NULL;
        if (value_3 == 0x1a)
        {
            bytes = "RegNtPreCreateKeyEx";
            data_pointer_3 = input_3;
            current_thread_2 = 0;
            goto block_2;
        }
        data_pointer_3 = NULL;
        if (!value_3)
        {
            bytes = "RegNtPreDeleteKey";
            goto block_1;
        }
        if (value_3 != 1)
        {
            if (value_3 == 2)
            {
                current_thread_2 = *input_3;
                bytes = "RegNtPreDeleteValueKey";
                goto block_2;
            }
            if (value_3 != 4)
            {
                if (value_3 != 0x2d)
                {
                    if (value_3 != 0x29)
                    {
                        if (value_3 != 0x26)
                        {
                            goto block_2;
                        }
                        bytes = "RegNtPreSetKeySecurity";
                    }
                    else
                    {
                        bytes = "RegNtPreRestoreKey";
                    }
                    block_1:
                    current_thread_2 = *input_3;

                    data_pointer_3 = NULL;
                }
                else
                {
                    current_thread_2 = *input_3;
                    bytes = "RegNtPreReplaceKey";
                    data_pointer_3 = NULL;
                }
                goto block_2;
            }
            data_pointer_5 = (uint64_t *)input_3[1];
            bytes = "RegNtPreRenameKey";
            current_thread_2 = *input_3;
        }
        else
        {
            current_thread_2 = *input_3;
            bytes = "RegNtPreSetValueKey";
            block_2:
            data_pointer_5 = NULL;
        }
        bytes_2 = buffer_3;
        value_5 = MpRegHardenningBlockOperation(bytes, data_pointer_3, current_thread_2, data_pointer_5, &value_2, bytes_2, buffer_2);
        if (value_5 < 0 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xe, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread());
        }
        allocation = value_2;
    }
    if (MpDlpIsEnabled(1, NULL))
    {
        MpDlpRegistryCallback(input_2 & 0xffffffff, input_3, &value_2);
        allocation = value_2;
    }
    if (!value || 0x2f <= value_3 || (!(0x66c00c0b8017U >> (input_2 & 0x3f) & 1) || (current_thread = (uint64_t)KeGetCurrentThread(), current_thread_2 = *(int64_t *)(MpData + 0xe8), IoThreadToProcess(current_thread) == current_thread_2 || (current_thread = (uint64_t)KeGetCurrentThread(), current_thread_2 = *(int64_t *)(MpData + 0x100), IoThreadToProcess(current_thread) == current_thread_2))))
    {
        goto block_5;
    }
    if (0x2f <= value_3 || !(0x4080080b8000U >> (input_2 & 0x3f) & 1))
    {
        enabled_2 = 0;
    }
    else
    {
        current_thread_2 = (int64_t)KeGetCurrentThread();
        enabled_2 = 1;
        data_pointer_5 = NULL;
        ExAcquireFastMutex(MpRegData + 0x128);
        data_pointer_9 = *(uint64_t **)((uint64_t *)(MpRegData + 0x160));
        while (data_pointer_9 != (uint64_t *)(MpRegData + 0x160))
        {
            data_pointer_6 = (uint64_t *)(*data_pointer_9);
            if (data_pointer_9[2] == current_thread_2)
            {
                if ((uint64_t *)data_pointer_6[1] != data_pointer_9 || (data_pointer_7 = (uint64_t *)data_pointer_9[1], (uint64_t *)(*data_pointer_7) != data_pointer_9))
                {
                    (*(WD_ROUTINE)swi(0x29))(3);
                }
                *data_pointer_7 = data_pointer_6;
                data_pointer_5 = &data_pointer_9[-2];
                data_pointer_6[1] = data_pointer_7;
                break;
            }
            data_pointer_9 = data_pointer_6;
        }

        ExReleaseFastMutex(MpRegData + 0x128);
        data_pointer_4 = data_pointer_5;
    }
    enabled = 1;
    if (value_3 == 0x1a)
    {
        MpRegPreCreateKeyEx(input_3, value, &data_pointer_4, buffer_2, allocation, (uint64_t)((uint64_t)bytes_2) & 0xffffffffffffff00 | (uint64_t)buffer_3[0] & 0xff);
        goto block_3;
    }
    if (value_3 == 0x1b)
    {
        MpRegPostCreateKeyEx(input_3);
        goto block_4;
    }
    if (0x2f <= value_3)
    {
        goto block_4;
    }
    current_thread_2 = *(uint32_t *)(*(uint8_t *)((int32_t)value_3 + WD_REG_UNRECOVERED_ADDRESS) * 4ULL + WD_REG_UNRECOVERED_ADDRESS2) + WD_SHARED_UNRECOVERED_ADDRESS;
    switch (value_3)
    {
        case 0:
            MpRegPreDeleteKey(input_3, value, &data_pointer_4, buffer_2, allocation);
            enabled = 0;
            break;

        case 1:
            MpRegPreSetValueKey(input_3, value, &data_pointer_4, buffer_2, allocation);
            enabled = 0;
            break;

        case 2:
            MpRegPreDeleteValueKey(input_3, value, &data_pointer_4, buffer_2, allocation);
            enabled = 0;
            break;

        case 4:
            MpRegPreRenameKey(input_3, value, &data_pointer_4, buffer_2, allocation);
            goto block_3;

        case 0xf:
            MpRegPostDeleteKey(input_3, current_thread_2, data_pointer_4);
            break;

        case 0x10:
            MpRegPostSetValueKey(input_3, data_pointer_4);
            break;

        case 0x11:
            MpRegPostDeleteValueKey(input_3, data_pointer_4);
            break;

        case 0x13:
            MpRegPostRenameKey(input_3, current_thread_2, data_pointer_4);
            break;

        case 0x26:
            MpRegPreSetKeySecurity(input_3, value, &data_pointer_4, buffer_2, allocation);
            enabled = 0;
            break;

        case 0x27:
            MpRegPostSetKeySecurity(input_3, current_thread_2, data_pointer_4);
            break;

        case 0x29:
            MpRegPreRestoreKey(input_3, value, &data_pointer_4, buffer_2, allocation);
            goto block_3;

        case 0x2a:
            MpRegPostRestoreKey(input_3, current_thread_2, data_pointer_4);
            break;

        case 0x2d:
            MpRegPreReplaceKey(input_3, value, &data_pointer_4, buffer_2, allocation);
            block_3:
        enabled = 0;

            break;

        case 0x2e:
            MpRegPostReplaceKey(input_3, current_thread_2, data_pointer_4);
    }

    block_4:
    data_pointer_5 = data_pointer_4;

    if (!enabled_2 && data_pointer_4)
    {
        data_pointer_3 = NULL;
        current_thread_2 = MpRegData + 0x128;
        data_pointer_4[4] = (uint64_t)KeGetCurrentThread();
        ExAcquireFastMutex(current_thread_2);
        data_pointer = (int64_t *)(MpRegData + 0x160);
        data_pointer_2 = (int64_t *)(*data_pointer);
        while (data_pointer_2 != data_pointer)
        {
            data_pointer_8 = (int64_t *)(*data_pointer_2);
            if (data_pointer_2[2] == data_pointer_5[4])
            {
                if ((int64_t *)data_pointer_8[1] != data_pointer_2 || (data_pointer_9 = (uint64_t *)data_pointer_2[1], (int64_t *)(*data_pointer_9) != data_pointer_2))
                {
                    (*(WD_ROUTINE)swi(0x29))(3);
                }
                *data_pointer_9 = data_pointer_8;
                data_pointer_3 = &data_pointer_2[-2];
                data_pointer_8[1] = (int64_t)data_pointer_9;
                break;
            }
            data_pointer_2 = data_pointer_8;
        }

        current_thread_2 = *data_pointer;
        data_pointer_2 = &data_pointer_5[2];
        if (*(int64_t **)(current_thread_2 + 8) != data_pointer)
        {
            (*(WD_ROUTINE)swi(0x29))(3);
        }
        data_pointer_5[3] = data_pointer;
        *data_pointer_2 = current_thread_2;
        *(int64_t **)(current_thread_2 + 8) = data_pointer_2;
        *data_pointer = (int64_t)data_pointer_2;
        ExReleaseFastMutex(MpRegData + 0x128);
        if (data_pointer_3)
        {
            MpRegpFreeCallContext(data_pointer_3);
        }
        data_pointer_4 = NULL;
    }
    block_5:
    if (allocation && enabled)
    {
        if (value_3 != 0x1a)
        {
            MpRegpFreeKeyName(allocation);
        }
        else
        {
            ExFreePoolWithTag(allocation, 0x5364504d);
        }
    }

    return;
}

void MpRegHardenningBlockOperation(int64_t input, WD_LAYOUT_30 *input_2, int64_t input_3, uint64_t *input_4, int64_t *input_5, char *input_6, char *input_7)
{
    int64_t process_table;
    int64_t creation_time;
    uint64_t process_id;
    uint64_t *index;
    uint64_t *data_pointer;
    int64_t trace_argument_1;
    uint64_t *data_pointer_2;
    uint64_t *data_pointer_3;
    uint64_t *process_context;
    uint64_t *allocation;
    char buffer_2[16];
    uint64_t value;
    uint64_t value_2;
    uint32_t value_3;
    int64_t value_4;
    int64_t value_5;
    WD_LAYOUT_30 *record;
    uint64_t *source_string;
    char buffer_3[16];
    int64_t *data_pointer_4;
    char *bytes;
    char *bytes_2;
    char byte_value;
    int32_t value_7;
    uint64_t current_thread;
    bytes_2 = input_7;
    bytes = input_6;
    data_pointer_4 = input_5;
    value_3 = (uint32_t)((uint64_t)value >> 0x20);
    data_pointer = NULL;
    trace_argument_1 = 0;
    data_pointer_3 = NULL;
    data_pointer_2 = NULL;
    value_4 = input;
    value_5 = input_3;
    record = input_2;
    source_string = input_4;
    if (input_3)
    {
        if (!input_2)
        {
            goto block_5;
        }
    }
    else if (input_2)
    {
        block_5:
        if (input_5 && input_7 && input_6)
        {
            *input_7 = '\0';
            *input_6 = '\0';
            *input_5 = 0;
            process_id = WdSharedTickCount;
            if (*(int32_t *)(MpData + 0x98c))
            {
                return;
            }
            if (*(int64_t *)(MpData + 0xe8))
            {
                block_1:
                current_thread = (uint64_t)KeGetCurrentThread();

                process_table = *(int64_t *)(MpData + 0xe8);
                allocation = data_pointer;
                process_context = data_pointer;
                index = data_pointer;
                if (IoThreadToProcess(current_thread, input_2) != process_table && (current_thread = (uint64_t)KeGetCurrentThread(), process_table = *(int64_t *)(MpData + 0x100), allocation = NULL, process_context = NULL, index = NULL, IoThreadToProcess(current_thread) != process_table))
                {
                    current_thread = IoGetCurrentProcess();
                    creation_time = PsGetProcessCreateTimeQuadPart(current_thread);
                    process_id = PsGetProcessId(current_thread);
                    process_table = MpProcessTable;
                    if (process_id)
                    {
                        KeEnterCriticalRegion();
                        ExAcquireResourceSharedLite(process_table + 8, (uint64_t)((uint64_t)input_2) & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
                        allocation = (uint64_t *)(((uint32_t)(process_id >> 2) & 0x7f) * 0x10ULL + *(int64_t *)(MpProcessTable + 0x180));
                        for (index = (uint64_t *)(*allocation); index != allocation; index = (uint64_t *)(*index))
                        {
                            if (process_id == index[2] && creation_time == index[3])
                            {
                                WdAtomicAdd32((volatile int32_t *)((int32_t *)(&index[5])), 1);
                                data_pointer = &index[-1];
                                break;
                            }
                        }

                        ExReleaseResourceLite(MpProcessTable + 8);
                        KeLeaveCriticalRegion();
                    }
                    process_context = data_pointer;
                    if (MpIsRegistryHardeningExemptByContext(data_pointer))
                    {
                        block_2:
                        allocation = data_pointer_2;
                    }
                    else
                    {
                        if (!value_5)
                        {
                            value_7 = MpRegpCheckExistingKey(record, bytes, &trace_argument_1);
                            if (0 <= value_7)
                            {
                                if (!(*bytes))
                                {
                                    goto block_3;
                                }
                            }
                            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                            {
                                current_thread = 0x9e;
                                value_2 = ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)value_7 & 0xffffffffULL;
                                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), current_thread, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), value_2);
                            }
                            goto block_2;
                        }
                        value_7 = MpRegpGetKeyName(value_5, &trace_argument_1);
                        if (value_7 < 0)
                        {
                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                            {
                                current_thread = 0x9d;
                                value_2 = ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)value_7 & 0xffffffffULL;
                                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), current_thread, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), value_2);
                            }
                            goto block_2;
                        }
                        block_3:
                        byte_value = MpRegHardeningIsMatch(trace_argument_1);

                        index = source_string;
                        *bytes_2 = byte_value;
                        if (byte_value)
                        {
                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                            {
                                WPP_SF_ZDq(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x9f, *(uint32_t *)(MpData + 0x364), trace_argument_1, ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)(*(uint32_t *)(MpData + 0x364)) & 0xffffffffULL, *(uint64_t *)(MpRegData + 0x10));
                            }
                            MpLogPrintfW(L"[Mini-filter] Denied registry operation for key [%wZ] based on hardcode list. MonitorFlags: [0x%x] MonitorData: [0x%p]", trace_argument_1, *(uint32_t *)(MpData + 0x364), *(uint64_t *)(MpRegData + 0x10));
                            MpTraceRegHardeningNotification(1, 0, data_pointer, value_4, trace_argument_1, NULL, NULL);
                            goto block_2;
                        }
                        if (!source_string)
                        {
                            goto block_2;
                        }
                        if (*(uint32_t *)(MpData + 0x360) & 4)
                        {
                            allocation = data_pointer_2;
                        }
                        else
                        {
                            value_7 = MpRegpCopyUnicodeString(source_string, &data_pointer_2);
                            if (value_7 <= -1)
                            {
                                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                {
                                    current_thread = 0xa0;
                                    value_2 = ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)value_7 & 0xffffffffULL;
                                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), current_thread, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), value_2);
                                }
                                goto block_2;
                            }
                            allocation = data_pointer_2;
                            if (data_pointer_2)
                            {
                                index = data_pointer_2;
                            }
                        }
                        value_7 = MpRegpGetKeyDestinationName(trace_argument_1, index, &data_pointer_3);
                        index = data_pointer_3;
                        if (0 <= value_7)
                        {
                            byte_value = MpRegHardeningIsMatch(data_pointer_3);
                            *bytes_2 = byte_value;
                            if (byte_value)
                            {
                                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                                {
                                    WPP_SF_ZDq(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xa2, *(uint32_t *)(MpData + 0x364), index, ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)(*(uint32_t *)(MpData + 0x364)) & 0xffffffffULL, *(uint64_t *)(MpRegData + 0x10));
                                }
                                MpLogPrintfW(L"[Mini-filter] Denied registry operation for key [%wZ] based on hardcode list. MonitorFlags: [0x%x] MonitorData: [0x%p]", index, *(uint32_t *)(MpData + 0x364), *(uint64_t *)(MpRegData + 0x10));
                                MpTraceRegHardeningNotification(1, 0, data_pointer, value_4, trace_argument_1, NULL, NULL);
                            }
                            goto block_4;
                        }
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xa1, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)value_7 & 0xffffffffULL);
                        }
                    }
                    index = data_pointer_3;
                }
            }
            else
            {
                buffer_2 = (uint64_t)((uint32_t)KeQueryTimeIncrement());
                buffer_3 = 0 | (uint64_t)36000000000;
                input_2 = (uint64_t)(buffer_3 % buffer_2);
                allocation = NULL;
                process_context = NULL;
                index = NULL;
                if (process_id <= (uint64_t)(*(int64_t *)(MpData + 0xfc0) + (uint64_t)(buffer_3 / buffer_2)))
                {
                    goto block_1;
                }
            }
            block_4:
            if (trace_argument_1)
            {
                *data_pointer_4 = trace_argument_1;
                trace_argument_1 = 0;
            }

            if (allocation)
            {
                ExFreePoolWithTag(allocation, 0x5364504d);
            }
            if (index)
            {
                ExFreePoolWithTag(index, 0x4b72504d);
            }
            if (process_context)
            {
                MpReleaseProcessContext(process_context);
            }
            return;
        }
    }
    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
    {
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x9c, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INVALID_PARAMETER & 0xffffffffULL);
    }
    return;
}

uint64_t MpRegTPAllowChange(void *input, int16_t *trace_argument_3, int64_t *input_2)
{
    int32_t value;
    int64_t process_context;
    uint8_t provider;
    uint16_t *trace_argument_8;
    char byte_value;
    uint64_t status;
    uint64_t value_2;
    uint16_t *trace_argument_5;
    uint8_t trace_argument_6;
    uint8_t event_id;
    uint32_t value_3;
    int64_t process_context_2;
    if (input)
    {
        if (!(((uint8_t *)input)[3] & 0x42))
        {
            return (uint64_t)status & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
        }
        byte_value = '\0';
        if (input_2)
        {
            process_context = *input_2;
            process_context_2 = process_context;
            if (!process_context)
            {
                goto block_1;
            }
        }
        else
        {
            process_context = 0;
            block_1:
            status = MpGetProcessContextByObject(IoGetCurrentProcess(), &process_context);

            process_context_2 = process_context;
            if (!process_context)
            {
                *(uint8_t *)((int64_t)input + 3) = *(uint8_t *)((int64_t)input + 3) & 0xbf;
                value_2 = status & 0xffffffffffffff00;
                return value_2;
            }
        }
        value = *(int32_t *)(process_context_2 + 0xf0);
        if (((uint8_t *)input)[3] & 0x40)
        {
            status = MpRegIsTamperProtectedLevelExempt(&process_context);
            process_context_2 = process_context;
            byte_value = (char)status;
            if (byte_value)
            {
                status = WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control);
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && (status = *(uint32_t *)(WPP_GLOBAL_Control + 0x2c), *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2))
                {
                    trace_argument_8 = (uint16_t *)WD_CREATE_UNRECOVERED_ADDRESS3;
                    if (value != 8)
                    {
                        trace_argument_8 = L"False";
                    }
                    value_3 = *(uint32_t *)(process_context + 0x120) & 1;
                    if (value_3)
                    {
                        provider = *(uint8_t *)(process_context + 0xb8) >> 4;
                        trace_argument_6 = *(uint8_t *)(process_context + 0xb8) & 7;
                    }
                    else
                    {
                        provider = 0;
                        trace_argument_6 = 0;
                    }
                    trace_argument_5 = L"Available";
                    if (!value_3)
                    {
                        trace_argument_5 = &WdRegStorage;
                    }
                    if (!trace_argument_3)
                    {
                        trace_argument_3 = &WdRegStorage2;
                    }
                    event_id = ((uint8_t *)input)[3] >> 6 & 1;
                    status = WPP_SF_ddZZSddS(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, provider, ((uint8_t *)input)[3] >> 1 & 1, event_id, trace_argument_3, *(int16_t **)(process_context + 0x80), trace_argument_5, trace_argument_6, provider, trace_argument_8);
                }
                *(uint8_t *)((int64_t)input + 3) = *(uint8_t *)((int64_t)input + 3) & 0xbd;
            }
            else
            {
                *(uint8_t *)((int64_t)input + 3) = *(uint8_t *)((int64_t)input + 3) & 0xfd;
            }
        }
        if (input_2)
        {
            if (!(*input_2))
            {
                *input_2 = process_context_2;
            }
        }
        else
        {
            status = MpReleaseProcessContext(process_context_2);
        }
        value_2 = (uint64_t)status & 0xffffffffffffff00 | (uint64_t)byte_value & 0xff;
    }
    else
    {
        value_2 = status & 0xffffffffffffff00;
    }
    return value_2;
}

void MpRegPreDeleteKey(int64_t *input, uint64_t input_2, int64_t *input_3, char *input_4, int64_t *input_5)
{
    uint32_t value;
    int64_t *data_pointer;
    int64_t *data_pointer_2;
    int64_t *trace_argument_3;
    int64_t *process_context;
    int64_t *data_pointer_3;
    int64_t *data_pointer_4;
    int64_t *data_pointer_5;
    int64_t *process_context_2;
    int64_t *trace_argument_1;
    char byte_value;
    int64_t *allocation;
    bool enabled;
    bool enabled_2;
    uint64_t value_2;
    uint64_t value_3;
    uint32_t value_4;
    char byte_value_2;
    uint32_t value_5;
    uint64_t value_6;
    char byte_value_3;
    int64_t *data_pointer_6;
    int32_t value_8;
    int64_t value_9;
    uint32_t value_10;
    uint64_t value_11;
    uint64_t value_12;
    int64_t *buffer_2;
    data_pointer_3 = input_5;
    value_4 = (uint32_t)((uint64_t)value_2 >> 0x20);
    data_pointer_4 = NULL;
    buffer_2 = NULL;
    data_pointer_5 = NULL;
    trace_argument_1 = NULL;
    trace_argument_3 = NULL;
    data_pointer_2 = NULL;
    process_context = NULL;
    value_5 = 0;
    data_pointer = buffer_2;
    process_context_2 = data_pointer_5;
    allocation = trace_argument_1;
    data_pointer_6 = input;
    if (!input || !input_3)
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            goto block_3;
        }
        value_12 = 0x25;
        value_3 = ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INVALID_PARAMETER & 0xffffffffULL;
        goto block_2;
    }
    *input_3 = 0;
    value_10 = *(uint32_t *)(MpData + 0x364) & 0x40;
    enabled = value_10 != 0;
    if (!(input_2 & 0x10) && (data_pointer = data_pointer_4, process_context_2 = data_pointer_4, allocation = data_pointer_4, !value_10 || (data_pointer = buffer_2, process_context_2 = data_pointer_5, allocation = trace_argument_1, !(input_2 >> 0x18 & 2))))
    {
        goto block_3;
    }
    if (input_5)
    {
        trace_argument_3 = input_5;
        data_pointer_3 = data_pointer_4;
        trace_argument_1 = input_5;
        block_1:
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            WPP_SF_Z(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x27, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), trace_argument_1);
        }

        value = 0x10;
        enabled_2 = (*(uint32_t *)(MpData + 0x364) & 8) != 0;
        if (enabled_2)
        {
            value = 0x100010;
        }
        WdStoreField(&value_6, 0, 4, (uint64_t)(((uint64_t)(((((enabled * '\x02' | enabled) << 3 | enabled) * '\x02' | enabled) * '\x02' | enabled) * '\x02') & 0xffULL) << 24 | (uint64_t)value & 0xffffffULL));
        value_6 = (uint64_t)(((uint64_t)enabled_2 & 0xffULL) << 32 | (uint64_t)((uint32_t)value_6) & 0xffffffffULL) | 0x200000000;
        value_8 = MpRegMatchData(trace_argument_3, NULL, value_6, &data_pointer_2);
        trace_argument_1 = data_pointer_2;
        if (0 <= value_8)
        {
            if (data_pointer_2)
            {
                byte_value = 0;
                byte_value_2 = '\0';
                if (((uint8_t *)data_pointer_2)[0x1a] & 0x10 || (data_pointer_5 = data_pointer_4, ((uint8_t *)data_pointer_2)[0x1c] & 1))
                {
                    MpGetProcessContextByObject(IoGetCurrentProcess(), &process_context);
                    data_pointer_5 = process_context;
                    byte_value = MpIsRegistryHardeningExemptByContext(process_context);
                    byte_value_2 = byte_value;
                }
                if (((uint8_t *)trace_argument_1)[0x1a] & 0x10)
                {
                    value_5 = 1;
                    if (data_pointer_5 && !byte_value)
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                        {
                            value_4 = (uint32_t)((uint64_t)data_pointer_5[0x10] >> 0x20);
                            WPP_SF_ZZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2a);
                        }
                        MpLogPrintfW(L"[Mini-filter] Denied registry key delete of [%wZ] triggered by process [%wZ].", trace_argument_3, data_pointer_5[0x10]);
                        *input_4 = '\x01';
                        *(uint8_t *)(&trace_argument_1[3]) = *(uint8_t *)(&trace_argument_1[3]) & 0xdf | 0x10;
                    }
                    else
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                        {
                            if (data_pointer_5)
                            {
                                value_4 = (uint32_t)((uint64_t)data_pointer_5[0x10] >> 0x20);
                            }
                            else
                            {
                                value_4 = 0;
                            }
                            WPP_SF_ZZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2b);
                        }
                        *(uint8_t *)((int64_t)trace_argument_1 + 0x1a) = *(uint8_t *)((int64_t)trace_argument_1 + 0x1a) & 0xef;
                    }
                }
                byte_value = MpRegTPAllowChange(&trace_argument_1[3], trace_argument_3, &process_context);
                data_pointer_5 = process_context;
                if (byte_value)
                {
                    value_11 = value_5;
                }
                else
                {
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                    {
                        if (process_context)
                        {
                            value_4 = (uint32_t)((uint64_t)process_context[0x10] >> 0x20);
                        }
                        else
                        {
                            value_4 = 0;
                        }
                        WPP_SF_ZZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2c);
                    }
                    if (data_pointer_5)
                    {
                        value_9 = data_pointer_5[0x10];
                    }
                    else
                    {
                        value_9 = 0;
                    }
                    MpLogPrintfW(L"[Mini-filter][TP] Denied registry delete [%wZ] triggered by process [%wZ].", trace_argument_3, value_9);
                    value_11 = 2;
                    value_5 = 2;
                    *input_4 = '\x01';
                    *(uint8_t *)(&trace_argument_1[3]) = *(uint8_t *)(&trace_argument_1[3]) & 0xdf | 0x10;
                }
                if (*input_4 == '\x01')
                {
                    *(uint8_t *)((int64_t)trace_argument_1 + 0x1a) = *(uint8_t *)((int64_t)trace_argument_1 + 0x1a) | 0x10;
                }
                if ((int32_t)value_11)
                {
                    if ((int32_t)value_11 == 2 && data_pointer_5 && ((uint32_t *)data_pointer_5)[0xf] & 0x200)
                    {
                        value_11 = *input_4 == '\0';
                        MpTraceRegHardeningNotification(3, value_11, data_pointer_5, "RegNtPreDeleteKey", trace_argument_3, NULL, NULL);
                    }
                    data_pointer = trace_argument_3;
                    MpTraceRegHardeningNotification((value_5 == 2) + '\x01', ((uint64_t)((uint64_t)(value_11 >> 8)) & 0xffffffffffffffULL) << 8 | (uint64_t)(*input_4 == '\0') & 0xffULL, data_pointer_5, "RegNtPreDeleteKey", trace_argument_3, NULL, NULL);
                    value_4 = (uint32_t)((uint64_t)data_pointer >> 0x20);
                }
                if (((char *)trace_argument_1)[0x1b] < '\0')
                {
                    byte_value_3 = MpRegIsTamperProtectedLevelExempt(&process_context);
                    data_pointer_5 = process_context;
                    data_pointer = trace_argument_3;
                    MpTraceRegHardeningNotification(4, (uint8_t)byte_value_3, process_context, "RegNtPreDeleteKey", trace_argument_3, NULL, NULL);
                    value_4 = (uint32_t)((uint64_t)data_pointer >> 0x20);
                }
                if (((uint8_t *)trace_argument_1)[0x1c] & 1)
                {
                    data_pointer = trace_argument_3;
                    MpTraceRegHardeningNotification(5, (uint8_t)byte_value_2, data_pointer_5, "RegNtPreDeleteKey", trace_argument_3, NULL, NULL);
                    value_4 = (uint32_t)((uint64_t)data_pointer >> 0x20);
                }
                if (*input_4)
                {
                    buffer_2 = (int64_t *)ExAllocateFromPagedLookasideList((void *)(MpRegData + 0x40));
                    if (buffer_2)
                    {
                        memset(buffer_2, 0, (char *)0x78);
                        buffer_2[0xc] = (int64_t)trace_argument_1;
                        buffer_2[1] = (int64_t)trace_argument_3;
                        *buffer_2 = *data_pointer_6;
                        buffer_2[0xb] = trace_argument_1[3];
                        *(uint32_t *)(&buffer_2[0xd]) = value_5;
                        value_8 = MpRegpSendNotification(data_pointer_5, buffer_2);
                        if (value_8 <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            value_12 = 0x2f;
                            value_3 = ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)value_8 & 0xffffffffULL;
                            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_12, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), value_3);
                        }
                    }
                    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        value_12 = 0x2e;
                        value_3 = ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INSUFFICIENT_RESOURCES & 0xffffffffULL;
                        block_2:
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_12, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), value_3);
                    }
                }
                else
                {
                    value_9 = MpRegpAllocDeleteKeyContext();
                    if (value_9)
                    {
                        *(int64_t **)(value_9 + 0x28) = trace_argument_3;
                        trace_argument_3 = NULL;
                        *(int64_t **)(value_9 + 0x30) = trace_argument_1;
                        trace_argument_1 = NULL;
                        *input_3 = value_9;
                    }
                    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        value_12 = 0x2d;
                        value_3 = ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INSUFFICIENT_RESOURCES & 0xffffffffULL;
                        buffer_2 = data_pointer_4;
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_12, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), value_3);
                    }
                }
            }
            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x29, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_UNSUCCESSFUL & 0xffffffffULL);
            }
        }
        else if (value_8 != -0x3ffffd8e)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x28, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)value_8 & 0xffffffffULL);
            }
            trace_argument_1 = data_pointer_2;
        }
        else
        {
            buffer_2 = data_pointer_4;
            data_pointer_5 = data_pointer_4;
        }
    }
    else
    {
        value_8 = MpRegpGetKeyName(*input, &trace_argument_3);
        if (0 <= value_8)
        {
            trace_argument_1 = trace_argument_3;
            goto block_1;
        }
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            value_12 = 0x26;
            value_3 = ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)value_8 & 0xffffffffULL;
            data_pointer_5 = data_pointer_4;
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_12, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), value_3);
        }
    }
    data_pointer_4 = trace_argument_3;
    data_pointer = buffer_2;
    process_context_2 = data_pointer_5;
    allocation = trace_argument_1;
    if (trace_argument_3)
    {
        if (*(int64_t *)(MpRegData + 0x28))
        {
            (*__guard_dispatch_icall_fptr)(trace_argument_3);
        }
        else
        {
            if (trace_argument_3[2])
            {
                ExFreePoolWithTag(trace_argument_3[2], 0x4b72504d);
            }
            ExFreeToPagedLookasideList((void *)(MpRegData + 0x400), data_pointer_4);
        }
        trace_argument_3 = NULL;
    }
    block_3:
    if (data_pointer_3)
    {
        if (*(int64_t *)(MpRegData + 0x28))
        {
            (*__guard_dispatch_icall_fptr)(data_pointer_3);
        }
        else
        {
            if (data_pointer_3[2])
            {
                ExFreePoolWithTag(data_pointer_3[2], 0x4b72504d);
            }
            ExFreeToPagedLookasideList((void *)(MpRegData + 0x400), data_pointer_3);
        }
    }

    if (allocation)
    {
        MpRegFreeMatchingInfo(allocation);
    }
    if (data_pointer)
    {
        ExFreeToPagedLookasideList((void *)(MpRegData + 0x40), data_pointer);
    }
    if (process_context_2)
    {
        MpReleaseProcessContext(process_context_2);
    }
    return;
}

void MpRegPreDeleteValueKey(WD_LAYOUT_95 *input, uint64_t input_2, int64_t *input_3, char *input_4, void *input_5)
{
    uint32_t value;
    void *trace_argument_3;
    void *data_pointer;
    void *data_pointer_2;
    void *process_context;
    void *data_pointer_3;
    uint32_t values[2];
    void *value_name;
    void *allocation;
    uint32_t value_2;
    char byte_value;
    uint16_t *trace_argument_1;
    void *data_pointer_4;
    void *data_pointer_5;
    void *allocation_2;
    void *process_context_2;
    void *data_pointer_6;
    void *data_pointer_7;
    void *allocation_3;
    void *data_pointer_8;
    char byte_value_2;
    bool enabled;
    bool enabled_2;
    uint64_t value_3;
    uint64_t value_4;
    uint32_t value_5;
    char byte_value_3;
    char byte_value_4;
    uint32_t value_6;
    uint64_t value_7;
    char *bytes;
    int32_t value_8;
    int64_t *buffer_2;
    int64_t value_10;
    uint32_t value_11;
    char *bytes_2;
    uint64_t provider;
    uint64_t value_12;
    data_pointer_8 = input_5;
    value_5 = (uint32_t)((uint64_t)value_3 >> 0x20);
    data_pointer_4 = NULL;
    trace_argument_3 = NULL;
    data_pointer = NULL;
    value_name = NULL;
    buffer_2 = NULL;
    data_pointer_7 = NULL;
    data_pointer_2 = NULL;
    data_pointer_5 = NULL;
    data_pointer_3 = NULL;
    process_context_2 = NULL;
    process_context = NULL;
    values[0] = 0;
    value_6 = 0;
    allocation = value_name;
    allocation_2 = data_pointer_5;
    data_pointer_6 = process_context_2;
    allocation_3 = data_pointer_7;
    bytes = input_4;
    if (input)
    {
        if (!input_3)
        {
            goto block_6;
        }
        *input_3 = 0;
        value_11 = *(uint32_t *)(MpData + 0x364) & 0x40;
        enabled = value_11 != 0;
        value_2 = *(uint32_t *)(MpData + 0x364) & 0x200;
        if (input_2 >> 8 & 8 || value_11 && input_2 >> 0x18 & 2 || (allocation = data_pointer_4, allocation_2 = data_pointer_4, data_pointer_6 = data_pointer_4, allocation_3 = data_pointer_4, value_2 && (input_2 >> 0x18 & 0x10 || (allocation = value_name, allocation_2 = data_pointer_5, data_pointer_6 = process_context_2, allocation_3 = data_pointer_7, input_2 & 0x20000000))))
        {
            if (!input_5)
            {
                value_8 = MpRegpGetKeyName(input->field_0x0, &trace_argument_3);
                if (0 <= value_8)
                {
                    goto block_1;
                }
                allocation = data_pointer_4;
                allocation_2 = data_pointer_4;
                data_pointer_6 = data_pointer_4;
                allocation_3 = data_pointer_4;
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || (allocation = value_name, allocation_2 = data_pointer_5, data_pointer_6 = process_context_2, allocation_3 = data_pointer_7, !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)))
                {
                    goto block_5;
                }
                provider = 0x4f;
                value_4 = ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)value_8 & 0xffffffffULL;
                value_name = data_pointer_4;
                data_pointer_5 = data_pointer_4;
                process_context_2 = data_pointer_4;
                data_pointer_7 = data_pointer_4;
                goto block_4;
            }
            trace_argument_3 = input_5;
            data_pointer_8 = data_pointer_4;
            block_1:
            value_8 = MpRegpCopyUnicodeString(input->field_0x8, &data_pointer);

            value_name = data_pointer;
            if (0 <= value_8)
            {
                value = 0x800;
                enabled_2 = (*(uint32_t *)(MpData + 0x364) & 8) != 0;
                if (enabled_2)
                {
                    value = 0x100800;
                }
                WdStoreField(&value_7, 0, 4, (uint64_t)(((uint64_t)(((((((enabled * '\x02' | enabled) * '\x02' | value_2 != 0) * '\x02' | value_2 != 0) * '\x02' | enabled) * '\x02' | enabled) * '\x02' | enabled) * '\x02') & 0xffULL) << 24 | (uint64_t)value & 0xffffffULL));
                value_7 = (uint64_t)(((uint64_t)enabled_2 & 0xffULL) << 32 | (uint64_t)((uint32_t)value_7) & 0xffffffffULL) | 0x200000000;
                value_8 = MpRegMatchData(trace_argument_3, data_pointer, value_7, &data_pointer_2);
                data_pointer_7 = data_pointer_2;
                allocation = value_name;
                allocation_3 = data_pointer_7;
                if (value_8 <= -1)
                {
                    if (value_8 != -0x3ffffd8e)
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x51, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)value_8 & 0xffffffffULL);
                        }
                        allocation_2 = data_pointer_5;
                        data_pointer_6 = process_context_2;
                        allocation_3 = data_pointer_2;
                    }
                    else
                    {
                        allocation_2 = data_pointer_5;
                        data_pointer_6 = process_context_2;
                    }
                    goto block_5;
                }
                if (!data_pointer_2)
                {
                    allocation_2 = data_pointer_5;
                    data_pointer_6 = process_context_2;
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x52, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_UNSUCCESSFUL & 0xffffffffULL);
                    }
                    goto block_5;
                }
                byte_value = 0;
                byte_value_4 = '\0';
                if (((uint8_t *)data_pointer_2)[0x1a] & 0x10 || (process_context_2 = data_pointer_4, ((uint8_t *)data_pointer_2)[0x1c] & 1))
                {
                    MpGetProcessContextByObject(IoGetCurrentProcess(), &process_context);
                    process_context_2 = process_context;
                    byte_value = MpIsRegistryHardeningExemptByContext(process_context);
                    byte_value_4 = byte_value;
                }
                if (((uint8_t *)data_pointer_7)[0x1a] & 0x10)
                {
                    value_6 = 1;
                    if (process_context_2 && !byte_value)
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                        {
                            value_5 = (uint32_t)((uint64_t)input->field_0x8 >> 0x20);
                            WPP_SF_ZZZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x53);
                        }
                        MpLogPrintfW(L"[Mini-filter] Denied registry keyvalue delete of [%wZ@%wZ] triggered by process [%wZ].", trace_argument_3, input->field_0x8, ((uint64_t *)process_context_2)[0x10]);
                        *bytes = '\x01';
                        ((uint8_t *)data_pointer_7)[0x19] = ((uint8_t *)data_pointer_7)[0x19] & 0xcf | 8;
                    }
                    else
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                        {
                            value_5 = (uint32_t)((uint64_t)input->field_0x8 >> 0x20);
                            WPP_SF_ZZZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x54);
                        }
                        *(uint8_t *)((int64_t)data_pointer_7 + 0x1a) = *(uint8_t *)((int64_t)data_pointer_7 + 0x1a) & 0xef;
                    }
                }
                byte_value = MpRegTPAllowChange((void *)((int64_t)data_pointer_7 + 0x18), trace_argument_3, &process_context);
                process_context_2 = process_context;
                if (byte_value)
                {
                    value_12 = value_6;
                }
                else
                {
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                    {
                        value_5 = (uint32_t)((uint64_t)input->field_0x8 >> 0x20);
                        WPP_SF_ZZZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x55);
                    }
                    if (process_context_2)
                    {
                        provider = ((uint64_t *)process_context_2)[0x10];
                    }
                    else
                    {
                        provider = 0;
                    }
                    MpLogPrintfW(L"[Mini-filter][TP] Denied registry value delete [%wZ\\%wZ] triggered by process [%wZ].", trace_argument_3, input->field_0x8, provider);
                    value_12 = 2;
                    value_6 = 2;
                    *bytes = '\x01';
                    ((uint8_t *)data_pointer_7)[0x19] = ((uint8_t *)data_pointer_7)[0x19] & 0xcf | 8;
                }
                byte_value_3 = 0;
                if (((uint8_t *)data_pointer_7)[0x1b] & 0x30)
                {
                    if (process_context_2)
                    {
                        block_2:
                        if (((uint32_t *)process_context_2)[0xf] & 0x20 || *(uint32_t *)(MpData + 0x364) >> 0x13 & 1 && ((int32_t *)process_context_2)[0x3c] == 0x13 || ((uint8_t)((uint32_t *)process_context_2)[0x49] & 0xf) != 1 && !((int32_t *)process_context_2)[0x4a])
                        {
                            byte_value_3 = 1;
                            goto block_3;
                        }
                    }
                    else
                    {
                        MpGetProcessContextByObject(IoGetCurrentProcess(), &process_context);
                        process_context_2 = process_context;
                        if (process_context)
                        {
                            value_12 = value_6;
                            goto block_2;
                        }
                    }
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                    {
                        if (process_context_2)
                        {
                            provider = ((uint64_t *)process_context_2)[0x10];
                        }
                        else
                        {
                            provider = 0;
                        }
                        trace_argument_1 = L"Denied";
                        if (!(((uint8_t *)data_pointer_7)[0x1b] & 0x10))
                        {
                            trace_argument_1 = L"Ignored";
                        }
                        WPP_SF_SZZZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x56, provider, trace_argument_1, trace_argument_3, input->field_0x8, provider);
                    }
                    trace_argument_1 = L"Denied";
                    if (process_context_2)
                    {
                        provider = ((uint64_t *)process_context_2)[0x10];
                    }
                    else
                    {
                        provider = 0;
                    }
                    if (!(((uint8_t *)data_pointer_7)[0x1b] & 0x10))
                    {
                        trace_argument_1 = L"Ignored";
                    }
                    MpLogPrintfW(L"[Mini-filter][TPv2] %ls registry value delete [%wZ\\%wZ] triggered by process [%wZ].", trace_argument_1, trace_argument_3, input->field_0x8, provider);
                    value_5 = (uint32_t)((uint64_t)provider >> 0x20);
                    if (((uint8_t *)data_pointer_7)[0x1b] & 0x10)
                    {
                        value_12 = 2;
                        value_6 = 2;
                        *bytes = '\x01';
                        ((uint8_t *)data_pointer_7)[0x19] = ((uint8_t *)data_pointer_7)[0x19] & 0xcf | 8;
                    }
                    else
                    {
                        value_12 = value_6;
                    }
                }
                block_3:
                if (*bytes == '\x01')
                {
                    *(uint8_t *)((int64_t)data_pointer_7 + 0x1a) = *(uint8_t *)((int64_t)data_pointer_7 + 0x1a) | 0x10;
                }

                if ((int32_t)value_12)
                {
                    bytes_2 = bytes;
                    if ((int32_t)value_12 == 2 && process_context_2 && ((uint32_t *)process_context_2)[0xf] & 0x200)
                    {
                        value_12 = *bytes == '\0';
                        MpTraceRegHardeningNotification(3, value_12, process_context_2, "RegNtPreDeleteValueKey", trace_argument_3, NULL, value_name);
                        bytes_2 = bytes;
                    }
                    allocation_2 = trace_argument_3;
                    MpTraceRegHardeningNotification((value_6 == 2) + '\x01', ((uint64_t)((uint64_t)(value_12 >> 8)) & 0xffffffffffffffULL) << 8 | (uint64_t)(*bytes_2 == '\0') & 0xffULL, process_context_2, "RegNtPreDeleteValueKey", trace_argument_3, NULL, value_name);
                    value_5 = (uint32_t)((uint64_t)allocation_2 >> 0x20);
                }
                if (((char *)data_pointer_7)[0x1b] < '\0')
                {
                    byte_value_2 = MpRegIsTamperProtectedLevelExempt(&process_context);
                    process_context_2 = process_context;
                    allocation_2 = trace_argument_3;
                    MpTraceRegHardeningNotification(4, (uint8_t)byte_value_2, process_context, "RegNtPreDeleteValueKey", trace_argument_3, NULL, value_name);
                    value_5 = (uint32_t)((uint64_t)allocation_2 >> 0x20);
                }
                if (((uint8_t *)data_pointer_7)[0x1c] & 1)
                {
                    allocation_2 = trace_argument_3;
                    MpTraceRegHardeningNotification(5, (uint8_t)byte_value_4, process_context_2, "RegNtPreDeleteValueKey", trace_argument_3, NULL, value_name);
                    value_5 = (uint32_t)((uint64_t)allocation_2 >> 0x20);
                }
                data_pointer_5 = data_pointer_4;
                data_pointer_6 = process_context_2;
                if (((char *)data_pointer_7)[0x10] == '\x01')
                {
                    value_8 = MpRegpQueryValueKeyByPointer(input->field_0x0, value_name, values, &data_pointer_3);
                    if (!(value_8 + 0x80000000U & 0x80000000) && value_8 != -0x3fffffcc)
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x57, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)value_8 & 0xffffffffULL);
                        }
                        allocation_2 = data_pointer_3;
                        goto block_5;
                    }
                    data_pointer_5 = data_pointer_3;
                }
                allocation_2 = data_pointer_5;
                if (*bytes != '\x01')
                {
                    value_10 = (int64_t)MpRegpAllocDeleteValueContext();
                    if (value_10)
                    {
                        *(void **)(value_10 + 0x40) = data_pointer_7;
                        *(void **)(value_10 + 0x28) = trace_argument_3;
                        *(char *)(value_10 + 0x48) = byte_value_3;
                        *(void **)(value_10 + 0x30) = value_name;
                        *(void **)(value_10 + 0x38) = data_pointer_5;
                        trace_argument_3 = NULL;
                        *input_3 = value_10;
                        goto block_7;
                    }
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        provider = 0x5a;
                        value_4 = ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INSUFFICIENT_RESOURCES & 0xffffffffULL;
                        goto block_4;
                    }
                    goto block_5;
                }
                buffer_2 = (int64_t *)ExAllocateFromPagedLookasideList((void *)(MpRegData + 0x40));
                if (buffer_2)
                {
                    memset(buffer_2, 0, (char *)0x78);
                    buffer_2[0xc] = (int64_t)data_pointer_7;
                    buffer_2[1] = (int64_t)trace_argument_3;
                    buffer_2[2] = (int64_t)value_name;
                    *buffer_2 = input->field_0x0;
                    buffer_2[0xb] = ((int64_t *)data_pointer_7)[3];
                    *(uint32_t *)(&buffer_2[0xd]) = value_6;
                    ((char *)buffer_2)[0x6c] = byte_value_3;
                    if (data_pointer_5)
                    {
                        ((uint32_t *)buffer_2)[0xd] = ((uint32_t *)data_pointer_5)[2];
                        buffer_2[7] = (int64_t)data_pointer_5 + 0xc;
                        *(uint32_t *)(&buffer_2[6]) = ((uint32_t *)data_pointer_5)[1];
                    }
                    value_8 = MpRegpSendNotification(process_context_2, buffer_2);
                    if (value_8 <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        provider = 0x59;
                        value_4 = ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)value_8 & 0xffffffffULL;
                        goto block_4;
                    }
                    goto block_5;
                }
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    goto block_5;
                }
                provider = 0x58;
                value_4 = ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INSUFFICIENT_RESOURCES & 0xffffffffULL;
                goto block_4;
            }
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x50, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)value_8 & 0xffffffffULL);
            }
            allocation = data_pointer;
            allocation_2 = data_pointer_5;
            data_pointer_6 = process_context_2;
            allocation_3 = data_pointer_7;
            goto block_5;
        }
    }
    else
    {
        if (input_3)
        {
            *input_3 = 0;
        }
        block_6:
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            provider = 0x4e;
            value_4 = ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INVALID_PARAMETER & 0xffffffffULL;
            block_4:
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), provider, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), value_4);

            allocation = value_name;
            allocation_2 = data_pointer_5;
            data_pointer_6 = process_context_2;
            allocation_3 = data_pointer_7;
            block_5:
            process_context_2 = trace_argument_3;

            if (trace_argument_3)
            {
                if (*(int64_t *)(MpRegData + 0x28))
                {
                    (*__guard_dispatch_icall_fptr)(trace_argument_3);
                }
                else
                {
                    if (((int64_t *)trace_argument_3)[2])
                    {
                        ExFreePoolWithTag(((int64_t *)trace_argument_3)[2], 0x4b72504d);
                    }
                    ExFreeToPagedLookasideList((void *)(MpRegData + 0x400), process_context_2);
                }
                trace_argument_3 = NULL;
            }
        }
    }
    process_context_2 = data_pointer_6;
    if (data_pointer_8)
    {
        if (*(int64_t *)(MpRegData + 0x28))
        {
            (*__guard_dispatch_icall_fptr)(data_pointer_8);
        }
        else
        {
            if (((int64_t *)data_pointer_8)[2])
            {
                ExFreePoolWithTag(((int64_t *)data_pointer_8)[2], 0x4b72504d);
            }
            ExFreeToPagedLookasideList((void *)(MpRegData + 0x400), data_pointer_8);
        }
    }
    if (allocation)
    {
        ExFreePoolWithTag(allocation, 0x5364504d);
    }
    if (allocation_2)
    {
        ExFreePoolWithTag(allocation_2, 0x5672504d);
    }
    if (allocation_3)
    {
        MpRegFreeMatchingInfo(allocation_3);
    }
    if (buffer_2)
    {
        ExFreeToPagedLookasideList((void *)(MpRegData + 0x40), buffer_2);
    }
    block_7:
    if (process_context_2)
    {
        MpReleaseProcessContext(process_context_2);
    }

    return;
}

void MpRegPreSetValueKey(WD_LAYOUT_96 *input, uint64_t input_2, int64_t *input_3, char *input_4, int64_t *input_5)
{
    WD_LAYOUT_65 *source_name;
    uint32_t value;
    int64_t *data_pointer;
    char *bytes;
    uint64_t value_2;
    uint64_t value_3;
    int64_t *data_pointer_2;
    int64_t *data_pointer_3;
    int64_t *trace_argument_3;
    int64_t *process_context;
    uint32_t value_4;
    int64_t *data_pointer_4;
    uint32_t values[2];
    uint64_t value_5;
    int64_t *data_pointer_5;
    int64_t *allocation;
    uint32_t value_6;
    uint16_t *trace_argument_1;
    int64_t *data_pointer_6;
    int64_t *allocation_2;
    int64_t *process_context_2;
    bool enabled;
    int64_t *data_pointer_7;
    bool enabled_2;
    bool enabled_3;
    uint64_t value_7;
    uint64_t value_8;
    uint32_t value_9;
    char byte_value;
    char byte_value_2;
    uint32_t value_10;
    int64_t *data_pointer_8;
    uint64_t value_11;
    char *bytes_2;
    int64_t *data_pointer_9;
    int64_t *data_pointer_10;
    int64_t value_12;
    char byte_value_3;
    char byte_value_4;
    int32_t value_14;
    int64_t provider;
    int64_t *buffer_2;
    data_pointer_7 = input_5;
    value_9 = (uint32_t)((uint64_t)value_7 >> 0x20);
    data_pointer = NULL;
    trace_argument_3 = NULL;
    data_pointer_3 = NULL;
    data_pointer_9 = NULL;
    data_pointer_5 = NULL;
    data_pointer_4 = NULL;
    data_pointer_2 = NULL;
    process_context = NULL;
    data_pointer_6 = NULL;
    values[0] = 0;
    process_context_2 = NULL;
    value_10 = 0;
    enabled = 0;
    value_5 = 0;
    value_12 = 0;
    buffer_2 = data_pointer_2;
    allocation = data_pointer_5;
    allocation_2 = data_pointer_6;
    data_pointer_8 = process_context_2;
    bytes_2 = input_4;
    data_pointer_10 = input_3;
    if (input)
    {
        if (!input_3)
        {
            goto block_10;
        }
        *input_3 = 0;
        value = *(uint32_t *)(MpData + 0x364) & 0x40;
        enabled_2 = value != 0;
        value_6 = *(uint32_t *)(MpData + 0x364) & 0x200;
        value_3 = value_6;
        if (input_2 >> 8 & 1 || value && input_2 >> 0x18 & 2)
        {
            block_2:
            if (!input_5)
            {
                value_14 = MpRegpGetKeyName(input->field_0x0, &trace_argument_3);
                if (0 <= value_14)
                {
                    goto block_3;
                }
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4))
                {
                    goto block_9;
                }
                value_2 = 0x37;
                data_pointer_6 = data_pointer;
                process_context_2 = data_pointer;
                block_1:
                value_8 = ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)value_14 & 0xffffffffULL;

                goto block_7;
            }

            trace_argument_3 = input_5;
            data_pointer_7 = data_pointer;
            block_3:
            if (*(uint32_t *)(MpData + 0x364) >> 10 & 1 && input->field_0x14 == 6 && (source_name = input->field_0x8, !RtlCompareUnicodeString(source_name, WD_SYMBOL_ADDRESS(RegSymLinkValue), (uint64_t)value_3 & 0xffffffffffffff00 | (uint64_t)1 & 0xff)))
            {
                value_12 = input->field_0x18;
                WdStoreField(&value_5, 0, 4, (uint64_t)(((uint64_t)(*(uint16_t *)(&input->field_0x20)) & 0xffffULL) << 16 | (uint64_t)(*(uint16_t *)(&input->field_0x20)) & 0xffffULL));
                value_14 = RtlUnicodeStringValidateWorker(&value_5, 0x7fff, 0);
                if (0 <= value_14)
                {
                    enabled = 1;
                }
                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                {
                    value_2 = ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)value_14 & 0xffffffffULL;
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x38, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), value_2);
                    value_9 = (uint32_t)((uint64_t)value_2 >> 0x20);
                }
            }

            value_4 = 0x100;
            enabled_3 = (*(uint32_t *)(MpData + 0x364) & 8) != 0;
            if (enabled_3)
            {
                value_4 = 0x200100;
            }
            WdStoreField(&value_11, 0, 4, (uint64_t)(((uint64_t)(((((((enabled_2 * '\x02' | enabled_2) * '\x02' | value_6 != 0) * '\x02' | value_6 != 0) * '\x02' | enabled_2) * '\x02' | enabled_2) * '\x02' | enabled_2) * '\x02') & 0xffULL) << 24 | (uint64_t)value_4 & 0xffffffULL));
            value_11 = (uint64_t)(((uint64_t)enabled_3 & 0xffULL) << 32 | (uint64_t)((uint32_t)value_11) & 0xffffffffULL) | 0x200000000;
            value_14 = MpRegMatchData(trace_argument_3, input->field_0x8, value_11, &data_pointer_3);
            data_pointer_5 = data_pointer_3;
            if (0 <= value_14 || enabled)
            {
                if (!data_pointer_3)
                {
                    if (!enabled)
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x3b, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_UNSUCCESSFUL & 0xffffffffULL);
                        }
                        goto block_9;
                    }
                    value_14 = MpRegMatchData(&value_5, input->field_0x8, value_11, &data_pointer_3);
                    if (value_14 <= -1)
                    {
                        if (value_14 != -0x3ffffd8e)
                        {
                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                            {
                                value_2 = 0x3a;
                                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)value_14 & 0xffffffffULL);
                            }
                            goto block_6;
                        }
                        data_pointer_5 = data_pointer_3;
                        goto block_8;
                    }
                }
                data_pointer_5 = data_pointer_3;
                byte_value_3 = 0;
                byte_value_2 = '\0';
                if (((uint8_t *)data_pointer_3)[0x1a] & 0x20 || (process_context_2 = data_pointer, ((uint8_t *)data_pointer_3)[0x1c] & 1))
                {
                    MpGetProcessContextByObject(IoGetCurrentProcess(), &process_context);
                    process_context_2 = process_context;
                    byte_value_3 = MpIsRegistryHardeningExemptByContext(process_context);
                    byte_value_2 = byte_value_3;
                }
                if (((uint8_t *)data_pointer_5)[0x1a] & 0x20)
                {
                    value_10 = 1;
                    if (process_context_2 && !byte_value_3)
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                        {
                            value_9 = (uint32_t)((uint64_t)input->field_0x8 >> 0x20);
                            WPP_SF_ZZZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x3c);
                        }
                        MpLogPrintfW(L"[Mini-filter] Denied registry access to [%wZ@%wZ] triggered by process [%wZ].", trace_argument_3, input->field_0x8, process_context_2[0x10]);
                        *bytes_2 = '\x01';
                        ((uint8_t *)data_pointer_5)[0x19] = ((uint8_t *)data_pointer_5)[0x19] & 0xf9 | 1;
                    }
                    else
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                        {
                            value_9 = (uint32_t)((uint64_t)input->field_0x8 >> 0x20);
                            WPP_SF_ZZZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x3d);
                        }
                        *(uint8_t *)((int64_t)data_pointer_5 + 0x1a) = *(uint8_t *)((int64_t)data_pointer_5 + 0x1a) & 0xdf;
                    }
                }
                byte_value_3 = MpRegTPAllowChange(&data_pointer_5[3], trace_argument_3, &process_context);
                process_context_2 = process_context;
                if (byte_value_3)
                {
                    value_3 = value_10;
                }
                else
                {
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                    {
                        value_9 = (uint32_t)((uint64_t)input->field_0x8 >> 0x20);
                        WPP_SF_ZZZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x3e);
                    }
                    if (process_context_2)
                    {
                        provider = process_context_2[0x10];
                    }
                    else
                    {
                        provider = 0;
                    }
                    MpLogPrintfW(L"[Mini-filter][TP] Denied registry value change [%wZ\\%wZ] triggered by process [%wZ].", trace_argument_3, input->field_0x8, provider);
                    value_3 = 2;
                    value_10 = 2;
                    *bytes_2 = '\x01';
                    ((uint8_t *)data_pointer_5)[0x19] = ((uint8_t *)data_pointer_5)[0x19] & 0xf9 | 1;
                }
                byte_value = 0;
                if (((uint8_t *)data_pointer_5)[0x1b] & 0x30)
                {
                    if (process_context_2)
                    {
                        block_4:
                        if (((uint32_t *)process_context_2)[0xf] & 0x20 || *(uint32_t *)(MpData + 0x364) >> 0x13 & 1 && *(int32_t *)(&process_context_2[0x1e]) == 0x13 || ((uint8_t)((uint32_t *)process_context_2)[0x49] & 0xf) != 1 && !(*(int32_t *)(&process_context_2[0x25])))
                        {
                            byte_value = 1;
                            goto block_5;
                        }
                    }
                    else
                    {
                        MpGetProcessContextByObject(IoGetCurrentProcess(), &process_context);
                        process_context_2 = process_context;
                        if (process_context)
                        {
                            value_3 = value_10;
                            goto block_4;
                        }
                    }
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                    {
                        if (process_context_2)
                        {
                            provider = process_context_2[0x10];
                        }
                        else
                        {
                            provider = 0;
                        }
                        trace_argument_1 = L"Denied";
                        if (!(((uint8_t *)data_pointer_5)[0x1b] & 0x10))
                        {
                            trace_argument_1 = L"Ignored";
                        }
                        WPP_SF_SZZZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x3f, provider, trace_argument_1, trace_argument_3, input->field_0x8, provider);
                    }
                    trace_argument_1 = L"Denied";
                    if (process_context_2)
                    {
                        provider = process_context_2[0x10];
                    }
                    else
                    {
                        provider = 0;
                    }
                    if (!(((uint8_t *)data_pointer_5)[0x1b] & 0x10))
                    {
                        trace_argument_1 = L"Ignored";
                    }
                    MpLogPrintfW(L"[Mini-filter][TPv2] %ls registry value change [%wZ\\%wZ] triggered by process [%wZ].", trace_argument_1, trace_argument_3, input->field_0x8, provider);
                    value_9 = (uint32_t)((uint64_t)provider >> 0x20);
                    if (((uint8_t *)data_pointer_5)[0x1b] & 0x10)
                    {
                        value_3 = 2;
                        value_10 = 2;
                        *bytes_2 = '\x01';
                        ((uint8_t *)data_pointer_5)[0x19] = ((uint8_t *)data_pointer_5)[0x19] & 0xf9 | 1;
                    }
                    else
                    {
                        value_3 = value_10;
                    }
                }
                block_5:
                if (*bytes_2 == '\x01')
                {
                    *(uint8_t *)((int64_t)data_pointer_5 + 0x1a) = *(uint8_t *)((int64_t)data_pointer_5 + 0x1a) | 0x20;
                }

                if ((int32_t)value_3)
                {
                    bytes = bytes_2;
                    if ((int32_t)value_3 == 2 && process_context_2 && ((uint32_t *)process_context_2)[0xf] & 0x200)
                    {
                        value_3 = *bytes_2 == '\0';
                        MpTraceRegHardeningNotification(3, value_3, process_context_2, "RegNtPreSetValueKey", trace_argument_3, NULL, input->field_0x8);
                        bytes = bytes_2;
                    }
                    buffer_2 = trace_argument_3;
                    MpTraceRegHardeningNotification((value_10 == 2) + '\x01', ((uint64_t)((uint64_t)(value_3 >> 8)) & 0xffffffffffffffULL) << 8 | (uint64_t)(*bytes == '\0') & 0xffULL, process_context_2, "RegNtPreSetValueKey", trace_argument_3, NULL, input->field_0x8);
                    value_9 = (uint32_t)((uint64_t)buffer_2 >> 0x20);
                }
                if (((char *)data_pointer_5)[0x1b] < '\0')
                {
                    byte_value_4 = MpRegIsTamperProtectedLevelExempt(&process_context);
                    process_context_2 = process_context;
                    buffer_2 = trace_argument_3;
                    MpTraceRegHardeningNotification(4, (uint8_t)byte_value_4, process_context, "RegNtPreSetValueKey", trace_argument_3, NULL, input->field_0x8);
                    value_9 = (uint32_t)((uint64_t)buffer_2 >> 0x20);
                }
                if (((uint8_t *)data_pointer_5)[0x1c] & 1)
                {
                    buffer_2 = trace_argument_3;
                    MpTraceRegHardeningNotification(5, (uint8_t)byte_value_2, process_context_2, "RegNtPreSetValueKey", trace_argument_3, NULL, input->field_0x8);
                    value_9 = (uint32_t)((uint64_t)buffer_2 >> 0x20);
                }
                data_pointer_6 = data_pointer;
                if (*(char *)(&data_pointer_5[2]) == '\x01')
                {
                    value_14 = MpRegpQueryValueKeyByPointer(input->field_0x0, input->field_0x8, values, &data_pointer_4);
                    if (!(value_14 + 0x80000000U & 0x80000000) && value_14 != -0x3fffffcc)
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x40, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)value_14 & 0xffffffffULL);
                        }
                        data_pointer_6 = data_pointer_4;
                        goto block_8;
                    }
                    data_pointer_6 = data_pointer_4;
                }
                data_pointer = data_pointer_5;
                if (*bytes_2 != '\x01')
                {
                    provider = (int64_t)MpRegpAllocSetValueContext();
                    if (provider)
                    {
                        *(int64_t **)(provider + 0x40) = data_pointer_5;
                        *(int64_t **)(provider + 0x28) = trace_argument_3;
                        *(int64_t **)(provider + 0x30) = data_pointer_6;
                        *(uint32_t *)(provider + 0x38) = input->field_0x14;
                        *(char *)(provider + 0x48) = byte_value;
                        trace_argument_3 = NULL;
                        *data_pointer_10 = provider;
                        goto block_12;
                    }
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                    {
                        if (*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            value_2 = 0x43;
                            value_8 = ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INSUFFICIENT_RESOURCES & 0xffffffffULL;
                            goto block_7;
                        }
                    }
                }
                else
                {
                    buffer_2 = (int64_t *)ExAllocateFromPagedLookasideList((void *)(MpRegData + 0x40));
                    data_pointer_9 = buffer_2;
                    if (buffer_2)
                    {
                        memset(buffer_2, 0, (char *)0x78);
                        buffer_2[0xc] = (int64_t)data_pointer_5;
                        buffer_2[1] = (int64_t)trace_argument_3;
                        buffer_2[2] = (int64_t)input->field_0x8;
                        *buffer_2 = input->field_0x0;
                        buffer_2[0xb] = data_pointer_5[3];
                        *(uint32_t *)(&buffer_2[8]) = input->field_0x14;
                        *(uint32_t *)(&buffer_2[0xd]) = value_10;
                        ((char *)buffer_2)[0x6c] = byte_value;
                        if (*(char *)(&data_pointer_5[2]) == '\x01')
                        {
                            ((uint32_t *)buffer_2)[0x11] = input->field_0x20;
                            buffer_2[10] = input->field_0x18;
                            if (data_pointer_6)
                            {
                                ((uint32_t *)buffer_2)[0xd] = *(uint32_t *)(&data_pointer_6[1]);
                                buffer_2[7] = (int64_t)data_pointer_6 + 0xc;
                                *(uint32_t *)(&buffer_2[6]) = ((uint32_t *)data_pointer_6)[1];
                            }
                        }
                        value_14 = MpRegpSendNotification(process_context_2, buffer_2);
                        if (value_14 <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            value_2 = 0x42;
                            goto block_1;
                        }
                    }
                    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        value_2 = 0x41;
                        value_8 = ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INSUFFICIENT_RESOURCES & 0xffffffffULL;
                        goto block_7;
                    }
                }
                goto block_9;
            }
            if (value_14 != -0x3ffffd8e)
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    value_2 = 0x39;
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)value_14 & 0xffffffffULL);
                }
                block_6:
                data_pointer_5 = data_pointer_3;

                data_pointer_6 = data_pointer;
                process_context_2 = data_pointer;
                goto block_9;
            }
            data_pointer_6 = data_pointer;
            process_context_2 = data_pointer;
            goto block_8;
        }
        buffer_2 = data_pointer;
        allocation = data_pointer;
        allocation_2 = data_pointer;
        data_pointer_8 = data_pointer;
        if (value_6)
        {
            if (!(input_2 >> 0x18 & 0x10))
            {
                buffer_2 = data_pointer_2;
                allocation = data_pointer_5;
                allocation_2 = data_pointer_6;
                data_pointer_8 = process_context_2;
                if (!(input_2 & 0x20000000))
                {
                    goto block_11;
                }
            }
            goto block_2;
        }
    }
    else
    {
        if (input_3)
        {
            *input_3 = 0;
        }
        block_10:
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            value_2 = 0x36;
            value_8 = ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INVALID_PARAMETER & 0xffffffffULL;
            data_pointer_6 = data_pointer;
            process_context_2 = data_pointer;
            block_7:
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), value_8);

            data_pointer_5 = data_pointer;
            block_9:
            block_8:
            buffer_2 = trace_argument_3;


            if (trace_argument_3)
            {
                if (*(int64_t *)(MpRegData + 0x28))
                {
                    (*__guard_dispatch_icall_fptr)(trace_argument_3);
                }
                else
                {
                    if (trace_argument_3[2])
                    {
                        ExFreePoolWithTag(trace_argument_3[2], 0x4b72504d);
                    }
                    ExFreeToPagedLookasideList((void *)(MpRegData + 0x400), buffer_2);
                }
                trace_argument_3 = NULL;
            }
            buffer_2 = data_pointer_9;
            allocation = data_pointer_5;
            allocation_2 = data_pointer_6;
            data_pointer_8 = process_context_2;
        }
    }
    block_11:
    process_context_2 = data_pointer_8;

    if (data_pointer_7)
    {
        if (*(int64_t *)(MpRegData + 0x28))
        {
            (*__guard_dispatch_icall_fptr)(data_pointer_7);
        }
        else
        {
            if (data_pointer_7[2])
            {
                ExFreePoolWithTag(data_pointer_7[2], 0x4b72504d);
            }
            ExFreeToPagedLookasideList((void *)(MpRegData + 0x400), data_pointer_7);
        }
    }
    if (allocation_2)
    {
        ExFreePoolWithTag(allocation_2, 0x5672504d);
    }
    if (allocation)
    {
        MpRegFreeMatchingInfo(allocation);
    }
    if (buffer_2)
    {
        ExFreeToPagedLookasideList((void *)(MpRegData + 0x40), buffer_2);
    }
    block_12:
    if (process_context_2)
    {
        MpReleaseProcessContext(process_context_2);
    }

    return;
}

void MpRegPreCreateKeyEx(int64_t input, uint64_t input_2, int64_t *input_3, char *input_4, uint64_t input_5, uint8_t input_6)
{
    uint32_t value;
    uint64_t trace_argument_2;
    uint64_t value_2;
    uint8_t buffer_2[8];
    uint64_t value_3;
    uint64_t process_context;
    int64_t value_4;
    uint64_t buffer_3;
    uint64_t value_5;
    uint64_t provider;
    uint8_t byte_value;
    uint64_t allocation;
    uint64_t value_6;
    uint64_t trace_argument_1;
    bool enabled;
    bool enabled_2;
    uint64_t value_7;
    uint64_t value_8;
    int16_t *trace_argument_2_2;
    uint32_t value_9;
    char byte_value_2;
    uint32_t value_10;
    char *bytes;
    int64_t *data_pointer;
    uint16_t *wide_text;
    char byte_value_3;
    int32_t value_12;
    int64_t value_13;
    uint32_t value_14;
    char *bytes_2;
    uint64_t value_15;
    value_9 = (uint32_t)((uint64_t)value_7 >> 0x20);
    value_5 = 0;
    buffer_3 = 0;
    trace_argument_1 = 0;
    allocation = 0;
    value_2 = 0;
    value_6 = 0;
    value_3 = 0;
    process_context = 0;
    value_10 = 0;
    provider = value_6;
    trace_argument_2 = buffer_3;
    bytes = input_4;
    data_pointer = input_3;
    value_4 = input;
    if (input && input_3)
    {
        *input_3 = 0;
        value_14 = *(uint32_t *)(MpData + 0x364) & 0x40;
        enabled = value_14 != 0;
        if (!(input_2 & 1) && (!value_14 || !(input_2 >> 0x18 & 2)))
        {
            goto block_1;
        }
        if (input_5)
        {
            trace_argument_1 = input_5;
            byte_value = input_6;
        }
        else
        {
            buffer_2[0] = 0;
            value_12 = MpRegpCheckExistingKey(input, buffer_2, &value_2);
            if (value_12 < 0)
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                {
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x15, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)value_12 & 0xffffffffULL);
                }
                trace_argument_1 = value_2;
                goto block_1;
            }
            trace_argument_1 = value_2;
            byte_value = buffer_2[0];
        }
        trace_argument_2 = value_5;
        allocation = value_5;
        provider = value_5;
        if (byte_value)
        {
            goto block_1;
        }
        value = 1;
        enabled_2 = (*(uint32_t *)(MpData + 0x364) & 8) != 0;
        if (enabled_2)
        {
            value = 0x40001;
        }
        WdStoreField(&value_2, 0, 4, (uint64_t)(((uint64_t)(((((enabled * '\x02' | enabled) << 3 | enabled) * '\x02' | enabled) * '\x02' | enabled) * '\x02') & 0xffULL) << 24 | (uint64_t)value & 0xffffffULL));
        value_2 = (uint64_t)(((uint64_t)enabled_2 & 0xffULL) << 32 | (uint64_t)((uint32_t)value_2) & 0xffffffffULL) | 0x200000000;
        provider = value_2;
        value_12 = MpRegMatchData(trace_argument_1, NULL, value_2, &value_3);
        allocation = value_3;
        if (value_12 <= -1)
        {
            if (value_12 != -0x3ffffd8e)
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x16, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)value_12 & 0xffffffffULL);
                }
                allocation = value_3;
                provider = value_6;
            }
            else
            {
                provider = value_6;
            }
            goto block_1;
        }
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            trace_argument_2 = trace_argument_1;
            WPP_SF_ZZii(*(uint64_t *)(WPP_GLOBAL_Control + 0x18));
            value_9 = (uint32_t)(trace_argument_2 >> 0x20);
        }
        provider &= 0xffffffffffffff00;
        buffer_2[0] = 0;
        if (*(uint8_t *)(allocation + 0x1a) & 4 || (trace_argument_2 = value_5, *(uint8_t *)(allocation + 0x1c) & 1))
        {
            MpGetProcessContextByObject(IoGetCurrentProcess(), &process_context);
            trace_argument_2 = process_context;
            buffer_2[0] = MpIsRegistryHardeningExemptByContext(process_context);
            provider = (uint64_t)buffer_2[0];
        }
        if (*(uint8_t *)(allocation + 0x1a) & 4)
        {
            value_10 = 1;
            if (trace_argument_2 && !(char)provider)
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                {
                    trace_argument_2_2 = *(int16_t **)(trace_argument_2 + 0x80);
                    WPP_SF_ZZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x18, provider, trace_argument_1, trace_argument_2_2);
                    value_9 = (uint32_t)((uint64_t)trace_argument_2_2 >> 0x20);
                }
                MpLogPrintfW(L"[Mini-filter] Denied registry key creation of [%wZ] triggered by process [%wZ].", trace_argument_1, *(uint64_t *)(trace_argument_2 + 0x80));
                *bytes = '\x01';
                *(uint8_t *)(allocation + 0x18) = *(uint8_t *)(allocation + 0x18) & 0xfd | 1;
            }
            else
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                {
                    if (trace_argument_2)
                    {
                        trace_argument_2 = *(uint64_t *)(trace_argument_2 + 0x80);
                    }
                    else
                    {
                        trace_argument_2 = value_5;
                    }
                    WPP_SF_ZZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x19, provider, trace_argument_1, trace_argument_2);
                    value_9 = (uint32_t)(trace_argument_2 >> 0x20);
                }
                *(uint8_t *)(allocation + 0x1a) = *(uint8_t *)(allocation + 0x1a) & 0xfb;
            }
        }
        byte_value_2 = MpRegTPAllowChange((void *)(allocation + 0x18), trace_argument_1, &process_context);
        provider = process_context;
        if (byte_value_2)
        {
            trace_argument_2 = value_10;
        }
        else
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
            {
                if (process_context)
                {
                    trace_argument_2 = *(uint64_t *)(process_context + 0x80);
                }
                else
                {
                    trace_argument_2 = value_5;
                }
                value_9 = (uint32_t)(trace_argument_2 >> 0x20);
                WPP_SF_ZZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1a);
            }
            if (provider)
            {
                trace_argument_2 = *(uint64_t *)(provider + 0x80);
            }
            else
            {
                trace_argument_2 = value_5;
            }
            MpLogPrintfW(L"[Mini-filter][TP] Denied registry creation [%wZ] triggered by process [%wZ].", trace_argument_1, trace_argument_2);
            trace_argument_2 = 2;
            value_10 = 2;
            *bytes = '\x01';
            *(uint8_t *)(allocation + 0x18) = *(uint8_t *)(allocation + 0x18) & 0xfd | 1;
        }
        if (*bytes == '\x01')
        {
            *(uint8_t *)(allocation + 0x1a) = *(uint8_t *)(allocation + 0x1a) | 4;
        }
        bytes_2 = bytes;
        if ((int32_t)trace_argument_2)
        {
            if ((int32_t)trace_argument_2 == 2 && provider && *(uint32_t *)(provider + 0x3c) & 0x200)
            {
                trace_argument_2 = ((uint64_t)((uint64_t)(trace_argument_2 >> 8)) & 0xffffffffffffffULL) << 8 | (uint64_t)(*bytes == '\0') & 0xffULL;
                MpTraceRegHardeningNotification(3, trace_argument_2, provider, "RegNtPreCreateKeyEx", trace_argument_1, NULL, NULL);
                bytes_2 = bytes;
            }
            value_6 = trace_argument_1;
            MpTraceRegHardeningNotification((value_10 == 2) + '\x01', ((uint64_t)((uint64_t)(trace_argument_2 >> 8)) & 0xffffffffffffffULL) << 8 | (uint64_t)(*bytes_2 == '\0') & 0xffULL, provider, "RegNtPreCreateKeyEx", trace_argument_1, NULL, NULL);
            value_9 = (uint32_t)(value_6 >> 0x20);
            bytes_2 = bytes;
        }
        if (*(char *)(allocation + 0x1b) < '\0')
        {
            byte_value_3 = MpRegIsTamperProtectedLevelExempt(&process_context);
            provider = process_context;
            trace_argument_2 = trace_argument_1;
            MpTraceRegHardeningNotification(4, (uint8_t)byte_value_3, process_context, "RegNtPreCreateKeyEx", trace_argument_1, NULL, NULL);
            value_9 = (uint32_t)(trace_argument_2 >> 0x20);
            bytes_2 = bytes;
        }
        if (*(uint8_t *)(allocation + 0x1c) & 1)
        {
            trace_argument_2 = trace_argument_1;
            MpTraceRegHardeningNotification(5, buffer_2[0], provider, "RegNtPreCreateKeyEx", trace_argument_1, NULL, NULL);
            value_9 = (uint32_t)(trace_argument_2 >> 0x20);
            bytes_2 = bytes;
        }
        if (*bytes_2)
        {
            buffer_3 = ExAllocateFromPagedLookasideList((void *)(MpRegData + 0x40));
            trace_argument_2 = buffer_3;
            if (buffer_3)
            {
                memset(buffer_3, 0, (char *)0x78);
                *(uint64_t *)(buffer_3 + 0x60) = allocation;
                *(uint64_t *)(buffer_3 + 8) = trace_argument_1;
                *(uint64_t *)(buffer_3 + 0x58) = *(uint64_t *)(allocation + 0x18);
                *(uint32_t *)(buffer_3 + 0x68) = value_10;
                value_12 = MpRegpSendNotification(provider, buffer_3);
                if (0 <= value_12)
                {
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                    {
                        WPP_SF_Z(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1e, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), trace_argument_1);
                    }
                    goto block_1;
                }
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    goto block_1;
                }
                value_15 = 0x1d;
                value_8 = ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)value_12 & 0xffffffffULL;
            }
            else
            {
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    goto block_1;
                }
                value_15 = 0x1c;
                value_8 = ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INSUFFICIENT_RESOURCES & 0xffffffffULL;
            }
        }
        else
        {
            value_4 = 0x940092;
            wide_text = L"\\REGISTRY\\MACHINE\\Software\\Policies\\Microsoft\\Windows Defender\\Exclusions";
            value_13 = MpRegpAllocCreateKeyContext();
            if (value_13)
            {
                byte_value_3 = *(char *)(MpData + 0xfd0) && RtlEqualUnicodeString(trace_argument_1, &value_4, 0);
                *(char *)(value_13 + 0x38) = byte_value_3;
                *(uint64_t *)(value_13 + 0x28) = trace_argument_1;
                *(uint64_t *)(value_13 + 0x30) = allocation;
                allocation = 0;
                *data_pointer = value_13;
                trace_argument_2 = buffer_3;
                trace_argument_1 = value_5;
                goto block_1;
            }
            trace_argument_2 = buffer_3;
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                goto block_1;
            }
            value_15 = 0x1b;
            value_8 = ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INSUFFICIENT_RESOURCES & 0xffffffffULL;
            buffer_3 = value_5;
        }
    }
    else
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            goto block_1;
        }
        value_15 = 0x14;
        value_8 = ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INVALID_PARAMETER & 0xffffffffULL;
        provider = value_5;
        trace_argument_1 = value_5;
    }
    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_15, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), value_8);
    trace_argument_2 = buffer_3;
    block_1:
    if (trace_argument_1)
    {
        ExFreePoolWithTag(trace_argument_1, 0x5364504d);
    }

    if (allocation)
    {
        MpRegFreeMatchingInfo(allocation);
    }
    if (trace_argument_2)
    {
        ExFreeToPagedLookasideList((void *)(MpRegData + 0x40), trace_argument_2);
    }
    if (provider)
    {
        MpReleaseProcessContext(provider);
    }
    return;
}

void MpRegpCheckExistingKey(WD_LAYOUT_30 *input, char *input_2, int64_t *input_3)
{
    int32_t status;
    int64_t value;
    int64_t value_2;
    uint64_t string;
    int64_t value_3;
    int64_t value_4;
    int64_t allocation;
    int64_t value_5;
    uint64_t value_6;
    uint32_t value_7;
    int64_t value_8;
    int64_t *data_pointer;
    int64_t value_9;
    uint64_t value_10;
    uint64_t value_11;
    uint64_t value_12;
    uint64_t value_13;
    uint64_t value_14;
    uint64_t value_15;
    uint64_t value_17;
    int64_t allocation_2;
    int64_t value_18;
    uint64_t string_2;
    uint64_t object_attributes;
    int64_t key_handle;
    value_7 = (uint32_t)((uint64_t)value_6 >> 0x20);
    value_5 = 0;
    allocation = 0;
    allocation_2 = 0;
    *input_3 = 0;
    *input_2 = 0;
    value_3 = 0;
    value_4 = 0;
    value_2 = 0;
    string_2 = 0;
    value_14 = 0;
    data_pointer = input_3;
    RtlInitUnicodeString(&string_2, L"\\Registry");
    value_17 = input->field_0x0;
    if (RtlPrefixUnicodeString(&string_2, value_17, (uint64_t)((uint64_t)input_3) & 0xffffffffffffff00 | (uint64_t)1 & 0xff))
    {
        value_18 = value_5;
    }
    else
    {
        value_18 = input->field_0x8;
    }
    value_17 = input->field_0x0;
    value_12 = 0;
    value_13 = (uint64_t)WdLoadField(&value_13, 4, 4) << 0x20;
    key_handle = 0;
    value = 0;
    object_attributes = 0;
    value_9 = 0;
    value_10 = 0;
    value_11 = 0;
    value_8 = 0;
    if (value_18)
    {
        value_7 = 0;
        status = ObOpenObjectByPointer(value_18, 0x200, 0, 0x20019, 0, 0, &value);
        if (0 <= status)
        {
            value_8 = value;
            goto block_2;
        }
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            value_17 = ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL;
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xe, WD_SYMBOL_ADDRESS(WPP_0bb7950fbf1c3ce6de4fbf0752af6f2f_Traceguids), (uint64_t)KeGetCurrentThread(), value_17);
            value_7 = (uint32_t)((uint64_t)value_17 >> 0x20);
        }
        block_1:
        string = 0;

        value_15 = 0;
        RtlInitUnicodeString(&string, WD_CREATE_UNRECOVERED_ADDRESS4);
        status = MpRegpGetKeyName(value_18, &value_3);
        if (status < 0)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x10, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
            }
            goto block_4;
        }
        status = MpAppendUnicodeStringToUnicodeString(value_3, &string, &value_4, 0x5364504d);
        value_18 = value_4;
        if (status < 0)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x11, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
            }
            allocation_2 = value_4;
            goto block_4;
        }
        status = MpAppendUnicodeStringToUnicodeString(value_4, (uint16_t *)input->field_0x0, &value_2, 0x5364504d);
        if (status <= -1)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                value_17 = 0x12;
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_17, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
            }
            goto block_3;
        }
    }
    else
    {
        block_2:
        object_attributes = ((uint64_t)WdLoadField(&object_attributes, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)0x30 & 0xffffffffULL;

        value_11 = ((uint64_t)WdLoadField(&value_11, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)0x240 & 0xffffffffULL;
        value_12 = 0;
        value_13 = 0;
        value_9 = value_8;
        value_10 = value_17;
        status = ZwOpenKey(&key_handle, 0x82000000, &object_attributes);
        if (value && (*(uint32_t *)(MpData + 0x360) & 2 || value + 0x7fffffb0U & 0xffffffffffffffef))
        {
            ZwClose();
        }
        if (0 <= status)
        {
            if (key_handle && (*(uint32_t *)(MpData + 0x360) & 2 || key_handle + 0x7fffffb0U & 0xffffffffffffffef))
            {
                ZwClose();
            }
            *input_2 = 1;
            allocation_2 = value_5;
            allocation = value_5;
            goto block_4;
        }
        if (value_18)
        {
            goto block_1;
        }
        status = MpRegpCopyUnicodeString((void *)input->field_0x0, &value_2);
        value_18 = value_5;
        if (status < 0)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && (value_18 = allocation_2, *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                value_17 = 0x13;
                value_18 = value_5;
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_17, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
            }
            block_3:
            allocation_2 = value_18;

            allocation = value_2;
            goto block_4;
        }
    }
    *data_pointer = value_2;
    allocation_2 = value_18;
    allocation = value_5;
    block_4:
    if (allocation_2)
    {
        ExFreePoolWithTag(allocation_2, 0x5364504d);
    }

    allocation_2 = value_3;
    if (value_3)
    {
        if (*(int64_t *)(MpRegData + 0x28))
        {
            (*__guard_dispatch_icall_fptr)(value_3);
        }
        else
        {
            if (*(int64_t *)(value_3 + 0x10))
            {
                ExFreePoolWithTag(*(int64_t *)(value_3 + 0x10), 0x4b72504d);
            }
            ExFreeToPagedLookasideList((void *)(MpRegData + 0x400), allocation_2);
        }
    }
    if (allocation)
    {
        ExFreePoolWithTag(allocation, 0x5364504d);
    }
    return;
}

void MpRegPreSetKeySecurity(int64_t *input, uint64_t input_2, int64_t *input_3, char *input_4, void *input_5)
{
    char byte_value;
    int64_t value;
    void *trace_argument_3;
    int64_t value_2;
    int64_t process_context;
    int64_t value_3;
    int64_t process_context_2;
    void *trace_argument_1;
    int64_t *data_pointer;
    int64_t *data_pointer_2;
    char byte_value_2;
    bool enabled;
    bool enabled_2;
    uint64_t value_4;
    uint64_t value_5;
    uint32_t value_6;
    char byte_value_3;
    void *data_pointer_3;
    int32_t value_7;
    uint64_t value_8;
    int32_t value_9;
    char *bytes;
    int64_t *data_pointer_4;
    int64_t *data_pointer_5;
    int16_t *trace_argument_3_2;
    int64_t allocation;
    int64_t *buffer_2;
    uint32_t value_11;
    char *bytes_2;
    uint64_t value_12;
    data_pointer_3 = input_5;
    value_6 = (uint32_t)((uint64_t)value_4 >> 0x20);
    value = 0;
    value_3 = 0;
    data_pointer_2 = NULL;
    data_pointer = NULL;
    trace_argument_3 = NULL;
    value_2 = 0;
    process_context = 0;
    value_7 = 0;
    allocation = value;
    process_context_2 = value_3;
    buffer_2 = data_pointer_2;
    bytes = input_4;
    data_pointer_4 = input_3;
    data_pointer_5 = input;
    if (input && input_3)
    {
        *input_3 = 0;
        value_11 = *(uint32_t *)(MpData + 0x364) & 0x40;
        enabled = value_11 != 0;
        if (!(input_2 & 0x10000) && (!value_11 || !(input_2 >> 0x18 & 2)))
        {
            goto block_3;
        }
        if (input_5)
        {
            data_pointer_3 = NULL;
            trace_argument_1 = input_5;
            trace_argument_3 = input_5;
        }
        else
        {
            value_9 = MpRegpGetKeyName(*input, &trace_argument_3);
            if (value_9 < 0)
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                {
                    value_12 = 0x8c;
                    value_5 = ((uint64_t)value_6 & 0xffffffffULL) << 32 | (uint64_t)value_9 & 0xffffffffULL;
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_12, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), value_5);
                }
                goto block_2;
            }
            trace_argument_1 = trace_argument_3;
        }
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            WPP_SF_Z(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x8d, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), trace_argument_1);
        }
        enabled_2 = (*(uint32_t *)(MpData + 0x364) & 8) != 0;
        WdStoreField(&value_8, 0, 4, (uint64_t)(((uint64_t)(((((enabled * '\x02' | enabled) << 3 | enabled) * '\x02' | enabled) * '\x02' | enabled) * '\x02' | enabled_2) & 0xffULL) << 24 | (uint64_t)0x10000 & 0xffffffULL));
        value_8 = (uint64_t)(((uint64_t)enabled_2 & 0xffULL) << 32 | (uint64_t)((uint32_t)value_8) & 0xffffffffULL) | 0x200000000;
        value_9 = MpRegMatchData(trace_argument_3, NULL, value_8, &value_2);
        value = value_2;
        if (0 <= value_9)
        {
            buffer_2 = data_pointer;
            if (value_2)
            {
                byte_value = 0;
                byte_value_3 = '\0';
                if (*(uint8_t *)(value_2 + 0x1b) & 1 || *(uint8_t *)(value_2 + 0x1c) & 1)
                {
                    MpGetProcessContextByObject(IoGetCurrentProcess(), &process_context);
                    value_3 = process_context;
                    byte_value = MpIsRegistryHardeningExemptByContext(process_context);
                    byte_value_3 = byte_value;
                }
                if (*(uint8_t *)(value + 0x1b) & 1)
                {
                    value_7 = 1;
                    if (value_3 && !byte_value)
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                        {
                            value_6 = (uint32_t)((uint64_t)(*(uint64_t *)(value_3 + 0x80)) >> 0x20);
                            WPP_SF_ZZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x90);
                        }
                        MpLogPrintfW(L"[Mini-filter] Denied registry key set security of [%wZ] triggered by process [%wZ].", trace_argument_3, *(uint64_t *)(value_3 + 0x80));
                        *bytes = '\x01';
                        *(uint8_t *)(value + 0x1a) = *(uint8_t *)(value + 0x1a) & 0xfd | 1;
                    }
                    else
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                        {
                            if (value_3)
                            {
                                value_6 = (uint32_t)((uint64_t)(*(uint64_t *)(value_3 + 0x80)) >> 0x20);
                            }
                            else
                            {
                                value_6 = 0;
                            }
                            WPP_SF_ZZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x91);
                        }
                        *(uint8_t *)(value + 0x1b) = *(uint8_t *)(value + 0x1b) & 0xfe;
                    }
                }
                byte_value = MpRegTPAllowChange((void *)(value + 0x18), trace_argument_3, &process_context);
                value_3 = process_context;
                if (byte_value)
                {
                    value_9 = value_7;
                }
                else
                {
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                    {
                        if (process_context)
                        {
                            trace_argument_3_2 = *(int16_t **)(process_context + 0x80);
                        }
                        else
                        {
                            trace_argument_3_2 = NULL;
                        }
                        trace_argument_1 = trace_argument_3;
                        WPP_SF_qZZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x92, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), trace_argument_3, trace_argument_3_2);
                        value_6 = (uint32_t)((uint64_t)trace_argument_1 >> 0x20);
                    }
                    if (value_3)
                    {
                        value_12 = *(uint64_t *)(value_3 + 0x80);
                    }
                    else
                    {
                        value_12 = 0;
                    }
                    MpLogPrintfW(L"Due to Tamper Protection, blocked set security [%wZ] triggered by process [%wZ].", trace_argument_3, value_12);
                    value_7 = 2;
                    *bytes = '\x01';
                    *(uint8_t *)(value + 0x1a) = *(uint8_t *)(value + 0x1a) & 0xfd | 1;
                    value_9 = 2;
                }
                if (*bytes == '\x01')
                {
                    *(uint8_t *)(value + 0x1b) = *(uint8_t *)(value + 0x1b) | 1;
                }
                bytes_2 = bytes;
                if (value_9)
                {
                    if (value_9 == 2 && value_3 && *(uint32_t *)(value_3 + 0x3c) & 0x200)
                    {
                        MpTraceRegHardeningNotification(3, ((uint64_t)((uint64_t)((uint64_t)bytes >> 8)) & 0xffffffffffffffULL) << 8 | (uint64_t)(*bytes == '\0') & 0xffULL, value_3, "RegNtPreSetKeySecurity", trace_argument_3, NULL, NULL);
                        bytes_2 = bytes;
                    }
                    bytes_2 = (char *)(((uint64_t)((uint64_t)((uint64_t)bytes_2 >> 8)) & 0xffffffffffffffULL) << 8 | (uint64_t)(*bytes_2 == '\0') & 0xffULL);
                    trace_argument_1 = trace_argument_3;
                    MpTraceRegHardeningNotification((value_7 == 2) + '\x01', bytes_2, value_3, "RegNtPreSetKeySecurity", trace_argument_3, NULL, NULL);
                    value_6 = (uint32_t)((uint64_t)trace_argument_1 >> 0x20);
                }
                if (*(char *)(value + 0x1b) <= '\xff')
                {
                    byte_value_2 = MpRegIsTamperProtectedLevelExempt(&process_context);
                    value_3 = process_context;
                    bytes_2 = (char *)((uint64_t)((uint64_t)trace_argument_3) & 0xffffffffffffff00 | (uint64_t)byte_value_2 & 0xff);
                    trace_argument_1 = trace_argument_3;
                    MpTraceRegHardeningNotification(4, bytes_2, process_context, "RegNtPreSetKeySecurity", trace_argument_3, NULL, NULL);
                    value_6 = (uint32_t)((uint64_t)trace_argument_1 >> 0x20);
                }
                if (*(uint8_t *)(value + 0x1c) & 1)
                {
                    trace_argument_1 = trace_argument_3;
                    MpTraceRegHardeningNotification(5, (uint64_t)((uint64_t)bytes_2) & 0xffffffffffffff00 | (uint64_t)byte_value_3 & 0xff, value_3, "RegNtPreSetKeySecurity", trace_argument_3, NULL, NULL);
                    value_6 = (uint32_t)((uint64_t)trace_argument_1 >> 0x20);
                }
                if (*bytes)
                {
                    buffer_2 = (int64_t *)ExAllocateFromPagedLookasideList((void *)(MpRegData + 0x40));
                    if (buffer_2)
                    {
                        memset(buffer_2, 0, (char *)0x78);
                        buffer_2[0xc] = value;
                        buffer_2[1] = (int64_t)trace_argument_3;
                        *buffer_2 = *data_pointer_5;
                        buffer_2[0xb] = *(int64_t *)(value + 0x18);
                        *(int32_t *)(&buffer_2[0xd]) = value_7;
                        value_9 = MpRegpSendNotification(value_3, buffer_2);
                        if (value_9 <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            value_12 = 0x95;
                            value_5 = ((uint64_t)value_6 & 0xffffffffULL) << 32 | (uint64_t)value_9 & 0xffffffffULL;
                            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_12, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), value_5);
                        }
                    }
                    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        value_12 = 0x94;
                        goto block_1;
                    }
                }
                else
                {
                    allocation = MpRegpAllocSetKeySecurityContext();
                    if (allocation)
                    {
                        *(void **)(allocation + 0x28) = trace_argument_3;
                        trace_argument_3 = NULL;
                        *(int64_t *)(allocation + 0x30) = value;
                        value = 0;
                        *data_pointer_4 = allocation;
                    }
                    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        value_12 = 0x93;
                        buffer_2 = data_pointer_2;
                        block_1:
                        value_5 = ((uint64_t)value_6 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INSUFFICIENT_RESOURCES & 0xffffffffULL;

                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_12, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), value_5);
                    }
                }
            }
            else
            {
                buffer_2 = data_pointer_2;
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x8f, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_6 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_UNSUCCESSFUL & 0xffffffffULL);
                    value_3 = 0;
                    buffer_2 = data_pointer;
                }
            }
        }
        else
        {
            if (value_9 != -0x3ffffd8e && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x8e, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_6 & 0xffffffffULL) << 32 | (uint64_t)value_9 & 0xffffffffULL);
            }
            value = value_2;
        }
        data_pointer_2 = buffer_2;
    }
    else
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || (allocation = 0, process_context_2 = 0, buffer_2 = data_pointer, !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)))
        {
            goto block_3;
        }
        value_12 = 0x8b;
        value_5 = ((uint64_t)value_6 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INVALID_PARAMETER & 0xffffffffULL;
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_12, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), value_5);
    }
    block_2:
    trace_argument_1 = trace_argument_3;

    allocation = value;
    process_context_2 = value_3;
    buffer_2 = data_pointer_2;
    if (trace_argument_3)
    {
        if (*(int64_t *)(MpRegData + 0x28))
        {
            (*__guard_dispatch_icall_fptr)(trace_argument_3);
        }
        else
        {
            if (((int64_t *)trace_argument_3)[2])
            {
                ExFreePoolWithTag(((int64_t *)trace_argument_3)[2], 0x4b72504d);
            }
            ExFreeToPagedLookasideList((void *)(MpRegData + 0x400), trace_argument_1);
        }
        trace_argument_3 = NULL;
    }
    block_3:
    if (data_pointer_3)
    {
        if (*(int64_t *)(MpRegData + 0x28))
        {
            (*__guard_dispatch_icall_fptr)(data_pointer_3);
        }
        else
        {
            if (((int64_t *)data_pointer_3)[2])
            {
                ExFreePoolWithTag(((int64_t *)data_pointer_3)[2], 0x4b72504d);
            }
            ExFreeToPagedLookasideList((void *)(MpRegData + 0x400), data_pointer_3);
        }
    }

    if (allocation)
    {
        MpRegFreeMatchingInfo(allocation);
    }
    if (buffer_2)
    {
        ExFreeToPagedLookasideList((void *)(MpRegData + 0x40), buffer_2);
    }
    if (process_context_2)
    {
        MpReleaseProcessContext(process_context_2);
    }
    return;
}

char MpRegHardeningIsMatch(uint64_t input)
{
    char byte_value = '\0';
    uint64_t *data_pointer;
    uint64_t *data_pointer_2;
    data_pointer_2 = (uint64_t *)(MpRegData + 0x118);
    data_pointer = (uint64_t *)(*data_pointer_2);
    while (true)
    {
        if (data_pointer == data_pointer_2)
        {
            return byte_value;
        }
        byte_value = RtlPrefixUnicodeString(data_pointer[2], input, 1);
        if (byte_value == '\x01')
        {
            break;
        }
        data_pointer = (uint64_t *)(*data_pointer);
    }

    return '\x01';
}

int32_t MpRegPostSetKeySecurity(WD_LAYOUT_70 *input, uint64_t input_2, WD_LAYOUT_74 *input_3)
{
    int32_t value = 0;
    WD_LAYOUT_115 *buffer;
    uint64_t value_2;
    uint32_t value_3;
    if (input)
    {
        if (0 <= input->field_0x8)
        {
            if (!input_3)
            {
                return 0;
            }
            if (input_3->field_0x0 != -0x25de)
            {
                value = -0x3fffffdc;
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qDL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x97, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), (uint16_t)input_3->field_0x0, 0xc0000024);
                }
            }
            else if (input_3->field_0x30)
            {
                if (input_3->field_0x28)
                {
                    buffer = (WD_LAYOUT_115 *)ExAllocateFromPagedLookasideList((void *)(MpRegData + 0x40));
                    if (buffer)
                    {
                        memset(buffer, 0, (char *)0x78);
                        buffer->field_0x60 = input_3->field_0x30;
                        buffer->field_0x8 = input_3->field_0x28;
                        buffer->field_0x0 = input->field_0x0;
                        buffer->field_0x58 = *(int64_t *)(input_3->field_0x30 + 0x18);
                        value = MpRegpSendNotification(NULL, buffer);
                        if (value <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x9b, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), value);
                        }
                        ExFreeToPagedLookasideList((void *)(MpRegData + 0x40), buffer);
                        MpRegpFreeCallContext(input_3);
                        return value;
                    }
                    value = -0x3fffff66;
                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                    {
                        MpRegpFreeCallContext(input_3);
                        return value;
                    }
                    value_2 = 0x9a;
                    value_3 = WD_STATUS_INSUFFICIENT_RESOURCES;
                }
                else
                {
                    value = -0x3fffffff;
                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                    {
                        MpRegpFreeCallContext(input_3);
                        return value;
                    }
                    value_2 = 0x99;
                    value_3 = WD_STATUS_UNSUCCESSFUL;
                }
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), value_3);
            }
            else
            {
                value = -0x3fffffff;
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x98, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), WD_STATUS_UNSUCCESSFUL);
                }
            }
            MpRegpFreeCallContext(input_3);
            return value;
        }
    }
    else
    {
        value = -0x3ffffff3;
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x96, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), WD_STATUS_INVALID_PARAMETER);
        }
    }
    if (!input_3)
    {
        return value;
    }
    MpRegpFreeCallContext(input_3);
    return value;
}

void EnforceExclusionProtection(int64_t input)
{
    int32_t status;
    uint32_t value = 0;
    uint64_t value_2;
    uint64_t *data_pointer;
    uint32_t value_3;
    uint32_t value_4 = 0;
    uint64_t value_5;
    uint64_t value_6;
    uint32_t value_7 = 0;
    uint64_t value_8;
    int64_t value_9;
    uint64_t value_10;
    uint32_t value_11;
    uint32_t value_12 = 0;
    uint64_t value_13;
    uint64_t value_14;
    uint64_t value_15 = 0;
    uint64_t string = 0;
    uint32_t object_attributes;
    int64_t key_handle = 0;
    uint32_t object_attributes_2;
    int64_t key_handle_2 = 0;
    RtlInitUnicodeString(&string, L"\\REGISTRY\\MACHINE\\Software\\Policies\\Microsoft\\Windows Defender");
    if (!input)
    {
        return;
    }
    value_2 = 0;
    object_attributes = 0x30;
    value_3 = 0x240;
    object_attributes_2 = 0x30;
    data_pointer = &string;
    value_11 = 0x240;
    value_8 = 0;
    value_5 = 0;
    value_6 = 0;
    value_13 = 0;
    value_14 = 0;
    value_9 = input;
    status = ZwOpenKey(&key_handle, 0x20000, &object_attributes);
    if (0 <= status)
    {
        status = ZwOpenKey(&key_handle_2, 0x40000, &object_attributes_2);
        if (0 <= status)
        {
            status = EnforceKeyProtection(key_handle_2, key_handle);
            if (status <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                value_10 = 0xb6;
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_10, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), status);
            }
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            value_10 = 0xb5;
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_10, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), status);
        }
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        value_10 = 0xb4;
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_10, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), status);
    }
    if (key_handle)
    {
        ZwClose();
    }
    if (key_handle_2)
    {
        ZwClose();
    }
    return;
}

void EnforceKeyProtection(int64_t input, int64_t input_2)
{
    int32_t status;
    int64_t allocation;
    uint64_t value_2;
    uint32_t values[2];
    uint32_t *data_pointer;
    uint64_t value_3;
    uint32_t value_4;
    values[0] = 0;
    if (!input || !input_2)
    {
        return;
    }
    data_pointer = values;
    status = ZwQuerySecurityObject(input_2, 4, 0, 0, data_pointer);
    value_4 = (uint32_t)((uint64_t)data_pointer >> 0x20);
    if (status != -0x3fffffdd)
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return;
        }
        value_2 = 0xaf;
        value_3 = ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL;
    }
    else
    {
        allocation = (int64_t)MpAllocatePoolWithTag(1, values[0], 0x6473504d);
        if (allocation)
        {
            data_pointer = values;
            status = ZwQuerySecurityObject(input_2, 4, allocation, values[0], data_pointer);
            value_4 = (uint32_t)((uint64_t)data_pointer >> 0x20);
            if (0 <= status)
            {
                status = MpRemoveAdminAndNonAdminSidsFromSd(allocation);
                if (0 <= status)
                {
                    status = ZwSetSecurityObject(input, 0x80000004, allocation);
                    if (status <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        value_2 = 0xb3;
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
                    }
                }
                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    value_2 = 0xb2;
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
                }
            }
            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                value_2 = 0xb1;
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
            }
            ExFreePoolWithTag(allocation, 0x6473504d);
            return;
        }
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return;
        }
        value_2 = 0xb0;
        value_3 = ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INSUFFICIENT_RESOURCES & 0xffffffffULL;
    }
    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), value_3);
    return;
}

uint64_t MpRegHardeningCallback(uint64_t input, int32_t input_2, WD_LAYOUT_81 *input_3)
{
    if (input_2 != 8)
    {
        return 0;
    }
    return MpRegPreQueryValueKey(input_3);
}

uint64_t MpRegIsTamperProtectedLevelExempt(int64_t *input)
{
    uint32_t value;
    uint64_t status;
    int64_t process_context;
    char byte_value;
    int64_t process_context_2;
    if (input)
    {
        process_context_2 = *input;
        process_context = process_context_2;
        if (process_context_2)
        {
            goto block_1;
        }
    }
    else
    {
        process_context_2 = 0;
    }
    status = MpGetProcessContextByObject(IoGetCurrentProcess(), &process_context_2);
    process_context = process_context_2;
    if (!process_context_2)
    {
        return status & 0xffffffffffffff00;
    }
    block_1:
    byte_value = '\0';

    if (*(uint32_t *)(process_context + 0x120) & 1 && *(uint8_t *)(process_context + 0xb8) & 7 && (uint8_t)((*(uint8_t *)(process_context + 0xb8) >> 4) - 3) <= 4)
    {
        byte_value = '\x01';
    }
    value = *(uint32_t *)(process_context + 0xf0);
    status = value;
    if (!byte_value && value == 8)
    {
        status = MpData;
        if (*(uint32_t *)(MpData + 0x360) & 0xc000)
        {
            byte_value = '\x01';
        }
        else if (!(*(uint32_t *)(MpData + 0x360) & 0x40))
        {
            byte_value = '\x01';
        }
    }
    if (input)
    {
        if (!(*input))
        {
            *input = process_context;
        }
    }
    else
    {
        status = MpReleaseProcessContext(process_context);
    }
    return (uint64_t)status & 0xffffffffffffff00 | (uint64_t)byte_value & 0xff;
}

int32_t MpRegPostRenameKey(WD_LAYOUT_70 *input, uint64_t input_2, WD_LAYOUT_116 *input_3)
{
    int32_t value = 0;
    WD_LAYOUT_115 *buffer;
    if (input)
    {
        if (0 <= input->field_0x8)
        {
            if (!input_3)
            {
                return 0;
            }
            if (input_3->field_0x0 != -0x25e7)
            {
                value = -0x3fffffdc;
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qDL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x6c, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), (uint16_t)input_3->field_0x0, 0xc0000024);
                }
            }
            else
            {
                buffer = (WD_LAYOUT_115 *)ExAllocateFromPagedLookasideList((void *)(MpRegData + 0x40));
                if (buffer)
                {
                    memset(buffer, 0, (char *)0x78);
                    buffer->field_0x60 = input_3->field_0x38;
                    buffer->field_0x8 = input_3->field_0x28;
                    buffer->field_0x18 = input_3->field_0x30;
                    buffer->field_0x0 = input->field_0x0;
                    buffer->field_0x58 = *(int64_t *)(input_3->field_0x38 + 0x18);
                    value = MpRegpSendNotification(NULL, buffer);
                    if (value <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x6e, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), value);
                    }
                    ExFreeToPagedLookasideList((void *)(MpRegData + 0x40), buffer);
                }
                else
                {
                    value = -0x3fffff66;
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x6d, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), WD_STATUS_INSUFFICIENT_RESOURCES);
                    }
                }
            }
            MpRegpFreeCallContext(input_3);
            return value;
        }
    }
    else
    {
        value = -0x3ffffff3;
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x6b, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), WD_STATUS_INVALID_PARAMETER);
        }
    }
    if (!input_3)
    {
        return value;
    }
    MpRegpFreeCallContext(input_3);
    return value;
}

int32_t MpRegPostReplaceKey(WD_LAYOUT_72 *input, uint64_t input_2, WD_LAYOUT_116 *input_3)
{
    int64_t value;
    int32_t value_2 = 0;
    WD_LAYOUT_117 *buffer;
    if (input)
    {
        if (0 <= input->field_0x8)
        {
            if (!input_3)
            {
                return 0;
            }
            if (input_3->field_0x0 != -0x25e7)
            {
                value_2 = -0x3fffffdc;
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qDL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x7a, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), (uint16_t)input_3->field_0x0, 0xc0000024);
                }
            }
            else
            {
                value = input->field_0x10;
                buffer = (WD_LAYOUT_117 *)ExAllocateFromPagedLookasideList((void *)(MpRegData + 0x40));
                if (buffer)
                {
                    memset(buffer, 0, (char *)0x78);
                    buffer->field_0x8 = input_3->field_0x28;
                    buffer->field_0x20 = *(int64_t *)(value + 8);
                    buffer->field_0x28 = *(int64_t *)(value + 0x10);
                    buffer->field_0x0 = input->field_0x0;
                    buffer->field_0x60 = input_3->field_0x38;
                    buffer->field_0x58 = *(int64_t *)(input_3->field_0x38 + 0x18);
                    value_2 = MpRegpSendNotification(NULL, buffer);
                    if (value_2 <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x7c, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), value_2);
                    }
                    ExFreeToPagedLookasideList((void *)(MpRegData + 0x40), buffer);
                }
                else
                {
                    value_2 = -0x3fffff66;
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x7b, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), WD_STATUS_INSUFFICIENT_RESOURCES);
                    }
                }
            }
            MpRegpFreeCallContext(input_3);
            return value_2;
        }
    }
    else
    {
        value_2 = -0x3ffffff3;
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x79, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), WD_STATUS_INVALID_PARAMETER);
        }
    }
    if (!input_3)
    {
        return value_2;
    }
    MpRegpFreeCallContext(input_3);
    return value_2;
}

int32_t MpRegPostRestoreKey(WD_LAYOUT_72 *input, uint64_t input_2, WD_LAYOUT_116 *input_3)
{
    int64_t *name;
    int64_t value;
    int64_t handle;
    uint64_t name_2;
    int32_t value_2 = 0;
    WD_LAYOUT_118 *buffer;
    if (input)
    {
        if (0 <= input->field_0x8)
        {
            if (!input_3)
            {
                return 0;
            }
            if (input_3->field_0x0 != -0x25e7)
            {
                value_2 = -0x3fffffdc;
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qDL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x88, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), (uint16_t)input_3->field_0x0, 0xc0000024);
                }
            }
            else
            {
                value = input->field_0x10;
                buffer = (WD_LAYOUT_118 *)ExAllocateFromPagedLookasideList((void *)(MpRegData + 0x40));
                if (buffer)
                {
                    memset(buffer, 0, (char *)0x78);
                    name = &buffer->field_0x20;
                    buffer->field_0x8 = input_3->field_0x28;
                    handle = *(int64_t *)(value + 8);
                    name_2 = *__imp_IoFileObjectType;
                    if ((int32_t)MpQueryObjectNameByHandle(handle, name_2, name) <= -1)
                    {
                        *name = 0;
                    }
                    buffer->field_0x48 = *(uint32_t *)(value + 0x10);
                    buffer->field_0x0 = input->field_0x0;
                    buffer->field_0x60 = input_3->field_0x38;
                    buffer->field_0x58 = *(int64_t *)(input_3->field_0x38 + 0x18);
                    value_2 = MpRegpSendNotification(NULL, buffer);
                    if (value_2 <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x8a, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), value_2);
                    }
                    if (*name)
                    {
                        MpFreeObjectName(*name);
                    }
                    ExFreeToPagedLookasideList((void *)(MpRegData + 0x40), buffer);
                }
                else
                {
                    value_2 = -0x3fffff66;
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x89, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), WD_STATUS_INSUFFICIENT_RESOURCES);
                    }
                }
            }
            MpRegpFreeCallContext(input_3);
            return value_2;
        }
    }
    else
    {
        value_2 = -0x3ffffff3;
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x87, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), WD_STATUS_INVALID_PARAMETER);
        }
    }
    if (!input_3)
    {
        return value_2;
    }
    MpRegpFreeCallContext(input_3);
    return value_2;
}

int32_t MpRegPreQueryValueKey(WD_LAYOUT_81 *input, uint64_t input_2, uint64_t input_3)
{
    int16_t *wide_text;
    int32_t status = 0;
    int64_t value;
    int64_t process_context = 0;
    if (input)
    {
        wide_text = input->field_0x8;
        if (!wide_text || !(*wide_text) || (value = MpRegData + 0x108, !RtlEqualUnicodeString(wide_text, value, (uint64_t)input_3 & 0xffffffffffffff00 | (uint64_t)1 & 0xff)))
        {
            status = -0x3ffffd8e;
        }
        if (status <= -1)
        {
            return 0;
        }
        status = MpGetProcessContextByObject(IoGetCurrentProcess(), &process_context);
        if (status <= -1)
        {
            return 0;
        }
        if (*(uint8_t *)(process_context + 0x34) & 0x90)
        {
            status = -0x3fffffde;
        }
        MpReleaseProcessContext(process_context);
        return status;
    }
    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
    {
        return 0;
    }
    if (*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xf, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread());
        return 0;
    }
    return 0;
}

void MpRegPreRenameKey(int64_t *input, uint64_t input_2, int64_t *input_3, char *input_4, void *input_5)
{
    uint32_t value;
    uint32_t *data_pointer = NULL;
    uint32_t *allocation;
    void *trace_argument_3;
    int64_t allocation_2;
    uint32_t *data_pointer_2;
    uint32_t *data_pointer_3 = NULL;
    uint32_t *data_pointer_4;
    uint32_t *process_context;
    uint64_t value_2;
    char byte_value;
    void *data_pointer_5;
    uint32_t *data_pointer_6;
    uint32_t *data_pointer_7;
    uint32_t *allocation_3;
    uint32_t *data_pointer_8;
    uint32_t *process_context_2;
    uint32_t *data_pointer_9;
    uint32_t *data_pointer_10;
    uint32_t *allocation_4;
    char byte_value_2;
    bool enabled;
    bool enabled_2;
    uint64_t value_3;
    uint32_t value_4;
    char byte_value_3;
    uint32_t value_5;
    uint64_t value_6;
    char *bytes;
    void *data_pointer_11;
    int64_t *data_pointer_12;
    int32_t value_7;
    int64_t *data_pointer_13;
    uint32_t *buffer_2 = NULL;
    int64_t value_9;
    uint32_t index;
    uint32_t value_10;
    char *bytes_2;
    data_pointer_11 = input_5;
    data_pointer_10 = NULL;
    trace_argument_3 = NULL;
    data_pointer_6 = NULL;
    data_pointer_2 = NULL;
    allocation_3 = NULL;
    allocation_2 = 0;
    process_context_2 = NULL;
    data_pointer_4 = NULL;
    process_context = NULL;
    value_5 = 0;
    data_pointer_8 = allocation_3;
    allocation = data_pointer;
    data_pointer_5 = input_5;
    data_pointer_7 = data_pointer_6;
    data_pointer_9 = process_context_2;
    allocation_4 = data_pointer_10;
    bytes = input_4;
    data_pointer_12 = input;
    data_pointer_13 = input_3;
    if (input && input_3)
    {
        *input_3 = 0;
        index = *(uint32_t *)(MpData + 0x364) & 0x40;
        enabled = index != 0;
        if (input_2 & 4 || (allocation = buffer_2, data_pointer_7 = buffer_2, data_pointer_8 = buffer_2, data_pointer_9 = buffer_2, allocation_4 = buffer_2, index && (allocation = data_pointer, data_pointer_7 = data_pointer_6, data_pointer_8 = allocation_3, data_pointer_9 = process_context_2, allocation_4 = data_pointer_10, input_2 >> 0x18 & 2)))
        {
            if (input_5)
            {
                trace_argument_3 = input_5;
                data_pointer_11 = NULL;
                block_2:
                if (!(*(uint32_t *)(MpData + 0x360) & 4))
                {
                    value_7 = MpRegpCopyUnicodeString((void *)input[1], &allocation_2);
                    value_4 = (uint32_t)((uint64_t)value_3 >> 0x20);
                    if (0 <= value_7)
                    {
                        if (!allocation_2)
                        {
                            goto block_3;
                        }
                        value_9 = allocation_2;
                        goto block_4;
                    }
                    allocation = data_pointer;
                    data_pointer_7 = data_pointer_6;
                    data_pointer_8 = allocation_3;
                    data_pointer_9 = process_context_2;
                    allocation_4 = data_pointer_10;
                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                    {
                        goto block_8;
                    }
                    value_10 = 99;
                    data_pointer = buffer_2;
                    allocation_3 = buffer_2;
                    process_context_2 = buffer_2;
                    data_pointer_10 = buffer_2;
                    block_1:
                    value_2 = ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)value_7 & 0xffffffffULL;

                    data_pointer_6 = buffer_2;
                    goto block_7;
                }

                block_3:
                value_9 = data_pointer_12[1];

                block_4:
                value_7 = MpRegpGetKeyDestinationName(trace_argument_3, value_9, &data_pointer_2);

                if (0 <= value_7)
                {
                    value = 4;
                    enabled_2 = (*(uint32_t *)(MpData + 0x364) & 8) != 0;
                    if (enabled_2)
                    {
                        value = 0x80004;
                    }
                    WdStoreField(&value_6, 0, 4, (uint64_t)(((uint64_t)(((((enabled * '\x02' | enabled) << 3 | enabled) * '\x02' | enabled) * '\x02' | enabled) * '\x02') & 0xffULL) << 24 | (uint64_t)value & 0xffffffULL));
                    value_6 = (uint64_t)(((uint64_t)enabled_2 & 0xffULL) << 32 | (uint64_t)((uint32_t)value_6) & 0xffffffffULL) | 0x200000000;
                    MpRegMatchData(trace_argument_3, NULL, value_6, &data_pointer_3);
                    data_pointer_10 = data_pointer_2;
                    MpRegMatchData(data_pointer_2, NULL, value_6, &data_pointer_4);
                    data_pointer_8 = data_pointer_4;
                    value_4 = (uint32_t)((uint64_t)value_3 >> 0x20);
                    allocation_4 = data_pointer_10;
                    if (data_pointer_3)
                    {
                        if (data_pointer_4)
                        {
                            for (index = 0; value_4 = (uint32_t)((uint64_t)value_3 >> 0x20), index < *data_pointer_8; index = index + 1)
                            {
                                value_9 = *(int64_t *)(&data_pointer_8[2]);
                                if ((int32_t)MpRegAddMatches((WD_LAYOUT_26 *)(index * 0x10ULL + value_9), &data_pointer_3) < 0)
                                {
                                    allocation = data_pointer_3;
                                    data_pointer_7 = data_pointer_6;
                                    data_pointer_9 = process_context_2;
                                    goto block_8;
                                }
                            }

                            *(uint64_t *)(&data_pointer_3[6]) = *(uint64_t *)(&data_pointer_3[6]) | *(uint64_t *)(&data_pointer_8[6]);
                        }
                        data_pointer = data_pointer_3;
                        allocation_3 = data_pointer_8;
                        if (!data_pointer_3)
                        {
                            goto block_5;
                        }
                    }
                    else
                    {
                        allocation = data_pointer_3;
                        data_pointer_7 = data_pointer_6;
                        data_pointer_9 = process_context_2;
                        if (!data_pointer_4)
                        {
                            goto block_8;
                        }
                        block_5:
                        data_pointer = data_pointer_8;

                        allocation_3 = NULL;
                    }
                    byte_value = 0;
                    byte_value_3 = '\0';
                    if (((uint8_t *)data_pointer)[0x1a] & 8 || (process_context_2 = buffer_2, *(uint8_t *)(&data_pointer[7]) & 1))
                    {
                        MpGetProcessContextByObject(IoGetCurrentProcess(), &process_context);
                        process_context_2 = process_context;
                        byte_value = MpIsRegistryHardeningExemptByContext(process_context);
                        byte_value_3 = byte_value;
                    }
                    if (((uint8_t *)data_pointer)[0x1a] & 8)
                    {
                        value_5 = 1;
                        if (process_context_2 && !byte_value)
                        {
                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                            {
                                data_pointer_8 = data_pointer_10;
                                WPP_SF_ZZZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x65);
                                value_4 = (uint32_t)((uint64_t)data_pointer_8 >> 0x20);
                            }
                            MpLogPrintfW(L"[Mini-filter] Denied registry key rename from [%wZ] to [%wZ] triggered by process [%wZ].", trace_argument_3, data_pointer_10, *(uint64_t *)(&process_context_2[0x20]));
                            *bytes = '\x01';
                            *(uint8_t *)(&data_pointer[6]) = *(uint8_t *)(&data_pointer[6]) & 0xf7 | 4;
                        }
                        else
                        {
                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                            {
                                process_context_2 = data_pointer_10;
                                WPP_SF_ZZZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x66);
                                value_4 = (uint32_t)((uint64_t)process_context_2 >> 0x20);
                            }
                            *(uint8_t *)((int64_t)data_pointer + 0x1a) = *(uint8_t *)((int64_t)data_pointer + 0x1a) & 0xf7;
                        }
                    }
                    byte_value = MpRegTPAllowChange(&data_pointer[6], trace_argument_3, &process_context);
                    process_context_2 = process_context;
                    if (byte_value)
                    {
                        index = value_5;
                    }
                    else
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                        {
                            data_pointer_8 = data_pointer_10;
                            WPP_SF_ZZZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x67);
                            value_4 = (uint32_t)((uint64_t)data_pointer_8 >> 0x20);
                        }
                        if (process_context_2)
                        {
                            value_2 = *(uint64_t *)(&process_context_2[0x20]);
                        }
                        else
                        {
                            value_2 = 0;
                        }
                        MpLogPrintfW(L"[Mini-filter][TP] Denied registry key rename from [%wZ] to [%wZ] triggered by process [%wZ].", trace_argument_3, data_pointer_10, value_2);
                        value_5 = 2;
                        *bytes = '\x01';
                        *(uint8_t *)(&data_pointer[6]) = *(uint8_t *)(&data_pointer[6]) & 0xf7 | 4;
                        index = 2;
                    }
                    if (*bytes == '\x01')
                    {
                        *(uint8_t *)((int64_t)data_pointer + 0x1a) = *(uint8_t *)((int64_t)data_pointer + 0x1a) | 8;
                    }
                    bytes_2 = bytes;
                    if (index)
                    {
                        if (index == 2 && process_context_2 && process_context_2[0xf] & 0x200)
                        {
                            MpTraceRegHardeningNotification(3, ((uint64_t)((uint64_t)((uint64_t)bytes >> 8)) & 0xffffffffffffffULL) << 8 | (uint64_t)(*bytes == '\0') & 0xffULL, process_context_2, "RegNtPreRenameKey", trace_argument_3, data_pointer_10, NULL);
                            bytes_2 = bytes;
                        }
                        bytes_2 = (char *)(((uint64_t)((uint64_t)((uint64_t)bytes_2 >> 8)) & 0xffffffffffffffULL) << 8 | (uint64_t)(*bytes_2 == '\0') & 0xffULL);
                        data_pointer_5 = trace_argument_3;
                        MpTraceRegHardeningNotification((value_5 == 2) + '\x01', bytes_2, process_context_2, "RegNtPreRenameKey", trace_argument_3, data_pointer_10, NULL);
                        value_4 = (uint32_t)((uint64_t)data_pointer_5 >> 0x20);
                    }
                    if (((char *)data_pointer)[0x1b] <= '\xff')
                    {
                        byte_value_2 = MpRegIsTamperProtectedLevelExempt(&process_context);
                        process_context_2 = process_context;
                        bytes_2 = (char *)((uint64_t)((uint64_t)trace_argument_3) & 0xffffffffffffff00 | (uint64_t)byte_value_2 & 0xff);
                        data_pointer_5 = trace_argument_3;
                        MpTraceRegHardeningNotification(4, bytes_2, process_context, "RegNtPreRenameKey", trace_argument_3, data_pointer_10, NULL);
                        value_4 = (uint32_t)((uint64_t)data_pointer_5 >> 0x20);
                    }
                    if (*(uint8_t *)(&data_pointer[7]) & 1)
                    {
                        data_pointer_5 = trace_argument_3;
                        MpTraceRegHardeningNotification(5, (uint64_t)((uint64_t)bytes_2) & 0xffffffffffffff00 | (uint64_t)byte_value_3 & 0xff, process_context_2, "RegNtPreRenameKey", trace_argument_3, data_pointer_10, NULL);
                        value_4 = (uint32_t)((uint64_t)data_pointer_5 >> 0x20);
                    }
                    data_pointer_8 = allocation_3;
                    allocation = data_pointer;
                    data_pointer_9 = process_context_2;
                    if (*bytes != '\x01')
                    {
                        value_9 = MpRegpAllocRenameKeyContext();
                        if (value_9)
                        {
                            *(uint32_t **)(value_9 + 0x38) = data_pointer;
                            allocation = NULL;
                            *(void **)(value_9 + 0x28) = trace_argument_3;
                            *(uint32_t **)(value_9 + 0x30) = data_pointer_10;
                            allocation_4 = NULL;
                            trace_argument_3 = NULL;
                            *data_pointer_13 = value_9;
                            goto block_10;
                        }
                        data_pointer_7 = data_pointer_6;
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            value_10 = 0x6a;
                            goto block_6;
                        }
                    }
                    else
                    {
                        buffer_2 = (uint32_t *)ExAllocateFromPagedLookasideList((void *)(MpRegData + 0x40));
                        data_pointer_7 = buffer_2;
                        if (buffer_2)
                        {
                            memset(buffer_2, 0, (char *)0x78);
                            *(uint32_t **)(&buffer_2[0x18]) = data_pointer;
                            *(void **)(&buffer_2[2]) = trace_argument_3;
                            *(uint32_t **)(&buffer_2[6]) = data_pointer_10;
                            *(int64_t *)buffer_2 = *data_pointer_12;
                            *(uint64_t *)(&buffer_2[0x16]) = *(uint64_t *)(&data_pointer[6]);
                            buffer_2[0x1a] = value_5;
                            value_7 = MpRegpSendNotification(process_context_2, buffer_2);
                            if (value_7 <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                            {
                                value_10 = 0x69;
                                goto block_1;
                            }
                        }
                        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            value_10 = 0x68;
                            block_6:
                            value_2 = ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INSUFFICIENT_RESOURCES & 0xffffffffULL;

                            data_pointer_6 = buffer_2;
                            goto block_7;
                        }
                    }
                }
                else
                {
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 100, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), (uint64_t)value_3 & 0xffffffff00000000 | (uint64_t)value_7 & 0xffffffff);
                    }
                    allocation = data_pointer;
                    data_pointer_7 = data_pointer_6;
                    data_pointer_8 = allocation_3;
                    data_pointer_9 = process_context_2;
                    allocation_4 = data_pointer_2;
                }
            }
            else
            {
                value_7 = MpRegpGetKeyName(*input, &trace_argument_3);
                if (0 <= value_7)
                {
                    input = data_pointer_12;
                    goto block_2;
                }
                allocation = buffer_2;
                data_pointer_7 = buffer_2;
                data_pointer_8 = buffer_2;
                data_pointer_9 = buffer_2;
                allocation_4 = buffer_2;
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && (allocation = data_pointer, data_pointer_7 = data_pointer_6, data_pointer_8 = allocation_3, data_pointer_9 = process_context_2, allocation_4 = data_pointer_10, *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4))
                {
                    value_10 = 0x62;
                    value_2 = (uint64_t)value_3 & 0xffffffff00000000 | (uint64_t)value_7 & 0xffffffff;
                    data_pointer = buffer_2;
                    data_pointer_6 = buffer_2;
                    allocation_3 = buffer_2;
                    process_context_2 = buffer_2;
                    data_pointer_10 = buffer_2;
                    goto block_7;
                }
            }
            goto block_8;
        }
    }
    else
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            goto block_9;
        }
        value_10 = 0x61;
        value_2 = (uint64_t)value_3 & 0xffffffff00000000 | (uint64_t)WD_STATUS_INVALID_PARAMETER & 0xffffffff;
        block_7:
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_10, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), value_2);

        allocation = data_pointer;
        data_pointer_7 = data_pointer_6;
        data_pointer_8 = allocation_3;
        data_pointer_9 = process_context_2;
        allocation_4 = data_pointer_10;
        block_8:
        data_pointer_5 = trace_argument_3;

        if (trace_argument_3)
        {
            if (*(int64_t *)(MpRegData + 0x28))
            {
                (*__guard_dispatch_icall_fptr)(trace_argument_3);
            }
            else
            {
                if (((int64_t *)trace_argument_3)[2])
                {
                    ExFreePoolWithTag(((int64_t *)trace_argument_3)[2], 0x4b72504d);
                }
                ExFreeToPagedLookasideList((void *)(MpRegData + 0x400), data_pointer_5);
            }
            trace_argument_3 = NULL;
        }
        data_pointer_5 = data_pointer_11;
    }
    block_9:
    process_context_2 = data_pointer_9;

    allocation_3 = data_pointer_8;
    buffer_2 = data_pointer_7;
    if (data_pointer_5)
    {
        if (*(int64_t *)(MpRegData + 0x28))
        {
            (*__guard_dispatch_icall_fptr)(data_pointer_5);
        }
        else
        {
            if (((int64_t *)data_pointer_5)[2])
            {
                ExFreePoolWithTag(((int64_t *)data_pointer_5)[2], 0x4b72504d);
                data_pointer_5 = data_pointer_11;
            }
            ExFreeToPagedLookasideList((void *)(MpRegData + 0x400), data_pointer_5);
        }
    }
    block_10:
    if (allocation_2)
    {
        MpRegpFreeUnicodeString(allocation_2);
    }

    if (allocation_4)
    {
        MpRegpFreeDestinationKeyName(allocation_4);
    }
    if (allocation)
    {
        MpRegFreeMatchingInfo(allocation);
    }
    if (allocation_3)
    {
        MpRegFreeMatchingInfo(allocation_3);
    }
    if (buffer_2)
    {
        ExFreeToPagedLookasideList((void *)(MpRegData + 0x40), buffer_2);
    }
    if (process_context_2)
    {
        MpReleaseProcessContext(process_context_2);
    }
    return;
}

void MpRegPreReplaceKey(int64_t *input, uint64_t input_2, int64_t *input_3, char *input_4, void *input_5)
{
    char byte_value;
    void *trace_argument_3;
    int64_t value;
    int64_t process_context;
    int64_t value_2;
    int64_t value_3;
    int64_t process_context_2;
    uint64_t value_4;
    int64_t *buffer;
    int64_t *data_pointer;
    int64_t *data_pointer_2;
    char byte_value_2;
    void *data_pointer_3;
    bool enabled;
    uint64_t value_5;
    void *data_pointer_4;
    uint32_t value_6;
    char byte_value_3;
    int32_t value_7;
    uint64_t value_8;
    char *bytes;
    int32_t value_9;
    int64_t *data_pointer_5;
    int64_t *data_pointer_6;
    int64_t value_11;
    uint32_t value_12;
    uint32_t value_13;
    char *bytes_2;
    int64_t allocation;
    data_pointer_3 = input_5;
    value_6 = (uint32_t)((uint64_t)value_5 >> 0x20);
    value_11 = 0;
    allocation = 0;
    value_3 = 0;
    value_2 = 0;
    trace_argument_3 = NULL;
    data_pointer = NULL;
    buffer = NULL;
    value = 0;
    process_context = 0;
    value_7 = 0;
    bytes = input_4;
    data_pointer_5 = input_3;
    data_pointer_6 = input;
    if (input && input_3)
    {
        *input_3 = 0;
        allocation = value_11;
        process_context_2 = value_3;
        data_pointer_2 = data_pointer;
        if (!(*(uint32_t *)(MpData + 0x360) & 1))
        {
            goto block_3;
        }
        value_12 = *(uint32_t *)(MpData + 0x364) & 0x40;
        enabled = value_12 != 0;
        if ('\0' <= (char)(input_2 >> 8) && (!value_12 || !(input_2 >> 0x18 & 2)))
        {
            goto block_3;
        }
        if (input_5)
        {
            trace_argument_3 = input_5;
            data_pointer_3 = NULL;
            block_1:
            value_8 = 0x8000;

            if (*(uint32_t *)(MpData + 0x364) & 8)
            {
                value_8 = 0x100408000;
            }
            WdStoreField(&value_8, 0, 4, (uint64_t)(((uint64_t)(((((enabled * '\x02' | enabled) << 3 | enabled) * '\x02' | enabled) * '\x02' | enabled) * '\x02') & 0xffULL) << 24 | (uint64_t)((uint32_t)value_8) & 0xffffffULL));
            value_9 = MpRegMatchData(trace_argument_3, NULL, value_8, &value);
            allocation = value;
            if (0 <= value_9)
            {
                if (value)
                {
                    byte_value = 0;
                    byte_value_3 = '\0';
                    if (*(uint8_t *)(value + 0x1a) & 0x40 || *(uint8_t *)(value + 0x1c) & 1)
                    {
                        MpGetProcessContextByObject(IoGetCurrentProcess(), &process_context);
                        value_3 = process_context;
                        byte_value = MpIsRegistryHardeningExemptByContext(process_context);
                        byte_value_3 = byte_value;
                    }
                    if (*(uint8_t *)(allocation + 0x1a) & 0x40)
                    {
                        value_7 = 1;
                        if (value_3 && !byte_value)
                        {
                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                            {
                                value_6 = (uint32_t)((uint64_t)(*(uint64_t *)(value_3 + 0x80)) >> 0x20);
                                WPP_SF_ZZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x73);
                            }
                            MpLogPrintfW(L"[Mini-filter] Denied registry key replace of [%wZ] triggered by process [%wZ].", trace_argument_3, *(uint64_t *)(value_3 + 0x80));
                            *bytes = '\x01';
                            *(uint8_t *)(allocation + 0x19) = *(uint8_t *)(allocation + 0x19) | 0x80;
                        }
                        else
                        {
                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                            {
                                if (value_3)
                                {
                                    value_6 = (uint32_t)((uint64_t)(*(uint64_t *)(value_3 + 0x80)) >> 0x20);
                                }
                                else
                                {
                                    value_6 = 0;
                                }
                                WPP_SF_ZZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x74);
                            }
                            *(uint8_t *)(allocation + 0x1a) = *(uint8_t *)(allocation + 0x1a) & 0xbf;
                        }
                    }
                    byte_value = MpRegTPAllowChange((void *)(allocation + 0x18), trace_argument_3, &process_context);
                    value_3 = process_context;
                    if (byte_value)
                    {
                        value_9 = value_7;
                    }
                    else
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                        {
                            if (process_context)
                            {
                                value_6 = (uint32_t)((uint64_t)(*(uint64_t *)(process_context + 0x80)) >> 0x20);
                            }
                            else
                            {
                                value_6 = 0;
                            }
                            WPP_SF_ZZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x75);
                        }
                        if (value_3)
                        {
                            value_4 = *(uint64_t *)(value_3 + 0x80);
                        }
                        else
                        {
                            value_4 = 0;
                        }
                        MpLogPrintfW(L"[Mini-filter][TP] Denied registry replace to [%wZ] triggered by process [%wZ].", trace_argument_3, value_4);
                        value_7 = 2;
                        *bytes = '\x01';
                        *(uint8_t *)(allocation + 0x19) = *(uint8_t *)(allocation + 0x19) | 0x80;
                        value_9 = 2;
                    }
                    if (*bytes == '\x01')
                    {
                        *(uint8_t *)(allocation + 0x1a) = *(uint8_t *)(allocation + 0x1a) | 0x40;
                    }
                    bytes_2 = bytes;
                    if (value_9)
                    {
                        if (value_9 == 2 && value_3 && *(uint32_t *)(value_3 + 0x3c) & 0x200)
                        {
                            MpTraceRegHardeningNotification(3, ((uint64_t)((uint64_t)((uint64_t)bytes >> 8)) & 0xffffffffffffffULL) << 8 | (uint64_t)(*bytes == '\0') & 0xffULL, value_3, "RegNtPreReplaceKey", trace_argument_3, NULL, NULL);
                            bytes_2 = bytes;
                        }
                        bytes_2 = (char *)(((uint64_t)((uint64_t)((uint64_t)bytes_2 >> 8)) & 0xffffffffffffffULL) << 8 | (uint64_t)(*bytes_2 == '\0') & 0xffULL);
                        data_pointer_4 = trace_argument_3;
                        MpTraceRegHardeningNotification((value_7 == 2) + '\x01', bytes_2, value_3, "RegNtPreReplaceKey", trace_argument_3, NULL, NULL);
                        value_6 = (uint32_t)((uint64_t)data_pointer_4 >> 0x20);
                    }
                    if (*(char *)(allocation + 0x1b) <= '\xff')
                    {
                        byte_value_2 = MpRegIsTamperProtectedLevelExempt(&process_context);
                        value_3 = process_context;
                        bytes_2 = (char *)((uint64_t)((uint64_t)trace_argument_3) & 0xffffffffffffff00 | (uint64_t)byte_value_2 & 0xff);
                        data_pointer_4 = trace_argument_3;
                        MpTraceRegHardeningNotification(4, bytes_2, process_context, "RegNtPreReplaceKey", trace_argument_3, NULL, NULL);
                        value_6 = (uint32_t)((uint64_t)data_pointer_4 >> 0x20);
                    }
                    if (*(uint8_t *)(allocation + 0x1c) & 1)
                    {
                        data_pointer_4 = trace_argument_3;
                        MpTraceRegHardeningNotification(5, (uint64_t)((uint64_t)bytes_2) & 0xffffffffffffff00 | (uint64_t)byte_value_3 & 0xff, value_3, "RegNtPreReplaceKey", trace_argument_3, NULL, NULL);
                        value_6 = (uint32_t)((uint64_t)data_pointer_4 >> 0x20);
                    }
                    if (*bytes)
                    {
                        buffer = (int64_t *)ExAllocateFromPagedLookasideList((void *)(MpRegData + 0x40));
                        if (buffer)
                        {
                            memset(buffer, 0, (char *)0x78);
                            buffer[1] = (int64_t)trace_argument_3;
                            buffer[4] = data_pointer_6[1];
                            buffer[5] = data_pointer_6[2];
                            *buffer = *data_pointer_6;
                            buffer[0xc] = allocation;
                            buffer[0xb] = *(int64_t *)(allocation + 0x18);
                            *(int32_t *)(&buffer[0xd]) = value_7;
                            value_9 = MpRegpSendNotification(value_3, buffer);
                            if (value_9 <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                            {
                                value_13 = 0x78;
                                value_4 = ((uint64_t)value_6 & 0xffffffffULL) << 32 | (uint64_t)value_9 & 0xffffffffULL;
                                data_pointer = buffer;
                                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_13, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), value_4);
                                buffer = data_pointer;
                            }
                        }
                        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            value_13 = 0x77;
                            goto block_2;
                        }
                    }
                    else
                    {
                        value_11 = MpRegpAllocRenameKeyContext();
                        if (value_11)
                        {
                            *(uint64_t *)(value_11 + 0x30) = 0;
                            *(void **)(value_11 + 0x28) = trace_argument_3;
                            trace_argument_3 = NULL;
                            *(int64_t *)(value_11 + 0x38) = allocation;
                            allocation = 0;
                            *data_pointer_5 = value_11;
                        }
                        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            value_13 = 0x76;
                            buffer = data_pointer;
                            block_2:
                            value_4 = ((uint64_t)value_6 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INSUFFICIENT_RESOURCES & 0xffffffffULL;

                            data_pointer = buffer;
                            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_13, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), value_4);
                            buffer = data_pointer;
                        }
                    }
                }
                else
                {
                    value_3 = value_2;
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x72, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_6 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_UNSUCCESSFUL & 0xffffffffULL);
                    }
                }
            }
            else
            {
                if (value_9 != -0x3ffffd8e && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x71, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_6 & 0xffffffffULL) << 32 | (uint64_t)value_9 & 0xffffffffULL);
                }
                allocation = value;
                buffer = data_pointer;
            }
        }
        else
        {
            value_9 = MpRegpGetKeyName(*input, &trace_argument_3);
            if (0 <= value_9)
            {
                goto block_1;
            }
            buffer = data_pointer;
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                value_13 = 0x70;
                value_4 = ((uint64_t)value_6 & 0xffffffffULL) << 32 | (uint64_t)value_9 & 0xffffffffULL;
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_13, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), value_4);
                buffer = data_pointer;
            }
        }
    }
    else
    {
        process_context_2 = value_2;
        data_pointer_2 = buffer;
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            goto block_3;
        }
        value_13 = 0x6f;
        value_4 = ((uint64_t)value_6 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INVALID_PARAMETER & 0xffffffffULL;
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_13, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), value_4);
        buffer = data_pointer;
    }
    data_pointer_4 = trace_argument_3;
    process_context_2 = value_3;
    data_pointer_2 = buffer;
    if (trace_argument_3)
    {
        if (*(int64_t *)(MpRegData + 0x28))
        {
            (*__guard_dispatch_icall_fptr)(trace_argument_3);
        }
        else
        {
            if (((int64_t *)trace_argument_3)[2])
            {
                ExFreePoolWithTag(((int64_t *)trace_argument_3)[2], 0x4b72504d);
            }
            ExFreeToPagedLookasideList((void *)(MpRegData + 0x400), data_pointer_4);
        }
        trace_argument_3 = NULL;
    }
    block_3:
    if (data_pointer_3)
    {
        if (*(int64_t *)(MpRegData + 0x28))
        {
            (*__guard_dispatch_icall_fptr)(data_pointer_3);
        }
        else
        {
            if (((int64_t *)data_pointer_3)[2])
            {
                ExFreePoolWithTag(((int64_t *)data_pointer_3)[2], 0x4b72504d);
            }
            ExFreeToPagedLookasideList((void *)(MpRegData + 0x400), data_pointer_3);
        }
    }

    if (allocation)
    {
        MpRegFreeMatchingInfo(allocation);
    }
    if (data_pointer_2)
    {
        ExFreeToPagedLookasideList((void *)(MpRegData + 0x40), data_pointer_2);
    }
    if (process_context_2)
    {
        MpReleaseProcessContext(process_context_2);
    }
    return;
}

void MpRegPreRestoreKey(int64_t *input, uint64_t input_2, int64_t *input_3, char *input_4, void *input_5)
{
    uint32_t value;
    uint64_t name;
    void *data_pointer;
    int64_t allocation;
    void *trace_argument_3;
    int64_t value_2;
    int64_t process_context;
    int64_t *data_pointer_2;
    int64_t *data_pointer_3;
    int64_t value_3;
    char byte_value;
    int64_t value_4;
    int64_t process_context_2;
    bool enabled;
    bool enabled_2;
    uint64_t value_5;
    uint64_t value_6;
    void *data_pointer_4;
    uint32_t value_7;
    char byte_value_2;
    char byte_value_3;
    uint64_t value_8;
    char *bytes;
    void *data_pointer_5;
    int64_t *data_pointer_6;
    int64_t *data_pointer_7;
    int32_t value_10;
    int32_t value_11;
    int64_t handle;
    int64_t *buffer_2;
    uint32_t value_12;
    char *bytes_2;
    value_7 = (uint32_t)((uint64_t)value_5 >> 0x20);
    handle = 0;
    allocation = 0;
    data_pointer_5 = input_5;
    value_4 = 0;
    value_3 = 0;
    buffer_2 = NULL;
    data_pointer_2 = NULL;
    value_11 = 0;
    trace_argument_3 = NULL;
    value_2 = 0;
    process_context = 0;
    data_pointer = input_5;
    bytes = input_4;
    data_pointer_6 = input;
    data_pointer_7 = input_3;
    if (input && input_3)
    {
        *input_3 = 0;
        allocation = handle;
        data_pointer_3 = buffer_2;
        process_context_2 = value_4;
        if (!(*(uint32_t *)(MpData + 0x360) & 1))
        {
            goto block_3;
        }
        value_12 = *(uint32_t *)(MpData + 0x364) & 0x40;
        enabled = value_12 != 0;
        if (!(input_2 >> 8 & 0x40) && (!value_12 || !(input_2 >> 0x18 & 2)))
        {
            goto block_3;
        }
        if (input_5)
        {
            trace_argument_3 = input_5;
            data_pointer_5 = NULL;
            block_1:
            value = 0x4000;

            enabled_2 = (*(uint32_t *)(MpData + 0x364) & 8) != 0;
            if (enabled_2)
            {
                value = 0x804000;
            }
            WdStoreField(&value_8, 0, 4, (uint64_t)(((uint64_t)(((((enabled * '\x02' | enabled) << 3 | enabled) * '\x02' | enabled) * '\x02' | enabled) * '\x02') & 0xffULL) << 24 | (uint64_t)value & 0xffffffULL));
            value_8 = (uint64_t)(((uint64_t)enabled_2 & 0xffULL) << 32 | (uint64_t)((uint32_t)value_8) & 0xffffffffULL) | 0x200000000;
            value_10 = MpRegMatchData(trace_argument_3, NULL, value_8, &value_2);
            allocation = value_2;
            if (0 <= value_10)
            {
                if (value_2)
                {
                    byte_value = 0;
                    byte_value_2 = '\0';
                    if (*(char *)(value_2 + 0x1a) < '\0' || *(uint8_t *)(value_2 + 0x1c) & 1)
                    {
                        MpGetProcessContextByObject(IoGetCurrentProcess(), &process_context);
                        value_4 = process_context;
                        byte_value = MpIsRegistryHardeningExemptByContext(process_context);
                        byte_value_2 = byte_value;
                    }
                    if (*(char *)(allocation + 0x1a) <= '\xff')
                    {
                        value_11 = 1;
                        if (value_4 && !byte_value)
                        {
                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                            {
                                value_7 = (uint32_t)((uint64_t)(*(uint64_t *)(value_4 + 0x80)) >> 0x20);
                                WPP_SF_ZZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x81);
                            }
                            MpLogPrintfW(L"[Mini-filter] Denied registry key restore of [%wZ] triggered by process [%wZ].", trace_argument_3, *(uint64_t *)(value_4 + 0x80));
                            *bytes = '\x01';
                            *(uint8_t *)(allocation + 0x19) = *(uint8_t *)(allocation + 0x19) | 0x40;
                        }
                        else
                        {
                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                            {
                                if (value_4)
                                {
                                    value_7 = (uint32_t)((uint64_t)(*(uint64_t *)(value_4 + 0x80)) >> 0x20);
                                }
                                else
                                {
                                    value_7 = 0;
                                }
                                WPP_SF_ZZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x82);
                            }
                            *(uint8_t *)(allocation + 0x1a) = *(uint8_t *)(allocation + 0x1a) & 0x7f;
                        }
                    }
                    data_pointer = trace_argument_3;
                    byte_value = MpRegTPAllowChange((void *)(allocation + 0x18), trace_argument_3, &process_context);
                    value_4 = process_context;
                    if (!byte_value)
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                        {
                            if (process_context)
                            {
                                value_7 = (uint32_t)((uint64_t)(*(uint64_t *)(process_context + 0x80)) >> 0x20);
                            }
                            else
                            {
                                value_7 = 0;
                            }
                            WPP_SF_ZZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x83);
                        }
                        if (value_4)
                        {
                            name = *(uint64_t *)(value_4 + 0x80);
                        }
                        else
                        {
                            name = 0;
                        }
                        data_pointer = trace_argument_3;
                        MpLogPrintfW(L"[Mini-filter][TP] Denied registry restore [%wZ] triggered by process [%wZ].", trace_argument_3, name);
                        value_11 = 2;
                        *bytes = '\x01';
                        *(uint8_t *)(allocation + 0x19) = *(uint8_t *)(allocation + 0x19) | 0x40;
                    }
                    if (*bytes == '\x01')
                    {
                        *(uint8_t *)(allocation + 0x1a) = *(uint8_t *)(allocation + 0x1a) | 0x80;
                    }
                    if (value_11)
                    {
                        bytes_2 = bytes;
                        if (value_11 == 2 && value_4 && *(uint32_t *)(value_4 + 0x3c) & 0x200)
                        {
                            data_pointer = (void *)(((uint64_t)((uint64_t)((uint64_t)data_pointer >> 8)) & 0xffffffffffffffULL) << 8 | (uint64_t)(*bytes == '\0') & 0xffULL);
                            MpTraceRegHardeningNotification(3, data_pointer, value_4, "RegNtPreRestoreKey", trace_argument_3, NULL, NULL);
                            bytes_2 = bytes;
                        }
                        data_pointer = (void *)(((uint64_t)((uint64_t)((uint64_t)data_pointer >> 8)) & 0xffffffffffffffULL) << 8 | (uint64_t)(*bytes_2 == '\0') & 0xffULL);
                        data_pointer_4 = trace_argument_3;
                        MpTraceRegHardeningNotification((value_11 == 2) + '\x01', data_pointer, value_4, "RegNtPreRestoreKey", trace_argument_3, NULL, NULL);
                        value_7 = (uint32_t)((uint64_t)data_pointer_4 >> 0x20);
                    }
                    if (*(char *)(allocation + 0x1b) <= '\xff')
                    {
                        byte_value_3 = MpRegIsTamperProtectedLevelExempt(&process_context);
                        value_4 = process_context;
                        data_pointer = (void *)((uint64_t)((uint64_t)trace_argument_3) & 0xffffffffffffff00 | (uint64_t)byte_value_3 & 0xff);
                        data_pointer_4 = trace_argument_3;
                        MpTraceRegHardeningNotification(4, data_pointer, process_context, "RegNtPreRestoreKey", trace_argument_3, NULL, NULL);
                        value_7 = (uint32_t)((uint64_t)data_pointer_4 >> 0x20);
                    }
                    if (*(uint8_t *)(allocation + 0x1c) & 1)
                    {
                        data_pointer_4 = trace_argument_3;
                        MpTraceRegHardeningNotification(5, (uint64_t)((uint64_t)data_pointer) & 0xffffffffffffff00 | (uint64_t)byte_value_2 & 0xff, value_4, "RegNtPreRestoreKey", trace_argument_3, NULL, NULL);
                        value_7 = (uint32_t)((uint64_t)data_pointer_4 >> 0x20);
                    }
                    if (*bytes)
                    {
                        buffer_2 = (int64_t *)ExAllocateFromPagedLookasideList((void *)(MpRegData + 0x40));
                        data_pointer_2 = buffer_2;
                        if (buffer_2)
                        {
                            memset(buffer_2, 0, (char *)0x78);
                            buffer_2[1] = (int64_t)trace_argument_3;
                            name = *__imp_IoFileObjectType;
                            handle = data_pointer_6[1];
                            if ((int32_t)MpQueryObjectNameByHandle(handle, name, &buffer_2[4]) <= -1)
                            {
                                buffer_2[4] = 0;
                            }
                            *(uint32_t *)(&buffer_2[9]) = *(uint32_t *)(&data_pointer_6[2]);
                            *buffer_2 = *data_pointer_6;
                            buffer_2[0xc] = allocation;
                            buffer_2[0xb] = *(int64_t *)(allocation + 0x18);
                            *(int32_t *)(&buffer_2[0xd]) = value_11;
                            value_11 = MpRegpSendNotification(value_4, buffer_2);
                            if (value_11 <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                            {
                                name = 0x86;
                                value_6 = ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)value_11 & 0xffffffffULL;
                                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), name, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), value_6);
                                data_pointer_2 = buffer_2;
                            }
                        }
                        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            name = 0x85;
                            block_2:
                            value_6 = ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INSUFFICIENT_RESOURCES & 0xffffffffULL;

                            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), name, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), value_6);
                            data_pointer_2 = buffer_2;
                        }
                    }
                    else
                    {
                        handle = MpRegpAllocRenameKeyContext();
                        if (handle)
                        {
                            *(uint64_t *)(handle + 0x30) = 0;
                            *(void **)(handle + 0x28) = trace_argument_3;
                            trace_argument_3 = NULL;
                            *(int64_t *)(handle + 0x38) = allocation;
                            allocation = 0;
                            *data_pointer_7 = handle;
                        }
                        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            name = 0x84;
                            goto block_2;
                        }
                    }
                }
                else
                {
                    value_4 = value_3;
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x80, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_UNSUCCESSFUL & 0xffffffffULL);
                    }
                }
            }
            else
            {
                if (value_10 != -0x3ffffd8e && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x7f, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)value_10 & 0xffffffffULL);
                }
                allocation = value_2;
                data_pointer_2 = buffer_2;
            }
        }
        else
        {
            value_10 = MpRegpGetKeyName(*input, &trace_argument_3);
            if (0 <= value_10)
            {
                goto block_1;
            }
            data_pointer_2 = buffer_2;
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                if (*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                {
                    name = 0x7e;
                    value_6 = ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)value_10 & 0xffffffffULL;
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), name, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), value_6);
                    data_pointer_2 = buffer_2;
                }
            }
        }
    }
    else
    {
        data_pointer_3 = data_pointer_2;
        process_context_2 = value_3;
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            goto block_3;
        }
        name = 0x7d;
        value_6 = ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INVALID_PARAMETER & 0xffffffffULL;
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), name, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), value_6);
        data_pointer_2 = buffer_2;
    }
    data_pointer = trace_argument_3;
    if (trace_argument_3)
    {
        if (*(int64_t *)(MpRegData + 0x28))
        {
            (*__guard_dispatch_icall_fptr)(trace_argument_3);
        }
        else
        {
            if (((int64_t *)trace_argument_3)[2])
            {
                ExFreePoolWithTag(((int64_t *)trace_argument_3)[2], 0x4b72504d);
            }
            ExFreeToPagedLookasideList((void *)(MpRegData + 0x400), data_pointer);
        }
        trace_argument_3 = NULL;
    }
    data_pointer = data_pointer_5;
    data_pointer_3 = data_pointer_2;
    process_context_2 = value_4;
    block_3:
    if (data_pointer)
    {
        if (*(int64_t *)(MpRegData + 0x28))
        {
            (*__guard_dispatch_icall_fptr)(data_pointer);
        }
        else
        {
            if (((int64_t *)data_pointer)[2])
            {
                ExFreePoolWithTag(((int64_t *)data_pointer)[2], 0x4b72504d);
                data_pointer = data_pointer_5;
            }
            ExFreeToPagedLookasideList((void *)(MpRegData + 0x400), data_pointer);
        }
    }

    if (allocation)
    {
        MpRegFreeMatchingInfo(allocation);
    }
    if (data_pointer_3)
    {
        if (data_pointer_3[4])
        {
            MpFreeObjectName(data_pointer_3[4]);
        }
        ExFreeToPagedLookasideList((void *)(MpRegData + 0x40), data_pointer_3);
    }
    if (process_context_2)
    {
        MpReleaseProcessContext(process_context_2);
    }
    return;
}

void MpRegShutdown(void)
{
    int64_t *data_pointer;
    int64_t *allocation;
    int64_t reg_data;
    if (!MpRegData)
    {
        return;
    }
    CmUnRegisterCallback(*(uint64_t *)(MpRegData + 0x30));
    while (true)
    {
        data_pointer = (int64_t *)(MpRegData + 0x118);
        allocation = (int64_t *)(*data_pointer);
        if (allocation == data_pointer)
        {
            reg_data = MpRegData;
            if (*(int64_t *)(MpRegData + 0xf8))
            {
                CmUnRegisterCallback(*(uint64_t *)(MpRegData + 0xf8));
                reg_data = MpRegData;
                *(uint64_t *)(MpRegData + 0xf8) = 0;
            }
            if (*(int64_t *)(reg_data + 0x10))
            {
                ExFreePoolWithTag(*(int64_t *)(reg_data + 0x10), 0x4d72504d);
            }
            MpRegpFreeAllCallContextsUnsafe();
            ExDeletePagedLookasideList(MpRegData + 0x40);
            ExDeletePagedLookasideList(MpRegData + 0x180);
            ExDeletePagedLookasideList(MpRegData + 0x200);
            ExDeletePagedLookasideList(MpRegData + 0x280);
            ExDeletePagedLookasideList(MpRegData + 0x300);
            ExDeletePagedLookasideList(MpRegData + 0x380);
            ExDeletePagedLookasideList(MpRegData + 0x400);
            ExDeletePagedLookasideList(MpRegData + 0x480);
            FltDeletePushLock(MpRegData + 8);
            ExFreePoolWithTag(MpRegData, 0x4472504d);
            return;
        }
        if ((int64_t *)allocation[1] != data_pointer || (reg_data = *allocation, (int64_t *)(*(int64_t *)(reg_data + 8)) != allocation))
        {
            break;
        }
        *data_pointer = reg_data;
        *(int64_t **)(reg_data + 8) = data_pointer;
        if (allocation[2])
        {
            ExFreePoolWithTag(allocation[2], 0x4b72504d);
        }
        ExFreePoolWithTag(allocation, 0x7461504d);
    }

    (*(WD_ROUTINE)swi(0x29))(3);
}

void MpUnregisterRegCallback(void)
{
    int64_t reg_data;
    if (MpRegData && *(int64_t *)(MpRegData + 0x30))
    {
        CmUnRegisterCallback(*(uint64_t *)(MpRegData + 0x30));
        reg_data = MpRegData;
        *(uint64_t *)(MpRegData + 0x30) = 0;
        ExAcquireFastMutex(reg_data + 0x128);
        MpRegpFreeAllCallContextsUnsafe();
        ExReleaseFastMutex(MpRegData + 0x128);
    }
    return;
}

void MpRegCreateHardeningList(void)
{
    int64_t value;
    int64_t value_2;
    int64_t value_3;
    int64_t value_4;
    uint32_t object_attributes;
    uint64_t key_handle;
    int64_t result_length[10];
    uint32_t value_5;
    uint64_t value_6;
    uint64_t value_7;
    bool enabled;
    int64_t *buffer_size;
    uint32_t value_8;
    uint32_t *data_pointer;
    uint32_t value_9;
    uint64_t value_10;
    uint64_t *data_pointer_2;
    uint32_t value_11;
    uint32_t value_12;
    uint64_t value_13;
    uint64_t value_14;
    int32_t status;
    uint32_t value_15;
    uint64_t value_16;
    int64_t value_17;
    uint32_t value_18;
    uint32_t value_19;
    uint64_t value_20;
    uint64_t value_21;
    uint64_t value_22;
    int32_t value_23;
    int64_t *allocation;
    int64_t *data_pointer_3;
    uint64_t value_25;
    uint32_t object_attributes_2;
    int64_t key_handle_2;
    value_8 = (uint32_t)((uint64_t)value_7 >> 0x20);
    value_6 = 0;
    value_4 = 0;
    value_9 = 0;
    value_12 = 0;
    result_length[1] = 0;
    result_length[2] = 0;
    key_handle_2 = 0;
    enabled = 0;
    result_length[5] = 0;
    result_length[6] = 0;
    value_3 = 0;
    value_2 = 0;
    result_length[7] = 0;
    result_length[8] = 0;
    RtlInitUnicodeString(&result_length[5], L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet");
    data_pointer_2 = &result_length[5];
    object_attributes_2 = 0x30;
    value_10 = 0;
    value_11 = 0x240;
    value_13 = 0;
    value_14 = 0;
    status = ZwOpenKey(&key_handle_2, 0x80000000, &object_attributes_2);
    if (0 <= status)
    {
        buffer_size = &value_2;
        status = MpReferenceObjectByHandle(key_handle_2, 0x80000000, 0, 0, buffer_size);
        value_8 = (uint32_t)((uint64_t)buffer_size >> 0x20);
        if (0 <= status)
        {
            status = MpRegpGetKeyName(value_2, &value_3);
            value_8 = (uint32_t)((uint64_t)buffer_size >> 0x20);
            if (0 <= status)
            {
                RtlInitUnicodeString(&result_length[7], L"\\Services\\WinDefend");
                do
                {
                    allocation = MpAllocatePoolWithTag(1, (char *)0x20, 0x7461504d);
                    if (allocation)
                    {
                        RtlInitUnicodeString(&result_length[1], *(uint64_t *)(value_6 * 0x10 + WD_REG_UNRECOVERED_ADDRESS3));
                        data_pointer_3 = &value_4;
                        status = MpAppendUnicodeStringToUnicodeString(value_3, &result_length[1], data_pointer_3, 0x4b72504d);
                        if (0 <= status)
                        {
                            if (!enabled)
                            {
                                if (!RtlCompareUnicodeString(&result_length[1], &result_length[7], (uint64_t)((uint64_t)data_pointer_3) & 0xffffffffffffff00 | (uint64_t)1 & 0xff))
                                {
                                    WdStoreField(&result_length[0], 0, 4, (uint64_t)0);
                                    key_handle = 0;
                                    value_15 = 0;
                                    result_length[3] = 0;
                                    result_length[4] = 0;
                                    value_19 = 0;
                                    enabled = 1;
                                    RtlInitUnicodeString(&result_length[3], L"Start");
                                    value_17 = value_4;
                                    object_attributes = 0x30;
                                    value_16 = 0;
                                    value_20 = 0;
                                    value_21 = 0;
                                    value_18 = 0x240;
                                    status = ZwOpenKey(&key_handle, 0x2001f, &object_attributes);
                                    value_8 = (uint32_t)((uint64_t)buffer_size >> 0x20);
                                    if (0 <= status)
                                    {
                                        buffer_size = (int64_t *)(((uint64_t)value_8 & 0xffffffffULL) << 32 | (uint64_t)0x10 & 0xffffffffULL);
                                        result_length[9] = 0;
                                        value_22 = 0;
                                        data_pointer = (uint32_t *)result_length;
                                        ZwQueryValueKey(key_handle, &result_length[3], 2, &result_length[9], buffer_size, result_length);
                                        value_8 = (uint32_t)((uint64_t)data_pointer >> 0x20);
                                        status = (int32_t)result_length;
                                        if (0 <= status)
                                        {
                                            if (value_23 == 4)
                                            {
                                                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                                {
                                                    WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xa8, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread());
                                                }
                                                buffer_size = result_length;
                                                WdStoreField(&result_length[0], 0, 4, (uint64_t)3);
                                                status = ZwSetValueKey(key_handle, &result_length[3], 0, 4, buffer_size, ((uint64_t)value_8 & 0xffffffffULL) << 32 | (uint64_t)4 & 0xffffffffULL);
                                                if (status <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                                {
                                                    value_25 = 0xa9;
                                                    buffer_size = (int64_t *)((uint64_t)((uint64_t)buffer_size) & 0xffffffff00000000 | (uint64_t)status & 0xffffffff);
                                                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_25, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), buffer_size);
                                                }
                                            }
                                        }
                                        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                        {
                                            value_25 = 0xaa;
                                            buffer_size = (int64_t *)((uint64_t)((uint64_t)buffer_size) & 0xffffffff00000000 | (uint64_t)status & 0xffffffff);
                                            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_25, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), buffer_size);
                                        }
                                        ZwClose(key_handle);
                                    }
                                    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                    {
                                        buffer_size = (int64_t *)(((uint64_t)value_8 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
                                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xab, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), buffer_size);
                                    }
                                }
                            }
                            allocation[2] = value_4;
                            data_pointer_3 = (int64_t *)(MpRegData + 0x118);
                            value_4 = 0;
                            value = *data_pointer_3;
                            if (*(int64_t **)(value + 8) != data_pointer_3)
                            {
                                (*(WD_ROUTINE)swi(0x29))(3);
                            }
                            *allocation = value;
                            allocation[1] = (int64_t)data_pointer_3;
                            *(int64_t **)(value + 8) = allocation;
                            *data_pointer_3 = (int64_t)allocation;
                        }
                        else
                        {
                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                            {
                                buffer_size = (int64_t *)((uint64_t)((uint64_t)buffer_size) & 0xffffffff00000000 | (uint64_t)status & 0xffffffff);
                                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xa7, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), buffer_size);
                            }
                            ExFreePoolWithTag(allocation, 0x7461504d);
                        }
                    }
                    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xa6, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread());
                    }
                    value_5 = (int32_t)value_6 + 1;
                    value_6 = value_5;
                }
                while (value_5 < 8);
                goto block_1;
            }
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4))
            {
                goto block_1;
            }
            value_25 = 0xa5;
        }
        else
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                goto block_1;
            }
            value_25 = 0xa4;
        }
    }
    else
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            goto block_1;
        }
        value_25 = 0xa3;
    }
    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_25, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_8 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
    block_1:
    if (value_3)
    {
        MpRegpFreeKeyName();
        value_3 = 0;
    }

    if (value_2)
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
        value_2 = 0;
    }
    if (key_handle_2)
    {
        ZwClose(key_handle_2);
    }
    return;
}

void MpRegInitialize(void)
{
    uint32_t *reg_data;
    uint64_t value;
    uint64_t value_2;
    uint32_t value_3;
    uint64_t value_4;
    uint64_t value_5;
    uint64_t value_6;
    int32_t value_8;
    int64_t routine;
    int64_t routine_2;
    uint32_t *allocation;
    uint32_t value_9;
    uint64_t string;
    uint64_t string_2;
    value_9 = (uint32_t)((uint64_t)value_4 >> 0x20);
    value_3 = (uint32_t)((uint64_t)value >> 0x20);
    routine_2 = 0;
    string = 0;
    value_5 = 0;
    routine = routine_2;
    if (*(uint32_t *)(MpData + 0x360) & 4)
    {
        RtlInitUnicodeString(&string, L"CmCallbackGetKeyObjectIDEx");
        routine = MmGetSystemRoutineAddress(&string);
        if (routine)
        {
            RtlInitUnicodeString(&string, L"CmCallbackReleaseKeyObjectIDEx");
            routine_2 = MmGetSystemRoutineAddress(&string);
            if (routine_2)
            {
                goto block_1;
            }
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return;
            }
            value_9 = 0xb;
        }
        else
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return;
            }
            value_9 = 10;
        }
        value_2 = ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)0xc0000002 & 0xffffffffULL;
    }
    else
    {
        block_1:
        allocation = (uint32_t *)MpAllocatePoolWithTag(ExDefaultNonPagedPoolType, (char *)0x500, 0x4472504d);

        MpRegData = allocation;
        if (allocation)
        {
            *allocation = 0x500da09;
            *(int64_t *)(&allocation[8]) = routine;
            *(int64_t *)(&allocation[10]) = routine_2;
            allocation[0x40] = 0;
            FltInitializePushLock(&allocation[2]);
            allocation = MpRegData;
            MpRegData[0x4a] = 1;
            *(uint64_t *)(&allocation[0x4c]) = 0;
            allocation[0x4e] = 0;
            KeInitializeEvent(&allocation[0x50], 1);
            allocation = MpRegData;
            MpRegData[0x30] = 1;
            *(uint64_t *)(&allocation[0x32]) = 0;
            allocation[0x34] = 0;
            KeInitializeEvent(&allocation[0x36], 1);
            reg_data = MpRegData;
            value_2 = ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)0x4e72504d & 0xffffffffULL;
            allocation = &MpRegData[0x58];
            *(uint32_t **)(&MpRegData[0x5a]) = allocation;
            *(uint32_t **)allocation = allocation;
            allocation = &reg_data[0x46];
            *(uint32_t **)(&reg_data[0x48]) = allocation;
            *(uint32_t **)allocation = allocation;
            ExInitializePagedLookasideList(&reg_data[0x10], 0, 0, 0, 0x78, value_2, 0);
            value_2 = (uint64_t)value_2 & 0xffffffff00000000 | (uint64_t)0x5872504d & 0xffffffff;
            ExInitializePagedLookasideList(&MpRegData[0x60], 0, 0, 0, 0x40, value_2, 0);
            value_2 = (uint64_t)value_2 & 0xffffffff00000000 | (uint64_t)0x5872504d & 0xffffffff;
            ExInitializePagedLookasideList(&MpRegData[0x80], 0, 0, 0, 0x50, value_2, 0);
            value_2 = (uint64_t)value_2 & 0xffffffff00000000 | (uint64_t)0x5872504d & 0xffffffff;
            ExInitializePagedLookasideList(&MpRegData[0xa0], 0, 0, 0, 0x50, value_2, 0);
            value_2 = (uint64_t)value_2 & 0xffffffff00000000 | (uint64_t)0x5872504d & 0xffffffff;
            ExInitializePagedLookasideList(&MpRegData[0xc0], 0, 0, 0, 0x38, value_2, 0);
            value_2 = (uint64_t)value_2 & 0xffffffff00000000 | (uint64_t)0x5372504d & 0xffffffff;
            ExInitializePagedLookasideList(&MpRegData[0xe0], 0, 0, 0, 0x28, value_2, 0);
            value_2 = (uint64_t)value_2 & 0xffffffff00000000 | (uint64_t)0x4b72504d & 0xffffffff;
            ExInitializePagedLookasideList(&MpRegData[0x100], 0, 0, 0, 0x230, value_2, 0);
            ExInitializePagedLookasideList(&MpRegData[0x120], 0, 0, 0, 0x40, (uint64_t)value_2 & 0xffffffff00000000 | (uint64_t)0x5872504d & 0xffffffff, 0);
            RtlInitUnicodeString(&MpRegData[0x42], L"LoadAppInit_DLLs");
            string_2 = 0;
            value_6 = 0;
            RtlInitUnicodeString(&string_2, L"328010");
            if (!(*(uint32_t *)(MpData + 0x360) & 8))
            {
                allocation = &MpRegData[0x3e];
                value_8 = CmRegisterCallbackEx(MpRegHardeningCallback, &string_2, *(uint64_t *)(MpData + 8), 0, allocation, 0);
                if (value_8 <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xd, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), (uint64_t)((uint64_t)allocation) & 0xffffffff00000000 | (uint64_t)value_8 & 0xffffffff);
                }
            }
            MpRegCreateHardeningList();
            return;
        }
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return;
        }
        value_9 = 0xc;
        value_2 = ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INSUFFICIENT_RESOURCES & 0xffffffffULL;
    }
    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_9, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), (uint64_t)KeGetCurrentThread(), value_2);
    return;
}

int32_t MpRegisterRegCallback(void)
{
    int32_t trace_argument_1;
    if (!MpRegData)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xac, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), WD_STATUS_UNSUCCESSFUL);
        }
        return -0x3fffffff;
    }
    trace_argument_1 = CmRegisterCallback(MpRegCallback, 0, MpRegData + 0x30);
    if (trace_argument_1 <= -1 && (*(uint64_t *)(MpRegData + 0x30) = 0, WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control)) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xad, WD_SYMBOL_ADDRESS(WPP_921a40f1b34b35cd72afe16e18fe99f5_Traceguids), trace_argument_1);
    }
    return trace_argument_1;
}

#include "wdfilter.h"

void MpRegpMatchName(uint16_t *source_text, WD_LAYOUT_65 *input)
{
    int64_t index = 0;
    uint64_t string = 0;
    uint32_t value;
    uint64_t value_2;
    uint64_t value_3 = 0;
    while (value_2 = (uint32_t)source_text[index] - (uint32_t)((uint16_t)L"\r\t\n_Classes"[index]), !((uint32_t)source_text[index] - (uint32_t)((uint16_t)L"\r\t\n_Classes"[index])))
    {
        value = (uint32_t)source_text[index + 1] - (uint32_t)(*(uint16_t *)(index * 2 + WD_REGMATCH_UNRECOVERED_ADDRESS));
        value_2 = value;
        if (value || (index = index + 2, index == 0xc))
        {
            break;
        }
    }

    if ((int32_t)value_2)
    {
        RtlInitUnicodeString(&string, source_text);
        RtlEqualUnicodeString(&string, input, (uint64_t)value_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
        return;
    }
    MpRegpMatchUserClasses(input);
    return;
}

void MpRegMatchData(uint16_t *input, WD_LAYOUT_65 *input_2, uint64_t input_3, int64_t *input_4)
{
    uint16_t value;
    int64_t *******data_pointer;
    int64_t ******data_pointer_2;
    uint64_t value_2;
    int64_t ******data_pointer_3;
    uint64_t string;
    int64_t values[2];
    uint64_t value_3;
    uint16_t value_4;
    uint16_t value_5;
    int64_t *******data_pointer_4;
    uint32_t value_6;
    int64_t *****source_text;
    uint16_t value_7;
    uint16_t value_8;
    uint16_t value_9;
    uint16_t value_10;
    uint16_t value_11;
    int64_t value_12;
    int64_t ******data_pointer_5;
    bool enabled;
    int64_t ******data_pointer_6;
    int64_t ******data_pointer_7;
    uint16_t value_13;
    uint16_t value_14;
    uint16_t value_15;
    uint16_t value_16;
    uint16_t value_17;
    uint16_t value_18;
    uint16_t value_19;
    uint16_t value_20;
    int64_t reg_data;
    int64_t *data_pointer_8;
    uint64_t value_21;
    uint32_t value_22;
    int64_t ******data_pointer_9;
    uint16_t value_23;
    uint32_t value_24;
    uint16_t value_25;
    uint16_t value_26;
    uint16_t value_27;
    uint16_t value_28;
    char byte_value;
    WD_LAYOUT_65 *record;
    int64_t *data_pointer_10;
    int64_t *******data_pointer_11;
    int64_t ******data_pointer_12;
    uint64_t value_29;
    uint64_t value_30;
    uint64_t value_31;
    uint64_t index;
    int64_t *******data_pointer_13;
    int32_t value_33;
    uint64_t value_34;
    data_pointer_11 = (int64_t *******)(&data_pointer);
    *input_4 = 0;
    data_pointer = (int64_t *******)(&data_pointer);
    value_11 = *input;
    value_5 = input[1];
    value_7 = input[4];
    value_8 = input[5];
    value_9 = input[6];
    value_10 = input[7];
    value_24 = 0;
    enabled = 1;
    values[0] = 0;
    value_2 = 0;
    value_29 = 0;
    data_pointer_2 = NULL;
    data_pointer_12 = NULL;
    value_4 = value_11;
    value_23 = value_5;
    value_25 = value_7;
    value_26 = value_8;
    value_27 = value_9;
    value_28 = value_10;
    record = input_2;
    data_pointer_10 = input_4;
    FltAcquirePushLockShared(MpRegData + 8);
    if (!(*(int64_t *)(MpRegData + 0x10)))
    {
        block_1:
        while (true)
        {
            data_pointer_13 = data_pointer;
            if ((int64_t ********)data_pointer == &data_pointer)
            {
                FltReleasePushLock(MpRegData + 8);
                if (values[0])
                {
                    MpRegFreeMatchingInfo();
                }
                return;
            }
            if ((int64_t ********)data_pointer[1] != &data_pointer || (data_pointer_4 = (int64_t *******)(*data_pointer), (int64_t *******)data_pointer_4[1] != data_pointer))
            {
                break;
            }
            data_pointer_4[1] = (int64_t ******)(&data_pointer);
            data_pointer = data_pointer_4;
            ExFreeToPagedLookasideList((void *)(MpRegData + 0x380), data_pointer_13);
        }


        (*(WD_ROUTINE)swi(0x29))(3);
    }
    data_pointer_5 = *(int64_t *******)(*(int64_t *)(MpRegData + 0x10) + 8);
    value_19 = value_27;
    value_20 = value_28;
    value_13 = value_4;
    value_14 = value_23;
    value_15 = (uint16_t)value_24;
    value_16 = WdLoadField(&value_24, 2, 2);
    value_17 = value_25;
    value_18 = value_26;
    while (true)
    {
        if (enabled)
        {
            WdStoreField(&data_pointer_3, 0, 4, (uint64_t)(((uint64_t)value_14 & 0xffffULL) << 16 | (uint64_t)value_13 & 0xffffULL));
            WdStoreField(&data_pointer_3, 0, 6, (uint64_t)(((uint64_t)value_15 & 0xffffULL) << 32 | (uint64_t)((uint32_t)data_pointer_3) & 0xffffffffULL));
            data_pointer_3 = (int64_t ******)(((uint64_t)value_16 & 0xffffULL) << 48 | (uint64_t)((uint64_t)data_pointer_3) & 0xffffffffffffULL);
            WdStoreField(&data_pointer_9, 0, 4, (uint64_t)(((uint64_t)value_18 & 0xffffULL) << 16 | (uint64_t)value_17 & 0xffffULL));
            WdStoreField(&data_pointer_9, 0, 6, (uint64_t)(((uint64_t)value_19 & 0xffffULL) << 32 | (uint64_t)((uint32_t)data_pointer_9) & 0xffffffffULL));
            data_pointer_9 = (int64_t ******)(((uint64_t)value_20 & 0xffffULL) << 48 | (uint64_t)((uint64_t)data_pointer_9) & 0xffffffffffffULL);
            FsRtlDissectName(&data_pointer_3, &value_2, &data_pointer_2);
        }
        do
        {
            value_22 = (uint32_t)((uint64_t)data_pointer_8 >> 0x20);
            index = 0;
            if (!(int16_t)value_2)
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    value_34 = 10;
                    block_2:
                    value_21 = ((uint64_t)value_22 & 0xffffffffULL) << 32 | (uint64_t)0xc00000e5 & 0xffffffffULL;

                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_34, WD_SYMBOL_ADDRESS(WPP_18b0827e260934bc7194ce1b305e55de_Traceguids), (uint64_t)KeGetCurrentThread(), value_21);
                }
                goto block_1;
            }
            source_text = data_pointer_5[2];
            if (source_text)
            {
                string = 0;
                value_30 = 0;
                do
                {
                    value_33 = (uint32_t)((uint16_t *)source_text)[index] - (uint32_t)((uint16_t)L"\r\t\n_Classes"[index]);
                    if (value_33 || (value_33 = (uint32_t)(*(uint16_t *)((int64_t)source_text + index * 2 + 2)) - (uint32_t)(*(uint16_t *)(index * 2 + WD_REGMATCH_UNRECOVERED_ADDRESS)), value_33))
                    {
                        break;
                    }
                    index += 2;
                }
                while (index != 0xc);
                if (value_33)
                {
                    RtlInitUnicodeString(&string, source_text);
                    byte_value = RtlEqualUnicodeString(&string, &value_2, (uint64_t)((uint64_t)source_text) & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
                }
                else
                {
                    byte_value = MpRegpMatchUserClasses(&value_2);
                }
            }
            else
            {
                data_pointer_3 = NULL;
                data_pointer_9 = NULL;
                value_3 = 0;
                value_31 = 0;
                if (*(int16_t *)(&data_pointer_5[3]) != -1)
                {
                    WdStoreField(&data_pointer_9, 0, 4, (uint64_t)(((uint64_t)value_8 & 0xffffULL) << 16 | (uint64_t)value_7 & 0xffffULL));
                    WdStoreField(&data_pointer_9, 0, 6, (uint64_t)(((uint64_t)value_9 & 0xffffULL) << 32 | (uint64_t)((uint32_t)data_pointer_9) & 0xffffffffULL));
                    data_pointer_9 = (int64_t ******)(((uint64_t)value_10 & 0xffffULL) << 48 | (uint64_t)((uint64_t)data_pointer_9) & 0xffffffffffffULL);
                    WdStoreField(&data_pointer_3, 0, 4, (uint64_t)(((uint64_t)value_5 & 0xffffULL) << 16 | (uint64_t)value_11 & 0xffffULL));
                    data_pointer_3 = (int64_t ******)((uint64_t)((uint32_t)data_pointer_3));
                    if (*(int16_t *)(&data_pointer_5[3]))
                    {
                        data_pointer_6 = data_pointer_3;
                        data_pointer_7 = data_pointer_9;
                        do
                        {
                            data_pointer_3 = data_pointer_6;
                            data_pointer_9 = data_pointer_7;
                            FsRtlDissectName(&data_pointer_3, &value_3, &data_pointer_2);
                            value_6 = (int32_t)index + 1;
                            index = value_6;
                            data_pointer_6 = data_pointer_2;
                            data_pointer_7 = data_pointer_12;
                        }
                        while (value_6 < *(uint16_t *)(&data_pointer_5[3]));
                    }
                    byte_value = (int16_t)value_3 != 0;
                }
                else
                {
                    byte_value = 1;
                }
            }
            if (byte_value)
            {
                data_pointer_8 = values;
                value_33 = MpRegpMatchEntry(data_pointer_5, input_3, record, &data_pointer_2, data_pointer_8);
                if (value_33 <= -1)
                {
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        value_34 = 0xb;
                        value_21 = (uint64_t)((uint64_t)data_pointer_8) & 0xffffffff00000000 | (uint64_t)value_33 & 0xffffffff;
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_34, WD_SYMBOL_ADDRESS(WPP_18b0827e260934bc7194ce1b305e55de_Traceguids), (uint64_t)KeGetCurrentThread(), value_21);
                    }
                    goto block_1;
                }
                data_pointer_6 = (int64_t ******)data_pointer_5[1];
                if (data_pointer_6)
                {
                    data_pointer_13 = (int64_t *******)ExAllocateFromPagedLookasideList((void *)(MpRegData + 0x380));
                    value_22 = (uint32_t)((uint64_t)data_pointer_8 >> 0x20);
                    if (!data_pointer_13)
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            value_34 = ((uint64_t)value_22 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INSUFFICIENT_RESOURCES & 0xffffffffULL;
                            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x11, WD_SYMBOL_ADDRESS(WPP_18b0827e260934bc7194ce1b305e55de_Traceguids), (uint64_t)KeGetCurrentThread(), value_34);
                            value_22 = (uint32_t)((uint64_t)value_34 >> 0x20);
                        }
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            value_34 = 0xc;
                            value_21 = ((uint64_t)value_22 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INSUFFICIENT_RESOURCES & 0xffffffffULL;
                            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_34, WD_SYMBOL_ADDRESS(WPP_18b0827e260934bc7194ce1b305e55de_Traceguids), (uint64_t)KeGetCurrentThread(), value_21);
                        }
                        goto block_1;
                    }
                    data_pointer_13[2] = data_pointer_6;
                    *(uint16_t *)(&data_pointer_13[3]) = value_11;
                    ((uint16_t *)data_pointer_13)[0xd] = value_5;
                    *(uint16_t *)(&data_pointer_13[4]) = value_7;
                    ((uint16_t *)data_pointer_13)[0x11] = value_8;
                    ((uint16_t *)data_pointer_13)[0x12] = value_9;
                    ((uint16_t *)data_pointer_13)[0x13] = value_10;
                    if ((int64_t ********)data_pointer[1] != &data_pointer)
                    {
                        (*(WD_ROUTINE)swi(0x29))(3);
                    }
                    *data_pointer_13 = (int64_t ******)data_pointer;
                    data_pointer_13[1] = (int64_t ******)(&data_pointer);
                    data_pointer[1] = (int64_t ******)data_pointer_13;
                    data_pointer = data_pointer_13;
                }
                if (data_pointer_5[2] || *(int16_t *)(&data_pointer_5[3]) != -1)
                {
                    if ((int16_t)data_pointer_2)
                    {
                        data_pointer_5 = (int64_t ******)(*data_pointer_5);
                        enabled = 1;
                        goto block_4;
                    }
                }
                else
                {
                    value_33 = MpRegpParseInfiniteWildcard(&data_pointer, data_pointer_5, &value_4);
                    if (value_33 < 0)
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            value_34 = 0xd;
                            value_21 = (uint64_t)((uint64_t)data_pointer_8) & 0xffffffff00000000 | (uint64_t)value_33 & 0xffffffff;
                            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_34, WD_SYMBOL_ADDRESS(WPP_18b0827e260934bc7194ce1b305e55de_Traceguids), (uint64_t)KeGetCurrentThread(), value_21);
                        }
                        goto block_1;
                    }
                }
                block_3:
                data_pointer_13 = data_pointer;

                value_12 = values[0];
                reg_data = MpRegData;
                if ((int64_t ********)data_pointer == &data_pointer)
                {
                    if (values[0])
                    {
                        values[0] = 0;
                        *data_pointer_10 = value_12;
                    }
                    goto block_1;
                }
                if ((int64_t ********)data_pointer[1] != &data_pointer || (data_pointer_4 = (int64_t *******)(*data_pointer), (int64_t *******)data_pointer_4[1] != data_pointer))
                {
                    (*(WD_ROUTINE)swi(0x29))(3);
                }
                value_12 = MpRegData + 0x380;
                data_pointer_4[1] = (int64_t ******)(&data_pointer);
                data_pointer_2 = data_pointer[3];
                data_pointer_12 = data_pointer[4];
                data_pointer_5 = data_pointer[2];
                *(int32_t *)(reg_data + 0x39c) = *(int32_t *)(reg_data + 0x39c) + 1;
                value = *(uint16_t *)(reg_data + 0x390);
                data_pointer = data_pointer_4;
                if (value <= (uint16_t)ExQueryDepthSList(value_12))
                {
                    *(int32_t *)(reg_data + 0x3a0) = *(int32_t *)(reg_data + 0x3a0) + 1;
                    (*__guard_dispatch_icall_fptr)(data_pointer_13);
                }
                else
                {
                    ExpInterlockedPushEntrySList(value_12, data_pointer_13);
                }
                value_22 = (uint32_t)((uint64_t)data_pointer_8 >> 0x20);
                if (!data_pointer_5)
                {
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        value_34 = 0xe;
                        goto block_2;
                    }
                    goto block_1;
                }
                enabled = 1;
                break;
            }
            data_pointer_5 = (int64_t ******)data_pointer_5[1];
            enabled = 0;
            block_4:
            if (!data_pointer_5)
            {
                goto block_3;
            }
        }
        while (!enabled);
        value_4 = (uint16_t)data_pointer_2;
        value_23 = WdLoadField(&data_pointer_2, 2, 2);
        value_25 = (uint16_t)data_pointer_12;
        value_26 = WdLoadField(&data_pointer_12, 2, 2);
        value_27 = WdLoadField(&data_pointer_12, 4, 2);
        value_28 = WdLoadField(&data_pointer_12, 6, 2);
        value_24 = (uint32_t)((uint64_t)data_pointer_2 >> 0x20);
        value_5 = WdLoadField(&data_pointer_2, 2, 2);
        value_7 = (uint16_t)data_pointer_12;
        value_8 = WdLoadField(&data_pointer_12, 2, 2);
        value_9 = WdLoadField(&data_pointer_12, 4, 2);
        value_10 = WdLoadField(&data_pointer_12, 6, 2);
        value_19 = WdLoadField(&data_pointer_12, 4, 2);
        value_20 = WdLoadField(&data_pointer_12, 6, 2);
        value_13 = (uint16_t)data_pointer_2;
        value_14 = WdLoadField(&data_pointer_2, 2, 2);
        value_15 = WdLoadField(&data_pointer_2, 4, 2);
        value_16 = WdLoadField(&data_pointer_2, 6, 2);
        value_17 = (uint16_t)data_pointer_12;
        value_18 = WdLoadField(&data_pointer_12, 2, 2);
        value_11 = (uint16_t)data_pointer_2;
    }
}

int32_t MpRegpMatchEntry(void *input, uint64_t input_2, WD_LAYOUT_65 *input_3, int16_t *input_4, int64_t *input_5)
{
    int16_t value;
    uint64_t *data_pointer;
    uint16_t *source_text;
    int64_t *data_pointer_2;
    int32_t value_2;
    uint8_t byte_value;
    uint64_t value_3;
    uint64_t value_4;
    uint64_t *data_pointer_3;
    int32_t value_5;
    data_pointer_2 = input_5;
    value_2 = 0;
    value_5 = 0;
    if (((int64_t *)input)[2])
    {
        value = *input_4;
    }
    else
    {
        if (((int16_t *)input)[0xc] == -1)
        {
            goto block_2;
        }
        value = *input_4;
    }
    if (value)
    {
        return 0;
    }
    block_2:
    if (!(input_2 & 0x15))
    {
        value_3 = input_2 >> 8;
        if (!(value_3 & 0x40) && '\0' <= (char)(input_2 >> 8) && !(input_2 >> 0x10 & 1))
        {
            if (!(value_3 & 1) && !(value_3 & 8))
            {
                return 0;
            }
            if (input_3)
            {
                data_pointer_3 = ((uint64_t **)input)[5];
                while (true)
                {
                    if (!data_pointer_3)
                    {
                        return value_2;
                    }
                    source_text = (uint16_t *)data_pointer_3[1];
                    if (!source_text || MpRegpMatchName(source_text, input_3))
                    {
                        data_pointer = (uint64_t *)data_pointer_3[2];
                        while (data_pointer)
                        {
                            if (data_pointer[3] & input_2)
                            {
                                value_2 = MpRegAddMatches((WD_LAYOUT_26 *)(&data_pointer[1]), data_pointer_2);
                                if (value_2 <= -1)
                                {
                                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                                    {
                                        return value_2;
                                    }
                                    if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                                    {
                                        return value_2;
                                    }
                                    value_4 = 0x14;
                                    value_5 = value_2;
                                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_4, WD_SYMBOL_ADDRESS(WPP_18b0827e260934bc7194ce1b305e55de_Traceguids), (uint64_t)KeGetCurrentThread(), value_2);
                                    return value_5;
                                }
                                *(uint64_t *)(*data_pointer_2 + 0x18) = *(uint64_t *)(*data_pointer_2 + 0x18) | data_pointer[3] & input_2;
                                if (!(input_2 & 0x100) || !((uint64_t)data_pointer[3] >> 8 & 4))
                                {
                                    byte_value = input_2 & 0x800 && (uint64_t)data_pointer[3] >> 8 & 0x20;
                                    *(uint8_t *)(*data_pointer_2 + 0x10) = *(uint8_t *)(*data_pointer_2 + 0x10) | byte_value;
                                    goto block_1;
                                }
                                *(uint8_t *)(*data_pointer_2 + 0x10) = *(uint8_t *)(*data_pointer_2 + 0x10) | 1;
                                data_pointer = (uint64_t *)(*data_pointer);
                            }
                            else
                            {
                                block_1:
                                data_pointer = (uint64_t *)(*data_pointer);
                            }
                        }
                    }
                    data_pointer_3 = (uint64_t *)(*data_pointer_3);
                }
            }
            value_5 = -0x3ffffff3;
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return -0x3ffffff3;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return -0x3ffffff3;
            }
            value_4 = 0x13;
            value_2 = -0x3ffffff3;
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_4, WD_SYMBOL_ADDRESS(WPP_18b0827e260934bc7194ce1b305e55de_Traceguids), (uint64_t)KeGetCurrentThread(), value_2);
            return value_5;
        }
    }

    data_pointer_3 = ((uint64_t **)input)[4];
    if (data_pointer_3)
    {
        while (value_5 = value_2, data_pointer_3)
        {
            value_2 = value_5;
            if (data_pointer_3[3] & input_2)
            {
                value_2 = MpRegAddMatches((WD_LAYOUT_26 *)(&data_pointer_3[1]), data_pointer_2);
                if (value_2 <= -1)
                {
                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                    {
                        return value_2;
                    }
                    if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                    {
                        return value_2;
                    }
                    value_4 = 0x12;
                    value_5 = value_2;
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_4, WD_SYMBOL_ADDRESS(WPP_18b0827e260934bc7194ce1b305e55de_Traceguids), (uint64_t)KeGetCurrentThread(), value_2);
                    return value_5;
                }
                *(uint64_t *)(*data_pointer_2 + 0x18) = *(uint64_t *)(*data_pointer_2 + 0x18) | input_2 & data_pointer_3[3];
            }
            data_pointer_3 = (uint64_t *)(*data_pointer_3);
        }
    }
    return value_5;
}

void MpRegpMatchUserClasses(WD_LAYOUT_65 *input)
{
    uint16_t value = 0;
    uint64_t string;
    int16_t value_3;
    uint16_t value_4;
    int16_t value_5;
    uint32_t value_6;
    int64_t value_7;
    uint64_t value_8;
    if (input->field_0x0 && input->field_0x8)
    {
        value_4 = input->field_0x0 >> 1;
        for (; value < value_4; value = value + 1)
        {
            if (*(int16_t *)(value * 2ULL + input->field_0x8) == 0x5f)
            {
                value_6 = 0;
                string = 0;
                value_8 = 0;
                RtlInitUnicodeString(&string, L"_Classes");
                value_7 = input->field_0x8 + value * 2ULL;
                value_3 = (value_4 - value) * 2;
                value_5 = value_3;
                if (RtlEqualUnicodeString(&value_3, &string, 1))
                {
                    break;
                }
            }
        }
    }
    return;
}

uint64_t MpRegAddMatches(WD_LAYOUT_26 *input, uint64_t *input_2)
{
    uint64_t *data_pointer;
    uint32_t value;
    uint32_t *allocation;
    uint64_t value_2;
    int64_t *allocation_2;
    uint64_t value_3;
    uint64_t value_4;
    uint32_t value_5;
    allocation = (uint32_t *)(*input_2);
    if (allocation)
    {
        block_1:
        value = allocation[1];

        if (*allocation != value)
        {
            block_2:
            value_3 = input->field_0x8;

            data_pointer = (uint64_t *)(*(int64_t *)(&allocation[2]) + *allocation * 0x10ULL);
            *data_pointer = input->field_0x0;
            data_pointer[1] = value_3;
            *allocation = *allocation + 1;
            return 0;
        }
        if (value <= value + 10)
        {
            value_2 = (uint64_t)(value + 10) << 4;
            if (value_2 <= 0xffffffff)
            {
                allocation_2 = MpAllocatePoolWithTag(1, value_2 & 0xffffffff, 0x496d504d);
                if (allocation_2)
                {
                    allocation = (uint32_t *)(*input_2);
                    if (*(uint64_t **)(&allocation[2]))
                    {
                        memmove(allocation_2, *(uint64_t **)(&allocation[2]), (uint64_t)(*allocation) << 4);
                        ExFreePoolWithTag(*(uint64_t *)(&allocation[2]), 0x496d504d);
                    }
                    allocation = (uint32_t *)(*input_2);
                    allocation[1] = allocation[1] + 10;
                    *(int64_t **)(&allocation[2]) = allocation_2;
                    goto block_2;
                }
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                {
                    return WD_STATUS_INSUFFICIENT_RESOURCES;
                }
                if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    return WD_STATUS_INSUFFICIENT_RESOURCES;
                }
                value_3 = 0x18;
                value_4 = WD_STATUS_INSUFFICIENT_RESOURCES;
                value_5 = WD_STATUS_INSUFFICIENT_RESOURCES;
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_3, WD_SYMBOL_ADDRESS(WPP_18b0827e260934bc7194ce1b305e55de_Traceguids), (uint64_t)KeGetCurrentThread(), value_5);
                return value_4;
            }
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            value_3 = 0x17;
        }
        else
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            value_3 = 0x16;
        }
        value_4 = WD_STATUS_INTEGER_OVERFLOW;
        value_5 = WD_STATUS_INTEGER_OVERFLOW;
    }
    else
    {
        allocation = (uint32_t *)MpAllocatePoolWithTag(1, (char *)0x20, 0x496d504d);
        *input_2 = allocation;
        if (allocation)
        {
            goto block_1;
        }
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
        {
            return WD_STATUS_INSUFFICIENT_RESOURCES;
        }
        if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return WD_STATUS_INSUFFICIENT_RESOURCES;
        }
        value_3 = 0x15;
        value_4 = WD_STATUS_INSUFFICIENT_RESOURCES;
        value_5 = WD_STATUS_INSUFFICIENT_RESOURCES;
    }
    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_3, WD_SYMBOL_ADDRESS(WPP_18b0827e260934bc7194ce1b305e55de_Traceguids), (uint64_t)KeGetCurrentThread(), value_5);
    return value_4;
}

void MpRegpParseInfiniteWildcard(int64_t *input, int64_t *input_2, WD_LAYOUT_19 *input_3)
{
    uint64_t source_text;
    uint64_t *data_pointer;
    uint64_t value;
    uint64_t value_2;
    uint64_t value_3;
    uint64_t value_4;
    char byte_value;
    int32_t value_6;
    int64_t value_7;
    uint64_t value_8;
    uint64_t value_9;
    uint64_t string;
    uint64_t value_10;
    value_7 = *input_2;
    value_10 = 0;
    value = 0;
    value_9 = 0;
    value_2 = 0;
    value_8 = 0;
    value_4 = 0;
    while (true)
    {
        if (!value_7)
        {
            return;
        }
        if (*(int64_t *)(value_7 + 0x10))
        {
            value = input_3->field_0x8;
            data_pointer = &value_8;
            value_10 = ((uint64_t)WdLoadField(&value_10, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)input_3->field_0x0 & 0xffffffffULL;
            string = ((uint64_t)WdLoadField(&value_10, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)input_3->field_0x0 & 0xffffffffULL;
            value_3 = value;
            FsRtlDissectName(&string, &value_9, data_pointer);
            while ((int16_t)value_9)
            {
                source_text = *(uint64_t *)(value_7 + 0x10);
                string = 0;
                value_3 = 0;
                if (wcscmp(source_text, L"\r\t\n_Classes"))
                {
                    RtlInitUnicodeString(&string, source_text);
                    byte_value = RtlEqualUnicodeString(&string, &value_9, (uint64_t)((uint64_t)data_pointer) & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
                }
                else
                {
                    byte_value = MpRegpMatchUserClasses(&value_9);
                }
                if (byte_value == '\x01')
                {
                    if ((int16_t)value_9 && (value_6 = MpRegpPushEntryToStack(input, value_7, &value_10), value_6 <= -1))
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xf, WD_SYMBOL_ADDRESS(WPP_18b0827e260934bc7194ce1b305e55de_Traceguids), (uint64_t)KeGetCurrentThread(), value_6);
                        }
                        return;
                    }
                    break;
                }
                data_pointer = &value_8;
                value_10 = value_8;
                value = value_4;
                string = value_8;
                value_3 = value_4;
                FsRtlDissectName(&string, &value_9, data_pointer);
            }
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x10, WD_SYMBOL_ADDRESS(WPP_18b0827e260934bc7194ce1b305e55de_Traceguids), (uint64_t)KeGetCurrentThread());
        }
        value_7 = *(int64_t *)(value_7 + 8);
    }
}

int64_t *MpRegpPushEntryToStack(int64_t *input, int64_t input_2, WD_LAYOUT_83 *input_3)
{
    int64_t reg_data;
    int64_t *list_entry;
    int64_t value;
    reg_data = MpRegData;
    value = MpRegData + 0x380;
    *(int32_t *)(MpRegData + 0x394) = *(int32_t *)(MpRegData + 0x394) + 1;
    list_entry = (int64_t *)ExpInterlockedPopEntrySList(value);
    if (!list_entry)
    {
        *(int32_t *)(reg_data + 0x398) = *(int32_t *)(reg_data + 0x398) + 1;
        list_entry = (int64_t *)(*__guard_dispatch_icall_fptr)(*(uint32_t *)(reg_data + 0x3a4), *(uint32_t *)(reg_data + 0x3ac), *(uint32_t *)(reg_data + 0x3a8));
        if (!list_entry)
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                list_entry = (int64_t *)WD_STATUS_INSUFFICIENT_RESOURCES;
                return list_entry;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                list_entry = (int64_t *)WD_STATUS_INSUFFICIENT_RESOURCES;
                return list_entry;
            }
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x11, WD_SYMBOL_ADDRESS(WPP_18b0827e260934bc7194ce1b305e55de_Traceguids), (uint64_t)KeGetCurrentThread(), WD_STATUS_INSUFFICIENT_RESOURCES);
            list_entry = (int64_t *)WD_STATUS_INSUFFICIENT_RESOURCES;
            return list_entry;
        }
    }
    *(uint16_t *)(&list_entry[3]) = input_3->field_0x0;
    ((uint16_t *)list_entry)[0xd] = input_3->field_0x2;
    list_entry[4] = input_3->field_0x8;
    list_entry[2] = input_2;
    reg_data = *input;
    if (*(int64_t **)(reg_data + 8) == input)
    {
        *list_entry = reg_data;
        list_entry[1] = (int64_t)input;
        *(int64_t **)(reg_data + 8) = list_entry;
        *input = (int64_t)list_entry;
        list_entry = NULL;
        return list_entry;
    }
    (*(WD_ROUTINE)swi(0x29))(3);
}

void MpRegFreeMatchingInfo(WD_LAYOUT_20 *allocation)
{
    if (!allocation)
    {
        return;
    }
    if (allocation->field_0x8)
    {
        ExFreePoolWithTag(allocation->field_0x8, 0x496d504d);
    }
    ExFreePoolWithTag(allocation, 0x496d504d);
    return;
}

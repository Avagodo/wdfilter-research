#include "wdfilter.h"

void FsHardeningMatch(void *file_name, uint16_t *file_name_2, uint16_t *extension, int64_t file_object, void *input, uint64_t input_2, uint32_t *input_3)
{
    int64_t value;
    uint64_t buffer_2;
    uint32_t source_string;
    uint16_t value_2;
    uint64_t value_3;
    uint64_t value_4;
    uint64_t *parse_result;
    uint32_t value_5;
    uint32_t value_6;
    void *parse_options;
    int64_t value_7;
    int64_t value_8;
    uint64_t value_9;
    uint64_t value_10;
    uint64_t value_11;
    uint64_t value_12;
    uint64_t value_13;
    uint64_t value_14;
    uint64_t value_15;
    uint64_t value_16;
    uint32_t *data_pointer;
    uint64_t value_17;
    uint64_t value_18;
    uint32_t value_19;
    uint32_t value_20;
    uint32_t value_21;
    uint32_t value_22;
    char byte_value;
    uint16_t value_24;
    int32_t value_25;
    uint64_t value_26;
    uint64_t value_27;
    int64_t *data_pointer_2;
    data_pointer = input_3;
    parse_options = input;
    value_5 = (uint32_t)((uint64_t)value_4 >> 0x20);
    value_27 = 0;
    memset(&buffer_2, 0, (char *)0x70);
    if (!MpFsHardeningData || !data_pointer)
    {
        return;
    }
    *data_pointer = 0;
    if (file_name)
    {
        if (file_name_2)
        {
            goto block_3;
        }
        block_1:
        value_25 = FltParseFileNameInformation(file_name);

        if (value_25 <= -1)
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return;
            }
            value_27 = 0x19;
            block_2:
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_27, WD_SYMBOL_ADDRESS(WPP_d860aa9c61163a6fb2c7d053d2b6efa5_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)value_25 & 0xffffffffULL);

            return;
        }
        buffer_2 = ((uint64_t *)file_name)[1];
        value_8 = ((int64_t *)file_name)[2];
        value_9 = ((uint64_t *)file_name)[3];
        value_10 = ((uint64_t *)file_name)[4];
        value_11 = ((uint64_t *)file_name)[5];
        value_12 = ((uint64_t *)file_name)[6];
        value_13 = ((uint64_t *)file_name)[7];
        value_14 = ((uint64_t *)file_name)[8];
        value_15 = ((uint64_t *)file_name)[9];
        value_16 = ((uint64_t *)file_name)[10];
        value_17 = ((uint64_t *)file_name)[0xb];
        value_18 = ((uint64_t *)file_name)[0xc];
        value_19 = ((uint32_t *)file_name)[0x1a];
        value_20 = ((uint32_t *)file_name)[0x1b];
        value_21 = ((uint32_t *)file_name)[0x1c];
        value_22 = ((uint32_t *)file_name)[0x1d];
    }
    else
    {
        if (!file_name_2 || !file_object && !parse_options && !extension)
        {
            return;
        }
        block_3:
        value = *(int64_t *)(MpData + 0xcc0);

        if (!value)
        {
            if (!file_name)
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1a, WD_SYMBOL_ADDRESS(WPP_d860aa9c61163a6fb2c7d053d2b6efa5_Traceguids), (uint64_t)KeGetCurrentThread());
                }
                return;
            }
            goto block_1;
        }
        if (*file_name_2)
        {
            if (!RtlPrefixUnicodeString(value, file_name_2, (uint64_t)value_27 & 0xffffffffffffff00 | (uint64_t)1 & 0xff))
            {
                return;
            }
            parse_result = &buffer_2;
            value_25 = MpParseFileNameEx(file_name_2, file_object, parse_options, extension, parse_result);
            value_5 = (uint32_t)((uint64_t)parse_result >> 0x20);
            if (0 <= value_25)
            {
                goto block_4;
            }
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return;
            }
            value_27 = 0x18;
            goto block_2;
        }
    }
    block_4:
    FltAcquirePushLockShared(MpFsHardeningData + 0x18);

    data_pointer_2 = *(int64_t **)(MpFsHardeningData + 8);
    if (data_pointer_2 != (int64_t *)(MpFsHardeningData + 8))
    {
        value_26 = value_9;
        value_27 = value_15;
        do
        {
            if (data_pointer_2 && MpFsHardeningData)
            {
                source_string = (uint32_t)buffer_2;
                value_5 = source_string;
                value_6 = WdLoadField(&buffer_2, 4, 4);
                value_7 = value_8;
                WdStoreField(&source_string, 0, 2, (uint64_t)((uint16_t)buffer_2));
                if (((uint32_t *)data_pointer_2)[7] & 8 && (value_24 = (uint16_t)value_26, value_24 < (uint16_t)source_string && value_24))
                {
                    value_7 = (value_26 & 0xffff) + value_8;
                    value_24 = (uint16_t)source_string - value_24;
                    WdStoreField(&source_string, 2, 2, (uint64_t)((uint16_t)((uint64_t)buffer_2 >> 0x10)));
                    source_string = ((uint64_t)WdLoadField(&source_string, 2, 2) & 0xffffULL) << 16 | (uint64_t)value_24 & 0xffffULL;
                    value_5 = source_string;
                }
                else
                {
                    value_24 = (uint16_t)source_string;
                }
                source_string = value_5;
                if (((uint32_t *)data_pointer_2)[7] & 4 && (value_2 = (uint16_t)value_27, value_2) && value_2 < value_24)
                {
                    source_string = ((uint64_t)WdLoadField(&source_string, 2, 2) & 0xffffULL) << 16 | (uint64_t)(value_24 - value_2) & 0xffffULL;
                }
                value_25 = *(int32_t *)(&data_pointer_2[3]);
                value_3 = (uint64_t)((uint64_t)value_27 >> 8);
                if (value_25 != 1)
                {
                    if (value_25 != 2)
                    {
                        if (value_25 != 3)
                        {
                            if (value_25 != 4)
                            {
                                goto block_5;
                            }
                            byte_value = FsRtlIsNameInExpression(&data_pointer_2[5], &source_string, ((uint64_t)value_3 & 0xffffffffffffffULL) << 8 | (uint64_t)1 & 0xffULL, 0);
                        }
                        else
                        {
                            byte_value = MpSuffixUnicodeString((WD_UNICODE_STRING_POINTER_VIEW *)(&data_pointer_2[5]), &source_string);
                        }
                    }
                    else
                    {
                        byte_value = RtlPrefixUnicodeString(&data_pointer_2[5], &source_string, ((uint64_t)value_3 & 0xffffffffffffffULL) << 8 | (uint64_t)1 & 0xffULL);
                    }
                }
                else
                {
                    byte_value = RtlCompareUnicodeString(&data_pointer_2[5], &source_string, ((uint64_t)value_3 & 0xffffffffffffffULL) << 8 | (uint64_t)1 & 0xffULL) == 0;
                }
                if (byte_value)
                {
                    *data_pointer = ((uint32_t *)data_pointer_2)[7];
                    break;
                }
                value_26 = value_9;
                value_27 = value_15;
            }
            block_5:
            data_pointer_2 = (int64_t *)(*data_pointer_2);
        }
        while (data_pointer_2 != (int64_t *)(MpFsHardeningData + 8));
    }
    FltReleasePushLock(MpFsHardeningData + 0x18);
    return;
}

void MpIsAMPath(WD_LAYOUT_78 *input, void *file_name, int16_t *input_2)
{
    int64_t value;
    uint64_t value_2;
    uint64_t value_3;
    uint16_t value_4;
    uint16_t value_5;
    uint64_t value_6;
    uint32_t value_7;
    uint16_t *wide_text;
    int16_t *wide_text_2;
    WD_LAYOUT_77 *record;
    bool enabled;
    uint64_t value_8;
    uint64_t value_9;
    uint16_t *wide_text_3;
    uint32_t value_10;
    uint64_t *data_pointer;
    int64_t value_11;
    uint16_t value_12;
    uint32_t value_13;
    uint64_t value_14;
    bool enabled_2;
    uint64_t value_15;
    uint16_t value_16;
    uint32_t value_17;
    uint64_t value_18;
    uint16_t value_19;
    uint32_t value_20;
    int64_t value_21;
    char byte_value;
    int32_t value_23;
    uint16_t value_24;
    uint64_t value_25;
    uint16_t value_26;
    uint64_t value_27;
    value_10 = (uint32_t)((uint64_t)value_9 >> 0x20);
    record = NULL;
    value_12 = 0;
    value_13 = 0;
    value_14 = 0;
    value_4 = 0;
    value_5 = 0;
    value_3 = 0;
    enabled_2 = 0;
    value_11 = 0;
    value_6 = 0;
    value_15 = 0;
    value_16 = 0;
    value_17 = 0;
    value_18 = 0;
    wide_text_2 = input_2;
    if (file_name)
    {
        if (input_2)
        {
            goto block_4;
        }
        block_1:
        value_23 = FltParseFileNameInformation(file_name);

        if (0 <= value_23)
        {
            value_11 = ((int64_t *)file_name)[0xe];
            value_4 = ((uint16_t *)file_name)[0x2c];
            value_5 = ((uint16_t *)file_name)[0x24];
            value_3 = ((uint64_t)WdLoadField(&value_3, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)((uint32_t *)file_name)[0x1a] & 0xffffffffULL;
            value_14 = ((uint64_t *)file_name)[0xc];
            value_12 = ((uint16_t *)file_name)[0x2d];
            value_15 = ((uint64_t *)file_name)[8];
            value_6 = ((uint64_t)WdLoadField(&value_6, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)((uint32_t *)file_name)[0xe] & 0xffffffffULL;
            value_18 = ((uint64_t *)file_name)[10];
            value_16 = ((uint16_t *)file_name)[0x25];
            value_24 = value_5;
            value_26 = value_4;
            block_2:
            if (value_24 && value_24 < value_26)
            {
                value_4 = value_26 - value_24;
            }

            value_2 = WD_SYMBOL_ADDRESS(ProductDirFullWin7Path);
            if ((*(uint32_t *)(MpData + 0x360) & 0x10006) != 2)
            {
                value_2 = WD_SYMBOL_ADDRESS(ProductDirFullPath);
            }
            if (!RtlEqualUnicodeString(value_2, &value_3, (uint64_t)((uint64_t)wide_text_2) & 0xffffffffffffff00 | (uint64_t)1 & 0xff))
            {
                wide_text = L" \"";
                value_2 = WD_SYMBOL_ADDRESS(ProductDirNameWin7);
                if (!(int16_t)value_6)
                {
                    value_27 = WD_SYMBOL_ADDRESS(ProductDirNameWin7);
                    if ((*(uint32_t *)(MpData + 0x360) & 0x10006) != 2)
                    {
                        value_27 = WD_SYMBOL_ADDRESS(ProductDirName);
                    }
                    wide_text = L"尀匀漀昀琀眀愀爀攀尀倀漀氀椀挀椀攀猀尀䴀椀挀爀漀猀漀昀琀尀圀椀渀搀漀眀猀\x2000䐀攀昀攀渀搀攀爀尀䔀砀挀氀甀猀椀漀渀猀";
                    if (RtlEqualUnicodeString(&value_4, value_27, L"尀匀漀昀琀眀愀爀攀尀倀漀氀椀挀椀攀猀尀䴀椀挀爀漀猀漀昀琀尀圀椀渀搀漀眀猀\x2000䐀攀昀攀渀搀攀爀尀䔀砀挀氀甀猀椀漀渀猀"))
                    {
                        wide_text = (uint16_t *)((uint64_t)((uint64_t)wide_text) & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
                        byte_value = RtlEqualUnicodeString(&value_3, WD_SYMBOL_ADDRESS(ProgramFilesDirPath), wide_text);
                        if (byte_value)
                        {
                            goto block_3;
                        }
                    }
                }
                value_27 = WD_SYMBOL_ADDRESS(PlatformDirFullWin7Path);
                value_25 = (uint64_t)((uint64_t)wide_text) & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
                if ((*(uint32_t *)(MpData + 0x360) & 0x10006) != 2)
                {
                    value_27 = WD_SYMBOL_ADDRESS(PlatformDirFullPath);
                }
                byte_value = RtlPrefixUnicodeString(value_27, &value_3, value_25);
                if (!byte_value)
                {
                    value_27 = (uint64_t)value_25 & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
                    byte_value = RtlEqualUnicodeString(&value_4, WD_SYMBOL_ADDRESS(ProductDirName), value_27);
                    if (byte_value)
                    {
                        value_27 = (uint64_t)value_27 & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
                        byte_value = RtlEqualUnicodeString(&value_3, WD_SYMBOL_ADDRESS(ProgramDataMSPath), value_27);
                        if (byte_value)
                        {
                            goto block_3;
                        }
                    }
                    value_27 = (uint64_t)value_27 & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
                    byte_value = RtlEqualUnicodeString(&value_3, WD_SYMBOL_ADDRESS(ProgramDataFullPath), value_27);
                    if (byte_value)
                    {
                        value_27 = (uint64_t)value_27 & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
                        byte_value = RtlEqualUnicodeString(&value_4, &value_5, value_27);
                        if (byte_value)
                        {
                            goto block_3;
                        }
                    }
                    value_27 = (uint64_t)value_27 & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
                    byte_value = RtlPrefixUnicodeString(WD_SYMBOL_ADDRESS(ProgramDataPlatformPath), &value_3, value_27);
                    if (!byte_value)
                    {
                        if (!(int16_t)value_6)
                        {
                            value_27 = (uint64_t)value_27 & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
                            byte_value = RtlEqualUnicodeString(&value_4, WD_SYMBOL_ADDRESS(PlatformDirName), value_27);
                            if (byte_value)
                            {
                                value_27 = (uint64_t)value_27 & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
                                byte_value = RtlEqualUnicodeString(&value_3, WD_SYMBOL_ADDRESS(ProgramDataFullPath), value_27);
                                if (byte_value)
                                {
                                    goto block_3;
                                }
                            }
                        }
                        value_25 = WD_SYMBOL_ADDRESS(ProductDirFullWin7PathX86);
                        value_27 = (uint64_t)value_27 & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
                        if ((*(uint32_t *)(MpData + 0x360) & 0x10006) != 2)
                        {
                            value_25 = WD_SYMBOL_ADDRESS(ProductDirFullPathX86);
                        }
                        byte_value = RtlEqualUnicodeString(value_25, &value_3, value_27);
                        if (!byte_value)
                        {
                            if (!(int16_t)value_6)
                            {
                                value_27 = (uint64_t)value_27 & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
                                if ((*(uint32_t *)(MpData + 0x360) & 0x10006) != 2)
                                {
                                    value_2 = WD_SYMBOL_ADDRESS(ProductDirName);
                                }
                                byte_value = RtlEqualUnicodeString(&value_4, value_2, value_27);
                                if (byte_value)
                                {
                                    value_27 = (uint64_t)value_27 & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
                                    byte_value = RtlEqualUnicodeString(&value_3, WD_SYMBOL_ADDRESS(ProgramFilesDirPathX86), value_27);
                                    if (byte_value)
                                    {
                                        goto block_3;
                                    }
                                }
                            }
                            value_2 = (uint64_t)value_27 & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
                            byte_value = RtlPrefixUnicodeString(WD_SYMBOL_ADDRESS(PlatformUpdateDriverDirPath), &value_3, value_2);
                            if (byte_value)
                            {
                                value_2 = (uint64_t)value_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
                                byte_value = RtlEqualUnicodeString(WD_SYMBOL_ADDRESS(PlatformUpdateDriverDirPath), &value_3, value_2);
                                if (byte_value)
                                {
                                    value_2 = (uint64_t)value_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
                                    byte_value = RtlEqualUnicodeString(WD_SYMBOL_ADDRESS(PlatformUpdateDriverDirName), &value_4, value_2);
                                    if (byte_value)
                                    {
                                        goto block_3;
                                    }
                                }
                                value_2 = (uint64_t)value_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
                                byte_value = RtlPrefixUnicodeString(WD_SYMBOL_ADDRESS(PlatformUpdateDriverFullPath), &value_3, value_2);
                                if (byte_value)
                                {
                                    goto block_3;
                                }
                            }
                            value_2 = (uint64_t)value_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
                            byte_value = RtlPrefixUnicodeString(WD_SYMBOL_ADDRESS(ProgramDataUpdatePath), &value_3, value_2);
                            value_8 = (uint64_t)((uint64_t)value_2 >> 8);
                            enabled = enabled_2;
                            if (byte_value)
                            {
                                enabled = 1;
                                if (0x84 <= (uint16_t)value_3)
                                {
                                    value_20 = WdLoadField(&value_3, 4, 4);
                                    value_21 = value_11 + 0x76;
                                    value_2 = ((uint64_t)value_8 & 0xffffffffffffffULL) << 8 | (uint64_t)1 & 0xffULL;
                                    value_19 = (uint16_t)((uint64_t)value_3 >> 0x10);
                                    value_7 = ((uint64_t)value_19 & 0xffffULL) << 16 | (uint64_t)((uint16_t)value_3 - 0x78) & 0xffffULL;
                                    byte_value = RtlPrefixUnicodeString(&value_7, WD_SYMBOL_ADDRESS(UpdatesDirName), value_2);
                                    if (byte_value)
                                    {
                                        enabled = enabled_2;
                                    }
                                }
                            }
                            else if (!(int16_t)value_6)
                            {
                                value_2 = ((uint64_t)value_8 & 0xffffffffffffffULL) << 8 | (uint64_t)1 & 0xffULL;
                                byte_value = RtlEqualUnicodeString(&value_4, WD_SYMBOL_ADDRESS(DefUpdatesDirName), value_2);
                                if (byte_value)
                                {
                                    value_2 = (uint64_t)value_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
                                    byte_value = RtlEqualUnicodeString(&value_3, WD_SYMBOL_ADDRESS(ProgramDataFullPath), value_2);
                                    if (byte_value)
                                    {
                                        goto block_3;
                                    }
                                }
                            }
                            value_2 = (uint64_t)value_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
                            byte_value = RtlPrefixUnicodeString(WD_SYMBOL_ADDRESS(ProgramDataSnapshotPath), &value_3, value_2);
                            if (!byte_value)
                            {
                                if (!(int16_t)value_6)
                                {
                                    value_2 = (uint64_t)value_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
                                    byte_value = RtlEqualUnicodeString(&value_4, WD_SYMBOL_ADDRESS(SnapshotDirName), value_2);
                                    if (byte_value && RtlEqualUnicodeString(&value_3, WD_SYMBOL_ADDRESS(ProgramDataFullPath), (uint64_t)value_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff))
                                    {
                                        goto block_3;
                                    }
                                }
                                if (!enabled)
                                {
                                    return;
                                }
                            }
                        }
                    }
                }
            }
            block_3:
            if (input)
            {
                record = input->field_0x80;
            }

            MpTraceFsHardeningNotification(0, 0, record, file_name, input_2, (uint64_t)data_pointer & 0xffffffffffffff00);
            return;
        }
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return;
        }
        value_2 = 0x1c;
    }
    else
    {
        if (!input_2)
        {
            return;
        }
        block_4:
        value = *(int64_t *)(MpData + 0xcc0);

        if (!value)
        {
            if (!file_name)
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1d, WD_SYMBOL_ADDRESS(WPP_d860aa9c61163a6fb2c7d053d2b6efa5_Traceguids), (uint64_t)KeGetCurrentThread());
                }
                return;
            }
            goto block_1;
        }
        value_24 = 0;
        value_26 = 0;
        if (!(*input_2))
        {
            goto block_2;
        }
        if (!RtlPrefixUnicodeString(value, input_2, (uint64_t)((uint64_t)input_2) & 0xffffffffffffff00 | (uint64_t)1 & 0xff))
        {
            return;
        }
        data_pointer = &value_3;
        wide_text_3 = &value_4;
        wide_text_2 = (int16_t *)(&value_6);
        value_23 = MpParseFileName(input_2, *(uint16_t **)(MpData + 0xcc0), wide_text_2, &value_5, wide_text_3, data_pointer);
        value_10 = (uint32_t)((uint64_t)wide_text_3 >> 0x20);
        if (0 <= value_23)
        {
            value_24 = value_5;
            value_26 = value_4;
            goto block_2;
        }
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return;
        }
        value_2 = 0x1b;
    }
    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_d860aa9c61163a6fb2c7d053d2b6efa5_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_10 & 0xffffffffULL) << 32 | (uint64_t)value_23 & 0xffffffffULL);
    return;
}

void MpFsHardeningSetServiceHardeningItems(uint32_t *input, int32_t input_2)
{
    uint32_t *data_pointer;
    uint64_t string;
    uint64_t string_2;
    uint64_t ****data_pointer_2;
    int64_t fs_hardening_data;
    uint64_t value = 0;
    uint64_t value_2;
    uint64_t value_3;
    uint64_t ****data_pointer_3;
    uint32_t *data_pointer_4;
    uint32_t *data_pointer_5;
    uint32_t value_5;
    uint32_t value_6;
    int32_t value_7;
    uint32_t *data_pointer_6;
    uint64_t ****data_pointer_7;
    if (MpFsHardeningData && (uint32_t)(input_2 - 1U) <= 1)
    {
        if (input)
        {
            value_5 = *input;
            if (0x10 <= value_5 && input[1] == 1)
            {
                data_pointer = &input[4];
                value_6 = input[2] * 8;
                if (input <= data_pointer && ((data_pointer_6 = (uint32_t *)((int64_t)input + (uint64_t)value_5), input <= data_pointer_6 && data_pointer <= data_pointer_6) && (uint64_t)((int64_t)data_pointer_6 - (int64_t)data_pointer) <= 0xffffffff && (value_6 <= value_5 && value_6 <= (uint32_t)((int64_t)data_pointer_6 - (int64_t)data_pointer))) && (input[2] || input_2 != 1))
                {
                    data_pointer_3 = &data_pointer_7;
                    data_pointer_7 = &data_pointer_7;
                    for (; (uint32_t)value < input[2]; value = (uint32_t)value + 1)
                    {
                        value_5 = *input;
                        fs_hardening_data = *(int64_t *)(&data_pointer[value * 2]);
                        if (!value_5 || (fs_hardening_data && ((data_pointer_6 = (uint32_t *)((int64_t)input + fs_hardening_data), data_pointer_6 < input || (data_pointer_4 = (uint32_t *)((int64_t)input + (uint64_t)value_5), data_pointer_4 < input)) || (data_pointer_4 < data_pointer_6 || (0x100000000 <= (uint64_t)((int64_t)data_pointer_4 - (int64_t)data_pointer_6) || (uint32_t)((int64_t)data_pointer_4 - (int64_t)data_pointer_6) < 0x30))) || value_5 < 0x30))
                        {
                            return;
                        }
                        data_pointer_5 = (uint32_t *)(fs_hardening_data + (int64_t)input);
                        string = 0;
                        *(uint32_t **)(&data_pointer[value * 2]) = data_pointer_5;
                        value_3 = 0;
                        string_2 = 0;
                        value_2 = 0;
                        value_5 = data_pointer_5[4];
                        if (value_5 && (fs_hardening_data = *(int64_t *)(&data_pointer_5[6]), fs_hardening_data))
                        {
                            value_6 = *input;
                            if (value_6 && ((data_pointer_6 = (uint32_t *)(fs_hardening_data + (int64_t)input), input <= data_pointer_6 && (data_pointer_4 = (uint32_t *)((int64_t)input + (uint64_t)value_6), input <= data_pointer_4)) && data_pointer_6 <= data_pointer_4) && ((uint64_t)((int64_t)data_pointer_4 - (int64_t)data_pointer_6) <= 0xffffffff && value_5 <= (uint32_t)((int64_t)data_pointer_4 - (int64_t)data_pointer_6) && value_5 <= value_6))
                            {
                                RtlInitUnicodeString(&string, fs_hardening_data + (int64_t)input);
                            }
                        }
                        value_5 = data_pointer_5[8];
                        if (value_5 && (fs_hardening_data = *(int64_t *)(&data_pointer_5[10]), fs_hardening_data))
                        {
                            value_6 = *input;
                            if (value_6 && ((data_pointer_6 = (uint32_t *)(fs_hardening_data + (int64_t)input), input <= data_pointer_6 && (data_pointer_4 = (uint32_t *)((int64_t)input + (uint64_t)value_6), input <= data_pointer_4)) && data_pointer_6 <= data_pointer_4) && ((uint64_t)((int64_t)data_pointer_4 - (int64_t)data_pointer_6) <= 0xffffffff && value_5 <= (uint32_t)((int64_t)data_pointer_4 - (int64_t)data_pointer_6) && value_5 <= value_6))
                            {
                                RtlInitUnicodeString(&string_2, fs_hardening_data + (int64_t)input);
                            }
                        }
                        data_pointer_2 = NULL;
                        value_7 = FsHardeningItemCreate(&string, &string_2, *data_pointer_5, data_pointer_5[1], data_pointer_5[2], data_pointer_5[3], &data_pointer_2);
                        if (0 <= value_7)
                        {
                            if ((uint64_t *****)(*data_pointer_3) != &data_pointer_7)
                            {
                                (*(WD_ROUTINE)swi(0x29))(3);
                            }
                            *data_pointer_2 = &data_pointer_7;
                            data_pointer_2[1] = data_pointer_3;
                            *data_pointer_3 = data_pointer_2;
                            data_pointer_3 = data_pointer_2;
                            *(char *)(&data_pointer_2[2]) = 1;
                        }
                        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                        {
                            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xd, WD_SYMBOL_ADDRESS(WPP_d860aa9c61163a6fb2c7d053d2b6efa5_Traceguids), (uint64_t)KeGetCurrentThread(), value_7);
                        }
                    }

                    FltAcquirePushLockExclusive(MpFsHardeningData + 0x18);
                    if (input_2 == 1)
                    {
                        FsHardeningItemListClearUnsafe();
                    }
                    fs_hardening_data = MpFsHardeningData;
                    MpAppendList((WD_LAYOUT_25 *)(MpFsHardeningData + 8), &data_pointer_7);
                    FltReleasePushLock(fs_hardening_data + 0x18);
                }
            }
        }
        else if (input_2 != 2)
        {
            FsHardeningItemListResetToDefault();
        }
    }
    return;
}

int32_t FsHardeningItemCreate(uint16_t *source_string, uint16_t *extension, int32_t input, int32_t input_2, uint32_t input_3, int32_t input_4, int64_t *input_5)
{
    uint64_t *destination_string;
    int64_t value;
    uint64_t value_2;
    uint32_t value_3;
    uint16_t value_4;
    int64_t fs_hardening_data;
    uint32_t value_5;
    int64_t *data_pointer;
    int64_t allocation;
    int32_t value_6;
    int32_t value_7;
    int64_t values[2];
    data_pointer = input_5;
    value_7 = input_4;
    value_5 = input_3;
    value_3 = (uint32_t)((uint64_t)value_2 >> 0x20);
    values[0] = 0;
    if (MpFsHardeningData && source_string && input_5 && ((uint32_t)(input - 1U) <= 2 && (uint32_t)(input_2 - 1U) <= 3) && (!(input_3 & 0xffffffe0) && (uint32_t)(input_4 - 1U) <= 5) && (*(int32_t *)(MpData + 0x364) <= -1 || input_4 != 6))
    {
        *input_5 = 0;
        value_6 = FsHardeningItemAllocate(source_string, values);
        allocation = values[0];
        if (value_6 <= -1)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xe, WD_SYMBOL_ADDRESS(WPP_d860aa9c61163a6fb2c7d053d2b6efa5_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)value_6 & 0xffffffffULL);
            }
            return -0x3fffff66;
        }
        *(int64_t *)(values[0] + 8) = values[0];
        *(int64_t *)values[0] = values[0];
        *(char *)(values[0] + 0x10) = 0;
        *(int32_t *)(values[0] + 0x14) = input;
        *(int32_t *)(values[0] + 0x18) = input_2;
        *(uint32_t *)(values[0] + 0x1c) = value_5;
        *(int32_t *)(values[0] + 0x20) = value_7;
        destination_string = (uint64_t *)(values[0] + 0x28);
        value_4 = *source_string;
        *(uint16_t *)(values[0] + 0xac) = value_4 + 2;
        *destination_string = 0;
        *(uint64_t *)(values[0] + 0x30) = 0;
        *(uint16_t *)(values[0] + 0x2a) = value_4 + 2;
        *(int64_t *)(values[0] + 0x30) = values[0] + 0xae;
        RtlCopyUnicodeString(destination_string, source_string);
        RtlUpcaseUnicodeString(destination_string, destination_string, 0);
        value_7 = MpParseFileNameEx(destination_string, 0, NULL, extension, (int64_t *)(allocation + 0x38));
        if (0 <= value_7)
        {
            *data_pointer = allocation;
        }
        else
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qZD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xf, WD_SYMBOL_ADDRESS(WPP_d860aa9c61163a6fb2c7d053d2b6efa5_Traceguids), (uint64_t)KeGetCurrentThread(), source_string, value_7);
            }
            fs_hardening_data = MpFsHardeningData;
            if (allocation)
            {
                if (*(uint32_t *)(allocation + 0xa8) & 1)
                {
                    value = MpFsHardeningData + 0x20;
                    *(int32_t *)(MpFsHardeningData + 0x3c) = *(int32_t *)(MpFsHardeningData + 0x3c) + 1;
                    value_4 = *(uint16_t *)(fs_hardening_data + 0x30);
                    if (value_4 <= (uint16_t)ExQueryDepthSList(value))
                    {
                        *(int32_t *)(fs_hardening_data + 0x40) = *(int32_t *)(fs_hardening_data + 0x40) + 1;
                        (*__guard_dispatch_icall_fptr)(allocation, value);
                    }
                    else
                    {
                        ExpInterlockedPushEntrySList(value, allocation);
                    }
                }
                else
                {
                    ExFreePoolWithTag(allocation, 0x6968504d);
                }
            }
        }
        return value_7;
    }
    return -0x3ffffff3;
}

int64_t *FsHardeningItemAllocate(uint16_t *input, uint64_t *input_2)
{
    int64_t fs_hardening_data;
    int64_t *list_entry;
    uint32_t value;
    uint32_t allocation_size;
    fs_hardening_data = MpFsHardeningData;
    value = 0;
    allocation_size = 0x1b0;
    if (!input_2 || !input || !MpFsHardeningData)
    {
        list_entry = (int64_t *)WD_STATUS_INVALID_PARAMETER;
        return list_entry;
    }
    *input_2 = 0;
    if (0xff <= *input + 2ULL)
    {
        allocation_size = *input + 0xb4;
    }
    if (allocation_size <= *(uint32_t *)(fs_hardening_data + 0x80) && *(uint32_t *)(fs_hardening_data + 0x80))
    {
        *(int32_t *)(fs_hardening_data + 0x34) = *(int32_t *)(fs_hardening_data + 0x34) + 1;
        list_entry = (int64_t *)ExpInterlockedPopEntrySList(fs_hardening_data + 0x20);
        if (!list_entry)
        {
            *(int32_t *)(fs_hardening_data + 0x38) = *(int32_t *)(fs_hardening_data + 0x38) + 1;
            list_entry = (int64_t *)(*__guard_dispatch_icall_fptr)(*(uint32_t *)(fs_hardening_data + 0x44), *(uint32_t *)(fs_hardening_data + 0x4c), *(uint32_t *)(fs_hardening_data + 0x48), fs_hardening_data + 0x20);
        }
        if (list_entry)
        {
            memset(list_entry, 0, *(uint32_t *)(MpFsHardeningData + 0x80));
        }
        value = 1;
    }
    else
    {
        list_entry = (int64_t *)MpAllocatePoolWithTag(1, allocation_size, 0x6968504d);
    }
    if (!list_entry)
    {
        list_entry = (int64_t *)WD_STATUS_INSUFFICIENT_RESOURCES;
        return list_entry;
    }
    *(uint32_t *)(&list_entry[0x15]) = *(uint32_t *)(&list_entry[0x15]) | value;
    *input_2 = list_entry;
    list_entry = NULL;
    return list_entry;
}

void FsHardeningItemListClearUnsafe(void)
{
    uint64_t *allocation;
    uint64_t *data_pointer;
    int64_t fs_hardening_data;
    int64_t *data_pointer_2;
    fs_hardening_data = MpFsHardeningData;
    if (!MpFsHardeningData)
    {
        return;
    }
    data_pointer_2 = (int64_t *)(MpFsHardeningData + 8);
    while (true)
    {
        if ((int64_t *)(*data_pointer_2) == data_pointer_2)
        {
            *(int64_t **)(fs_hardening_data + 0x10) = data_pointer_2;
            *data_pointer_2 = (int64_t)data_pointer_2;
            return;
        }
        allocation = *(uint64_t **)(fs_hardening_data + 0x10);
        if ((int64_t *)(*allocation) != data_pointer_2 || (data_pointer = (uint64_t *)allocation[1], (uint64_t *)(*data_pointer) != allocation))
        {
            break;
        }
        *(uint64_t **)(fs_hardening_data + 0x10) = data_pointer;
        *data_pointer = data_pointer_2;
        *(char *)(&allocation[2]) = 0;
        FsHardeningItemFree(allocation);
    }

    (*(WD_ROUTINE)swi(0x29))(3);
}

void FsHardeningItemFree(WD_LAYOUT_2 *allocation)
{
    uint16_t value;
    int64_t fs_hardening_data;
    int64_t value_2;
    fs_hardening_data = MpFsHardeningData;
    if (!allocation)
    {
        return;
    }
    if (allocation->field_0xa8 & 1)
    {
        value_2 = MpFsHardeningData + 0x20;
        *(int32_t *)(MpFsHardeningData + 0x3c) = *(int32_t *)(MpFsHardeningData + 0x3c) + 1;
        value = *(uint16_t *)(fs_hardening_data + 0x30);
        if (value <= (uint16_t)ExQueryDepthSList(value_2))
        {
            *(int32_t *)(fs_hardening_data + 0x40) = *(int32_t *)(fs_hardening_data + 0x40) + 1;
            (*__guard_dispatch_icall_fptr)(allocation, value_2);
            return;
        }
        ExpInterlockedPushEntrySList(value_2, allocation);
        return;
    }
    ExFreePoolWithTag(allocation, 0x6968504d);
    return;
}

void FsHardeningItemListResetToDefault(void)
{
    int32_t value;
    uint16_t *source_string;
    uint64_t ***data_pointer;
    uint64_t ***data_pointer_2;
    int64_t fs_hardening_data;
    uint64_t ***data_pointer_3;
    if (MpFsHardeningData)
    {
        data_pointer_2 = NULL;
        data_pointer_3 = &data_pointer;
        data_pointer = &data_pointer;
        value = FsHardeningItemCreate(&ProgramDataUpdatePathEx, NULL, 2, 2, 9, 1, &data_pointer_2);
        if (0 <= value)
        {
            if ((uint64_t ****)(*data_pointer_3) != &data_pointer)
            {
                (*(WD_ROUTINE)swi(0x29))(3);
            }
            *data_pointer_2 = &data_pointer;
            data_pointer_2[1] = data_pointer_3;
            *data_pointer_3 = data_pointer_2;
            data_pointer_3 = data_pointer_2;
            *(char *)(&data_pointer_2[2]) = 1;
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x10, WD_SYMBOL_ADDRESS(WPP_d860aa9c61163a6fb2c7d053d2b6efa5_Traceguids), (uint64_t)KeGetCurrentThread(), value);
        }
        data_pointer_2 = NULL;
        value = FsHardeningItemCreate(&ProgramDataSupportPathEx, NULL, 2, 2, 9, 1, &data_pointer_2);
        if (0 <= value)
        {
            if ((uint64_t ****)(*data_pointer_3) != &data_pointer)
            {
                (*(WD_ROUTINE)swi(0x29))(3);
            }
            *data_pointer_2 = &data_pointer;
            data_pointer_2[1] = data_pointer_3;
            *data_pointer_3 = data_pointer_2;
            data_pointer_3 = data_pointer_2;
            *(char *)(&data_pointer_2[2]) = 1;
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x11, WD_SYMBOL_ADDRESS(WPP_d860aa9c61163a6fb2c7d053d2b6efa5_Traceguids), (uint64_t)KeGetCurrentThread(), value);
        }
        source_string = &ProductDirFullWin7PathEx;
        data_pointer_2 = NULL;
        if ((*(uint32_t *)(MpData + 0x360) & 0x10006) != 2)
        {
            source_string = &ProductDirFullPathEx;
        }
        value = FsHardeningItemCreate(source_string, NULL, 2, 1, 10, 1, &data_pointer_2);
        if (0 <= value)
        {
            if ((uint64_t ****)(*data_pointer_3) != &data_pointer)
            {
                (*(WD_ROUTINE)swi(0x29))(3);
            }
            *data_pointer_2 = &data_pointer;
            data_pointer_2[1] = data_pointer_3;
            *data_pointer_3 = data_pointer_2;
            data_pointer_3 = data_pointer_2;
            *(char *)(&data_pointer_2[2]) = 1;
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x12, WD_SYMBOL_ADDRESS(WPP_d860aa9c61163a6fb2c7d053d2b6efa5_Traceguids), (uint64_t)KeGetCurrentThread(), value);
        }
        source_string = &ProductDirFullWin7Path;
        data_pointer_2 = NULL;
        if ((*(uint32_t *)(MpData + 0x360) & 0x10006) != 2)
        {
            source_string = &ProductDirFullPathSlashEx;
        }
        value = FsHardeningItemCreate(source_string, NULL, 2, 2, 10, 1, &data_pointer_2);
        if (0 <= value)
        {
            if ((uint64_t ****)(*data_pointer_3) != &data_pointer)
            {
                (*(WD_ROUTINE)swi(0x29))(3);
            }
            *data_pointer_2 = &data_pointer;
            data_pointer_2[1] = data_pointer_3;
            *data_pointer_3 = data_pointer_2;
            data_pointer_3 = data_pointer_2;
            *(char *)(&data_pointer_2[2]) = 1;
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x13, WD_SYMBOL_ADDRESS(WPP_d860aa9c61163a6fb2c7d053d2b6efa5_Traceguids), (uint64_t)KeGetCurrentThread(), value);
        }
        data_pointer_2 = NULL;
        value = FsHardeningItemCreate(&ProgramDataFullPathEx, NULL, 2, 1, 10, 1, &data_pointer_2);
        if (0 <= value)
        {
            if ((uint64_t ****)(*data_pointer_3) != &data_pointer)
            {
                (*(WD_ROUTINE)swi(0x29))(3);
            }
            *data_pointer_2 = &data_pointer;
            data_pointer_2[1] = data_pointer_3;
            *data_pointer_3 = data_pointer_2;
            data_pointer_3 = data_pointer_2;
            *(char *)(&data_pointer_2[2]) = 1;
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x14, WD_SYMBOL_ADDRESS(WPP_d860aa9c61163a6fb2c7d053d2b6efa5_Traceguids), (uint64_t)KeGetCurrentThread(), value);
        }
        data_pointer_2 = NULL;
        value = FsHardeningItemCreate(&ProgramDataFullPathSlashEx, NULL, 2, 2, 10, 1, &data_pointer_2);
        if (0 <= value)
        {
            if ((uint64_t ****)(*data_pointer_3) != &data_pointer)
            {
                (*(WD_ROUTINE)swi(0x29))(3);
            }
            *data_pointer_2 = &data_pointer;
            data_pointer_2[1] = data_pointer_3;
            *data_pointer_3 = data_pointer_2;
            data_pointer_3 = data_pointer_2;
            *(char *)(&data_pointer_2[2]) = 1;
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x15, WD_SYMBOL_ADDRESS(WPP_d860aa9c61163a6fb2c7d053d2b6efa5_Traceguids), (uint64_t)KeGetCurrentThread(), value);
        }
        source_string = &ProductDirFullWin7PathX86Ex;
        data_pointer_2 = NULL;
        if ((*(uint32_t *)(MpData + 0x360) & 0x10006) != 2)
        {
            source_string = &ProductDirFullPathX86Ex;
        }
        value = FsHardeningItemCreate(source_string, NULL, 2, 1, 10, 1, &data_pointer_2);
        if (0 <= value)
        {
            if ((uint64_t ****)(*data_pointer_3) != &data_pointer)
            {
                (*(WD_ROUTINE)swi(0x29))(3);
            }
            *data_pointer_2 = &data_pointer;
            data_pointer_2[1] = data_pointer_3;
            *data_pointer_3 = data_pointer_2;
            data_pointer_3 = data_pointer_2;
            *(char *)(&data_pointer_2[2]) = 1;
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x16, WD_SYMBOL_ADDRESS(WPP_d860aa9c61163a6fb2c7d053d2b6efa5_Traceguids), (uint64_t)KeGetCurrentThread(), value);
        }
        source_string = &ProductDirFullWin7PathX86;
        data_pointer_2 = NULL;
        if ((*(uint32_t *)(MpData + 0x360) & 0x10006) != 2)
        {
            source_string = &ProductDirFullPathSlashX86Ex;
        }
        value = FsHardeningItemCreate(source_string, NULL, 2, 2, 10, 1, &data_pointer_2);
        if (0 <= value)
        {
            if ((uint64_t ****)(*data_pointer_3) != &data_pointer)
            {
                (*(WD_ROUTINE)swi(0x29))(3);
            }
            *data_pointer_2 = &data_pointer;
            data_pointer_2[1] = data_pointer_3;
            *data_pointer_3 = data_pointer_2;
            data_pointer_3 = data_pointer_2;
            *(char *)(&data_pointer_2[2]) = 1;
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x17, WD_SYMBOL_ADDRESS(WPP_d860aa9c61163a6fb2c7d053d2b6efa5_Traceguids), (uint64_t)KeGetCurrentThread(), value);
        }
        FltAcquirePushLockExclusive(MpFsHardeningData + 0x18);
        FsHardeningItemListClearUnsafe();
        fs_hardening_data = MpFsHardeningData;
        MpAppendList((WD_LAYOUT_25 *)(MpFsHardeningData + 8), &data_pointer);
        FltReleasePushLock(fs_hardening_data + 0x18);
    }
    return;
}

uint64_t MpFsHardeningInitialize(void)
{
    int32_t value;
    char *allocation;
    uint64_t value_2;
    char *bytes;
    if (MpFsHardeningData)
    {
        return 0;
    }
    allocation = (char *)MpAllocatePoolWithTag(ExDefaultNonPagedPoolType, (char *)0x90, 0x6468504d);
    MpFsHardeningData = allocation;
    if (!allocation)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 10, WD_SYMBOL_ADDRESS(WPP_d860aa9c61163a6fb2c7d053d2b6efa5_Traceguids), (uint64_t)KeGetCurrentThread());
        }
        return WD_STATUS_INSUFFICIENT_RESOURCES;
    }
    FltInitializePushLock(&allocation[0x18]);
    allocation = &MpFsHardeningData[8];
    bytes = &MpFsHardeningData[0x20];
    *(char **)(&MpFsHardeningData[0x10]) = allocation;
    *(char **)allocation = allocation;
    value = ExInitializeLookasideListEx(bytes, 0, 0, 1, 0, 0x1b0, 0x6968504d, 0);
    if (0 <= value)
    {
        *(uint32_t *)(&MpFsHardeningData[0x80]) = 0x1b0;
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
    {
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xb, WD_SYMBOL_ADDRESS(WPP_d860aa9c61163a6fb2c7d053d2b6efa5_Traceguids), (uint64_t)KeGetCurrentThread(), value);
    }
    *MpFsHardeningData = 1;
    value_2 = FsHardeningItemListResetToDefault();
    if (0 <= (int32_t)value_2)
    {
        return value_2;
    }
    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
    {
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xc, WD_SYMBOL_ADDRESS(WPP_d860aa9c61163a6fb2c7d053d2b6efa5_Traceguids), (uint64_t)KeGetCurrentThread(), (int32_t)value_2);
    }
    return 0;
}

void MpFsHardeningRelease(void)
{
    if (!MpFsHardeningData)
    {
        return;
    }
    FltAcquirePushLockExclusive(MpFsHardeningData + 0x18);
    FsHardeningItemListClearUnsafe();
    FltReleasePushLock(MpFsHardeningData + 0x18);
    if (*(int32_t *)(MpFsHardeningData + 0x80))
    {
        ExDeleteLookasideListEx(MpFsHardeningData + 0x20);
    }
    FltDeletePushLock(MpFsHardeningData + 0x18);
    ExFreePoolWithTag(MpFsHardeningData, 0x6468504d);
    MpFsHardeningData = 0;
    return;
}

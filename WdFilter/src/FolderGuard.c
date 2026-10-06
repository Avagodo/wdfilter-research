#include "wdfilter.h"

void RtlUnicodeStringCopyString(WD_UNICODE_STRING_VALUE *input, int16_t *input_2)
{
    uint64_t value = 0;
    uint64_t value_2 = 0;
    uint64_t value_3;
    if (0 <= RtlUnicodeStringValidateDestWorker(input, &value, &value_2, NULL, 0x7fff, 0))
    {
        value_3 = 0;
        RtlWideCharArrayCopyStringWorker(value, value_2, &value_3, input_2, 0x7fff);
        input->Length = (int16_t)value_3 * 2;
    }
    return;
}

void MpFgEventTimerDpc(uint64_t input, void *input_2)
{
    uint64_t value;
    int64_t value_2;
    if (!((char *)input_2)[0x200])
    {
        value_2 = FltAllocateGenericWorkItem();
        if (value_2)
        {
            value = *(uint64_t *)(MpData + 0x10);
            if ((int32_t)FltQueueGenericWorkItem(value_2, value, FgSendEventsWorker, 1, input_2) <= -1)
            {
                FltFreeGenericWorkItem(value_2);
            }
        }
    }
    return;
}

void MpFgIsFileProtected(WD_LAYOUT_79 *input, uint64_t input_2)
{
    int64_t value;
    uint32_t value_2;
    uint32_t value_3;
    uint16_t value_4;
    uint16_t value_5;
    uint32_t value_6;
    uint64_t value_7;
    value = WdFolderguardStorage;
    value_3 = 0;
    value_6 = 0;
    if (WdFolderguardStorage)
    {
        value_4 = input->field_0x0;
        value_5 = input->field_0x2;
        value_7 = input->field_0x8;
        value_2 = 0x18da1a;
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(value + 0x10, (uint64_t)input_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
        if (*(int64_t *)(WdFolderguardStorage + 8))
        {
            RtlLookupElementGenericTableAvl(*(int64_t *)(WdFolderguardStorage + 8), &value_2);
        }
        ExReleaseResourceLite(WdFolderguardStorage + 0x10);
        KeLeaveCriticalRegion();
    }
    return;
}

void MpFgSendNotification(void *input, WD_UNICODE_STRING_VALUE *input_2, char input_3)
{
    uint32_t value;
    int64_t destination_string[2];
    char buffer[8];
    int64_t value_2;
    int64_t value_3;
    uint64_t value_4;
    uint64_t value_5;
    uint32_t value_6;
    uint64_t value_7;
    uint64_t value_8;
    int32_t value_9;
    uint16_t value_10;
    int64_t *allocation;
    uint8_t byte_value;
    char byte_value_2;
    uint32_t value_11;
    uint32_t value_12;
    uint32_t value_13;
    uint32_t value_14;
    int64_t value_16;
    uint64_t value_17;
    uint32_t value_18;
    uint64_t value_19;
    uint32_t buffer_3[2];
    uint16_t value_20;
    value_6 = (uint32_t)((uint64_t)value_4 >> 0x20);
    memset(buffer_3, 0, (char *)0x50);
    buffer[0] = '\x01';
    value_17 = 0;
    value_2 = 0;
    buffer_3[0] = 0x50da1c;
    byte_value = (uint8_t)(((uint32_t *)input)[0xe] >> 0x12) & 1;
    value_7 = ((uint64_t *)input)[3];
    value_8 = ((uint64_t *)input)[4];
    value_11 = ((uint32_t *)input)[0x2a];
    value_12 = ((uint32_t *)input)[0x2b];
    value_13 = ((uint32_t *)input)[0x2c];
    value_14 = ((uint32_t *)input)[0x2d];
    byte_value_2 = input_3;
    value_9 = MpQuerySessionId();
    if (value_9 <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        value_19 = ((uint64_t)value_6 & 0xffffffffULL) << 32 | (uint64_t)value_9 & 0xffffffffULL;
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x19, WD_SYMBOL_ADDRESS(WPP_44777a27dd283be4fccdb831528250f3_Traceguids), (uint64_t)KeGetCurrentThread(), value_19);
        value_6 = (uint32_t)((uint64_t)value_19 >> 0x20);
    }
    allocation = MpAllocatePoolWithTag(1, input_2->MaximumLength, 0x6746504d);
    value_3 = value_2;
    if (allocation)
    {
        value_20 = 0;
        value_10 = input_2->MaximumLength;
        value_9 = RtlUnicodeStringCopy(&value_20, input_2);
        if (0 <= value_9)
        {
            if (((WD_UNICODE_STRING_VALUE **)input)[0x10] && (value_9 = MpDuplicateString(((WD_UNICODE_STRING_VALUE **)input)[0x10], destination_string), value_9 <= -1) && (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                value_19 = ((uint64_t)value_6 & 0xffffffffULL) << 32 | (uint64_t)value_9 & 0xffffffffULL;
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1c, WD_SYMBOL_ADDRESS(WPP_44777a27dd283be4fccdb831528250f3_Traceguids), (uint64_t)KeGetCurrentThread(), value_19);
                value_6 = (uint32_t)((uint64_t)value_19 >> 0x20);
            }
            ExAcquireFastMutex(WdFolderguardStorage + 0x110);
            if (*(int64_t *)(WdFolderguardStorage + 0x108))
            {
                block_1:
                value_17 = RtlInsertElementGenericTableAvl(*(uint64_t *)(WdFolderguardStorage + 0x108), buffer_3, 0x50, buffer);

                if (value_17)
                {
                    if (buffer[0])
                    {
                        allocation = NULL;
                        destination_string[0] = 0;
                        value = *(uint32_t *)(WdFolderguardStorage + 0xfc);
                        value_19 = *(uint64_t *)(WdFolderguardStorage + 0x108);
                        if (value <= (uint32_t)RtlNumberGenericTableElementsAvl(value_19))
                        {
                            value_2 = FltAllocateGenericWorkItem();
                            value_3 = value_2;
                            if (!value_2)
                            {
                                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                {
                                    value_18 = 0x20;
                                    goto block_4;
                                }
                                goto block_6;
                            }
                            value_17 = WdFolderguardStorage;
                            value_9 = FltQueueGenericWorkItem(value_2, *(uint64_t *)(MpData + 0x10), FgSendEventsWorker, 1, WdFolderguardStorage);
                            if (0 <= value_9)
                            {
                                goto block_2;
                            }
                            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                            {
                                goto block_6;
                            }
                            value_18 = 0x21;
                            value_19 = (uint64_t)value_17 & 0xffffffff00000000 | (uint64_t)value_9 & 0xffffffff;
                            goto block_5;
                        }
                        value_19 = *(uint64_t *)(WdFolderguardStorage + 0x108);
                        if (RtlNumberGenericTableElementsAvl(value_19) == 1 && (!(*(char *)(WdFolderguardStorage + 0xf8)) || (value_2 = WdFolderguardStorage + 0x78, KeReadStateTimer(value_2))))
                        {
                            KeSetTimer(WdFolderguardStorage + 0x78, *(uint64_t *)(WdFolderguardStorage + 0x100), WdFolderguardStorage + 0xb8);
                            *(char *)(WdFolderguardStorage + 0xf8) = 1;
                        }
                    }
                    else
                    {
                        if (!value_17)
                        {
                            goto block_3;
                        }
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                        {
                            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1f, WD_SYMBOL_ADDRESS(WPP_44777a27dd283be4fccdb831528250f3_Traceguids), (uint64_t)KeGetCurrentThread());
                        }
                    }
                    block_2:
                    value_3 = 0;
                }
                else
                {
                    block_3:
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        value_18 = 0x1e;
                        goto block_4;
                    }
                }
            }
            else
            {
                value_16 = ExAllocateFromPagedLookasideList((void *)(WdFolderguardStorage + 0x180));
                *(int64_t *)(WdFolderguardStorage + 0x108) = value_16;
                if (value_16)
                {
                    value_6 = 0;
                    RtlInitializeGenericTableAvl(value_16, MpFgAuditTableCompareRoutine, MpFgAvlAllocateRoutine, MpFgAvlFreeRoutine, 0);
                    goto block_1;
                }
                value_3 = value_17;
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || (value_3 = value_2, !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)))
                {
                    goto block_6;
                }
                value_18 = 0x1d;
                value_2 = value_17;
                block_4:
                value_19 = ((uint64_t)value_6 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INSUFFICIENT_RESOURCES & 0xffffffffULL;

                block_5:
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_18, WD_SYMBOL_ADDRESS(WPP_44777a27dd283be4fccdb831528250f3_Traceguids), (uint64_t)KeGetCurrentThread(), value_19);

                value_3 = value_2;
            }
            block_6:
            ExReleaseFastMutex(WdFolderguardStorage + 0x110);

            goto block_7;
        }
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            goto block_7;
        }
        value_19 = 0x1b;
        value_5 = ((uint64_t)value_6 & 0xffffffffULL) << 32 | (uint64_t)value_9 & 0xffffffffULL;
    }
    else
    {
        value_3 = value_17;
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || (value_3 = value_2, !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)))
        {
            goto block_7;
        }
        value_19 = 0x1a;
        value_5 = ((uint64_t)value_6 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INSUFFICIENT_RESOURCES & 0xffffffffULL;
    }
    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_19, WD_SYMBOL_ADDRESS(WPP_44777a27dd283be4fccdb831528250f3_Traceguids), (uint64_t)KeGetCurrentThread(), value_5);
    value_3 = value_2;
    block_7:
    if (allocation)
    {
        ExFreePoolWithTag(allocation, 0x6746504d);
    }

    if (destination_string[0])
    {
        MpFreeString(destination_string[0]);
    }
    if (value_3)
    {
        FltFreeGenericWorkItem(value_3);
    }
    return;
}

uint64_t MpFgAvlCompareRoutine(uint64_t input, void *input_2, void *input_3)
{
    uint16_t *source_name;
    uint16_t *target_name;
    int64_t value;
    int32_t value_2;
    source_name = &((uint16_t *)input_2)[4];
    target_name = &((uint16_t *)input_3)[4];
    value_2 = RtlCompareUnicodeString(source_name, target_name, (uint64_t)((uint64_t)input_3) & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
    if (value_2)
    {
        if (value_2 <= -1)
        {
            return 0;
        }
        if (1 <= value_2 && (*source_name <= *target_name || (value = ((int64_t *)input_2)[2], *(int16_t *)(value + (uint64_t)(*target_name >> 1) * 2) != 0x5c) || !RtlPrefixUnicodeString(target_name, source_name, (uint64_t)value & 0xffffffffffffff00 | (uint64_t)1 & 0xff)))
        {
            return 1;
        }
    }
    return 2;
}

void MpFgCreateProtectedFoldersTable(void *input, uint64_t *input_2)
{
    uint64_t value;
    char buffer[8];
    uint64_t value_2;
    uint32_t result;
    int16_t *source_text;
    int16_t value_3;
    uint32_t value_4;
    uint64_t value_5;
    int16_t *wide_text;
    uint64_t allocation;
    int32_t status;
    uint32_t value_6;
    uint32_t value_7;
    uint32_t left;
    uint64_t value_8;
    uint64_t *data_pointer;
    int64_t allocation_2;
    int64_t *allocation_3;
    int64_t value_10;
    uint32_t value_11;
    uint64_t buffer_size;
    uint64_t text_size;
    uint64_t value_12;
    value_6 = (uint32_t)((uint64_t)value_5 >> 0x20);
    value_4 = 0;
    *input_2 = 0;
    value_7 = 0;
    allocation_2 = 0;
    text_size = 0;
    value_2 = 0;
    value_12 = 0;
    data_pointer = input_2;
    if (((int32_t *)input)[4])
    {
        allocation_3 = MpAllocatePoolWithTag(1, (char *)0x68, 0x7046504d);
        if (allocation_3)
        {
            wide_text = NULL;
            RtlInitializeGenericTableAvl(allocation_3, MpFgAvlCompareRoutine, MpFgAvlAllocateRoutine, MpFgAvlFreeRoutine, 0);
            result = ((uint32_t *)input)[4];
            source_text = (int16_t *)(((int64_t *)input)[3] + (int64_t)input);
            left = result;
            while (value_4 < ((uint32_t *)input)[4])
            {
                buffer_size = left;
                buffer[0] = '\0';
                status = RtlStringCbLengthW(source_text, buffer_size, &text_size);
                value = text_size;
                value_6 = (uint32_t)((uint64_t)wide_text >> 0x20);
                if (status < 0)
                {
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        buffer_size = 0x10;
                        block_1:
                        allocation = ((uint64_t)value_6 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL;

                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), buffer_size, WD_SYMBOL_ADDRESS(WPP_44777a27dd283be4fccdb831528250f3_Traceguids), (uint64_t)KeGetCurrentThread(), allocation);
                    }
                    goto block_4;
                }
                if (0x10000 <= text_size)
                {
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        buffer_size = 0x11;
                        allocation = ((uint64_t)value_6 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INTEGER_OVERFLOW & 0xffffffffULL;
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), buffer_size, WD_SYMBOL_ADDRESS(WPP_44777a27dd283be4fccdb831528250f3_Traceguids), (uint64_t)KeGetCurrentThread(), allocation);
                    }
                    goto block_4;
                }
                value_3 = (int16_t)text_size;
                if (!value_3)
                {
                    break;
                }
                allocation_2 = 0;
                buffer_size = text_size & 0xffff;
                value_12 = 0;
                value_2 = 0x18da1a;
                value_8 = buffer_size;
                allocation_2 = (int64_t)MpAllocatePoolWithTag(1, buffer_size, 0x6746504d);
                value_6 = (uint32_t)((uint64_t)wide_text >> 0x20);
                if (!allocation_2)
                {
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        buffer_size = 0x12;
                        block_2:
                        allocation = ((uint64_t)value_6 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INSUFFICIENT_RESOURCES & 0xffffffffULL;

                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), buffer_size, WD_SYMBOL_ADDRESS(WPP_44777a27dd283be4fccdb831528250f3_Traceguids), (uint64_t)KeGetCurrentThread(), allocation);
                    }
                    goto block_4;
                }
                value_12 = (uint64_t)(((uint64_t)((int32_t)(value_12 >> 0x20)) & 0xffffffffULL) << 16 | (uint64_t)value_3 & 0xffffULL) << 0x10;
                status = RtlUnicodeStringCopyString(&value_12, source_text);
                if (status < 0)
                {
                    goto block_3;
                }
                if (*(int16_t *)(allocation_2 + -2 + (value_12 & 0xfffe)) == 0x5c)
                {
                    value_12 = ((uint64_t)WdLoadField(&value_12, 2, 6) & 0xffffffffffffULL) << 16 | (uint64_t)((int16_t)value_12 + -2) & 0xffffULL;
                }
                value_10 = RtlInsertElementGenericTableAvl(allocation_3, &value_2, 0x18, buffer);
                if (!value_10 || !buffer[0])
                {
                    buffer_size = 0x6746504d;
                    ExFreePoolWithTag(allocation_2, 0x6746504d);
                    value_6 = (uint32_t)((uint64_t)wide_text >> 0x20);
                    allocation_2 = 0;
                    if (!value_10)
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            buffer_size = 0x14;
                            goto block_2;
                        }
                        goto block_4;
                    }
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                    {
                        wide_text = source_text;
                        WPP_SF_qS(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x15, WD_SYMBOL_ADDRESS(WPP_44777a27dd283be4fccdb831528250f3_Traceguids), (uint64_t)KeGetCurrentThread(), source_text);
                    }
                }
                value_11 = (uint32_t)value & 0xffff;
                source_text = (int16_t *)((int64_t)source_text + value_8 + 2);
                value_4 = value_7 + 2 + value_11;
                buffer_size = value_11 + 2;
                status = RtlULongSub(left, buffer_size, &result);
                value_6 = (uint32_t)((uint64_t)wide_text >> 0x20);
                if (status < 0)
                {
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        buffer_size = 0x16;
                        goto block_1;
                    }
                    goto block_4;
                }
                left = result;
                value_7 = value_4;
            }

            *data_pointer = allocation_3;
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xf, WD_SYMBOL_ADDRESS(WPP_44777a27dd283be4fccdb831528250f3_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_6 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INSUFFICIENT_RESOURCES & 0xffffffffULL);
        }
    }
    return;
    block_3:
    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x13, WD_SYMBOL_ADDRESS(WPP_44777a27dd283be4fccdb831528250f3_Traceguids), (uint64_t)KeGetCurrentThread(), (uint64_t)((uint64_t)wide_text) & 0xffffffff00000000 | (uint64_t)status & 0xffffffff);
    }

    buffer_size = 0x6746504d;
    ExFreePoolWithTag(allocation_2, 0x6746504d);
    allocation_2 = 0;
    block_4:
    while (value_10 = RtlEnumerateGenericTableAvl(allocation_3, (uint64_t)buffer_size & 0xffffffffffffff00 | (uint64_t)1 & 0xff), value_10)
    {
        allocation = *(uint64_t *)(value_10 + 0x10);
        RtlDeleteElementGenericTableAvl(allocation_3, value_10);
        buffer_size = 0x6746504d;
        ExFreePoolWithTag(allocation, 0x6746504d);
    }


    ExFreePoolWithTag(allocation_3, 0x7046504d);
    return;
}

char MpFgAuditTableCompareRoutine(uint64_t input, void *input_2, void *input_3)
{
    int32_t value;
    if (((uint64_t *)input_2)[1] < ((uint64_t *)input_3)[1])
    {
        return '\0';
    }
    if (((uint64_t *)input_2)[1] != ((uint64_t *)input_3)[1])
    {
        return '\x01';
    }
    if (((int64_t *)input_2)[2] < ((int64_t *)input_3)[2])
    {
        return '\0';
    }
    if (((int64_t *)input_2)[2] <= ((int64_t *)input_3)[2])
    {
        value = RtlCompareUnicodeString((int64_t)input_2 + 0x28, (int64_t)input_3 + 0x28, 1);
        if (value <= -1)
        {
            return '\0';
        }
        return (value <= 0) + '\x01';
    }
    return '\x01';
}

void FgSendEventsWorker(uint64_t input, uint64_t input_2, void *input_3)
{
    WD_UNICODE_STRING_VALUE *record;
    uint64_t value;
    int64_t string;
    uint64_t value_2;
    uint32_t value_3;
    uint64_t value_4;
    uint64_t w_p_p__g_l_o_b_a_l__control;
    char buffer[32];
    int64_t values[3];
    uint32_t value_5;
    uint32_t value_6;
    uint32_t *data_pointer;
    int64_t value_7;
    uint32_t value_8;
    uint64_t value_9;
    uint64_t value_10;
    uint32_t value_11;
    int64_t value_12;
    uint16_t *string_2;
    uint32_t value_13;
    uint32_t value_14;
    char byte_value;
    int32_t value_15;
    int64_t value_16;
    values[2] = __security_cookie ^ (uint64_t)buffer;
    value_5 = 0;
    value_8 = 0;
    values[0] = 0;
    if (((char *)input_3)[0x200])
    {
        FltFreeGenericWorkItem(input);
        __security_check_cookie(values[2] ^ (uint64_t)buffer);
        return;
    }
    ExAcquireFastMutex((int64_t)input_3 + 0x110);
    value_12 = ((int64_t *)input_3)[0x21];
    ((uint64_t *)input_3)[0x21] = 0;
    ExReleaseFastMutex((int64_t)input_3 + 0x110);
    if (!value_12)
    {
        FltFreeGenericWorkItem(input);
        __security_check_cookie(values[2] ^ (uint64_t)buffer);
        return;
    }
    w_p_p__g_l_o_b_a_l__control = (uint64_t)input_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
    while (value_16 = RtlEnumerateGenericTableAvl(value_12, w_p_p__g_l_o_b_a_l__control), value_16)
    {
        value_8 += 1;
        value_3 = value_5 + 0x40;
        w_p_p__g_l_o_b_a_l__control = value_3;
        if (value_3 < value_5 || (value_6 = *(uint16_t *)(value_16 + 0x28) + value_3, value_6 < value_3) || (value_5 = value_6 + 2, value_5 < value_6) || *(uint16_t **)(value_16 + 0x18) && (value_3 = *(*(uint16_t **)(value_16 + 0x18)) + value_5, value_3 < value_5 || (value_5 = value_3 + 2, value_5 < value_3)))
        {
            goto block_7;
        }
        w_p_p__g_l_o_b_a_l__control = 0;
    }

    value_3 = value_5 + 0x20;
    if (value_5 <= value_3)
    {
        w_p_p__g_l_o_b_a_l__control = WdUnsignedMultiplyHigh(0x40, value_8);
        value = (uint64_t)((uint64_t)0x40 * (uint64_t)value_8);
        values[1] = 0;
        if (w_p_p__g_l_o_b_a_l__control)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                w_p_p__g_l_o_b_a_l__control = 0x22;
                block_1:
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), w_p_p__g_l_o_b_a_l__control, WD_SYMBOL_ADDRESS(WPP_44777a27dd283be4fccdb831528250f3_Traceguids), (uint64_t)KeGetCurrentThread(), (uint64_t)value_9 & 0xffffffff00000000 | (uint64_t)WD_STATUS_INTEGER_OVERFLOW & 0xffffffff);
            }
        }
        else
        {
            value_4 = value + 0x20;
            if (value <= value_4)
            {
                w_p_p__g_l_o_b_a_l__control = value_3;
                value_15 = MpAsyncCreateNotification(values, w_p_p__g_l_o_b_a_l__control);
                value_16 = values[0];
                value_11 = (uint32_t)((uint64_t)value_9 >> 0x20);
                if (0 <= value_15)
                {
                    *(uint32_t *)(values[0] + 0x10) = 0x11;
                    *(uint32_t *)(values[0] + 8) = value_3;
                    *(uint32_t *)(values[0] + 0x18) = value_8;
                    string = RtlEnumerateGenericTableAvl(value_12, (uint64_t)w_p_p__g_l_o_b_a_l__control & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
                    value = 0;
                    while (string)
                    {
                        values[0] = *(int64_t *)(string + 0x30);
                        string_2 = *(uint16_t **)(string + 0x18);
                        value_7 = value * 0x40;
                        *(uint32_t *)(value_7 + 0x20 + value_16) = *(uint32_t *)(string + 8);
                        value_10 = *(uint64_t *)(string + 0x10);
                        *(uint64_t *)(value_7 + 0x24 + value_16) = MpFileTimeFromUlong64(value_10);
                        record = (WD_UNICODE_STRING_VALUE *)(string + 0x28);
                        *(uint32_t *)(value_7 + 0x2c + value_16) = *(uint32_t *)(string + 0x20);
                        *(char *)(value_7 + 0x30 + value_16) = *(char *)(string + 0x38);
                        *(char *)(value_7 + 0x31 + value_16) = *(char *)(string + 0x39);
                        value_11 = *(uint32_t *)(string + 0x40);
                        value_13 = *(uint32_t *)(string + 0x44);
                        value_14 = *(uint32_t *)(string + 0x48);
                        data_pointer = (uint32_t *)(value_7 + 0x34 + value_16);
                        *data_pointer = *(uint32_t *)(string + 0x3c);
                        data_pointer[1] = value_11;
                        data_pointer[2] = value_13;
                        data_pointer[3] = value_14;
                        *(uint32_t *)(value_7 + 0x44 + value_16) = (uint32_t)record->Length;
                        *(uint64_t *)(value_7 + 0x48 + value_16) = value_4;
                        w_p_p__g_l_o_b_a_l__control = (uint64_t)record->Length + 2;
                        value_15 = RtlStringCbCopyUnicodeString((uint16_t *)(value_4 + value_16), w_p_p__g_l_o_b_a_l__control, record);
                        value_11 = (uint32_t)((uint64_t)value_9 >> 0x20);
                        if (value_15 < 0)
                        {
                            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                            {
                                goto block_6;
                            }
                            w_p_p__g_l_o_b_a_l__control = 0x25;
                            block_2:
                            value_10 = ((uint64_t)value_11 & 0xffffffffULL) << 32 | (uint64_t)value_15 & 0xffffffffULL;

                            goto block_5;
                        }
                        value_2 = *(uint16_t *)(string + 0x28) + 2ULL + value_4;
                        if (value_2 < value_4)
                        {
                            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                            {
                                goto block_6;
                            }
                            w_p_p__g_l_o_b_a_l__control = 0x26;
                            block_3:
                            value_10 = ((uint64_t)value_11 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INTEGER_OVERFLOW & 0xffffffffULL;

                            goto block_5;
                        }
                        value_4 = value_2;
                        if (string_2)
                        {
                            *(uint32_t *)(value_7 + 0x50 + value_16) = (uint32_t)(*string_2);
                            *(uint64_t *)(value_7 + 0x58 + value_16) = value_2;
                            w_p_p__g_l_o_b_a_l__control = *string_2 + 2ULL;
                            value_15 = RtlStringCbCopyUnicodeString((uint16_t *)(value_2 + value_16), w_p_p__g_l_o_b_a_l__control, string_2);
                            value_11 = (uint32_t)((uint64_t)value_9 >> 0x20);
                            if (value_15 < 0)
                            {
                                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                {
                                    w_p_p__g_l_o_b_a_l__control = 0x27;
                                    goto block_2;
                                }
                                goto block_6;
                            }
                            value_4 = *string_2 + 2ULL + value_2;
                            if (value_4 < value_2)
                            {
                                w_p_p__g_l_o_b_a_l__control = value_4;
                                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                {
                                    w_p_p__g_l_o_b_a_l__control = 0x28;
                                    goto block_3;
                                }
                                goto block_6;
                            }
                        }
                        byte_value = RtlDeleteElementGenericTableAvl(value_12, string);
                        if (byte_value)
                        {
                            string = 0x6746504d;
                            ExFreePoolWithTag(values[0], 0x6746504d);
                            if (string_2)
                            {
                                MpFreeString(string_2);
                            }
                        }
                        string = RtlEnumerateGenericTableAvl(value_12, (uint64_t)string & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
                        value = (int32_t)value + 1;
                    }

                    value_11 = 0;
                    w_p_p__g_l_o_b_a_l__control = value_3;
                    value_15 = MpAsyncSendNotification(value_16, w_p_p__g_l_o_b_a_l__control, 0, 1, NULL);
                    if (value_15 <= -1 && (w_p_p__g_l_o_b_a_l__control = WPP_GLOBAL_Control, WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control)) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        w_p_p__g_l_o_b_a_l__control = 0x29;
                        block_4:
                        value_10 = ((uint64_t)value_11 & 0xffffffffULL) << 32 | (uint64_t)value_15 & 0xffffffffULL;

                        block_5:
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), w_p_p__g_l_o_b_a_l__control, WD_SYMBOL_ADDRESS(WPP_44777a27dd283be4fccdb831528250f3_Traceguids), (uint64_t)KeGetCurrentThread(), value_10);
                    }
                }
                else
                {
                    w_p_p__g_l_o_b_a_l__control = WPP_GLOBAL_Control;
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        w_p_p__g_l_o_b_a_l__control = 0x24;
                        goto block_4;
                    }
                }
                block_6:
                if (value_16)
                {
                    MpAsyncDereferenceNotification(value_16);
                }
            }
            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                w_p_p__g_l_o_b_a_l__control = 0x23;
                goto block_1;
            }
        }
    }
    block_7:
    while (value_16 = RtlEnumerateGenericTableAvl(value_12, (uint64_t)w_p_p__g_l_o_b_a_l__control & 0xffffffffffffff00 | (uint64_t)1 & 0xff), value_16)
    {
        value_10 = *(uint64_t *)(value_16 + 0x30);
        string = *(int64_t *)(value_16 + 0x18);
        RtlDeleteElementGenericTableAvl(value_12, value_16);
        w_p_p__g_l_o_b_a_l__control = 0x6746504d;
        ExFreePoolWithTag(value_10, 0x6746504d);
        if (string)
        {
            MpFreeString(string);
        }
    }


    ExFreeToPagedLookasideList((void *)(WdFolderguardStorage + 0x180), value_12);
    FltFreeGenericWorkItem(input);
    __security_check_cookie(values[2] ^ (uint64_t)buffer);
    return;
}

void MpFgAuditShutdown(void)
{
    int64_t value;
    value = WdFolderguardStorage;
    if (!WdFolderguardStorage)
    {
        return;
    }
    *(char *)(WdFolderguardStorage + 0x200) = 1;
    KeCancelTimer(value + 0x78);
    KeFlushQueuedDpcs();
    return;
}

int64_t *MpFgAvlAllocateRoutine(uint64_t input, uint32_t allocation_size)
{
    return MpAllocatePoolWithTag(1, allocation_size, 0x6746504d);
}

void MpFgAvlFreeRoutine(uint64_t input, int64_t allocation)
{
    if (!allocation)
    {
        return;
    }
    ExFreePoolWithTag(allocation, 0x6746504d);
    return;
}

void MpFgCleanup(uint64_t input, uint64_t input_2)
{
    int64_t allocation;
    uint64_t allocation_2;
    int64_t string;
    int64_t value;
    if (!WdFolderguardStorage)
    {
        return;
    }
    allocation = *(int64_t *)(WdFolderguardStorage + 8);
    if (allocation)
    {
        while (value = RtlEnumerateGenericTableAvl(allocation, (uint64_t)input_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff), value)
        {
            allocation_2 = *(uint64_t *)(value + 0x10);
            RtlDeleteElementGenericTableAvl(allocation, value);
            input_2 = 0x6746504d;
            ExFreePoolWithTag(allocation_2, 0x6746504d);
        }

        input_2 = 0x7046504d;
        ExFreePoolWithTag(allocation, 0x7046504d);
    }
    allocation = *(int64_t *)(WdFolderguardStorage + 0x108);
    value = WdFolderguardStorage;
    if (allocation)
    {
        while (value = RtlEnumerateGenericTableAvl(allocation, (uint64_t)input_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff), value)
        {
            allocation_2 = *(uint64_t *)(value + 0x30);
            string = *(int64_t *)(value + 0x18);
            RtlDeleteElementGenericTableAvl(allocation, value);
            input_2 = 0x6746504d;
            ExFreePoolWithTag(allocation_2, 0x6746504d);
            if (string)
            {
                MpFreeString(string);
            }
        }

        ExFreeToPagedLookasideList((void *)(WdFolderguardStorage + 0x180), allocation);
        value = WdFolderguardStorage;
    }
    ExDeletePagedLookasideList(value + 0x180);
    ExDeleteResourceLite(WdFolderguardStorage + 0x10);
    ExFreePoolWithTag(WdFolderguardStorage, 0x6746504d);
    return;
}

void MpFgSendNotification__finally_0(void)
{
    ExReleaseFastMutex(WdFolderguardStorage + 0x110);
    return;
}

uint64_t MpFgInitialize(void)
{
    uint32_t *allocation;
    uint64_t value;
    uint64_t value_2;
    uint32_t value_3;
    value_3 = (uint32_t)((uint64_t)value_2 >> 0x20);
    value = 0;
    if (!(*(uint32_t *)(MpData + 0x360) & 8))
    {
        return 0;
    }
    allocation = (uint32_t *)MpAllocatePoolWithTag(ExDefaultNonPagedPoolType, (char *)0x240, 0x6746504d);
    WdFolderguardStorage = allocation;
    if (allocation)
    {
        *allocation = 0x240da1b;
        *(uint64_t *)(&allocation[2]) = 0;
        *(uint64_t *)(&allocation[0x42]) = 0;
        *(char *)(&allocation[0x80]) = 0;
        *(char *)(&allocation[0x3e]) = 0;
        ExInitializeResourceLite(&allocation[4]);
        allocation = WdFolderguardStorage;
        WdFolderguardStorage[0x44] = 1;
        *(uint64_t *)(&allocation[0x46]) = 0;
        allocation[0x48] = 0;
        KeInitializeEvent(&allocation[0x4a], 1);
        ExInitializePagedLookasideList(&WdFolderguardStorage[0x60], 0, 0, 0, 0x68, 0x6146504d, 0);
        KeInitializeTimerEx(&WdFolderguardStorage[0x1e], 0);
        KeInitializeDpc(&WdFolderguardStorage[0x2e], MpFgEventTimerDpc);
        allocation = WdFolderguardStorage;
        *(uint64_t *)(&WdFolderguardStorage[0x40]) = (uint64_t)WdDataStorage18 * -10000;
        allocation[0x3f] = WdDataStorage19;
    }
    else
    {
        value = WD_STATUS_INSUFFICIENT_RESOURCES;
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 10, WD_SYMBOL_ADDRESS(WPP_44777a27dd283be4fccdb831528250f3_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INSUFFICIENT_RESOURCES & 0xffffffffULL);
        }
    }
    return value;
}

#include "wdfilter.h"

void WPP_SF_qLLL(uint64_t input, uint64_t input_2, uint64_t input_3, uint64_t input_4)
{
    uint32_t values[2];
    uint64_t value;
    values[0] = 0xc0000023;
    value = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_784b94d870a532cd506518d088c34401_Traceguids), 0x16, &value, 8, &unrecovered_stack_argument_5, 4, &unrecovered_stack_argument_6, 4, values, 4, 0);
    return;
}

void WPP_SF_qiiL(uint64_t input, uint64_t input_2, uint64_t input_3, uint64_t input_4)
{
    uint32_t values[2];
    uint64_t value;
    values[0] = WD_STATUS_INVALID_PARAMETER;
    value = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_784b94d870a532cd506518d088c34401_Traceguids), 0xe, &value, 8, &unrecovered_stack_argument_5, 8, &unrecovered_stack_argument_6, 8, values, 4, 0);
    return;
}

int32_t MpQueryRuntimeDrivers(void *input, uint64_t *event_id, WD_LAYOUT_109 *provider, uint32_t input_2, uint32_t *input_3)
{
    uint64_t *data_pointer;
    uint32_t value;
    uint32_t *data_pointer_2;
    uint64_t *data_pointer_3;
    uint32_t *buffer;
    uint32_t value_2;
    uint32_t value_3;
    uint32_t left;
    uint32_t left_2;
    uint64_t value_4;
    uint32_t *data_pointer_4;
    uint64_t value_5;
    uint32_t value_6;
    uint64_t value_7;
    uint32_t value_8;
    uint32_t value_9;
    uint32_t value_10;
    uint32_t *data_pointer_5;
    uint64_t value_11;
    uint64_t value_12;
    int64_t value_13;
    uint64_t value_14;
    int32_t status;
    uint32_t *data_pointer_6;
    int32_t right;
    uint32_t result;
    value_11 = input_2;
    right = 0;
    value_8 = 0;
    data_pointer_2 = NULL;
    value = 0;
    value_3 = 0;
    result = 0;
    buffer = ((uint32_t **)input)[2];
    data_pointer_6 = ((uint32_t **)input)[3];
    data_pointer_5 = buffer;
    if (!data_pointer_6 || data_pointer_6 < buffer)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qiiL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, provider, (uint64_t)KeGetCurrentThread(), data_pointer_6, buffer);
        }
        return -0x3ffffff3;
    }
    value_6 = (uint32_t)((uint64_t)value_4 >> 0x20);
    if (WdDriverinfoStorage & 4)
    {
        if (input_2 <= 0x23)
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return -0x3ffffff3;
            }
            if (*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qDL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x10, WD_SYMBOL_ADDRESS(WPP_784b94d870a532cd506518d088c34401_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_6 & 0xffffffffULL) << 32 | (uint64_t)input_2 & 0xffffffffULL, (uint64_t)value_7 & 0xffffffff00000000 | (uint64_t)WD_STATUS_INVALID_PARAMETER & 0xffffffff);
                return -0x3ffffff3;
            }
            return -0x3ffffff3;
        }
        value_12 = value_11;
        data_pointer_3 = event_id;
        while (value_12)
        {
            data_pointer = (uint64_t *)((int64_t)data_pointer_3 + 1);
            *(char *)data_pointer_3 = 0;
            value_12 -= 1;
            data_pointer_3 = data_pointer;
        }

        ExAcquireFastMutex(WD_DRIVERINFO_UNRECOVERED_ADDRESS);
        if (WdDriverinfoStorage13 <= data_pointer_6)
        {
            WdDriverinfoStorage13 = data_pointer_6;
        }
        else
        {
            data_pointer_6 = data_pointer_2;
        }
        value_13 = WdDriverinfoStorage12;
        if (WdDriverinfoStorage12 != WD_DRIVERINFO_UNRECOVERED_ADDRESS2)
        {
            do
            {
                data_pointer_4 = *(uint32_t **)(value_13 + -0x18);
                if (!(*(uint32_t **)(value_13 + -0x18)))
                {
                    *(uint32_t **)(value_13 + -0x18) = data_pointer_6;
                    data_pointer_4 = data_pointer_6;
                }
                if (data_pointer_4 < buffer && (result = value_3, data_pointer_4))
                {
                    break;
                }
                value_3 += (uint32_t)(*(uint16_t *)(value_13 + 0x40)) + (uint32_t)(*(uint16_t *)(value_13 + 0x30)) + 0x6f + (uint32_t)(*(uint16_t *)(value_13 + 0x10)) + *(int32_t *)(value_13 + 0x6c) + *(int32_t *)(value_13 + 0x5c) & 0xfffffff8;
                value_13 = *(int64_t *)(value_13 + 8);
                result = value_3;
            }
            while (value_13 != WD_DRIVERINFO_UNRECOVERED_ADDRESS2);
            value_3 = result;
        }
        if (value_3)
        {
            value_9 = input_2 - 0x18;
            value_10 = value_9;
            if (value_3 <= value_9)
            {
                buffer = (uint32_t *)(&event_id[3]);
                value_12 = 0;
                value_13 = WdDriverinfoStorage12;
                value_2 = value_9;
                left_2 = value_9;
                left = value_3;
                while (value_3 = (uint32_t)value_12, value_13 != WD_DRIVERINFO_UNRECOVERED_ADDRESS2 && (data_pointer_5 <= *(uint32_t **)(value_13 + -0x18) || !(*(uint32_t **)(value_13 + -0x18))))
                {
                    value_6 = (uint32_t)((uint64_t)value_4 >> 0x20);
                    if ((uint32_t *)(value_11 + (int64_t)event_id) < &buffer[0x18])
                    {
                        status = -0x3fffff6b;
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            value_14 = 0x11;
                            value_5 = ((uint64_t)value_6 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INTEGER_OVERFLOW & 0xffffffffULL;
                            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_14, WD_SYMBOL_ADDRESS(WPP_784b94d870a532cd506518d088c34401_Traceguids), (uint64_t)KeGetCurrentThread(), value_5);
                        }
                        goto block_2;
                    }
                    if (value_2 < value_3 + left_2)
                    {
                        status = -0x3fffff6b;
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            WPP_SF_qdddd(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x12, WD_SYMBOL_ADDRESS(WPP_784b94d870a532cd506518d088c34401_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_6 & 0xffffffffULL) << 32 | (uint64_t)value_3 & 0xffffffffULL, (uint64_t)value_7 & 0xffffffff00000000 | (uint64_t)left_2 & 0xffffffff, value_2, WD_STATUS_INTEGER_OVERFLOW);
                        }
                        goto block_2;
                    }
                    status = MpPackLoadedDriverInfo(value_13, buffer, left_2, &right);
                    value_6 = (uint32_t)((uint64_t)value_4 >> 0x20);
                    if (status < 0)
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            value_14 = 0x13;
                            block_1:
                            value_5 = ((uint64_t)value_6 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL;

                            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_14, WD_SYMBOL_ADDRESS(WPP_784b94d870a532cd506518d088c34401_Traceguids), (uint64_t)KeGetCurrentThread(), value_5);
                        }
                        goto block_2;
                    }
                    value_8 += right;
                    value_12 = value_8;
                    data_pointer_2 = buffer;
                    status = RtlULongSub(left, right, &result);
                    value_6 = (uint32_t)((uint64_t)value_4 >> 0x20);
                    if (status < 0)
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            value_14 = 0x14;
                            goto block_1;
                        }
                        goto block_2;
                    }
                    status = RtlULongSub(left_2);
                    value_6 = (uint32_t)((uint64_t)value_4 >> 0x20);
                    if (status < 0)
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            value_14 = 0x15;
                            goto block_1;
                        }
                        goto block_2;
                    }
                    buffer = (uint32_t *)((int64_t)buffer + (uint64_t)(*buffer));
                    value_13 = *(int64_t *)(value_13 + 8);
                    value_2 = value_10;
                    left_2 = value_9;
                    left = result;
                }

                status = 0;
                if (data_pointer_2)
                {
                    *data_pointer_2 = 0;
                }
                *(uint64_t *)((int64_t)event_id + 0xc) = 0;
                value = value_3 + 0x18;
            }
            else
            {
                status = -0x3fffffdd;
                value = 0x24;
            }
            *(uint32_t *)(&event_id[1]) = value_3 + 0x10;
        }
        else
        {
            status = -0x7fffffe6;
            *(uint32_t *)(&event_id[1]) = 0x1c;
            value = 0x24;
        }
        block_2:
        ExReleaseFastMutex(WD_DRIVERINFO_UNRECOVERED_ADDRESS);

        if (input_2 < value && (status = -0x3fffffdd, WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control)) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qLLL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18));
        }
        if (value && value <= input_2)
        {
            *(uint16_t *)event_id = 0xa3;
            ((uint32_t *)event_id)[1] = value;
            memmove(provider, event_id, value);
            *input_3 = ((uint32_t *)event_id)[1];
        }
        MpLogPrintfW(L"[Mini-filter] MpQueryRuntimeDrivers called. bytesToCopy = %u, ntStatus = 0x%x", value, status);
    }
    else
    {
        status = (-(uint32_t)((*(uint32_t *)(MpData + 0x360) & 8) != 0) & 0x2a) + WD_STATUS_NOT_SUPPORTED;
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xf, WD_SYMBOL_ADDRESS(WPP_784b94d870a532cd506518d088c34401_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_6 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
        }
    }
    return status;
}

void MpImageVerificationCallback(uint64_t input, uint64_t input_2, void *input_3)
{
    uint64_t *data_pointer;
    uint64_t *allocation = NULL;
    uint64_t value;
    uint64_t *data_pointer_2;
    uint64_t value_2;
    uint16_t value_3;
    uint16_t *wide_text;
    uint64_t *data_pointer_3;
    int64_t value_4;
    int64_t *data_pointer_4;
    int64_t value_5;
    int32_t value_6;
    uint16_t *wide_text_2;
    int64_t value_7 = 0;
    value_6 = MpAllocateDriverInfoEx(input_3, &value_7);
    value_5 = value_7;
    if (value_6 <= -1)
    {
        return;
    }
    value = 0x4cb2f;
    wide_text_2 = *(uint16_t **)(value_7 + 0x38);
    wide_text = &wide_text_2[*(uint16_t *)(value_7 + 0x30) >> 1];
    for (; wide_text_2 < wide_text; wide_text_2 = &wide_text_2[1])
    {
        value_3 = RtlUpcaseUnicodeChar(*wide_text_2);
        WdStoreField(&value_3, 1, 1, (uint64_t)((uint8_t)((uint16_t)value_3 >> 8)));
        value_2 = (uint64_t)WdLoadField(&value_3, 1, 1);
        value = (value * 0x25 + (uint8_t)value_3) * 0x25 + value_2;
    }

    *(uint64_t *)(value_5 + 0x18) = value;
    ExAcquireFastMutex(WD_DRIVERINFO_UNRECOVERED_ADDRESS);
    if (WdDriverinfoStorage8)
    {
        value_2 = -1LL << ((uint8_t)WdDriverinfoStorage9 & 0x1f);
        value = value_2 & value;
        WdStoreField(&value_7, 1, 1, (uint64_t)((uint8_t)(value >> 8)));
        WdStoreField(&value_7, 2, 1, (uint64_t)((uint8_t)(value >> 0x10)));
        WdStoreField(&value_7, 3, 1, (uint64_t)((uint8_t)(value >> 0x18)));
        WdStoreField(&value_7, 4, 1, (uint64_t)((uint8_t)(value >> 0x20)));
        WdStoreField(&value_7, 5, 1, (uint64_t)((uint8_t)(value >> 0x28)));
        WdStoreField(&value_7, 6, 1, (uint64_t)((uint8_t)(value >> 0x30)));
        WdStoreField(&value_7, 7, 1, (uint64_t)((uint8_t)(value >> 0x38)));
        data_pointer_2 = (uint64_t *)(WdDriverinfoStorage10 + (uint64_t)(((((((uint32_t)WdLoadField(&value_7, 1, 1) * 0x25 + (uint32_t)WdLoadField(&value_7, 2, 1)) * 0x25 + (uint32_t)WdLoadField(&value_7, 3, 1)) * 0x25 + (uint32_t)WdLoadField(&value_7, 4, 1)) * 0x25 + (uint32_t)WdLoadField(&value_7, 5, 1)) * 0x25 + (uint32_t)WdLoadField(&value_7, 6, 1)) * 0x25 + ((uint32_t)value & 0xff) * 0x1a617d0d + WdLoadField(&value_7, 7, 1) + 0xcbb8e24f & (WdDriverinfoStorage9 >> 5) - 1) * 8);
        while (data_pointer_3 = (uint64_t *)(*data_pointer_2), !((uint64_t)data_pointer_3 & 1))
        {
            if ((data_pointer_3[1] & value_2) == value)
            {
                *data_pointer_2 = *data_pointer_3;
                WdDriverinfoStorage8 -= 1;
                *data_pointer_3 = *data_pointer_3 | 0x8000000000000002;
                if (data_pointer_3)
                {
                    allocation = &data_pointer_3[-2];
                    data_pointer_2 = &data_pointer_3[2];
                    value_2 = *data_pointer_2;
                    value_7 = value;
                    if (*(uint64_t **)(value_2 + 8) != data_pointer_2 || (data_pointer_3 = (uint64_t *)data_pointer_3[3], (uint64_t *)(*data_pointer_3) != data_pointer_2))
                    {
                        (*(WD_ROUTINE)swi(0x29))(3);
                    }
                    *data_pointer_3 = value_2;
                    *(uint64_t **)(value_2 + 8) = data_pointer_3;
                }
                break;
            }
            data_pointer_2 = data_pointer_3;
        }
    }
    value_4 = WdDriverinfoStorage10;
    value_2 = -1LL << ((uint8_t)WdDriverinfoStorage9 & 0x1f) & *(uint64_t *)(value_5 + 0x18);
    WdStoreField(&value_7, 1, 1, (uint64_t)((uint8_t)(value_2 >> 8)));
    WdStoreField(&value_7, 2, 1, (uint64_t)((uint8_t)(value_2 >> 0x10)));
    WdStoreField(&value_7, 3, 1, (uint64_t)((uint8_t)(value_2 >> 0x18)));
    WdStoreField(&value_7, 4, 1, (uint64_t)((uint8_t)(value_2 >> 0x20)));
    WdStoreField(&value_7, 5, 1, (uint64_t)((uint8_t)(value_2 >> 0x28)));
    WdStoreField(&value_7, 6, 1, (uint64_t)((uint8_t)(value_2 >> 0x30)));
    WdStoreField(&value_7, 7, 1, (uint64_t)((uint8_t)(value_2 >> 0x38)));
    value = ((((((((uint32_t)value_2 & 0xff) * 0x25 + (uint32_t)WdLoadField(&value_7, 1, 1)) * 0x25 + (uint32_t)WdLoadField(&value_7, 2, 1)) * 0x25 + WdLoadField(&value_7, 3, 1) + 0x164b2f3f) * 0x25 + (uint32_t)WdLoadField(&value_7, 4, 1)) * 0x25 + (uint32_t)WdLoadField(&value_7, 5, 1)) * 0x25 + (uint32_t)WdLoadField(&value_7, 6, 1)) * 0x25 + (uint32_t)WdLoadField(&value_7, 7, 1) & (WdDriverinfoStorage9 >> 5) - 1;
    *(uint64_t *)(value_5 + 0x10) = *(uint64_t *)(WdDriverinfoStorage10 + value * 8);
    data_pointer = (uint64_t *)(value_5 + 0x20);
    *(uint64_t **)(value_4 + value * 8) = (uint64_t *)(value_5 + 0x10);
    data_pointer_4 = WdDriverinfoStorage12;
    WdDriverinfoStorage8 += 1;
    value_7 = value_2;
    if (*WdDriverinfoStorage12 == WD_DRIVERINFO_UNRECOVERED_ADDRESS2)
    {
        *(int64_t **)(value_5 + 0x28) = WdDriverinfoStorage12;
        *data_pointer = WD_DRIVERINFO_UNRECOVERED_ADDRESS2;
        *data_pointer_4 = (int64_t)data_pointer;
        WdDriverinfoStorage12 = data_pointer;
        ExReleaseFastMutex(WD_DRIVERINFO_UNRECOVERED_ADDRESS);
        if (!allocation)
        {
            return;
        }
        MpFreeDriverInfoEx(allocation);
        return;
    }
    (*(WD_ROUTINE)swi(0x29))(3);
}

int32_t MpAllocateDriverInfoEx(void *input, uint64_t *input_2)
{
    WD_UNICODE_STRING_VALUE *record;
    uint32_t **data_pointer;
    int32_t value;
    WD_LAYOUT_108 *allocation;
    int64_t *allocation_2;
    int32_t value_2;
    allocation = (WD_LAYOUT_108 *)MpAllocatePoolWithTag(1, (char *)0xb0, 0x7264504d);
    value_2 = 0;
    if (!allocation)
    {
        return -0x3fffff66;
    }
    allocation->field_0x0 = 0xb0da18;
    record = (WD_UNICODE_STRING_VALUE *)((int64_t)input + 8);
    allocation->field_0x8 = 0;
    *(uint64_t *)allocation->field_0xa4 = 0;
    allocation->field_0xa0 = ((uint32_t *)input)[1];
    allocation->field_0x78 = ((uint32_t *)input)[0x16];
    allocation->field_0x88 = ((uint32_t *)input)[0x17];
    allocation->field_0x7c = ((uint32_t *)input)[0x18];
    allocation->field_0x8c = ((uint32_t *)input)[0x19];
    if (record->Length)
    {
        allocation_2 = MpAllocatePoolWithTag(1, record->Length, 0x6e64504d);
        allocation->field_0x38 = allocation_2;
        if (allocation_2)
        {
            allocation->field_0x32 = record->Length;
            allocation->field_0x30 = 0;
            value = RtlUnicodeStringCopy(&allocation->field_0x30, record);
            if (0 <= value)
            {
                goto block_1;
            }
        }
        else
        {
            value = -0x3fffff66;
        }
        MpFreeDriverInfoEx(allocation);
        value_2 = value;
    }
    else
    {
        block_1:
        record = (WD_UNICODE_STRING_VALUE *)((int64_t)input + 0x38);

        if (record->Length)
        {
            allocation_2 = MpAllocatePoolWithTag(1, record->Length, 0x6e64504d);
            allocation->field_0x68 = allocation_2;
            if (!allocation_2)
            {
                value = -0x3fffff66;
                MpFreeDriverInfoEx(allocation);
                value_2 = value;
                return value_2;
            }
            allocation->field_0x62 = record->Length;
            allocation->field_0x60 = 0;
            value = RtlUnicodeStringCopy(&allocation->field_0x60, record);
            if (value < 0)
            {
                MpFreeDriverInfoEx(allocation);
                value_2 = value;
                return value_2;
            }
        }
        record = (WD_UNICODE_STRING_VALUE *)((int64_t)input + 0x28);
        if (record->Length)
        {
            allocation_2 = MpAllocatePoolWithTag(1, record->Length, 0x6e64504d);
            allocation->field_0x58 = allocation_2;
            if (!allocation_2)
            {
                value = -0x3fffff66;
                MpFreeDriverInfoEx(allocation);
                value_2 = value;
                return value_2;
            }
            allocation->field_0x52 = record->Length;
            allocation->field_0x50 = 0;
            value = RtlUnicodeStringCopy(&allocation->field_0x50, record);
            if (value < 0)
            {
                MpFreeDriverInfoEx(allocation);
                value_2 = value;
                return value_2;
            }
        }
        if (((int32_t *)input)[0x19])
        {
            allocation_2 = MpAllocatePoolWithTag(1, ((int32_t *)input)[0x19], 0x7054504d);
            allocation->field_0x80 = allocation_2;
            if (!allocation_2)
            {
                value = -0x3fffff66;
                MpFreeDriverInfoEx(allocation);
                value_2 = value;
                return value_2;
            }
            memmove(allocation_2, ((uint64_t **)input)[10], ((uint32_t *)input)[0x19]);
        }
        if (((int32_t *)input)[0x18])
        {
            allocation_2 = MpAllocatePoolWithTag(1, ((int32_t *)input)[0x18], 0x6869504d);
            allocation->field_0x70 = allocation_2;
            if (!allocation_2)
            {
                value = -0x3fffff66;
                MpFreeDriverInfoEx(allocation);
                value_2 = value;
                return value_2;
            }
            memmove(allocation_2, ((uint64_t **)input)[9], ((uint32_t *)input)[0x18]);
        }
        data_pointer = &allocation->field_0x20;
        *input_2 = allocation;
        allocation->field_0x28 = (uint32_t *)data_pointer;
        *data_pointer = (uint32_t *)data_pointer;
    }
    return value_2;
}

uint64_t MpPackLoadedDriverInfo(void *input, uint32_t *buffer, uint32_t input_2, uint32_t *input_3)
{
    uint16_t value;
    uint32_t value_2;
    uint32_t value_3;
    uint32_t value_4;
    uint32_t buffer_size;
    uint32_t value_5;
    uint32_t value_6;
    buffer_size = ((int32_t *)input)[0x17] + 0x68 + (uint32_t)((uint16_t *)input)[8] + (uint32_t)((uint16_t *)input)[0x10] + (uint32_t)((uint16_t *)input)[0x20] + (uint32_t)((uint16_t *)input)[0x18] + ((int32_t *)input)[0x1b];
    if (input_2 < buffer_size)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xd, WD_SYMBOL_ADDRESS(WPP_784b94d870a532cd506518d088c34401_Traceguids), (uint64_t)KeGetCurrentThread(), WD_STATUS_INTEGER_OVERFLOW);
        }
        return WD_STATUS_INTEGER_OVERFLOW;
    }
    memset(buffer, 0, buffer_size);
    buffer[2] = ((uint32_t *)input)[0x22];
    buffer[1] = ((uint32_t *)input)[0x21];
    *(uint64_t *)(&buffer[0x12]) = ((uint64_t *)input)[0xe];
    *(uint64_t *)(&buffer[0x14]) = ((uint64_t *)input)[0xf];
    buffer[0xb] = ((uint32_t *)input)[0x16];
    buffer[0xe] = ((uint32_t *)input)[0x1a];
    buffer[0x16] = ((uint32_t *)input)[0x20];
    value = ((uint16_t *)input)[8];
    value_3 = value + 0x62;
    value_2 = ((uint16_t *)input)[0x10] + 2 + value_3;
    value_5 = ((uint16_t *)input)[0x20] + 2 + value_2;
    value_6 = ((uint16_t *)input)[0x18] + 2 + value_5;
    value_4 = ((int32_t *)input)[0x1b] + value_6;
    if (value)
    {
        memmove(&buffer[0x18], ((uint64_t **)input)[3], value);
    }
    if (((int16_t *)input)[0x10])
    {
        memmove((uint64_t *)((uint64_t)value_3 + (int64_t)buffer), ((uint64_t **)input)[5], (uint16_t)((int16_t *)input)[0x10]);
    }
    if (((int16_t *)input)[0x20])
    {
        memmove((uint64_t *)((uint64_t)value_2 + (int64_t)buffer), ((uint64_t **)input)[9], (uint16_t)((int16_t *)input)[0x20]);
    }
    if (((int16_t *)input)[0x18])
    {
        memmove((uint64_t *)((uint64_t)value_5 + (int64_t)buffer), ((uint64_t **)input)[7], (uint16_t)((int16_t *)input)[0x18]);
    }
    if (((int32_t *)input)[0x1b])
    {
        memmove((uint64_t *)((uint64_t)value_6 + (int64_t)buffer), ((uint64_t **)input)[0xc], ((int32_t *)input)[0x1b]);
    }
    if (((int32_t *)input)[0x17])
    {
        memmove((uint64_t *)((uint64_t)value_4 + (int64_t)buffer), ((uint64_t **)input)[10], ((int32_t *)input)[0x17]);
    }
    buffer[9] = (uint32_t)((uint16_t *)input)[0x20];
    buffer[7] = (uint32_t)((uint16_t *)input)[0x18];
    buffer[3] = (uint32_t)((uint16_t *)input)[8];
    buffer[5] = (uint32_t)((uint16_t *)input)[0x10];
    buffer[0xc] = ((uint32_t *)input)[0x17];
    buffer[0xf] = ((uint32_t *)input)[0x1b];
    buffer[4] = 0x60;
    buffer[6] = value_3;
    buffer[10] = value_2;
    buffer[8] = value_5;
    value_2 = 0xffffffff;
    if (((int32_t *)input)[0x1b])
    {
        value_2 = value_6;
    }
    buffer[0x10] = value_2;
    value_2 = 0xffffffff;
    if (((int32_t *)input)[0x17])
    {
        value_2 = value_4;
    }
    value_3 = buffer_size + 7 & 0xfffffff8;
    buffer[0xd] = value_2;
    if (input_2 <= value_3)
    {
        value_3 = buffer_size;
    }
    *input_3 = value_3;
    *buffer = value_3;
    return 0;
}

void MpFreeDriverInfoEx(void *allocation)
{
    if (!allocation)
    {
        return;
    }
    if (((int64_t *)allocation)[7])
    {
        ExFreePoolWithTag(((int64_t *)allocation)[7], 0x6e64504d);
    }
    if (((int64_t *)allocation)[0xd])
    {
        ExFreePoolWithTag(((int64_t *)allocation)[0xd], 0x6e64504d);
    }
    if (((int64_t *)allocation)[0xb])
    {
        ExFreePoolWithTag(((int64_t *)allocation)[0xb], 0x6e64504d);
    }
    if (((int64_t *)allocation)[0xe])
    {
        ExFreePoolWithTag(((int64_t *)allocation)[0xe], 0x6869504d);
    }
    if (((int64_t *)allocation)[0x10])
    {
        ExFreePoolWithTag(((int64_t *)allocation)[0x10], 0x7054504d);
    }
    ExFreePoolWithTag(allocation, 0x7264504d);
    return;
}

void MpCleanupDriverInfo(void)
{
    uint64_t *data_pointer;
    uint64_t value;
    uint64_t *data_pointer_2;
    uint64_t *data_pointer_3;
    uint64_t *data_pointer_4;
    uint64_t *data_pointer_5;
    data_pointer_2 = WdDriverinfoStorage10;
    data_pointer_5 = WdDriverinfoStorage10;
    while (true)
    {
        if (!data_pointer_2 || (data_pointer_2 = (uint64_t *)(*data_pointer_2), data_pointer_4 = data_pointer_2, (uint64_t)data_pointer_2 & 1))
        {
            do
            {
                data_pointer_5 = &data_pointer_5[1];
                if (&WdDriverinfoStorage10[WdDriverinfoStorage9 >> 5] <= data_pointer_5)
                {
                    goto block_1;
                }
                data_pointer_2 = (uint64_t *)(*data_pointer_5);
            }
            while ((uint64_t)data_pointer_2 & 1);
            data_pointer_4 = data_pointer_2;
        }
        if (!data_pointer_2)
        {
            block_1:
            if (WdDriverinfoStorage10)
            {
                ExFreePoolWithTag(WdDriverinfoStorage10, 0x6264504d);
                return;
            }

            return;
        }
        data_pointer_3 = data_pointer_5;
        while (data_pointer = (uint64_t *)(*data_pointer_3), data_pointer_2 = data_pointer_4, !((uint64_t)data_pointer & 1))
        {
            if (data_pointer == data_pointer_4)
            {
                *data_pointer_3 = *data_pointer_4;
                WdDriverinfoStorage8 -= 1;
                *data_pointer_4 = *data_pointer_4 | 0x8000000000000002;
                data_pointer_2 = data_pointer_3;
                break;
            }
            data_pointer_3 = data_pointer;
        }

        data_pointer_3 = &data_pointer_4[2];
        value = *data_pointer_3;
        if (*(uint64_t **)(value + 8) != data_pointer_3 || (data_pointer = (uint64_t *)data_pointer_4[3], (uint64_t *)(*data_pointer) != data_pointer_3))
        {
            (*(WD_ROUTINE)swi(0x29))(3);
        }
        *data_pointer = value;
        *(uint64_t **)(value + 8) = data_pointer;
        MpFreeDriverInfoEx(&data_pointer_4[-2]);
    }
}

void MpRemoveImageVerificationCallback(void)
{
    if (!WdDriverinfoStorage6)
    {
        return;
    }
    (*__guard_dispatch_icall_fptr)(WdDriverinfoStorage7);
    return;
}

uint64_t MpInitializeDriverInfo(void)
{
    memset(&WdDriverinfoStorage, 0, (char *)0x80);
    WdDriverinfoStorage3 = 0;
    WdDriverinfoStorage12 = WD_DRIVERINFO_UNRECOVERED_ADDRESS2;
    WdDriverinfoStorage11 = WD_DRIVERINFO_UNRECOVERED_ADDRESS2;
    WdDriverinfoStorage2 = 1;
    WdDriverinfoStorage4 = 0;
    KeInitializeEvent(WD_DRIVERINFO_UNRECOVERED_ADDRESS3, 1, 0);
    return 0;
}

void MpSetImageVerificationCallback(void)
{
    uint64_t *data_pointer;
    uint64_t *data_pointer_2;
    uint64_t value;
    uint32_t value_2;
    char byte_value;
    char byte_value_2;
    char byte_value_3;
    char byte_value_4;
    char byte_value_5;
    char byte_value_6;
    uint8_t byte_value_7;
    char byte_value_8;
    uint64_t value_3;
    int32_t value_5;
    uint64_t *allocation;
    uint32_t value_6;
    uint64_t index;
    uint64_t index_2;
    uint64_t string;
    value_2 = (uint32_t)((uint64_t)value >> 0x20);
    string = 0;
    value_3 = 0;
    if (*(uint32_t *)(MpData + 0x360) & 8)
    {
        RtlInitUnicodeString(&string, L"SeRegisterImageVerificationCallback");
        WdDriverinfoStorage5 = MmGetSystemRoutineAddress(&string);
        RtlInitUnicodeString(&string, L"SeUnregisterImageVerificationCallback");
        WdDriverinfoStorage6 = MmGetSystemRoutineAddress(&string);
        if (WdDriverinfoStorage5 && WdDriverinfoStorage6)
        {
            allocation = (uint64_t *)MpAllocatePoolWithTag(1, (char *)0x800, 0x6264504d);
            if (allocation)
            {
                value_6 = ~(-(uint32_t)(&allocation[0x100] < allocation)) & 0x100;
                index = value_6;
                if (value_6)
                {
                    data_pointer_2 = allocation;
                    while (index)
                    {
                        data_pointer = &data_pointer_2[1];
                        *data_pointer_2 = WD_DRIVERINFO_UNRECOVERED_ADDRESS4;
                        index -= 1;
                        data_pointer_2 = data_pointer;
                    }
                }
                index = 0;
                byte_value_7 = (uint8_t)WdDriverinfoStorage9;
                data_pointer_2 = WdDriverinfoStorage10;
                if (WdDriverinfoStorage9 & 0xffffffe0)
                {
                    do
                    {
                        while (data_pointer = (uint64_t *)data_pointer_2[index], !((uint64_t)data_pointer & 1))
                        {
                            data_pointer_2[index] = *data_pointer;
                            index_2 = data_pointer[1] & -1LL << (byte_value_7 & 0x1f);
                            byte_value_5 = (char)(index_2 >> 0x28);
                            byte_value_6 = (char)(index_2 >> 0x30);
                            byte_value_4 = (char)(index_2 >> 0x20);
                            byte_value_3 = (char)(index_2 >> 0x18);
                            byte_value_2 = (char)(index_2 >> 0x10);
                            byte_value = (char)(index_2 >> 8);
                            byte_value_8 = (char)(index_2 >> 0x38);
                            index_2 = (uint8_t)(byte_value_8 + 'O' + byte_value_5 * 'Y' + byte_value_6 * '%' + byte_value_4 * '\xdd' + byte_value_3 * '\xf1' + byte_value_2 * '\xd5' + byte_value * '\xc9' + (char)index_2 * '\r');
                            *data_pointer = allocation[index_2];
                            allocation[index_2] = data_pointer;
                        }

                        value_6 = (int32_t)index + 1;
                        index = value_6;
                        data_pointer_2 = WdDriverinfoStorage10;
                    }
                    while (value_6 < WdDriverinfoStorage9 >> 5);
                }
                WdDriverinfoStorage10 = allocation;
                WdDriverinfoStorage9 = WdDriverinfoStorage9 & 0x1f | 0x2000;
                value_2 = 0;
                value_5 = (*__guard_dispatch_icall_fptr)(1, 0, MpImageVerificationCallback, 0, 0, WD_DRIVERINFO_UNRECOVERED_ADDRESS5);
                if (0 <= value_5)
                {
                    WdUnresolvedAtomicBegin();
                    WdDriverinfoStorage |= 4;
                    WdUnresolvedAtomicEnd();
                }
                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xc, WD_SYMBOL_ADDRESS(WPP_784b94d870a532cd506518d088c34401_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_2 & 0xffffffffULL) << 32 | (uint64_t)value_5 & 0xffffffffULL);
                }
            }
            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xb, WD_SYMBOL_ADDRESS(WPP_784b94d870a532cd506518d088c34401_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_2 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INSUFFICIENT_RESOURCES & 0xffffffffULL);
            }
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 10, WD_SYMBOL_ADDRESS(WPP_784b94d870a532cd506518d088c34401_Traceguids), (uint64_t)KeGetCurrentThread());
        }
    }
    return;
}

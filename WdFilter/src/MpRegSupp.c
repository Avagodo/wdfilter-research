#include "wdfilter.h"

void RtlUnicodeStringCat(WD_UNICODE_STRING_VALUE *input, WD_UNICODE_STRING_VALUE *input_2)
{
    int32_t value;
    int64_t value_3 = 0;
    int64_t value_4 = 0;
    int64_t value_5 = 0;
    uint64_t value_6;
    uint64_t value_7;
    uint64_t value_8;
    uint64_t value_9 = 0;
    value = RtlUnicodeStringValidateDestWorker(input, &value_3, &value_5, &value_4, 0x7fff, 0);
    if (0 <= value)
    {
        value_7 = 0;
        value_6 = 0;
        value = RtlUnicodeStringValidateSrcWorker(input_2, &value_7, &value_6, 0x7fff, value_9 & 0xffffffff00000000);
        if (0 <= value)
        {
            value_8 = 0;
            value = RtlWideCharArrayCopyWorker(value_3 + value_4 * 2, value_5 - value_4, &value_8, value_7, value_6);
            input->Length = ((int16_t)value_4 + (int16_t)value_8) * 2;
        }
    }
    return;
}

void MpRegpQueryValueKeyByPointer(uint64_t input, uint64_t value_name, uint32_t *input_2, uint64_t *input_3)
{
    uint32_t allocation_size;
    uint64_t value;
    uint32_t value_2;
    uint64_t value_3;
    int32_t status;
    int64_t *allocation;
    uint64_t buffer_size;
    int64_t key_handle = 0;
    uint32_t result_length[2];
    uint32_t value_5;
    result_length[0] = 0;
    value_5 = 0x200;
    value_2 = 0;
    status = ObOpenObjectByPointer(input, 0x200, 0, 0x20019, 0, value_3 & 0xffffffffffffff00, &key_handle);
    if (0 <= status)
    {
        allocation = MpAllocatePoolWithTag(1, (char *)0x200, 0x5672504d);
        if (allocation)
        {
            buffer_size = ((uint64_t)value_2 & 0xffffffffULL) << 32 | (uint64_t)0x200 & 0xffffffffULL;
            status = ZwQueryValueKey(key_handle, value_name, 2, allocation, buffer_size, result_length);
            allocation_size = result_length[0];
            value_2 = (uint32_t)((uint64_t)buffer_size >> 0x20);
            if (status == -0x7ffffffb || status == -0x3fffffdd)
            {
                ExFreePoolWithTag(allocation, 0x5672504d);
                allocation = MpAllocatePoolWithTag(1, allocation_size, 0x5672504d);
                if (!allocation)
                {
                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                    {
                        goto block_3;
                    }
                    buffer_size = 0xc;
                    value = ((uint64_t)value_2 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INSUFFICIENT_RESOURCES & 0xffffffffULL;
                    goto block_2;
                }
                buffer_size = ((uint64_t)value_2 & 0xffffffffULL) << 32 | (uint64_t)allocation_size & 0xffffffffULL;
                status = ZwQueryValueKey(key_handle, value_name, 2, allocation, buffer_size, result_length);
                value_2 = (uint32_t)((uint64_t)buffer_size >> 0x20);
                value_5 = allocation_size;
            }
            if (0 <= status)
            {
                *input_2 = value_5;
                *input_3 = allocation;
                allocation = NULL;
                goto block_3;
            }
            if (status == -0x3fffffcc || WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                goto block_3;
            }
            buffer_size = 0xd;
            goto block_1;
        }
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            goto block_3;
        }
        buffer_size = 0xb;
        value = ((uint64_t)value_2 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INSUFFICIENT_RESOURCES & 0xffffffffULL;
    }
    else
    {
        allocation = NULL;
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || (allocation = NULL, !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)))
        {
            goto block_3;
        }
        buffer_size = 10;
        allocation = NULL;
        block_1:
        value = ((uint64_t)value_2 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL;
    }
    block_2:
    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), buffer_size, WD_SYMBOL_ADDRESS(WPP_0bb7950fbf1c3ce6de4fbf0752af6f2f_Traceguids), (uint64_t)KeGetCurrentThread(), value);

    block_3:
    if (key_handle)
    {
        ZwClose();
        key_handle = 0;
    }

    if (allocation)
    {
        ExFreePoolWithTag(allocation, 0x5672504d);
    }
    return;
}

uint16_t *MpRegpCopyUnicodeString(void *source_string, uint64_t *input)
{
    uint16_t value;
    uint64_t value_2;
    uint16_t *wide_text = NULL;
    uint32_t allocation_size;
    uint32_t value_3;
    uint16_t *wide_text_2;
    uint16_t *allocation = NULL;
    if (!input)
    {
        wide_text_2 = (uint16_t *)WD_STATUS_INVALID_PARAMETER;
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x11, WD_SYMBOL_ADDRESS(WPP_0bb7950fbf1c3ce6de4fbf0752af6f2f_Traceguids), (uint64_t)KeGetCurrentThread());
        }
        goto block_2;
    }
    if (source_string)
    {
        allocation_size = ((uint16_t *)source_string)[1] + 0x10;
    }
    else
    {
        allocation_size = 0x12;
    }
    allocation = (uint16_t *)MpAllocatePoolWithTag(1, allocation_size, 0x5364504d);
    if (!allocation)
    {
        wide_text_2 = (uint16_t *)WD_STATUS_INSUFFICIENT_RESOURCES;
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x13, WD_SYMBOL_ADDRESS(WPP_0bb7950fbf1c3ce6de4fbf0752af6f2f_Traceguids), (uint64_t)KeGetCurrentThread(), WD_STATUS_INSUFFICIENT_RESOURCES);
        }
        goto block_2;
    }
    if (0x10 <= allocation_size)
    {
        allocation_size -= 0x10;
        wide_text_2 = wide_text;
    }
    else
    {
        allocation_size = 0xffffffff;
        wide_text_2 = (uint16_t *)WD_STATUS_INTEGER_OVERFLOW;
    }
    if (0 <= (int32_t)wide_text_2)
    {
        value = 0xffff;
        if (allocation_size <= 0xffff)
        {
            value = (uint16_t)allocation_size;
        }
        value_3 = -(uint32_t)(0xffff < allocation_size) & WD_STATUS_INTEGER_OVERFLOW;
        wide_text_2 = (uint16_t *)((uint64_t)value_3);
        allocation[1] = value;
        if (allocation_size <= 0xffff)
        {
            *(uint16_t **)(&allocation[4]) = &allocation[8];
            if (source_string)
            {
                RtlCopyUnicodeString(allocation, source_string);
                if ((int32_t)value_3 < 0)
                {
                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                    {
                        goto block_2;
                    }
                    value_2 = 0x16;
                    goto block_1;
                }
            }
            else
            {
                *allocation = 2;
                allocation[8] = 0;
            }
            *input = allocation;
            wide_text_2 = wide_text;
            allocation = wide_text;
            goto block_2;
        }
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            goto block_2;
        }
        value_2 = 0x15;
    }
    else
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            goto block_2;
        }
        value_2 = 0x14;
    }
    block_1:
    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_0bb7950fbf1c3ce6de4fbf0752af6f2f_Traceguids), (uint64_t)KeGetCurrentThread(), (int32_t)wide_text_2);

    block_2:
    if (allocation)
    {
        ExFreePoolWithTag(allocation, 0x5364504d);
    }

    return wide_text_2;
}

void MpRegpGetKeyName(int64_t input, uint64_t *input_2)
{
    int32_t value;
    uint32_t *data_pointer;
    uint32_t *allocation;
    uint64_t value_2;
    uint32_t values[2];
    values[0] = 0;
    if (!input || !input_2)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x17, WD_SYMBOL_ADDRESS(WPP_0bb7950fbf1c3ce6de4fbf0752af6f2f_Traceguids), (uint64_t)KeGetCurrentThread());
        }
        return;
    }
    if (*(int64_t *)(MpRegData + 0x20))
    {
        (*__guard_dispatch_icall_fptr)(MpRegData + 0x30, input, 0, input_2, 0);
        return;
    }
    data_pointer = (uint32_t *)ExAllocateFromPagedLookasideList((void *)(MpRegData + 0x400));
    if (!data_pointer)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x18, WD_SYMBOL_ADDRESS(WPP_0bb7950fbf1c3ce6de4fbf0752af6f2f_Traceguids), (uint64_t)KeGetCurrentThread(), WD_STATUS_INSUFFICIENT_RESOURCES);
        }
        return;
    }
    allocation = &data_pointer[8];
    *(uint64_t *)(&data_pointer[4]) = 0;
    data_pointer[6] = 0x20e;
    *(uint64_t *)(&data_pointer[2]) = 0;
    *data_pointer = 0;
    value = ObQueryNameString(input, allocation, 0x20e, values);
    if (value != -0x3ffffffc)
    {
        block_1:
        if (0 <= value)
        {
            *(uint64_t *)(&data_pointer[2]) = *(uint64_t *)(&allocation[2]);
            *(uint16_t *)data_pointer = *(uint16_t *)allocation;
            ((uint16_t *)data_pointer)[1] = ((uint16_t *)allocation)[1];
            *input_2 = data_pointer;
            return;
        }

        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            value_2 = 0x1a;
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_0bb7950fbf1c3ce6de4fbf0752af6f2f_Traceguids), (uint64_t)KeGetCurrentThread(), value);
        }
    }
    else
    {
        allocation = (uint32_t *)MpAllocatePoolWithTag(1, values[0], 0x4b72504d);
        *(uint32_t **)(&data_pointer[4]) = allocation;
        if (allocation)
        {
            data_pointer[6] = values[0];
            value = ObQueryNameString(input, allocation, values[0], values);
            goto block_1;
        }
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            value_2 = 0x19;
            value = -0x3fffff66;
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_0bb7950fbf1c3ce6de4fbf0752af6f2f_Traceguids), (uint64_t)KeGetCurrentThread(), value);
        }
    }
    if (*(int64_t *)(MpRegData + 0x28))
    {
        (*__guard_dispatch_icall_fptr)(data_pointer);
    }
    else
    {
        if (*(int64_t *)(&data_pointer[4]))
        {
            ExFreePoolWithTag(*(int64_t *)(&data_pointer[4]), 0x4b72504d);
        }
        ExFreeToPagedLookasideList((void *)(MpRegData + 0x400), data_pointer);
    }
    return;
}

void MpRegpFreeUnicodeString(int64_t allocation)
{
    if (!allocation)
    {
        return;
    }
    ExFreePoolWithTag(allocation, 0x5364504d);
    return;
}

void MpRegpFreeKeyName(WD_LAYOUT_4 *input)
{
    if (!input)
    {
        return;
    }
    if (*(int64_t *)(MpRegData + 0x28))
    {
        (*__guard_dispatch_icall_fptr)();
        return;
    }
    if (input->field_0x10)
    {
        ExFreePoolWithTag(input->field_0x10, 0x4b72504d);
    }
    ExFreeToPagedLookasideList((void *)(MpRegData + 0x400), input);
    return;
}

void MpRegpFreeDestinationKeyName(int64_t allocation)
{
    if (!allocation)
    {
        return;
    }
    ExFreePoolWithTag(allocation, 0x4b72504d);
    return;
}

void MpRegpGetKeyDestinationName(WD_LAYOUT_82 *input, WD_UNICODE_STRING_VALUE *input_2, uint64_t *input_3)
{
    uint16_t value;
    uint64_t value_2 = 0;
    WD_UNICODE_STRING_VALUE *allocation;
    uint16_t value_4;
    uint64_t value_5 = 0;
    int16_t value_6;
    int16_t value_7;
    uint32_t value_8 = 0;
    uint64_t value_9;
    if (input && input_2 && input_3 && 0 <= (int32_t)FltParseFileName(0, 0, 0, &value_5))
    {
        if ((uint16_t)value_5 <= input->field_0x0 && (value = input->field_0x0 - (uint16_t)value_5, value_4 = value + input_2->Length, value <= value_4) && (allocation = (WD_UNICODE_STRING_VALUE *)MpAllocatePoolWithTag(1, (char *)(value_4 + 0x10ULL), 0x4b72504d), allocation))
        {
            allocation->Length = 0;
            allocation->MaximumLength = value_4;
            allocation->Buffer = (int64_t)(&allocation[1]);
            value_6 = input->field_0x0 - (int16_t)value_5;
            value_9 = input->field_0x8;
            value_7 = value_6;
            if (0 <= (int32_t)RtlUnicodeStringCopy(allocation, &value_6) && 0 <= (int32_t)RtlUnicodeStringCat(allocation, input_2))
            {
                *input_3 = allocation;
            }
            else
            {
                ExFreePoolWithTag(allocation, 0x4b72504d);
            }
        }
    }
    return;
}

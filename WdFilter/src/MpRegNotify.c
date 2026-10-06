#include "wdfilter.h"

uint64_t RtlStringCbCopyNW(int16_t *input, uint64_t input_2, int64_t input_3, uint64_t input_4)
{
    uint64_t value;
    value = RtlStringValidateDestW(input, input_2 >> 1, 0x7fffffff);
    if (0 <= (int32_t)value)
    {
        if (0x7fffffff <= input_4 >> 1)
        {
            *input = 0;
            value = WD_STATUS_INVALID_PARAMETER;
            return value;
        }
        value = RtlStringCopyWorkerW(input, input_2 >> 1, NULL, input_3, input_4 >> 1);
    }
    return value;
}

int32_t RtlULongLongSub(uint64_t left, uint64_t right, uint64_t *result)
{
    if (left < right)
    {
        *result = UINT64_MAX;
        return (int32_t)WD_STATUS_INTEGER_OVERFLOW;
    }
    *result = left - right;
    return 0;
}

int32_t MpRegpSendNotification(void *input, WD_LAYOUT_67 *input_2)
{
    uint32_t value;
    bool enabled;
    void *process_context;
    uint32_t values[2];
    uint32_t value_2;
    uint64_t value_3;
    uint64_t value_4;
    int64_t value_5;
    void *process_context_2;
    uint32_t value_6;
    int32_t *data_pointer;
    uint64_t value_7;
    void *data_pointer_2;
    uint32_t *data_pointer_3;
    uint64_t value_8;
    uint32_t value_9;
    uint32_t value_10;
    uint32_t value_11;
    uint64_t value_12;
    uint32_t value_13;
    void *data_pointer_4;
    char byte_value;
    int32_t status;
    uint64_t creation_time;
    int64_t value_14;
    uint8_t byte_value_2;
    value_9 = (uint32_t)((uint64_t)value_7 >> 0x20);
    value_5 = 0;
    process_context_2 = NULL;
    value_10 = 0;
    value_2 = 0;
    process_context = NULL;
    if (!input_2)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x26, WD_SYMBOL_ADDRESS(WPP_4435874bcd033210a8e834cab0696823_Traceguids), (uint64_t)KeGetCurrentThread());
        }
        return -0x3ffffff3;
    }
    data_pointer = input_2->field_0x60;
    if (data_pointer && *(int64_t *)(&data_pointer[2]) && *data_pointer)
    {
        value = *(uint32_t *)(MpData + 0x364);
        if (input)
        {
            process_context_2 = input;
        }
        else
        {
            MpGetProcessContextByObject(IoGetCurrentProcess(), &process_context);
            process_context_2 = process_context;
        }
        if (!process_context_2)
        {
            return 0;
        }
        value_4 = ((uint32_t *)process_context_2)[0xe];
        byte_value = MpShouldSendBmMessage(process_context_2);
        enabled = 0;
        if (!(value_4 & 0x10))
        {
            enabled = (bool)(-(byte_value != '\0') & (uint8_t)(value >> 2) & 1);
        }
        if (((uint8_t *)process_context_2)[0x3c] & 0x20)
        {
            enabled = 1;
        }
        byte_value_2 = ((uint8_t *)(&input_2->field_0x58))[4] & 2;
        if (byte_value_2)
        {
            enabled = 1;
        }
        value_6 = (uint32_t)value_4 & 0x200000;
        if (!(value_4 & 0x200000) && !enabled)
        {
            status = 0;
            goto block_3;
        }
        if (byte_value_2)
        {
            value_14 = ((int64_t *)process_context_2)[0x10];
        }
        else
        {
            value_14 = 0;
        }
        input_2->field_0x70 = value_14;
        process_context = (void *)((uint64_t)process_context & 0xffffffff00000000);
        values[0] = 0;
        status = MpRegpCalculateNotificationSize(input_2, &process_context, values);
        data_pointer_4 = process_context;
        if (0 <= status)
        {
            value_13 = WdLoadField(&process_context, 0, 4);
            status = MpAsyncCreateNotification(&value_2, (uint64_t)process_context & 0xffffffff);
            if (0 <= status)
            {
                value_5 = ((uint64_t)value_10 & 0xffffffffULL) << 32 | (uint64_t)value_2 & 0xffffffffULL;
                *(uint32_t *)(value_5 + 0x10) = 1;
                *(uint32_t *)(value_5 + 8) = value_13;
                *(uint32_t *)(value_5 + 0x40) = PsGetCurrentProcessId();
                creation_time = PsGetProcessCreateTimeQuadPart(IoGetCurrentProcess());
                *(uint64_t *)(value_5 + 0x44) = MpFileTimeFromUlong64(creation_time);
                *(uint32_t *)(value_5 + 0x4c) = PsGetCurrentThreadId();
                *(int64_t *)(value_5 + 0x58) = input_2->field_0x58;
                *(uint32_t *)(value_5 + 0x70) = input_2->field_0x30;
                *(uint32_t *)(value_5 + 0x60) = input_2->field_0x40;
                *(uint32_t *)(value_5 + 0x80) = input_2->field_0x48;
                *(uint32_t *)(value_5 + 0x84) = input_2->field_0x68;
                *(char *)(value_5 + 0xa8) = input_2->field_0x6c;
                status = MpQuerySessionId();
                if (status < 0)
                {
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        creation_time = ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL;
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2a, WD_SYMBOL_ADDRESS(WPP_4435874bcd033210a8e834cab0696823_Traceguids), (uint64_t)KeGetCurrentThread(), creation_time);
                        value_9 = (uint32_t)((uint64_t)creation_time >> 0x20);
                    }
                    *(uint32_t *)(value_5 + 0x50) = 0;
                }
                *(uint64_t *)(value_5 + 0x88) = 0;
                *(uint64_t *)(value_5 + 0x90) = 0;
                if (input_2->field_0x0 && (value_14 = CmGetBoundTransaction(MpRegData + 0x30), value_14) && (status = MpQueryTransactionId(value_14, (uint64_t *)(value_5 + 0x88)), status <= -1) && (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    creation_time = ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL;
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2b, WD_SYMBOL_ADDRESS(WPP_4435874bcd033210a8e834cab0696823_Traceguids), (uint64_t)KeGetCurrentThread(), creation_time);
                    value_9 = (uint32_t)((uint64_t)creation_time >> 0x20);
                }
                status = MpRegpCopyVariableNotificationData(input_2, value_5, (uint64_t)data_pointer_4 & 0xffffffff, values[0]);
                if (0 <= status)
                {
                    if (value_6)
                    {
                        value_2 = *(uint32_t *)(value_5 + 0x40);
                        value_11 = (uint32_t)((uint64_t)(*(uint64_t *)(value_5 + 0x44)) >> 0x20);
                        value_10 = (uint32_t)(*(uint64_t *)(value_5 + 0x44));
                        value_3 = 0;
                        value_12 = 0;
                        MpGetPriorityInfo(0, 0, &value_3);
                        data_pointer_3 = &((uint32_t *)process_context_2)[0xe];
                        status = MpSendSyncMonitorNotification(2, &value_2, value_5, &value_3, data_pointer_3);
                        if (status <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2d, WD_SYMBOL_ADDRESS(WPP_4435874bcd033210a8e834cab0696823_Traceguids), (uint64_t)KeGetCurrentThread(), (uint64_t)((uint64_t)data_pointer_3) & 0xffffffff00000000 | (uint64_t)status & 0xffffffff);
                        }
                    }
                    if (enabled)
                    {
                        data_pointer_2 = process_context_2;
                        status = MpAsyncSendNotification(value_5, (uint64_t)data_pointer_4 & 0xffffffff, 0, 1, process_context_2);
                        value_9 = (uint32_t)((uint64_t)data_pointer_2 >> 0x20);
                        if (status < 0)
                        {
                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                            {
                                creation_time = 0x2e;
                                goto block_1;
                            }
                            goto block_2;
                        }
                    }
                    status = 0;
                }
                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    creation_time = 0x2c;
                    block_1:
                    value_8 = ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL;

                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), creation_time, WD_SYMBOL_ADDRESS(WPP_4435874bcd033210a8e834cab0696823_Traceguids), (uint64_t)KeGetCurrentThread(), value_8);
                }
            }
            else
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x29, WD_SYMBOL_ADDRESS(WPP_4435874bcd033210a8e834cab0696823_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
                }
                value_5 = ((uint64_t)value_10 & 0xffffffffULL) << 32 | (uint64_t)value_2 & 0xffffffffULL;
            }
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            creation_time = 0x28;
            value_8 = ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL;
            value_5 = 0;
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), creation_time, WD_SYMBOL_ADDRESS(WPP_4435874bcd033210a8e834cab0696823_Traceguids), (uint64_t)KeGetCurrentThread(), value_8);
        }
    }
    else
    {
        status = -0x3ffffff3;
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
        {
            return -0x3ffffff3;
        }
        if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return -0x3ffffff3;
        }
        WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x27, WD_SYMBOL_ADDRESS(WPP_4435874bcd033210a8e834cab0696823_Traceguids), (uint64_t)KeGetCurrentThread());
    }
    block_2:
    if (value_5)
    {
        MpAsyncDereferenceNotification(value_5);
    }

    block_3:
    if (process_context_2 && !input)
    {
        MpReleaseProcessContext(process_context_2);
    }

    return status;
}

uint32_t MpRegpCalculateNotificationSize(void *input, uint32_t *input_2, int32_t *input_3)
{
    uint16_t *wide_text;
    int32_t value;
    uint32_t value_2;
    uint32_t value_3;
    uint64_t value_4;
    uint64_t value_5;
    uint32_t value_6;
    if (!input || !input_2 || !input_3)
    {
        return WD_STATUS_INVALID_PARAMETER;
    }
    wide_text = ((uint16_t **)input)[1];
    *input_3 = 0;
    value_3 = *wide_text + 0xc2;
    value_2 = 0xffffffff;
    if (value_3 >= 0xc0)
    {
        value_2 = value_3;
    }
    value_6 = -(uint32_t)(value_3 < 0xc0) & WD_STATUS_INTEGER_OVERFLOW;
    *input_2 = value_2;
    if (value_3 <= 0xbf)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 10, WD_SYMBOL_ADDRESS(WPP_4435874bcd033210a8e834cab0696823_Traceguids), (uint64_t)KeGetCurrentThread(), value_6);
        }
        return value_6;
    }
    value_3 = value_2;
    if (((uint16_t **)input)[2])
    {
        value_3 = *((uint16_t **)input)[2] + 2 + value_2;
        if (value_3 < value_2)
        {
            *input_2 = 0xffffffff;
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            value_5 = 0xb;
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_5, WD_SYMBOL_ADDRESS(WPP_4435874bcd033210a8e834cab0696823_Traceguids), (uint64_t)KeGetCurrentThread(), WD_STATUS_INTEGER_OVERFLOW);
            return WD_STATUS_INTEGER_OVERFLOW;
        }
        *input_2 = value_3;
    }
    value_2 = value_3;
    if (((int64_t *)input)[10])
    {
        value_2 = 0x10000;
        if (((uint32_t *)input)[0x11] <= 0xffff)
        {
            value_2 = ((uint32_t *)input)[0x11];
        }
        value_2 = value_3 + value_2;
        if (value_2 < value_3)
        {
            *input_2 = 0xffffffff;
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            value_5 = 0xc;
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_5, WD_SYMBOL_ADDRESS(WPP_4435874bcd033210a8e834cab0696823_Traceguids), (uint64_t)KeGetCurrentThread(), WD_STATUS_INTEGER_OVERFLOW);
            return WD_STATUS_INTEGER_OVERFLOW;
        }
        *input_2 = value_2;
    }
    value_3 = value_2;
    if (((int64_t *)input)[7])
    {
        value_3 = 0x10000;
        if (((uint32_t *)input)[0xd] <= 0xffff)
        {
            value_3 = ((uint32_t *)input)[0xd];
        }
        value_3 = value_2 + value_3;
        if (value_3 < value_2)
        {
            *input_2 = 0xffffffff;
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            value_5 = 0xd;
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_5, WD_SYMBOL_ADDRESS(WPP_4435874bcd033210a8e834cab0696823_Traceguids), (uint64_t)KeGetCurrentThread(), WD_STATUS_INTEGER_OVERFLOW);
            return WD_STATUS_INTEGER_OVERFLOW;
        }
        *input_2 = value_3;
    }
    value_2 = value_3;
    if (((uint16_t **)input)[3])
    {
        value_2 = *((uint16_t **)input)[3] + 2 + value_3;
        if (value_2 < value_3)
        {
            *input_2 = 0xffffffff;
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            value_5 = 0xe;
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_5, WD_SYMBOL_ADDRESS(WPP_4435874bcd033210a8e834cab0696823_Traceguids), (uint64_t)KeGetCurrentThread(), WD_STATUS_INTEGER_OVERFLOW);
            return WD_STATUS_INTEGER_OVERFLOW;
        }
        *input_2 = value_2;
    }
    value_3 = value_2;
    if (((uint16_t **)input)[4])
    {
        value_3 = *((uint16_t **)input)[4] + 2 + value_2;
        if (value_3 < value_2)
        {
            *input_2 = 0xffffffff;
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            value_5 = 0xf;
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_5, WD_SYMBOL_ADDRESS(WPP_4435874bcd033210a8e834cab0696823_Traceguids), (uint64_t)KeGetCurrentThread(), WD_STATUS_INTEGER_OVERFLOW);
            return WD_STATUS_INTEGER_OVERFLOW;
        }
        *input_2 = value_3;
    }
    value_2 = value_3;
    if (((uint16_t **)input)[5])
    {
        value_2 = *((uint16_t **)input)[5] + 2 + value_3;
        if (value_2 < value_3)
        {
            *input_2 = 0xffffffff;
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            value_5 = 0x10;
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_5, WD_SYMBOL_ADDRESS(WPP_4435874bcd033210a8e834cab0696823_Traceguids), (uint64_t)KeGetCurrentThread(), WD_STATUS_INTEGER_OVERFLOW);
            return WD_STATUS_INTEGER_OVERFLOW;
        }
        *input_2 = value_2;
    }
    value_3 = value_2;
    if (((uint16_t **)input)[0xe])
    {
        value_3 = *((uint16_t **)input)[0xe] + 2 + value_2;
        if (value_3 < value_2)
        {
            *input_2 = 0xffffffff;
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return WD_STATUS_INTEGER_OVERFLOW;
            }
            value_5 = 0x11;
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_5, WD_SYMBOL_ADDRESS(WPP_4435874bcd033210a8e834cab0696823_Traceguids), (uint64_t)KeGetCurrentThread(), WD_STATUS_INTEGER_OVERFLOW);
            return WD_STATUS_INTEGER_OVERFLOW;
        }
        *input_2 = value_3;
    }
    value_4 = (uint64_t)(*((uint32_t **)input)[0xc]) << 4;
    if (0x100000000 <= value_4)
    {
        *input_3 = -1;
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
        {
            return WD_STATUS_INTEGER_OVERFLOW;
        }
        if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return WD_STATUS_INTEGER_OVERFLOW;
        }
        value_5 = 0x12;
    }
    else
    {
        value = (int32_t)value_4;
        value_2 = value + value_3;
        *input_3 = value;
        if (value_3 <= value_2)
        {
            *input_2 = value_2;
            return 0;
        }
        *input_2 = 0xffffffff;
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
        {
            return WD_STATUS_INTEGER_OVERFLOW;
        }
        if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return WD_STATUS_INTEGER_OVERFLOW;
        }
        value_5 = 0x13;
    }
    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_5, WD_SYMBOL_ADDRESS(WPP_4435874bcd033210a8e834cab0696823_Traceguids), (uint64_t)KeGetCurrentThread(), WD_STATUS_INTEGER_OVERFLOW);
    return WD_STATUS_INTEGER_OVERFLOW;
}

uint64_t MpRegpCopyVariableNotificationData(void *input, int16_t *input_2, uint32_t input_3, uint32_t input_4)
{
    uint16_t *wide_text;
    int64_t source_text;
    uint64_t left;
    uint64_t value;
    uint64_t value_2;
    uint64_t *data_pointer;
    uint64_t *result;
    uint32_t value_3;
    uint32_t value_4;
    uint64_t value_5;
    uint64_t value_6;
    uint64_t value_7;
    uint64_t right;
    uint64_t destination_size;
    uint64_t value_8;
    uint64_t right_2;
    value_3 = (uint32_t)((uint64_t)value >> 0x20);
    if (!input || !input_2)
    {
        return WD_STATUS_INVALID_PARAMETER;
    }
    input_2[0xc] = 0;
    input_2[0xd] = 0;
    input_2[0xe] = 0;
    input_2[0xf] = 0;
    input_2[0x10] = 0;
    input_2[0x11] = 0;
    input_2[0x12] = 0;
    input_2[0x13] = 0;
    input_2[0x14] = 0;
    input_2[0x15] = 0;
    input_2[0x16] = 0;
    input_2[0x17] = 0;
    input_2[0x18] = 0;
    input_2[0x19] = 0;
    input_2[0x1a] = 0;
    input_2[0x1b] = 0;
    input_2[0x1c] = 0;
    input_2[0x1d] = 0;
    input_2[0x1e] = 0;
    input_2[0x1f] = 0;
    input_2[0x32] = 0;
    input_2[0x33] = 0;
    input_2[0x34] = 0;
    input_2[0x35] = 0;
    input_2[0x36] = 0;
    input_2[0x37] = 0;
    input_2[0x3a] = 0;
    input_2[0x3b] = 0;
    input_2[0x3c] = 0;
    input_2[0x3d] = 0;
    input_2[0x3e] = 0;
    input_2[0x3f] = 0;
    input_2[0x4c] = 0;
    input_2[0x4d] = 0;
    input_2[0x50] = 0;
    input_2[0x51] = 0;
    input_2[0x52] = 0;
    input_2[0x53] = 0;
    input_2[0x58] = 0;
    input_2[0x59] = 0;
    input_2[0x5a] = 0;
    input_2[0x5b] = 0;
    if (input_3 < 0xc0)
    {
        right_2 = WD_STATUS_INTEGER_OVERFLOW;
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
        {
            return WD_STATUS_INTEGER_OVERFLOW;
        }
        if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return WD_STATUS_INTEGER_OVERFLOW;
        }
        value_6 = 0x14;
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_6, WD_SYMBOL_ADDRESS(WPP_4435874bcd033210a8e834cab0696823_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)((int32_t)right_2) & 0xffffffffULL);
        return right_2;
    }
    left = input_3 - 0xc0ULL;
    *(uint32_t *)(&input_2[0x4c]) = *((uint32_t **)input)[0xc];
    destination_size = left;
    memmove(&input_2[0x60], *(uint64_t **)(((int64_t *)input)[0xc] + 8), input_4);
    value_7 = input_4 + 0xc0ULL;
    input_2[0x50] = 0xc0;
    input_2[0x51] = 0;
    input_2[0x52] = 0;
    input_2[0x53] = 0;
    wide_text = ((uint16_t **)input)[1];
    value_8 = value_7;
    if (wide_text)
    {
        if (input_2 <= (int16_t *)(value_7 + (int64_t)input_2))
        {
            source_text = WD_EXCLUDEPROCESS_UNRECOVERED_ADDRESS;
            if (*(int64_t *)(&wide_text[4]))
            {
                source_text = *(int64_t *)(&wide_text[4]);
            }
            value_5 = RtlStringCbCopyNW((int16_t *)(value_7 + (int64_t)input_2), left, source_text, *wide_text);
            right_2 = value_5 & 0xffffffff;
            if (0 <= (int32_t)value_5)
            {
                right = *wide_text + 2ULL;
                *(uint64_t *)(&input_2[0xc]) = value_7;
                value_5 = value_7;
                if (((int64_t *)input)[2])
                {
                    value_5 = value_7 + right;
                    if (value_7 <= value_5)
                    {
                        value_8 = value_5;
                        if (right <= left)
                        {
                            left -= right;
                            *(uint64_t *)(&input_2[0x10]) = value_5;
                            wide_text = ((uint16_t **)input)[2];
                            destination_size = left;
                            if (wide_text)
                            {
                                if (input_2 <= (int16_t *)(value_5 + (int64_t)input_2))
                                {
                                    source_text = WD_EXCLUDEPROCESS_UNRECOVERED_ADDRESS;
                                    if (*(int64_t *)(&wide_text[4]))
                                    {
                                        source_text = *(int64_t *)(&wide_text[4]);
                                    }
                                    value_7 = RtlStringCbCopyNW((int16_t *)(value_5 + (int64_t)input_2), left, source_text, *wide_text);
                                    right_2 = value_7 & 0xffffffff;
                                    if (0 <= (int32_t)value_7)
                                    {
                                        right = *wide_text + 2ULL;
                                        goto block_3;
                                    }
                                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                    {
                                        value_6 = 0x31;
                                        value_2 = ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)((int32_t)value_7) & 0xffffffffULL;
                                        goto block_1;
                                    }
                                }
                                else
                                {
                                    right_2 = WD_STATUS_INTEGER_OVERFLOW;
                                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                    {
                                        value_6 = 0x30;
                                        value_2 = ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INTEGER_OVERFLOW & 0xffffffffULL;
                                        block_1:
                                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_6, WD_SYMBOL_ADDRESS(WPP_4435874bcd033210a8e834cab0696823_Traceguids), (uint64_t)KeGetCurrentThread(), value_2);

                                        value_3 = (uint32_t)((uint64_t)value_2 >> 0x20);
                                    }
                                }
                            }
                            else
                            {
                                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                {
                                    WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2f, WD_SYMBOL_ADDRESS(WPP_4435874bcd033210a8e834cab0696823_Traceguids), (uint64_t)KeGetCurrentThread());
                                }
                                right_2 = WD_STATUS_INVALID_PARAMETER;
                            }
                            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                            {
                                return right_2;
                            }
                            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                            {
                                return right_2;
                            }
                            value_6 = 0x17;
                            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_6, WD_SYMBOL_ADDRESS(WPP_4435874bcd033210a8e834cab0696823_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)((int32_t)right_2) & 0xffffffffULL);
                            return right_2;
                        }
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            value_6 = 0x35;
                            goto block_2;
                        }
                    }
                    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        value_6 = 0x34;
                        block_2:
                        value_2 = ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INTEGER_OVERFLOW & 0xffffffffULL;

                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_6, WD_SYMBOL_ADDRESS(WPP_4435874bcd033210a8e834cab0696823_Traceguids), (uint64_t)KeGetCurrentThread(), value_2);
                        value_3 = (uint32_t)((uint64_t)value_2 >> 0x20);
                    }
                    right_2 = WD_STATUS_INTEGER_OVERFLOW;
                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                    {
                        return WD_STATUS_INTEGER_OVERFLOW;
                    }
                    if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                    {
                        return WD_STATUS_INTEGER_OVERFLOW;
                    }
                    value_6 = 0x16;
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_6, WD_SYMBOL_ADDRESS(WPP_4435874bcd033210a8e834cab0696823_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)((int32_t)right_2) & 0xffffffffULL);
                    return right_2;
                }
                block_3:
                right_2 = right;

                if (((int64_t *)input)[3])
                {
                    result = &destination_size;
                    value_4 = MpRegpCalculateNextOffset(value_5, left, right, &value_8, result);
                    left = destination_size;
                    value_5 = value_8;
                    value_3 = (uint32_t)((uint64_t)result >> 0x20);
                    right_2 = value_4;
                    if ((int32_t)value_4 <= -1)
                    {
                        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                        {
                            return right_2;
                        }
                        if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                        {
                            return right_2;
                        }
                        value_6 = 0x18;
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_6, WD_SYMBOL_ADDRESS(WPP_4435874bcd033210a8e834cab0696823_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)((int32_t)right_2) & 0xffffffffULL);
                        return right_2;
                    }
                    result = &right;
                    *(uint64_t *)(&input_2[0x14]) = value_8;
                    value_7 = MpRegpCopyStringToNotification(input_2, value_8, destination_size, ((WD_LAYOUT_65 **)input)[3], result);
                    value_3 = (uint32_t)((uint64_t)result >> 0x20);
                    right_2 = value_7 & 0xffffffff;
                    if ((int32_t)value_7 <= -1)
                    {
                        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                        {
                            return right_2;
                        }
                        if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                        {
                            return right_2;
                        }
                        value_6 = 0x19;
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_6, WD_SYMBOL_ADDRESS(WPP_4435874bcd033210a8e834cab0696823_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)((int32_t)right_2) & 0xffffffffULL);
                        return right_2;
                    }
                    right_2 = right;
                }
                if (((int64_t *)input)[4])
                {
                    result = &destination_size;
                    value_4 = MpRegpCalculateNextOffset(value_5, left, right_2, &value_8, result);
                    left = destination_size;
                    value_5 = value_8;
                    value_3 = (uint32_t)((uint64_t)result >> 0x20);
                    right_2 = value_4;
                    if ((int32_t)value_4 <= -1)
                    {
                        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                        {
                            return right_2;
                        }
                        if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                        {
                            return right_2;
                        }
                        value_6 = 0x1a;
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_6, WD_SYMBOL_ADDRESS(WPP_4435874bcd033210a8e834cab0696823_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)((int32_t)right_2) & 0xffffffffULL);
                        return right_2;
                    }
                    result = &right;
                    *(uint64_t *)(&input_2[0x18]) = value_8;
                    value_7 = MpRegpCopyStringToNotification(input_2, value_8, destination_size, ((WD_LAYOUT_65 **)input)[4], result);
                    value_3 = (uint32_t)((uint64_t)result >> 0x20);
                    right_2 = value_7 & 0xffffffff;
                    if ((int32_t)value_7 <= -1)
                    {
                        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                        {
                            return right_2;
                        }
                        if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                        {
                            return right_2;
                        }
                        value_6 = 0x1b;
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_6, WD_SYMBOL_ADDRESS(WPP_4435874bcd033210a8e834cab0696823_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)((int32_t)right_2) & 0xffffffffULL);
                        return right_2;
                    }
                    right_2 = right;
                }
                if (((int64_t *)input)[5])
                {
                    result = &destination_size;
                    value_4 = MpRegpCalculateNextOffset(value_5, left, right_2, &value_8, result);
                    left = destination_size;
                    value_5 = value_8;
                    value_3 = (uint32_t)((uint64_t)result >> 0x20);
                    right_2 = value_4;
                    if ((int32_t)value_4 <= -1)
                    {
                        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                        {
                            return right_2;
                        }
                        if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                        {
                            return right_2;
                        }
                        value_6 = 0x1c;
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_6, WD_SYMBOL_ADDRESS(WPP_4435874bcd033210a8e834cab0696823_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)((int32_t)right_2) & 0xffffffffULL);
                        return right_2;
                    }
                    result = &right;
                    *(uint64_t *)(&input_2[0x1c]) = value_8;
                    value_7 = MpRegpCopyStringToNotification(input_2, value_8, destination_size, ((WD_LAYOUT_65 **)input)[5], result);
                    value_3 = (uint32_t)((uint64_t)result >> 0x20);
                    right_2 = value_7 & 0xffffffff;
                    if ((int32_t)value_7 <= -1)
                    {
                        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                        {
                            return right_2;
                        }
                        if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                        {
                            return right_2;
                        }
                        value_6 = 0x1d;
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_6, WD_SYMBOL_ADDRESS(WPP_4435874bcd033210a8e834cab0696823_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)((int32_t)right_2) & 0xffffffffULL);
                        return right_2;
                    }
                    right_2 = right;
                }
                value_7 = value_5;
                if (((int32_t *)input)[0x11] && ((int64_t *)input)[10])
                {
                    value_7 = value_5 + right_2;
                    if (value_5 <= value_7)
                    {
                        value_8 = value_7;
                        if (right_2 <= left)
                        {
                            left -= right_2;
                            *(uint64_t *)(&input_2[0x34]) = value_7;
                            data_pointer = ((uint64_t **)input)[10];
                            value_4 = 0x10000;
                            if (((uint32_t *)input)[0x11] <= 0xffff)
                            {
                                value_4 = ((uint32_t *)input)[0x11];
                            }
                            destination_size = left;
                            value_4 = MpRegpCopyBufferToNotification(input_2, value_7, left, value_4, data_pointer, &right);
                            value_3 = (uint32_t)((uint64_t)data_pointer >> 0x20);
                            right_2 = value_4;
                            if ((int32_t)value_4 <= -1)
                            {
                                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                                {
                                    return right_2;
                                }
                                if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                                {
                                    return right_2;
                                }
                                value_6 = 0x1f;
                                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_6, WD_SYMBOL_ADDRESS(WPP_4435874bcd033210a8e834cab0696823_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)((int32_t)right_2) & 0xffffffffULL);
                                return right_2;
                            }
                            if (0x100000000 <= right)
                            {
                                input_2[0x32] = -1;
                                input_2[0x33] = -1;
                                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                                {
                                    return WD_STATUS_INTEGER_OVERFLOW;
                                }
                                if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                                {
                                    return WD_STATUS_INTEGER_OVERFLOW;
                                }
                                value_6 = 0x20;
                                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_6, WD_SYMBOL_ADDRESS(WPP_4435874bcd033210a8e834cab0696823_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INTEGER_OVERFLOW & 0xffffffffULL);
                                return WD_STATUS_INTEGER_OVERFLOW;
                            }
                            *(int32_t *)(&input_2[0x32]) = (int32_t)right;
                            right_2 = right;
                            goto block_5;
                        }
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            value_6 = 0x35;
                            goto block_4;
                        }
                    }
                    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        value_6 = 0x34;
                        block_4:
                        value_2 = ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INTEGER_OVERFLOW & 0xffffffffULL;

                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_6, WD_SYMBOL_ADDRESS(WPP_4435874bcd033210a8e834cab0696823_Traceguids), (uint64_t)KeGetCurrentThread(), value_2);
                        value_3 = (uint32_t)((uint64_t)value_2 >> 0x20);
                    }
                    right_2 = WD_STATUS_INTEGER_OVERFLOW;
                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                    {
                        return WD_STATUS_INTEGER_OVERFLOW;
                    }
                    if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                    {
                        return WD_STATUS_INTEGER_OVERFLOW;
                    }
                    value_6 = 0x1e;
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_6, WD_SYMBOL_ADDRESS(WPP_4435874bcd033210a8e834cab0696823_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)((int32_t)right_2) & 0xffffffffULL);
                    return right_2;
                }
                block_5:
                value_5 = value_7;

                if (((int32_t *)input)[0xd] && ((int64_t *)input)[7])
                {
                    value_5 = value_7 + right_2;
                    if (value_7 <= value_5)
                    {
                        value_8 = value_5;
                        if (right_2 <= left)
                        {
                            left -= right_2;
                            *(uint64_t *)(&input_2[0x3c]) = value_5;
                            value_4 = 0x10000;
                            if (((uint32_t *)input)[0xd] <= 0xffff)
                            {
                                value_4 = ((uint32_t *)input)[0xd];
                            }
                            data_pointer = ((uint64_t **)input)[7];
                            destination_size = left;
                            value_4 = MpRegpCopyBufferToNotification(input_2, value_5, left, value_4, data_pointer, &right);
                            value_3 = (uint32_t)((uint64_t)data_pointer >> 0x20);
                            right_2 = value_4;
                            if ((int32_t)value_4 < 0)
                            {
                                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                                {
                                    return right_2;
                                }
                                if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                                {
                                    return right_2;
                                }
                                value_6 = 0x22;
                                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_6, WD_SYMBOL_ADDRESS(WPP_4435874bcd033210a8e834cab0696823_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)((int32_t)right_2) & 0xffffffffULL);
                                return right_2;
                            }
                            if (0xffffffff < right)
                            {
                                input_2[0x3a] = -1;
                                input_2[0x3b] = -1;
                                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                                {
                                    return WD_STATUS_INTEGER_OVERFLOW;
                                }
                                if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                                {
                                    return WD_STATUS_INTEGER_OVERFLOW;
                                }
                                value_6 = 0x23;
                                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_6, WD_SYMBOL_ADDRESS(WPP_4435874bcd033210a8e834cab0696823_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INTEGER_OVERFLOW & 0xffffffffULL);
                                return WD_STATUS_INTEGER_OVERFLOW;
                            }
                            *(int32_t *)(&input_2[0x3a]) = (int32_t)right;
                            right_2 = right;
                            goto block_7;
                        }
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            value_6 = 0x35;
                            goto block_6;
                        }
                    }
                    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        value_6 = 0x34;
                        block_6:
                        value_2 = ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INTEGER_OVERFLOW & 0xffffffffULL;

                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_6, WD_SYMBOL_ADDRESS(WPP_4435874bcd033210a8e834cab0696823_Traceguids), (uint64_t)KeGetCurrentThread(), value_2);
                        value_3 = (uint32_t)((uint64_t)value_2 >> 0x20);
                    }
                    right_2 = WD_STATUS_INTEGER_OVERFLOW;
                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                    {
                        return WD_STATUS_INTEGER_OVERFLOW;
                    }
                    if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                    {
                        return WD_STATUS_INTEGER_OVERFLOW;
                    }
                    value_6 = 0x21;
                }
                else
                {
                    block_7:
                    if (!((int64_t *)input)[0xe])
                    {
                        return 0;
                    }

                    result = &destination_size;
                    value_4 = MpRegpCalculateNextOffset(value_5, left, right_2, &value_8, result);
                    value_3 = (uint32_t)((uint64_t)result >> 0x20);
                    right_2 = value_4;
                    if (0 <= (int32_t)value_4)
                    {
                        result = &right;
                        *(uint64_t *)(&input_2[0x58]) = value_8;
                        value_4 = MpRegpCopyStringToNotification(input_2, value_8, destination_size, ((WD_LAYOUT_65 **)input)[0xe], result);
                        value_3 = (uint32_t)((uint64_t)result >> 0x20);
                        right_2 = value_4;
                        if (0 <= (int32_t)value_4)
                        {
                            return 0;
                        }
                        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                        {
                            return right_2;
                        }
                        if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                        {
                            return right_2;
                        }
                        value_6 = 0x25;
                    }
                    else
                    {
                        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                        {
                            return right_2;
                        }
                        if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                        {
                            return right_2;
                        }
                        value_6 = 0x24;
                    }
                }
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_6, WD_SYMBOL_ADDRESS(WPP_4435874bcd033210a8e834cab0696823_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)((int32_t)right_2) & 0xffffffffULL);
                return right_2;
            }
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                value_6 = 0x31;
                value_2 = ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)((int32_t)value_5) & 0xffffffffULL;
                goto block_8;
            }
        }
        else
        {
            right_2 = WD_STATUS_INTEGER_OVERFLOW;
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                value_6 = 0x30;
                value_2 = ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INTEGER_OVERFLOW & 0xffffffffULL;
                block_8:
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_6, WD_SYMBOL_ADDRESS(WPP_4435874bcd033210a8e834cab0696823_Traceguids), (uint64_t)KeGetCurrentThread(), value_2);

                value_3 = (uint32_t)((uint64_t)value_2 >> 0x20);
            }
        }
    }
    else
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2f, WD_SYMBOL_ADDRESS(WPP_4435874bcd033210a8e834cab0696823_Traceguids), (uint64_t)KeGetCurrentThread());
        }
        right_2 = WD_STATUS_INVALID_PARAMETER;
    }
    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
    {
        return right_2;
    }
    if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
    {
        return right_2;
    }
    value_6 = 0x15;
    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_6, WD_SYMBOL_ADDRESS(WPP_4435874bcd033210a8e834cab0696823_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)((int32_t)right_2) & 0xffffffffULL);
    return right_2;
}

uint32_t MpRegpCopyBufferToNotification(uint64_t *input, int64_t input_2, uint64_t input_3, uint64_t input_4, uint64_t *input_5, uint64_t *input_6)
{
    uint64_t *data_pointer;
    uint32_t value;
    uint64_t *data_pointer_2;
    if (input_3 && input_4 <= input_3)
    {
        data_pointer = (uint64_t *)((int64_t)input + input_2);
        data_pointer_2 = (uint64_t *)0xffffffffffffffff;
        if (data_pointer >= input)
        {
            data_pointer_2 = data_pointer;
        }
        value = -(uint32_t)(data_pointer < input) & WD_STATUS_INTEGER_OVERFLOW;
        if (input <= data_pointer)
        {
            memmove(data_pointer_2, input_5, input_4);
            *input_6 = input_4;
            value = 0;
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x32, WD_SYMBOL_ADDRESS(WPP_4435874bcd033210a8e834cab0696823_Traceguids), (uint64_t)KeGetCurrentThread(), value);
        }
    }
    else
    {
        value = 0xc0000023;
    }
    return value;
}

int32_t MpRegpCopyStringToNotification(int16_t *input, int64_t input_2, uint64_t destination_size, WD_LAYOUT_65 *input_3, int64_t *input_4)
{
    int64_t *data_pointer;
    int32_t value;
    uint64_t value_2;
    int32_t value_3;
    int64_t source_text;
    data_pointer = input_4;
    if (!input || !input_3 || !input_4)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2f, WD_SYMBOL_ADDRESS(WPP_4435874bcd033210a8e834cab0696823_Traceguids), (uint64_t)KeGetCurrentThread());
        }
        return -0x3ffffff3;
    }
    if (input <= (int16_t *)((int64_t)input + input_2))
    {
        source_text = WD_EXCLUDEPROCESS_UNRECOVERED_ADDRESS;
        if (input_3->field_0x8)
        {
            source_text = input_3->field_0x8;
        }
        value = RtlStringCbCopyNW((int16_t *)((int64_t)input + input_2), destination_size, source_text, input_3->field_0x0);
        if (0 <= value)
        {
            *data_pointer = (uint64_t)input_3->field_0x0 + 2;
            return 0;
        }
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
        {
            return value;
        }
        if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return value;
        }
        value_2 = 0x31;
        value_3 = value;
    }
    else
    {
        value_3 = -0x3fffff6b;
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
        {
            return -0x3fffff6b;
        }
        if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return -0x3fffff6b;
        }
        value_2 = 0x30;
        value = -0x3fffff6b;
    }
    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_4435874bcd033210a8e834cab0696823_Traceguids), (uint64_t)KeGetCurrentThread(), value);
    return value_3;
}

int32_t MpRegpCalculateNextOffset(uint64_t input, uint64_t left, uint64_t right, uint64_t *input_2, int64_t *result)
{
    int32_t status;
    uint64_t value;
    if (input <= right + input)
    {
        *input_2 = right + input;
        status = RtlULongLongSub(left, right, result);
        if (0 <= status)
        {
            return 0;
        }
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
        {
            return status;
        }
        if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return status;
        }
        value = 0x35;
    }
    else
    {
        status = -0x3fffff6b;
        *input_2 = 0xffffffffffffffff;
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
        {
            return -0x3fffff6b;
        }
        if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return -0x3fffff6b;
        }
        value = 0x34;
    }
    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value, WD_SYMBOL_ADDRESS(WPP_4435874bcd033210a8e834cab0696823_Traceguids), (uint64_t)KeGetCurrentThread(), status);
    return status;
}

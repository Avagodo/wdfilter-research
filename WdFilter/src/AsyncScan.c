#include "wdfilter.h"

uint32_t MpFcKernelGetValue(int32_t input)
{
    if (input <= 0xe7)
    {
        return *(uint32_t *)(MpData + 0xfe0 + (uint32_t)(input - 0xcd) * 4ULL);
    }
    return 0;
}

void WPP_SF_DD(uint64_t input, uint16_t input_2, uint64_t input_3, uint32_t input_4)
{
    uint32_t values[2];
    values[0] = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, input_3, input_2, values, 4, &unrecovered_stack_argument_5, 4, 0);
    return;
}

void WPP_SF_LiisS(uint64_t input, uint64_t input_2, uint64_t input_3, uint32_t input_4, uint64_t input_5, uint64_t input_6, char *input_7, int16_t *input_8)
{
    int64_t index;
    int64_t index_2;
    int64_t value;
    int16_t *wide_text;
    uint32_t values[2];
    char *bytes;
    if (input_8)
    {
        index_2 = -1;
        do
        {
            index_2 += 1;
        }
        while (input_8[index_2]);
        index_2 = index_2 * 2 + 2;
    }
    else
    {
        index_2 = 10;
    }
    wide_text = input_8;
    if (!input_8)
    {
        wide_text = &WdAsyncnotificationStorage3;
    }
    index = -1;
    if (input_7)
    {
        do
        {
            value = index;
            index = value + 1;
        }
        while (input_7[index]);
        value += 2;
    }
    else
    {
        value = 5;
    }
    bytes = input_7;
    if (!input_7)
    {
        bytes = "NULL";
    }
    values[0] = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_e14b9b336f94348117623c9565965302_Traceguids), 0x15, values, 4, &input_5, 8, &input_6, 8, bytes, value, wide_text, index_2, 0);
    return;
}

void WPP_SF_LiisiS(uint64_t input, uint64_t input_2, uint64_t input_3, uint32_t input_4, uint64_t input_5, uint64_t input_6, char *input_7, uint64_t input_8, int16_t *input_9)
{
    int64_t index;
    int64_t index_2;
    int64_t value;
    int16_t *wide_text;
    uint32_t values[2];
    char *bytes;
    if (input_9)
    {
        index_2 = -1;
        do
        {
            index_2 += 1;
        }
        while (input_9[index_2]);
        index_2 = index_2 * 2 + 2;
    }
    else
    {
        index_2 = 10;
    }
    wide_text = input_9;
    if (!input_9)
    {
        wide_text = &WdAsyncnotificationStorage3;
    }
    index = -1;
    if (input_7)
    {
        do
        {
            value = index;
            index = value + 1;
        }
        while (input_7[index]);
        value += 2;
    }
    else
    {
        value = 5;
    }
    bytes = input_7;
    if (!input_7)
    {
        bytes = "NULL";
    }
    values[0] = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_e14b9b336f94348117623c9565965302_Traceguids), 0x11, values, 4, &input_5, 8, &input_6, 8, bytes, value, &input_8, 8, wide_text, index_2, 0);
    return;
}

void WPP_SF_iisS(uint64_t input, uint16_t input_2, uint64_t input_3, uint64_t input_4, uint64_t input_5, char *input_6, int16_t *input_7)
{
    int64_t index;
    int64_t index_2;
    int64_t value;
    uint64_t value_2;
    int16_t *wide_text;
    char *bytes;
    if (input_7)
    {
        index_2 = -1;
        do
        {
            index_2 += 1;
        }
        while (input_7[index_2]);
        index_2 = index_2 * 2 + 2;
    }
    else
    {
        index_2 = 10;
    }
    wide_text = input_7;
    if (!input_7)
    {
        wide_text = &WdAsyncnotificationStorage3;
    }
    index = -1;
    if (input_6)
    {
        do
        {
            value = index;
            index = value + 1;
        }
        while (input_6[index]);
        value += 2;
    }
    else
    {
        value = 5;
    }
    bytes = input_6;
    if (!input_6)
    {
        bytes = "NULL";
    }
    value_2 = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_e14b9b336f94348117623c9565965302_Traceguids), input_2, &value_2, 8, &input_5, 8, bytes, value, wide_text, index_2, 0);
    return;
}

void MpAsyncScanWorkerThread(uint64_t trace_argument_1)
{
    int32_t value;
    uint32_t value_2;
    int64_t value_3;
    int32_t value_5;
    uint64_t value_6;
    uint64_t value_7;
    int64_t value_8;
    int64_t value_9 = 0;
    uint32_t value_10;
    value_8 = MpAsyncScanData + 0x90;
    value_2 = value_10 & 0xffffff00;
    value_3 = MpAsyncScanData + 0xa8;
    value_6 = KeWaitForMultipleObjects(2, &value_8, 1, 0, value_2, 0, 0, 0);
    value = (int32_t)value_6;
    while (true)
    {
        if (!value)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x17, WD_SYMBOL_ADDRESS(WPP_e14b9b336f94348117623c9565965302_Traceguids), trace_argument_1);
            }
            PsTerminateSystemThread(0);
            return;
        }
        if (0 <= value)
        {
            value_5 = MpAsyncScanDequeue(&value_9);
            if (0 <= value_5)
            {
                *(uint32_t *)(value_9 + 0x28) = *(uint32_t *)(value_9 + 0x28) | 1;
                if (!(*(char *)(MpData + 0x9a0)) || *(int64_t *)(MpData + 0x9a8))
                {
                    MpDoScanFile(value_9);
                }
                MpCleanupScanRequestContext(&value_9);
            }
            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                value_7 = 0x19;
                goto block_1;
            }
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            value_7 = 0x18;
            value_5 = (uint32_t)value_6;
            block_1:
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_7, WD_SYMBOL_ADDRESS(WPP_e14b9b336f94348117623c9565965302_Traceguids), (uint64_t)KeGetCurrentThread(), value_5);

            value_2 = value_5;
        }
        value_2 &= 0xffffff00;
        value_9 = 0;
        value_6 = KeWaitForMultipleObjects(2, &value_8, 1, 0, value_2, 0, 0, 0);
        value = (int32_t)value_6;
    }
}

uint64_t MpAsyncScanDequeue(int64_t *input)
{
    uint64_t *data_pointer;
    uint64_t value;
    int16_t *trace_argument_5;
    int64_t *async_scan_data;
    int64_t provider;
    uint64_t *data_pointer_2;
    uint32_t value_2;
    int64_t *async_scan_data_2;
    uint64_t *data_pointer_3;
    char *event_id;
    uint64_t value_3 = 0;
    ExAcquireFastMutex(&MpAsyncScanData[0x19]);
    async_scan_data_2 = MpAsyncScanData;
    async_scan_data = (int64_t *)(*MpAsyncScanData);
    if (async_scan_data != MpAsyncScanData)
    {
        if ((int64_t *)async_scan_data[1] != MpAsyncScanData || (provider = *async_scan_data, (int64_t *)(*(int64_t *)(provider + 8)) != async_scan_data))
        {
            (*(WD_ROUTINE)swi(0x29))(3);
        }
        *MpAsyncScanData = provider;
        *(int64_t **)(provider + 8) = async_scan_data_2;
        *input = (int64_t)(&async_scan_data[-1]);
        if (*(uint32_t *)(&async_scan_data[4]) & 2)
        {
            data_pointer = (uint64_t *)(&async_scan_data[2]);
            value = -1LL << ((uint8_t)((uint32_t *)async_scan_data_2)[0x145] & 0x1f) & async_scan_data[3];
            value_2 = (uint32_t)(value >> 0x20);
            data_pointer_3 = (uint64_t *)(async_scan_data_2[0xa3] + (uint64_t)((((uint32_t *)async_scan_data_2)[0x145] >> 5) - 1 & (((((((((uint32_t)value & 0xff) + 0xb15dcb) * 0x25 + ((uint32_t)(value >> 8) & 0xff)) * 0x25 + ((uint32_t)(value >> 0x10) & 0xff)) * 0x25 + ((uint32_t)(value >> 0x18) & 0xff)) * 0x25 + (value_2 & 0xff)) * 0x25 + (value_2 >> 8 & 0xff)) * 0x25 + ((uint16_t)(value >> 0x30) & 0xff)) * 0x25 + (uint32_t)((uint8_t)(value >> 0x38))) * 8);
            while (data_pointer_2 = (uint64_t *)(*data_pointer_3), !((uint64_t)data_pointer_2 & 1))
            {
                if (data_pointer_2 == data_pointer)
                {
                    *data_pointer_3 = *data_pointer;
                    *(int32_t *)(&async_scan_data_2[0xa2]) = *(int32_t *)(&async_scan_data_2[0xa2]) + -1;
                    *data_pointer = *data_pointer | 0x8000000000000002;
                    break;
                }
                data_pointer_3 = data_pointer_2;
            }
        }
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            provider = *(int64_t *)(*input + 0x30);
            trace_argument_5 = (int16_t *)(provider + 0x334);
            if (!(*(int16_t *)(provider + 0x20a)))
            {
                trace_argument_5 = &WdAsyncscanStorage;
            }
            event_id = "OnClose";
            if (*(int32_t *)(provider + 0x18) != 4)
            {
                event_id = "OnOpen";
            }
            WPP_SF_LiisS(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, provider, *(uint32_t *)(&MpAsyncScanData[0x20]), *(uint64_t *)(provider + 0x180), *(uint64_t *)(provider + 0x188), event_id, trace_argument_5);
        }
        async_scan_data = MpAsyncScanData;
        *(int32_t *)(&MpAsyncScanData[0x20]) = *(int32_t *)(&MpAsyncScanData[0x20]) + -1;
        if (*(int32_t *)(*(int64_t *)(*input + 0x30) + 0x18) != 4)
        {
            *(int32_t *)((int64_t)async_scan_data + 0x104) = *(int32_t *)((int64_t)async_scan_data + 0x104) + 1;
        }
        else
        {
            *(int32_t *)(&async_scan_data[0x21]) = *(int32_t *)(&async_scan_data[0x21]) + 1;
        }
    }
    else
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x16, WD_SYMBOL_ADDRESS(WPP_e14b9b336f94348117623c9565965302_Traceguids));
        }
        *input = 0;
        value_3 = WD_STATUS_NOT_FOUND;
    }
    ExReleaseFastMutex(&MpAsyncScanData[0x19]);
    return value_3;
}

void MpAsyncScanCleanupQueue(void)
{
    int64_t *data_pointer;
    int64_t value;
    int64_t *async_scan_data;
    int64_t values[4];
    ExAcquireFastMutex(&MpAsyncScanData[0x19]);
    while (true)
    {
        async_scan_data = MpAsyncScanData;
        data_pointer = (int64_t *)(*MpAsyncScanData);
        if (data_pointer == MpAsyncScanData)
        {
            *(uint32_t *)(&MpAsyncScanData[0x20]) = 0;
            ExReleaseFastMutex(&async_scan_data[0x19]);
            return;
        }
        if ((int64_t *)data_pointer[1] != MpAsyncScanData || (value = *data_pointer, (int64_t *)(*(int64_t *)(value + 8)) != data_pointer))
        {
            break;
        }
        *MpAsyncScanData = value;
        values[0] = (int64_t)(&data_pointer[-1]);
        *(int64_t **)(value + 8) = async_scan_data;
        MpCleanupScanRequestContext(values);
    }

    (*(WD_ROUTINE)swi(0x29))(3);
}

void MpAsyncScanEnqueue(void *input)
{
    int64_t *data_pointer;
    int64_t *data_pointer_2;
    uint32_t value;
    bool enabled;
    uint16_t value_2;
    int32_t value_3;
    uint64_t value_4;
    uint8_t byte_value;
    int64_t value_5;
    int64_t async_scan_data;
    int32_t *data_pointer_3;
    int32_t *trace_argument_4;
    int32_t *trace_argument_6;
    uint64_t *data_pointer_4;
    char buffer[32];
    uint64_t target_name;
    uint64_t source_name;
    void *data_pointer_5;
    uint64_t ignore_case;
    uint16_t value_6;
    char *provider;
    int32_t *trace_argument_5;
    bool enabled_2;
    bool enabled_3;
    uint8_t byte_value_2;
    int32_t *data_pointer_6;
    int64_t value_7;
    uint64_t value_8;
    int16_t value_9;
    uint32_t value_10;
    int64_t value_11;
    int64_t async_scan_data_2;
    int64_t value_12;
    uint64_t value_13;
    value_4 = __security_cookie ^ (uint64_t)buffer;
    trace_argument_4 = NULL;
    value_11 = ((int64_t *)input)[6];
    async_scan_data_2 = *(int64_t *)(((int64_t *)input)[8] + 8);
    enabled = 0;
    enabled_2 = (*(uint32_t *)(MpData + 0x364) >> 0xd & 1) == 0;
    if (enabled_2)
    {
        *(uint32_t *)((int64_t)input + 0x28) = *(uint32_t *)((int64_t)input + 0x28) | 2;
    }
    if (MpAsyncScanData)
    {
        async_scan_data = MpAsyncScanData + 0x90;
        if (!KeReadStateEvent(async_scan_data))
        {
            value_6 = *(uint16_t *)(value_11 + 0x20a);
            data_pointer_3 = (int32_t *)(value_11 + 0x334);
            if (!value_6)
            {
                data_pointer_3 = trace_argument_4;
            }
            if (enabled_2)
            {
                if (data_pointer_3)
                {
                    trace_argument_5 = (int32_t *)0x4cb2f;
                    for (; trace_argument_6 < (int32_t *)((int64_t)data_pointer_3 + (uint64_t)(value_6 >> 1) * 2); trace_argument_6 = (int32_t *)((int64_t)trace_argument_6 + 2))
                    {
                        value_2 = RtlUpcaseUnicodeChar(*(uint16_t *)trace_argument_6);
                        trace_argument_5 = (int32_t *)(((int64_t)trace_argument_5 * 0x25 + (value_2 & 0xffULL)) * 0x25 + (uint64_t)(value_2 >> 8));
                    }
                }
                else
                {
                    trace_argument_5 = (int32_t *)((((((((*(uint8_t *)(value_11 + 0x180) + 0xb15dcbULL) * 0x25 + *(uint8_t *)(value_11 + 0x181)) * 0x25 + *(uint8_t *)(value_11 + 0x182)) * 0x25 + *(uint8_t *)(value_11 + 0x183)) * 0x25 + *(uint8_t *)(value_11 + 0x184)) * 0x25 + (uint64_t)(*(uint8_t *)(value_11 + 0x185))) * 0x25 + (uint64_t)(*(uint8_t *)(value_11 + 0x186))) * 0x25 + (uint64_t)(*(uint8_t *)(value_11 + 0x187)));
                }
            }
            else
            {
                trace_argument_5 = trace_argument_4;
            }
            data_pointer_4 = NULL;
            ((int32_t **)input)[4] = trace_argument_5;
            ExAcquireFastMutex(MpAsyncScanData + 200);
            async_scan_data = MpAsyncScanData;
            if (enabled_2)
            {
                trace_argument_4 = (int32_t *)(MpAsyncScanData + 0x510);
                block_3:
                do
                {
                    do
                    {
                        value_10 = *(uint32_t *)(async_scan_data + 0x514);
                        byte_value = (uint8_t)value_10 & 0x1f;
                        value_4 = -1LL << byte_value & (uint64_t)trace_argument_5;
                        if (data_pointer_4)
                        {
                            block_1:
                            do
                            {
                                data_pointer_4 = (uint64_t *)(*data_pointer_4);
                                if ((uint64_t)data_pointer_4 & 1)
                                {
                                    goto block_2;
                                }
                            }
                            while (value_4 != (data_pointer_4[1] & -1LL << byte_value));
                        }
                        else
                        {
                            if (value_10 >> 5)
                            {
                                byte_value_2 = (uint8_t)(value_4 >> 0x18);
                                value = (uint32_t)(value_4 >> 0x20);
                                data_pointer_4 = (uint64_t *)(*(int64_t *)(async_scan_data + 0x518) + (uint64_t)((((((((uint32_t)(value_4 >> 8) & 0xff) * 0x25 + ((uint32_t)(value_4 >> 0x10) & 0xff)) * 0x25 + (uint32_t)byte_value_2) * 0x25 + (value & 0xff)) * 0x25 + (value >> 8 & 0xff)) * 0x25 + ((uint16_t)(value_4 >> 0x30) & 0xff)) * 0x25 + (uint32_t)((uint8_t)(value_4 >> 0x38)) + ((uint32_t)value_4 & 0xff) * 0x1a617d0d + -0x34471db1 & (value_10 >> 5) - 1) * 8);
                                goto block_1;
                            }
                            block_2:
                            data_pointer_4 = NULL;
                        }
                        if (!data_pointer_4)
                        {
                            goto block_4;
                        }
                        value_12 = *(int64_t *)(value_11 + 0x180);
                        value_9 = *(int16_t *)(value_11 + 0x20a);
                        source_name = 0;
                        value_7 = 0;
                        target_name = 0;
                        data_pointer_6 = NULL;
                        value_13 = data_pointer_4[3];
                        ignore_case = (uint64_t)value_4 & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
                        value_3 = RtlCompareUnicodeString(*(int64_t *)(data_pointer_4[5] + 8) + 0x18, async_scan_data_2 + 0x18, ignore_case);
                    }
                    while (value_3);
                    if (!value_9 || value_9 != *(int16_t *)(value_13 + 0x20a))
                    {
                        if (value_12 == *(int64_t *)(value_13 + 0x180))
                        {
                            break;
                        }
                        goto block_3;
                    }
                    WdStoreField(&source_name, 0, 4, (uint64_t)(((uint64_t)value_9 & 0xffffULL) << 16 | (uint64_t)value_9 & 0xffffULL));
                    value_5 = value_13 + 0x334;
                    WdStoreField(&target_name, 0, 4, (uint64_t)(((uint64_t)value_9 & 0xffffULL) << 16 | (uint64_t)value_9 & 0xffffULL));
                    if (RtlCompareUnicodeString(&source_name, &target_name, (uint64_t)ignore_case & 0xffffffffffffff00 | (uint64_t)1 & 0xff))
                    {
                        enabled_3 = value_12 == *(int64_t *)(value_13 + 0x180);
                    }
                    else
                    {
                        enabled_3 = 1;
                    }
                }
                while (!enabled_3);
            }
            block_4:
            if (data_pointer_4)
            {
                value_4 = data_pointer_4[3];
                async_scan_data_2 = ((int64_t *)input)[6];
                if (*(int64_t *)(async_scan_data_2 + 0x180) != *(int64_t *)(value_4 + 0x180) || *(int32_t *)(value_4 + 0x18) != 3 || !(*(uint32_t *)(value_4 + 0x1c) & 0x20) || *(int32_t *)(async_scan_data_2 + 0x18) == 3 && *(uint32_t *)(async_scan_data_2 + 0x1c) & 0x20)
                {
                    *(char *)(value_11 + 0x332) = 1;
                    *(uint16_t *)(value_11 + 0x330) = *(uint16_t *)(MpAsyncScanData + 0x100);
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                    {
                        trace_argument_4 = &WdAsyncscanStorage;
                        if (data_pointer_3)
                        {
                            trace_argument_4 = data_pointer_3;
                        }
                        provider = "OnClose";
                        if (*(int32_t *)(value_11 + 0x18) != 4)
                        {
                            provider = "OnOpen";
                        }
                        WPP_SF_iisS(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x12, provider, *(uint64_t *)(value_11 + 0x180), *(uint64_t *)(value_11 + 0x188), provider, trace_argument_4);
                    }
                    if (data_pointer_4[8])
                    {
                        ObfDereferenceObject();
                        value_11 = ObTotalReferences;
                        WdUnresolvedAtomicBegin();
                        ObTotalReferences -= 1;
                        WdUnresolvedAtomicEnd();
                        if (value_11 + -1 <= -1 && *(int32_t *)(MpData + 0x364) <= -1)
                        {
                            if (KdRefreshDebuggerNotPresent())
                            {
                                KeBugCheck(1);
                            }
                            (*(WD_ROUTINE)swi(3))();
                            return;
                        }
                    }
                    if (data_pointer_4[5])
                    {
                        FltReleaseContext();
                    }
                    if (data_pointer_4[6])
                    {
                        FltReleaseContext();
                    }
                    if (data_pointer_4[7])
                    {
                        MpReleaseProcessContext();
                    }
                    if (data_pointer_4[3])
                    {
                        ExFreePoolWithTag(data_pointer_4[3], 0x7366504d);
                    }
                    *(uint32_t *)(&data_pointer_4[2]) = ((uint32_t *)input)[10];
                    data_pointer_4[8] = ((uint64_t *)input)[0xb];
                    data_pointer_4[5] = ((uint64_t *)input)[8];
                    data_pointer_4[6] = ((uint64_t *)input)[9];
                    data_pointer_4[7] = ((uint64_t *)input)[10];
                    data_pointer_4[3] = ((uint64_t *)input)[6];
                    *(uint32_t *)(&data_pointer_4[4]) = ((uint32_t *)input)[0xe];
                    ExFreeToPagedLookasideList((void *)(MpData + 0x8c0), input);
                }
                else
                {
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                    {
                        trace_argument_4 = &WdAsyncscanStorage;
                        if (data_pointer_3)
                        {
                            trace_argument_4 = data_pointer_3;
                        }
                        provider = "OnClose";
                        if (*(int32_t *)(value_11 + 0x18) != 4)
                        {
                            provider = "OnOpen";
                        }
                        WPP_SF_iisS(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x13, provider, *(uint64_t *)(value_11 + 0x180), *(uint64_t *)(value_11 + 0x188), provider, trace_argument_4);
                    }
                    MpCleanupScanRequestContext(&data_pointer_5);
                }
            }
            else
            {
                if (*(uint32_t *)(MpData + 0x102c) <= *(uint32_t *)(MpAsyncScanData + 0x100))
                {
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                    {
                        WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xf, WD_SYMBOL_ADDRESS(WPP_e14b9b336f94348117623c9565965302_Traceguids));
                    }
                    ExReleaseFastMutex(MpAsyncScanData + 200);
                    if (*(uint32_t *)(MpData + 0x364) >> 0x11 & 1)
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                        {
                            WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x10, WD_SYMBOL_ADDRESS(WPP_e14b9b336f94348117623c9565965302_Traceguids));
                        }
                        MpTraceAsyncScanQueueExceeded(*(uint32_t *)(MpAsyncScanData + 0x100), *(uint32_t *)(MpData + 0x102c));
                        MpCleanupScanRequestContext(&data_pointer_5);
                    }
                    else
                    {
                        MpTraceAsyncScanQueueExceeded(*(uint32_t *)(MpAsyncScanData + 0x100), *(uint32_t *)(MpData + 0x102c));
                    }
                    __security_check_cookie(value_8 ^ (uint64_t)buffer);
                    return;
                }
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                {
                    trace_argument_6 = &WdAsyncscanStorage;
                    if (data_pointer_3)
                    {
                        trace_argument_6 = data_pointer_3;
                    }
                    provider = "OnClose";
                    if (*(int32_t *)(value_11 + 0x18) != 4)
                    {
                        provider = "OnOpen";
                    }
                    WPP_SF_LiisiS(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), "OnOpen", provider, *(uint32_t *)(MpAsyncScanData + 0x100), *(uint64_t *)(value_11 + 0x180), *(uint64_t *)(value_11 + 0x188), provider, trace_argument_5, trace_argument_6);
                    input = data_pointer_5;
                }
                ((uint64_t *)input)[0xd] = 0xdeaddddd;
                ((uint64_t *)input)[0xe] = 0xdeadffff;
                *(char *)(value_11 + 0x332) = 1;
                async_scan_data_2 = MpAsyncScanData;
                *(uint16_t *)(value_11 + 0x330) = *(uint16_t *)(MpAsyncScanData + 0x100);
                data_pointer = &((int64_t *)input)[1];
                data_pointer_2 = *(int64_t **)(async_scan_data_2 + 8);
                if (*data_pointer_2 != async_scan_data_2)
                {
                    (*(WD_ROUTINE)swi(0x29))(3);
                }
                *data_pointer = async_scan_data_2;
                ((int64_t **)input)[2] = data_pointer_2;
                *data_pointer_2 = (int64_t)data_pointer;
                *(int64_t **)(async_scan_data_2 + 8) = data_pointer;
                if (enabled_2)
                {
                    byte_value = (uint8_t)trace_argument_4[1] & 0x1f;
                    value_4 = -1LL << byte_value & ((uint64_t *)input)[4];
                    value_10 = (uint32_t)(value_4 >> 0x20);
                    data_pointer = (int64_t *)(*(int64_t *)(&trace_argument_4[2]) + (uint64_t)((((((((uint32_t)(value_4 >> 8) & 0xff) * 0x25 + ((uint32_t)(value_4 >> 0x10) & 0xff)) * 0x25 + ((uint32_t)(value_4 >> 0x18) & 0xff)) * 0x25 + (value_10 & 0xff)) * 0x25 + (value_10 >> 8 & 0xff)) * 0x25 + ((uint16_t)(value_4 >> 0x30) & 0xff)) * 0x25 + (uint32_t)((uint8_t)(value_4 >> 0x38)) + -0x34471db1 + ((uint32_t)value_4 & 0xff) * 0x1a617d0d & ((uint32_t)trace_argument_4[1] >> 5) - 1) * 8);
                    *(int64_t *)((int64_t)input + 0x18) = *data_pointer;
                    *data_pointer = (int64_t)input + 0x18;
                    *trace_argument_4 = *trace_argument_4 + 1;
                }
                *(int32_t *)(async_scan_data_2 + 0x100) = *(int32_t *)(async_scan_data_2 + 0x100) + 1;
                enabled = 1;
            }

            ExReleaseFastMutex(MpAsyncScanData + 200);
            if (enabled)
            {
                KeReleaseSemaphore(MpAsyncScanData + 0xa8, 0, 1, 0);
            }
        }
    }
    __security_check_cookie(value_8 ^ (uint64_t)buffer);
    return;
}

void MpAsyncScanShutdown(void)
{
    int64_t value;
    int32_t value_2;
    int64_t value_3;
    uint32_t value_4;
    if (!MpAsyncScanData)
    {
        return;
    }
    KeSetEvent(MpAsyncScanData + 0x90, 0, 0);
    value_3 = 0x10;
    while (true)
    {
        if (*(int64_t *)(value_3 + MpAsyncScanData))
        {
            value_4 = 0;
            value_2 = KeWaitForSingleObject(*(int64_t *)(value_3 + MpAsyncScanData), 0, 0, 0, 0);
            if (value_2 <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xe, WD_SYMBOL_ADDRESS(WPP_e14b9b336f94348117623c9565965302_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)value_2 & 0xffffffffULL);
            }
            ObfDereferenceObject(*(uint64_t *)(value_3 + MpAsyncScanData));
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
            *(uint64_t *)(value_3 + MpAsyncScanData) = 0;
        }
        value_3 += 8;
        if (0x90 <= value_3)
        {
            MpAsyncScanCleanupQueue();
            return;
        }
    }
}

void MpIsDeveloperVolume(uint64_t input, WD_LAYOUT_111 *input_2)
{
    int32_t values[2];
    int16_t value;
    int16_t value_2;
    uint32_t value_3;
    int64_t value_4;
    values[0] = 0;
    if (RtlPrefixUnicodeString(WD_ASYNCSCAN_UNRECOVERED_ADDRESS, input_2, 0))
    {
        value_3 = 0;
        value = input_2->field_0x0 + -0x2c;
        value_2 = input_2->field_0x2 + -0x2c;
        value_4 = input_2->field_0x8 + 0x2c;
        RtlUnicodeStringToInteger(&value, 10, values);
    }
    return;
}

bool MpAsyncScanEnqueue__filter_0(uint64_t *input)
{
    return *(int32_t *)(*input) == -0x3fffffb9;
}

void MpAsyncScanInitialize(void)
{
    uint32_t trace_argument_1;
    uint64_t index;
    uint64_t value;
    uint64_t value_2;
    uint32_t value_3;
    uint64_t value_4;
    uint64_t value_5;
    uint64_t value_6;
    uint64_t value_7;
    uint64_t value_8;
    int32_t value_9;
    int64_t allocation;
    uint32_t *data_pointer;
    uint64_t value_11;
    uint64_t *data_pointer_2;
    uint64_t value_12;
    int64_t value_13;
    value_3 = (uint32_t)((uint64_t)value >> 0x20);
    value_12 = 0;
    value_4 = 0;
    value_5 = 0;
    value_6 = 0;
    value_7 = 0;
    value_8 &= 0xffffffff00000000;
    value_13 = 0;
    if (WdDataStorage22)
    {
        allocation = (int64_t)MpAllocatePoolWithTag(ExDefaultNonPagedPoolType, (char *)0x520, 0x7361504d);
        MpAsyncScanData = allocation;
        if (allocation)
        {
            *(int64_t *)(allocation + 8) = allocation;
            *(int64_t *)allocation = allocation;
            *(uint32_t *)(allocation + 200) = 1;
            *(uint64_t *)(allocation + 0xd0) = 0;
            *(uint32_t *)(allocation + 0xd8) = 0;
            KeInitializeEvent(allocation + 0xe0, 1);
            KeInitializeEvent(MpAsyncScanData + 0x90, 0, 0);
            KeInitializeSemaphore(MpAsyncScanData + 0xa8, 0, 0x7fffffff);
            value_12 = ((uint64_t)WdLoadField(&value_12, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)0x30 & 0xffffffffULL;
            value_4 = 0;
            value_6 = ((uint64_t)WdLoadField(&value_6, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)0x200 & 0xffffffffULL;
            value_5 = 0;
            value_7 = 0;
            value_8 = 0;
            trace_argument_1 = KeQueryActiveProcessorCount(0);
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
            {
                WPP_SF_DD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xb, WD_SYMBOL_ADDRESS(WPP_e14b9b336f94348117623c9565965302_Traceguids), trace_argument_1, ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)0x10 & 0xffffffffULL);
            }
            if (0x11 <= trace_argument_1)
            {
                trace_argument_1 = 0x10;
            }
            for (index = 0; allocation = MpAsyncScanData, (uint32_t)index < trace_argument_1; index = (uint32_t)index + 1)
            {
                if (value_13)
                {
                    ZwClose();
                    value_13 = 0;
                }
                value_3 = 0;
                value_9 = PsCreateSystemThread(&value_13, 0, &value_12, 0, 0, MpAsyncScanWorkerThread, index);
                if (value_9 <= -1)
                {
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        value_11 = 0xc;
                        value_2 = ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)value_9 & 0xffffffffULL;
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_11, WD_SYMBOL_ADDRESS(WPP_e14b9b336f94348117623c9565965302_Traceguids), (uint64_t)KeGetCurrentThread(), value_2);
                    }
                    goto block_1;
                }
                allocation = MpAsyncScanData + 0x10 + index * 8;
                value_9 = MpReferenceObjectByHandle(value_13, 0x1fffff, *__imp_PsThreadType, 0, allocation);
                if (value_9 <= -1)
                {
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        value_11 = 0xd;
                        value_2 = (uint64_t)allocation & 0xffffffff00000000 | (uint64_t)value_9 & 0xffffffff;
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_11, WD_SYMBOL_ADDRESS(WPP_e14b9b336f94348117623c9565965302_Traceguids), (uint64_t)KeGetCurrentThread(), value_2);
                    }
                    goto block_1;
                }
            }

            data_pointer_2 = (uint64_t *)(MpAsyncScanData + 0x110);
            data_pointer = (uint32_t *)(MpAsyncScanData + 0x510);
            *data_pointer = 0;
            *(uint32_t *)(allocation + 0x514) = *(uint32_t *)(allocation + 0x514) & 0x1f | 0x1000;
            *(uint64_t **)(allocation + 0x518) = data_pointer_2;
            *(uint32_t *)(allocation + 0x514) = 0x1000;
            if (data_pointer_2)
            {
                for (; data_pointer_2 < (uint64_t *)(allocation + 0x510U); data_pointer_2 = &data_pointer_2[1])
                {
                    *data_pointer_2 = (uint64_t)data_pointer | 1;
                }
            }
            value_9 = 0;
        }
        else
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 10, WD_SYMBOL_ADDRESS(WPP_e14b9b336f94348117623c9565965302_Traceguids), (uint64_t)KeGetCurrentThread());
            }
            value_9 = -0x3fffff66;
        }
        block_1:
        if (value_13)
        {
            ZwClose();
        }

        if (value_9 <= -1)
        {
            MpAsyncScanShutdown();
        }
    }
    return;
}

void MpAsyncScanInitialize__finally_0(uint64_t input, void *input_2)
{
    if (((int64_t *)input_2)[0xb])
    {
        ZwClose();
    }
    if (0 <= ((int32_t *)input_2)[0x10])
    {
        return;
    }
    MpAsyncScanShutdown();
    return;
}

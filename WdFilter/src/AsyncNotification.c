#include "wdfilter.h"

int64_t ExAllocateFromPagedLookasideList(void *input)
{
    int64_t list_entry;
    *(int32_t *)((int64_t)input + 0x14) = *(int32_t *)((int64_t)input + 0x14) + 1;
    list_entry = ExpInterlockedPopEntrySList();
    if (!list_entry)
    {
        *(int32_t *)((int64_t)input + 0x18) = *(int32_t *)((int64_t)input + 0x18) + 1;
        list_entry = (*__guard_dispatch_icall_fptr)(((uint32_t *)input)[9], ((uint32_t *)input)[0xb], ((uint32_t *)input)[10]);
    }
    return list_entry;
}

uint64_t ExFreeToPagedLookasideList(void *input, uint64_t input_2)
{
    uint16_t value;
    uint64_t value_2;
    *(int32_t *)((int64_t)input + 0x1c) = *(int32_t *)((int64_t)input + 0x1c) + 1;
    value = ((uint16_t *)input)[8];
    if ((uint16_t)ExQueryDepthSList() < value)
    {
        value_2 = ExpInterlockedPushEntrySList(input, input_2);
        return value_2;
    }
    *(int32_t *)((int64_t)input + 0x20) = *(int32_t *)((int64_t)input + 0x20) + 1;
    switch (__guard_dispatch_icall_fptr)
    {
        case WD_GUARDDISPATCH_BRANCH_TARGET:
            value_2 = (*((WD_ROUTINE *)input)[7])(input_2);
            return value_2;
    }
}

uint64_t WPP_SF_(uint64_t input, uint16_t input_2, uint64_t input_3)
{
    uint64_t value;
    value = (*__guard_dispatch_icall_fptr)(input, 0x2b, input_3, input_2, 0);
    return value;
}

void RtlStringCbVPrintfExW(uint16_t *input, uint64_t input_2, uint64_t input_3, int64_t *input_4, uint64_t input_5, uint64_t input_6, uint64_t input_7)
{
    uint64_t value;
    int32_t value_2;
    int64_t value_3;
    uint64_t value_4;
    int64_t values[2];
    value = input_7;
    value_3 = 0x400;
    value_4 = input_6;
    if ((int32_t)RtlStringExValidateDestW(input, 0x400, 0x7fffffff, 0) < 0)
    {
        return;
    }
    value_2 = RtlStringExValidateSrcW(&value_4, NULL, 0x7fffffff, 0);
    if (0 <= value_2)
    {
        values[0] = 0;
        value_2 = RtlStringVPrintfWorkerW(input, 0x400, values, value_4, value);
        value_3 = 0x400 - values[0];
        if (value_2 <= -1)
        {
            goto block_1;
        }
    }
    else
    {
        *input = 0;
        block_1:
        if (value_2 != -0x7ffffffb)
        {
            return;
        }
    }
    if (input_4)
    {
        *input_4 = value_3 * 2;
    }
    return;
}

void WPP_SF_qidd(uint64_t input, uint16_t input_2, uint64_t input_3, uint64_t input_4)
{
    uint64_t value;
    value = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_5c114a40c3de3145ebb792b3b9433cba_Traceguids), input_2, &value, 8, &unrecovered_stack_argument_5, 8, &unrecovered_stack_argument_6, 4, &unrecovered_stack_argument_7, 4, 0);
    return;
}

void WPP_SF_SDP(uint64_t input, uint64_t input_2, uint64_t input_3, int16_t *input_4)
{
    int64_t index;
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
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_5c114a40c3de3145ebb792b3b9433cba_Traceguids), 0x2a, input_4, index, &unrecovered_stack_argument_5, 4, &unrecovered_stack_argument_6, 8, 0);
    return;
}

void MpAsyncpShutdownWorkerThreads(uint64_t input, uint64_t input_2, uint64_t input_3)
{
    int32_t value;
    uint32_t value_2;
    KeSetEvent(MpAsync + 0x30, 0, (uint64_t)input_3 & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
    value_2 = 0;
    value = KeWaitForSingleObject(*(uint64_t *)(MpAsync + 0x28), 0, 0, 0, 0);
    if (value <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xe, WD_SYMBOL_ADDRESS(WPP_5c114a40c3de3145ebb792b3b9433cba_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_2 & 0xffffffffULL) << 32 | (uint64_t)value & 0xffffffffULL);
    }
    return;
}

int32_t MpSendCopyHintTelemetry(void)
{
    uint16_t value;
    uint16_t *string;
    int32_t trace_argument_1;
    uint16_t *wide_text = NULL;
    int64_t value_2 = 0;
    int32_t value_3;
    int64_t value_4;
    uint32_t value_5;
    trace_argument_1 = MpGetProcessName(PsGetCurrentProcessId(), &wide_text);
    string = wide_text;
    if (0 <= trace_argument_1)
    {
        value = *wide_text;
        value_3 = value + 0x1a;
        trace_argument_1 = MpAsyncCreateNotification(&value_2, value_3);
        value_4 = value_2;
        if (0 <= trace_argument_1)
        {
            if (value)
            {
                memcpy_s((int64_t *)(value_2 + 0x18), &((char *)((uint64_t)value))[2], *(uint64_t **)(&string[4]), (char *)((uint64_t)value));
                value_5 = 0;
                *(uint16_t *)(value_4 + 0x18 + (uint64_t)(value >> 1) * 2) = 0;
                *(int32_t *)(value_4 + 8) = value_3;
                *(uint32_t *)(value_4 + 0x10) = 0x16;
                trace_argument_1 = MpAsyncSendNotification(value_4, value_3, 0, 0xffffffff, NULL);
                if (0 <= trace_argument_1)
                {
                    MpLogPrintfW(L"[Mini-filter] Copy hint telemetry notification (%ls) sent successfully.", value_4 + 0x18);
                }
                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x30, WD_SYMBOL_ADDRESS(WPP_5c114a40c3de3145ebb792b3b9433cba_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)trace_argument_1 & 0xffffffffULL);
                }
                goto block_1;
            }
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2f, WD_SYMBOL_ADDRESS(WPP_5c114a40c3de3145ebb792b3b9433cba_Traceguids), trace_argument_1);
        }
        value_4 = value_2;
    }
    else
    {
        value_4 = 0;
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && (value_4 = 0, *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2e, WD_SYMBOL_ADDRESS(WPP_5c114a40c3de3145ebb792b3b9433cba_Traceguids), trace_argument_1);
        }
    }
    block_1:
    if (string)
    {
        MpFreeString(string);
    }

    if (value_4)
    {
        MpAsyncDereferenceNotification(value_4);
    }
    return trace_argument_1;
}

void MpAsyncCreateNotification(int64_t *input, uint32_t input_2)
{
    uint64_t current_thread;
    int32_t trace_argument_1;
    WD_LAYOUT_9 *allocation;
    uint32_t value;
    uint64_t value_2;
    uint32_t value_3;
    if (input && 0x18 <= input_2)
    {
        *input = 0;
        allocation = (WD_LAYOUT_9 *)MpAllocatePoolWithTag(1, input_2 + 0x18, 0x6d61504d);
        if (allocation)
        {
            allocation->field_0x0 = 0xa3;
            allocation->field_0x4 = input_2 + 0x18;
            value = 0x10;
            allocation->field_0x2 = 2;
            allocation->field_0x8 = 0;
            allocation->field_0x10 = 0;
            value_2 = 0xffff;
            value_3 = 2;
            trace_argument_1 = FltRetrieveIoPriorityInfo(0, 0, (uint64_t)KeGetCurrentThread(), &value);
            if (trace_argument_1 < 0 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x21, WD_SYMBOL_ADDRESS(WPP_fa8e7b00178136a6e2a2b6da068185ef_Traceguids), trace_argument_1);
            }
            current_thread = (uint64_t)KeGetCurrentThread();
            ((uint32_t *)(&allocation->field_0x8))[1] = KeQueryPriorityThread(current_thread);
            *(uint32_t *)(&allocation->field_0x10) = WdLoadField(&value_2, 4, 4);
            *(uint32_t *)(&allocation->field_0x8) = value_3;
            *input = (int64_t)allocation->field_0x18;
            allocation->field_0x24 = 1;
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1b, WD_SYMBOL_ADDRESS(WPP_5c114a40c3de3145ebb792b3b9433cba_Traceguids), (uint64_t)KeGetCurrentThread());
        }
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1a, WD_SYMBOL_ADDRESS(WPP_5c114a40c3de3145ebb792b3b9433cba_Traceguids), (uint64_t)KeGetCurrentThread());
    }
    return;
}

int64_t *MpAsyncSendNotification(WD_LAYOUT_6 *input, uint32_t input_2, int32_t input_3, uint32_t input_4, void *input_5)
{
    int64_t *data_pointer;
    uint64_t value;
    int64_t async;
    bool enabled = 0;
    uint32_t *data_pointer_2;
    int64_t *list_entry;
    uint64_t *provider;
    int64_t value_2;
    int64_t *data_pointer_3 = NULL;
    int64_t *data_pointer_4;
    if (!input || !input_2)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1d, WD_SYMBOL_ADDRESS(WPP_5c114a40c3de3145ebb792b3b9433cba_Traceguids), (uint64_t)KeGetCurrentThread());
        }
        list_entry = (int64_t *)WD_STATUS_INVALID_PARAMETER;
        return list_entry;
    }
    if (!(*(int64_t *)(MpData + 0x1a0)) && !(*(int64_t *)(MpData + 0x1b0)))
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
        {
            list_entry = (int64_t *)0xc0000037;
            return list_entry;
        }
        if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2))
        {
            list_entry = (int64_t *)0xc0000037;
            return list_entry;
        }
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1e, WD_SYMBOL_ADDRESS(WPP_5c114a40c3de3145ebb792b3b9433cba_Traceguids), (uint64_t)KeGetCurrentThread(), (uint64_t)value & 0xffffffff00000000 | (uint64_t)0xc0000037 & 0xffffffff);
        list_entry = (int64_t *)0xc0000037;
        return list_entry;
    }
    if (input->field_0x10 <= 9)
    {
        WdUnresolvedAtomicBegin();
        data_pointer = (int64_t *)(MpData + 0x358);
        async = *data_pointer;
        *data_pointer = *data_pointer + 1;
        WdUnresolvedAtomicEnd();
        list_entry = (int64_t)(async + 1);
        input->field_0x0 = (int64_t)list_entry;
    }
    if (input_5)
    {
        WdAtomicAdd32((volatile int32_t *)((int32_t *)((int64_t)input_5 + 100)), 1);
    }
    async = MpAsync;
    value_2 = MpAsync + 0xc0;
    *(int32_t *)(MpAsync + 0xd4) = *(int32_t *)(MpAsync + 0xd4) + 1;
    list_entry = (uint32_t *)ExpInterlockedPopEntrySList(value_2);
    if (!list_entry)
    {
        *(int32_t *)(async + 0xd8) = *(int32_t *)(async + 0xd8) + 1;
        list_entry = (uint32_t *)(*__guard_dispatch_icall_fptr)(*(uint32_t *)(async + 0xe4), *(uint32_t *)(async + 0xec), *(uint32_t *)(async + 0xe8));
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
            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1f, WD_SYMBOL_ADDRESS(WPP_5c114a40c3de3145ebb792b3b9433cba_Traceguids), (uint64_t)KeGetCurrentThread());
            list_entry = (int64_t *)WD_STATUS_INSUFFICIENT_RESOURCES;
            return list_entry;
        }
    }
    data_pointer_2 = (uint32_t *)list_entry;
    ((WD_LAYOUT_6 **)list_entry)[4] = input;
    ((uint32_t *)list_entry)[10] = input_2;
    *(uint32_t *)list_entry = 0x18da08;
    ((uint32_t *)list_entry)[6] = input_4;
    data_pointer = &((int64_t *)list_entry)[1];
    ((int64_t **)list_entry)[2] = data_pointer;
    *data_pointer = (int64_t)data_pointer;
    ExAcquireFastMutex(MpAsync + 0x68);
    WdUnresolvedAtomicBegin();
    input->field_0xc = input->field_0xc + 1;
    async = MpAsync;
    WdUnresolvedAtomicEnd();
    if (*(uint32_t *)(MpAsync + 0xa0) < WdDataStorage6)
    {
        if (input_3)
        {
            list_entry = (int64_t)(MpAsync + 8);
        }
        else
        {
            list_entry = (int64_t)(MpAsync + 0x18);
        }
        data_pointer_4 = ((int64_t **)list_entry)[1];
        if ((int64_t *)(*data_pointer_4) != list_entry)
        {
            (*(WD_ROUTINE)swi(0x29))(3);
        }
        *data_pointer = (int64_t)list_entry;
        *(int64_t **)(&data_pointer_2[4]) = data_pointer_4;
        *data_pointer_4 = (int64_t)data_pointer;
        ((int64_t **)list_entry)[1] = data_pointer;
        *(int32_t *)(MpAsync + 0xa0) = *(int32_t *)(async + 0xa0) + 1;
        enabled = 1;
        goto block_2;
    }
    list_entry = (int64_t *)(MpAsync + 0x18);
    if (input_3)
    {
        data_pointer_4 = (int64_t *)(*list_entry);
        if (data_pointer_4 != list_entry)
        {
            value_2 = *data_pointer_4;
            if ((int64_t *)data_pointer_4[1] != list_entry || *(int64_t **)(value_2 + 8) != data_pointer_4)
            {
                (*(WD_ROUTINE)swi(0x29))(3);
            }
            *list_entry = value_2;
            *(int64_t **)(value_2 + 8) = list_entry;
            list_entry = (int64_t *)(async + 8);
            provider = *(uint64_t **)(async + 0x10);
            if ((int64_t *)(*provider) != list_entry)
            {
                (*(WD_ROUTINE)swi(0x29))(3);
            }
        }
        else
        {
            list_entry = (int64_t *)(MpAsync + 8);
            data_pointer_4 = (int64_t *)(*list_entry);
            value_2 = *data_pointer_4;
            if ((int64_t *)data_pointer_4[1] != list_entry || *(int64_t **)(value_2 + 8) != data_pointer_4)
            {
                (*(WD_ROUTINE)swi(0x29))(3);
            }
            *list_entry = value_2;
            *(int64_t **)(value_2 + 8) = list_entry;
            provider = *(uint64_t **)(async + 0x10);
            if ((int64_t *)(*provider) != list_entry)
            {
                (*(WD_ROUTINE)swi(0x29))(3);
            }
        }
        block_1:
        *data_pointer = (int64_t)list_entry;

        *(uint64_t **)(&data_pointer_2[4]) = provider;
        *provider = data_pointer;
        list_entry[1] = (int64_t)data_pointer;
        data_pointer_3 = data_pointer_4;
    }
    else
    {
        data_pointer_4 = (int64_t *)(*list_entry);
        if (data_pointer_4 != list_entry)
        {
            value_2 = *data_pointer_4;
            if ((int64_t *)data_pointer_4[1] != list_entry || (int64_t *)(*(int64_t *)(value_2 + 8)) != data_pointer_4)
            {
                (*(WD_ROUTINE)swi(0x29))(3);
            }
            *list_entry = value_2;
            *(int64_t **)(value_2 + 8) = list_entry;
            provider = *(uint64_t **)(async + 0x20);
            if ((int64_t *)(*provider) != list_entry)
            {
                (*(WD_ROUTINE)swi(0x29))(3);
            }
            goto block_1;
        }
    }
    WdAtomicAdd32((volatile int32_t *)((int32_t *)(async + 0x150)), 1);
    block_2:
    async = MpAsync;

    *(int64_t *)(MpAsync + 0x148) = *(int64_t *)(MpAsync + 0x148) + (uint64_t)input_2;
    ExReleaseFastMutex(async + 0x68);
    if (enabled)
    {
        KeReleaseSemaphore(MpAsync + 0x48, 0, 1, 0);
    }
    if (!data_pointer_3)
    {
        list_entry = NULL;
        return list_entry;
    }
    if (data_pointer_3[3])
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
        {
            provider = (uint64_t *)data_pointer_3[3];
            WPP_SF_qidd(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x21, provider, (uint64_t)KeGetCurrentThread(), *provider, *(uint32_t *)(&provider[2]), *(uint32_t *)(MpAsync + 0x150));
        }
        ExAcquireFastMutex(MpAsync + 0x68);
        async = MpAsync;
        *(int64_t *)(MpAsync + 0x148) = *(int64_t *)(MpAsync + 0x148) - (uint64_t)(*(uint32_t *)(data_pointer_3[3] + 8));
        ExReleaseFastMutex(async + 0x68);
        MpAsyncDereferenceNotification((WD_LAYOUT_5 *)data_pointer_3[3]);
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x22, WD_SYMBOL_ADDRESS(WPP_5c114a40c3de3145ebb792b3b9433cba_Traceguids), (uint64_t)KeGetCurrentThread());
    }
    *(uint32_t *)(&data_pointer_3[-1]) = 0xbabafafa;
    ExFreeToPagedLookasideList((void *)(MpAsync + 0xc0), &data_pointer_3[-1]);
    list_entry = NULL;
    return list_entry;
}

void MpAsyncDereferenceNotification(WD_LAYOUT_5 *input)
{
    int32_t *atomic_value;
    int32_t value;
    if (input)
    {
        atomic_value = &input->field_0xc;
        value = WdAtomicAdd32((volatile int32_t *)atomic_value, -1);
        if (value == 1)
        {
            ExFreePoolWithTag(&input[-2].field_0x0[8], 0x6d61504d);
            return;
        }
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
    {
        WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1c, WD_SYMBOL_ADDRESS(WPP_5c114a40c3de3145ebb792b3b9433cba_Traceguids), (uint64_t)KeGetCurrentThread());
    }
    return;
}

void MpAsyncpWorkerThread(void)
{
    int32_t *atomic_value;
    int64_t value;
    int64_t value_2;
    uint32_t value_3 = 0xffffffff;
    int64_t value_4;
    uint64_t *data_pointer;
    int64_t *data_pointer_2;
    uint64_t *data_pointer_3;
    uint64_t value_5;
    uint64_t value_6;
    uint16_t value_7;
    uint64_t value_8;
    uint64_t value_9;
    uint64_t value_10 = 0;
    uint32_t value_11;
    int64_t value_12;
    uint32_t value_14;
    uint32_t value_15;
    int64_t async;
    int32_t value_16;
    uint64_t value_17;
    int64_t *data_pointer_4;
    value = MpAsync + 0x30;
    value_9 = value_8 & 0xffffffffffffff00;
    value_12 = MpAsync + 0x48;
    value_6 = value_5 & 0xffffffffffffff00;
    value_17 = KeWaitForMultipleObjects(2, &value, 1, 0, value_6, value_9, 0, 0);
    value_16 = (int32_t)value_17;
    while (true)
    {
        if (!value_16)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x13, WD_SYMBOL_ADDRESS(WPP_5c114a40c3de3145ebb792b3b9433cba_Traceguids), (uint64_t)KeGetCurrentThread());
            }
            PsTerminateSystemThread(0);
            return;
        }
        value_11 = (uint32_t)((uint64_t)value_10 >> 0x20);
        if (0 <= value_16)
        {
            ExAcquireFastMutex(MpAsync + 0x68);
            WdUnresolvedAtomicBegin();
            if (WdDataStorage7 != WdAsyncnotificationStorage29)
            {
                value_16 = WdAsyncnotificationStorage29;
            }
            else
            {
                WdAsyncnotificationStorage29 = 0;
                value_16 = WdDataStorage7;
            }
            WdUnresolvedAtomicEnd();
            if (WdDataStorage7 != value_16)
            {
                data_pointer_2 = *(int64_t **)(MpAsync + 8);
                data_pointer_4 = (int64_t *)(MpAsync + 8);
                if (data_pointer_2 == data_pointer_4)
                {
                    data_pointer_2 = *(int64_t **)(MpAsync + 0x18);
                    data_pointer_4 = (int64_t *)(MpAsync + 0x18);
                    if (data_pointer_2 != data_pointer_4)
                    {
                        if ((int64_t *)data_pointer_2[1] != data_pointer_4 || (async = *data_pointer_2, *(int64_t **)(async + 8) != data_pointer_2))
                        {
                            (*(WD_ROUTINE)swi(0x29))(3);
                        }
                        *data_pointer_4 = async;
                        *(int64_t **)(async + 8) = data_pointer_4;
                        WdUnresolvedAtomicBegin();
                        WdAsyncnotificationStorage29 = 0;
                        WdAsyncnotificationStorage29 = 0;
                        WdUnresolvedAtomicEnd();
                        goto block_3;
                    }
                    block_1:
                    ExReleaseFastMutex(MpAsync + 0x68);

                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        value_6 = (uint64_t)value_6 & 0xffffffff00000000 | (uint64_t)WD_STATUS_NOT_FOUND & 0xffffffff;
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x19, WD_SYMBOL_ADDRESS(WPP_5c114a40c3de3145ebb792b3b9433cba_Traceguids), (uint64_t)KeGetCurrentThread(), value_6);
                    }
                    goto block_6;
                }
                block_2:
                if ((int64_t *)data_pointer_2[1] != data_pointer_4 || (async = *data_pointer_2, *(int64_t **)(async + 8) != data_pointer_2))
                {
                    (*(WD_ROUTINE)swi(0x29))(3);
                }

                *data_pointer_4 = async;
                *(int64_t **)(async + 8) = data_pointer_4;
                WdUnresolvedAtomicBegin();
                WdAsyncnotificationStorage29 += 1;
                WdUnresolvedAtomicEnd();
            }
            else
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                {
                    value_6 = (uint64_t)value_6 & 0xffffffff00000000 | (uint64_t)WdDataStorage7 & 0xffffffff;
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x10, WD_SYMBOL_ADDRESS(WPP_5c114a40c3de3145ebb792b3b9433cba_Traceguids), (uint64_t)KeGetCurrentThread(), value_6);
                }
                data_pointer_2 = *(int64_t **)(MpAsync + 0x18);
                data_pointer_4 = (int64_t *)(MpAsync + 0x18);
                if (data_pointer_2 == data_pointer_4)
                {
                    data_pointer_2 = *(int64_t **)(MpAsync + 8);
                    data_pointer_4 = (int64_t *)(MpAsync + 8);
                    if (data_pointer_2 == data_pointer_4)
                    {
                        goto block_1;
                    }
                    goto block_2;
                }
                if ((int64_t *)data_pointer_2[1] != data_pointer_4 || (async = *data_pointer_2, *(int64_t **)(async + 8) != data_pointer_2))
                {
                    (*(WD_ROUTINE)swi(0x29))(3);
                }
                *data_pointer_4 = async;
                *(int64_t **)(async + 8) = data_pointer_4;
            }
            block_3:
            async = MpAsync;

            data_pointer = NULL;
            if (data_pointer_2)
            {
                data_pointer = (uint64_t *)(&data_pointer_2[-1]);
                *(int32_t *)(MpAsync + 0xa0) = *(int32_t *)(MpAsync + 0xa0) + -1;
                *(int64_t *)(async + 0x148) = *(int64_t *)(async + 0x148) - (uint64_t)(*(uint32_t *)(&data_pointer_2[4]));
            }
            ExReleaseFastMutex(MpAsync + 0x68);
            async = MpAsync;
            data_pointer_3 = NULL;
            if (data_pointer)
            {
                data_pointer_3 = (uint64_t *)data_pointer[4];
                value_4 = MpAsync + 0xc0;
                value_3 = *(uint32_t *)(&data_pointer[3]);
                *(uint32_t *)data_pointer = 0xbabafafa;
                *(int32_t *)(async + 0xdc) = *(int32_t *)(async + 0xdc) + 1;
                value_7 = *(uint16_t *)(async + 0xd0);
                if (value_7 <= (uint16_t)ExQueryDepthSList(value_4))
                {
                    *(int32_t *)(async + 0xe0) = *(int32_t *)(async + 0xe0) + 1;
                    (*__guard_dispatch_icall_fptr)(data_pointer);
                }
                else
                {
                    ExpInterlockedPushEntrySList(value_4, data_pointer);
                }
            }
            if (value_3 & 1)
            {
                value_2 = 0;
                if (((int32_t *)data_pointer_3)[-5])
                {
                    value_2 = (uint64_t)WdDataStorage8 * -10000;
                    data_pointer_4 = &value_2;
                    value_9 = 0;
                    value_6 = 0;
                    value_16 = FltSendMessage(*(uint64_t *)(MpData + 0x10), MpData + 0x1a0, &data_pointer_3[-3], ((int32_t *)data_pointer_3)[-5], 0, 0, data_pointer_4);
                    value_11 = (uint32_t)((uint64_t)data_pointer_4 >> 0x20);
                    if (0 <= value_16)
                    {
                        goto block_5;
                    }
                }
                else
                {
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x12, WD_SYMBOL_ADDRESS(WPP_5c114a40c3de3145ebb792b3b9433cba_Traceguids), (uint64_t)KeGetCurrentThread());
                    }
                    value_16 = -0x3ffffff3;
                }
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    value_6 = (uint64_t)value_6 & 0xffffffff00000000 | (uint64_t)value_16 & 0xffffffff;
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x15, WD_SYMBOL_ADDRESS(WPP_5c114a40c3de3145ebb792b3b9433cba_Traceguids), (uint64_t)KeGetCurrentThread(), value_6);
                }
                WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpAsync + 0x150)), 1);
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                {
                    value_6 = *data_pointer_3;
                    value_17 = ((uint64_t)value_11 & 0xffffffffULL) << 32 | (uint64_t)(*(uint32_t *)(MpAsync + 0x150)) & 0xffffffffULL;
                    value_9 = (uint64_t)value_9 & 0xffffffff00000000 | (uint64_t)(*(uint32_t *)(&data_pointer_3[2])) & 0xffffffff;
                    WPP_SF_qidd(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x16, *(uint32_t *)(MpAsync + 0x150), (uint64_t)KeGetCurrentThread(), value_6, value_9, value_17);
                    value_11 = (uint32_t)((uint64_t)value_17 >> 0x20);
                }
            }
            block_5:
            if (data_pointer_3)
            {
                value_14 = *(uint32_t *)(&data_pointer_3[2]);
                if (value_14 != 0x13 && (0x13 <= value_14 || !(0x40009U >> (value_14 & 0x1f) & 1)) && (value_14 != 2 || (*(int32_t *)(&data_pointer_3[3]) != 2 || (value_15 = *(uint32_t *)(&data_pointer_3[0x13]), !MpDlpShouldReportRename(value_15)))))
                {
                    block_4:
                    *(int64_t *)(MpAsync + 0x140) = *(int64_t *)(MpAsync + 0x140) + (uint64_t)((uint32_t *)data_pointer_3)[-5];
                }
                else
                {
                    if (*(int64_t *)(MpData + 0x1b0) && (value_3 & 2 && (value_16 = MpAsyncpSendMessage(&data_pointer_3[-3], ((uint32_t *)data_pointer_3)[-5]), value_16 <= -1)))
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            value_6 = (uint64_t)value_6 & 0xffffffff00000000 | (uint64_t)value_16 & 0xffffffff;
                            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x17, WD_SYMBOL_ADDRESS(WPP_5c114a40c3de3145ebb792b3b9433cba_Traceguids), (uint64_t)KeGetCurrentThread(), value_6);
                        }
                        WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpAsync + 0x150)), 1);
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                        {
                            value_6 = *data_pointer_3;
                            value_9 = (uint64_t)value_9 & 0xffffffff00000000 | (uint64_t)(*(uint32_t *)(&data_pointer_3[2])) & 0xffffffff;
                            WPP_SF_qidd(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x18, *(uint32_t *)(MpAsync + 0x150), (uint64_t)KeGetCurrentThread(), value_6, value_9, ((uint64_t)value_11 & 0xffffffffULL) << 32 | (uint64_t)(*(uint32_t *)(MpAsync + 0x150)) & 0xffffffffULL);
                            goto block_4;
                        }
                    }
                    *(int64_t *)(MpAsync + 0x140) = *(int64_t *)(MpAsync + 0x140) + (uint64_t)((uint32_t *)data_pointer_3)[-5];
                }
                atomic_value = &((int32_t *)data_pointer_3)[3];
                value_16 = WdAtomicAdd32((volatile int32_t *)atomic_value, -1);
                if (value_16 == 1)
                {
                    ExFreePoolWithTag(&data_pointer_3[-3], 0x6d61504d);
                }
            }
            else
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x11, WD_SYMBOL_ADDRESS(WPP_5c114a40c3de3145ebb792b3b9433cba_Traceguids), (uint64_t)KeGetCurrentThread());
                }
                *(int64_t *)(MpAsync + 0x140) = *(int64_t *)(MpAsync + 0x140) + (uint64_t)WdUnrecoveredStackStorage;
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                {
                    WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1c, WD_SYMBOL_ADDRESS(WPP_5c114a40c3de3145ebb792b3b9433cba_Traceguids), (uint64_t)KeGetCurrentThread());
                }
            }
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            value_6 = (uint64_t)value_6 & 0xffffffff00000000 | (uint64_t)((int32_t)value_17) & 0xffffffff;
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x14, WD_SYMBOL_ADDRESS(WPP_5c114a40c3de3145ebb792b3b9433cba_Traceguids), (uint64_t)KeGetCurrentThread(), value_6);
        }
        block_6:
        value_10 = 0;

        value_9 &= 0xffffffffffffff00;
        value_6 &= 0xffffffffffffff00;
        value_17 = KeWaitForMultipleObjects(2, &value, 1, 0, value_6, value_9, 0, 0);
        value_16 = (int32_t)value_17;
    }
}

void MpAsyncpSendMessage(int64_t input, int32_t input_2, uint64_t input_3)
{
    int64_t value;
    if (input && input_2)
    {
        value = (uint64_t)WdDataStorage8 * -10000;
        FltSendMessage(*(uint64_t *)(MpData + 0x10), input_3, input, input_2, 0, 0, &value);
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x12, WD_SYMBOL_ADDRESS(WPP_5c114a40c3de3145ebb792b3b9433cba_Traceguids), (uint64_t)KeGetCurrentThread());
    }
    return;
}

void MpLogPrintfW(int16_t *input, uint64_t input_2, uint64_t input_3, uint64_t input_4)
{
    int64_t value;
    uint64_t value_2;
    uint64_t value_3;
    uint64_t value_4;
    uint64_t *data_pointer;
    int64_t value_5;
    int32_t trace_argument_1;
    uint64_t *data_pointer_2;
    uint32_t event_id;
    uint64_t value_7;
    int64_t value_8;
    int64_t value_9;
    int32_t value_10;
    data_pointer = &value_7;
    value_9 = 0;
    value_5 = 0;
    value_8 = 0;
    value_7 = input_2;
    value_3 = input_3;
    value_4 = input_4;
    if (!input || !(*input))
    {
        return;
    }
    if (MpAsync)
    {
        data_pointer_2 = (uint64_t *)ExAllocateFromPagedLookasideList((void *)(MpAsync + 0x180));
        if (data_pointer_2)
        {
            trace_argument_1 = RtlStringCbVPrintfExW(data_pointer_2);
            if (0 <= trace_argument_1)
            {
                block_1:
                if ((uint64_t)(value_5 - 2U) <= 0x7fd)
                {
                    value = -value_5;
                    value_2 = value + 0x800;
                    value_10 = (int32_t)value_2 + 0x20;
                    trace_argument_1 = MpAsyncCreateNotification(&value_8, value_10);
                    value_9 = value_8;
                    if (0 <= trace_argument_1)
                    {
                        memcpy_s((int64_t *)(value_8 + 0x18), (char *)(value + 0x802), data_pointer_2, value_2);
                        event_id = 0;
                        *(uint16_t *)(value_9 + 0x18 + (value_2 & 0xfffffffffffffffe)) = 0;
                        *(int32_t *)(value_9 + 8) = value_10;
                        *(uint32_t *)(value_9 + 0x10) = 0xe;
                        trace_argument_1 = MpAsyncSendNotification(value_9, value_10, 0, 0xffffffff, NULL, input, data_pointer);
                        if (trace_argument_1 <= -1)
                        {
                            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                            {
                                goto block_2;
                            }
                            if (*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                            {
                                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x29, WD_SYMBOL_ADDRESS(WPP_5c114a40c3de3145ebb792b3b9433cba_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)event_id & 0xffffffffULL) << 32 | (uint64_t)trace_argument_1 & 0xffffffffULL);
                            }
                        }
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                        {
                            WPP_SF_SDP(*(uint64_t *)(WPP_GLOBAL_Control + 0x18));
                        }
                    }
                    else
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x28, WD_SYMBOL_ADDRESS(WPP_5c114a40c3de3145ebb792b3b9433cba_Traceguids), trace_argument_1);
                        }
                        value_9 = value_8;
                    }
                }

                block_2:
                if (value_9)
                {
                    MpAsyncDereferenceNotification(value_9);
                }
            }
            else
            {
                if (trace_argument_1 == -0x7ffffffb)
                {
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x27, WD_SYMBOL_ADDRESS(WPP_5c114a40c3de3145ebb792b3b9433cba_Traceguids));
                    }
                    goto block_1;
                }
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x26, WD_SYMBOL_ADDRESS(WPP_5c114a40c3de3145ebb792b3b9433cba_Traceguids), trace_argument_1);
                }
            }
            ExFreeToPagedLookasideList((void *)(MpAsync + 0x180), data_pointer_2);
            return;
        }
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return;
        }
        event_id = 0x25;
    }
    else
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return;
        }
        event_id = 0x24;
    }
    WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_5c114a40c3de3145ebb792b3b9433cba_Traceguids));
    return;
}

int32_t MpSendOpenWithoutReadNotification(void)
{
    uint16_t value;
    uint16_t *string;
    int32_t trace_argument_1;
    uint16_t *wide_text = NULL;
    int64_t value_2 = 0;
    int32_t value_3;
    int64_t value_4;
    uint32_t value_5;
    trace_argument_1 = MpGetProcessName(PsGetCurrentProcessId(), &wide_text);
    string = wide_text;
    if (0 <= trace_argument_1)
    {
        value = *wide_text;
        value_3 = value + 0x22;
        trace_argument_1 = MpAsyncCreateNotification(&value_2, value_3);
        value_4 = value_2;
        if (0 <= trace_argument_1)
        {
            *(int32_t *)(value_2 + 0x18) = *(int32_t *)(MpData + 0xcd0) + *(int32_t *)(MpData + 0xcc8);
            *(uint32_t *)(value_2 + 0x1c) = *(uint32_t *)(MpData + 0xccc);
            if (value)
            {
                memcpy_s((int64_t *)(value_2 + 0x20), &((char *)((uint64_t)value))[2], *(uint64_t **)(&string[4]), (char *)((uint64_t)value));
                *(uint16_t *)(value_4 + 0x20 + (uint64_t)(value >> 1) * 2) = 0;
            }
            else
            {
                *(uint16_t *)(value_2 + 0x20) = 0;
            }
            *(int32_t *)(value_4 + 8) = value_3;
            *(uint32_t *)(value_4 + 0x10) = 0x10;
            value_5 = 0;
            trace_argument_1 = MpAsyncSendNotification(value_4, value_3, 0, 0xffffffff, NULL);
            if (0 <= trace_argument_1)
            {
                MpLogPrintfW(L"[Mini-filter] OpenWithoutRead notification (%d, %d, %ls) sent successfully.", *(uint32_t *)(value_4 + 0x1c), *(uint32_t *)(value_4 + 0x18), value_4 + 0x20);
            }
            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2d, WD_SYMBOL_ADDRESS(WPP_5c114a40c3de3145ebb792b3b9433cba_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)trace_argument_1 & 0xffffffffULL);
            }
        }
        else
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2c, WD_SYMBOL_ADDRESS(WPP_5c114a40c3de3145ebb792b3b9433cba_Traceguids), trace_argument_1);
            }
            value_4 = value_2;
        }
    }
    else
    {
        value_4 = 0;
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && (value_4 = 0, *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2b, WD_SYMBOL_ADDRESS(WPP_5c114a40c3de3145ebb792b3b9433cba_Traceguids), trace_argument_1);
        }
    }
    if (string)
    {
        MpFreeString(string);
    }
    if (value_4)
    {
        MpAsyncDereferenceNotification(value_4);
    }
    return trace_argument_1;
}

void MpAsyncQueryStatistics(uint32_t *input, uint32_t *input_2, uint64_t *input_3, uint64_t *input_4)
{
    int64_t async;
    if (input && input_2 && input_3 && input_4)
    {
        ExAcquireFastMutex(MpAsync + 0x68);
        async = MpAsync;
        *input = *(uint32_t *)(MpAsync + 0xa0);
        *input_2 = *(uint32_t *)(async + 0x150);
        async = MpAsync;
        *input_3 = *(uint64_t *)(MpAsync + 0x148);
        *input_4 = *(uint64_t *)(async + 0x140);
        ExReleaseFastMutex(async + 0x68);
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x23, WD_SYMBOL_ADDRESS(WPP_5c114a40c3de3145ebb792b3b9433cba_Traceguids), (uint64_t)KeGetCurrentThread());
    }
    return;
}

void MpAsyncCleanupQueue(void)
{
    int64_t async;
    ExAcquireFastMutex(MpAsync + 0x68);
    MpAsyncpRemoveNotificationsUnsafe((int64_t *)(MpAsync + 8));
    MpAsyncpRemoveNotificationsUnsafe((int64_t *)(MpAsync + 0x18));
    async = MpAsync;
    *(uint32_t *)(MpAsync + 0xa0) = 0;
    *(uint64_t *)(async + 0x148) = 0;
    ExReleaseFastMutex(async + 0x68);
    return;
}

void MpAsyncShutdown(void)
{
    uint32_t *allocation;
    int64_t value;
    if (!MpAsync)
    {
        return;
    }
    if (*(int64_t *)(&MpAsync[10]))
    {
        MpAsyncpShutdownWorkerThreads();
        ObfDereferenceObject(*(uint64_t *)(&MpAsync[10]));
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
        *(uint64_t *)(&MpAsync[10]) = 0;
    }
    MpAsyncCleanupQueue();
    ExDeletePagedLookasideList(&MpAsync[0x30]);
    ExDeletePagedLookasideList(&MpAsync[0x60]);
    allocation = MpAsync;
    *MpAsync = 0xbabafafa;
    ExFreePoolWithTag(allocation, 0x6461504d);
    MpAsync = NULL;
    return;
}

void MpAsyncpRemoveNotificationsUnsafe(int64_t *input)
{
    int64_t *data_pointer;
    int64_t value;
    void *data_pointer_2;
    if (input)
    {
        while (data_pointer = (int64_t *)(*input), data_pointer != input)
        {
            if ((int64_t *)data_pointer[1] != input || (value = *data_pointer, (int64_t *)(*(int64_t *)(value + 8)) != data_pointer))
            {
                (*(WD_ROUTINE)swi(0x29))(3);
            }
            *input = value;
            *(int64_t **)(value + 8) = input;
            if ((WD_LAYOUT_5 *)data_pointer[3])
            {
                MpAsyncDereferenceNotification((WD_LAYOUT_5 *)data_pointer[3]);
            }
            WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpAsync + 0x150)), 1);
            data_pointer_2 = (void *)(MpAsync + 0xc0);
            *(uint32_t *)(&data_pointer[-1]) = 0xbabafafa;
            ExFreeToPagedLookasideList(data_pointer_2, &data_pointer[-1]);
        }
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xd, WD_SYMBOL_ADDRESS(WPP_5c114a40c3de3145ebb792b3b9433cba_Traceguids), (uint64_t)KeGetCurrentThread());
    }
    return;
}

bool MpAsyncSendNotification__filter_0(uint64_t *input)
{
    return *(int32_t *)(*input) == -0x3fffffb9;
}

void MpAsyncInitialize(void)
{
    int32_t value;
    uint64_t value_2;
    uint32_t value_3;
    uint64_t value_4;
    uint64_t value_5;
    uint64_t value_6;
    uint64_t value_7;
    uint64_t value_8;
    uint64_t value_9;
    uint64_t value_10;
    int32_t value_12;
    uint32_t *allocation;
    uint32_t *data_pointer;
    uint64_t value_13;
    uint64_t value_14;
    int64_t value_15;
    value_3 = (uint32_t)((uint64_t)value_2 >> 0x20);
    value_14 = 0;
    value_6 = 0;
    value_7 = 0;
    value_8 = 0;
    value_9 = 0;
    value_10 &= 0xffffffff00000000;
    value_15 = 0;
    allocation = (uint32_t *)MpAllocatePoolWithTag(ExDefaultNonPagedPoolType, (char *)0x200, 0x6461504d);
    MpAsync = allocation;
    if (allocation)
    {
        *allocation = 0x200da07;
        data_pointer = &allocation[2];
        *(uint32_t **)(&allocation[4]) = data_pointer;
        *(uint32_t **)data_pointer = data_pointer;
        data_pointer = &allocation[6];
        *(uint32_t **)(&allocation[8]) = data_pointer;
        *(uint32_t **)data_pointer = data_pointer;
        allocation[0x1a] = 1;
        *(uint64_t *)(&allocation[0x1c]) = 0;
        allocation[0x1e] = 0;
        KeInitializeEvent(&allocation[0x20], 1);
        KeInitializeEvent(&MpAsync[0xc], 0, 0);
        KeInitializeSemaphore(&MpAsync[0x12], 0, 0x7fffffff);
        value_5 = value_4 & 0xffffffffffff0000;
        value_13 = ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)0x6e61504d & 0xffffffffULL;
        ExInitializePagedLookasideList(&MpAsync[0x30], 0, 0, 0, 0x30, value_13, value_5);
        ExInitializePagedLookasideList(&MpAsync[0x60], 0, 0, 0, 0x800, (uint64_t)value_13 & 0xffffffff00000000 | (uint64_t)0x676c504d & 0xffffffff, value_5 & 0xffffffffffff0000);
        value_14 = ((uint64_t)WdLoadField(&value_14, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)0x30 & 0xffffffffULL;
        value_6 = 0;
        value_8 = ((uint64_t)WdLoadField(&value_8, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)0x200 & 0xffffffffULL;
        value_7 = 0;
        value_9 = 0;
        value_10 = 0;
        value_3 = 0;
        value_12 = PsCreateSystemThread(&value_15, 0, &value_14, 0, 0, MpAsyncpWorkerThread, 0);
        if (0 <= value_12)
        {
            allocation = &MpAsync[10];
            value_12 = MpReferenceObjectByHandle(value_15, 0x1fffff, *__imp_PsThreadType, 0, allocation);
            value_3 = (uint32_t)((uint64_t)allocation >> 0x20);
            value = 0;
            if (0 <= value_12)
            {
                goto block_1;
            }
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                goto block_2;
            }
            value_13 = 0xc;
        }
        else
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                goto block_2;
            }
            value_13 = 0xb;
        }
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_13, WD_SYMBOL_ADDRESS(WPP_5c114a40c3de3145ebb792b3b9433cba_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)value_12 & 0xffffffffULL);
    }
    else
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 10, WD_SYMBOL_ADDRESS(WPP_5c114a40c3de3145ebb792b3b9433cba_Traceguids), (uint64_t)KeGetCurrentThread());
        }
        value = -0x3fffff66;
        block_1:
        value_12 = value;
    }
    block_2:
    if (value_15)
    {
        ZwClose();
    }

    if (value_12 <= -1)
    {
        MpAsyncShutdown();
    }
    return;
}

void MpAsyncInitialize__finally_0(uint64_t input, void *input_2)
{
    if (((int64_t *)input_2)[9])
    {
        ZwClose();
    }
    if (0 <= ((int32_t *)input_2)[0x10])
    {
        return;
    }
    MpAsyncShutdown();
    return;
}

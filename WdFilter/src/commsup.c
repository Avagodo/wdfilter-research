#include "wdfilter.h"

int32_t RtlULongSub(uint32_t left, uint32_t right, uint32_t *result)
{
    if (left < right)
    {
        *result = UINT32_MAX;
        return (int32_t)WD_STATUS_INTEGER_OVERFLOW;
    }
    *result = left - right;
    return 0;
}

void McGenEventWrite_EtwWriteTransfer(uint64_t input, uint64_t input_2, uint64_t input_3, uint32_t input_4, uint64_t *input_5)
{
    uint16_t *wide_text;
    uint32_t value;
    uint32_t value_2;
    wide_text = WdAsyncnotificationStorage28;
    value_2 = 0;
    if (WdAsyncnotificationStorage28)
    {
        *input_5 = WdAsyncnotificationStorage28;
        value = 2;
        value_2 = *wide_text;
    }
    else
    {
        *input_5 = 0;
        value = value_2;
    }
    *(uint32_t *)(&input_5[1]) = value_2;
    ((uint32_t *)input_5)[3] = value;
    EtwWriteTransfer(Microsoft_Antimalware_AMFilter_Context, input_2, 0, 0, input_4, input_5);
    return;
}

void WPP_SF_DZ(uint64_t input, uint16_t input_2, uint64_t input_3, uint32_t input_4, int16_t *input_5)
{
    int16_t *wide_text;
    int16_t value;
    uint32_t values[2];
    uint64_t value_2;
    if (input_5)
    {
        value = *input_5;
        if (*input_5)
        {
            value_2 = *(uint64_t *)(&input_5[4]);
            goto block_1;
        }
    }
    else
    {
        value = 8;
    }
    value_2 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    block_1:
    wide_text = input_5;

    if (!input_5)
    {
        wide_text = &WdCleanupStorage;
    }
    values[0] = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, input_3, input_2, values, 4, wide_text, 2, value_2, (uint16_t)value, 0);
    return;
}

void McTemplateK0qzqqqz_EtwWriteTransfer(uint64_t input, uint64_t input_2, uint64_t input_3, uint32_t input_4)
{
    int64_t index;
    int16_t *wide_text;
    int32_t value;
    uint32_t value_2;
    char *bytes;
    uint64_t value_3;
    char *bytes_2;
    uint64_t value_4;
    char *bytes_3;
    uint64_t value_5;
    int16_t *wide_text_2;
    int64_t index_2;
    int32_t value_6;
    uint32_t value_7;
    uint32_t values[2];
    char buffer_2[16];
    int16_t *wide_text_3;
    int16_t *wide_text_4;
    uint32_t *data_pointer;
    uint64_t value_9;
    data_pointer = values;
    index = -1;
    value_9 = 4;
    value_6 = 10;
    if (wide_text_3)
    {
        index_2 = -1;
        do
        {
            index_2 += 1;
        }
        while (wide_text_3[index_2]);
        value = (int32_t)index_2 * 2 + 2;
    }
    else
    {
        value = value_6;
    }
    bytes = &unrecovered_stack_argument_6;
    value_2 = 0;
    bytes_2 = &unrecovered_stack_argument_7;
    value_3 = 4;
    wide_text = wide_text_3;
    if (!wide_text_3)
    {
        wide_text = &WdAsyncnotificationStorage3;
    }
    bytes_3 = &unrecovered_stack_argument_8;
    value_4 = 4;
    value_5 = 4;
    if (wide_text_4)
    {
        do
        {
            index += 1;
        }
        while (wide_text_4[index]);
        value_6 = (int32_t)index * 2 + 2;
    }
    wide_text_2 = wide_text_4;
    if (!wide_text_4)
    {
        wide_text_2 = &WdAsyncnotificationStorage3;
    }
    value_7 = 0;
    values[0] = input_4;
    McGenEventWrite_EtwWriteTransfer(wide_text_2, WD_SYMBOL_ADDRESS(AMFilter_TrustedProcessEvent), value_6, 7, buffer_2);
    return;
}

void WPP_SF_DDD(uint64_t input, uint16_t input_2, uint64_t input_3, uint32_t input_4)
{
    uint32_t values[2];
    values[0] = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, input_3, input_2, values, 4, &unrecovered_stack_argument_5, 4, &unrecovered_stack_argument_6, 4, 0);
    return;
}

void WPP_SF_DDDDDDDD(uint64_t input, uint64_t input_2, uint64_t input_3, uint32_t input_4)
{
    uint32_t values[2];
    values[0] = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), 0x69, values, 4, &unrecovered_stack_argument_5, 4, &unrecovered_stack_argument_6, 4, &unrecovered_stack_argument_7, 4, &unrecovered_stack_argument_8, 4, &unrecovered_stack_argument_9, 4, &unrecovered_stack_argument_10, 4, &unrecovered_stack_argument_11, 4, 0);
    return;
}

void WPP_SF_qDD(uint64_t trace_handle, uint16_t event_id, uint64_t provider,
                uint64_t object, uint32_t first_value, uint32_t second_value)
{
    pfnWppTraceMessage(trace_handle, 43, (const WD_GUID *)(uintptr_t)provider,
                      event_id, &object, sizeof(object), &first_value, sizeof(first_value),
                      &second_value, sizeof(second_value), (void *)0);
}

void WPP_SF_qLLLL(uint64_t input, uint16_t input_2, uint64_t input_3, uint64_t input_4)
{
    uint64_t value;
    value = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, input_3, input_2, &value, 8, &unrecovered_stack_argument_5, 4, &unrecovered_stack_argument_6, 4, &unrecovered_stack_argument_7, 4, &unrecovered_stack_argument_8, 4, 0);
    return;
}

void WPP_SF_qq(uint64_t input, uint16_t input_2, uint64_t input_3, uint64_t input_4, uint64_t input_5)
{
    uint64_t value;
    uint64_t value_2;
    value = input_5;
    value_2 = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, input_3, input_2, &value_2, 8, &value, 8, 0);
    return;
}

void WPP_SF_qqDD(uint64_t input, uint16_t input_2, uint64_t input_3, uint64_t input_4, uint64_t input_5)
{
    uint64_t value;
    uint64_t value_2;
    value = input_5;
    value_2 = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, input_3, input_2, &value_2, 8, &value, 8, &unrecovered_stack_argument_6, 4, &unrecovered_stack_argument_7, 4, 0);
    return;
}

void WPP_SF_qqqq(uint64_t input, uint16_t input_2, uint64_t input_3, uint64_t input_4, uint64_t input_5, uint64_t input_6, uint64_t input_7)
{
    uint64_t value;
    uint64_t value_2;
    uint64_t value_3;
    uint64_t value_4;
    value_3 = input_5;
    value_2 = input_6;
    value = input_7;
    value_4 = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), input_2, &value_4, 8, &value_3, 8, &value_2, 8, &value, 8, 0);
    return;
}

void MpGetFileIdAndUsnFromFileObject(uint64_t input, uint64_t input_2, uint64_t input_3, int64_t *input_4)
{
    int32_t value;
    int64_t *allocation = NULL;
    uint64_t value_2;
    int64_t value_3 = 0;
    uint64_t allocation_size;
    int64_t *allocation_2;
    *input_4 = 0;
    allocation_size = 0x440;
    value = MpGetInstanceFromFileObject(input, &value_3);
    if (0 <= value)
    {
        do
        {
            if (allocation)
            {
                ExFreePoolWithTag(allocation, 0x6165504d);
                allocation = NULL;
                allocation_2 = NULL;
                if (0x100000000 <= allocation_size * 2)
                {
                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                    {
                        goto block_2;
                    }
                    value_2 = 0x71;
                    value = -0x3fffff6b;
                    goto block_1;
                }
                allocation_size = allocation_size * 2 & 0xffffffff;
            }
            allocation = MpAllocatePoolWithTag(1, allocation_size, 0x6165504d);
            allocation_2 = allocation;
            if (!allocation)
            {
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    goto block_2;
                }
                value_2 = 0x72;
                value = -0x3fffff66;
                goto block_1;
            }
            value = FltFsControlFile(value_3, input, 0x900eb, 0, 0, allocation, (int32_t)allocation_size, 0);
            if (0 <= value)
            {
                *input_4 = allocation[3];
                goto block_2;
            }
        }
        while (value == -0x7ffffffb || value == -0x3fffffdd);
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            value_2 = 0x73;
            block_1:
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), (uint64_t)KeGetCurrentThread(), value);

            allocation_2 = allocation;
        }
        block_2:
        if (value_3)
        {
            FltObjectDereference();
        }

        if (allocation_2)
        {
            ExFreePoolWithTag(allocation_2, 0x6165504d);
        }
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x70, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), (uint64_t)KeGetCurrentThread(), value);
    }
    return;
}

void MpQueryEaFile(int64_t input, void *input_2, int32_t input_3)
{
    uint8_t byte_value;
    char buffer_2[267];
    int64_t values[2];
    uint32_t value;
    uint64_t value_2;
    uint64_t value_3;
    uint64_t value_4;
    uint32_t value_5;
    uint64_t value_6;
    uint16_t value_7;
    uint32_t *data_pointer;
    uint32_t value_8;
    uint32_t value_9;
    uint32_t value_10;
    uint32_t value_11;
    uint8_t byte_value_2;
    int64_t object;
    int32_t value_13;
    uint64_t *index;
    int64_t allocation;
    uint32_t value_14;
    uint64_t event_id;
    uint64_t value_15;
    value_8 = (uint32_t)((uint64_t)value_6 >> 0x20);
    memset(buffer_2, 0, (char *)0x103);
    byte_value = *(uint8_t *)(input + 0x20);
    value_15 = byte_value;
    allocation = 0;
    values[0] = 0;
    value_2 = 0x10c;
    if (byte_value)
    {
        if ((uint32_t)byte_value <= (uint32_t)(*(int32_t *)(input + 4) - 0x21U))
        {
            value = 0;
            byte_value_2 = byte_value;
            value_13 = RtlStringValidateDestW(buffer_2, 0x100, 0x7fffffff);
            if (0 <= value_13)
            {
                event_id = 0x100;
                value_13 = RtlStringCopyWorkerA(buffer_2, 0x100, NULL, input + 0x21, value_15);
                object = MpData;
                value_3 = value_15;
                if (0 <= value_13)
                {
                    KeEnterCriticalRegion();
                    ExAcquireResourceSharedLite(object + 0x2f0, (uint64_t)event_id & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
                    for (index = *(uint64_t **)((uint64_t *)(MpData + 0x238)); index != (uint64_t *)(MpData + 0x238); index = (uint64_t *)(*index))
                    {
                        if (*(uint64_t **)(input + 0x10) == &index[-7])
                        {
                            object = *(int64_t *)(input + 0x10);
                            if (*(int32_t *)(object + 0x58) != *(int32_t *)(input + 0x18))
                            {
                                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                {
                                    WPP_SF_qqDD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x42, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), (uint64_t)KeGetCurrentThread(), object, ((uint64_t)value_8 & 0xffffffffULL) << 32 | (uint64_t)(*(int32_t *)(object + 0x58)) & 0xffffffffULL, *(int32_t *)(input + 0x18));
                                }
                                ExReleaseResourceLite(MpData + 0x2f0);
                                KeLeaveCriticalRegion();
                                goto block_1;
                            }
                            ObfReferenceObject(*(uint64_t *)(object + 0x48));
                            WdUnresolvedAtomicBegin();
                            ObTotalReferences += 1;
                            WdUnresolvedAtomicEnd();
                            object = *(int64_t *)(object + 0x48);
                            ExReleaseResourceLite(MpData + 0x2f0);
                            KeLeaveCriticalRegion();
                            if (*(uint32_t *)(object + 0x50) & 0x4000)
                            {
                                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                                {
                                    WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 100, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), (uint64_t)KeGetCurrentThread());
                                }
                                ObfDereferenceObject(object);
                                allocation = ObTotalReferences;
                                WdUnresolvedAtomicBegin();
                                ObTotalReferences -= 1;
                                WdUnresolvedAtomicEnd();
                                if (0 <= allocation + -1 || 0 <= *(int32_t *)(MpData + 0x364))
                                {
                                    return;
                                }
                                if (!KdRefreshDebuggerNotPresent())
                                {
                                    (*(WD_ROUTINE)swi(3))();
                                    return;
                                }
                            }
                            else
                            {
                                value_13 = MpGetInstanceFromFileObject(object, values);
                                if (0 <= value_13)
                                {
                                    ((uint16_t *)input_2)[4] = 0;
                                    goto block_3;
                                }
                                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                {
                                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x65, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), (uint64_t)KeGetCurrentThread(), (uint64_t)value_15 & 0xffffffff00000000 | (uint64_t)value_13 & 0xffffffff);
                                }
                                ObfDereferenceObject(object);
                                allocation = ObTotalReferences;
                                WdUnresolvedAtomicBegin();
                                ObTotalReferences -= 1;
                                WdUnresolvedAtomicEnd();
                                if (0 <= allocation + -1 || 0 <= *(int32_t *)(MpData + 0x364))
                                {
                                    return;
                                }
                                if (!KdRefreshDebuggerNotPresent())
                                {
                                    (*(WD_ROUTINE)swi(3))();
                                    return;
                                }
                            }
                            KeBugCheck(1);
                        }
                    }

                    ExReleaseResourceLite(MpData + 0x2f0);
                    KeLeaveCriticalRegion();
                    block_1:
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 99, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), (uint64_t)KeGetCurrentThread());
                    }

                    return;
                }
            }
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x62, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), (uint64_t)KeGetCurrentThread(), (uint64_t)value_3 & 0xffffffff00000000 | (uint64_t)value_13 & 0xffffffff);
            }
            return;
        }
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return;
        }
        event_id = 0x61;
    }
    else
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return;
        }
        event_id = 0x60;
    }
    WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), (uint64_t)KeGetCurrentThread());
    return;
    block_3:
    do
    {
        if (allocation)
        {
            ExFreePoolWithTag(allocation, 0x6165504d);
            value_2 = (value_2 & 0xffffffff) * 2;
            if (value_2 <= 0xffffffff)
            {
                goto block_2;
            }
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                event_id = 0x66;
                value_4 = (uint64_t)value_15 & 0xffffffff00000000 | (uint64_t)WD_STATUS_INTEGER_OVERFLOW & 0xffffffff;
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), (uint64_t)KeGetCurrentThread(), value_4);
            }
            goto block_4;
        }
        block_2:
        allocation = (int64_t)MpAllocatePoolWithTag(1, value_2 & 0xffffffff, 0x6165504d);

        if (!allocation)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                event_id = 0x67;
                value_4 = (uint64_t)value_15 & 0xffffffff00000000 | (uint64_t)WD_STATUS_INSUFFICIENT_RESOURCES & 0xffffffff;
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), (uint64_t)KeGetCurrentThread(), value_4);
            }
            goto block_4;
        }
        data_pointer = &value;
        value_11 = 0;
        value_10 = (uint32_t)value_10 & 0xffffff00 | (uint32_t)1 & 0xff;
        value_9 = 0;
        value_15 = (uint64_t)value_15 & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
        value_13 = FltQueryEaFile(values[0], object, allocation, value_2 & 0xffffffff, value_15, data_pointer, 0x108, 0, value_10, 0);
        value_8 = (uint32_t)((uint64_t)data_pointer >> 0x20);
    }
    while (value_13 == -0x7ffffffb || value_13 == -0x3fffffdd);

    value_5 = (uint32_t)(value_15 >> 0x20);
    if (0 <= value_13)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            value_15 = ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)(input_3 - 10U) & 0xffffffffULL;
            WPP_SF_DD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x68, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), *(uint16_t *)(allocation + 6), value_15);
        }
        value_5 = (uint32_t)(value_15 >> 0x20);
        ((uint16_t *)input_2)[4] = *(uint16_t *)(allocation + 6);
        value_7 = *(uint16_t *)(allocation + 6);
        if (value_7 && (value_14 = value_7, value_14 <= (uint32_t)(input_3 - 10U)))
        {
            memmove((uint64_t *)((int64_t)input_2 + 10), (uint64_t *)(*(uint8_t *)(allocation + 5) + 9ULL + allocation), value_7);
            ((int32_t *)input_2)[1] = *(uint16_t *)(allocation + 6) + 10;
            if (9 <= *(uint16_t *)(allocation + 6) && (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4))
            {
                value_14 = ((uint8_t *)input_2)[0x10];
                WPP_SF_DDDDDDDD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), ((uint8_t *)input_2)[0x10], (uint8_t)((char *)input_2)[0xf], (uint8_t)((char *)input_2)[10], ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)((uint32_t)((uint8_t *)input_2)[0xb]) & 0xffffffffULL, ((uint64_t)value_8 & 0xffffffffULL) << 32 | (uint64_t)((uint32_t)((uint8_t *)input_2)[0xc]) & 0xffffffffULL, (uint8_t)((char *)input_2)[0xd], ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)((uint32_t)((uint8_t *)input_2)[0xe]) & 0xffffffffULL, (uint8_t)((char *)input_2)[0xf], ((uint64_t)value_11 & 0xffffffffULL) << 32 | (uint64_t)value_14 & 0xffffffffULL, (uint8_t)((char *)input_2)[0x11]);
            }
        }
    }
    else if (value_13 != -0x3fffffb1 && value_13 != -0x7fffffee && 2 <= value_13 + 0x3fffffafU)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x6b, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)value_13 & 0xffffffffULL);
        }
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
    {
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x6a, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)value_13 & 0xffffffffULL);
    }
    ExFreePoolWithTag(allocation, 0x6165504d);
    block_4:
    ObfDereferenceObject(object);

    allocation = ObTotalReferences;
    WdUnresolvedAtomicBegin();
    ObTotalReferences -= 1;
    WdUnresolvedAtomicEnd();
    if (allocation + -1 < 0 && *(int32_t *)(MpData + 0x364) <= -1)
    {
        if (!KdRefreshDebuggerNotPresent())
        {
            (*(WD_ROUTINE)swi(3))();
            return;
        }
        KeBugCheck(1);
    }
    if (values[0])
    {
        FltObjectDereference();
    }
    return;
}

void MpGetStreamContextFromFileObject(uint64_t file_object, uint64_t *stream_context)
{
    int32_t status;
    uint64_t value;
    int64_t instance;
    *stream_context = 0;
    instance = 0;
    status = MpGetInstanceFromFileObject(file_object, &instance);
    if (0 <= status)
    {
        status = FltGetStreamContext(instance, file_object, stream_context);
        if (0 <= status || WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4))
        {
            goto block_1;
        }
        value = 0x5b;
    }
    else
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            goto block_1;
        }
        value = 0x5a;
    }
    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), (uint64_t)KeGetCurrentThread(), status);
    block_1:
    if (instance)
    {
        FltObjectDereference();
    }

    return;
}

uint64_t MpQueryMotwAds(void *input, void *input_2)
{
    uint64_t *trace_argument_2;
    bool enabled;
    int64_t data;
    uint64_t value;
    uint64_t value_2;
    uint64_t *data_pointer;
    void *data_pointer_2;
    int64_t file_object;
    int64_t context;
    data = MpData;
    context = 0;
    file_object = 0;
    enabled = 0;
    data_pointer_2 = input_2;
    KeEnterCriticalRegion(input);
    ExAcquireResourceSharedLite(data + 0x2f0, (uint64_t)((uint64_t)data_pointer_2) & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
    data_pointer = *(uint64_t **)((uint64_t *)(MpData + 0x238));
    while (true)
    {
        if (data_pointer == (uint64_t *)(MpData + 0x238))
        {
            block_1:
            ExReleaseResourceLite(MpData + 0x2f0);

            KeLeaveCriticalRegion();
            if (enabled)
            {
                value = MpFileHasMotwAds(file_object, context);
                ((char *)input_2)[8] = (char)value;
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                {
                    WPP_SF_dZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x6f, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), value & 0xff, (int16_t *)(file_object + 0x58));
                }
                if (file_object)
                {
                    ObfDereferenceObject(file_object);
                    file_object = ObTotalReferences;
                    WdUnresolvedAtomicBegin();
                    ObTotalReferences -= 1;
                    WdUnresolvedAtomicEnd();
                    if (file_object + -1 < 0 && *(int32_t *)(MpData + 0x364) <= -1)
                    {
                        if (KdRefreshDebuggerNotPresent())
                        {
                            KeBugCheck(1);
                        }
                        value_2 = (*(WD_ROUTINE)swi(3))();
                        return value_2;
                    }
                }
                if (context)
                {
                    FltReleaseContext(context);
                }
                return 0;
            }
            block_2:
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x6e, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), (uint64_t)KeGetCurrentThread());
            }

            return 0xc0000008;
        }
        trace_argument_2 = ((uint64_t **)input)[2];
        if (trace_argument_2 == &data_pointer[-7])
        {
            if (*(int32_t *)(&trace_argument_2[0xb]) != ((int32_t *)input)[6])
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qqDD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x42, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), (uint64_t)KeGetCurrentThread(), trace_argument_2, *(int32_t *)(&trace_argument_2[0xb]), ((int32_t *)input)[6]);
                }
                ExReleaseResourceLite(MpData + 0x2f0);
                KeLeaveCriticalRegion();
                goto block_2;
            }
            ObfReferenceObject(trace_argument_2[9]);
            WdUnresolvedAtomicBegin();
            ObTotalReferences += 1;
            WdUnresolvedAtomicEnd();
            context = ((int64_t *)input)[2];
            enabled = 1;
            file_object = trace_argument_2[9];
            FltReferenceContext(context);
            goto block_1;
        }
        data_pointer = (uint64_t *)(*data_pointer);
    }
}

void MpQueryDosName(WD_LAYOUT_45 *input, WD_LAYOUT_109 *trace_argument_2, uint32_t input_2, uint32_t *input_3)
{
    uint16_t value;
    uint64_t *data_pointer;
    int64_t value_3;
    int32_t value_4;
    uint64_t object = 0;
    uint16_t *allocation = NULL;
    uint16_t value_5;
    uint16_t *allocation_2;
    if (0x210 <= input_2)
    {
        data_pointer = &object;
        value_4 = MpReferenceObjectByHandle(input->field_0x10, 0x80, *__imp_IoFileObjectType, (uint64_t)((uint64_t)input_3) & 0xffffffffffffff00 | (uint64_t)1 & 0xff, data_pointer);
        if (0 <= value_4)
        {
            value_4 = IoQueryFileDosDeviceName(object, &allocation);
            if (0 <= value_4)
            {
                value_5 = (int16_t)input_2 - 10;
                value = *allocation;
                allocation_2 = allocation;
                if (value <= value_5)
                {
                    value_5 = value;
                }
                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qqDD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x58, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), (uint64_t)KeGetCurrentThread(), trace_argument_2, input_2, value + 0xc);
                    allocation_2 = allocation;
                }
                trace_argument_2->field_0x0 = 0xa3;
                trace_argument_2->field_0x4 = value_5 + 10;
                trace_argument_2->field_0x8 = *allocation_2;
                if (value_5)
                {
                    memmove(trace_argument_2->field_0xa, *(uint64_t **)(&allocation_2[4]), value_5);
                }
                *input_3 = trace_argument_2->field_0x4;
                ExFreePoolWithTag(allocation_2, 0);
                ObfDereferenceObject(object);
                value_3 = ObTotalReferences;
                WdUnresolvedAtomicBegin();
                ObTotalReferences -= 1;
                WdUnresolvedAtomicEnd();
                if (value_3 + -1 <= -1 && *(int32_t *)(MpData + 0x364) <= -1)
                {
                    if (!KdRefreshDebuggerNotPresent())
                    {
                        (*(WD_ROUTINE)swi(3))();
                        return;
                    }
                    KeBugCheck(1);
                }
            }
            else
            {
                ObfDereferenceObject(object);
                value_3 = ObTotalReferences;
                WdUnresolvedAtomicBegin();
                ObTotalReferences -= 1;
                WdUnresolvedAtomicEnd();
                if (value_3 + -1 <= -1 && *(int32_t *)(MpData + 0x364) <= -1)
                {
                    if (!KdRefreshDebuggerNotPresent())
                    {
                        (*(WD_ROUTINE)swi(3))();
                        return;
                    }
                    KeBugCheck(1);
                }
                if (allocation)
                {
                    ExFreePoolWithTag(allocation, 0);
                }
            }
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x57, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), (uint64_t)KeGetCurrentThread(), (uint64_t)((uint64_t)data_pointer) & 0xffffffff00000000 | (uint64_t)value_4 & 0xffffffff);
        }
    }
    return;
}

void MpConnect(uint64_t input, uint64_t *trace_argument_1, uint32_t *input_2, uint64_t *input_3, int64_t *input_4)
{
    int64_t *data_pointer;
    uint8_t buffer[8];
    int32_t value;
    uint32_t *data_pointer_2;
    uint64_t *data;
    bool enabled;
    uint64_t *trace_argument_4;
    int32_t status;
    uint64_t *trace_argument_1_2;
    uint64_t *trace_argument_2;
    int64_t w_p_p__g_l_o_b_a_l__control;
    uint64_t *trace_argument_3;
    uint64_t event_id;
    int32_t value_3;
    data_pointer = input_4;
    value = -0x3fffffff;
    buffer[0] = 0;
    enabled = 0;
    trace_argument_3 = trace_argument_1;
    data_pointer_2 = input_2;
    trace_argument_1_2 = (uint64_t *)IoGetCurrentProcess();
    trace_argument_2 = (uint64_t *)PsGetCurrentProcessId();
    data = MpData;
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(&data[0x5e], (uint64_t)((uint64_t)trace_argument_3) & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
    value_3 = 0;
    if (input_2)
    {
        if (*input_2 && ((char *)input_2)[6] && *(int32_t *)(&MpData[0x1eb]) == 1 && !((char *)MpData)[0xf5c])
        {
            *(uint32_t *)(&MpData[0x1eb]) = 0;
            *(uint64_t *)(MpData[1] + 0x68) = MpData[0x1ea];
        }
        if (2 <= *input_2)
        {
            enabled = input_2[2] == 2;
        }
    }
    if (enabled)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            input_3 = trace_argument_1_2;
            WPP_SF_qq(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x15, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), trace_argument_1_2, trace_argument_2);
        }
        goto block_5;
    }
    if (MpData[0x1d] && MpData[0x1e])
    {
        block_1:
        data = (uint64_t *)MpData[0x1d];

        if (trace_argument_1_2 == data || (input_3 = (uint64_t *)MpData[0x1e], trace_argument_2 == input_3))
        {
            if (trace_argument_1 != &MpData[0x24])
            {
                if (trace_argument_1 != &MpData[0x28])
                {
                    if (trace_argument_1 != &MpData[0x2c])
                    {
                        if (trace_argument_1 != &MpData[0x30])
                        {
                            if (trace_argument_1 != &MpData[0x34])
                            {
                                value_3 = value;
                                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                {
                                    WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1e, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), trace_argument_1);
                                    input_3 = trace_argument_1;
                                }
                                goto block_6;
                            }
                            MpData[0x34] = input;
                            *data_pointer = (int64_t)(&MpData[0x34]);
                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                            {
                                event_id = 0x1d;
                                w_p_p__g_l_o_b_a_l__control = WPP_GLOBAL_Control;
                                WPP_SF_(*(uint64_t *)(w_p_p__g_l_o_b_a_l__control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids));
                            }
                        }
                        else
                        {
                            MpData[0x30] = input;
                            *data_pointer = (int64_t)(&MpData[0x30]);
                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                            {
                                event_id = 0x1c;
                                w_p_p__g_l_o_b_a_l__control = WPP_GLOBAL_Control;
                                WPP_SF_(*(uint64_t *)(w_p_p__g_l_o_b_a_l__control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids));
                            }
                        }
                    }
                    else
                    {
                        MpData[0x2c] = input;
                        *data_pointer = (int64_t)(&MpData[0x2c]);
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                        {
                            event_id = 0x1b;
                            w_p_p__g_l_o_b_a_l__control = WPP_GLOBAL_Control;
                            WPP_SF_(*(uint64_t *)(w_p_p__g_l_o_b_a_l__control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids));
                        }
                    }
                }
                else
                {
                    MpData[0x28] = input;
                    *data_pointer = (int64_t)(&MpData[0x28]);
                    *(uint32_t *)(&MpData[0x37]) = 0;
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                    {
                        event_id = 0x1a;
                        w_p_p__g_l_o_b_a_l__control = WPP_GLOBAL_Control;
                        WPP_SF_(*(uint64_t *)(w_p_p__g_l_o_b_a_l__control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids));
                    }
                }
            }
            else
            {
                MpData[0x24] = input;
                *data_pointer = (int64_t)(&MpData[0x24]);
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                {
                    event_id = 0x19;
                    w_p_p__g_l_o_b_a_l__control = WPP_GLOBAL_Control;
                    WPP_SF_(*(uint64_t *)(w_p_p__g_l_o_b_a_l__control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids));
                }
            }
            WdAtomicAdd32((volatile int32_t *)((int32_t *)(&MpData[0x1f])), 1);
            goto block_6;
        }
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            event_id = 0x18;
            trace_argument_3 = data;
            trace_argument_4 = input_3;
            block_2:
            input_3 = trace_argument_1_2;

            WPP_SF_qqqq(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, data, trace_argument_1_2, trace_argument_2, trace_argument_3, trace_argument_4);
        }
    }
    else
    {
        if (!(*(uint32_t *)(&MpData[0x6c]) & 8))
        {
            block_3:
            MpData[0x1d] = trace_argument_1_2;

            MpData[0x1e] = trace_argument_2;
            input_3 = trace_argument_1_2;
            MpSetProcessExempt(NULL, NULL, (uint64_t)((uint64_t)data_pointer_2) & 0xffffffffffffff00 | (uint64_t)1 & 0xff, trace_argument_1_2);
            goto block_1;
        }
        input_3 = NULL;
        data_pointer_2 = (uint32_t *)buffer;
        status = ZwQueryInformationProcess(0xffffffffffffffff, 0x3d, data_pointer_2, 1, 0);
        if (status <= -1)
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                goto block_5;
            }
            event_id = 0x16;
            block_4:
            data = MpData;

            trace_argument_3 = (uint64_t *)MpData[0x1d];
            trace_argument_4 = (uint64_t *)MpData[0x1e];
            goto block_2;
        }
        if (buffer[0] & 7 && (uint8_t)((buffer[0] >> 4) - 3) <= 4)
        {
            goto block_3;
        }
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            event_id = 0x17;
            goto block_4;
        }
    }
    block_5:
    value_3 = -0x3fffffde;

    block_6:
    ExReleaseResourceLite(&MpData[0x5e]);

    KeLeaveCriticalRegion();
    if (0 <= value_3)
    {
        ExAcquireFastMutex(MpRegData + 0xc0);
        if (!(*(uint32_t *)(&MpData[0x6c]) & 8) && *(int64_t *)(MpRegData + 0xf8))
        {
            CmUnRegisterCallback(*(uint64_t *)(MpRegData + 0xf8));
            *(uint64_t *)(MpRegData + 0xf8) = 0;
        }
        w_p_p__g_l_o_b_a_l__control = MpRegData;
        *(int32_t *)(MpRegData + 0x100) = *(int32_t *)(MpRegData + 0x100) + 1;
        ExReleaseFastMutex(w_p_p__g_l_o_b_a_l__control + 0xc0);
    }
    else
    {
        MpTraceLogServiceConnectFailure(value_3, trace_argument_1_2, trace_argument_2, (uint64_t)((uint64_t)input_3) & 0xffffffffffffff00 | (uint64_t)buffer[0] & 0xff);
    }
    return;
}

void MpDisconnect(int64_t *input, uint64_t event_id)
{
    int32_t *data_pointer;
    int32_t trace_argument_1;
    int64_t w_p_p__g_l_o_b_a_l__control;
    uint64_t string;
    uint64_t value;
    if (!(*input))
    {
        return;
    }
    if (input != (int64_t *)(MpData + 0x140))
    {
        w_p_p__g_l_o_b_a_l__control = WPP_GLOBAL_Control;
        if (input != (int64_t *)(MpData + 0x120))
        {
            if (input != (int64_t *)(MpData + 0x1a0))
            {
                if (input != (int64_t *)(MpData + 0x160))
                {
                    if (input == (int64_t *)(MpData + 0x180) && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                    {
                        event_id = 0x23;
                        WPP_SF_(*(uint64_t *)(w_p_p__g_l_o_b_a_l__control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids));
                    }
                }
                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                {
                    event_id = 0x22;
                    WPP_SF_(*(uint64_t *)(w_p_p__g_l_o_b_a_l__control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids));
                }
            }
            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                event_id = 0x21;
                WPP_SF_(*(uint64_t *)(w_p_p__g_l_o_b_a_l__control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids));
            }
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            event_id = 0x20;
            WPP_SF_(*(uint64_t *)(w_p_p__g_l_o_b_a_l__control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids));
        }
    }
    else
    {
        event_id = 0;
        MpSetMonitorFlags(0, 0x10);
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            event_id = 0x1f;
            w_p_p__g_l_o_b_a_l__control = WPP_GLOBAL_Control;
            WPP_SF_(*(uint64_t *)(w_p_p__g_l_o_b_a_l__control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids));
        }
    }
    WdUnresolvedAtomicBegin();
    data_pointer = (int32_t *)(MpData + 0xf8);
    trace_argument_1 = *data_pointer;
    *data_pointer = *data_pointer + -1;
    w_p_p__g_l_o_b_a_l__control = MpData;
    WdUnresolvedAtomicEnd();
    if (trace_argument_1 == 1)
    {
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(w_p_p__g_l_o_b_a_l__control + 0x2f0, (uint64_t)event_id & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
        MpSetProcessExempt(NULL, NULL, 0, *(int64_t *)(MpData + 0xe8));
        *(uint64_t *)(MpData + 0xe8) = 0;
        *(uint64_t *)(MpData + 0xf0) = 0;
        *(uint64_t *)(MpData + 0xfc0) = WdSharedTickCount;
        ExReleaseResourceLite(MpData + 0x2f0);
        KeLeaveCriticalRegion();
        if (*(int32_t *)(MpData + 0x364) <= -1 && *(int32_t *)(MpData + 0xf58) == 1 && !(*(char *)(MpData + 0xf5c)))
        {
            *(uint32_t *)(MpData + 0xf58) = 0;
            *(uint64_t *)(*(int64_t *)(MpData + 8) + 0x68) = *(uint64_t *)(MpData + 0xf50);
        }
        MpResetRunningProcessesHardeningExclusions();
    }
    if (input == (int64_t *)(MpData + 0x1a0))
    {
        MpAsyncCleanupQueue();
    }
    if (input == (int64_t *)(MpData + 0x160) && *(uint32_t *)(MpData + 0x360) & 4)
    {
        MpClearBoostControlList();
    }
    ExAcquireFastMutex(MpRegData + 0xc0);
    w_p_p__g_l_o_b_a_l__control = MpRegData;
    *(int32_t *)(MpRegData + 0x100) = *(int32_t *)(MpRegData + 0x100) + -1;
    if (!(*(int32_t *)(w_p_p__g_l_o_b_a_l__control + 0x100)) && !(*(int64_t *)(MpRegData + 0xf8)) && !(*(uint32_t *)(MpData + 0x360) & 8))
    {
        string = 0;
        value = 0;
        RtlInitUnicodeString(&string, L"328010");
        trace_argument_1 = CmRegisterCallbackEx(MpRegHardeningCallback, &string, *(uint64_t *)(MpData + 8), 0, MpRegData + 0xf8, 0);
        if (trace_argument_1 <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x24, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), trace_argument_1);
        }
    }
    ExReleaseFastMutex(MpRegData + 0xc0);
    FltCloseClientPort(*(uint64_t *)(MpData + 0x10), input);
    return;
}

void MpSetMonitorFlags(char input, uint64_t input_2)
{
    uint32_t value;
    int64_t data;
    uint64_t value_2;
    int32_t value_3;
    data = MpData;
    value_2 = input_2;
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(data + 0x2f0, (uint64_t)value_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
    value = *(uint32_t *)(MpData + 0x364);
    value_3 = (uint32_t)input_2;
    if (input != '\x01')
    {
        *(uint32_t *)(MpData + 0x364) = *(uint32_t *)(MpData + 0x364) & ~value_3;
    }
    else
    {
        *(uint32_t *)(MpData + 0x364) = *(uint32_t *)(MpData + 0x364) | value_3;
    }
    MpTraceLogRegLinkHardeningFlags(value >> 10 & 1, *(uint32_t *)(MpData + 0x364) >> 10 & 1);
    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
    {
        WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x55, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), *(uint32_t *)(MpData + 0x364));
    }
    ExReleaseResourceLite(MpData + 0x2f0);
    KeLeaveCriticalRegion();
    if (input && value_3 <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
    {
        WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x56, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids));
    }
    return;
}

uint64_t *MpQueryStatistics(void *input, uint64_t input_2)
{
    int64_t value;
    uint32_t value_2;
    uint32_t value_3;
    uint64_t *data_pointer;
    int64_t data;
    uint32_t *data_pointer_2;
    uint64_t value_4;
    uint64_t *index;
    int64_t value_5;
    int64_t value_6;
    int64_t value_7;
    int32_t *data_pointer_3;
    int64_t *data_pointer_4;
    uint32_t *data_pointer_5;
    uint32_t *data_pointer_6;
    uint64_t *data_pointer_7;
    uint32_t value_8;
    uint32_t value_9;
    data = MpData;
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(data + 0x2f0, (uint64_t)input_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
    ((uint32_t *)input)[2] = *(uint32_t *)(MpData + 0xdc);
    ((uint32_t *)input)[3] = *(uint32_t *)(MpData + 0xe0);
    ((uint32_t *)input)[0xc] = *(uint32_t *)(MpData + 0x364);
    data = MpData;
    value_4 = *(uint64_t *)(MpData + 0xb48);
    *(uint64_t *)((int64_t)input + 0x6c) = *(uint64_t *)(MpData + 0xb40);
    *(uint64_t *)((int64_t)input + 0x74) = value_4;
    value_4 = *(uint64_t *)(data + 0xb58);
    *(uint64_t *)((int64_t)input + 0x7c) = *(uint64_t *)(data + 0xb50);
    *(uint64_t *)((int64_t)input + 0x84) = value_4;
    ((uint32_t *)input)[0x23] = *(uint32_t *)(data + 0xb60);
    data = MpData;
    value_4 = *(uint64_t *)(MpData + 0xb6c);
    ((uint64_t *)input)[0x12] = *(uint64_t *)(MpData + 0xb64);
    ((uint64_t *)input)[0x13] = value_4;
    value_4 = *(uint64_t *)(data + 0xb7c);
    ((uint64_t *)input)[0x14] = *(uint64_t *)(data + 0xb74);
    ((uint64_t *)input)[0x15] = value_4;
    ((uint32_t *)input)[0x2c] = *(uint32_t *)(data + 0xb84);
    data = MpData;
    value_3 = *(uint32_t *)(MpData + 0xb8c);
    value_9 = *(uint32_t *)(MpData + 0xb90);
    value_2 = *(uint32_t *)(MpData + 0xb94);
    ((uint32_t *)input)[0x2d] = *(uint32_t *)(MpData + 0xb88);
    ((uint32_t *)input)[0x2e] = value_3;
    ((uint32_t *)input)[0x2f] = value_9;
    ((uint32_t *)input)[0x30] = value_2;
    value_3 = *(uint32_t *)(data + 0xb9c);
    value_9 = *(uint32_t *)(data + 0xba0);
    value_2 = *(uint32_t *)(data + 0xba4);
    ((uint32_t *)input)[0x31] = *(uint32_t *)(data + 0xb98);
    ((uint32_t *)input)[0x32] = value_3;
    ((uint32_t *)input)[0x33] = value_9;
    ((uint32_t *)input)[0x34] = value_2;
    ((uint32_t *)input)[0x35] = *(uint32_t *)(data + 0xba8);
    ExReleaseResourceLite(MpData + 0x2f0);
    KeLeaveCriticalRegion();
    FltAcquirePushLockShared(MpRegData + 8);
    value_3 = 0;
    if (*(uint32_t **)(MpRegData + 0x10))
    {
        value_3 = *(*(uint32_t **)(MpRegData + 0x10));
    }
    data = MpRegData + 8;
    ((uint32_t *)input)[4] = value_3;
    FltReleasePushLock(data);
    value_3 = WdAtomicExchange32((volatile int32_t *)((uint32_t *)(MpData + 0xbc0)), 0);
    ((uint32_t *)input)[0x16] = value_3;
    value_3 = WdAtomicExchange32((volatile int32_t *)((uint32_t *)(MpData + 0xbc8)), 0);
    ((uint32_t *)input)[0x18] = value_3;
    value_3 = WdAtomicExchange32((volatile int32_t *)((uint32_t *)(MpData + 0xbc4)), 0);
    ((uint32_t *)input)[0x17] = value_3;
    value_3 = WdAtomicExchange32((volatile int32_t *)((uint32_t *)(MpData + 0xbcc)), 0);
    ((uint32_t *)input)[0x19] = value_3;
    value_3 = WdAtomicExchange32((volatile int32_t *)((uint32_t *)(MpData + 0xbd0)), 0);
    ((uint32_t *)input)[0x1a] = value_3;
    value_4 = WdAtomicExchange64((volatile int64_t *)((uint64_t *)(MpData + 0xbb0)), 0);
    ((uint64_t *)input)[9] = value_4;
    value_8 = WdAtomicExchange32((volatile int32_t *)((uint32_t *)(MpData + 3000)), 0);
    ((uint32_t *)input)[0x14] = value_8;
    if (value_8)
    {
        data_pointer = (uint64_t)(((uint64_t *)input)[9] / value_8);
        if (0x80000000 <= data_pointer)
        {
            data_pointer = (uint64_t *)0x7fffffff;
        }
    }
    else
    {
        data_pointer = (uint64_t *)0xffffffff;
    }
    ((uint32_t *)input)[0x15] = value_3;
    index = &((uint64_t *)input)[0x1c];
    ((uint32_t *)input)[0x7e] = *(uint32_t *)(MpData + 0xe1c);
    value_6 = 8;
    ((uint64_t *)input)[0x40] = *(uint64_t *)(MpData + 0xe20);
    data = 0xdb4;
    data_pointer_2 = &((uint32_t *)input)[100];
    value_5 = 0x10;
    do
    {
        value = value_5 + 0x10;
        WdUnresolvedAtomicBegin();
        data_pointer_5 = (uint32_t *)(data + -0x48 + MpData);
        value_3 = *data_pointer_5;
        *data_pointer_5 = 0;
        WdUnresolvedAtomicEnd();
        data_pointer_2[-0x12] = value_3;
        value_3 = WdAtomicExchange32((volatile int32_t *)((uint32_t *)(data + MpData)), 0);
        *data_pointer_2 = value_3;
        value_7 = data + 4;
        data_pointer_5 = &data_pointer_2[1];
        WdUnresolvedAtomicBegin();
        data_pointer_6 = (uint32_t *)(data + -0x24 + MpData);
        value_3 = *data_pointer_6;
        *data_pointer_6 = 0;
        WdUnresolvedAtomicEnd();
        data_pointer_2[-9] = value_3;
        WdUnresolvedAtomicBegin();
        data_pointer_6 = (uint32_t *)(data + 0x24 + MpData);
        value_3 = *data_pointer_6;
        *data_pointer_6 = 0;
        WdUnresolvedAtomicEnd();
        data_pointer_2[9] = value_3;
        WdUnresolvedAtomicBegin();
        data_pointer_6 = (uint32_t *)(data + 0x48 + MpData);
        value_3 = *data_pointer_6;
        *data_pointer_6 = 0;
        WdUnresolvedAtomicEnd();
        data_pointer_2[0x12] = value_3;
        WdUnresolvedAtomicBegin();
        data_pointer_7 = (uint64_t *)(value_5 + 0xcd8 + MpData);
        value_4 = *data_pointer_7;
        *data_pointer_7 = 0;
        WdUnresolvedAtomicEnd();
        *index = value_4;
        index = &index[1];
        WdUnresolvedAtomicBegin();
        data_pointer_6 = (uint32_t *)(value_5 + 0xce0 + MpData);
        value_3 = *data_pointer_6;
        *data_pointer_6 = 0;
        WdUnresolvedAtomicEnd();
        data_pointer_2[-0x1b] = value_3;
        value_6 -= 1;
        data = value_7;
        data_pointer_2 = data_pointer_5;
        value_5 = value;
    }
    while (value_6);
    data_pointer_2 = &((uint32_t *)input)[6];
    MpAsyncQueryStatistics(&((uint32_t *)input)[5], data_pointer_2, &((uint64_t *)input)[5], &((uint64_t *)input)[4]);
    data_pointer_3 = &((int32_t *)input)[0xe];
    data_pointer_4 = &((int64_t *)input)[8];
    if (data_pointer_3 && data_pointer_4)
    {
        *data_pointer_4 = 0;
        *data_pointer_3 = 0;
        data = MpData;
        KeEnterCriticalRegion();
        value_4 = (uint64_t)((uint64_t)data_pointer_2) & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
        ExAcquireResourceSharedLite(data + 0x2f0, value_4);
        data_pointer = (uint64_t *)(MpData + 0x228);
        for (index = (uint64_t *)(*data_pointer); index != data_pointer; index = (uint64_t *)(*index))
        {
            *data_pointer_3 = *data_pointer_3 + 1;
            KeEnterCriticalRegion();
            value_4 = (uint64_t)value_4 & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
            ExAcquireResourceSharedLite(&index[0x23], value_4);
            data_pointer = (uint64_t)((uint32_t *)index)[-1];
            *data_pointer_4 = *data_pointer_4 + (int64_t)data_pointer;
            ExReleaseResourceLite(&index[0x23]);
            KeLeaveCriticalRegion();
            data_pointer = (uint64_t *)(MpData + 0x228);
        }

        ExReleaseResourceLite(MpData + 0x2f0);
        KeLeaveCriticalRegion();
    }
    data_pointer = NULL;
    return data_pointer;
}

void MpQueryName(void *input, WD_LAYOUT_110 *trace_argument_2, uint32_t input_2, uint32_t *input_3)
{
    WD_LAYOUT_102 *record;
    int64_t file_name;
    uint16_t value;
    uint64_t value_2;
    uint32_t value_3;
    uint16_t value_5;
    int32_t status;
    uint64_t event_id;
    uint64_t object;
    uint64_t instance;
    int64_t file_name_2;
    uint32_t name_options;
    value_3 = (uint32_t)((uint64_t)value_2 >> 0x20);
    object = 0;
    file_name_2 = 0;
    instance = 0;
    if (input_2 < 0x210)
    {
        return;
    }
    record = (WD_LAYOUT_102 *)((int64_t)input + 0x10);
    if (((int32_t *)input)[2] != 3)
    {
        name_options = 0x101;
        if (((char *)input)[0x20])
        {
            status = MpGetInstanceFromFileHandle(record->field_0x0, &object, &instance);
            if (status <= -1)
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x4d, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
                }
                return;
            }
        }
        else
        {
            if (!MpValidateAndReferenceStream(record, &object, NULL, 0))
            {
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    return;
                }
                event_id = 0x4e;
                WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), (uint64_t)KeGetCurrentThread());
                return;
            }
            status = MpGetInstanceFromFileObject(object, &instance);
            if (status <= -1)
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    event_id = 0x4f;
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
                }
                goto block_2;
            }
        }
        block_1:
        status = FltGetFileNameInformationUnsafe(object, instance, name_options, &file_name_2);

        if (0 <= status)
        {
            value = (int16_t)input_2 - 10;
            value_5 = *(uint16_t *)(file_name_2 + 8);
            file_name = file_name_2;
            if (value_5 <= value)
            {
                value = value_5;
            }
            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qqDD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x50, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), (uint64_t)KeGetCurrentThread(), trace_argument_2, input_2, value_5 + 0xc);
                file_name = file_name_2;
            }
            trace_argument_2->field_0x0 = 0xa3;
            trace_argument_2->field_0x4 = value + 10;
            trace_argument_2->field_0x8 = *(uint16_t *)(file_name + 8);
            if (value)
            {
                memmove(trace_argument_2->field_0xa, *(uint64_t **)(file_name + 0x10), value);
            }
            *input_3 = trace_argument_2->field_0x4;
            FltReleaseFileNameInformation(file_name);
            FltObjectDereference(instance);
            ObfDereferenceObject(object);
            file_name = ObTotalReferences;
            WdUnresolvedAtomicBegin();
            ObTotalReferences -= 1;
            WdUnresolvedAtomicEnd();
            if (file_name + -1 <= -1 && *(int32_t *)(MpData + 0x364) <= -1)
            {
                if (!KdRefreshDebuggerNotPresent())
                {
                    (*(WD_ROUTINE)swi(3))();
                    return;
                }
                KeBugCheck(1);
            }
            return;
        }
        FltObjectDereference(instance);
        ObfDereferenceObject(object);
        file_name = ObTotalReferences;
        WdUnresolvedAtomicBegin();
        ObTotalReferences -= 1;
        WdUnresolvedAtomicEnd();
    }
    else
    {
        name_options = 0x102;
        if (!MpValidateAndReferenceStream(record, &object, NULL, 0))
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return;
            }
            event_id = 0x4b;
            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), (uint64_t)KeGetCurrentThread());
            return;
        }
        status = MpGetInstanceFromFileObject(object, &instance);
        if (0 <= status)
        {
            goto block_1;
        }
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            event_id = 0x4c;
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
        }
        block_2:
        ObfDereferenceObject(object);

        file_name = ObTotalReferences;
        WdUnresolvedAtomicBegin();
        ObTotalReferences -= 1;
        WdUnresolvedAtomicEnd();
    }
    if (file_name + -1 <= -1 && *(int32_t *)(MpData + 0x364) <= -1)
    {
        if (!KdRefreshDebuggerNotPresent())
        {
            (*(WD_ROUTINE)swi(3))();
            return;
        }
        KeBugCheck(1);
    }
    return;
}

void MpDlpConnect(uint64_t input, uint64_t *trace_argument_1, uint32_t *input_2, uint64_t *input_3, int64_t *input_4)
{
    bool enabled;
    uint8_t buffer[8];
    int32_t value;
    uint32_t *data_pointer;
    uint64_t *data;
    uint64_t *trace_argument_4;
    int64_t *data_pointer_2;
    int32_t status;
    uint64_t *trace_argument_1_2;
    uint64_t *trace_argument_2;
    int64_t w_p_p__g_l_o_b_a_l__control;
    uint64_t *trace_argument_3;
    uint64_t event_id;
    data_pointer_2 = input_4;
    value = -0x3fffffff;
    buffer[0] = 0;
    trace_argument_3 = trace_argument_1;
    data_pointer = input_2;
    trace_argument_1_2 = (uint64_t *)IoGetCurrentProcess();
    trace_argument_2 = (uint64_t *)PsGetCurrentProcessId();
    data = MpData;
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(&data[0x5e], (uint64_t)((uint64_t)trace_argument_3) & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
    enabled = 0;
    if (input_2)
    {
        if (*input_2 && ((char *)input_2)[6] && *(int32_t *)(&MpData[0x1eb]) == 1 && !((char *)MpData)[0xf5c])
        {
            *(uint32_t *)(&MpData[0x1eb]) = 0;
            *(uint64_t *)(MpData[1] + 0x68) = MpData[0x1ea];
        }
        if (2 <= *input_2 && (enabled = 0, input_2[2] == 2))
        {
            enabled = 1;
        }
    }
    if (!enabled)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            input_3 = trace_argument_1_2;
            WPP_SF_qq(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x25, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), trace_argument_1_2, trace_argument_2);
        }
        goto block_5;
    }
    if (MpData[0x20] && MpData[0x21])
    {
        block_1:
        data = (uint64_t *)MpData[0x20];

        if (trace_argument_1_2 == data || (input_3 = (uint64_t *)MpData[0x21], trace_argument_2 == input_3))
        {
            if (trace_argument_1 != &MpData[0x26])
            {
                if (trace_argument_1 != &MpData[0x2a])
                {
                    if (trace_argument_1 != &MpData[0x2e])
                    {
                        if (trace_argument_1 != &MpData[0x32])
                        {
                            if (trace_argument_1 != &MpData[0x36])
                            {
                                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                {
                                    WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2e, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), trace_argument_1);
                                    input_3 = trace_argument_1;
                                }
                                goto block_6;
                            }
                            MpData[0x36] = input;
                            *data_pointer_2 = (int64_t)(&MpData[0x36]);
                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                            {
                                event_id = 0x2d;
                                w_p_p__g_l_o_b_a_l__control = WPP_GLOBAL_Control;
                                WPP_SF_(*(uint64_t *)(w_p_p__g_l_o_b_a_l__control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids));
                            }
                        }
                        else
                        {
                            MpData[0x32] = input;
                            *data_pointer_2 = (int64_t)(&MpData[0x32]);
                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                            {
                                event_id = 0x2c;
                                w_p_p__g_l_o_b_a_l__control = WPP_GLOBAL_Control;
                                WPP_SF_(*(uint64_t *)(w_p_p__g_l_o_b_a_l__control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids));
                            }
                        }
                    }
                    else
                    {
                        MpData[0x2e] = input;
                        *data_pointer_2 = (int64_t)(&MpData[0x2e]);
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                        {
                            event_id = 0x2b;
                            w_p_p__g_l_o_b_a_l__control = WPP_GLOBAL_Control;
                            WPP_SF_(*(uint64_t *)(w_p_p__g_l_o_b_a_l__control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids));
                        }
                    }
                }
                else
                {
                    MpData[0x2a] = input;
                    *data_pointer_2 = (int64_t)(&MpData[0x2a]);
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                    {
                        event_id = 0x2a;
                        w_p_p__g_l_o_b_a_l__control = WPP_GLOBAL_Control;
                        WPP_SF_(*(uint64_t *)(w_p_p__g_l_o_b_a_l__control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids));
                    }
                }
            }
            else
            {
                MpData[0x26] = input;
                *data_pointer_2 = (int64_t)(&MpData[0x26]);
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                {
                    event_id = 0x29;
                    w_p_p__g_l_o_b_a_l__control = WPP_GLOBAL_Control;
                    WPP_SF_(*(uint64_t *)(w_p_p__g_l_o_b_a_l__control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids));
                }
            }
            WdAtomicAdd32((volatile int32_t *)((int32_t *)(&MpData[0x22])), 1);
            value = 0;
            goto block_6;
        }
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            event_id = 0x28;
            trace_argument_3 = data;
            trace_argument_4 = input_3;
            block_2:
            input_3 = trace_argument_1_2;

            WPP_SF_qqqq(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, data, trace_argument_1_2, trace_argument_2, trace_argument_3, trace_argument_4);
        }
    }
    else
    {
        if (!(*(uint32_t *)(&MpData[0x6c]) & 8))
        {
            block_3:
            MpData[0x20] = trace_argument_1_2;

            MpData[0x21] = trace_argument_2;
            input_3 = trace_argument_1_2;
            MpSetProcessExempt(NULL, NULL, (uint64_t)((uint64_t)data_pointer) & 0xffffffffffffff00 | (uint64_t)1 & 0xff, trace_argument_1_2);
            goto block_1;
        }
        input_3 = NULL;
        data_pointer = (uint32_t *)buffer;
        status = ZwQueryInformationProcess(0xffffffffffffffff, 0x3d, data_pointer, 1, 0);
        if (status <= -1)
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                goto block_5;
            }
            event_id = 0x26;
            block_4:
            data = MpData;

            trace_argument_3 = (uint64_t *)MpData[0x20];
            trace_argument_4 = (uint64_t *)MpData[0x21];
            goto block_2;
        }
        if (buffer[0] & 7 && (uint8_t)((buffer[0] >> 4) - 3) <= 4)
        {
            goto block_3;
        }
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            event_id = 0x27;
            goto block_4;
        }
    }
    block_5:
    value = -0x3fffffde;

    block_6:
    ExReleaseResourceLite(&MpData[0x5e]);

    KeLeaveCriticalRegion();
    if (value <= -1)
    {
        MpTraceLogServiceConnectFailure(value, trace_argument_1_2, trace_argument_2, (uint64_t)((uint64_t)input_3) & 0xffffffffffffff00 | (uint64_t)buffer[0] & 0xff);
    }
    return;
}

void MpDlpDisconnect(int64_t *input, uint64_t event_id)
{
    int32_t *data_pointer;
    int32_t value;
    int64_t data;
    if (!(*input))
    {
        return;
    }
    if (input != (int64_t *)(MpData + 0x150))
    {
        if (input != (int64_t *)(MpData + 0x130))
        {
            if (input != (int64_t *)(MpData + 0x1b0))
            {
                if (input != (int64_t *)(MpData + 0x170))
                {
                    if (input != (int64_t *)(MpData + 400) || WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4))
                    {
                        goto block_1;
                    }
                    event_id = 0x33;
                }
                else
                {
                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4))
                    {
                        goto block_1;
                    }
                    event_id = 0x32;
                }
            }
            else
            {
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4))
                {
                    goto block_1;
                }
                event_id = 0x31;
            }
        }
        else
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4))
            {
                goto block_1;
            }
            event_id = 0x30;
        }
    }
    else
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4))
        {
            goto block_1;
        }
        event_id = 0x2f;
    }
    WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids));
    block_1:
    WdUnresolvedAtomicBegin();

    data_pointer = (int32_t *)(MpData + 0x110);
    value = *data_pointer;
    *data_pointer = *data_pointer + -1;
    data = MpData;
    WdUnresolvedAtomicEnd();
    if (value == 1)
    {
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(data + 0x2f0, (uint64_t)event_id & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
        MpSetProcessExempt(NULL, NULL, 0, *(int64_t *)(MpData + 0x100));
        *(uint64_t *)(MpData + 0x100) = 0;
        *(uint64_t *)(MpData + 0x108) = 0;
        ExReleaseResourceLite(MpData + 0x2f0);
        KeLeaveCriticalRegion();
    }
    FltCloseClientPort(*(uint64_t *)(MpData + 0x10), input);
    return;
}

void MpFreeCommPorts(void)
{
    if (*(int64_t *)(MpData + 0x198))
    {
        FltCloseCommunicationPort();
        *(uint64_t *)(MpData + 0x198) = 0;
    }
    if (*(int64_t *)(MpData + 0x138))
    {
        FltCloseCommunicationPort();
        *(uint64_t *)(MpData + 0x138) = 0;
    }
    if (*(int64_t *)(MpData + 0x158))
    {
        FltCloseCommunicationPort();
        *(uint64_t *)(MpData + 0x158) = 0;
    }
    if (*(int64_t *)(MpData + 0x178))
    {
        FltCloseCommunicationPort();
        *(uint64_t *)(MpData + 0x178) = 0;
    }
    if (*(int64_t *)(MpData + 0x118))
    {
        FltCloseCommunicationPort();
        *(uint64_t *)(MpData + 0x118) = 0;
    }
    if (*(int64_t *)(MpData + 0x1a8))
    {
        FltCloseCommunicationPort();
        *(uint64_t *)(MpData + 0x1a8) = 0;
    }
    if (*(int64_t *)(MpData + 0x148))
    {
        FltCloseCommunicationPort();
        *(uint64_t *)(MpData + 0x148) = 0;
    }
    if (*(int64_t *)(MpData + 0x168))
    {
        FltCloseCommunicationPort();
        *(uint64_t *)(MpData + 0x168) = 0;
    }
    if (*(int64_t *)(MpData + 0x188))
    {
        FltCloseCommunicationPort();
        *(uint64_t *)(MpData + 0x188) = 0;
    }
    if (!(*(int64_t *)(MpData + 0x128)))
    {
        return;
    }
    FltCloseCommunicationPort();
    *(uint64_t *)(MpData + 0x128) = 0;
    return;
}

void MpMessage(uint64_t input, int64_t input_2, uint32_t allocation_size, WD_LAYOUT_109 *trace_argument_2, uint32_t allocation_size_2, uint32_t *pool_type)
{
    int32_t *atomic_value;
    uint64_t *data_pointer;
    char byte_value;
    uint32_t value = 0;
    int32_t value_2;
    uint32_t trace_argument_1 = 0;
    int32_t trace_argument_1_2;
    uint8_t byte_value_2;
    uint32_t status;
    uint8_t *trace_argument_1_3;
    int64_t dlp_data;
    int64_t data;
    uint8_t trace_argument_1_4;
    int64_t *data_pointer_2;
    uint64_t event_id;
    int64_t *data_pointer_3;
    uint8_t **bytes;
    uint64_t trace_argument_1_5;
    void *data_pointer_4;
    uint32_t value_3;
    uint64_t *allocation;
    uint64_t *data_pointer_5;
    uint8_t *object = NULL;
    uint8_t *process_list;
    int64_t value_4;
    int64_t string;
    int32_t values[2];
    uint16_t *object_attributes;
    uint64_t allocation_2;
    uint64_t string_2;
    uint8_t *allocation_3 = NULL;
    uint8_t *process_context;
    uint64_t provider;
    uint32_t value_5;
    uint32_t value_6;
    uint32_t trace_argument_1_6;
    int64_t value_7;
    uint64_t value_8;
    int32_t value_9;
    uint16_t **wide_text;
    uint32_t value_10;
    uint32_t value_11;
    uint64_t value_12;
    uint8_t *event_id_2;
    uint64_t value_13;
    uint64_t value_14;
    uint64_t value_15;
    uint64_t *data_pointer_6;
    uint64_t value_16;
    int32_t value_17;
    int64_t *data_pointer_7;
    uint64_t value_18;
    uint64_t value_19;
    uint64_t value_20;
    *pool_type = 0;
    event_id_2 = object;
    value_4 = input_2;
    if (allocation_size < 0x10 || allocation_size_2 < 8)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x34, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), (uint64_t)KeGetCurrentThread());
        }
        goto block_17;
    }
    if (!input_2 || !trace_argument_2)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x35, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), (uint64_t)KeGetCurrentThread());
        }
        allocation_3 = object;
        goto block_17;
    }
    if (0x81 <= allocation_size)
    {
        allocation_3 = (uint8_t *)MpAllocatePoolWithQuotaTag(pool_type, allocation_size, 0x7266504d);
        trace_argument_1_6 = value_5;
    }
    else
    {
        allocation_3 = (uint8_t *)ExAllocateFromPagedLookasideList((void *)(MpData + 0x680));
        trace_argument_1_6 = value_6;
        if (allocation_3)
        {
            trace_argument_1_6 = memset(allocation_3, 0, allocation_size);
        }
    }
    process_list = allocation_3;
    if (!allocation_3)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x36, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), (uint64_t)KeGetCurrentThread());
        }
        goto block_16;
    }
    if (0x211 <= allocation_size_2)
    {
        trace_argument_1_3 = (uint8_t *)MpAllocatePoolWithQuotaTag(trace_argument_1_6, allocation_size_2, 0x7266504d);
        event_id_2 = trace_argument_1_3;
    }
    else
    {
        trace_argument_1_3 = (uint8_t *)ExAllocateFromPagedLookasideList((void *)(MpData + 0x700));
        event_id_2 = trace_argument_1_3;
        if (trace_argument_1_3)
        {
            memset(trace_argument_1_3, 0, allocation_size_2);
        }
    }
    if (!trace_argument_1_3)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x37, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), (uint64_t)KeGetCurrentThread());
        }
        goto block_16;
    }
    ProbeForRead(input_2, allocation_size, 1);
    ProbeForWrite(trace_argument_2, allocation_size_2, 1);
    memmove(allocation_3, input_2, allocation_size);
    value_10 = (uint32_t)((uint64_t)value_8 >> 0x20);
    trace_argument_1_6 = (uint32_t)((uint64_t)value_7 >> 0x20);
    if (*(int32_t *)(&allocation_3[8]) != 1 && *allocation_3 != 0xa3)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            trace_argument_1 = *allocation_3;
            WPP_SF_qdddd(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x39, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)trace_argument_1_6 & 0xffffffffULL) << 32 | (uint64_t)trace_argument_1 & 0xffffffffULL, ((uint64_t)value_10 & 0xffffffffULL) << 32 | (uint64_t)((uint32_t)allocation_3[1]) & 0xffffffffULL, 0xa3, 0);
        }
        goto block_16;
    }
    if (*(int32_t *)(&allocation_3[8]) != 1 && (status = allocation_3[1], allocation_3[1]) && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
    {
        value_8 = ((uint64_t)value_10 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL;
        status = *allocation_3;
        value_7 = ((uint64_t)trace_argument_1_6 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL;
        WPP_SF_qdddd(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x3a, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), (uint64_t)KeGetCurrentThread(), value_7, value_8, 0xa3, 0);
    }
    value_11 = (uint32_t)((uint64_t)value_8 >> 0x20);
    status = *(uint32_t *)(&allocation_3[8]);
    trace_argument_1_6 = (uint32_t)((uint64_t)value_7 >> 0x20);
    if (0x3e <= status - 1)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x3b, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)trace_argument_1_6 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
        }
        goto block_16;
    }
    value_3 = *(uint32_t *)(&allocation_3[4]);
    if (value_3 != allocation_size)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            event_id = 0x3c;
            block_1:
            WPP_SF_qDL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)trace_argument_1_6 & 0xffffffffULL) << 32 | (uint64_t)value_3 & 0xffffffffULL, ((uint64_t)value_11 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
        }
        goto block_16;
    }
    event_id = WD_SHARED_UNRECOVERED_ADDRESS;
    if (allocation_size < FunctionInputBufferLength[*(int32_t *)(&allocation_3[8])])
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            event_id = 0x3d;
            goto block_1;
        }
        goto block_16;
    }
    if (allocation_size_2 < FunctionMinimumOutputBufferLength[*(int32_t *)(&allocation_3[8])])
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qDL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x3e, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)trace_argument_1_6 & 0xffffffffULL) << 32 | (uint64_t)allocation_size_2 & 0xffffffffULL, ((uint64_t)value_11 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
        }
        goto block_16;
    }
    if (status == 3 || status == 6)
    {
        MpQueryName(allocation_3, trace_argument_2, allocation_size_2, pool_type);
        goto block_16;
    }
    if (status == 0xc)
    {
        MpQueryDosName(allocation_3, trace_argument_2, allocation_size_2, pool_type);
        goto block_16;
    }
    if (status == 0x18)
    {
        MpQueryRuntimeDrivers(allocation_3, event_id_2, trace_argument_2, allocation_size_2, pool_type);
        goto block_16;
    }
    event_id_2[0] = 0xa3;
    event_id_2[1] = 0;
    *(uint32_t *)(&event_id_2[4]) = (uint32_t)FunctionMinimumOutputBufferLength[*(int32_t *)(&allocation_3[8])];
    dlp_data = MpDlpData;
    data = MpData;
    value_10 = *(uint32_t *)(&allocation_3[8]);
    status = 0;
    value_3 = 0;
    switch (value_10)
    {
        case 1:
            event_id_2[8] = 0xa3;
            event_id_2[9] = 0;
            status = value;
            break;

        case 2:
            status = MpCreateSection(allocation_3, event_id_2);
            goto block_14;

        default:
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x49, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)trace_argument_1_6 & 0xffffffffULL) << 32 | (uint64_t)value_10 & 0xffffffffULL);
        }
            goto block_16;

        case 4:
            MpPurgeCache();
            status = value;
            break;

        case 5:
            status = MpQueryStatistics(event_id_2);
            goto block_14;

        case 7:
            data = *(int64_t *)(&allocation_3[0x18]);
            if (data != 0x80)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qiLL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x13, WD_SYMBOL_ADDRESS(WPP_5670a709eb3a322061319a849c30f9df_Traceguids), (uint64_t)KeGetCurrentThread(), data);
                value_7 = data;
            }
            block_2:
            trace_argument_1 = WD_STATUS_INVALID_PARAMETER;
        }
        else
        {
            value = *(uint32_t *)(&allocation_3[0x10]);
            if (value + 0x80ULL != (uint64_t)allocation_size)
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    value_7 = ((uint64_t)trace_argument_1_6 & 0xffffffffULL) << 32 | (uint64_t)(value + 0x80) & 0xffffffffULL;
                    WPP_SF_qDDL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x14, WD_SYMBOL_ADDRESS(WPP_5670a709eb3a322061319a849c30f9df_Traceguids), (uint64_t)KeGetCurrentThread(), value_7, ((uint64_t)value_11 & 0xffffffffULL) << 32 | (uint64_t)allocation_size & 0xffffffffULL, 0xc0000206);
                }
                block_3:
                trace_argument_1 = 0xc0000206;
            }
            else if (value & 1)
            {
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    goto block_3;
                }
                value_7 = ((uint64_t)trace_argument_1_6 & 0xffffffffULL) << 32 | (uint64_t)value & 0xffffffffULL;
                WPP_SF_qDL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x15, WD_SYMBOL_ADDRESS(WPP_5670a709eb3a322061319a849c30f9df_Traceguids), (uint64_t)KeGetCurrentThread(), value_7, ((uint64_t)value_11 & 0xffffffffULL) << 32 | (uint64_t)0xc0000206 & 0xffffffffULL);
                trace_argument_1 = 0xc0000206;
            }
            else
            {
                trace_argument_1 = 0;
                if (value && *(int16_t *)(&allocation_3[(uint64_t)(*(uint32_t *)(&allocation_3[0x10]) >> 1) * 2 + 0x7e]))
                {
                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                    {
                        goto block_2;
                    }
                    value_7 = ((uint64_t)trace_argument_1_6 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INVALID_PARAMETER & 0xffffffffULL;
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x16, WD_SYMBOL_ADDRESS(WPP_5670a709eb3a322061319a849c30f9df_Traceguids), (uint64_t)KeGetCurrentThread(), value_7);
                    trace_argument_1 = WD_STATUS_INVALID_PARAMETER;
                }
            }
        }
            trace_argument_1_6 = (uint32_t)((uint64_t)value_7 >> 0x20);
            if (0 <= (int32_t)trace_argument_1)
        {
            process_list = NULL;
            bytes = &process_list;
            trace_argument_1 = MpCreateProcessExclusionList(allocation_3, bytes);
            data = WdExcludeprocessStorage2;
            trace_argument_1_6 = (uint32_t)((uint64_t)value_7 >> 0x20);
            if (0 <= (int32_t)trace_argument_1)
            {
                KeEnterCriticalRegion();
                ExAcquireResourceExclusiveLite(data, (uint64_t)((uint64_t)bytes) & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
                data = WdExcludeprocessStorage2;
                allocation = *(uint64_t **)(WdExcludeprocessStorage2 + 0x68);
                *(uint8_t **)(WdExcludeprocessStorage2 + 0x68) = process_list;
                ExReleaseResourceLite(data);
                KeLeaveCriticalRegion();
                while (trace_argument_1_6 = (uint32_t)((uint64_t)value_7 >> 0x20), allocation)
                {
                    data_pointer_5 = (uint64_t *)(*allocation);
                    if (allocation[2])
                    {
                        ExFreePoolWithTag(allocation[2], 0x6e70504d);
                    }
                    ExFreePoolWithTag(allocation, 0x646e504d);
                    allocation = data_pointer_5;
                }

                process_list = NULL;
                trace_argument_1_2 = MpGetProcessContextList(&process_list, 0);
                if (0 <= trace_argument_1_2)
                {
                    object = process_list;
                    while (object)
                    {
                        trace_argument_1_3 = *(uint8_t **)object;
                        MpSetProcessExempt(*(void **)(&object[8]), ((int16_t **)(*(void **)(&object[8])))[0x10], 0, 0);
                        data_pointer_4 = *(void **)(&object[8]);
                        if (((uint32_t *)data_pointer_4)[0xe] & 0x20)
                        {
                            block_4:
                            MpSetTrustedProcess(data_pointer_4);
                        }
                        else
                        {
                            trace_argument_1 = ((uint32_t *)data_pointer_4)[0xd];
                            value = ((uint32_t *)data_pointer_4)[0xe] & 0x4000;
                            if (trace_argument_1 & 8 && value || trace_argument_1 & 1 && !value || trace_argument_1 & 0x18)
                            {
                                goto block_4;
                            }
                            MpSetUntrustedProcess(data_pointer_4);
                        }
                        if (*(void **)(&object[8]))
                        {
                            MpReleaseProcessContext(*(void **)(&object[8]));
                        }
                        ExFreeToPagedLookasideList((void *)(MpProcessTable + 0x100), &object[-8]);
                        object = trace_argument_1_3;
                    }
                }
                else
                {
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xd, WD_SYMBOL_ADDRESS(WPP_5670a709eb3a322061319a849c30f9df_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)trace_argument_1_6 & 0xffffffffULL) << 32 | (uint64_t)trace_argument_1_2 & 0xffffffffULL);
                    }
                    object = process_list;
                }
                if (object)
                {
                    while (object)
                    {
                        trace_argument_1_3 = *(uint8_t **)object;
                        if (*(void **)(&object[8]))
                        {
                            MpReleaseProcessContext(*(void **)(&object[8]));
                        }
                        ExFreeToPagedLookasideList((void *)(MpProcessTable + 0x100), &object[-8]);
                        object = trace_argument_1_3;
                    }
                }
                goto block_12;
            }
            status = trace_argument_1;
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                event_id = 0xc;
                goto block_5;
            }
        }
        else
        {
            status = trace_argument_1;
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                event_id = 0xb;
                block_5:
                provider = WD_SYMBOL_ADDRESS(WPP_5670a709eb3a322061319a849c30f9df_Traceguids);

                block_6:
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, provider, (uint64_t)KeGetCurrentThread(), ((uint64_t)trace_argument_1_6 & 0xffffffffULL) << 32 | (uint64_t)trace_argument_1 & 0xffffffffULL);

                status = trace_argument_1;
            }
        }
            break;

        case 8:
            trace_argument_1 = MpValidateVolumeExclusionUserData(allocation_size, allocation_3);
            if (0 <= (int32_t)trace_argument_1)
        {
            trace_argument_1 = MpApplyVolumeExclusions(*(uint32_t *)(&allocation_3[0x14]), *(uint32_t *)(&allocation_3[0x10]), &allocation_3[0x80]);
            if (0 <= (int32_t)trace_argument_1)
            {
                goto block_12;
            }
            status = trace_argument_1;
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                event_id = 0x19;
                provider = WD_SYMBOL_ADDRESS(WPP_10dc03dfe89c3068428b256958c5fc7a_Traceguids);
                goto block_6;
            }
        }
        else
        {
            status = trace_argument_1;
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                event_id = 0x18;
                provider = WD_SYMBOL_ADDRESS(WPP_10dc03dfe89c3068428b256958c5fc7a_Traceguids);
                goto block_6;
            }
        }
            break;

        case 9:
            event_id_2[8] = *(uint8_t *)(MpData + 0xd0);
            status = value;
            break;

        case 10:
            status = MpRegUpdateData(allocation_size, allocation_3);
            goto block_14;

        case 0xb:
            MpSetMonitorFlags(allocation_3[0x10], *(uint32_t *)(&allocation_3[0x14]));
            status = value;
            break;

        case 0xd:
            trace_argument_1 = *(uint32_t *)(&allocation_3[0x14]);
            value = *(uint32_t *)(&allocation_3[0x10]);
            if (30000 <= value && 60000 <= trace_argument_1)
        {
            KeEnterCriticalRegion();
            ExAcquireResourceExclusiveLite(data + 0x2f0, (uint64_t)event_id & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
            if (WdDataStorage == 30000)
            {
                *(uint32_t *)(MpData + 0x980) = value;
            }
            if (WdDataStorage2 == 60000)
            {
                *(uint32_t *)(MpData + 0x984) = trace_argument_1;
            }
            ExReleaseResourceLite(MpData + 0x2f0);
            KeLeaveCriticalRegion();
            status = 0;
        }
        else
        {
            block_7:
            status = WD_STATUS_INVALID_PARAMETER;
        }
            break;

        case 0xe:
            trace_argument_1_2 = *(int32_t *)(&allocation_3[0x10]);
            if (trace_argument_1_2 && 2 <= (uint32_t)(trace_argument_1_2 - 1U))
        {
            trace_argument_1_2 = 0;
        }
            *(int32_t *)(MpData + 0x988) = trace_argument_1_2;
            goto block_15;

        case 0xf:
            trace_argument_1 = allocation_3[0x10];
            *(uint32_t *)(MpData + 0x98c) = trace_argument_1;
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x3f, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), *(uint32_t *)(MpData + 0x98c));
        }
            goto block_15;

        case 0x10:
            *(uint8_t *)(MpData + 0x990) = allocation_3[0x10];
            goto block_15;

        case 0x11:
            value_4 = 0;
            trace_argument_1 = MpValidateDocOpenUserData(allocation_size, allocation_3);
            trace_argument_1_6 = (uint32_t)((uint64_t)value_7 >> 0x20);
            if (0 <= (int32_t)trace_argument_1)
        {
            data_pointer_3 = &value_4;
            trace_argument_1 = MpCreateDocOpenRules(allocation_3, data_pointer_3);
            data = MpBmDocOpenRules;
            trace_argument_1_6 = (uint32_t)((uint64_t)value_7 >> 0x20);
            if (0 <= (int32_t)trace_argument_1)
            {
                KeEnterCriticalRegion();
                ExAcquireResourceExclusiveLite(data + 0x10, (uint64_t)((uint64_t)data_pointer_3) & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
                data = MpBmDocOpenRules;
                allocation = *(uint64_t **)(MpBmDocOpenRules + 8);
                *(int64_t *)(MpBmDocOpenRules + 8) = value_4;
                value_4 = 0;
                ExReleaseResourceLite(data + 0x10);
                KeLeaveCriticalRegion();
                while (data_pointer_5 = allocation, data_pointer_5)
                {
                    allocation = (uint64_t *)(*data_pointer_5);
                    atomic_value = &((int32_t *)data_pointer_5)[-1];
                    trace_argument_1_2 = WdAtomicAdd32((volatile int32_t *)atomic_value, -1);
                    if (trace_argument_1_2 == 1)
                    {
                        if (data_pointer_5[0x43])
                        {
                            ExFreePoolWithTag(data_pointer_5[0x43], 0x6f64504d);
                        }
                        ExFreeToPagedLookasideList((void *)(MpBmDocOpenRules + 0x80), &data_pointer_5[-1]);
                    }
                }

                process_list = NULL;
                trace_argument_1_2 = MpGetProcessContextList(&process_list, 0);
                if (0 <= trace_argument_1_2)
                {
                    object = process_list;
                    while (object)
                    {
                        trace_argument_1_3 = *(uint8_t **)object;
                        process_list = trace_argument_1_3;
                        trace_argument_1_2 = MpSetProcessDocOpenRule(*(int64_t *)(&object[8]), *(int16_t **)(*(int64_t *)(&object[8]) + 0x80));
                        if (trace_argument_1_2 <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            value_7 = (uint64_t)value_7 & 0xffffffff00000000 | (uint64_t)trace_argument_1_2 & 0xffffffff;
                            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x25, WD_SYMBOL_ADDRESS(WPP_52d92c1823383785ccf1919561da03b4_Traceguids), (uint64_t)KeGetCurrentThread(), value_7);
                            trace_argument_1_3 = process_list;
                        }
                        if (*(void **)(&object[8]))
                        {
                            MpReleaseProcessContext(*(void **)(&object[8]));
                        }
                        ExFreeToPagedLookasideList((void *)(MpProcessTable + 0x100), &object[-8]);
                        object = trace_argument_1_3;
                    }
                }
                else
                {
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x24, WD_SYMBOL_ADDRESS(WPP_52d92c1823383785ccf1919561da03b4_Traceguids), (uint64_t)KeGetCurrentThread(), (uint64_t)value_7 & 0xffffffff00000000 | (uint64_t)trace_argument_1_2 & 0xffffffff);
                    }
                    object = process_list;
                }
                if (object)
                {
                    while (object)
                    {
                        trace_argument_1_3 = *(uint8_t **)object;
                        if (*(void **)(&object[8]))
                        {
                            MpReleaseProcessContext(*(void **)(&object[8]));
                        }
                        ExFreeToPagedLookasideList((void *)(MpProcessTable + 0x100), &object[-8]);
                        object = trace_argument_1_3;
                    }
                }
                goto block_12;
            }
            status = trace_argument_1;
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                event_id = 0xc;
                provider = WD_SYMBOL_ADDRESS(WPP_52d92c1823383785ccf1919561da03b4_Traceguids);
                goto block_6;
            }
        }
        else
        {
            status = trace_argument_1;
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                event_id = 0xb;
                provider = WD_SYMBOL_ADDRESS(WPP_52d92c1823383785ccf1919561da03b4_Traceguids);
                goto block_6;
            }
        }
            break;

        case 0x12:
            status = MpQueryEaFile(allocation_3, event_id_2, allocation_size_2);
            goto block_14;

        case 0x13:
            process_list = NULL;
            byte_value = MpValidateAndReferenceStream((WD_LAYOUT_102 *)(&allocation_3[0x10]), &process_list, NULL, 0);
            object = process_list;
            if (byte_value)
        {
            status = MpGetFileIdAndUsnFromFileObject(process_list);
            if ((int32_t)status <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x6d, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)trace_argument_1_6 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
                object = process_list;
            }
            if (object)
            {
                ObfDereferenceObject(object);
                WdUnresolvedAtomicBegin();
                dlp_data = ObTotalReferences + -1;
                WdUnresolvedAtomicEnd();
                data = ObTotalReferences + -1;
                ObTotalReferences = dlp_data;
                if (data <= -1 && (trace_argument_1_2 = *(int32_t *)(MpData + 0x364), trace_argument_1_2 <= -1))
                {
                    if (KdRefreshDebuggerNotPresent())
                    {
                        KeBugCheck(1);
                    }
                    (*(WD_ROUTINE)swi(3))();
                    return;
                }
            }
        }
        else
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x6c, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), (uint64_t)KeGetCurrentThread());
            }
            status = 0xc0000008;
        }
            break;

        case 0x14:
            status = MpQueryMotwAds(allocation_3, event_id_2);
            goto block_14;

        case 0x15:
            status = MpRegisterThreadBoost(allocation_3);
            goto block_14;

        case 0x16:
            KeEnterCriticalRegion();
            ExAcquireResourceExclusiveLite(data + 0x2f0, (uint64_t)event_id & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
            if (*(int32_t *)(MpData + 0x1bc))
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x41, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids));
            }
        }
        else
        {
            trace_argument_1_2 = *(int32_t *)(&allocation_3[0x10]);
            value_2 = 1;
            if (trace_argument_1_2 + -1)
            {
                value_2 = trace_argument_1_2 + -1;
            }
            value_9 = trace_argument_1_2 / 2;
            if (!(trace_argument_1_2 / 2))
            {
                value_9 = 1;
            }
            value_17 = trace_argument_1_2 / 5;
            if (!(trace_argument_1_2 / 5))
            {
                value_17 = 1;
            }
            KeInitializeSemaphore(MpData + 0x1c0, value_2, value_2);
            KeInitializeSemaphore(MpData + 0x1e0, value_9, value_9);
            KeInitializeSemaphore(MpData + 0x200, value_17, value_17);
            data = MpData;
            *(uint32_t *)(MpData + 0xf70) = 1;
            *(uint64_t *)(data + 0xf78) = 0;
            *(uint32_t *)(data + 0xf80) = 0;
            KeInitializeEvent(data + 0xf88, 1, 0);
            *(uint32_t *)(MpData + 0x1bc) = 1;
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                WPP_SF_ddd(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x40, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), values[0], ((uint64_t)trace_argument_1_6 & 0xffffffffULL) << 32 | (uint64_t)value_9 & 0xffffffffULL, ((uint64_t)value_11 & 0xffffffffULL) << 32 | (uint64_t)value_17 & 0xffffffffULL);
            }
        }
            ExReleaseResourceLite(MpData + 0x2f0);
            KeLeaveCriticalRegion();
            trace_argument_1_6 = *(uint32_t *)(&allocation_3[0x10]);
            *(uint32_t *)(MpData + 0x1b8) = trace_argument_1_6;
            status = value;
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
        {
            if (*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x42, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), trace_argument_1_6);
            }
        }
            break;

        case 0x17:
            *(uint32_t *)(&event_id_2[8]) = *(uint32_t *)(MpProcessTable + 0x1a4);
            *(uint32_t *)(&event_id_2[0xc]) = *(uint32_t *)(MpProcessTable + 0x1a8);
            if (Microsoft_Antimalware_AMFilterEnableBits & 8)
        {
            McTemplateK0qzqqqz_EtwWriteTransfer(MpProcessTable, WD_SHARED_UNRECOVERED_ADDRESS, value_10, 0, L"query", (uint64_t)value_11 << 0x20, *(uint32_t *)(MpProcessTable + 0x1a4), *(uint32_t *)(MpProcessTable + 0x1a8), 0);
        }
            goto block_15;

        case 0x19:
            status = MpSetProcessInfoFromRequest(allocation_3);
            goto block_14;

        case 0x1a:
            status = MpRegisterFriendlyProcess(*(uint64_t *)(&allocation_3[0x10]), *(uint32_t *)(&allocation_3[0x18]));
            goto block_14;

        case 0x1b:
            status = MpWriteBootSector(allocation_3);
            goto block_14;

        case 0x1c:
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x43, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), *(uint32_t *)(MpData + 0xcb8));
        }
            *(uint32_t *)(&event_id_2[8]) = *(uint32_t *)(MpData + 0xcb8);
            *(uint32_t *)(MpData + 0xcb8) = 0;
            status = value_3;
            goto block_15;

        case 0x1d:
            process_list = NULL;
            if (WdFolderguardStorage)
        {
            data = *(int64_t *)(&allocation_3[0x18]);
            if (data != 0x80)
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qiLL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xb, WD_SYMBOL_ADDRESS(WPP_44777a27dd283be4fccdb831528250f3_Traceguids), (uint64_t)KeGetCurrentThread(), data);
                    trace_argument_1_6 = (uint32_t)((uint64_t)data >> 0x20);
                }
                block_8:
                trace_argument_1 = WD_STATUS_INVALID_PARAMETER;
            }
            else
            {
                value = *(uint32_t *)(&allocation_3[0x10]);
                if (value + 0x80ULL != (uint64_t)allocation_size)
                {
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        event_id = ((uint64_t)trace_argument_1_6 & 0xffffffffULL) << 32 | (uint64_t)(value + 0x80) & 0xffffffffULL;
                        WPP_SF_qDDL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xc, WD_SYMBOL_ADDRESS(WPP_44777a27dd283be4fccdb831528250f3_Traceguids), (uint64_t)KeGetCurrentThread(), event_id, ((uint64_t)value_11 & 0xffffffffULL) << 32 | (uint64_t)allocation_size & 0xffffffffULL, 0xc0000206);
                        trace_argument_1_6 = (uint32_t)((uint64_t)event_id >> 0x20);
                    }
                    block_9:
                    trace_argument_1 = 0xc0000206;
                }
                else if (value & 1)
                {
                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                    {
                        goto block_9;
                    }
                    event_id = ((uint64_t)trace_argument_1_6 & 0xffffffffULL) << 32 | (uint64_t)value & 0xffffffffULL;
                    WPP_SF_qDL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xd, WD_SYMBOL_ADDRESS(WPP_44777a27dd283be4fccdb831528250f3_Traceguids), (uint64_t)KeGetCurrentThread(), event_id, ((uint64_t)value_11 & 0xffffffffULL) << 32 | (uint64_t)0xc0000206 & 0xffffffffULL);
                    trace_argument_1_6 = (uint32_t)((uint64_t)event_id >> 0x20);
                    trace_argument_1 = 0xc0000206;
                }
                else if (value && *(int16_t *)(&allocation_3[(uint64_t)(*(uint32_t *)(&allocation_3[0x10]) >> 1) * 2 + 0x7e]))
                {
                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                    {
                        goto block_8;
                    }
                    event_id = ((uint64_t)trace_argument_1_6 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INVALID_PARAMETER & 0xffffffffULL;
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xe, WD_SYMBOL_ADDRESS(WPP_44777a27dd283be4fccdb831528250f3_Traceguids), (uint64_t)KeGetCurrentThread(), event_id);
                    trace_argument_1_6 = (uint32_t)((uint64_t)event_id >> 0x20);
                    trace_argument_1 = WD_STATUS_INVALID_PARAMETER;
                }
            }
            if (0 <= (int32_t)trace_argument_1)
            {
                bytes = &process_list;
                trace_argument_1 = MpFgCreateProtectedFoldersTable(allocation_3, bytes);
                data = WdFolderguardStorage;
                if (0 <= (int32_t)trace_argument_1)
                {
                    KeEnterCriticalRegion();
                    event_id = (uint64_t)((uint64_t)bytes) & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
                    ExAcquireResourceExclusiveLite(data + 0x10, event_id);
                    dlp_data = WdFolderguardStorage;
                    data = *(int64_t *)(WdFolderguardStorage + 8);
                    *(uint8_t **)(WdFolderguardStorage + 8) = process_list;
                    ExReleaseResourceLite(dlp_data + 0x10);
                    KeLeaveCriticalRegion();
                    if (!data)
                    {
                        goto block_12;
                    }
                    dlp_data = RtlEnumerateGenericTableAvl(data, (uint64_t)event_id & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
                    while (dlp_data)
                    {
                        allocation_2 = *(uint64_t *)(dlp_data + 0x10);
                        RtlDeleteElementGenericTableAvl(data, dlp_data);
                        event_id = 0x6746504d;
                        ExFreePoolWithTag(allocation_2, 0x6746504d);
                        dlp_data = RtlEnumerateGenericTableAvl(data, (uint64_t)event_id & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
                    }

                    ExFreePoolWithTag(data, 0x7046504d);
                    status = 0;
                }
                else
                {
                    status = trace_argument_1;
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        event_id = 0x18;
                        provider = WD_SYMBOL_ADDRESS(WPP_44777a27dd283be4fccdb831528250f3_Traceguids);
                        goto block_6;
                    }
                }
            }
            else
            {
                status = trace_argument_1;
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    event_id = 0x17;
                    provider = WD_SYMBOL_ADDRESS(WPP_44777a27dd283be4fccdb831528250f3_Traceguids);
                    goto block_6;
                }
            }
        }
        else
        {
            status = WD_STATUS_NOT_SUPPORTED;
        }
            break;

        case 0x1e:
            if (WdFolderguardStorage)
        {
            trace_argument_1 = *(uint32_t *)(&allocation_3[0x10]);
            trace_argument_1_2 = *(int32_t *)(&allocation_3[0x14]);
            if (29000 < trace_argument_1 - 1000 || 0x23 <= (uint32_t)(trace_argument_1_2 - 6U))
            {
                goto block_7;
            }
            ExAcquireFastMutex(WdFolderguardStorage + 0x110);
            data = WdFolderguardStorage;
            *(int32_t *)(WdFolderguardStorage + 0xfc) = trace_argument_1_2;
            *(uint64_t *)(data + 0x100) = trace_argument_1 * -10000ULL;
            ExReleaseFastMutex(data + 0x110);
            status = 0;
        }
        else
        {
            status = WD_STATUS_NOT_SUPPORTED;
        }
            break;

        case 0x1f:
            if (*(uint32_t *)(&allocation_3[0x10]))
        {
            if (*(uint32_t *)(&allocation_3[0x10]) & 1)
            {
                trace_argument_1_5 = (uint32_t)(*(int32_t *)(&allocation_3[0x14]) * 10000);
                if (!(*(int32_t *)(&allocation_3[0x14]) * 10000) || 300000000 <= trace_argument_1_5)
                {
                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                    {
                        goto block_7;
                    }
                    WPP_SF_ii(*(uint64_t *)(WPP_GLOBAL_Control + 0x18));
                    status = WD_STATUS_INVALID_PARAMETER;
                    break;
                }
                WdUnresolvedAtomicBegin();
                *(uint64_t *)(MpData + 0xe20) = trace_argument_1_5;
                WdUnresolvedAtomicEnd();
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                {
                    WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x16, WD_SYMBOL_ADDRESS(WPP_08fcbcbc57df34e6eaa3c5bf09140d00_Traceguids), trace_argument_1_5);
                }
            }
            if (*(uint32_t *)(&allocation_3[0x10]) & 2)
            {
                trace_argument_1_2 = *(int32_t *)(&allocation_3[0x18]);
                if (trace_argument_1_2 && trace_argument_1_2 != 1)
                {
                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                    {
                        goto block_7;
                    }
                    WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x17, WD_SYMBOL_ADDRESS(WPP_08fcbcbc57df34e6eaa3c5bf09140d00_Traceguids), trace_argument_1_2);
                    status = WD_STATUS_INVALID_PARAMETER;
                }
                else
                {
                    WdUnresolvedAtomicBegin();
                    *(int32_t *)(MpData + 0xe1c) = trace_argument_1_2;
                    WdUnresolvedAtomicEnd();
                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4))
                    {
                        goto block_12;
                    }
                    WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x18, WD_SYMBOL_ADDRESS(WPP_08fcbcbc57df34e6eaa3c5bf09140d00_Traceguids), trace_argument_1_2);
                    status = 0;
                }
                break;
            }
        }
            goto block_12;

        case 0x20:
            trace_argument_1_6 = *(uint32_t *)(&allocation_3[0x10]);
            WdUnresolvedAtomicBegin();
            *(uint32_t *)(MpData + 0xf44) = trace_argument_1_6;
            WdUnresolvedAtomicEnd();
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xe, WD_SYMBOL_ADDRESS(WPP_296cf4eb32a13e34549309923deeee07_Traceguids), trace_argument_1_6);
            status = value_3;
        }
            goto block_15;

        case 0x21:
            trace_argument_1_4 = allocation_3[0x10];
            if (MpDlpData)
        {
            *(uint8_t *)(MpDlpData + 0x20) = trace_argument_1_4;
            if (trace_argument_1_4)
            {
                *(char *)(dlp_data + 0x10d) = 0;
            }
            MpDlpInitializeSystemFolders();
            status = 0;
        }
        else
        {
            status = 0xc00000e5;
        }
            break;

        case 0x22:
            if (*(int32_t *)(MpData + 0xf48) != *(int32_t *)(&allocation_3[0x10]) && 6 <= WdTracelogStorage8 && WdTracelogStorage10 & 0x400000000000 && (WdTracelogStorage11 & 0x400000000000) == WdTracelogStorage11)
        {
            string = 0x800;
            data_pointer_3 = &string;
            value_18 = 8;
            bytes = (uint8_t **)values;
            value_19 = 4;
            value_4 = ((uint64_t)WdLoadField(&value_4, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)(*(int32_t *)(&allocation_3[0x10])) & 0xffffffffULL;
            data_pointer_2 = &value_4;
            value_20 = 4;
            string_2 = ((uint64_t)WdAsyncnotificationStorage26 & 0xffffULL) << 32 | (uint64_t)0xb000000 & 0xffffffffULL;
            value_13 = 0x400000000000;
            object_attributes = WdTracelogStorage9;
            value_15 = ((uint64_t)2 & 0xffffffffULL) << 32 | (uint64_t)((uint32_t)(*WdTracelogStorage9)) & 0xffffffffULL;
            data_pointer_6 = &WdAsyncnotificationStorage27;
            value_16 = 0x10000005d;
            process_list = (uint8_t *)(((uint64_t)WdLoadField(&process_list, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)0x104f & 0xffffffffULL);
            values[0] = *(int32_t *)(MpData + 0xf48);
            EtwWriteTransfer(WdTracelogStorage12, &string_2, 0, 0, ((uint64_t)trace_argument_1_6 & 0xffffffffULL) << 32 | (uint64_t)5 & 0xffffffffULL, &object_attributes);
        }
            *(uint32_t *)(MpData + 0xf48) = *(uint32_t *)(&allocation_3[0x10]);
            status = value;
            break;

        case 0x23:
            trace_argument_1_2 = *(int32_t *)(&allocation_3[0x10]);
            *(int32_t *)(MpData + 0xf58) = trace_argument_1_2;
            status = value;
            if (!(*(char *)(MpData + 0xf5c)))
        {
            data = MpData;
            if (trace_argument_1_2 != 1)
            {
                goto block_10;
            }
            *(uint64_t *)(*(int64_t *)(MpData + 8) + 0x68) = 0;
        }
            break;

        case 0x24:
            trace_argument_1_4 = allocation_3[0x10];
            *(uint8_t *)(MpData + 0xf5c) = trace_argument_1_4;
            data = MpData;
            if (trace_argument_1_4 || *(int32_t *)(MpData + 0xf58) != 1)
        {
            block_10:
            *(uint64_t *)(*(int64_t *)(data + 8) + 0x68) = *(uint64_t *)(data + 0xf50);

            status = value;
        }
        else
        {
            *(uint64_t *)(*(int64_t *)(MpData + 8) + 0x68) = 0;
            status = value;
        }
            break;

        case 0x25:
            if (allocation_3 == (uint8_t *)0xfffffffffffffff0)
        {
            goto block_7;
        }
            trace_argument_1 = *(uint32_t *)(&allocation_3[0x14]);
            trace_argument_1_5 = trace_argument_1;
            if (trace_argument_1 && trace_argument_1 != 4)
        {
            if (allocation_3[0x28])
            {
                dlp_data = MpFileTimeToUlong64(*(uint64_t *)(&allocation_3[0x18]));
                data = MpProcessTable;
                KeEnterCriticalRegion();
                ExAcquireResourceSharedLite(data + 8, (uint64_t)event_id & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
                trace_argument_1 = (uint32_t)(trace_argument_1_5 >> 2);
                data_pointer_3 = (int64_t *)(*(int64_t *)(MpProcessTable + 0x180) + (trace_argument_1 & 0x7f) * 0x10ULL);
                data_pointer_2 = (int64_t *)(*data_pointer_3);
                if (data_pointer_2 != data_pointer_3)
                {
                    do
                    {
                        if (trace_argument_1_5 == data_pointer_2[2] && dlp_data == data_pointer_2[3])
                        {
                            WdAtomicAdd32((volatile int32_t *)((int32_t *)(&data_pointer_2[5])), 1);
                            process_context = (uint8_t *)(&data_pointer_2[-1]);
                            trace_argument_1_3 = object;
                            goto block_11;
                        }
                        data_pointer_2 = (int64_t *)(*data_pointer_2);
                    }
                    while (data_pointer_2 != (int64_t *)(*(int64_t *)(MpProcessTable + 0x180) + (trace_argument_1 & 0x7f) * 0x10ULL));
                }
                trace_argument_1_3 = (uint8_t *)WD_STATUS_NOT_FOUND;
                process_context = object;
                block_11:
                ExReleaseResourceLite(MpProcessTable + 8);

                KeLeaveCriticalRegion();
                status = (uint32_t)trace_argument_1_3;
                if (0 <= (int32_t)status)
                {
                    byte_value = MpClearProcessExclusionFlag(process_context);
                    MpReleaseProcessContext(process_context);
                    if (byte_value)
                    {
                        goto block_12;
                    }
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                    {
                        WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x28, WD_SYMBOL_ADDRESS(WPP_bb5feea3a6af3b7d5ba3909c2f9628a9_Traceguids));
                    }
                    status = WD_STATUS_UNSUCCESSFUL;
                }
                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                {
                    if (*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                    {
                        event_id = 0x27;
                        provider = WD_SYMBOL_ADDRESS(WPP_bb5feea3a6af3b7d5ba3909c2f9628a9_Traceguids);
                        WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, provider, trace_argument_1_3);
                        status = (uint32_t)trace_argument_1_3;
                    }
                }
                break;
            }
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                event_id = 0x26;
                WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_bb5feea3a6af3b7d5ba3909c2f9628a9_Traceguids), trace_argument_1_5);
            }
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            event_id = 0x25;
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_bb5feea3a6af3b7d5ba3909c2f9628a9_Traceguids), trace_argument_1_5);
        }
            block_12:
        status = 0;

            break;

        case 0x26:
            trace_argument_1_4 = allocation_3[0x10];
            *(uint8_t *)(MpData + 0xfa8) = trace_argument_1_4;
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            event_id = 0x44;
            data = WPP_GLOBAL_Control;
            WPP_SF_D(*(uint64_t *)(data + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), trace_argument_1_4);
            status = value_3;
        }
            goto block_15;

        case 0x27:
            status = MpDlpSetEnlightenedAppMarker(allocation_3, allocation_size);
            goto block_14;

        case 0x28:
            trace_argument_1_4 = allocation_3[0x10];
            *(uint8_t *)(MpData + 0xfb8) = trace_argument_1_4;
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            event_id = 0x45;
            data = WPP_GLOBAL_Control;
            WPP_SF_D(*(uint64_t *)(data + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), trace_argument_1_4);
            status = value_3;
        }
            goto block_15;

        case 0x29:
            MpResetRunningProcessesHardeningExclusions();
            status = value;
            break;

        case 0x2a:
            if (allocation_3[0x10] != 1 || !(*(int64_t *)(MpData + 0xb0)) || !(*(int64_t *)(MpData + 0xb8)))
        {
            *(char *)(MpData + 0xfc8) = 0;
        }
        else
        {
            *(char *)(MpData + 0xfc8) = 1;
        }
            event_id_2[8] = *(uint8_t *)(MpData + 0xfc8);
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            trace_argument_1_4 = *(uint8_t *)(MpData + 0xfc8);
            event_id = 0x46;
            data = WPP_GLOBAL_Control;
            WPP_SF_D(*(uint64_t *)(data + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), trace_argument_1_4);
            status = value_3;
        }
            goto block_15;

        case 0x2b:
            KeEnterCriticalRegion();
            ExAcquireResourceExclusiveLite(data + 0x2f0, (uint64_t)event_id & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
            data_pointer_3 = *(int64_t **)((int64_t *)(MpData + 0x228));
            if (data_pointer_3 != (int64_t *)(MpData + 0x228))
        {
            do
            {
                value_12 = (uint64_t)value_12 & 0xffffffff00000000 | (uint64_t)(*(uint32_t *)(&data_pointer_3[0xe])) & 0xffffffff;
                trace_argument_1 = *(uint16_t *)(&data_pointer_3[10]);
                value_8 = (uint64_t)value_8 & 0xffffffff00000000 | (uint64_t)trace_argument_1 & 0xffffffff;
                value_7 = (uint64_t)value_7 & 0xffffffff00000000 | (uint64_t)((uint32_t *)data_pointer_3)[0x13] & 0xffffffff;
                MpLogPrintfW(L"[MpLogFilterData] %wZ: Excluded: %d, System: %d, DeviceCharacteristic: 0x%x, VolumePropertiesFlags: 0x%x, FileSystemAttributes: 0x%x, StreamContextsCount: %u, FilesystemType: 0x%x, DeviceType: 0x%x, StorageDeviceAttributes: 0x%I64x, CloudVolume: %d", &data_pointer_3[2], *(uint32_t *)(&data_pointer_3[9]) >> 0x1f, *(uint32_t *)(&data_pointer_3[9]) & 1, value_7, value_8, ((uint32_t *)data_pointer_3)[0x15], ((uint32_t *)data_pointer_3)[-1], value_12, ((uint32_t *)data_pointer_3)[0x1d], data_pointer_3[0x37], *(char *)(&data_pointer_3[0x38]) != '\0');
                object = (uint8_t *)((uint64_t)((int32_t)object + 1));
                data_pointer_3 = (int64_t *)(*data_pointer_3);
            }
            while (data_pointer_3 != (int64_t *)(MpData + 0x228));
        }
            MpLogPrintfW(L"[MpLogFilterData] %u instances dumped.", object);
            data = MpData;
            block_13:
        ExReleaseResourceLite(data + 0x2f0);

            KeLeaveCriticalRegion();
            status = value;
            break;

        case 0x2c:
            if (MpDlpData)
        {
            *(uint8_t *)(MpDlpData + 0xf0) = allocation_3[0x10];
            status = 0;
        }
        else
        {
            status = 0xc00000e5;
        }
            break;

        case 0x2d:
            trace_argument_1_4 = allocation_3[0x10];
            if (MpDlpData)
        {
            *(uint8_t *)(MpDlpData + 0xf1) = trace_argument_1_4;
            if (trace_argument_1_4)
            {
                trace_argument_1_2 = MpDlpSetNetworkRedirectionInfo(0);
                if (0 <= trace_argument_1_2 || WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2))
                {
                    goto block_12;
                }
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x10, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)trace_argument_1_6 & 0xffffffffULL) << 32 | (uint64_t)trace_argument_1_2 & 0xffffffffULL);
                status = 0;
            }
            else
            {
                MpDlpDeleteNetworkRedirectionInfo();
                status = 0;
            }
        }
        else
        {
            status = 0xc00000e5;
        }
            break;

        case 0x2e:
            status = MpSetTrustedInstallerHardeningExcludeFlags(*(uint32_t *)(&allocation_3[0x10]));
            goto block_14;

        case 0x2f:
            *(bool *)(MpData + 0xfd0) = allocation_3[0x10] != 0;
            status = value_3;
            goto block_15;

        case 0x30:
            *(bool *)(MpData + 0xfd1) = allocation_3[0x10] != 0;
            status = value_3;
            goto block_15;

        case 0x31:
            status = MpSetEfsHardeningFlags(*(uint32_t *)(&allocation_3[0x10]));
            goto block_14;

        case 0x32:
            trace_argument_1_2 = *(int32_t *)(&allocation_3[0x10]);
            if (WdDataStorage23 != trace_argument_1_2 && 6 <= WdTracelogStorage8 && WdTracelogStorage10 & 0x400000000000 && (WdTracelogStorage11 & 0x400000000000) == WdTracelogStorage11)
        {
            string = 0x800;
            data_pointer_3 = &string;
            value_18 = 8;
            process_list = (uint8_t *)(((uint64_t)WdLoadField(&process_list, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)WdDataStorage23 & 0xffffffffULL);
            bytes = &process_list;
            value_19 = 4;
            value_4 = ((uint64_t)WdLoadField(&value_4, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)trace_argument_1_2 & 0xffffffffULL;
            data_pointer_2 = &value_4;
            value_20 = 4;
            string_2 = ((uint64_t)WdAsyncnotificationStorage8 & 0xffffULL) << 32 | (uint64_t)0xb000000 & 0xffffffffULL;
            value_13 = 0x400000000000;
            object_attributes = WdTracelogStorage9;
            value_15 = ((uint64_t)2 & 0xffffffffULL) << 32 | (uint64_t)((uint32_t)(*WdTracelogStorage9)) & 0xffffffffULL;
            data_pointer_6 = &WdAsyncnotificationStorage9;
            value_16 = 0x100000056;
            values[0] = 0x104f;
            wide_text = &object_attributes;
            EtwWriteTransfer(WdTracelogStorage12, &string_2, 0, 0, ((uint64_t)trace_argument_1_6 & 0xffffffffULL) << 32 | (uint64_t)5 & 0xffffffffULL, wide_text);
            value_11 = (uint32_t)((uint64_t)wide_text >> 0x20);
        }
            WdDataStorage23 = trace_argument_1_2;
            process_list = NULL;
            object_attributes = NULL;
            value_15 = 0;
            data_pointer_6 = NULL;
            value_16 = 0;
            data_pointer_7 = NULL;
            value_18 = 0;
            string = 0;
            value_14 = 0;
            if (*(int64_t *)(MpData + 0x248))
        {
            string_2 = 0;
            value_13 = 0;
            RtlInitUnicodeString(&string_2, *(uint64_t *)(MpData + 0x248));
            object_attributes = (uint16_t *)(((uint64_t)WdLoadField(&object_attributes, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)0x30 & 0xffffffffULL);
            value_15 = 0;
            value_16 = ((uint64_t)WdLoadField(&value_16, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)0x240 & 0xffffffffULL;
            data_pointer = &string_2;
            data_pointer_7 = NULL;
            value_18 = 0;
            status = ZwOpenKey(&process_list, 2, &object_attributes);
            if (0 <= (int32_t)status)
            {
                RtlInitUnicodeString(&string, L"PreventPagingFileAbuse");
                trace_argument_1_6 = 1;
                status = ZwSetValueKey(process_list, &string, 0, 4, WD_DATA_UNRECOVERED_ADDRESS, ((uint64_t)value_11 & 0xffffffffULL) << 32 | (uint64_t)4 & 0xffffffffULL);
                if ((int32_t)status <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x36, WD_SYMBOL_ADDRESS(WPP_b960013237753183ac7a6d55d666ce86_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)trace_argument_1_6 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
                }
                if (process_list)
                {
                    ZwClose();
                }
            }
        }
        else
        {
            status = WD_STATUS_INVALID_PARAMETER;
        }
            break;

        case 0x33:
            trace_argument_1_2 = *(int32_t *)(&allocation_3[0x10]);
            status = value;
            if (*(int32_t *)(MpData + 0x364) <= -1)
        {
            KeEnterCriticalRegion();
            ExAcquireResourceSharedLite(data + 0x2f0, (uint64_t)event_id & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
            WdUnresolvedAtomicBegin();
            value_2 = *(int32_t *)(MpData + 0xfcc);
            *(int32_t *)(MpData + 0xfcc) = trace_argument_1_2;
            WdUnresolvedAtomicEnd();
            data_pointer_3 = *(int64_t **)((int64_t *)(MpData + 0x228));
            data = MpData;
            if (data_pointer_3 != (int64_t *)(MpData + 0x228))
            {
                do
                {
                    if (!(*(uint32_t *)(&data_pointer_3[9]) & 0x20) && value_2 != trace_argument_1_2)
                    {
                        if (trace_argument_1_2 != -1 && MpIsDeveloperVolume(trace_argument_1_2, (WD_LAYOUT_111 *)(&data_pointer_3[2])))
                        {
                            WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0xfdc)), 1);
                            *(uint32_t *)(&data_pointer_3[9]) = *(uint32_t *)(&data_pointer_3[9]) | 0x10;
                            MpLogPrintfW(L"DevVolume (%d) set on volume %wZ", trace_argument_1_2, &data_pointer_3[2]);
                        }
                        if (value_2 != -1 && MpIsDeveloperVolume(value_2, (WD_LAYOUT_111 *)(&data_pointer_3[2])))
                        {
                            *(uint32_t *)(&data_pointer_3[9]) = *(uint32_t *)(&data_pointer_3[9]) & 0xffffffef;
                            WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0xfdc)), -1);
                            MpLogPrintfW(L"DevVolume (%d) cleared on volume %wZ", trace_argument_1_2, &data_pointer_3[2]);
                        }
                    }
                    data_pointer_3 = (int64_t *)(*data_pointer_3);
                    data = MpData;
                }
                while (data_pointer_3 != (int64_t *)(MpData + 0x228));
            }
            goto block_13;
        }
            break;

        case 0x34:
            trace_argument_1 = *(uint32_t *)(&allocation_3[0x14]);
            if (trace_argument_1)
        {
            value_11 = *(uint32_t *)(&allocation_3[4]);
            value = value_11 - 0x18;
            if (value_11 < 0x18)
            {
                value = 0xffffffff;
            }
            status = -(uint32_t)(value_11 < 0x18) & WD_STATUS_INTEGER_OVERFLOW;
            trace_argument_1_3 = (uint8_t *)((uint64_t)status);
            if (value_11 <= 0x17)
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                {
                    if (*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        event_id = 0x47;
                        provider = WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids);
                        WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, provider, trace_argument_1_3);
                        status = (uint32_t)trace_argument_1_3;
                    }
                }
                break;
            }
            if (value < trace_argument_1)
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_DD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x48, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), trace_argument_1, ((uint64_t)trace_argument_1_6 & 0xffffffffULL) << 32 | (uint64_t)value & 0xffffffffULL);
                }
                goto block_16;
            }
            if (trace_argument_1 != *(uint32_t *)(&allocation_3[0x18]) || *(uint32_t *)(&allocation_3[0x18]) < 0x10)
            {
                goto block_17;
            }
            status = MpFsHardeningSetServiceHardeningItems(&allocation_3[0x18], *(uint32_t *)(&allocation_3[0x10]));
        }
        else
        {
            status = MpFsHardeningSetServiceHardeningItems(NULL, *(uint32_t *)(&allocation_3[0x10]));
        }
            goto block_14;

        case 0x35:
            *(bool *)(MpData + 0xfd8) = allocation_3[0x10] != 0;
            status = value_3;
            goto block_15;

        case 0x36:
            trace_argument_1_4 = (uint8_t)(*(uint32_t *)(MpData + 0x364) >> 0xd);
            event_id_2[8] = ~trace_argument_1_4 & 1;
            *(uint32_t *)(&event_id_2[0xc]) = *(uint32_t *)(MpData + 0xfdc);
            status = value_3;
            goto block_15;

        case 0x37:
            MpDisconnect((int64_t *)(MpData + 0x140));
            MpDisconnect((int64_t *)(MpData + 0x160));
            MpDisconnect((int64_t *)(MpData + 0x1a0));
            MpDisconnect((int64_t *)(MpData + 0x180));
            MpDlpDisconnect((int64_t *)(MpData + 0x150));
            MpDlpDisconnect((int64_t *)(MpData + 0x170));
            MpDlpDisconnect((int64_t *)(MpData + 0x1b0));
            MpDlpDisconnect((int64_t *)(MpData + 400));
            status = value_3;
            goto block_15;

        case 0x38:
            status = MpFcKernelUpdateFeatureControlsFromRequest(allocation_3);
            block_14:
        break;


        case 0x39:
            if (0 <= *(int32_t *)(MpData + 0x364))
        {
            goto block_17;
        }
            *(uint8_t *)(MpDlpData + 0x108) = allocation_3[0x10];
            status = value;
            break;

        case 0x3a:
            trace_argument_1_4 = allocation_3[0x12];
            byte_value_2 = allocation_3[0x11];
            if (MpDlpData)
        {
            *(uint8_t *)(MpDlpData + 0x109) = allocation_3[0x10];
            *(uint8_t *)(dlp_data + 0x10b) = byte_value_2;
            *(uint8_t *)(dlp_data + 0x10c) = trace_argument_1_4;
            status = 0;
        }
        else
        {
            status = 0xc00000e5;
        }
            break;

        case 0x3b:
            if (MpDlpData)
        {
            *(uint32_t *)(MpDlpData + 0x110) = *(uint32_t *)(&allocation_3[0x10]);
            status = 0;
        }
        else
        {
            status = 0xc00000e5;
        }
            break;

        case 0x3c:
            if (MpDlpData)
        {
            *(uint32_t *)(MpDlpData + 0x128) = *(uint32_t *)(&allocation_3[0x10]);
            status = 0;
        }
        else
        {
            status = 0xc00000e5;
        }
            break;

        case 0x3d:
            trace_argument_1_4 = allocation_3[0x10];
            if ((uint32_t *)(&allocation_3[0x14]))
        {
            trace_argument_1 = *(uint32_t *)(&allocation_3[0x14]);
            if (trace_argument_1 && trace_argument_1 != 4)
            {
                string = MpFileTimeToUlong64(*(uint64_t *)(&allocation_3[0x18]));
                data = MpProcessTable;
                trace_argument_1_3 = (uint8_t *)WD_STATUS_NOT_FOUND;
                KeEnterCriticalRegion();
                ExAcquireResourceSharedLite(data + 8, (uint64_t)event_id & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
                trace_argument_1_5 = trace_argument_1 >> 2 & 0x7f;
                data_pointer_3 = (int64_t *)(*(int64_t *)(MpProcessTable + 0x180) + trace_argument_1_5 * 0x10);
                data_pointer_2 = (int64_t *)(*data_pointer_3);
                if (data_pointer_2 != data_pointer_3)
                {
                    do
                    {
                        if ((uint64_t)trace_argument_1 == data_pointer_2[2] && string == data_pointer_2[3])
                        {
                            WdAtomicAdd32((volatile int32_t *)((int32_t *)(&data_pointer_2[5])), 1);
                            trace_argument_1_3 = object;
                            object = (uint8_t *)(&data_pointer_2[-1]);
                            break;
                        }
                        data_pointer_2 = (int64_t *)(*data_pointer_2);
                    }
                    while (data_pointer_2 != (int64_t *)(*(int64_t *)(MpProcessTable + 0x180) + trace_argument_1_5 * 0x10));
                }
                ExReleaseResourceLite(MpProcessTable + 8);
                KeLeaveCriticalRegion();
                status = (uint32_t)trace_argument_1_3;
                if (0 <= (int32_t)status && object)
                {
                    object[0xe8] = trace_argument_1_4;
                    MpReleaseProcessContext(object);
                    status = 0;
                }
                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                {
                    if (*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                    {
                        WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xbb, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), trace_argument_1_3);
                    }
                }
            }
            else
            {
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4))
                {
                    goto block_12;
                }
                WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xba, WD_SYMBOL_ADDRESS(WPP_19165d4345de3c8df95bf3edc21fe2ec_Traceguids), trace_argument_1);
                status = 0;
            }
        }
        else
        {
            status = WD_STATUS_INVALID_PARAMETER;
        }
            break;

        case 0x3e:
            if (MpDlpData)
        {
            *(uint8_t *)(MpDlpData + 0x10a) = allocation_3[0x10];
            status = 0;
        }
        else
        {
            status = 0xc00000e5;
        }
    }

    if (0 <= (int32_t)status)
    {
        block_15:
        memmove(trace_argument_2, event_id_2, *(uint32_t *)(&event_id_2[4]));

        if (0 <= (int32_t)status)
        {
            *pool_type = *(uint32_t *)(&event_id_2[4]);
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qq(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x4a, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), (uint64_t)KeGetCurrentThread(), trace_argument_2);
        }
    }
    else
    {
        block_16:
        ;
    }
    block_17:
    if (allocation_3)
    {
        if (0x81 <= allocation_size)
        {
            ExFreePoolWithTag(allocation_3, 0x7266504d);
        }
        else
        {
            ExFreeToPagedLookasideList((void *)(MpData + 0x680), allocation_3);
        }
    }

    if (event_id_2)
    {
        if (0x211 <= allocation_size_2)
        {
            ExFreePoolWithTag(event_id_2, 0x7266504d);
        }
        else
        {
            ExFreeToPagedLookasideList((void *)(MpData + 0x700), event_id_2);
        }
    }
    return;
}

void MpConnect__finally_0(uint64_t input, void *input_2)
{
    int64_t reg_data;
    ExReleaseResourceLite(MpData + 0x2f0);
    KeLeaveCriticalRegion();
    if (0 <= ((int32_t *)input_2)[0x10])
    {
        ExAcquireFastMutex(MpRegData + 0xc0);
        if (!(*(uint32_t *)(MpData + 0x360) & 8) && *(int64_t *)(MpRegData + 0xf8))
        {
            CmUnRegisterCallback(*(uint64_t *)(MpRegData + 0xf8));
            *(uint64_t *)(MpRegData + 0xf8) = 0;
        }
        reg_data = MpRegData;
        *(int32_t *)(MpRegData + 0x100) = *(int32_t *)(MpRegData + 0x100) + 1;
        ExReleaseFastMutex(reg_data + 0xc0);
        return;
    }
    MpTraceLogServiceConnectFailure(((int32_t *)input_2)[0x10], ((uint64_t *)input_2)[0xc], ((uint64_t *)input_2)[0xb], ((uint8_t *)input_2)[0x68]);
    return;
}

void MpDlpConnect__finally_0(uint64_t input, void *input_2)
{
    ExReleaseResourceLite(MpData + 0x2f0);
    KeLeaveCriticalRegion();
    if (0 <= ((int32_t *)input_2)[0x10])
    {
        return;
    }
    MpTraceLogServiceConnectFailure(((int32_t *)input_2)[0x10], ((uint64_t *)input_2)[0xc], ((uint64_t *)input_2)[0xb], ((uint8_t *)input_2)[0x68]);
    return;
}

int32_t MpCreateCommPorts(uint64_t input, uint64_t input_2)
{
    int32_t value;
    uint64_t value_2;
    int64_t value_3;
    int64_t allocation;
    uint64_t value_4;
    uint32_t value_5;
    value_5 = (uint32_t)((uint64_t)value_4 >> 0x20);
    value_3 = 0;
    value = MpCreateSecurityDescriptor(input, input_2, &value_3);
    allocation = value_3;
    if (0 <= value)
    {
        value_5 = 1;
        value = MpCreatePort(MpData + 0x118, L"\\MicrosoftMalwareProtectionControlPortWD", value_3, MpData + 0x120, MpConnect, MpDisconnect, MpMessage);
        if (0 <= value)
        {
            value_5 = 1;
            value = MpCreatePort(MpData + 0x138, L"\\MicrosoftMalwareProtectionPortWD", allocation, MpData + 0x140, MpConnect, MpDisconnect, 0);
            if (0 <= value)
            {
                value_5 = 1;
                value = MpCreatePort(MpData + 0x158, L"\\MicrosoftMalwareProtectionVeryLowIoPortWD", allocation, MpData + 0x160, MpConnect, MpDisconnect, 0);
                if (0 <= value)
                {
                    value_5 = 1;
                    value = MpCreatePort(MpData + 0x178, L"\\MicrosoftMalwareProtectionRemoteIoPortWD", allocation, MpData + 0x180, MpConnect, MpDisconnect, 0);
                    if (0 <= value)
                    {
                        value_5 = 1;
                        value = MpCreatePort(MpData + 0x198, L"\\MicrosoftMalwareProtectionAsyncPortWD", allocation, MpData + 0x1a0, MpConnect, MpDisconnect, 0);
                        if (0 <= value)
                        {
                            value_5 = 1;
                            value = MpCreatePort(MpData + 0x128, L"\\MicrosoftDataLossPreventionControlPort", allocation, MpData + 0x130, MpDlpConnect, MpDlpDisconnect, MpMessage);
                            if (0 <= value)
                            {
                                value_5 = 1;
                                value = MpCreatePort(MpData + 0x148, L"\\MicrosoftDataLossPreventionPort", allocation, MpData + 0x150, MpDlpConnect, MpDlpDisconnect, 0);
                                if (0 <= value)
                                {
                                    value_5 = 1;
                                    value = MpCreatePort(MpData + 0x168, L"\\MicrosoftDataLossPreventionVeryLowIoPort", allocation, MpData + 0x170, MpDlpConnect, MpDlpDisconnect, 0);
                                    if (0 <= value)
                                    {
                                        value_5 = 1;
                                        value = MpCreatePort(MpData + 0x188, L"\\MicrosoftDataLossPreventionRemoteIoPort", allocation, MpData + 400, MpDlpConnect, MpDlpDisconnect, 0);
                                        if (0 <= value)
                                        {
                                            value_5 = 1;
                                            value = MpCreatePort(MpData + 0x1a8, L"\\MicrosoftDataLossPreventionAsyncPort", allocation, MpData + 0x1b0, MpDlpConnect, MpDlpDisconnect, 0);
                                            if (0 <= value || WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                                            {
                                                goto block_1;
                                            }
                                            value_2 = 0x14;
                                        }
                                        else
                                        {
                                            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                                            {
                                                goto block_1;
                                            }
                                            value_2 = 0x13;
                                        }
                                    }
                                    else
                                    {
                                        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                                        {
                                            goto block_1;
                                        }
                                        value_2 = 0x12;
                                    }
                                }
                                else
                                {
                                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                                    {
                                        goto block_1;
                                    }
                                    value_2 = 0x11;
                                }
                            }
                            else
                            {
                                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                                {
                                    goto block_1;
                                }
                                value_2 = 0x10;
                            }
                        }
                        else
                        {
                            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                            {
                                goto block_1;
                            }
                            value_2 = 0xf;
                        }
                    }
                    else
                    {
                        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                        {
                            goto block_1;
                        }
                        value_2 = 0xe;
                    }
                }
                else
                {
                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                    {
                        goto block_1;
                    }
                    value_2 = 0xd;
                }
            }
            else
            {
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    goto block_1;
                }
                value_2 = 0xc;
            }
        }
        else
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                goto block_1;
            }
            value_2 = 0xb;
        }
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)value & 0xffffffffULL);
    }
    else
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 10, WD_SYMBOL_ADDRESS(WPP_1d3e646d2cf93d55f3496bf85f43a588_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)value & 0xffffffffULL);
        }
        allocation = value_3;
    }
    block_1:
    if (allocation)
    {
        ExFreePoolWithTag(allocation, 0x6473504d);
    }

    if (value <= -1)
    {
        MpFreeCommPorts();
    }
    return value;
}

void MpCreatePort(uint64_t input, uint64_t input_2, uint64_t input_3, uint64_t input_4, uint64_t input_5, uint64_t input_6, uint64_t input_7)
{
    uint64_t value;
    uint32_t value_2;
    uint32_t value_3;
    uint64_t value_4;
    uint64_t value_5;
    uint64_t value_6;
    uint64_t value_8;
    uint64_t value_9;
    uint64_t string;
    uint32_t value_10;
    uint32_t value_11;
    uint64_t value_12;
    uint64_t *data_pointer;
    value_9 = input_7;
    value_8 = input_6;
    value = input_5;
    value_11 = 0;
    string = 0;
    value_6 = 0;
    value_3 = 0;
    RtlInitUnicodeString(&string);
    data_pointer = &string;
    value_10 = 0x30;
    value_12 = 0;
    value_2 = 0x240;
    value_5 = 0;
    value_4 = input_3;
    FltCreateCommunicationPort(*(uint64_t *)(MpData + 0x10), input, &value_10, input_4, value, value_8, value_9, 1);
    return;
}

int32_t MpCreateSecurityDescriptor(uint64_t input, uint64_t input_2, uint64_t *input_3, uint64_t input_4)
{
    int64_t *data_pointer;
    int64_t value;
    uint64_t value_2;
    int32_t value_3;
    int32_t value_4;
    int64_t *allocation;
    uint64_t value_5;
    value = *(int64_t *)(MpData + 0x948);
    value_2 = *(uint64_t *)(MpData + 0x958);
    value_3 = (uint32_t)(*(uint8_t *)(value + 1)) * 8;
    allocation = MpAllocatePoolWithTag(1, value_3 + 100, 0x6473504d, input_4, 0);
    if (allocation)
    {
        data_pointer = &allocation[5];
        value_4 = RtlCreateSecurityDescriptor(allocation, 1);
        if (0 <= value_4)
        {
            value_4 = RtlCreateAcl(data_pointer, value_3 + 0x3c, 2);
            if (0 <= value_4)
            {
                value_4 = RtlAddAccessAllowedAce(data_pointer, 2, 0x1f0001, value);
                if (0 <= value_4)
                {
                    value_5 = 0;
                    value_4 = RtlAddAccessAllowedAce(data_pointer, 2, 0x1f0001, value_2);
                    if (0 <= value_4)
                    {
                        value_4 = RtlSetDaclSecurityDescriptor(allocation, (uint64_t)value_5 & 0xffffffffffffff00 | (uint64_t)1 & 0xff, data_pointer, 0);
                        if (0 <= value_4)
                        {
                            *input_3 = allocation;
                            allocation = NULL;
                            value_4 = 0;
                        }
                    }
                }
            }
        }
    }
    else
    {
        value_4 = -0x3fffff66;
    }
    if (allocation)
    {
        ExFreePoolWithTag(allocation, 0x6473504d);
    }
    return value_4;
}

void MpSetBufferLimits(void)
{
    WdCommsupStorage50 = 8;
    WdCommsupStorage63 = 8;
    WdCommsupStorage = 0x200010;
    WdCommsupStorage33 = 0x20000a;
    WdCommsupStorage18 = 0x14;
    WdCommsupStorage31 = 0x14;
    WdCommsupStorage2 = 0x100020;
    WdCommsupStorage34 = 0x8000a;
    WdCommsupStorage3 = 0x210010;
    WdCommsupStorage35 = 0xa0208;
    WdCommsupStorage4 = 0x200020;
    WdCommsupStorage36 = 0x80008;
    WdCommsupStorage5 = 0x200010;
    WdCommsupStorage37 = 0x80009;
    WdCommsupStorage6 = 0x180018;
    WdCommsupStorage38 = 0xa0008;
    WdCommsupStorage7 = 0x140018;
    WdCommsupStorage39 = 0x80008;
    WdCommsupStorage8 = 0x110011;
    WdCommsupStorage40 = 0x80008;
    WdCommsupStorage9 = 0x210020;
    WdCommsupStorage41 = 0xa0008;
    WdCommsupStorage10 = 0x200020;
    WdCommsupStorage42 = 0x90010;
    WdCommsupStorage11 = 0x140019;
    WdCommsupStorage43 = 0x80008;
    WdCommsupStorage12 = 0x200010;
    WdCommsupStorage44 = 0x240010;
    WdCommsupStorage13 = 0x1c0018;
    WdCommsupStorage45 = 0x80008;
    WdCommsupStorage19 = 0x300011;
    WdCommsupStorage51 = 0x80008;
    WdCommsupStorage14 = 0x10002c;
    WdCommsupStorage46 = 0xc0008;
    WdCommsupStorage15 = 0x180020;
    WdCommsupStorage47 = 0x80008;
    WdCommsupStorage16 = 0x14001c;
    WdCommsupStorage48 = 0x80008;
    WdCommsupStorage17 = 0x140011;
    WdCommsupStorage49 = 0x80008;
    WdCommsupStorage20 = 0x120011;
    WdCommsupStorage52 = 0x80008;
    WdCommsupStorage21 = 0x100011;
    WdCommsupStorage53 = 0x80008;
    WdCommsupStorage22 = 0x100011;
    WdCommsupStorage54 = 0x80009;
    WdCommsupStorage23 = 0x110011;
    WdCommsupStorage55 = 0x80008;
    WdCommsupStorage26 = 0x140014;
    WdCommsupStorage58 = 0x80008;
    WdCommsupStorage24 = 0x110014;
    WdCommsupStorage56 = 0x80008;
    WdCommsupStorage25 = 0x140011;
    WdCommsupStorage57 = 0x80008;
    WdCommsupStorage27 = 0x110018;
    WdCommsupStorage59 = 0x80008;
    WdCommsupStorage28 = 0x100010;
    WdCommsupStorage60 = 0x80010;
    WdCommsupStorage29 = 0x110014;
    WdCommsupStorage61 = 0x80008;
    WdCommsupStorage30 = 0x140013;
    WdCommsupStorage62 = 0x80008;
    WdCommsupStorage32 = 0x110020;
    WdCommsupStorage64 = 0x80008;
    return;
}

void MpCreateCommPorts__finally_0(uint64_t input, void *input_2)
{
    if (((int64_t *)input_2)[0xe])
    {
        ExFreePoolWithTag(((int64_t *)input_2)[0xe], 0x6473504d);
    }
    if (0 <= ((int32_t *)input_2)[0x10])
    {
        return;
    }
    MpFreeCommPorts();
    return;
}

void MpCreateSecurityDescriptor__finally_0(uint64_t input, void *input_2)
{
    if (!((int64_t *)input_2)[4])
    {
        return;
    }
    ExFreePoolWithTag(((int64_t *)input_2)[4], 0x6473504d);
    return;
}

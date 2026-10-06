#include "wdfilter.h"

void MpPostMountVolume(int64_t data, void *objects, uint64_t completion_context, uint64_t flags)
{
    uint64_t value;
    char current_irql;
    int32_t trace_argument_1 = 0;
    int64_t *allocation = NULL;
    char buffer_2[4];
    buffer_2[0] = 0;
    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
    {
        WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x38, WD_SYMBOL_ADDRESS(WPP_3a24fb14a98a3bab9c6401a3dbbb7c6d_Traceguids));
    }
    if (!(flags & 1) && 0 <= *(int32_t *)(data + 0x18))
    {
        if (2 <= (uint8_t)KeGetCurrentIrql())
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                current_irql = KeGetCurrentIrql();
                WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x39, WD_SYMBOL_ADDRESS(WPP_3a24fb14a98a3bab9c6401a3dbbb7c6d_Traceguids), (uint8_t)current_irql);
            }
        }
        else
        {
            value = ((uint64_t *)objects)[2];
            if (0 <= (int32_t)FltGetFileSystemType(value, &trace_argument_1))
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                {
                    WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x3a, WD_SYMBOL_ADDRESS(WPP_3a24fb14a98a3bab9c6401a3dbbb7c6d_Traceguids), trace_argument_1);
                }
                if (trace_argument_1 != 0x1b)
                {
                    if (0 <= (int32_t)MpScanBootSector(data, objects, 0, buffer_2, &allocation))
                    {
                        if (!allocation)
                        {
                            return;
                        }
                        MpSendPostMountAsyncMessage(allocation);
                    }
                }
            }
        }
    }
    if (allocation)
    {
        if (*allocation)
        {
            ExFreePoolWithTag(*allocation, 0x7362504d);
        }
        if ((void *)allocation[1])
        {
            MpReleaseProcessContext((void *)allocation[1]);
        }
        ExFreePoolWithTag(allocation, 0x636d504d);
    }
    return;
}

void WPP_SF_IDD(uint64_t input)
{
    uint64_t values[2];
    values[0] = 0;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_3a24fb14a98a3bab9c6401a3dbbb7c6d_Traceguids), 0x2d, values, 8, &unrecovered_stack_argument_5, 4, &unrecovered_stack_argument_6, 4, 0);
    return;
}

void WPP_SF_iDD(uint64_t input, uint64_t input_2, uint64_t input_3, uint64_t input_4)
{
    uint64_t value;
    value = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_3a24fb14a98a3bab9c6401a3dbbb7c6d_Traceguids), 0x37, &value, 8, &unrecovered_stack_argument_5, 4, &unrecovered_stack_argument_6, 4, 0);
    return;
}

void WPP_SF_qDqL(uint64_t input, uint16_t input_2, uint64_t input_3, uint64_t input_4, uint64_t input_5, uint64_t input_6)
{
    uint64_t value;
    uint64_t value_2;
    value = input_6;
    value_2 = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_3a24fb14a98a3bab9c6401a3dbbb7c6d_Traceguids), input_2, &value_2, 8, &input_5, 4, &value, 8, &unrecovered_stack_argument_7, 4, 0);
    return;
}

void WPP_SF_qPqL(uint64_t input, uint16_t input_2, uint64_t input_3, uint64_t input_4, uint64_t input_5, uint64_t input_6)
{
    uint32_t values[2];
    uint64_t value;
    uint64_t value_2;
    value = input_6;
    values[0] = 0xc0000004;
    value_2 = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_3a24fb14a98a3bab9c6401a3dbbb7c6d_Traceguids), input_2, &value_2, 8, &input_5, 8, &value, 8, values, 4, 0);
    return;
}

void WPP_SF_qZdd(uint64_t input, uint64_t input_2, uint64_t input_3, uint64_t input_4, int16_t *input_5)
{
    int16_t *wide_text;
    int16_t value;
    uint64_t value_2;
    uint64_t value_3;
    if (input_5)
    {
        value = *input_5;
        if (*input_5)
        {
            value_3 = *(uint64_t *)(&input_5[4]);
            goto block_1;
        }
    }
    else
    {
        value = 8;
    }
    value_3 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    block_1:
    wide_text = input_5;

    if (!input_5)
    {
        wide_text = &WdCleanupStorage;
    }
    value_2 = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_3a24fb14a98a3bab9c6401a3dbbb7c6d_Traceguids), 0x15, &value_2, 8, wide_text, 2, value_3, (uint16_t)value, &unrecovered_stack_argument_6, 4, &unrecovered_stack_argument_7, 4, 0);
    return;
}

void WPP_SF_qi(uint64_t input, uint64_t input_2, uint64_t input_3, uint64_t input_4)
{
    uint64_t value;
    value = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_3a24fb14a98a3bab9c6401a3dbbb7c6d_Traceguids), 0x34, &value, 8, &unrecovered_stack_argument_5, 8, 0);
    return;
}

void MpScanBootSector(int64_t input, void *input_2, int32_t input_3, char *input_4, int64_t *input_5)
{
    int32_t *data_pointer;
    uint32_t value;
    uint32_t value_2;
    int64_t *data_pointer_2;
    uint64_t current_thread;
    int64_t object;
    int64_t process_context;
    int32_t values[2];
    int32_t value_3;
    uint64_t process;
    bool enabled;
    int64_t allocation;
    int64_t value_4;
    uint32_t value_5;
    uint64_t value_6;
    uint32_t *data_pointer_3;
    uint64_t value_7;
    char *bytes;
    uint16_t *allocation_2;
    uint32_t *data_pointer_4;
    int64_t value_8;
    int64_t data;
    uint16_t *wide_text;
    uint64_t *data_pointer_5;
    uint32_t value_9;
    uint32_t value_10;
    uint64_t value_11;
    uint32_t *data_pointer_6;
    uint64_t value_12;
    uint64_t value_13;
    int64_t *allocation_3;
    char *bytes_2;
    char byte_value;
    uint16_t *wide_text_2;
    int32_t value_14;
    uint32_t *data_pointer_7;
    uint64_t value_15;
    void *data_pointer_8;
    int64_t *data_pointer_9;
    int32_t trace_argument_1;
    int32_t status;
    uint64_t value_16;
    uint64_t value_17;
    uint64_t value_18;
    uint64_t value_19;
    uint32_t value_20;
    uint32_t *allocation_4;
    int64_t process_id;
    uint64_t current_thread_2;
    value_2 = (uint32_t)((uint64_t)value_11 >> 0x20);
    value_10 = (uint32_t)((uint64_t)value_13 >> 0x20);
    data_pointer_9 = input_5;
    data_pointer_3 = NULL;
    allocation_3 = NULL;
    object = 0;
    data_pointer_4 = NULL;
    data_pointer_7 = NULL;
    value_6 = 0;
    value_16 = 0;
    value_17 = 0;
    value_18 = 0;
    value_19 = 0;
    value_20 = 0;
    value_5 = 0;
    value_3 = 0;
    values[0] = 0;
    allocation_2 = NULL;
    wide_text_2 = NULL;
    current_thread_2 = ((uint64_t *)input_2)[2];
    process_context = 0;
    allocation = 0;
    if (input_5)
    {
        *input_5 = 0;
    }
    *input_4 = 0;
    value_4 = *(uint32_t *)(MpData + 0x980) * -10000ULL;
    bytes_2 = input_4;
    if (input)
    {
        byte_value = MpIsProcessExemptByData(input);
    }
    else
    {
        byte_value = MpIsProcessExemptById(PsGetCurrentProcessId());
    }
    if (!(*(uint32_t *)(MpData + 0x364) & 0x10) || *(char *)(MpData + 0xd0) || byte_value)
    {
        return;
    }
    trace_argument_1 = FltGetDiskDeviceObject(current_thread_2, &object);
    if (trace_argument_1 <= -1)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qqL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xc, WD_SYMBOL_ADDRESS(WPP_3a24fb14a98a3bab9c6401a3dbbb7c6d_Traceguids), (uint64_t)KeGetCurrentThread(), current_thread_2, ((uint64_t)value_2 & 0xffffffffULL) << 32 | (uint64_t)trace_argument_1 & 0xffffffffULL);
        }
        return;
    }
    WdUnresolvedAtomicBegin();
    ObTotalReferences += 1;
    WdUnresolvedAtomicEnd();
    KeEnterCriticalRegion();
    if (input)
    {
        MpGetProcessContextByObject(MpGetRequestorProcess(input), &process_context);
    }
    else
    {
        MpGetProcessContextById(PsGetCurrentProcessId(), &process_context);
    }
    allocation_4 = data_pointer_4;
    if (*(int32_t *)(object + 0x48) != 7)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            data_pointer_9 = *(int64_t **)(value_8 + 0x188);
            WPP_SF_qDL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xd, WD_SYMBOL_ADDRESS(WPP_3a24fb14a98a3bab9c6401a3dbbb7c6d_Traceguids), data_pointer_9, (uint64_t)((uint64_t)wide_text) & 0xffffffff00000000 | (uint64_t)(*(int32_t *)(object + 0x48)) & 0xffffffff, ((uint64_t)value_2 & 0xffffffffULL) << 32 | (uint64_t)0xc0000014 & 0xffffffffULL);
        }
    }
    else
    {
        allocation_2 = (uint16_t *)MpAllocatePoolWithTag(1, (char *)0x1, 0x6e64504d);
        wide_text_2 = allocation_2;
        if (allocation_2)
        {
            trace_argument_1 = ObQueryNameString(object, allocation_2, 0, values);
            ExFreePoolWithTag(allocation_2, 0x6e64504d);
            value_9 = (uint32_t)((uint64_t)wide_text >> 0x20);
            if (trace_argument_1 != -0x3ffffffc)
            {
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    goto block_4;
                }
                bytes = *(char **)(value_8 + 0x188);
                value_2 = 0xf;
                bytes_2 = bytes;
                block_1:
                current_thread_2 = ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)trace_argument_1 & 0xffffffffULL;

                allocation_4 = data_pointer_4;
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_3a24fb14a98a3bab9c6401a3dbbb7c6d_Traceguids), bytes, current_thread_2);
            }
            else if (values[0])
            {
                allocation_2 = (uint16_t *)MpAllocatePoolWithTag(1, values[0], 0x6e64504d);
                wide_text_2 = allocation_2;
                if (allocation_2)
                {
                    trace_argument_1 = ObQueryNameString(object, allocation_2, values[0], &value_3);
                    value_9 = (uint32_t)((uint64_t)wide_text >> 0x20);
                    if (0 <= trace_argument_1)
                    {
                        if (value_3 != values[0])
                        {
                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                            {
                                current_thread_2 = (uint64_t)KeGetCurrentThread();
                                WPP_SF_qDDL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x13, WD_SYMBOL_ADDRESS(WPP_3a24fb14a98a3bab9c6401a3dbbb7c6d_Traceguids), current_thread_2, ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)value_3 & 0xffffffffULL, ((uint64_t)value_2 & 0xffffffffULL) << 32 | (uint64_t)values[0] & 0xffffffffULL, ((uint64_t)value_10 & 0xffffffffULL) << 32 | (uint64_t)0xc0000004 & 0xffffffffULL);
                            }
                        }
                        else
                        {
                            byte_value = MpIsHotPluggable(input_2);
                            if (byte_value || input_3 || !MpIsGoodBootSector(allocation_2))
                            {
                                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                                {
                                    current_thread_2 = (uint64_t)KeGetCurrentThread();
                                    wide_text = allocation_2;
                                    WPP_SF_qZdd(*(uint64_t *)(WPP_GLOBAL_Control + 0x18));
                                }
                                allocation_3 = (int64_t *)MpAllocatePoolWithTag(ExDefaultNonPagedPoolType + 4, (char *)0x2000, 0x7462504d);
                                if (allocation_3)
                                {
                                    value_7 = (uint64_t)wide_text & 0xffffffff00000000;
                                    trace_argument_1 = MpReadRawDevice(object);
                                    if (trace_argument_1 < 0)
                                    {
                                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                                        {
                                            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x17, WD_SYMBOL_ADDRESS(WPP_3a24fb14a98a3bab9c6401a3dbbb7c6d_Traceguids), trace_argument_1, value_7);
                                        }
                                        value_7 = (uint64_t)value_7 & 0xffffffff00000000 | (uint64_t)1 & 0xffffffff;
                                        trace_argument_1 = MpReadRawDevice(object);
                                        if (trace_argument_1 <= -1)
                                        {
                                            if (trace_argument_1 != -0x3fffffed && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                            {
                                                current_thread_2 = (uint64_t)KeGetCurrentThread();
                                                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x18, WD_SYMBOL_ADDRESS(WPP_3a24fb14a98a3bab9c6401a3dbbb7c6d_Traceguids), current_thread_2, (uint64_t)value_7 & 0xffffffff00000000 | (uint64_t)trace_argument_1 & 0xffffffff);
                                            }
                                            goto block_4;
                                        }
                                    }
                                    value_9 = (uint32_t)(value_7 >> 0x20);
                                    allocation_4 = (uint32_t *)MpAllocatePoolWithTag(1, (char *)0x2188, 0x7362504d);
                                    data_pointer_7 = allocation_4;
                                    if (allocation_4)
                                    {
                                        *allocation_4 = 0x100a3;
                                        allocation_4[1] = 0x2188;
                                        allocation_4[6] = (input_3 != 0) + 1;
                                        *(uint64_t *)(&allocation_4[8]) = 0x2000;
                                        process_id = PsGetCurrentProcessId();
                                        *(int64_t *)(&allocation_4[10]) = process_id;
                                        current_thread_2 = 0;
                                        value_15 = 0;
                                        if (process_id)
                                        {
                                            process = 0;
                                            if (0 <= (int32_t)PsLookupProcessByProcessId(process_id, &process))
                                            {
                                                current_thread_2 = PsGetProcessCreateTimeQuadPart(process);
                                                value_15 = current_thread_2;
                                                ObfDereferenceObject(process);
                                            }
                                        }
                                        *(uint64_t *)(&allocation_4[0xe]) = MpFileTimeFromUlong64(current_thread_2);
                                        *(uint64_t *)(&allocation_4[0x10]) = PsGetCurrentThreadId();
                                        if (process_context)
                                        {
                                            allocation_4[0xc] = *(uint32_t *)(process_context + 0x38);
                                        }
                                        MpGetPriorityInfo(input, ((uint64_t *)data_pointer_8)[4], (WD_LAYOUT_26 *)(&allocation_4[2]));
                                        if (0xc4 <= (*allocation_2 & 0xfffe))
                                        {
                                            *(uint16_t *)(&allocation_4[0x16]) = 0xc2;
                                        }
                                        else
                                        {
                                            *(uint16_t *)(&allocation_4[0x16]) = *allocation_2;
                                        }
                                        memmove((uint64_t *)((int64_t)allocation_4 + 0x5a), *(uint64_t **)(&allocation_2[4]), *(uint16_t *)(&allocation_4[0x16]));
                                        value_5 = 0x2c;
                                        if (input_3 == 2)
                                        {
                                            if (0x201 <= *(uint16_t *)(object + 0x130))
                                            {
                                                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                                                {
                                                    WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1d, WD_SYMBOL_ADDRESS(WPP_3a24fb14a98a3bab9c6401a3dbbb7c6d_Traceguids), *(uint16_t *)(object + 0x130));
                                                }
                                            }
                                            else
                                            {
                                                *(int64_t *)(&allocation_4[0x5c]) = object;
                                                WdUnresolvedAtomicBegin();
                                                data_pointer = (int32_t *)(MpData + 0xdc);
                                                trace_argument_1 = *data_pointer;
                                                *data_pointer = *data_pointer + 1;
                                                WdUnresolvedAtomicEnd();
                                                allocation_4[0x5e] = trace_argument_1 + 1;
                                                trace_argument_1 = MpCreateBootScanContext(object, trace_argument_1 + 1, &allocation);
                                                if (trace_argument_1 <= -1)
                                                {
                                                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                                    {
                                                        bytes = *(char **)(value_8 + 0x188);
                                                        value_2 = 0x1c;
                                                        data_pointer_4 = allocation_4;
                                                        goto block_1;
                                                    }
                                                    goto block_4;
                                                }
                                            }
                                        }
                                        allocation_4[0x60] = 0x2000;
                                        data_pointer_2 = allocation_3;
                                        memmove(&allocation_4[0x62], allocation_3, 0x2000);
                                        process_id = MpData;
                                        if (input_3 == 2)
                                        {
                                            KeEnterCriticalRegion();
                                            ExAcquireResourceExclusiveLite(process_id + 0xc50, (uint64_t)((uint64_t)data_pointer_2) & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
                                        }
                                        value_7 = -(uint64_t)(value_4 != 0) & (uint64_t)(&value_4);
                                        process_id = MpData + 0x140;
                                        data_pointer_6 = &value_5;
                                        data_pointer_5 = &value_6;
                                        status = FltSendMessage(*(uint64_t *)(MpData + 0x10), process_id, allocation_4, allocation_4[1], data_pointer_5, data_pointer_6, value_7);
                                        value_10 = (uint32_t)((uint64_t)data_pointer_5 >> 0x20);
                                        value_9 = (uint32_t)(value_7 >> 0x20);
                                        value_2 = (uint32_t)((uint64_t)data_pointer_6 >> 0x20);
                                        value_14 = status;
                                        trace_argument_1 = status;
                                        if (input_3 == 2)
                                        {
                                            ExReleaseResourceLite(MpData + 0xc50);
                                            KeLeaveCriticalRegion();
                                        }
                                        enabled = 0;
                                        if (0 <= status && status != 0x102)
                                        {
                                            if (WdLoadField(&value_6, 2, 2) != 0x2c || value_5 < 0x2c)
                                            {
                                                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                                {
                                                    current_thread_2 = (uint64_t)KeGetCurrentThread();
                                                    process_id = 0;
                                                    current_thread = ((uint64_t)value_10 & 0xffffffffULL) << 32 | (uint64_t)value_5 & 0xffffffffULL;
                                                    WPP_SF_qDL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1e, WD_SYMBOL_ADDRESS(WPP_3a24fb14a98a3bab9c6401a3dbbb7c6d_Traceguids), current_thread_2, current_thread, ((uint64_t)value_2 & 0xffffffffULL) << 32 | (uint64_t)((uint32_t)WdLoadField(&value_6, 2, 2)) & 0xffffffffULL);
                                                    value_10 = (uint32_t)((uint64_t)current_thread >> 0x20);
                                                }
                                                goto block_2;
                                            }
                                            if ((uint8_t)value_6 != 0xa3)
                                            {
                                                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                                {
                                                    current_thread_2 = (uint64_t)KeGetCurrentThread();
                                                    process_id = 0;
                                                    value = (uint32_t)WdLoadField(&value_6, 1, 1);
                                                    current_thread = ((uint64_t)value_10 & 0xffffffffULL) << 32 | (uint64_t)((uint32_t)((uint8_t)value_6)) & 0xffffffffULL;
                                                    WPP_SF_qdddd(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1f, WD_SYMBOL_ADDRESS(WPP_3a24fb14a98a3bab9c6401a3dbbb7c6d_Traceguids), current_thread_2, current_thread, ((uint64_t)value_2 & 0xffffffffULL) << 32 | (uint64_t)value & 0xffffffffULL, ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)0xa3 & 0xffffffffULL, 0, trace_argument_1);
                                                    value_10 = (uint32_t)((uint64_t)current_thread >> 0x20);
                                                }
                                                goto block_2;
                                            }
                                            if (WdLoadField(&value_6, 1, 1) && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                                            {
                                                current_thread_2 = (uint64_t)KeGetCurrentThread();
                                                process_id = 0;
                                                current_thread = ((uint64_t)value_10 & 0xffffffffULL) << 32 | (uint64_t)0xa3 & 0xffffffffULL;
                                                WPP_SF_qdddd(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x20, WD_SYMBOL_ADDRESS(WPP_3a24fb14a98a3bab9c6401a3dbbb7c6d_Traceguids), current_thread_2, current_thread, ((uint64_t)value_2 & 0xffffffffULL) << 32 | (uint64_t)((uint32_t)WdLoadField(&value_6, 1, 1)) & 0xffffffffULL, ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)0xa3 & 0xffffffffULL, 0, trace_argument_1);
                                                value_10 = (uint32_t)((uint64_t)current_thread >> 0x20);
                                            }
                                        }
                                        else
                                        {
                                            block_2:
                                            value_6 &= 0xffffffff;
                                        }
                                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                                        {
                                            process_id = 0;
                                            current_thread_2 = ((uint64_t)value_10 & 0xffffffffULL) << 32 | (uint64_t)WdLoadField(&value_6, 4, 4) & 0xffffffffULL;
                                            WPP_SF_ZD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x21, WD_SYMBOL_ADDRESS(WPP_3a24fb14a98a3bab9c6401a3dbbb7c6d_Traceguids), allocation_2, current_thread_2);
                                            value_10 = (uint32_t)((uint64_t)current_thread_2 >> 0x20);
                                        }
                                        if (WdLoadField(&value_6, 4, 4))
                                        {
                                            if (WdLoadField(&value_6, 4, 4) == 3)
                                            {
                                                if (!byte_value)
                                                {
                                                    MpStoreGoodBootSector(allocation_2);
                                                }
                                                goto block_3;
                                            }
                                            if (WdLoadField(&value_6, 4, 4) == 0x10)
                                            {
                                                *bytes_2 = 1;
                                                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                                                {
                                                    process_id = 0;
                                                    WPP_SF_Z(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x22, WD_SYMBOL_ADDRESS(WPP_3a24fb14a98a3bab9c6401a3dbbb7c6d_Traceguids), allocation_2);
                                                }
                                                if (!byte_value)
                                                {
                                                    MpRemoveGoodBootSector(allocation_2);
                                                }
                                            }
                                        }
                                        else
                                        {
                                            block_3:
                                            *bytes_2 = 0;
                                        }
                                        data = MpData;
                                        KeEnterCriticalRegion();
                                        ExAcquireResourceExclusiveLite(data + 0x2f0, (uint64_t)process_id & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
                                        if (status != 0x102)
                                        {
                                            SwitchOffPanicMode(0);
                                        }
                                        else
                                        {
                                            *(int32_t *)(MpData + 0x260) = *(int32_t *)(MpData + 0x260) + 1;
                                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                            {
                                                current_thread_2 = (uint64_t)KeGetCurrentThread();
                                                current_thread = ((uint64_t)value_10 & 0xffffffffULL) << 32 | (uint64_t)(*(uint32_t *)(MpData + 0x260)) & 0xffffffffULL;
                                                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x23, WD_SYMBOL_ADDRESS(WPP_3a24fb14a98a3bab9c6401a3dbbb7c6d_Traceguids), current_thread_2, current_thread);
                                                value_10 = (uint32_t)((uint64_t)current_thread >> 0x20);
                                            }
                                            SwitchToPanicMode(0, NULL, 0);
                                            enabled = 1;
                                        }
                                        ExReleaseResourceLite(MpData + 0x2f0);
                                        KeLeaveCriticalRegion();
                                        if (enabled)
                                        {
                                            MpPurgeCache();
                                        }
                                        if (!input_3)
                                        {
                                            process_id = (int64_t)MpAllocatePoolWithTag(1, (char *)0x18, 0x636d504d);
                                            *data_pointer_9 = process_id;
                                            if (process_id)
                                            {
                                                *(int32_t *)(process_id + 0x10) = WdLoadField(&value_6, 4, 4);
                                                *(uint32_t **)(*data_pointer_9) = allocation_4;
                                                allocation_4 = NULL;
                                                data_pointer_7 = NULL;
                                                *(int64_t *)(*data_pointer_9 + 8) = process_context;
                                                process_context = 0;
                                                *(char *)(*data_pointer_9 + 0x14) = byte_value;
                                            }
                                            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                            {
                                                bytes = *(char **)(value_8 + 0x188);
                                                value_2 = 0x24;
                                                current_thread_2 = ((uint64_t)value_10 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INSUFFICIENT_RESOURCES & 0xffffffffULL;
                                                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_2, WD_SYMBOL_ADDRESS(WPP_3a24fb14a98a3bab9c6401a3dbbb7c6d_Traceguids), bytes, current_thread_2);
                                            }
                                        }
                                    }
                                    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                    {
                                        current_thread_2 = (uint64_t)KeGetCurrentThread();
                                        current_thread = 0x1b;
                                        value_12 = ((uint64_t)value_2 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INSUFFICIENT_RESOURCES & 0xffffffffULL;
                                        data_pointer_3 = allocation_4;
                                        WPP_SF_qqL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), current_thread, WD_SYMBOL_ADDRESS(WPP_3a24fb14a98a3bab9c6401a3dbbb7c6d_Traceguids), current_thread_2, object, value_12);
                                        allocation_4 = data_pointer_3;
                                    }
                                }
                                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                {
                                    current_thread = (uint64_t)KeGetCurrentThread();
                                    current_thread_2 = 0x16;
                                    WPP_SF_qDqL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), current_thread_2);
                                }
                            }
                            else
                            {
                                allocation_4 = data_pointer_3;
                                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && (allocation_4 = data_pointer_4, *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4))
                                {
                                    current_thread_2 = (uint64_t)KeGetCurrentThread();
                                    WPP_SF_qZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x14, WD_SYMBOL_ADDRESS(WPP_3a24fb14a98a3bab9c6401a3dbbb7c6d_Traceguids), current_thread_2, allocation_2);
                                }
                            }
                        }
                    }
                    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        bytes = *(char **)(value_8 + 0x188);
                        value_2 = 0x12;
                        data_pointer_4 = data_pointer_3;
                        goto block_1;
                    }
                }
                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    current_thread = (uint64_t)KeGetCurrentThread();
                    current_thread_2 = 0x11;
                    WPP_SF_qDqL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), current_thread_2);
                }
            }
            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                current_thread_2 = (uint64_t)KeGetCurrentThread();
                current_thread = 0x10;
                value_12 = ((uint64_t)value_2 & 0xffffffffULL) << 32 | (uint64_t)0xc0000004 & 0xffffffffULL;
                WPP_SF_qqL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), current_thread, WD_SYMBOL_ADDRESS(WPP_3a24fb14a98a3bab9c6401a3dbbb7c6d_Traceguids), current_thread_2, object, value_12);
                allocation_4 = data_pointer_3;
            }
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            data_pointer_8 = *(void **)(value_8 + 0x188);
            current_thread_2 = 0xe;
            WPP_SF_qDqL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), current_thread_2);
        }
    }
    block_4:
    if (allocation_3)
    {
        ExFreePoolWithTag(allocation_3, 0x7462504d);
    }

    ObfDereferenceObject(object);
    process_id = ObTotalReferences;
    WdUnresolvedAtomicBegin();
    ObTotalReferences -= 1;
    WdUnresolvedAtomicEnd();
    if (process_id + -1 < 0 && *(int32_t *)(MpData + 0x364) <= -1)
    {
        if (KdRefreshDebuggerNotPresent())
        {
            KeBugCheck(1);
        }
        (*(WD_ROUTINE)swi(3))();
        return;
    }
    if (allocation)
    {
        MpDeleteBootScanContext(allocation);
    }
    if (allocation_2)
    {
        ExFreePoolWithTag(allocation_2, 0x6e64504d);
    }
    if (allocation_4)
    {
        ExFreePoolWithTag(allocation_4, 0x7362504d);
    }
    if (process_context)
    {
        MpReleaseProcessContext(process_context);
    }
    KeLeaveCriticalRegion();
    return;
}

void MpReadRawDevice(uint64_t input, uint64_t input_2, uint64_t input_3, uint32_t input_4, uint32_t input_5)
{
    uint8_t *bytes;
    uint64_t value;
    uint64_t value_2;
    uint64_t *data_pointer;
    uint32_t value_3;
    uint64_t value_4;
    uint64_t value_5;
    uint64_t value_6;
    uint64_t value_7;
    uint32_t value_9;
    int32_t value_10;
    int64_t value_11;
    uint64_t value_12;
    uint64_t wait_object;
    uint64_t value_13;
    uint32_t values[2];
    value_9 = input_5;
    value_3 = (uint32_t)((uint64_t)value_2 >> 0x20);
    wait_object = 0;
    value_6 = 0;
    value_7 = 0;
    value_13 = 0;
    value_5 = 0;
    values[0] = 0;
    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
    {
        WPP_SF_IDD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18));
    }
    KeInitializeEvent(&wait_object, 0, 0);
    if (value_9 & 1)
    {
        value_12 = ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)4 & 0xffffffffULL;
        value_11 = IoBuildDeviceIoControlRequest(0x74800, input, 0, 0, values, value_12, value_4 & 0xffffffffffffff00, &wait_object, &value_13);
        value_3 = (uint32_t)((uint64_t)value_12 >> 0x20);
        if (value_11)
        {
            value_10 = IofCallDriver(input, value_11);
            if (value_10 == 0x103)
            {
                KeWaitForSingleObject(&wait_object, 0, 0, 0, 0);
                value_10 = (int32_t)value_13;
            }
            if (!(value_10 + 0x80000000U & 0x80000000) && value_10 != -0x3ffffe7b && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                WPP_SF_qqL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2f, WD_SYMBOL_ADDRESS(WPP_3a24fb14a98a3bab9c6401a3dbbb7c6d_Traceguids), (uint64_t)KeGetCurrentThread(), input, ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)value_10 & 0xffffffffULL);
            }
            KeResetEvent(&wait_object);
            goto block_1;
        }
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return;
        }
        value_12 = 0x2e;
    }
    else
    {
        block_1:
        value = 0;

        data_pointer = &wait_object;
        value_11 = IoBuildSynchronousFsdRequest(3, input, input_3, (uint64_t)input_4, &value, data_pointer, &value_13);
        value_3 = (uint32_t)((uint64_t)data_pointer >> 0x20);
        if (value_11)
        {
            if (value_9 & 1)
            {
                bytes = (uint8_t *)(*(int64_t *)(value_11 + 0xb8) + -0x46);
                *bytes = *bytes | 2;
            }
            value_10 = IofCallDriver(input, value_11);
            if (value_10 == 0x103)
            {
                KeWaitForSingleObject(&wait_object, 0, 0, 0, 0);
                value_10 = (int32_t)value_13;
            }
            if (0 <= value_10)
            {
                if (value_5 != input_4 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qPqL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x32);
                }
            }
            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qqL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x31, WD_SYMBOL_ADDRESS(WPP_3a24fb14a98a3bab9c6401a3dbbb7c6d_Traceguids), (uint64_t)KeGetCurrentThread(), input, ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)value_10 & 0xffffffffULL);
            }
            return;
        }
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return;
        }
        value_12 = 0x30;
    }
    WPP_SF_qqL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_12, WD_SYMBOL_ADDRESS(WPP_3a24fb14a98a3bab9c6401a3dbbb7c6d_Traceguids), (uint64_t)KeGetCurrentThread(), input, ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INSUFFICIENT_RESOURCES & 0xffffffffULL);
    return;
}

uint64_t MpCreateBootScanContext(int64_t input, uint32_t input_2, uint64_t *input_3)
{
    int64_t *data_pointer;
    int64_t data;
    WD_LAYOUT_46 *allocation;
    int64_t value;
    uint64_t value_2 = 0;
    allocation = (WD_LAYOUT_46 *)MpAllocatePoolWithTag(1, (char *)0x20, 0x6362504d);
    data = MpData;
    if (!allocation)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x29, WD_SYMBOL_ADDRESS(WPP_3a24fb14a98a3bab9c6401a3dbbb7c6d_Traceguids), (uint64_t)KeGetCurrentThread(), WD_STATUS_INSUFFICIENT_RESOURCES);
        }
        return WD_STATUS_INSUFFICIENT_RESOURCES;
    }
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(data + 0xbe8, (uint64_t)value_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
    data = MpData;
    value = MpData + 0xbd8;
    data_pointer = *(int64_t **)(MpData + 0xbe0);
    if (*data_pointer == value)
    {
        allocation->field_0x8 = data_pointer;
        allocation->field_0x0 = value;
        *data_pointer = (int64_t)allocation;
        *(WD_LAYOUT_46 **)(data + 0xbe0) = allocation;
        allocation->field_0x10 = input;
        allocation->field_0x18 = input_2;
        ExReleaseResourceLite(MpData + 0xbe8);
        KeLeaveCriticalRegion();
        *input_3 = allocation;
        return 0;
    }
    (*(WD_ROUTINE)swi(0x29))(3);
}

void MpSendPostMountAsyncMessage(WD_LAYOUT_47 *input)
{
    int16_t *trace_argument_1;
    uint64_t value;
    uint64_t value_2;
    void *data_pointer;
    uint32_t value_3;
    uint32_t value_4;
    int64_t value_6;
    uint32_t value_7;
    uint32_t value_8;
    int64_t value_9;
    int32_t value_10;
    uint64_t event_id;
    int64_t value_11;
    value_3 = (uint32_t)((uint64_t)value >> 0x20);
    value_4 = 0;
    value_11 = 0;
    if (*(uint32_t *)(MpData + 0x364) & 1)
    {
        data_pointer = input->field_0x8;
        if (MpShouldSendBmMessage(data_pointer))
        {
            value_10 = MpQuerySessionId();
            if (value_10 <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
            {
                event_id = ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)value_10 & 0xffffffffULL;
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x3e, WD_SYMBOL_ADDRESS(WPP_3a24fb14a98a3bab9c6401a3dbbb7c6d_Traceguids), (uint64_t)KeGetCurrentThread(), event_id);
                value_3 = (uint32_t)((uint64_t)event_id >> 0x20);
            }
            value_10 = MpAsyncCreateNotification(&value_11, 0x2100);
            value_9 = value_11;
            if (0 <= value_10)
            {
                trace_argument_1 = (int16_t *)(value_11 + 0x36);
                *(uint32_t *)(value_11 + 0x18) = *(uint32_t *)(input->field_0x0 + 0x28);
                *(uint64_t *)(value_11 + 0x1c) = *(uint64_t *)(input->field_0x0 + 0x38);
                *(uint32_t *)(value_11 + 0x28) = value_4;
                *(uint32_t *)(value_11 + 0x24) = *(uint32_t *)(input->field_0x0 + 0x40);
                *(char *)(value_11 + 0x2c) = input->field_0x14;
                *(uint32_t *)(value_11 + 0x30) = input->field_0x10;
                *(uint16_t *)(value_11 + 0x34) = *(uint16_t *)(input->field_0x0 + 0x58);
                value_6 = input->field_0x0;
                event_id = *(uint64_t *)(value_6 + 0x62);
                *(uint64_t *)trace_argument_1 = *(uint64_t *)(value_6 + 0x5a);
                *(uint64_t *)(value_11 + 0x3e) = event_id;
                event_id = *(uint64_t *)(value_6 + 0x72);
                *(uint64_t *)(value_11 + 0x46) = *(uint64_t *)(value_6 + 0x6a);
                *(uint64_t *)(value_11 + 0x4e) = event_id;
                event_id = *(uint64_t *)(value_6 + 0x82);
                *(uint64_t *)(value_11 + 0x56) = *(uint64_t *)(value_6 + 0x7a);
                *(uint64_t *)(value_11 + 0x5e) = event_id;
                event_id = *(uint64_t *)(value_6 + 0x92);
                *(uint64_t *)(value_11 + 0x66) = *(uint64_t *)(value_6 + 0x8a);
                *(uint64_t *)(value_11 + 0x6e) = event_id;
                event_id = *(uint64_t *)(value_6 + 0xa2);
                *(uint64_t *)(value_11 + 0x76) = *(uint64_t *)(value_6 + 0x9a);
                *(uint64_t *)(value_11 + 0x7e) = event_id;
                event_id = *(uint64_t *)(value_6 + 0xb2);
                *(uint64_t *)(value_11 + 0x86) = *(uint64_t *)(value_6 + 0xaa);
                *(uint64_t *)(value_11 + 0x8e) = event_id;
                event_id = *(uint64_t *)(value_6 + 0xc2);
                *(uint64_t *)(value_11 + 0x96) = *(uint64_t *)(value_6 + 0xba);
                *(uint64_t *)(value_11 + 0x9e) = event_id;
                event_id = *(uint64_t *)(value_6 + 0xd2);
                *(uint64_t *)(value_11 + 0xa6) = *(uint64_t *)(value_6 + 0xca);
                *(uint64_t *)(value_11 + 0xae) = event_id;
                event_id = *(uint64_t *)(value_6 + 0xe2);
                *(uint64_t *)(value_11 + 0xb6) = *(uint64_t *)(value_6 + 0xda);
                *(uint64_t *)(value_11 + 0xbe) = event_id;
                event_id = *(uint64_t *)(value_6 + 0xf2);
                *(uint64_t *)(value_11 + 0xc6) = *(uint64_t *)(value_6 + 0xea);
                *(uint64_t *)(value_11 + 0xce) = event_id;
                value_3 = *(uint32_t *)(value_6 + 0xfe);
                value_7 = *(uint32_t *)(value_6 + 0x102);
                value_8 = *(uint32_t *)(value_6 + 0x106);
                *(uint32_t *)(value_11 + 0xd6) = *(uint32_t *)(value_6 + 0xfa);
                *(uint32_t *)(value_11 + 0xda) = value_3;
                *(uint32_t *)(value_11 + 0xde) = value_7;
                *(uint32_t *)(value_11 + 0xe2) = value_8;
                value_3 = *(uint32_t *)(value_6 + 0x10e);
                value_7 = *(uint32_t *)(value_6 + 0x112);
                value_8 = *(uint32_t *)(value_6 + 0x116);
                *(uint32_t *)(value_11 + 0xe6) = *(uint32_t *)(value_6 + 0x10a);
                *(uint32_t *)(value_11 + 0xea) = value_3;
                *(uint32_t *)(value_11 + 0xee) = value_7;
                *(uint32_t *)(value_11 + 0xf2) = value_8;
                *(uint32_t *)(value_11 + 0xf6) = *(uint32_t *)(value_6 + 0x11a);
                memmove((uint64_t *)(value_11 + 0xfa), (uint64_t *)(input->field_0x0 + 0x188), 0x2000);
                *(uint32_t *)(value_9 + 8) = 0x2100;
                *(uint32_t *)(value_9 + 0x10) = 8;
                data_pointer = input->field_0x8;
                value_10 = MpAsyncSendNotification(value_9, 0x2100, 1, 1, data_pointer);
                if (0 <= value_10)
                {
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                    {
                        WPP_SF_S(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x41, WD_SYMBOL_ADDRESS(WPP_3a24fb14a98a3bab9c6401a3dbbb7c6d_Traceguids), trace_argument_1);
                    }
                }
                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    event_id = 0x40;
                    value_2 = (uint64_t)((uint64_t)data_pointer) & 0xffffffff00000000 | (uint64_t)value_10 & 0xffffffff;
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_3a24fb14a98a3bab9c6401a3dbbb7c6d_Traceguids), (uint64_t)KeGetCurrentThread(), value_2);
                }
            }
            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                event_id = 0x3f;
                value_2 = ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)value_10 & 0xffffffffULL;
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_3a24fb14a98a3bab9c6401a3dbbb7c6d_Traceguids), (uint64_t)KeGetCurrentThread(), value_2);
            }
            if (value_9)
            {
                MpAsyncDereferenceNotification(value_9);
            }
            return;
        }
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4))
        {
            return;
        }
        event_id = 0x3c;
    }
    else
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4))
        {
            return;
        }
        event_id = 0x3b;
    }
    WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_3a24fb14a98a3bab9c6401a3dbbb7c6d_Traceguids));
    return;
}

void MpDeleteBootScanContext(WD_LAYOUT_25 *allocation, uint64_t input)
{
    int64_t data;
    int64_t *data_pointer;
    data = MpData;
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(data + 0xbe8, (uint64_t)input & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
    data = allocation->field_0x0;
    if (*(WD_LAYOUT_25 **)(data + 8) == allocation && (data_pointer = allocation->field_0x8, (WD_LAYOUT_25 *)(*data_pointer) == allocation))
    {
        *data_pointer = data;
        *(int64_t **)(data + 8) = data_pointer;
        ExReleaseResourceLite(MpData + 0xbe8);
        KeLeaveCriticalRegion();
        ExFreePoolWithTag(allocation, 0x6362504d);
        return;
    }
    (*(WD_ROUTINE)swi(0x29))(3);
}

uint32_t MpValidateAndReferenceBootScanDevice(int64_t object, int32_t input)
{
    uint8_t byte_value;
    int64_t data;
    uint64_t *data_pointer;
    uint32_t value;
    data = MpData;
    byte_value = 0;
    value = input;
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(data + 0xbe8, (uint32_t)value & 0xffffff00 | (uint32_t)1 & 0xff);
    data_pointer = *(uint64_t **)((uint64_t *)(MpData + 0xbd8));
    while (true)
    {
        if (data_pointer == (uint64_t *)(MpData + 0xbd8))
        {
            ExReleaseResourceLite(MpData + 0xbe8);
            KeLeaveCriticalRegion();
            return ~(-(uint32_t)byte_value) & WD_STATUS_NOT_FOUND;
        }
        if (data_pointer[2] == object && *(int32_t *)(&data_pointer[3]) == input)
        {
            byte_value = 1;
            ObfReferenceObject(object);
            WdUnresolvedAtomicBegin();
            ObTotalReferences += 1;
            WdUnresolvedAtomicEnd();
            ExReleaseResourceLite(MpData + 0xbe8);
            KeLeaveCriticalRegion();
            return ~(-(uint32_t)byte_value) & WD_STATUS_NOT_FOUND;
        }
        data_pointer = (uint64_t *)(*data_pointer);
    }
}

uint64_t MpWriteBootSector(void *input, uint64_t input_2, uint64_t provider)
{
    uint32_t value;
    int64_t object;
    uint32_t value_2;
    uint64_t event_id;
    object = ((int64_t *)input)[2];
    if (!((uint32_t *)input)[10])
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x33, WD_SYMBOL_ADDRESS(WPP_3a24fb14a98a3bab9c6401a3dbbb7c6d_Traceguids), (uint64_t)KeGetCurrentThread());
        }
        return 0;
    }
    event_id = ((uint64_t *)input)[4];
    if (event_id & 0x1ff)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qi(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, provider, (uint64_t)KeGetCurrentThread(), event_id);
        }
    }
    else
    {
        if (((uint32_t *)input)[10] <= (uint32_t)(((int32_t *)input)[1] - 0x2cU))
        {
            value = ((uint32_t *)input)[6];
            if (MpValidateAndReferenceBootScanDevice(object, value))
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x36, WD_SYMBOL_ADDRESS(WPP_3a24fb14a98a3bab9c6401a3dbbb7c6d_Traceguids), (uint64_t)KeGetCurrentThread());
                }
                return 0xc00000b6;
            }
            value_2 = MpWriteRawDevice(object, ((uint64_t *)input)[4], (int64_t)input + 0x2c, ((uint32_t *)input)[10]);
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                WPP_SF_iDD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18));
            }
            ObfDereferenceObject(object);
            object = ObTotalReferences;
            WdUnresolvedAtomicBegin();
            ObTotalReferences -= 1;
            WdUnresolvedAtomicEnd();
            if (object + -1 <= -1 && *(int32_t *)(MpData + 0x364) <= -1)
            {
                if (KdRefreshDebuggerNotPresent())
                {
                    KeBugCheck(1);
                }
                event_id = (*(WD_ROUTINE)swi(3))();
                return event_id;
            }
            return value_2;
        }
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x35, WD_SYMBOL_ADDRESS(WPP_3a24fb14a98a3bab9c6401a3dbbb7c6d_Traceguids), (uint64_t)KeGetCurrentThread());
        }
    }
    return WD_STATUS_INVALID_PARAMETER;
}

void MpWriteRawDevice(uint64_t input, uint64_t input_2, uint64_t input_3, uint64_t input_4)
{
    int32_t value;
    uint64_t value_2 = 0;
    uint64_t value_3 = 0;
    uint64_t value_4 = 0;
    int64_t value_6;
    uint64_t event = 0;
    uint64_t value_7 = 0;
    uint64_t value_8;
    uint64_t *data_pointer;
    uint32_t value_9;
    KeInitializeEvent(&event, 0, 0);
    data_pointer = &event;
    value_8 = input_2;
    value_6 = IoBuildSynchronousFsdRequest(4, input, input_3, input_4 & 0xffffffff, &value_8, data_pointer, &value_7);
    value_9 = (uint32_t)((uint64_t)data_pointer >> 0x20);
    if (value_6)
    {
        value = IofCallDriver(input, value_6);
        if (value == 0x103)
        {
            KeWaitForSingleObject(&event, 0, 0, 0, 0);
            value = (int32_t)value_7;
        }
        if (0 <= value)
        {
            if (value_2 != (input_4 & 0xffffffff) && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qPqL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2c);
            }
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qqL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2b, WD_SYMBOL_ADDRESS(WPP_3a24fb14a98a3bab9c6401a3dbbb7c6d_Traceguids), (uint64_t)KeGetCurrentThread(), input, ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)value & 0xffffffffULL);
        }
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_qqL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2a, WD_SYMBOL_ADDRESS(WPP_3a24fb14a98a3bab9c6401a3dbbb7c6d_Traceguids), (uint64_t)KeGetCurrentThread(), input, ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INSUFFICIENT_RESOURCES & 0xffffffffULL);
    }
    return;
}

void MpScanBootSector__finally_0(uint64_t input, void *input_2)
{
    int64_t value;
    if (((int64_t *)input_2)[0xc])
    {
        ExFreePoolWithTag(((int64_t *)input_2)[0xc], 0x7462504d);
    }
    ObfDereferenceObject(((uint64_t *)input_2)[0x23]);
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
    if (((WD_LAYOUT_25 **)input_2)[0xe])
    {
        MpDeleteBootScanContext(((WD_LAYOUT_25 **)input_2)[0xe]);
    }
    if (((int64_t *)input_2)[0xf])
    {
        ExFreePoolWithTag(((int64_t *)input_2)[0xf], 0x6e64504d);
    }
    if (((int64_t *)input_2)[0x11])
    {
        ExFreePoolWithTag(((int64_t *)input_2)[0x11], 0x7362504d);
    }
    if (((void **)input_2)[0xb])
    {
        MpReleaseProcessContext(((void **)input_2)[0xb]);
    }
    KeLeaveCriticalRegion();
    return;
}

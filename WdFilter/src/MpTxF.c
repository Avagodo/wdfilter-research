#include "wdfilter.h"

uint64_t MpSetFileWriteHistoryFlag__MpTxF(WD_LAYOUT_2 *input, int16_t input_2, void *input_3)
{
    uint32_t *atomic_value;
    if (!input)
    {
        WdAtomicOr32((volatile int32_t *)((uint32_t *)((int64_t)input_3 + 0x184)), 2);
        return 0;
    }
    if (!(input->field_0xa8 & 1))
    {
        if ((uint16_t)(input_2 - 1U) <= 0xfffc)
        {
            return 0;
        }
        FltAcquirePushLockShared((int64_t)input_3 + 0xc0);
        atomic_value = (uint32_t *)(((int64_t *)input_3)[0x1a] + 0x7c);
        if (!((int64_t *)input_3)[0x1a])
        {
            atomic_value = &((uint32_t *)input_3)[0x61];
        }
        WdAtomicOr32((volatile int32_t *)atomic_value, 2);
        FltReleasePushLock((int64_t)input_3 + 0xc0);
        return 0;
    }
    return 0xc00000e5;
}

uint64_t MpTxfResolveTransaction(WD_LAYOUT_34 *input, WD_LAYOUT_33 *input_2, uint64_t *input_3, int64_t *input_4, char *input_5)
{
    uint32_t value;
    uint64_t value_2;
    int64_t object;
    bool enabled = 0;
    if (!input || !input_2 || !input_3)
    {
        return WD_STATUS_INVALID_PARAMETER;
    }
    object = input->field_0x28;
    if (object != input_2->field_0xc8)
    {
        object = 0;
        if (!input_2->field_0xc8)
        {
            goto block_3;
        }
        if (!MpTxfData)
        {
            value_2 = WD_STATUS_NOT_SUPPORTED;
            block_1:
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return value_2;
            }

            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return value_2;
            }
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x20, WD_SYMBOL_ADDRESS(WPP_7b03be39b4a33db2ed204d39738df527_Traceguids), (uint64_t)KeGetCurrentThread(), (int32_t)value_2);
            return value_2;
        }
        FltAcquirePushLockShared(&input_2->field_0x0[0xc0]);
        if (input_2->field_0xc8)
        {
            ObfReferenceObject();
            WdUnresolvedAtomicBegin();
            ObTotalReferences += 1;
            WdUnresolvedAtomicEnd();
            object = input_2->field_0xc8;
        }
        FltReleasePushLock(&input_2->field_0x0[0xc0]);
        if (!object)
        {
            value_2 = WD_STATUS_NOT_FOUND;
            goto block_1;
        }
        enabled = 1;
        block_2:
        value = MpTxfGetContext(input, 0, object, input_3);

        value_2 = value;
        if ((int32_t)value <= -1)
        {
            if (value != WD_STATUS_NOT_FOUND && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x21, WD_SYMBOL_ADDRESS(WPP_7b03be39b4a33db2ed204d39738df527_Traceguids), (uint64_t)KeGetCurrentThread(), value);
            }
            goto block_4;
        }
    }
    else
    {
        if (object)
        {
            goto block_2;
        }
        block_3:
        *input_3 = 0;
    }
    if (input_4 && input_5)
    {
        *input_4 = object;
        object = 0;
        *input_5 = enabled;
        enabled = 0;
    }
    value_2 = 0;
    block_4:
    if (enabled && object)
    {
        ObfDereferenceObject(object);
        object = ObTotalReferences;
        WdUnresolvedAtomicBegin();
        ObTotalReferences -= 1;
        WdUnresolvedAtomicEnd();
        if (object + -1 <= -1 && *(int32_t *)(MpData + 0x364) <= -1)
        {
            if (!KdRefreshDebuggerNotPresent())
            {
                value_2 = (*(WD_ROUTINE)swi(3))();
                return value_2;
            }
            KeBugCheck(1);
        }
    }

    return value_2;
}

void MpTxfGetContext(void *input, bool input_2, int64_t input_3, uint64_t *input_4)
{
    int64_t *data_pointer;
    uint16_t *wide_text;
    int64_t value_2;
    int32_t trace_argument_1;
    int64_t *data_pointer_2;
    uint64_t event_id;
    uint16_t *context = NULL;
    int64_t instance_context = 0;
    uint16_t *wide_text_2 = NULL;
    if (!MpTxfData)
    {
        return;
    }
    if (!input || !input_4 || !input_3)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xb, WD_SYMBOL_ADDRESS(WPP_7b03be39b4a33db2ed204d39738df527_Traceguids));
        }
        return;
    }
    trace_argument_1 = FltGetTransactionContext(((uint64_t *)input)[3], input_3, &context);
    if (0 <= trace_argument_1)
    {
        *input_4 = context;
        return;
    }
    if (trace_argument_1 != -0x3ffffddb)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xc, WD_SYMBOL_ADDRESS(WPP_7b03be39b4a33db2ed204d39738df527_Traceguids), trace_argument_1);
        }
        return;
    }
    if (!input_2)
    {
        return;
    }
    trace_argument_1 = FltGetInstanceContext(((uint64_t *)input)[3], &instance_context);
    if (0 <= trace_argument_1)
    {
        trace_argument_1 = FltAllocateContext(((uint64_t *)input)[1], 0x20, 0xb0, ExDefaultNonPagedPoolType, &context);
        if (0 <= trace_argument_1)
        {
            event_id = 0;
            memset(context, 0, (char *)0xb0);
            *context = 0xda05;
            context[1] = 0xb0;
            ExInitializeResourceLite(&context[4]);
            wide_text = &context[0x38];
            *(uint16_t **)(&context[0x3c]) = wide_text;
            *(uint16_t **)wide_text = wide_text;
            wide_text = &context[0x44];
            *(uint16_t **)(&context[0x48]) = wide_text;
            *(uint16_t **)wide_text = wide_text;
            FltReferenceContext(instance_context);
            value_2 = instance_context;
            *(int64_t *)(&context[0x40]) = instance_context;
            KeEnterCriticalRegion();
            ExAcquireResourceExclusiveLite(value_2 + 0x120, (uint64_t)event_id & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
            data_pointer_2 = (int64_t *)(&context[0x38]);
            data_pointer = *(int64_t **)(instance_context + 400);
            if (*data_pointer != instance_context + 0x188)
            {
                (*(WD_ROUTINE)swi(0x29))(3);
            }
            *data_pointer_2 = instance_context + 0x188;
            *(int64_t **)(&context[0x3c]) = data_pointer;
            *data_pointer = (int64_t)data_pointer_2;
            *(int64_t **)(instance_context + 400) = data_pointer_2;
            ExReleaseResourceLite(instance_context + 0x120);
            KeLeaveCriticalRegion();
            wide_text = context;
            *(int64_t **)(&wide_text[0x50]) = MpAllocatePoolWithTag(1, (char *)0x10, 0x6774504d);
            if (*(int64_t *)(&context[0x50]))
            {
                trace_argument_1 = MpQueryTransactionId(input_3);
                wide_text = context;
                if (0 <= trace_argument_1)
                {
                    *(int64_t **)(&wide_text[0x4c]) = MpAllocatePoolWithTag(1, (char *)0x10, 0x6e74504d);
                    if (*(int64_t *)(&context[0x4c]))
                    {
                        *(uint64_t *)(*(int64_t *)(&context[0x4c]) + 8) = 0;
                        *(*(uint16_t **)(&context[0x4c])) = 0;
                        *(uint16_t *)(*(int64_t *)(&context[0x4c]) + 2) = 0;
                        trace_argument_1 = RtlStringFromGUID(*(uint64_t *)(&context[0x50]), *(uint64_t *)(&context[0x4c]));
                        if (trace_argument_1 <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x11, WD_SYMBOL_ADDRESS(WPP_7b03be39b4a33db2ed204d39738df527_Traceguids), trace_argument_1);
                        }
                    }
                    trace_argument_1 = FltSetTransactionContext(((uint64_t *)input)[3], input_3, 1, context, &wide_text_2);
                    if (trace_argument_1 + 0x80000000U & 0x80000000 || trace_argument_1 == -0x3fe3fffe)
                    {
                        if (trace_argument_1 != -0x3fe3fffe)
                        {
                            wide_text = context;
                        }
                        else
                        {
                            FltReleaseContext(context);
                            context = wide_text_2;
                            wide_text = wide_text_2;
                        }
                        trace_argument_1 = FltEnlistInTransaction(((uint64_t *)input)[3], input_3, wide_text, 0xc);
                        if (trace_argument_1 + 0x80000000U & 0x80000000 || trace_argument_1 == -0x3fe3ffe5)
                        {
                            *input_4 = context;
                            context = NULL;
                        }
                        else
                        {
                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                            {
                                WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x13, WD_SYMBOL_ADDRESS(WPP_7b03be39b4a33db2ed204d39738df527_Traceguids), trace_argument_1);
                            }
                            FltDeleteContext(context);
                        }
                    }
                    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        event_id = 0x12;
                        WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_7b03be39b4a33db2ed204d39738df527_Traceguids), trace_argument_1);
                    }
                }
                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    event_id = 0x10;
                    WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_7b03be39b4a33db2ed204d39738df527_Traceguids), trace_argument_1);
                }
            }
            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                event_id = 0xf;
                trace_argument_1 = -0x3fffff66;
                WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_7b03be39b4a33db2ed204d39738df527_Traceguids), trace_argument_1);
            }
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            event_id = 0xe;
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_7b03be39b4a33db2ed204d39738df527_Traceguids), trace_argument_1);
        }
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        event_id = 0xd;
        WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_7b03be39b4a33db2ed204d39738df527_Traceguids), trace_argument_1);
    }
    if (instance_context)
    {
        FltReleaseContext(instance_context);
    }
    if (context)
    {
        FltReleaseContext(context);
    }
    return;
}

uint64_t MpTxfAddStream(void *input, void *input_2, int16_t input_3, void *context)
{
    int64_t lock;
    int64_t *data_pointer;
    uint64_t value;
    int64_t *data_pointer_2;
    int64_t *object;
    uint32_t value_2;
    uint32_t value_3;
    uint32_t value_4;
    int64_t *data_pointer_3;
    int64_t *data_pointer_4;
    uint64_t value_5;
    int64_t value_6;
    int64_t *data_pointer_5;
    if (!MpTxfData)
    {
        return WD_STATUS_NOT_SUPPORTED;
    }
    if (!input_2 || !context || !input)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x18, WD_SYMBOL_ADDRESS(WPP_7b03be39b4a33db2ed204d39738df527_Traceguids));
        }
        return WD_STATUS_INVALID_PARAMETER;
    }
    if (0xfffc < (uint16_t)(input_3 - 1U))
    {
        lock = (int64_t)context + 0xc0;
        FltAcquirePushLockShared(lock);
        if (((int64_t *)context)[0x19] == ((int64_t *)input)[5])
        {
            FltReleasePushLock(lock);
            return 0;
        }
        FltReleasePushLock(lock);
        ObfReferenceObject(((uint64_t *)input)[5]);
        WdUnresolvedAtomicBegin();
        ObTotalReferences += 1;
        WdUnresolvedAtomicEnd();
        object = ((int64_t **)input)[5];
        data_pointer_4 = (int64_t *)ExAllocateFromPagedLookasideList((void *)(MpTxfData + 0x40));
        if (!data_pointer_4)
        {
            WdAtomicOr32((volatile int32_t *)((uint32_t *)((int64_t)input_2 + 0xa8)), 1);
            if (object)
            {
                ObfDereferenceObject(object);
                lock = ObTotalReferences;
                WdUnresolvedAtomicBegin();
                ObTotalReferences -= 1;
                WdUnresolvedAtomicEnd();
                if (lock + -1 <= -1 && *(int32_t *)(MpData + 0x364) <= -1)
                {
                    if (!KdRefreshDebuggerNotPresent())
                    {
                        value_5 = (*(WD_ROUTINE)swi(3))();
                        return value_5;
                    }
                    KeBugCheck(1);
                }
            }
            return WD_STATUS_INSUFFICIENT_RESOURCES;
        }
        memset(&data_pointer_4[2], 0, (char *)0x158);
        data_pointer_4[1] = (int64_t)data_pointer_4;
        *data_pointer_4 = (int64_t)data_pointer_4;
        FltReferenceContext(context);
        data_pointer_4[8] = (int64_t)context;
        *(uint32_t *)(&data_pointer_4[3]) = 0;
        value_6 = 0;
        WdUnresolvedAtomicBegin();
        value = *(int64_t *)((int64_t)context + 0xb0);
        if (value)
        {
            value_6 = value;
        }
        else
        {
            *(int64_t *)((int64_t)context + 0xb0) = 0;
        }
        WdUnresolvedAtomicEnd();
        data_pointer_4[4] = value_6;
        *(uint32_t *)(&data_pointer_4[6]) = ((uint32_t *)context)[0xc];
        WdAtomicAnd32((volatile int32_t *)((uint32_t *)(&data_pointer_4[6])), 0xffffbfff);
        data_pointer_4[2] = ((int64_t *)input)[5];
        value = 2;
        data_pointer_4[7] = ((int64_t *)context)[0x15];
        data_pointer_2 = &data_pointer_4[9];
        data_pointer_3 = &((int64_t *)context)[0x2a];
        do
        {
            data_pointer = data_pointer_3;
            data_pointer_5 = data_pointer_2;
            value_6 = data_pointer[1];
            *data_pointer_5 = *data_pointer;
            data_pointer_5[1] = value_6;
            value_6 = data_pointer[3];
            data_pointer_5[2] = data_pointer[2];
            data_pointer_5[3] = value_6;
            value_6 = data_pointer[5];
            data_pointer_5[4] = data_pointer[4];
            data_pointer_5[5] = value_6;
            value_6 = data_pointer[7];
            data_pointer_5[6] = data_pointer[6];
            data_pointer_5[7] = value_6;
            value_6 = data_pointer[9];
            data_pointer_5[8] = data_pointer[8];
            data_pointer_5[9] = value_6;
            value_6 = data_pointer[0xb];
            data_pointer_5[10] = data_pointer[10];
            data_pointer_5[0xb] = value_6;
            value_6 = data_pointer[0xd];
            data_pointer_5[0xc] = data_pointer[0xc];
            data_pointer_5[0xd] = value_6;
            value_6 = data_pointer[0xf];
            data_pointer_5[0xe] = data_pointer[0xe];
            data_pointer_5[0xf] = value_6;
            value -= 1;
            data_pointer_2 = &data_pointer_5[0x10];
            data_pointer_3 = &data_pointer[0x10];
        }
        while (value);
        value_2 = ((uint32_t *)data_pointer)[0x21];
        value_3 = *(uint32_t *)(&data_pointer[0x11]);
        value_4 = ((uint32_t *)data_pointer)[0x23];
        *(uint32_t *)(&data_pointer_5[0x10]) = *(uint32_t *)(&data_pointer[0x10]);
        ((uint32_t *)data_pointer_5)[0x21] = value_2;
        *(uint32_t *)(&data_pointer_5[0x11]) = value_3;
        ((uint32_t *)data_pointer_5)[0x23] = value_4;
        value_2 = ((uint32_t *)data_pointer)[0x25];
        value_3 = *(uint32_t *)(&data_pointer[0x13]);
        value_4 = ((uint32_t *)data_pointer)[0x27];
        *(uint32_t *)(&data_pointer_5[0x12]) = *(uint32_t *)(&data_pointer[0x12]);
        ((uint32_t *)data_pointer_5)[0x25] = value_2;
        *(uint32_t *)(&data_pointer_5[0x13]) = value_3;
        ((uint32_t *)data_pointer_5)[0x27] = value_4;
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite((int64_t)input_2 + 8, (uint64_t)value & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
        FltAcquirePushLockExclusive(lock);
        value = ((int64_t *)context)[0x19];
        data_pointer_2 = data_pointer_4;
        value_6 = 0;
        if (value != ((int64_t *)input)[5])
        {
            ((int64_t **)context)[0x19] = object;
            data_pointer_2 = NULL;
            ((int64_t **)context)[0x1a] = data_pointer_4;
            object = ((int64_t **)input_2)[0x12];
            if (*object != (int64_t)input_2 + 0x88)
            {
                (*(WD_ROUTINE)swi(0x29))(3);
            }
            *data_pointer_4 = (int64_t)input_2 + 0x88;
            data_pointer_4[1] = (int64_t)object;
            *object = (int64_t)data_pointer_4;
            ((int64_t **)input_2)[0x12] = data_pointer_4;
            value_6 = value;
            object = data_pointer_2;
        }
        FltReleasePushLock(lock);
        ExReleaseResourceLite((int64_t)input_2 + 8);
        KeLeaveCriticalRegion();
        if (value_6)
        {
            ObDereferenceObjectDeferDelete(value_6);
            lock = ObTotalReferences;
            WdUnresolvedAtomicBegin();
            ObTotalReferences -= 1;
            WdUnresolvedAtomicEnd();
            if (lock + -1 <= -1 && *(int32_t *)(MpData + 0x364) <= -1)
            {
                if (!KdRefreshDebuggerNotPresent())
                {
                    value_5 = (*(WD_ROUTINE)swi(3))();
                    return value_5;
                }
                KeBugCheck(1);
            }
        }
        if (object)
        {
            ObfDereferenceObject(object);
            lock = ObTotalReferences;
            WdUnresolvedAtomicBegin();
            ObTotalReferences -= 1;
            WdUnresolvedAtomicEnd();
            if (lock + -1 <= -1 && *(int32_t *)(MpData + 0x364) <= -1)
            {
                if (!KdRefreshDebuggerNotPresent())
                {
                    value_5 = (*(WD_ROUTINE)swi(3))();
                    return value_5;
                }
                KeBugCheck(1);
            }
        }
        if (data_pointer_2)
        {
            if (data_pointer_2[8])
            {
                FltReleaseContext(context);
            }
            ExFreeToPagedLookasideList((void *)(MpTxfData + 0x40), data_pointer_2);
        }
        MpSetFileWriteHistoryFlag__MpTxF(input_2, ((uint16_t *)input)[1], context);
    }
    return 0;
}

void MpTxfIsFileLockByTransaction(void *input, void *input_2, char *input_3)
{
    int32_t value;
    uint64_t value_2 = 0;
    uint64_t value_3;
    uint64_t value_4;
    uint32_t event_id;
    char byte_value;
    uint32_t values[2];
    uint64_t value_6 = 0;
    uint64_t value_7 = 0;
    uint64_t trace_argument_1;
    uint64_t value_8 = 0;
    values[0] = 0;
    value_3 = 0;
    value_4 = 0;
    if (MpTxfData)
    {
        if (input && input_2 && input_3)
        {
            value = FltFsControlFile(((uint64_t *)input)[3], ((uint64_t *)input)[4], 0x9416c, 0, 0, &value_6, 0x30, values);
            if (0 <= value)
            {
                trace_argument_1 = ((uint64_t *)input_2)[0x14];
                if (RtlCompareMemory(&value_7, trace_argument_1, 0x10) != 0x10)
                {
                    goto block_1;
                }
                byte_value = 1;
            }
            else
            {
                if (value != -0x7fe6ffd7)
                {
                    WdAtomicOr32((volatile int32_t *)((uint32_t *)((int64_t)input_2 + 0xa8)), 1);
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1c, WD_SYMBOL_ADDRESS(WPP_7b03be39b4a33db2ed204d39738df527_Traceguids));
                    }
                    if (((int64_t *)input_2)[0x13])
                    {
                        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                        {
                            return;
                        }
                        if (*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            WPP_SF_Z(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1d, WD_SYMBOL_ADDRESS(WPP_7b03be39b4a33db2ed204d39738df527_Traceguids));
                        }
                    }
                    else
                    {
                        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                        {
                            return;
                        }
                        if (*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1e, WD_SYMBOL_ADDRESS(WPP_7b03be39b4a33db2ed204d39738df527_Traceguids));
                        }
                    }
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1f, WD_SYMBOL_ADDRESS(WPP_7b03be39b4a33db2ed204d39738df527_Traceguids), input_2, value);
                    }
                    return;
                }
                block_1:
                byte_value = 0;
            }
            *input_3 = byte_value;
            return;
        }
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return;
        }
        event_id = 0x1b;
        trace_argument_1 = WD_STATUS_INVALID_PARAMETER;
    }
    else
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return;
        }
        event_id = 0x1a;
        trace_argument_1 = WD_STATUS_NOT_SUPPORTED;
    }
    WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_7b03be39b4a33db2ed204d39738df527_Traceguids), trace_argument_1);
    return;
}

void MpTxfCallback(void *input, void *input_2, int32_t trace_argument_1)
{
    int64_t ****data_pointer;
    int64_t ****data_pointer_2;
    int64_t ****data_pointer_3;
    int64_t txf_data;
    int64_t ****data_pointer_4;
    int64_t ***data_pointer_5;
    void *data_pointer_6;
    uint64_t value_2;
    int64_t ****data_pointer_7;
    if (MpTxfData)
    {
        if (input && input_2)
        {
            if (trace_argument_1 - 4U & 0xfffffffbU)
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x17, WD_SYMBOL_ADDRESS(WPP_7b03be39b4a33db2ed204d39738df527_Traceguids), trace_argument_1);
                }
            }
            else
            {
                txf_data = ((int64_t *)input_2)[0x10];
                data_pointer_2 = (int64_t ****)(&data_pointer_7);
                data_pointer_7 = (int64_t ****)(&data_pointer_7);
                data_pointer_6 = input_2;
                KeEnterCriticalRegion(input);
                value_2 = (uint64_t)((uint64_t)data_pointer_6) & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
                ExAcquireResourceExclusiveLite(txf_data + 0x120, value_2);
                KeEnterCriticalRegion();
                value_2 = (uint64_t)value_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
                ExAcquireResourceExclusiveLite((int64_t)input_2 + 8, value_2);
                txf_data = MpTxfData;
                KeEnterCriticalRegion();
                ExAcquireResourceExclusiveLite(txf_data + 0xc0, (uint64_t)value_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
                data_pointer_3 = &((int64_t ****)input_2)[0x11];
                while (data_pointer_4 = (int64_t ****)(*data_pointer_3), data_pointer_4 != data_pointer_3)
                {
                    if ((int64_t ****)data_pointer_4[1] != data_pointer_3 || (data_pointer_5 = *data_pointer_4, (int64_t ****)data_pointer_5[1] != data_pointer_4))
                    {
                        (*(WD_ROUTINE)swi(0x29))(3);
                    }
                    *data_pointer_3 = data_pointer_5;
                    data_pointer_5[1] = (int64_t **)data_pointer_3;
                    data_pointer_5 = data_pointer_4[8];
                    if (trace_argument_1 == 4 && !(((uint32_t *)input_2)[0x2a] & 1))
                    {
                        *(uint32_t *)(&data_pointer_5[4]) = 0;
                        WdAtomicAnd32((volatile int32_t *)((uint32_t *)(&data_pointer_5[6])), 0xffffbfff);
                        WdUnresolvedAtomicBegin();
                        data_pointer_5[0x16] = (int64_t **)data_pointer_4[4];
                        WdUnresolvedAtomicEnd();
                        WdUnresolvedAtomicBegin();
                        data_pointer_5[5] = NULL;
                        WdUnresolvedAtomicEnd();
                        if (*(uint32_t *)(&data_pointer_4[6]) & 2)
                        {
                            WdAtomicOr32((volatile int32_t *)((uint32_t *)(&data_pointer_5[6])), 2);
                        }
                        else
                        {
                            WdAtomicAnd32((volatile int32_t *)((uint32_t *)(&data_pointer_5[6])), 0xfffffffd);
                        }
                        if (*(uint32_t *)(&data_pointer_4[6]) & 4)
                        {
                            WdAtomicOr32((volatile int32_t *)((uint32_t *)(&data_pointer_5[6])), 4);
                        }
                        WdAtomicAnd32((volatile int32_t *)((uint32_t *)(&data_pointer_5[6])), 0xffffffef);
                    }
                    FltAcquirePushLockExclusive(&data_pointer_5[0x18]);
                    if (data_pointer_5[0x19] && data_pointer_5[0x19] == ((int64_t ***)input)[5])
                    {
                        ObDereferenceObjectDeferDelete();
                        txf_data = ObTotalReferences;
                        WdUnresolvedAtomicBegin();
                        ObTotalReferences -= 1;
                        WdUnresolvedAtomicEnd();
                        if (txf_data + -1 <= -1 && *(int32_t *)(MpData + 0x364) <= -1)
                        {
                            if (KdRefreshDebuggerNotPresent())
                            {
                                KeBugCheck(1);
                            }
                            (*(WD_ROUTINE)swi(3))();
                            return;
                        }
                        data_pointer_5[0x19] = NULL;
                        data_pointer_5[0x1a] = NULL;
                    }
                    else
                    {
                        *(uint32_t *)(&data_pointer_5[4]) = 0;
                        WdAtomicAnd32((volatile int32_t *)((uint32_t *)(&data_pointer_5[6])), 0xffffbfff);
                    }
                    FltReleasePushLock(&data_pointer_5[0x18]);
                    if ((int64_t *****)data_pointer_7[1] != &data_pointer_7)
                    {
                        (*(WD_ROUTINE)swi(0x29))(3);
                    }
                    *data_pointer_4 = (int64_t ***)data_pointer_7;
                    data_pointer_4[1] = (int64_t ***)(&data_pointer_7);
                    data_pointer_7[1] = (int64_t ***)data_pointer_4;
                    data_pointer_7 = data_pointer_4;
                }

                ExReleaseResourceLite(MpTxfData + 0xc0);
                KeLeaveCriticalRegion();
                ExReleaseResourceLite((int64_t)input_2 + 8);
                KeLeaveCriticalRegion();
                ExReleaseResourceLite(((int64_t *)input_2)[0x10] + 0x120);
                KeLeaveCriticalRegion();
                while (data_pointer_3 = data_pointer_7, (int64_t *****)data_pointer_7 != &data_pointer_7)
                {
                    if ((int64_t *****)data_pointer_7[1] != &data_pointer_7 || (data_pointer_4 = (int64_t ****)(*data_pointer_7), (int64_t ****)data_pointer_4[1] != data_pointer_7))
                    {
                        (*(WD_ROUTINE)swi(0x29))(3);
                    }
                    data_pointer_4[1] = (int64_t ***)(&data_pointer_7);
                    data_pointer = &data_pointer_7[8];
                    data_pointer_7 = data_pointer_4;
                    if (*data_pointer)
                    {
                        if (((uint32_t *)input_2)[0x2a] & 1 && trace_argument_1 == 4)
                        {
                            FltDeleteContext();
                        }
                        FltReleaseContext(data_pointer_3[8]);
                        data_pointer_3[8] = NULL;
                    }
                    ExFreeToPagedLookasideList((void *)(MpTxfData + 0x40), data_pointer_3);
                }

                if (((uint32_t *)input_2)[0x2a] & 1 && !(trace_argument_1 - 4U & 0xfffffffbU))
                {
                    MpPurgeInstanceScannedFileCache(((void **)input_2)[0x10]);
                }
            }
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x16, WD_SYMBOL_ADDRESS(WPP_7b03be39b4a33db2ed204d39738df527_Traceguids));
        }
    }
    return;
}

void MpTxfDeleteContext(void *input, uint64_t input_2)
{
    int64_t *data_pointer;
    int64_t object;
    uint64_t value;
    int64_t value_2;
    int64_t *data_pointer_2;
    uint64_t value_3;
    uint64_t value_4;
    if ((int16_t)input_2 != 0x20)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x14, WD_SYMBOL_ADDRESS(WPP_7b03be39b4a33db2ed204d39738df527_Traceguids), input_2 & 0xffff);
        }
        KeBugCheckEx(0x108, input_2 & 0xffff, 0x20, 0, 0);
    }
    if (!input)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x15, WD_SYMBOL_ADDRESS(WPP_7b03be39b4a33db2ed204d39738df527_Traceguids));
        }
        KeBugCheckEx(0x108, 0, 0x20, 0x20, 0);
    }
    data_pointer = &((int64_t *)input)[0x11];
    while (data_pointer_2 = (int64_t *)(*data_pointer), data_pointer_2 != data_pointer)
    {
        if ((int64_t *)data_pointer_2[1] != data_pointer || (object = *data_pointer_2, (int64_t *)(*(int64_t *)(object + 8)) != data_pointer_2))
        {
            (*(WD_ROUTINE)swi(0x29))(3);
        }
        *data_pointer = object;
        *(int64_t **)(object + 8) = data_pointer;
        if (data_pointer_2[8])
        {
            FltAcquirePushLockShared(data_pointer_2[8] + 0xc0);
            object = *(int64_t *)(data_pointer_2[8] + 200);
            if (object)
            {
                ObfReferenceObject(object);
                WdUnresolvedAtomicBegin();
                ObTotalReferences += 1;
                WdUnresolvedAtomicEnd();
            }
            FltReleasePushLock(data_pointer_2[8] + 0xc0);
            if (object)
            {
                value_3 = 0;
                value_4 = 0;
                MpQueryTransactionId(object, &value_3);
                value = ((uint64_t *)input)[0x14];
                if (RtlCompareMemory(&value_3, value, 0x10) == 0x10)
                {
                    FltAcquirePushLockExclusive(data_pointer_2[8] + 0xc0);
                    if (*(int64_t *)(data_pointer_2[8] + 200) == object)
                    {
                        ObDereferenceObjectDeferDelete(*(int64_t *)(data_pointer_2[8] + 200));
                        value_2 = ObTotalReferences;
                        WdUnresolvedAtomicBegin();
                        ObTotalReferences -= 1;
                        WdUnresolvedAtomicEnd();
                        if (value_2 + -1 <= -1 && *(int32_t *)(MpData + 0x364) <= -1)
                        {
                            if (!KdRefreshDebuggerNotPresent())
                            {
                                (*(WD_ROUTINE)swi(3))();
                                return;
                            }
                            KeBugCheck(1);
                        }
                        *(uint64_t *)(data_pointer_2[8] + 200) = 0;
                        *(uint64_t *)(data_pointer_2[8] + 0xd0) = 0;
                    }
                    FltReleasePushLock(data_pointer_2[8] + 0xc0);
                }
                ObDereferenceObjectDeferDelete(object);
                object = ObTotalReferences;
                WdUnresolvedAtomicBegin();
                ObTotalReferences -= 1;
                WdUnresolvedAtomicEnd();
                if (object + -1 <= -1 && *(int32_t *)(MpData + 0x364) <= -1)
                {
                    if (!KdRefreshDebuggerNotPresent())
                    {
                        (*(WD_ROUTINE)swi(3))();
                        return;
                    }
                    KeBugCheck(1);
                }
            }
        }
        if (data_pointer_2[8])
        {
            FltReleaseContext(data_pointer_2[8]);
        }
        ExFreeToPagedLookasideList((void *)(MpTxfData + 0x40), data_pointer_2);
        input_2 = (uint64_t)data_pointer_2;
    }

    object = ((int64_t *)input)[0x10];
    if (object)
    {
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(object + 0x120, (uint64_t)input_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
        data_pointer = &((int64_t *)input)[0xe];
        object = *data_pointer;
        if (*(int64_t **)(object + 8) != data_pointer || (data_pointer_2 = ((int64_t **)input)[0xf], (int64_t *)(*data_pointer_2) != data_pointer))
        {
            (*(WD_ROUTINE)swi(0x29))(3);
        }
        *data_pointer_2 = object;
        *(int64_t **)(object + 8) = data_pointer_2;
        ExReleaseResourceLite(((int64_t *)input)[0x10] + 0x120);
        KeLeaveCriticalRegion();
        FltReleaseContext(((uint64_t *)input)[0x10]);
    }
    if (((int64_t *)input)[0x13])
    {
        if (*(int64_t *)(((int64_t *)input)[0x13] + 8))
        {
            RtlFreeUnicodeString();
            *(uint64_t *)(((int64_t *)input)[0x13] + 8) = 0;
            *((uint16_t **)input)[0x13] = 0;
            *(uint16_t *)(((int64_t *)input)[0x13] + 2) = 0;
        }
        ExFreePoolWithTag(((uint64_t *)input)[0x13], 0x6e74504d);
        ((uint64_t *)input)[0x13] = 0;
    }
    if (((int64_t *)input)[0x14])
    {
        ExFreePoolWithTag(((int64_t *)input)[0x14], 0x6774504d);
        ((uint64_t *)input)[0x14] = 0;
    }
    ExDeleteResourceLite((int64_t)input + 8);
    return;
}

void MpTxfUpdateStreamData(void *input, uint8_t *input_2, void *input_3)
{
    bool enabled;
    uint64_t value;
    uint64_t value_2;
    int64_t txf_data;
    int32_t value_4;
    uint64_t file_object;
    int32_t result_length[2];
    uint64_t information_buffer;
    uint64_t information_buffer_2;
    result_length[0] = 0;
    information_buffer = 0;
    value = 0;
    value_2 = 0;
    information_buffer_2 = 0;
    if (*input_2 & 1)
    {
        return;
    }
    value_4 = FltQueryInformationFile(((uint64_t *)input)[3], ((uint64_t *)input)[4], &information_buffer, 0x18, 5, result_length);
    if (value_4 <= -1)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x29, WD_SYMBOL_ADDRESS(WPP_7b03be39b4a33db2ed204d39738df527_Traceguids), (uint64_t)KeGetCurrentThread(), value_4);
        }
        return;
    }
    if (result_length[0] != 0x18)
    {
        return;
    }
    if (WdLoadField(&value_2, 5, 1))
    {
        return;
    }
    file_object = ((uint64_t *)input)[4];
    value_4 = FltQueryInformationFile(((uint64_t *)input)[3], file_object, &information_buffer_2, 8, 6, result_length);
    enabled = 1;
    if (0 <= value_4)
    {
        if (result_length[0] != 8)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                file_object = 0;
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2b, WD_SYMBOL_ADDRESS(WPP_7b03be39b4a33db2ed204d39738df527_Traceguids), (uint64_t)KeGetCurrentThread(), result_length[0]);
            }
            goto block_1;
        }
        if (*(int32_t *)(((int64_t *)input_3)[1] + 0x78) == 2)
        {
            enabled = 1;
            if (WdLoadField(&information_buffer_2, 4, 2))
            {
                enabled = 0;
            }
        }
    }
    else
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            file_object = 0;
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2a, WD_SYMBOL_ADDRESS(WPP_7b03be39b4a33db2ed204d39738df527_Traceguids), (uint64_t)KeGetCurrentThread(), value_4);
        }
        block_1:
        value_4 = *(int32_t *)(((int64_t *)input_3)[1] + 0x78);

        if (value_4 == 2 || (uint32_t)(value_4 - 0x1bU) <= 1)
        {
            enabled = 0;
        }
    }
    txf_data = MpTxfData;
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(txf_data + 0xc0, (uint64_t)file_object & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
    if (((uint32_t *)input_3)[0xc] & 0x10)
    {
        WdUnresolvedAtomicBegin();
        ((uint64_t *)input_3)[0x16] = value;
        WdUnresolvedAtomicEnd();
        WdUnresolvedAtomicBegin();
        ((uint64_t *)input_3)[0x15] = information_buffer_2;
        WdUnresolvedAtomicEnd();
        ((uint32_t *)input_3)[8] = 0;
        WdAtomicAnd32((volatile int32_t *)((uint32_t *)((int64_t)input_3 + 0x30)), 0xffffbfff);
        if (WdLoadField(&value_2, 4, 1))
        {
            WdAtomicOr32((volatile int32_t *)((uint32_t *)((int64_t)input_3 + 0x30)), 4);
        }
        if (*input_2 & 2)
        {
            WdAtomicOr32((volatile int32_t *)((uint32_t *)((int64_t)input_3 + 0x30)), 2);
        }
        WdAtomicAnd32((volatile int32_t *)((uint32_t *)((int64_t)input_3 + 0x30)), 0xffffffef);
        if (!enabled)
        {
            WdAtomicOr32((volatile int32_t *)((uint32_t *)((int64_t)input_3 + 0x30)), 0x40);
        }
    }
    ExReleaseResourceLite(MpTxfData + 0xc0);
    KeLeaveCriticalRegion();
    return;
}

void MpTxfCleanup(void)
{
    if (!MpTxfData)
    {
        return;
    }
    ExDeletePagedLookasideList(MpTxfData + 0x40);
    ExDeleteResourceLite(MpTxfData + 0xc0);
    ExFreePoolWithTag(MpTxfData, 0x6474504d);
    return;
}

void MpTxfPostSavepointNotification(int64_t input, WD_LAYOUT_76 *input_2, int64_t input_3)
{
    int32_t value;
    int64_t context;
    uint64_t event_id;
    uint64_t value_2;
    int64_t values[2];
    uint64_t value_3;
    values[0] = 0;
    value_2 = 0;
    value_3 = 0;
    if (input_3 && input && input_2)
    {
        if (0 <= (int32_t)MpTxfpValidateSavepointInfo(0, &value_2))
        {
            event_id = 0;
            value = MpTxfGetContext(input_2, 0, input_3, values);
            if (0 <= value)
            {
                if ((int32_t)value_3 != 2)
                {
                    context = values[0];
                }
                else
                {
                    KeEnterCriticalRegion();
                    context = values[0];
                    ExAcquireResourceExclusiveLite(values[0] + 8, (uint64_t)event_id & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
                    if (*(int64_t **)((int64_t *)(context + 0x88)) != (int64_t *)(context + 0x88))
                    {
                        WdAtomicOr32((volatile int32_t *)((uint32_t *)(context + 0xa8)), 1);
                    }
                    ExReleaseResourceLite(context + 8);
                    KeLeaveCriticalRegion();
                }
                FltReleaseContext(context);
                return;
            }
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return;
            }
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x26, WD_SYMBOL_ADDRESS(WPP_7b03be39b4a33db2ed204d39738df527_Traceguids), (uint64_t)KeGetCurrentThread(), value);
            return;
        }
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
        {
            return;
        }
        if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return;
        }
        event_id = 0x25;
    }
    else
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
        {
            return;
        }
        if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return;
        }
        event_id = 0x24;
    }
    WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_7b03be39b4a33db2ed204d39738df527_Traceguids), (uint64_t)KeGetCurrentThread());
    return;
}

int32_t MpTxfPreSavepointNotification(int64_t input, uint64_t *input_2, uint64_t input_3, uint64_t input_4)
{
    int32_t value;
    uint64_t value_2 = 0;
    uint64_t value_3 = 0;
    if (input && input_2)
    {
        if (0 <= (int32_t)MpTxfpValidateSavepointInfo(0, &value_2))
        {
            value = MpReferenceObjectByHandle(value_2, 0, *__imp_TmTransactionObjectType, (uint64_t)input_4 & 0xffffffffffffff00 | (uint64_t)1 & 0xff, input_2);
            if (value <= -1)
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x23, WD_SYMBOL_ADDRESS(WPP_7b03be39b4a33db2ed204d39738df527_Traceguids), (uint64_t)KeGetCurrentThread(), (uint64_t)((uint64_t)input_2) & 0xffffffff00000000 | (uint64_t)value & 0xffffffff);
                }
                return value;
            }
        }
        else
        {
            *input_2 = 0;
        }
        return 0;
    }
    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x22, WD_SYMBOL_ADDRESS(WPP_7b03be39b4a33db2ed204d39738df527_Traceguids), (uint64_t)KeGetCurrentThread());
    }
    return -0x3ffffff3;
}

uint64_t MpTxfpValidateSavepointInfo(WD_LAYOUT_4 *input, WD_LAYOUT_100 *input_2)
{
    uint32_t value;
    int32_t *data_pointer;
    int64_t *data_pointer_2;
    int64_t value_2;
    value = *(uint32_t *)(input->field_0x10 + 0x20);
    if (!FltIs32bitProcess())
    {
        if (0x10 <= value)
        {
            data_pointer_2 = *(int64_t **)(input->field_0x10 + 0x30);
            value_2 = data_pointer_2[1];
            input_2->field_0x0 = *data_pointer_2;
            input_2->field_0x8 = value_2;
            return 0;
        }
        return WD_STATUS_INVALID_PARAMETER;
    }
    if (0xc <= value)
    {
        data_pointer = *(int32_t **)(input->field_0x10 + 0x30);
        input_2->field_0x0 = *data_pointer;
        *(int32_t *)(&input_2->field_0x8) = data_pointer[1];
        ((int32_t *)(&input_2->field_0x8))[1] = data_pointer[2];
        return 0;
    }
    return WD_STATUS_INVALID_PARAMETER;
}

uint64_t MpTxfInitialize(void)
{
    uint32_t *data_pointer;
    uint32_t *allocation;
    int64_t value;
    uint32_t *data_pointer_2;
    allocation = (uint32_t *)MpAllocatePoolWithTag(ExDefaultNonPagedPoolType, (char *)0x140, 0x6474504d);
    MpTxfData = allocation;
    if (!allocation)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 10, WD_SYMBOL_ADDRESS(WPP_7b03be39b4a33db2ed204d39738df527_Traceguids));
        }
        return WD_STATUS_INSUFFICIENT_RESOURCES;
    }
    value = 0x140;
    data_pointer_2 = allocation;
    while (value)
    {
        data_pointer = (uint32_t *)((int64_t)data_pointer_2 + 1);
        *(char *)data_pointer_2 = 0;
        value -= 1;
        data_pointer_2 = data_pointer;
    }

    *allocation = 0x140da06;
    ExInitializePagedLookasideList(&allocation[0x10], 0, 0, 0, 0x168, 0x7374504d, 0);
    ExInitializeResourceLite(&MpTxfData[0x30]);
    return 0;
}

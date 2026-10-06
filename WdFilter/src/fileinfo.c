#include "wdfilter.h"

uint32_t MpIsRename(WD_LAYOUT_4 *input)
{
    uint32_t value;
    value = *(int32_t *)(input->field_0x10 + 0x20);
    if (value != 10)
    {
        return ((uint64_t)((uint32_t)(value >> 8)) & 0xffffffULL) << 8 | (uint64_t)(value == 0x41) & 0xffULL;
    }
    return 1;
}

uint64_t MpSetStreamFlag(WD_LAYOUT_2 *input, int16_t input_2, void *input_3, uint32_t input_4, char input_5)
{
    int64_t value;
    uint32_t value_2;
    if (input)
    {
        if (input->field_0xa8 & 1)
        {
            return 0xc00000e5;
        }
        if ((uint16_t)(input_2 - 1U) <= 0xfffc)
        {
            return 0;
        }
        FltAcquirePushLockShared((int64_t)input_3 + 0xc0);
        value = ((int64_t *)input_3)[0x1a];
        value_2 = ((uint32_t *)input_3)[0xc] & input_4;
        if (value)
        {
            if (input_5)
            {
                if (value_2 != input_4)
                {
                    WdAtomicOr32((volatile int32_t *)((uint32_t *)(value + 0x30)), input_4);
                }
            }
            else if (value_2)
            {
                WdAtomicAnd32((volatile int32_t *)((uint32_t *)(value + 0x30)), ~input_4);
            }
        }
        else if (input_5)
        {
            if (value_2 != input_4)
            {
                WdAtomicOr32((volatile int32_t *)((uint32_t *)((int64_t)input_3 + 0x30)), input_4);
            }
        }
        else if (value_2)
        {
            WdAtomicAnd32((volatile int32_t *)((uint32_t *)((int64_t)input_3 + 0x30)), ~input_4);
        }
        FltReleasePushLock((int64_t)input_3 + 0xc0);
        return 0;
    }
    value_2 = ((uint32_t *)input_3)[0xc] & input_4;
    if (input_5)
    {
        if (value_2 == input_4)
        {
            return 0;
        }
        WdAtomicOr32((volatile int32_t *)((uint32_t *)((int64_t)input_3 + 0x30)), input_4);
        return 0;
    }
    if (!value_2)
    {
        return 0;
    }
    WdAtomicAnd32((volatile int32_t *)((uint32_t *)((int64_t)input_3 + 0x30)), ~input_4);
    return 0;
}

void WPP_SF_i(uint64_t input, uint16_t input_2, uint64_t input_3, uint64_t input_4)
{
    uint64_t value;
    value = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, input_3, input_2, &value, 8, 0);
    return;
}

void WPP_SF_I(uint64_t input, uint64_t input_2, uint64_t input_3, uint64_t input_4)
{
    uint64_t value;
    value = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_ea3e370748bf3721894065c090fd2405_Traceguids), 0x1b, &value, 8, 0);
    return;
}

void WPP_SF_ZDd(uint64_t input, uint64_t input_2, uint64_t input_3, int16_t *input_4)
{
    int16_t value;
    uint64_t value_2;
    if (input_4)
    {
        value = *input_4;
        if (*input_4)
        {
            value_2 = *(uint64_t *)(&input_4[4]);
            goto block_1;
        }
    }
    else
    {
        value = 8;
    }
    value_2 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    block_1:
    if (!input_4)
    {
        input_4 = &WdCleanupStorage;
    }

    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_ea3e370748bf3721894065c090fd2405_Traceguids), 0xc, input_4, 2, value_2, (uint16_t)value, &unrecovered_stack_argument_5, 4, &unrecovered_stack_argument_6, 4, 0);
    return;
}

void MpPostSetInfo(void *data, uint64_t *objects, int64_t *completion_context, uint64_t flags)
{
    uint32_t *data_pointer;
    int64_t *process_context;
    uint64_t *extension_id;
    int64_t object;
    uint64_t event_id;
    uint8_t byte_value;
    int64_t object_2;
    int64_t *process_context_2;
    uint64_t extension;
    int64_t *trace_argument_2;
    uint16_t value;
    int64_t values[2];
    uint64_t *process_context_3;
    int32_t value_2;
    uint64_t *process_context_4;
    uint64_t *trace_argument_2_2;
    int64_t value_3;
    char byte_value_2;
    uint32_t value_4;
    uint32_t value_5;
    void *context;
    uint32_t value_6;
    int64_t value_7;
    uint64_t value_8;
    int64_t file_name;
    bool enabled;
    bool enabled_2;
    int64_t *process_context_5;
    char byte_value_3;
    int32_t trace_argument_1;
    values[0] = 0;
    value_3 = 0;
    byte_value_2 = '\0';
    trace_argument_2 = NULL;
    value_7 = 0;
    extension = 0;
    value_8 = 0;
    if (completion_context[2])
    {
        MpRWLReleaseShared();
    }
    object = 0;
    object_2 = 0;
    context = (void *)completion_context[1];
    file_name = *completion_context;
    if (((int32_t *)data)[6] < 0 || flags & 1)
    {
        goto block_16;
    }
    byte_value_3 = '\0';
    if (objects && context)
    {
        object = objects[5];
        if (object != ((int64_t *)context)[0x19])
        {
            if (!((int64_t *)context)[0x19])
            {
                goto block_3;
            }
            if (MpTxfData)
            {
                FltAcquirePushLockShared((int64_t)context + 0xc0);
                if (((int64_t *)context)[0x19])
                {
                    ObfReferenceObject();
                    WdUnresolvedAtomicBegin();
                    ObTotalReferences += 1;
                    WdUnresolvedAtomicEnd();
                    object_2 = ((int64_t *)context)[0x19];
                }
                FltReleasePushLock((int64_t)context + 0xc0);
                if (object_2)
                {
                    byte_value_3 = '\x01';
                    goto block_2;
                }
                trace_argument_1 = -0x3ffffddb;
            }
            else
            {
                trace_argument_1 = -0x3fffff45;
            }
            object = 0;
            value_2 = trace_argument_1;
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                trace_argument_2_2 = (uint64_t *)((uint64_t)((uint64_t)trace_argument_2_2) & 0xffffffff00000000 | (uint64_t)trace_argument_1 & 0xffffffff);
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x20, WD_SYMBOL_ADDRESS(WPP_7b03be39b4a33db2ed204d39738df527_Traceguids), (uint64_t)KeGetCurrentThread(), trace_argument_2_2);
                trace_argument_1 = value_2;
                block_1:
                object = value_3;
            }
        }
        else
        {
            object_2 = object;
            if (object)
            {
                block_2:
                trace_argument_1 = MpTxfGetContext(objects, 0, object_2, values);

                value_2 = trace_argument_1;
                if (trace_argument_1 < 0)
                {
                    if (trace_argument_1 != -0x3ffffddb && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        trace_argument_2_2 = (uint64_t *)((uint64_t)((uint64_t)trace_argument_2_2) & 0xffffffff00000000 | (uint64_t)trace_argument_1 & 0xffffffff);
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x21, WD_SYMBOL_ADDRESS(WPP_7b03be39b4a33db2ed204d39738df527_Traceguids), (uint64_t)KeGetCurrentThread(), trace_argument_2_2);
                        trace_argument_1 = value_2;
                    }
                    if (byte_value_3)
                    {
                        ObfDereferenceObject(object_2);
                        object_2 = ObTotalReferences;
                        WdUnresolvedAtomicBegin();
                        ObTotalReferences -= 1;
                        WdUnresolvedAtomicEnd();
                        if (object_2 + -1 <= -1 && *(int32_t *)(MpData + 0x364) <= -1)
                        {
                            if (!KdRefreshDebuggerNotPresent())
                            {
                                (*(WD_ROUTINE)swi(3))();
                                return;
                            }
                            KeBugCheck(1);
                        }
                        trace_argument_1 = value_2;
                    }
                    goto block_1;
                }
            }
            block_3:
            trace_argument_1 = 0;

            value_2 = 0;
            object = object_2;
            value_3 = object_2;
            byte_value_2 = byte_value_3;
        }
        if (0 <= trace_argument_1)
        {
            object_2 = ((int64_t *)data)[2];
            trace_argument_1 = *(int32_t *)(object_2 + 0x20);
            if (trace_argument_1 != 0x13)
            {
                if (trace_argument_1 != 0x14)
                {
                    if (trace_argument_1 == 4)
                    {
                        object_2 = *(int64_t *)(object_2 + 0x38);
                        if (object_2)
                        {
                            if (*(int64_t *)(object_2 + 0x10) != -1 && *(int64_t *)(object_2 + 0x10))
                            {
                                process_context_2 = NULL;
                                MpGetProcessContextByObject(MpGetRequestorProcess(data), &process_context_2);
                                process_context = process_context_2;
                                if (process_context_2)
                                {
                                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                                    {
                                        WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1f, WD_SYMBOL_ADDRESS(WPP_ea3e370748bf3721894065c090fd2405_Traceguids), *(uint64_t *)(object_2 + 0x10));
                                    }
                                    object_2 = *(int64_t *)(object_2 + 0x10);
                                    MpCopyCacheSetTimeStamp(process_context, PsGetCurrentThreadId(), object_2);
                                    MpReleaseProcessContext(process_context);
                                }
                                object = value_3;
                            }
                        }
                        goto block_15;
                    }
                    if (trace_argument_1 != 0x41 && trace_argument_1 != 10)
                    {
                        enabled_2 = 0;
                    }
                    else
                    {
                        enabled_2 = 1;
                    }
                    if (trace_argument_1 != 0xb && trace_argument_1 != 0x48)
                    {
                        enabled = 0;
                    }
                    else
                    {
                        enabled = 1;
                    }
                    if (*(uint32_t *)(MpData + 0x364) & 1)
                    {
                        if (enabled_2 || enabled)
                        {
                            process_context_3 = NULL;
                            value_6 = MpGetFileAttributes(objects);
                            MpGetProcessContextByObject(MpGetRequestorProcess(data), &process_context_3);
                            process_context_4 = process_context_3;
                            if (!enabled_2 || !file_name)
                            {
                                if (enabled)
                                {
                                    MpSendHardlinkAsyncMessage(data, objects, process_context_3);
                                }
                                else
                                {
                                    process_context_4 = process_context_3;
                                }
                                block_4:
                                if (process_context_4)
                                {
                                    MpReleaseProcessContext(process_context_4);
                                }
                            }
                            else
                            {
                                process_context_2 = NULL;
                                value_2 = 0;
                                if (!(*(uint32_t *)(MpData + 0x364) & 1))
                                {
                                    goto block_4;
                                }
                                if (process_context_3)
                                {
                                    if ((!(((uint32_t *)process_context_3)[0xd] & 8) || !(*(uint32_t *)(&process_context_3[7]) & 0x4000)) && (!(((uint32_t *)process_context_3)[0xd] & 1) || *(uint32_t *)(&process_context_3[7]) & 0x4000) && !(*(uint32_t *)(&process_context_3[7]) & 4))
                                    {
                                        trace_argument_2_2 = objects;
                                        trace_argument_1 = MpCreateFileAsyncMessage(&process_context_2, &value_2, 2, data, objects, *(uint32_t *)(((int64_t *)context)[1] + 0x54), value_6, 0x800, value_3, (uint16_t *)(file_name + 8), NULL, NULL, process_context_3, NULL);
                                        process_context = process_context_2;
                                        if (0 <= trace_argument_1)
                                        {
                                            trace_argument_1 = MpAsyncSendNotification(process_context_2, value_2, 0, 0xffffffff, process_context_4);
                                            if (trace_argument_1 < 0 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                                            {
                                                WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x3f, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), trace_argument_1);
                                                process_context = process_context_2;
                                            }
                                            MpAsyncDereferenceNotification(process_context);
                                            trace_argument_2_2 = process_context_4;
                                        }
                                        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                                        {
                                            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x3e, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), trace_argument_1);
                                        }
                                        process_context_4 = process_context_3;
                                    }
                                    goto block_4;
                                }
                            }
                            object = value_3;
                            goto block_5;
                        }
                    }
                    else
                    {
                        block_5:
                        if (enabled)
                        {
                            goto block_15;
                        }
                    }
                    extension_id = &extension;
                    value_7 = *(int64_t *)(((int64_t *)data)[2] + 0x38);
                    WdStoreField(&trace_argument_2, 0, 4, (uint64_t)(((uint64_t)(*(uint16_t *)(value_7 + 0x10)) & 0xffffULL) << 16 | (uint64_t)(*(uint16_t *)(value_7 + 0x10)) & 0xffffULL));
                    value_7 += 0x14;
                    trace_argument_1 = FltParseFileName(&trace_argument_2, extension_id, 0, 0);
                    if (0 <= trace_argument_1)
                    {
                        extension_id = &((uint64_t *)context)[0x17];
                        MpGetFileExtensionId(&extension, extension_id);
                    }
                    object_2 = ((int64_t *)context)[1];
                    KeEnterCriticalRegion();
                    ExAcquireResourceExclusiveLite(object_2 + 0x120, (uint64_t)((uint64_t)extension_id) & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
                    if (!(*(uint32_t *)(((int64_t *)context)[1] + 0x5c) & 0x40000) && *(int32_t *)(((int64_t *)context)[1] + 0x7c) != 0x14)
                    {
                        goto block_8;
                    }
                    process_context_2 = trace_argument_2;
                    value_4 = (uint32_t)value_7;
                    value_5 = WdLoadField(&value_7, 4, 4);
                    byte_value_3 = MpIsUnNamedDataAttribute(&process_context_2);
                    if (byte_value_3)
                    {
                        if (values[0])
                        {
                            if (*(uint32_t *)(values[0] + 0xa8) & 1)
                            {
                                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                {
                                    event_id = 0x20;
                                    WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_ea3e370748bf3721894065c090fd2405_Traceguids), 0xc00000e5);
                                }
                            }
                            else if (0xfffd <= (uint16_t)(((int16_t *)objects)[1] - 1U))
                            {
                                FltAcquirePushLockShared((int64_t)context + 0xc0);
                                if (((int64_t *)context)[0x1a])
                                {
                                    byte_value = (uint8_t)(*(uint32_t *)(((int64_t *)context)[0x1a] + 0x30) >> 1);
                                }
                                else
                                {
                                    byte_value = ((uint8_t *)context)[0x30] >> 1;
                                }
                                FltReleasePushLock((int64_t)context + 0xc0);
                                goto block_6;
                            }
                        }
                        else
                        {
                            byte_value = (uint8_t)(((uint32_t *)context)[0xc] >> 1);
                            block_6:
                            if (byte_value & 1)
                            {
                                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                                {
                                    trace_argument_2_2 = &trace_argument_2;
                                    WPP_SF_qZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x21, WD_SYMBOL_ADDRESS(WPP_ea3e370748bf3721894065c090fd2405_Traceguids), ((uint64_t *)data)[1], trace_argument_2_2);
                                }
                                MpSetStreamFlag(values[0], ((uint16_t *)objects)[1], context, 2, (uint64_t)trace_argument_2_2 & 0xffffffffffffff00);
                            }
                        }
                    }
                    else
                    {
                        if (values[0])
                        {
                            if (*(uint32_t *)(values[0] + 0xa8) & 1)
                            {
                                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                {
                                    event_id = 0x22;
                                    WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_ea3e370748bf3721894065c090fd2405_Traceguids), 0xc00000e5);
                                }
                                goto block_8;
                            }
                            if (0xfffd <= (uint16_t)(((int16_t *)objects)[1] - 1U))
                            {
                                FltAcquirePushLockShared((int64_t)context + 0xc0);
                                if (((int64_t *)context)[0x1a])
                                {
                                    byte_value = (uint8_t)(*(uint32_t *)(((int64_t *)context)[0x1a] + 0x30) >> 1);
                                }
                                else
                                {
                                    byte_value = ((uint8_t *)context)[0x30] >> 1;
                                }
                                FltReleasePushLock((int64_t)context + 0xc0);
                                goto block_7;
                            }
                        }
                        else
                        {
                            byte_value = (uint8_t)(((uint32_t *)context)[0xc] >> 1);
                            block_7:
                            if (byte_value & 1)
                            {
                                goto block_8;
                            }
                        }
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                        {
                            WPP_SF_qZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x23, WD_SYMBOL_ADDRESS(WPP_ea3e370748bf3721894065c090fd2405_Traceguids), ((uint64_t *)data)[1], &trace_argument_2);
                        }
                        if (values[0])
                        {
                            if (!(*(uint32_t *)(values[0] + 0xa8) & 1) && 0xfffd <= (uint16_t)(((int16_t *)objects)[1] - 1U))
                            {
                                FltAcquirePushLockShared((int64_t)context + 0xc0);
                                if (!(((uint32_t *)context)[0xc] & 2))
                                {
                                    if (((int64_t *)context)[0x1a])
                                    {
                                        WdUnresolvedAtomicBegin();
                                        data_pointer = (uint32_t *)(((int64_t *)context)[0x1a] + 0x30);
                                        *data_pointer = *data_pointer | 2;
                                        WdUnresolvedAtomicEnd();
                                    }
                                    else
                                    {
                                        WdAtomicOr32((volatile int32_t *)((uint32_t *)((int64_t)context + 0x30)), 2);
                                    }
                                }
                                FltReleasePushLock((int64_t)context + 0xc0);
                            }
                        }
                        else if (!(((uint32_t *)context)[0xc] & 2))
                        {
                            WdAtomicOr32((volatile int32_t *)((uint32_t *)((int64_t)context + 0x30)), 2);
                        }
                    }
                    block_8:
                    ExReleaseResourceLite(((int64_t *)context)[1] + 0x120);

                    KeLeaveCriticalRegion();
                }
                else
                {
                    process_context = *(int64_t **)(object_2 + 0x38);
                    object_2 = *process_context;
                    if (values[0])
                    {
                        if (*(uint32_t *)(values[0] + 0xa8) & 1)
                        {
                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                            {
                                event_id = 0x1a;
                                trace_argument_1 = -0x3fffff1b;
                                WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_ea3e370748bf3721894065c090fd2405_Traceguids), trace_argument_1);
                            }
                            goto block_13;
                        }
                        if (0xfffd <= (uint16_t)(((int16_t *)objects)[1] - 1U))
                        {
                            FltAcquirePushLockShared((int64_t)context + 0xc0);
                            if (((int64_t *)context)[0x1a])
                            {
                                WdUnresolvedAtomicBegin();
                                *(int64_t *)(((int64_t *)context)[0x1a] + 0x20) = object_2;
                                WdUnresolvedAtomicEnd();
                            }
                            FltReleasePushLock((int64_t)context + 0xc0);
                        }
                    }
                    else
                    {
                        WdUnresolvedAtomicBegin();
                        ((int64_t *)context)[0x16] = object_2;
                        WdUnresolvedAtomicEnd();
                    }
                    if (5 <= *process_context)
                    {
                        process_context_2 = NULL;
                        MpGetProcessContextByObject(MpGetRequestorProcess(data), &process_context_2);
                        process_context_5 = process_context_2;
                        if (process_context_2)
                        {
                            object_2 = *process_context;
                            MpCopyCacheSetFileSize(process_context_5, PsGetCurrentThreadId(), object_2);
                            MpReleaseProcessContext(process_context_5);
                        }
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                        {
                            WPP_SF_I(*(uint64_t *)(WPP_GLOBAL_Control + 0x18));
                        }
                    }
                    if (5 <= *process_context)
                    {
                        trace_argument_1 = MpSetStreamState__create(values[0], ((uint16_t *)objects)[1], context, 0);
                        if (0 <= trace_argument_1)
                        {
                            if (!values[0])
                            {
                                block_9:
                                object = value_3;

                                if (!(((uint32_t *)context)[0xc] & 8))
                                {
                                    WdAtomicOr32((volatile int32_t *)((uint32_t *)((int64_t)context + 0x30)), 8);
                                }
                                goto block_15;
                            }
                            if (*(uint32_t *)(values[0] + 0xa8) & 1)
                            {
                                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                {
                                    event_id = 0x1e;
                                    trace_argument_1 = -0x3fffff1b;
                                    WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_ea3e370748bf3721894065c090fd2405_Traceguids), trace_argument_1);
                                }
                            }
                            else if ((uint16_t)(((int16_t *)objects)[1] - 1U) > 0xfffc)
                            {
                                FltAcquirePushLockShared((int64_t)context + 0xc0);
                                if (!(((uint32_t *)context)[0xc] & 8))
                                {
                                    if (((int64_t *)context)[0x1a])
                                    {
                                        WdUnresolvedAtomicBegin();
                                        data_pointer = (uint32_t *)(((int64_t *)context)[0x1a] + 0x30);
                                        *data_pointer = *data_pointer | 8;
                                        WdUnresolvedAtomicEnd();
                                    }
                                    else
                                    {
                                        block_10:
                                        WdUnresolvedAtomicBegin();

                                        *(uint32_t *)((int64_t)context + 0x30) = *(uint32_t *)((int64_t)context + 0x30) | 8;
                                        WdUnresolvedAtomicEnd();
                                    }
                                }
                                FltReleasePushLock((int64_t)context + 0xc0);
                            }
                        }
                        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            event_id = 0x1d;
                            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_ea3e370748bf3721894065c090fd2405_Traceguids), trace_argument_1);
                        }
                    }
                    else
                    {
                        trace_argument_1 = MpSetStreamState__create(values[0], ((uint16_t *)objects)[1], context, 3);
                        if (0 > trace_argument_1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            event_id = 0x1c;
                            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_ea3e370748bf3721894065c090fd2405_Traceguids), trace_argument_1);
                        }
                    }
                }
            }
            else
            {
                process_context_2 = *(int64_t **)(object_2 + 0x38);
                if (values[0])
                {
                    if (*(uint32_t *)(values[0] + 0xa8) & 1)
                    {
                        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                        {
                            goto block_13;
                        }
                        event_id = 0x15;
                        trace_argument_1 = -0x3fffff1b;
                        goto block_12;
                    }
                    if ((uint16_t)(((int16_t *)objects)[1] - 1U) <= 0xfffc)
                    {
                        goto block_11;
                    }
                    FltAcquirePushLockShared((int64_t)context + 0xc0);
                    process_context = (int64_t *)(((int64_t *)context)[0x1a] + 0x20);
                    if (!((int64_t *)context)[0x1a])
                    {
                        process_context = &((int64_t *)context)[0x16];
                    }
                    object_2 = 0;
                    WdUnresolvedAtomicBegin();
                    if (*process_context)
                    {
                        object_2 = *process_context;
                    }
                    else
                    {
                        *process_context = 0;
                    }
                    WdUnresolvedAtomicEnd();
                    FltReleasePushLock((int64_t)context + 0xc0);
                }
                else
                {
                    block_11:
                    object_2 = 0;

                    WdUnresolvedAtomicBegin();
                    object = *(int64_t *)((int64_t)context + 0xb0);
                    if (object)
                    {
                        object_2 = object;
                    }
                    else
                    {
                        *(int64_t *)((int64_t)context + 0xb0) = 0;
                    }
                    WdUnresolvedAtomicEnd();
                }
                object = *process_context_2;
                if (object < object_2)
                {
                    if (values[0])
                    {
                        if (*(uint32_t *)(values[0] + 0xa8) & 1)
                        {
                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                            {
                                event_id = 0x16;
                                trace_argument_1 = -0x3fffff1b;
                                WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_ea3e370748bf3721894065c090fd2405_Traceguids), trace_argument_1);
                            }
                            goto block_13;
                        }
                        if (0xfffd <= (uint16_t)(((int16_t *)objects)[1] - 1U))
                        {
                            FltAcquirePushLockShared((int64_t)context + 0xc0);
                            if (((int64_t *)context)[0x1a])
                            {
                                WdUnresolvedAtomicBegin();
                                *(int64_t *)(((int64_t *)context)[0x1a] + 0x20) = object;
                                WdUnresolvedAtomicEnd();
                            }
                            FltReleasePushLock((int64_t)context + 0xc0);
                        }
                    }
                    else
                    {
                        WdUnresolvedAtomicBegin();
                        ((int64_t *)context)[0x16] = object;
                        WdUnresolvedAtomicEnd();
                    }
                    if (5 <= *process_context_2)
                    {
                        trace_argument_1 = MpSetStreamState__create(values[0], ((uint16_t *)objects)[1], context, 0);
                        if (0 <= trace_argument_1)
                        {
                            if (!values[0])
                            {
                                goto block_9;
                            }
                            if (*(uint32_t *)(values[0] + 0xa8) & 1)
                            {
                                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                {
                                    event_id = 0x19;
                                    trace_argument_1 = -0x3fffff1b;
                                    WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_ea3e370748bf3721894065c090fd2405_Traceguids), trace_argument_1);
                                }
                            }
                            else if (0xfffd <= (uint16_t)(((int16_t *)objects)[1] - 1U))
                            {
                                FltAcquirePushLockShared((int64_t)context + 0xc0);
                                if (!(((uint32_t *)context)[0xc] & 8))
                                {
                                    if (!((int64_t *)context)[0x1a])
                                    {
                                        goto block_10;
                                    }
                                    WdUnresolvedAtomicBegin();
                                    data_pointer = (uint32_t *)(((int64_t *)context)[0x1a] + 0x30);
                                    *data_pointer = *data_pointer | 8;
                                    WdUnresolvedAtomicEnd();
                                }
                                FltReleasePushLock((int64_t)context + 0xc0);
                            }
                        }
                        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            event_id = 0x18;
                            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_ea3e370748bf3721894065c090fd2405_Traceguids), trace_argument_1);
                        }
                    }
                    else
                    {
                        trace_argument_1 = MpSetStreamState__create(values[0], ((uint16_t *)objects)[1], context, 3);
                        if (trace_argument_1 <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            event_id = 0x17;
                            block_12:
                            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_ea3e370748bf3721894065c090fd2405_Traceguids), trace_argument_1);
                        }
                    }
                }
            }
            block_13:
            object = value_3;
        }
        else
        {
            trace_argument_1 = value_2;
            if (value_2 != -0x3ffffddb)
            {
                goto block_14;
            }
        }
    }
    else
    {
        trace_argument_1 = -0x3ffffff3;
        block_14:
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x14, WD_SYMBOL_ADDRESS(WPP_ea3e370748bf3721894065c090fd2405_Traceguids), (uint64_t)KeGetCurrentThread(), (uint64_t)((uint64_t)trace_argument_2_2) & 0xffffffff00000000 | (uint64_t)trace_argument_1 & 0xffffffff);
            object = value_3;
        }
    }
    block_15:
    if (byte_value_2 && object)
    {
        ObfDereferenceObject(object);
        object_2 = ObTotalReferences;
        WdUnresolvedAtomicBegin();
        ObTotalReferences -= 1;
        WdUnresolvedAtomicEnd();
        if (object_2 + -1 <= -1 && *(int32_t *)(MpData + 0x364) <= -1)
        {
            if (!KdRefreshDebuggerNotPresent())
            {
                (*(WD_ROUTINE)swi(3))();
                return;
            }
            KeBugCheck(1);
        }
    }

    if (values[0])
    {
        FltReleaseContext(values[0]);
    }
    block_16:
    FltReleaseContext(context);

    if (file_name)
    {
        FltReleaseFileNameInformation(file_name);
    }
    file_name = MpData;
    object_2 = MpData + 0x400;
    *(int32_t *)(MpData + 0x41c) = *(int32_t *)(MpData + 0x41c) + 1;
    value = *(uint16_t *)(file_name + 0x410);
    if (value <= (uint16_t)ExQueryDepthSList(object_2))
    {
        *(int32_t *)(file_name + 0x420) = *(int32_t *)(file_name + 0x420) + 1;
        (*__guard_dispatch_icall_fptr)(completion_context);
    }
    else
    {
        ExpInterlockedPushEntrySList(object_2, completion_context);
    }
    return;
}

void MpPreSetInfo(void *data, void *objects, int64_t *completion_context)
{
    int32_t *data_pointer;
    char buffer[32];
    int64_t context;
    char buffer_2[8];
    int64_t file_name[5];
    int64_t value;
    int64_t data_2;
    int64_t lock;
    int64_t value_2;
    int64_t file_name_2;
    uint64_t instance;
    bool enabled;
    bool enabled_2;
    int64_t process_context;
    int32_t status;
    uint32_t value_3;
    int64_t *list_entry;
    uint64_t file_object;
    file_name[4] = __security_cookie ^ (uint64_t)buffer;
    lock = 0;
    data_2 = 0;
    file_object = ((uint64_t *)objects)[4];
    value_2 = 0;
    context = 0;
    value = 0;
    if (!FltSupportsStreamContexts(file_object))
    {
        __security_check_cookie(file_name[4] ^ (uint64_t)buffer);
        return;
    }
    status = *(int32_t *)(((int64_t *)data)[2] + 0x20);
    if (status != 0x41 && status != 10)
    {
        enabled = 0;
    }
    else
    {
        enabled = 1;
    }
    if (status != 0x48 && status != 0xb)
    {
        enabled_2 = 0;
    }
    else
    {
        enabled_2 = 1;
    }
    if (enabled || enabled_2)
    {
        if (status == 0x14)
        {
            block_1:
            if (*(char *)(((int64_t *)data)[2] + 0x31))
            {
                __security_check_cookie(file_name[4] ^ (uint64_t)buffer);
                return;
            }
        }
        if (enabled || enabled_2)
        {
            status = MpHardenPathOnRenameLink(data, objects);
            if (status == 0x1c0001)
            {
                __security_check_cookie(file_name[4] ^ (uint64_t)buffer);
                return;
            }
            if (status < 0 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xb, WD_SYMBOL_ADDRESS(WPP_ea3e370748bf3721894065c090fd2405_Traceguids), ((uint64_t *)data)[1], status);
            }
            if (enabled && MpIsDirectory(objects))
            {
                buffer_2[0] = 0;
                if ((int32_t)MpSendAsyncDirectoryNotification(data, objects, 2, buffer_2) <= -1 && (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4))
                {
                    WPP_SF_ZDd(*(uint64_t *)(WPP_GLOBAL_Control + 0x18));
                }
                __security_check_cookie(file_name[4] ^ (uint64_t)buffer);
                return;
            }
        }
    }
    else if (status != 0x13)
    {
        if (status == 0x14)
        {
            goto block_1;
        }
        if (status != 4)
        {
            __security_check_cookie(file_name[4] ^ (uint64_t)buffer);
            return;
        }
    }
    file_object = ((uint64_t *)objects)[4];
    instance = ((uint64_t *)objects)[3];
    if ((int32_t)FltGetStreamContext(instance, file_object, &context) <= -1)
    {
        __security_check_cookie(file_name[4] ^ (uint64_t)buffer);
        return;
    }
    file_name_2 = lock;
    if (enabled)
    {
        data_pointer = (int32_t *)(context + 0x20);
        if (data_pointer && *(int64_t *)(context + 8))
        {
            if (*data_pointer == 5 && !(*(uint32_t *)(MpData + 0x364) >> 0xf & 1))
            {
                MpLogPrintfW(L"[Mini-Filter] Blocked rename of %wZ as it is infected", ((int64_t *)objects)[4] + 0x58);
                FltReleaseContext(context);
                block_2:
                value_3 = WD_STATUS_ACCESS_DENIED;

                block_3:
                ((uint32_t *)data)[6] = value_3;

                ((uint64_t *)data)[4] = 0;
                __security_check_cookie(file_name[4] ^ (uint64_t)buffer);
                return;
            }
            if (*(int32_t *)(context + 0x24) == *(int32_t *)(*(int64_t *)(context + 8) + 0x90))
            {
                status = *data_pointer;
                if (status == 5 || (uint32_t)(status - 0x10U) < 2)
                {
                    MpLogPrintfW(L"[Mini-Filter] Blocked rename of %wZ as it is infected", ((int64_t *)objects)[4] + 0x58);
                    FltReleaseContext(context);
                    if (status == 5)
                    {
                        goto block_2;
                    }
                    value_3 = WD_STATUS_ACCESS_DENIED;
                    if (*(uint8_t *)(MpData + 0x360) & 4)
                    {
                        value_3 = 0xc0000906;
                    }
                    goto block_3;
                }
                if (status == 4)
                {
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                    {
                        WPP_SF_Z(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xe, WD_SYMBOL_ADDRESS(WPP_ea3e370748bf3721894065c090fd2405_Traceguids), (int16_t *)(((int64_t *)objects)[4] + 0x58));
                    }
                    *(uint32_t *)(context + 0x20) = 0;
                    WdAtomicAnd32((volatile int32_t *)((uint32_t *)(context + 0x30)), 0xffffbfff);
                }
            }
        }
        file_name_2 = value_2;
        if (*(uint32_t *)(MpData + 0x364) & 1)
        {
            file_name[0] = 0;
            MpGetProcessContextByObject(MpGetRequestorProcess(data), file_name);
            process_context = file_name[0];
            if (file_name[0])
            {
                if ((!(*(uint32_t *)(file_name[0] + 0x34) & 8) || (file_name_2 = lock, !(*(uint32_t *)(file_name[0] + 0x38) & 0x4000))) && (!(*(uint32_t *)(file_name[0] + 0x34) & 1) || (file_name_2 = value_2, *(uint32_t *)(file_name[0] + 0x38) & 0x4000)) && (file_name_2 = value_2, !(*(uint32_t *)(file_name[0] + 0x38) & 4)))
                {
                    file_object = 0x201;
                    file_name[0] = 0;
                    if (!WdDataStorage13 && (file_object = 0x201, !(*(uint32_t *)(*(int64_t *)(context + 8) + 0x54) & 0x11)))
                    {
                        file_object = 0x101;
                    }
                    status = FltGetFileNameInformation(data, file_object, file_name);
                    if (status < 0)
                    {
                        status = FltGetFileNameInformation(data, 0x102, file_name);
                    }
                    file_name_2 = lock;
                    if (file_name[0])
                    {
                        file_name_2 = file_name[0];
                    }
                    if (status < 0 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xf, WD_SYMBOL_ADDRESS(WPP_ea3e370748bf3721894065c090fd2405_Traceguids), (uint64_t)KeGetCurrentThread(), status);
                    }
                }
                MpReleaseProcessContext(process_context);
            }
        }
    }
    if (!(*(uint32_t *)(*(int64_t *)(context + 8) + 0x50) & 4))
    {
        lock = data_2;
        if (enabled)
        {
            if (*(char *)(((int64_t *)data)[2] + 0x30))
            {
                block_4:
                status = MpGetMappedPurgeExclusionLock(context, &value);

                if (status < 0 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x11, WD_SYMBOL_ADDRESS(WPP_ea3e370748bf3721894065c090fd2405_Traceguids), (uint64_t)KeGetCurrentThread(), status);
                }
                lock = value;
            }
        }
        else
        {
            status = *(int32_t *)(((int64_t *)data)[2] + 0x20);
            if (status == 0x14 || status == 0x13)
            {
                file_name[3] = 0;
                file_name[1] = 0;
                file_name[2] = 0;
                status = FltQueryInformationFile(((uint64_t *)objects)[3], ((uint64_t *)objects)[4], &file_name[1], 0x18, 5, 0);
                if (0 <= status)
                {
                    value_2 = ((int64_t *)data)[2];
                    if (*(int32_t *)(value_2 + 0x20) != 0x13)
                    {
                        if (*(int32_t *)(value_2 + 0x20) != 0x14)
                        {
                            goto block_5;
                        }
                        data_2 = *(*(int64_t **)(value_2 + 0x38));
                    }
                    else
                    {
                        data_2 = *(*(int64_t **)(value_2 + 0x38));
                    }
                    lock = 0;
                    if (data_2 < file_name[2])
                    {
                        goto block_4;
                    }
                }
                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x10, WD_SYMBOL_ADDRESS(WPP_ea3e370748bf3721894065c090fd2405_Traceguids), (uint64_t)KeGetCurrentThread(), status);
                }
            }
        }
    }
    block_5:
    data_2 = MpData;

    value_2 = MpData + 0x400;
    *(int32_t *)(MpData + 0x414) = *(int32_t *)(MpData + 0x414) + 1;
    list_entry = (int64_t *)ExpInterlockedPopEntrySList(value_2);
    if (!list_entry)
    {
        *(int32_t *)(data_2 + 0x418) = *(int32_t *)(data_2 + 0x418) + 1;
        list_entry = (int64_t *)(*__guard_dispatch_icall_fptr)(*(uint32_t *)(data_2 + 0x424), *(uint32_t *)(data_2 + 0x42c), *(uint32_t *)(data_2 + 0x428));
        if (!list_entry)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x12, WD_SYMBOL_ADDRESS(WPP_ea3e370748bf3721894065c090fd2405_Traceguids), (uint64_t)KeGetCurrentThread(), WD_STATUS_INSUFFICIENT_RESOURCES);
            }
            FltReleaseContext(context);
            if (file_name_2)
            {
                FltReleaseFileNameInformation(file_name_2);
            }
            __security_check_cookie(file_name[4] ^ (uint64_t)buffer);
            return;
        }
    }
    if (lock)
    {
        MpRWLAcquireShared(lock);
    }
    list_entry[1] = context;
    list_entry[2] = lock;
    *list_entry = file_name_2;
    *completion_context = (int64_t)list_entry;
    __security_check_cookie(file_name[4] ^ (uint64_t)buffer);
    return;
}

void MpHardenPathOnRenameLink(void *input, void *input_2)
{
    int32_t value;
    uint32_t value_2;
    int16_t *wide_text;
    int16_t **wide_text_2;
    int64_t file_object;
    uint64_t instance;
    uint64_t current_thread;
    int16_t *file_name;
    int16_t **wide_text_3;
    uint64_t value_3;
    char byte_value;
    int64_t process_context;
    int32_t value_4;
    char byte_value_2 = '\0';
    int16_t *file_name_2 = NULL;
    int16_t *handle_context;
    int16_t *allocation;
    int16_t *file_name_3;
    char buffer_2[4];
    int16_t *wide_text_4;
    uint64_t values[4];
    int16_t value_5;
    int16_t values_2[4];
    uint64_t value_6;
    void *data;
    int16_t *extension;
    int16_t *file_object_2;
    char byte_value_3;
    int16_t *file_name_4;
    char byte_value_4;
    uint32_t value_7;
    int32_t status;
    int16_t *wide_text_5;
    uint32_t value_8;
    int16_t **file_name_5;
    char byte_value_5;
    char byte_value_6;
    uint32_t name_options = 0x101;
    uint32_t value_9;
    void *data_pointer;
    void *data_pointer_2;
    uint64_t value_10;
    uint32_t process_id;
    uint64_t value_11;
    uint64_t value_12;
    uint64_t value_13;
    uint64_t value_14;
    uint64_t value_15;
    uint64_t value_16;
    uint64_t value_17;
    uint64_t value_18;
    uint64_t value_19 = 0;
    uint32_t process_id_2;
    int64_t requestor_process;
    uint64_t value_21;
    int16_t **destination_string;
    values_2[0] = 0;
    values_2[1] = 0;
    values_2[2] = 0;
    values_2[3] = 0;
    value_6 = 0;
    value_4 = 0;
    value_11 = 0;
    value_12 = 0;
    file_name_3 = NULL;
    byte_value_3 = '\0';
    value_13 = 0;
    value_14 = 0;
    allocation = NULL;
    value_15 = 0;
    values[0] = 0;
    process_context = 0;
    values[1] = 0;
    values[2] = 0;
    wide_text_4 = NULL;
    values[3] = 0;
    value_16 = 0;
    value_17 = 0;
    value_18 = 0;
    value_9 = *(uint32_t *)(MpData + 0x364) & 0x4000;
    data_pointer = input;
    data_pointer_2 = input_2;
    requestor_process = MpGetRequestorProcess();
    file_name = NULL;
    if (!requestor_process || (file_name = NULL, *__imp_PsInitialSystemProcess == requestor_process))
    {
        goto block_12;
    }
    file_object = *(int64_t *)(MpData + 0xe8);
    if (requestor_process != file_object && (current_thread = (uint64_t)KeGetCurrentThread(), IoThreadToProcess(current_thread) != file_object && (current_thread = (uint64_t)KeGetCurrentThread(), file_object = *(int64_t *)(MpData + 0x100), IoThreadToProcess(current_thread) != file_object)))
    {
        status = MpGetProcessContextByObject(requestor_process, &process_context);
        if (0 <= status)
        {
            status = FltGetFileSystemType(((uint64_t *)input_2)[3], &value_4);
            data = data_pointer;
            requestor_process = process_context;
            wide_text_5 = (int16_t *)(((uint64_t)((uint64_t)((uint64_t)wide_text_5 >> 8)) & 0xffffffffffffffULL) << 8 | (uint64_t)(value_4 == 0xd) & 0xffULL);
            byte_value = MpCheckForAmHardening(data_pointer, input_2, 0, process_context, wide_text_5);
            byte_value_5 = byte_value;
            byte_value_6 = MpCheckForFolderGuard(value_7, (uint8_t)byte_value, requestor_process);
            if (!byte_value && !byte_value_6)
            {
                goto block_10;
            }
            if (value_4 != 0xd)
            {
                current_thread = 0x101;
                block_1:
                value = *(int32_t *)(((int64_t *)data)[2] + 0x20);

                if (value != 0xb && value != 0x48)
                {
                    goto block_3;
                }
                status = FltGetFileNameInformation(data, current_thread, &file_name_2);
                if (status <= -1)
                {
                    if (status != -0x3fffff2c && status != -0x3fffffc6)
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            current_thread = (uint64_t)KeGetCurrentThread();
                            instance = 0x27;
                            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), instance, WD_SYMBOL_ADDRESS(WPP_ea3e370748bf3721894065c090fd2405_Traceguids), current_thread, (uint64_t)((uint64_t)wide_text_5) & 0xffffffff00000000 | (uint64_t)status & 0xffffffff);
                        }
                    }
                    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                    {
                        current_thread = (uint64_t)KeGetCurrentThread();
                        instance = 0x26;
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), instance, WD_SYMBOL_ADDRESS(WPP_ea3e370748bf3721894065c090fd2405_Traceguids), current_thread, (uint64_t)((uint64_t)wide_text_5) & 0xffffffff00000000 | (uint64_t)status & 0xffffffff);
                    }
                    goto block_10;
                }
                if (byte_value_2)
                {
                    current_thread = ((uint64_t *)input_2)[4];
                    instance = ((uint64_t *)input_2)[3];
                    handle_context = NULL;
                    if (0 <= (int32_t)FltGetStreamHandleContext(instance, current_thread, &handle_context) && handle_context && (value_2 = *(uint32_t *)(&handle_context[0x2c]), FltReleaseContext(), value_2 >> 3 & 1))
                    {
                        status = MpQueryLoopbackLocalPathByFileObject(input_2, ((int64_t *)input_2)[4], &file_name_3, &allocation);
                    }
                    else
                    {
                        status = MpQueryLoopbackLocalPathByName(input_2, file_name_2, &file_name_3, &allocation);
                    }
                    if (status <= -1)
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            current_thread = (uint64_t)KeGetCurrentThread();
                            instance = 0x28;
                            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), instance, WD_SYMBOL_ADDRESS(WPP_ea3e370748bf3721894065c090fd2405_Traceguids), current_thread, (uint64_t)((uint64_t)wide_text_5) & 0xffffffff00000000 | (uint64_t)status & 0xffffffff);
                        }
                        goto block_10;
                    }
                    requestor_process = process_context;
                }
                if (byte_value_5)
                {
                    if (*(uint32_t *)(MpData + 0x364) >> 0xe & 1)
                    {
                        buffer_2[0] = 0;
                        status = FltIsDirectory(((uint64_t *)input_2)[4], ((uint64_t *)input_2)[3], buffer_2);
                        file_name = file_name_3;
                        if (0 <= status)
                        {
                            byte_value_4 = buffer_2[0];
                        }
                        else
                        {
                            buffer_2[0] = 0;
                            byte_value_4 = 0;
                        }
                        wide_text = NULL;
                        if (file_name_3)
                        {
                            extension = allocation;
                            file_object_2 = wide_text;
                            file_name_4 = wide_text;
                        }
                        else
                        {
                            file_object_2 = ((int16_t **)input_2)[3];
                            extension = wide_text;
                            file_name_4 = file_name_2;
                        }
                        if (MpFsHardeningData && requestor_process && (file_name_4 || file_name_3))
                        {
                            file_name_5 = (int16_t **)(&handle_context);
                            handle_context = (int16_t *)((uint64_t)handle_context & 0xffffffff00000000);
                            wide_text_5 = NULL;
                            value_21 = FsHardeningMatch(file_name_4, file_name_3, extension, file_object_2, NULL);
                            if ((char)value_21)
                            {
                                value_3 = 0;
                                if ((uint64_t)handle_context & 1)
                                {
                                    value_3 = value_21 & 0xff;
                                }
                                byte_value = (char)value_3;
                                if ((uint64_t)handle_context & 2)
                                {
                                    value_8 = (uint32_t)value_8 & 0xffffff00 | (uint32_t)byte_value_4 & 0xff;
                                    MpTraceFsHardeningNotification(((uint64_t)((uint64_t)((uint32_t)((uint64_t)handle_context >> 8))) & 0xffffffffffffffULL) << 8 | (uint64_t)1 & 0xffULL, value_3, *(WD_LAYOUT_77 **)(process_context + 0x80), file_name_4, file_name, value_8, file_name_5);
                                    wide_text_5 = file_name;
                                }
                            }
                            else
                            {
                                byte_value = 1;
                            }
                        }
                        else
                        {
                            byte_value = 0;
                        }
                        byte_value = byte_value == '\0';
                        requestor_process = process_context;
                        data = data_pointer;
                        input_2 = data_pointer_2;
                    }
                    else
                    {
                        file_name = file_name_2;
                        if (file_name_3)
                        {
                            file_name = NULL;
                        }
                        byte_value = MpIsAMPath(requestor_process, file_name);
                    }
                    process_id_2 = (uint32_t)((uint64_t)file_name_5 >> 0x20);
                    if (!byte_value)
                    {
                        goto block_2;
                    }
                }
                else
                {
                    block_2:
                    if (byte_value_6)
                    {
                        file_name = file_name_3;
                        if (!file_name_3)
                        {
                            file_name = &file_name_2[4];
                        }
                        wide_text_5 = (int16_t *)((uint64_t)wide_text_5 & 0xffffffffffffff00);
                        byte_value = MpApplyFolderGuard(data, input_2, requestor_process, file_name, wide_text_5);
                        process_id_2 = (uint32_t)((uint64_t)file_name_5 >> 0x20);
                        if (byte_value)
                        {
                            goto block_9;
                        }
                    }

                    block_3:
                    byte_value = 0;

                    if (file_name_2)
                    {
                        FltReleaseFileNameInformation();
                        file_name_2 = NULL;
                    }
                    if (file_name_3)
                    {
                        ExFreePoolWithTag(file_name_3, 0x7375704d);
                        file_name_3 = NULL;
                    }
                    if (allocation)
                    {
                        ExFreePoolWithTag(allocation, 0x7375704d);
                        allocation = NULL;
                    }
                    wide_text_3 = NULL;
                    if (MpIsRename(data))
                    {
                        file_name = *(int16_t **)(((int64_t *)data)[2] + 0x38);
                        value_2 = *(uint32_t *)(&file_name[8]);
                        if (value_2 && &file_name[10] && (!(*(int64_t *)(&file_name[4])) && (file_name[10] == 0x5c && 10 <= value_2 && file_name[0xb] == 0x3f)) && (file_name[0xc] == 0x3f && file_name[0xd] == 0x5c && (value_2 <= 0xf || (file_name[0xf] != 0x3a || file_name[0x10] != 0x5c))) && (value_2 <= 0x11 || (file_name[0xe] != 0x55 || file_name[0xf] != 0x4e || file_name[0x10] != 0x43 || file_name[0x11] != 0x5c)))
                        {
                            byte_value_3 = '\x01';
                            if (byte_value_2)
                            {
                                destination_string = &allocation;
                                wide_text_2 = &wide_text_4;
                                file_name_5 = wide_text_3;
                            }
                            else
                            {
                                file_name_5 = &file_name_2;
                                destination_string = wide_text_3;
                                wide_text_2 = wide_text_3;
                            }
                            value_8 = name_options;
                            status = MpGetRenameParentTargetSymLinkNameInformation(data, input_2, (uint8_t)byte_value_2, 1, file_name, name_options, file_name_5, wide_text_2, destination_string);
                        }
                        else
                        {
                            block_4:
                            file_name_5 = &file_name_2;

                            wide_text = &file_name[10];
                            file_object_2 = &file_name[4];
                            file_name = (int16_t *)((uint64_t)((uint64_t)wide_text_5) & 0xffffffff00000000 | (uint64_t)value_2 & 0xffffffff);
                            value_8 = name_options;
                            status = FltGetDestinationFileNameInformation(((uint64_t *)input_2)[3], ((uint64_t *)input_2)[4], *(uint64_t *)file_object_2, wide_text, file_name, name_options, file_name_5);
                        }
                        wide_text_5 = file_name;
                    }
                    else
                    {
                        value = *(int32_t *)(((int64_t *)data)[2] + 0x20);
                        if (value == 0xb || value == 0x48)
                        {
                            file_name = *(int16_t **)(((int64_t *)data)[2] + 0x38);
                            value_2 = *(uint32_t *)(&file_name[8]);
                            if (!value_2 || (!(&file_name[10]) || *(int64_t *)(&file_name[4]) || file_name[10] != 0x5c || (value_2 < 10 || file_name[0xb] != 0x3f)) || file_name[0xc] != 0x3f || file_name[0xd] != 0x5c || (0x10 <= value_2 && file_name[0xf] == 0x3a && file_name[0x10] == 0x5c || 0x12 <= value_2 && file_name[0xe] == 0x55 && file_name[0xf] == 0x4e && (file_name[0x10] == 0x43 && file_name[0x11] == 0x5c)))
                            {
                                goto block_4;
                            }
                            byte_value_3 = '\x01';
                            if (byte_value_2)
                            {
                                destination_string = &allocation;
                                wide_text_2 = &wide_text_4;
                                file_name_5 = wide_text_3;
                            }
                            else
                            {
                                file_name_5 = &file_name_2;
                                destination_string = wide_text_3;
                                wide_text_2 = wide_text_3;
                            }
                            value_8 = name_options;
                            status = MpGetRenameParentTargetSymLinkNameInformation(data, input_2, (uint8_t)byte_value_2, 0, file_name, name_options, file_name_5, wide_text_2, destination_string);
                            wide_text_5 = file_name;
                        }
                    }
                    process_id_2 = (uint32_t)((uint64_t)file_name_5 >> 0x20);
                    if (0 <= status)
                    {
                        if (byte_value_2)
                        {
                            if (byte_value_3)
                            {
                                if (wide_text_4)
                                {
                                    value_6 = *(uint64_t *)wide_text_4;
                                    value_11 = *(uint64_t *)(&wide_text_4[4]);
                                    values[0] &= 0xffffffff00000000;
                                    values[1] = 0;
                                    values[2] &= 0xffffffff00000000;
                                    values[3] = 0;
                                    value_16 &= 0xffffffff00000000;
                                    value_17 = 0;
                                    value_18 &= 0xffffffff00000000;
                                    value_19 = 0;
                                    handle_context = NULL;
                                    value_10 = 0;
                                    if (*wide_text_4)
                                    {
                                        status = FltParseFileName(wide_text_4, values, &values[2], &handle_context);
                                        if (status <= -1)
                                        {
                                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                            {
                                                wide_text_5 = (int16_t *)((uint64_t)((uint64_t)wide_text_5) & 0xffffffff00000000 | (uint64_t)status & 0xffffffff);
                                                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x23, WD_SYMBOL_ADDRESS(WPP_fa8e7b00178136a6e2a2b6da068185ef_Traceguids), (uint64_t)KeGetCurrentThread(), wide_text_5);
                                            }
                                            goto block_5;
                                        }
                                        value_19 = *(uint64_t *)(&wide_text_4[4]);
                                        value_5 = *wide_text_4;
                                        if ((int16_t)handle_context)
                                        {
                                            value_5 -= (int16_t)handle_context;
                                        }
                                        value_17 = value_10;
                                        WdStoreField(&value_18, 0, 4, (uint64_t)(((uint64_t)wide_text_4[1] & 0xffffULL) << 16 | (uint64_t)value_5 & 0xffffULL));
                                        value_16 = ((uint64_t)(((uint64_t)WdLoadField(&value_16, 4, 4) & 0xffffffffULL) << 16 | (uint64_t)WdLoadField(&handle_context, 2, 2) & 0xffffULL) & 0xffffffffffffULL) << 16 | (uint64_t)((int16_t)handle_context) & 0xffffULL;
                                    }
                                    status = 0;
                                }
                            }
                            else
                            {
                                status = MpQueryLoopbackLocalPathByName(input_2, file_name_2, &file_name_3, &allocation);
                                process_id_2 = (uint32_t)((uint64_t)file_name_5 >> 0x20);
                                if (status <= -1)
                                {
                                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                    {
                                        current_thread = 0x2b;
                                        goto block_7;
                                    }
                                    goto block_8;
                                }
                            }
                        }
                        block_5:
                        process_id_2 = (uint32_t)((uint64_t)file_name_5 >> 0x20);

                        if (byte_value_5)
                        {
                            if (file_name_3)
                            {
                                file_name = NULL;
                            }
                            else
                            {
                                file_name = values_2;
                                if (!wide_text_4)
                                {
                                    file_name = file_name_2;
                                }
                            }
                            if (value_9)
                            {
                                buffer_2[0] = 0;
                                status = FltIsDirectory(((uint64_t *)input_2)[4], ((uint64_t *)input_2)[3], buffer_2);
                                wide_text = file_name_3;
                                if (status <= -1)
                                {
                                    buffer_2[0] = 0;
                                }
                                byte_value_4 = buffer_2[0];
                                file_object = 0;
                                if (!file_name_3)
                                {
                                    file_object = ((int64_t *)input_2)[3];
                                }
                                if (MpFsHardeningData && requestor_process && (file_name || file_name_3))
                                {
                                    file_name_5 = (int16_t **)(&handle_context);
                                    wide_text_5 = NULL;
                                    handle_context = (int16_t *)((uint64_t)handle_context & 0xffffffff00000000);
                                    value_21 = FsHardeningMatch(file_name, file_name_3, allocation, file_object, NULL);
                                    if ((char)value_21)
                                    {
                                        value_3 = 0;
                                        if ((uint64_t)handle_context & 1)
                                        {
                                            value_3 = value_21 & 0xff;
                                        }
                                        byte_value = (char)value_3;
                                        if (!((uint64_t)handle_context & 2))
                                        {
                                            goto block_6;
                                        }
                                        MpTraceFsHardeningNotification(((uint64_t)((uint64_t)((uint32_t)((uint64_t)handle_context >> 8))) & 0xffffffffffffffULL) << 8 | (uint64_t)1 & 0xffULL, value_3, *(WD_LAYOUT_77 **)(process_context + 0x80), file_name, wide_text, (uint32_t)value_8 & 0xffffff00 | (uint32_t)byte_value_4 & 0xff, file_name_5);
                                        byte_value = byte_value == '\0';
                                        requestor_process = process_context;
                                        wide_text_5 = wide_text;
                                    }
                                    else
                                    {
                                        byte_value = '\0';
                                        requestor_process = process_context;
                                    }
                                }
                                else
                                {
                                    byte_value = 0;
                                    block_6:
                                    byte_value = byte_value == '\0';

                                    requestor_process = process_context;
                                }
                            }
                            else
                            {
                                byte_value = MpIsAMPath(requestor_process, file_name);
                            }
                            process_id_2 = (uint32_t)((uint64_t)file_name_5 >> 0x20);
                            if (byte_value)
                            {
                                goto block_9;
                            }
                            data = data_pointer;
                        }
                        byte_value = 0;
                        if (byte_value_6)
                        {
                            file_name = file_name_3;
                            if (!file_name_3)
                            {
                                if (wide_text_4)
                                {
                                    file_name = (int16_t *)(&value_6);
                                }
                                else
                                {
                                    file_name = &file_name_2[4];
                                }
                            }
                            wide_text_5 = (int16_t *)((uint64_t)((uint64_t)wide_text_5) & 0xffffffffffffff00 | (uint64_t)byte_value_3 & 0xff);
                            byte_value = MpApplyFolderGuard(data, data_pointer_2, requestor_process, file_name, wide_text_5);
                        }
                    }
                    else if (status != -0x3fffff2c && status != -0x3fffffc6)
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            current_thread = 0x2a;
                            block_7:
                            wide_text_5 = (int16_t *)((uint64_t)((uint64_t)wide_text_5) & 0xffffffff00000000 | (uint64_t)status & 0xffffffff);

                            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), current_thread, WD_SYMBOL_ADDRESS(WPP_ea3e370748bf3721894065c090fd2405_Traceguids), (uint64_t)KeGetCurrentThread(), wide_text_5);
                        }
                    }
                    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                    {
                        current_thread = 0x29;
                        goto block_7;
                    }
                    block_8:
                    if (!byte_value)
                    {
                        goto block_10;
                    }
                }
                block_9:
                data = data_pointer;

                process_id = (uint32_t)((uint64_t)wide_text_5 >> 0x20);
                ((uint32_t *)data_pointer)[6] = WD_STATUS_ACCESS_DENIED;
                ((uint64_t *)data_pointer)[4] = 0;
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                {
                    file_name = NULL;
                    if (requestor_process)
                    {
                        file_name = *(int16_t **)(requestor_process + 0x80);
                    }
                    process_id = PsGetCurrentProcessId();
                    value_2 = value_9;
                    WPP_SF_ZZDd(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2c, WD_SYMBOL_ADDRESS(WPP_ea3e370748bf3721894065c090fd2405_Traceguids), (int16_t *)(*(int64_t *)(((int64_t *)data)[2] + 8) + 0x58), file_name, process_id, ((uint64_t)process_id_2 & 0xffffffffULL) << 32 | (uint64_t)((uint32_t)(value_9 != 0)) & 0xffffffffULL);
                    process_id = (uint32_t)((uint64_t)file_name >> 0x20);
                }
                else
                {
                    value_2 = value_9;
                }
                current_thread = 0;
                if (process_context)
                {
                    current_thread = *(uint64_t *)(process_context + 0x80);
                }
                process_id_2 = PsGetCurrentProcessId();
                MpLogPrintfW(L"[Mini-filter] Denied rename/hardlink to file [%wZ] from process [%wZ][Pid:%u]. DynamicFsHardeningEnabled[%d].", *(int64_t *)(((int64_t *)data)[2] + 8) + 0x58, current_thread, process_id_2, ((uint64_t)process_id & 0xffffffffULL) << 32 | (uint64_t)((uint32_t)(value_2 != 0)) & 0xffffffffULL);
                goto block_11;
            }
            status = MpIsLoopbackByObj(input_2, 0, &byte_value_2);
            if (status <= -1)
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    current_thread = (uint64_t)KeGetCurrentThread();
                    instance = 0x25;
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), instance, WD_SYMBOL_ADDRESS(WPP_ea3e370748bf3721894065c090fd2405_Traceguids), current_thread, (uint64_t)((uint64_t)wide_text_5) & 0xffffffff00000000 | (uint64_t)status & 0xffffffff);
                }
                goto block_10;
            }
            if (byte_value_2)
            {
                current_thread = 0x102;
                name_options = 0x102;
                goto block_1;
            }
        }
        else
        {
            data = data_pointer;
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                current_thread = ((uint64_t *)data_pointer)[1];
                instance = 0x24;
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), instance, WD_SYMBOL_ADDRESS(WPP_ea3e370748bf3721894065c090fd2405_Traceguids), current_thread, (uint64_t)((uint64_t)wide_text_5) & 0xffffffff00000000 | (uint64_t)status & 0xffffffff);
            }
            block_10:
            if (status == -0x3ffffee0 || status == -0x3fffffb5)
            {
                ((int32_t *)data)[6] = status;
                ((uint64_t *)data)[4] = 0;
            }

            block_11:
            requestor_process = process_context;
        }
        if (requestor_process)
        {
            MpReleaseProcessContext(requestor_process);
        }
    }
    file_name = wide_text_4;
    block_12:
    if (file_name_3)
    {
        ExFreePoolWithTag(file_name_3, 0x7375704d);
    }

    if (allocation)
    {
        ExFreePoolWithTag(allocation, 0x7375704d);
        allocation = NULL;
    }
    if (file_name_2)
    {
        FltReleaseFileNameInformation();
    }
    if (file_name)
    {
        ExFreePoolWithTag(file_name, 0x7375704d);
    }
    return;
}

void MpIsDirectory(void *input)
{
    int32_t value;
    char buffer_2[8];
    buffer_2[0] = 0;
    value = FltIsDirectory(((uint64_t *)input)[4], ((uint64_t *)input)[3], buffer_2);
    if (value < 0 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 10, WD_SYMBOL_ADDRESS(WPP_ea3e370748bf3721894065c090fd2405_Traceguids), (uint64_t)KeGetCurrentThread(), value);
    }
    return;
}

#include "wdfilter.h"

const WD_GUID WdReadTraceProvider = {0xbb45134b, 0xc478, 0x3ccc, {0x36, 0x9f, 0x21, 0xc9, 0xf9, 0xed, 0xad, 0xb7}};

uint32_t MpPostRead(WD_CALLBACK_DATA_VIEW *data, const WD_RELATED_OBJECTS_VIEW *objects,
                   void *completion_context, uint32_t flags)
{
    (void)completion_context;
    if ((flags & WD_POSTOP_DRAINING) || !WD_NT_SUCCESS(data->IoStatus.Status) ||
        !data->IoStatus.Information ||
        (data->Iopb->MinorFunction & WD_MDL_READ_COMPLETE) == WD_MDL_READ_COMPLETE ||
        (data->Iopb->IrpFlags & WD_IRP_NOCACHE_OR_PAGING) ||
        (objects->FileObject->Flags & WD_FILE_NO_INTERMEDIATE_BUFFERING))
    {
        return WD_POSTOP_FINISHED_PROCESSING;
    }
    if (KeIsExecutingDpc() || KeGetCurrentIrql() > 1 || !data->Thread || !objects->FileObject)
    {
        return WD_POSTOP_FINISHED_PROCESSING;
    }

    WD_SCAN_STREAM_CONTEXT_VIEW *stream_context = NULL;
    WD_PROCESS_CONTEXT_VIEW *process_context = NULL;
    if (!WD_NT_SUCCESS(FltGetStreamContext(objects->Instance, objects->FileObject,
                                         (void **)&stream_context)))
    {
        goto cleanup;
    }

    WD_READ_MONITOR_GLOBALS *globals = (WD_READ_MONITOR_GLOBALS *)MpData;
    if (IoThreadToProcess(KeGetCurrentThread()) != globals->ExcludedReadProcess &&
        IoThreadToProcess(KeGetCurrentThread()) != globals->SecondaryExcludedReadProcess)
    {
        WdAtomicOr32(&stream_context->Flags, WD_STREAM_EXTERNAL_READ);
    }
    if (stream_context->Volume->Flags & WD_VOLUME_SKIP_READ_MONITORING)
    {
        goto cleanup;
    }

    uint32_t monitor_flags = globals->MonitorFlags;
    char sequential_read = 0;
    MpSeqDetectCtxUpdate((uintptr_t)stream_context->Volume, (uintptr_t)data->Thread,
                        (intptr_t)objects->FileObject, &data->Iopb->Read.ByteOffset,
                        (uint32_t)data->IoStatus.Information, &sequential_read);
    if (!(monitor_flags & WD_MONITOR_SEQUENTIAL_READ) || !sequential_read)
    {
        goto cleanup;
    }

    void *requestor_process = FltGetRequestorProcess(data);
    if (globals->UseThreadProcessForSystemRequests && requestor_process == *__imp_PsInitialSystemProcess)
    {
        void *thread_process = IoThreadToProcess(KeGetCurrentThread());
        if (requestor_process != thread_process)
        {
            requestor_process = thread_process;
        }
    }

    int32_t status = MpGetProcessContextByObject((uintptr_t)requestor_process,
                                               (int64_t *)&process_context);
    if (WD_NT_SUCCESS(status))
    {
        status = MpSendFileAsyncMessage(WD_NOTIFY_SEQUENTIAL_READ, data, (void *)objects,
                                       stream_context->Volume->DeviceCharacteristics,
                                       UINT32_MAX, 0, (intptr_t)objects->Transaction,
                                       NULL, process_context, NULL, NULL);
        if (!WD_NT_SUCCESS(status) && WPP_GLOBAL_Control != (uintptr_t)&WPP_GLOBAL_Control)
        {
            WD_TRACE_CONTROL_VIEW *trace = (WD_TRACE_CONTROL_VIEW *)WPP_GLOBAL_Control;
            if (trace->Flags & WD_TRACE_READ_FAILURE)
            {
                WPP_SF_D(trace->TraceHandle, 26, WD_SYMBOL_ADDRESS(WdReadTraceProvider), (uint32_t)status);
            }
        }
    }
    else if (WPP_GLOBAL_Control != (uintptr_t)&WPP_GLOBAL_Control)
    {
        WD_TRACE_CONTROL_VIEW *trace = (WD_TRACE_CONTROL_VIEW *)WPP_GLOBAL_Control;
        if (trace->Flags & WD_TRACE_READ_FAILURE)
        {
            WPP_SF_qDD(trace->TraceHandle, 25, WD_SYMBOL_ADDRESS(WdReadTraceProvider),
                       (uintptr_t)data->Thread, MpGetRequestorProcessId(data), (uint32_t)status);
        }
    }

cleanup:
    if (stream_context)
    {
        FltReleaseContext(stream_context);
    }
    if (process_context)
    {
        MpReleaseProcessContext(process_context);
    }
    return WD_POSTOP_FINISHED_PROCESSING;
}

void MpPreRead(void *data, void *objects)
{
    uint64_t file_object;
    int64_t stream_context = 0;
    uint64_t process_context = 0;
    uint64_t process_context_2;
    uint32_t value;
    uint64_t value_2;
    uint64_t instance;
    int32_t status;
    int32_t value_4 = 1;
    uint32_t value_5;
    uint64_t requestor_process;
    int64_t thread_process;
    int64_t handle_context = 0;
    if (!((int64_t *)data)[1] || !((int64_t *)objects)[4])
    {
        return;
    }
    process_context_2 = 0;
    if (FltSupportsStreamContexts() && (process_context_2 = 0, !MpIsThisPrefetchOperation(objects, NULL)))
    {
        if (MpScanOnPreUserModeReadCopySourceFile(data, objects, &stream_context, &handle_context, value_2 & 0xffffffff00000000) != 1)
        {
            process_context_2 = 0;
            if (MpDlpIsEnabled(0, NULL))
            {
                requestor_process = FltGetRequestorProcess(data);
                if (*(int32_t *)(MpData + 0xfec) && requestor_process == *__imp_PsInitialSystemProcess && (thread_process = IoThreadToProcess((uint64_t)KeGetCurrentThread()), requestor_process != thread_process))
                {
                    requestor_process = thread_process;
                }
                process_context_2 = 0;
                if (requestor_process && (status = MpGetProcessContextByObject(requestor_process, &process_context), process_context_2 = process_context, 0 <= status) && (!(*(uint32_t *)(process_context + 0x38) & 0x40000000) && (stream_context || (file_object = ((uint64_t *)objects)[4], instance = ((uint64_t *)objects)[3], 0 <= (int32_t)FltGetStreamContext(instance, file_object, &stream_context)))) && !(*(uint32_t *)(stream_context + 0x30) & 1) && (*(uint32_t *)(stream_context + 0x30) >> 0x10 & 1 && ((handle_context || (file_object = ((uint64_t *)objects)[4], instance = ((uint64_t *)objects)[3], 0 <= (int32_t)FltGetStreamHandleContext(instance, file_object, &handle_context))) && *(uint32_t *)(handle_context + 0x28) & 0x40)))
                {
                    process_context &= 0xffffffff00000000;
                    status = MpDlpGetProcessEntryFlags(handle_context, process_context_2, &process_context);
                    if (status == -0x3ffffddb || (value = (uint32_t)process_context, !(process_context & 9)))
                    {
                        FltAcquirePushLockExclusive(handle_context + 0x48);
                        value_4 = MpDlpGetProcessEntryFlags(handle_context, process_context_2, &process_context);
                        value = (uint32_t)process_context;
                        if (value_4 == -0x3ffffddb || (value_4 = 1, !(process_context & 9)))
                        {
                            value_5 = 0;
                            requestor_process = handle_context;
                            value_4 = MpDlpCheckFileAccess(data, objects, process_context_2, *(uint32_t *)(*(int64_t *)(stream_context + 8) + 0x54), stream_context, handle_context, NULL, 0, 0, 0);
                            if (value_4 == 2)
                            {
                                MpDlpSetProcessEntryFlags(data, objects, process_context_2, handle_context, NULL, (uint64_t)requestor_process & 0xffffffff00000000 | (uint64_t)(*(uint32_t *)(*(int64_t *)(stream_context + 8) + 0x54)) & 0xffffffff, ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)8 & 0xffffffffULL);
                            }
                        }
                        FltReleasePushLock(handle_context + 0x48);
                    }
                    value_5 = WdDlpStorage2;
                    if (value & 8 || value_4 == 2)
                    {
                        ((uint64_t *)data)[4] = 0;
                        ((uint32_t *)data)[6] = value_5;
                    }
                }
            }
            goto block_1;
        }
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
        {
            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x18, WD_SYMBOL_ADDRESS(WdReadTraceProvider), ((uint64_t *)data)[1]);
        }
        value = *(uint32_t *)(MpData + 0x360);
        ((uint64_t *)data)[4] = 0;
        value_5 = 0xc0000906;
        if (!(value & 4))
        {
            value_5 = WD_STATUS_ACCESS_DENIED;
        }
        ((uint32_t *)data)[6] = value_5;
    }
    else
    {
        block_1:
        if (process_context_2)
        {
            MpReleaseProcessContext(process_context_2);
        }
    }
    if (handle_context)
    {
        FltReleaseContext();
    }
    if (stream_context)
    {
        FltReleaseContext();
    }
    return;
}

void MpPreWrite(WD_LAYOUT_41 *data, void *objects, uint64_t *completion_context)
{
    int32_t *data_pointer;
    int64_t values[5];
    int64_t context;
    uint64_t value;
    int64_t *data_pointer_2;
    int64_t lock;
    uint64_t instance;
    uint32_t value_2;
    uint32_t *data_pointer_3;
    bool enabled;
    bool enabled_2;
    uint32_t value_3;
    uint32_t value_4;
    int32_t trace_argument_1;
    uint64_t file_object;
    char buffer[32];
    value_2 = (uint32_t)((uint64_t)value >> 0x20);
    values[4] = __security_cookie ^ (uint64_t)buffer;
    trace_argument_1 = 0;
    value_4 = 0;
    file_object = ((uint64_t *)objects)[4];
    values[3] = 0;
    context = 0;
    values[2] = 0;
    enabled = 0;
    values[0] = 0;
    if (!FltSupportsStreamContexts(file_object) || (file_object = ((uint64_t *)objects)[4], instance = ((uint64_t *)objects)[3], (int32_t)FltGetStreamContext(instance, file_object, &values[3]) < 0))
    {
        __security_check_cookie(values[4] ^ (uint64_t)buffer);
        return;
    }
    if (values[3] == BreakOnStream)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
        {
            if (*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                lock = values[3];
                WPP_SF_qqq(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 10, WD_SYMBOL_ADDRESS(WdReadTraceProvider), data->field_0x8, values[3], ((uint64_t *)objects)[4]);
                value_2 = (uint32_t)((uint64_t)lock >> 0x20);
            }
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                if (*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                {
                    data_pointer = (int32_t *)(values[3] + 0x20);
                    if (data_pointer && *(int64_t *)(values[3] + 8))
                    {
                        if (*data_pointer != 5 || *(uint32_t *)(MpData + 0x364) >> 0xf & 1)
                        {
                            if (*(int32_t *)(values[3] + 0x24) == *(int32_t *)(*(int64_t *)(values[3] + 8) + 0x90))
                            {
                                trace_argument_1 = *data_pointer;
                            }
                        }
                        else
                        {
                            trace_argument_1 = 5;
                        }
                    }
                    file_object = *(uint64_t *)(values[3] + 0xb0);
                    WPP_SF_Di(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xb, WD_SYMBOL_ADDRESS(WdReadTraceProvider), trace_argument_1, file_object);
                    value_2 = (uint32_t)((uint64_t)file_object >> 0x20);
                }
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                {
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xc, WD_SYMBOL_ADDRESS(WdReadTraceProvider), *(uint64_t *)(&data->field_0x10[10]), ((uint64_t)value_2 & 0xffffffffULL) << 32 | (uint64_t)data->field_0x10[6] & 0xffffffffULL);
                }
            }
        }
        (*(WD_ROUTINE)swi(3))();
        return;
    }
    if (*(uint32_t *)(values[3] + 0x30) & 1)
    {
        if (*(int64_t *)(((int64_t *)objects)[4] + 0x20) || *(int32_t *)(*(int64_t *)(values[3] + 8) + 0x78) == 1)
        {
            MpDasdWrite(data, objects, values[3]);
        }
        FltReleaseContext(values[3]);
        __security_check_cookie(values[4] ^ (uint64_t)buffer);
        return;
    }
    value_3 = *data->field_0x10 & 2;
    enabled_2 = 1;
    if (!value_3 || *(uint32_t *)(values[3] + 0x30) & 0x20)
    {
        if (*data->field_0x10 & 1 && (!value_3 && !(*(uint32_t *)(*(int64_t *)(values[3] + 8) + 0x50) & 4) && (value_4 = MpGetMappedPurgeExclusionLock(values[3], values), (int32_t)value_4 <= -1)))
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                file_object = ((uint64_t)value_2 & 0xffffffffULL) << 32 | (uint64_t)value_4 & 0xffffffffULL;
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xd, WD_SYMBOL_ADDRESS(WdReadTraceProvider), (uint64_t)KeGetCurrentThread(), file_object);
                value_2 = (uint32_t)((uint64_t)file_object >> 0x20);
            }
            enabled = 1;
        }
        else
        {
            value_2 = 0;
            value_4 = MpTxfResolveTransaction(objects, values[3], &context, NULL, NULL);
            lock = values[3];
            if (0 <= (int32_t)value_4)
            {
                if (context)
                {
                    if (*(uint32_t *)(context + 0xa8) & 1)
                    {
                        value_4 = 0xc00000e5;
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            file_object = 0xf;
                            instance = ((uint64_t)value_2 & 0xffffffffULL) << 32 | (uint64_t)0xc00000e5 & 0xffffffffULL;
                            value_4 = 0xc00000e5;
                            goto block_1;
                        }
                        goto block_2;
                    }
                    if (0xfffd <= (uint16_t)(((int16_t *)objects)[1] - 1U))
                    {
                        FltAcquirePushLockShared(values[3] + 0xc0);
                        if (*(int64_t *)(lock + 0xd0))
                        {
                            *(uint32_t *)(*(int64_t *)(lock + 0xd0) + 0x18) = 0;
                            *(uint32_t *)(*(int64_t *)(lock + 0xd0) + 0x1c) = *(uint32_t *)(*(int64_t *)(lock + 8) + 0x90);
                        }
                        else
                        {
                            *(uint32_t *)(lock + 0x20) = 0;
                            value_4 = *(uint32_t *)(lock + 0x20);
                            *(uint32_t *)(lock + 0x24) = *(uint32_t *)(*(int64_t *)(lock + 8) + 0x90);
                            if (value_4 != 3 && (7 < value_4 || !(0x94U >> (value_4 & 0x1f) & 1)))
                            {
                                WdAtomicAnd32((volatile int32_t *)((uint32_t *)(lock + 0x30)), 0xffffbfff);
                            }
                        }
                        FltReleasePushLock(lock + 0xc0);
                    }
                }
                else
                {
                    *(uint32_t *)(values[3] + 0x20) = 0;
                    value_4 = *(uint32_t *)(values[3] + 0x20);
                    *(uint32_t *)(values[3] + 0x24) = *(uint32_t *)(*(int64_t *)(values[3] + 8) + 0x90);
                    if (value_4 != 3 && (7 < value_4 || !(0x94U >> (value_4 & 0x1f) & 1)))
                    {
                        WdAtomicAnd32((volatile int32_t *)((uint32_t *)(values[3] + 0x30)), 0xffffbfff);
                    }
                }
                lock = values[3];
                value_4 = 0;
                if (context)
                {
                    if (!(*(uint32_t *)(context + 0xa8) & 1) && 0xfffd <= (uint16_t)(((int16_t *)objects)[1] - 1U))
                    {
                        FltAcquirePushLockShared(values[3] + 0xc0);
                        if ((*(uint32_t *)(lock + 0x30) & 0x100108) != 0x100108)
                        {
                            if (*(int64_t *)(lock + 0xd0))
                            {
                                WdUnresolvedAtomicBegin();
                                data_pointer_3 = (uint32_t *)(*(int64_t *)(lock + 0xd0) + 0x30);
                                *data_pointer_3 = *data_pointer_3 | 0x100108;
                                WdUnresolvedAtomicEnd();
                            }
                            else
                            {
                                WdAtomicOr32((volatile int32_t *)((uint32_t *)(lock + 0x30)), 0x100108);
                            }
                        }
                        FltReleasePushLock(lock + 0xc0);
                    }
                }
                else if ((*(uint32_t *)(values[3] + 0x30) & 0x100108) != 0x100108)
                {
                    WdAtomicOr32((volatile int32_t *)((uint32_t *)(values[3] + 0x30)), 0x100108);
                }
                if (!(*data->field_0x10 & 2))
                {
                    if (*(uint32_t *)(*(int64_t *)(values[3] + 8) + 0x54) & 0x810)
                    {
                        trace_argument_1 = MpDlpCheckPreWriteOperation(data, objects, values[3]);
                        value_3 = WdDlpStorage2;
                        if (trace_argument_1 == 2)
                        {
                            value_4 = data->field_0x18;
                            if (0 <= (int32_t)data->field_0x18)
                            {
                                data->field_0x18 = WdDlpStorage2;
                                value_4 = value_3;
                            }
                            enabled = 1;
                            goto block_2;
                        }
                    }
                    MpCopyFileChunkOnPreWrite(data, objects);
                    if (!(data->field_0x0 & 2))
                    {
                        values[1] = 0;
                        MpUpdateFileSize(data, objects, values[3], context, &values[1]);
                        data_pointer_2 = &values[1];
                        MpUpdateFileWriteHistory(data, objects, values[3], context, data_pointer_2);
                        value_2 = (uint32_t)((uint64_t)data_pointer_2 >> 0x20);
                    }
                }
            }
            else if (value_4 != WD_STATUS_NOT_FOUND && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                file_object = 0xe;
                instance = ((uint64_t)value_2 & 0xffffffffULL) << 32 | (uint64_t)value_4 & 0xffffffffULL;
                block_1:
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), file_object, WD_SYMBOL_ADDRESS(WdReadTraceProvider), (uint64_t)KeGetCurrentThread(), instance);

                value_2 = (uint32_t)((uint64_t)instance >> 0x20);
            }
        }
    }
    block_2:
    lock = values[0];

    if ((values[0] || data->field_0x0 & 2) && !enabled)
    {
        value_4 = MpCreateWriteContext(values[3], context, values[0], &values[2]);
        if (0 <= (int32_t)value_4)
        {
            *completion_context = values[2];
            if (lock)
            {
                MpRWLAcquireShared(lock);
            }
            FltIsOperationSynchronous(data);
        }
        else
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                file_object = ((uint64_t)value_2 & 0xffffffffULL) << 32 | (uint64_t)value_4 & 0xffffffffULL;
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x10, WD_SYMBOL_ADDRESS(WdReadTraceProvider), (uint64_t)KeGetCurrentThread(), file_object);
                value_2 = (uint32_t)((uint64_t)file_object >> 0x20);
            }
            if (values[0] && (enabled = enabled_2, WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control)) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x11, WD_SYMBOL_ADDRESS(WdReadTraceProvider), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_2 & 0xffffffffULL) << 32 | (uint64_t)value_4 & 0xffffffffULL);
            }
        }
    }
    if (context)
    {
        FltReleaseContext(context);
    }
    if (values[3])
    {
        FltReleaseContext(values[3]);
    }
    if (enabled)
    {
        data->field_0x18 = value_4;
        data->field_0x20 = 0;
        *completion_context = 0;
    }
    __security_check_cookie(values[4] ^ (uint64_t)buffer);
    return;
}

uint64_t MpPostWrite(WD_LAYOUT_43 *data, void *objects, void *completion_context, uint64_t flags)
{
    int32_t *data_pointer;
    int32_t value;
    int64_t value_2;
    uint64_t value_3;
    if (((int64_t *)completion_context)[5])
    {
        MpRWLReleaseShared();
    }
    if (!(flags & 1))
    {
        if (KeIsExecutingDpc() || 2 <= (uint8_t)KeGetCurrentIrql())
        {
            value_2 = ((int64_t *)completion_context)[4];
            ExpInterlockedPushEntrySList(value_2 + 0x1a0, completion_context);
            WdUnresolvedAtomicBegin();
            data_pointer = (int32_t *)(value_2 + 0x1b0);
            value = *data_pointer;
            *data_pointer = *data_pointer + 1;
            WdUnresolvedAtomicEnd();
            if (value)
            {
                return 0;
            }
            FltQueueGenericWorkItem(*(uint64_t *)(value_2 + 0x198), *(uint64_t *)(value_2 + 0x68), MpReleaseWriteContextWorker, 1, value_2);
            return 0;
        }
        if (data->field_0x0 & 2 && 0 <= (int32_t)data->field_0x18)
        {
            value_3 = 0;
            MpUpdateFileSize(data, objects, ((void **)completion_context)[2], ((WD_LAYOUT_2 **)completion_context)[3], &value_3);
            MpUpdateFileWriteHistory(data, objects, ((void **)completion_context)[2], ((WD_LAYOUT_2 **)completion_context)[3], &value_3);
        }
    }
    MpDeleteWriteContext(completion_context);
    return 0;
}

void WPP_SF_iD(uint64_t input, uint16_t input_2, uint64_t input_3, uint64_t input_4)
{
    uint64_t value;
    value = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, input_3, input_2, &value, 8, &unrecovered_stack_argument_5, 4, 0);
    return;
}

void WPP_SF_IIqq(uint64_t input, uint64_t input_2, uint64_t input_3, uint64_t input_4, uint64_t input_5, uint64_t input_6, uint64_t input_7)
{
    uint64_t value;
    uint64_t value_2;
    uint64_t value_3;
    value_2 = input_6;
    value = input_7;
    value_3 = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WdReadTraceProvider), 0x14, &value_3, 8, &input_5, 8, &value_2, 8, &value, 8, 0);
    return;
}

void MpUpdateFileSize(WD_LAYOUT_4 *input, void *input_2, void *input_3, WD_LAYOUT_2 *input_4, uint64_t *input_5)
{
    int64_t value;
    uint64_t *data_pointer;
    int64_t value_2;
    uint64_t value_3;
    int64_t value_4;
    int64_t *data_pointer_2;
    int64_t value_5;
    data_pointer = input_5;
    if (input_5)
    {
        *input_5 = 0;
    }
    if (input_4)
    {
        if (input_4->field_0xa8 & 1)
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return;
            }
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x15, WD_SYMBOL_ADDRESS(WdReadTraceProvider), (uint64_t)KeGetCurrentThread(), 0xc00000e5);
            return;
        }
        if (0xfffd <= (uint16_t)(((int16_t *)input_2)[1] - 1U))
        {
            FltAcquirePushLockShared((int64_t)input_3 + 0xc0);
            data_pointer_2 = (int64_t *)(((int64_t *)input_3)[0x1a] + 0x20);
            if (!((int64_t *)input_3)[0x1a])
            {
                data_pointer_2 = &((int64_t *)input_3)[0x16];
            }
            value_2 = 0;
            WdUnresolvedAtomicBegin();
            if (*data_pointer_2)
            {
                value_2 = *data_pointer_2;
            }
            else
            {
                *data_pointer_2 = 0;
            }
            WdUnresolvedAtomicEnd();
            FltReleasePushLock((int64_t)input_3 + 0xc0);
        }
        else
        {
            value_2 = 0;
            WdUnresolvedAtomicBegin();
            value_4 = *(int64_t *)((int64_t)input_3 + 0xb0);
            if (value_4)
            {
                value_2 = value_4;
            }
            else
            {
                *(int64_t *)((int64_t)input_3 + 0xb0) = 0;
            }
            WdUnresolvedAtomicEnd();
        }
    }
    else
    {
        value_2 = 0;
        WdUnresolvedAtomicBegin();
        value_4 = *(int64_t *)((int64_t)input_3 + 0xb0);
        if (value_4)
        {
            value_2 = value_4;
        }
        else
        {
            *(int64_t *)((int64_t)input_3 + 0xb0) = 0;
        }
        WdUnresolvedAtomicEnd();
    }
    value_4 = input->field_0x10;
    if (*(int32_t *)(value_4 + 0x28) != -1 || *(int32_t *)(value_4 + 0x2c) != -1)
    {
        value = *(int64_t *)(value_4 + 0x28);
        value_5 = (uint64_t)(*(uint32_t *)(value_4 + 0x18)) + value;
        if (value_5 <= value_2)
        {
            return;
        }
        if (value_5 <= value)
        {
            return;
        }
        if (*(int32_t *)(value_4 + 0x28) == -1 && (int32_t)((uint64_t)value >> 0x20) == -1)
        {
            goto block_1;
        }
        value_4 = (uint64_t)(*(uint32_t *)(value_4 + 0x18)) + *(int64_t *)(value_4 + 0x28);
        if (!data_pointer || value_4 <= value_2)
        {
            goto block_2;
        }
        value_3 = value_4 - value_2;
    }
    else
    {
        block_1:
        value_3 = *(uint32_t *)(value_4 + 0x18);

        value_4 = value_2 + value_3;
        if (!data_pointer)
        {
            goto block_2;
        }
    }
    *data_pointer = value_3;
    block_2:
    if (input_4)
    {
        if (input_4->field_0xa8 & 1)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x16, WD_SYMBOL_ADDRESS(WdReadTraceProvider), (uint64_t)KeGetCurrentThread(), 0xc00000e5);
            }
        }
        else if (0xfffd <= (uint16_t)(((int16_t *)input_2)[1] - 1U))
        {
            FltAcquirePushLockShared((int64_t)input_3 + 0xc0);
            if (((int64_t *)input_3)[0x1a])
            {
                WdUnresolvedAtomicBegin();
                *(int64_t *)(((int64_t *)input_3)[0x1a] + 0x20) = value_4;
                WdUnresolvedAtomicEnd();
            }
            FltReleasePushLock((int64_t)input_3 + 0xc0);
        }
    }
    else
    {
        WdUnresolvedAtomicBegin();
        ((int64_t *)input_3)[0x16] = value_4;
        WdUnresolvedAtomicEnd();
    }

    return;
}

void MpDeleteWriteContext(void *input)
{
    uint16_t value;
    int64_t data;
    int64_t value_2;
    if (!input)
    {
        return;
    }
    if (((int64_t *)input)[3])
    {
        FltReleaseContext();
    }
    if (((int64_t *)input)[2])
    {
        FltReleaseContext();
    }
    data = MpData;
    value_2 = MpData + 0x480;
    *(int32_t *)(MpData + 0x49c) = *(int32_t *)(MpData + 0x49c) + 1;
    value = *(uint16_t *)(data + 0x490);
    if ((uint16_t)ExQueryDepthSList(value_2) < value)
    {
        ExpInterlockedPushEntrySList(value_2, input);
        return;
    }
    *(int32_t *)(data + 0x4a0) = *(int32_t *)(data + 0x4a0) + 1;
    (*__guard_dispatch_icall_fptr)(input);
    return;
}

uint64_t MpCreateWriteContext(WD_LAYOUT_36 *input, int64_t input_2, uint64_t input_3, uint64_t *input_4)
{
    int64_t data;
    uint64_t *list_entry;
    int64_t value;
    data = MpData;
    value = MpData + 0x480;
    *(int32_t *)(MpData + 0x494) = *(int32_t *)(MpData + 0x494) + 1;
    list_entry = (uint64_t *)ExpInterlockedPopEntrySList(value);
    if (!list_entry)
    {
        *(int32_t *)(data + 0x498) = *(int32_t *)(data + 0x498) + 1;
        list_entry = (uint64_t *)(*__guard_dispatch_icall_fptr)(*(uint32_t *)(data + 0x4a4), *(uint32_t *)(data + 0x4ac), *(uint32_t *)(data + 0x4a8));
        if (!list_entry)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x17, WD_SYMBOL_ADDRESS(WdReadTraceProvider), (uint64_t)KeGetCurrentThread());
            }
            return WD_STATUS_INSUFFICIENT_RESOURCES;
        }
    }
    *list_entry = 0;
    FltReferenceContext(input);
    list_entry[2] = input;
    list_entry[5] = input_3;
    list_entry[4] = input->field_0x8;
    list_entry[3] = input_2;
    if (input_2)
    {
        FltReferenceContext(input_2);
    }
    *input_4 = list_entry;
    return 0;
}

void MpDasdWrite(WD_LAYOUT_41 *input, void *input_2, WD_LAYOUT_20 *input_3)
{
    int32_t *data_pointer;
    uint64_t file_object;
    uint64_t instance;
    int32_t value;
    int64_t handle_context = 0;
    char buffer_2[8];
    file_object = ((uint64_t *)input_2)[4];
    buffer_2[0] = '\0';
    instance = ((uint64_t *)input_2)[3];
    if ((int32_t)FltGetStreamHandleContext(instance, file_object, &handle_context) <= -1)
    {
        value = MpCreateHandleContext(input_2, &handle_context, buffer_2);
        if (value <= -1)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x12, WD_SYMBOL_ADDRESS(WdReadTraceProvider), (uint64_t)KeGetCurrentThread(), value);
            }
            return;
        }
        if (!buffer_2[0])
        {
            *(WD_LAYOUT_20 **)(handle_context + 8) = input_3;
            *(uint32_t *)(handle_context + 0x28) = *(uint32_t *)(handle_context + 0x28) | 1;
            WdUnresolvedAtomicBegin();
            data_pointer = (int32_t *)(input_3->field_0x8 + 100);
            value = *data_pointer;
            *data_pointer = *data_pointer + 1;
            WdUnresolvedAtomicEnd();
            if (!value)
            {
                MpPurgeInstanceScannedFileCache((void *)input_3->field_0x8);
            }
        }
    }
    if (*(int64_t *)(&input->field_0x10[10]) <= 0x1fff && input->field_0x10[6])
    {
        *(uint32_t *)(handle_context + 0x28) = *(uint32_t *)(handle_context + 0x28) | 2;
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x13, WD_SYMBOL_ADDRESS(WdReadTraceProvider), *(uint64_t *)(&input->field_0x10[10]), input->field_0x10[6]);
        }
    }
    if (*(int32_t *)(input_3->field_0x8 + 0x78) != 1)
    {
        MpDasdVolumeWriteNotify(input, input_3);
    }
    FltReleaseContext(handle_context);
    return;
}

uint32_t MpDasdVolumeWriteNotify(WD_LAYOUT_41 *input, WD_LAYOUT_20 *input_2)
{
    uint64_t value;
    uint64_t trace_handle;
    uint32_t status = 0;
    uint64_t value_2;
    uint64_t value_3;
    value = *(uint64_t *)(&input->field_0x10[10]);
    value_2 = input->field_0x10[6];
    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        trace_handle = *(uint64_t *)(WPP_GLOBAL_Control + 0x18);
        PsGetCurrentThreadId();
        PsGetCurrentProcessId();
        value_3 = value_2;
        WPP_SF_IIqq(trace_handle);
    }
    if (!(*(char *)(MpData + 0x990)))
    {
        status = MpSendRawVolumeWriteAsyncMessage(input, (WD_LAYOUT_10 *)(input_2->field_0x8 + 0x18), value, value_2, ((uint64_t)value_3 & 0xffffffffffffff00 | (uint64_t)(*(char *)(input_2->field_0x8 + 0x50)) & 0xff) & 0xffffffffffffff01);
    }
    return status;
}

void MpCopyFileChunkOnPreWrite(WD_LAYOUT_41 *input, void *input_2)
{
    uint32_t *data_pointer;
    int64_t values[4];
    int64_t instance;
    int64_t file_name;
    int64_t handle_context;
    uint32_t value;
    int64_t file_name_2;
    uint64_t file_object;
    uint64_t instance_2;
    char byte_value;
    int32_t status;
    char buffer[32];
    int64_t handle_context_2;
    values[2] = __security_cookie ^ (uint64_t)buffer;
    file_name = 0;
    handle_context_2 = 0;
    instance = 0;
    handle_context = 0;
    values[0] = 0;
    values[1] = 0;
    if (!(*(int64_t *)(MpData + 0xb8)) || !(*(int64_t *)(MpData + 0x68)) || !(*(uint32_t *)(MpData + 0x1024) & 1))
    {
        __security_check_cookie(values[2] ^ (uint64_t)buffer);
        return;
    }
    byte_value = (*__guard_dispatch_icall_fptr)(((uint64_t *)input_2)[4]);
    if (byte_value)
    {
        if (IoGetTopLevelIrp())
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1b, WD_SYMBOL_ADDRESS(WdReadTraceProvider), input->field_0x8);
            }
            goto block_1;
        }
        if (KeAreAllApcsDisabled())
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1c, WD_SYMBOL_ADDRESS(WdReadTraceProvider), input->field_0x8);
            }
            goto block_1;
        }
        file_object = ((uint64_t *)input_2)[4];
        instance_2 = ((uint64_t *)input_2)[3];
        if ((int32_t)FltGetStreamHandleContext(instance_2, file_object, &handle_context_2) < 0 || !handle_context_2 || !(*(uint32_t *)(handle_context_2 + 0x28) & 0x800))
        {
            goto block_1;
        }
        WdUnresolvedAtomicBegin();
        data_pointer = (uint32_t *)(handle_context_2 + 0x28);
        value = *data_pointer;
        *data_pointer = *data_pointer & 0xfffff7ff;
        WdUnresolvedAtomicEnd();
        if (!(value >> 0xb & 1) || (status = (*__guard_dispatch_icall_fptr)(input, values), status < 0) || !values[0])
        {
            goto block_1;
        }
        if (*(uint32_t *)(values[0] + 0x50) & 0x4000)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                WPP_SF_qZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1d, WD_SYMBOL_ADDRESS(WdReadTraceProvider), input->field_0x8, (int16_t *)(values[0] + 0x58));
            }
            goto block_1;
        }
        status = MpGetInstanceFromFileObject(values[0], &instance);
        if (status < 0 || !instance || (status = FltGetFileNameInformationUnsafe(values[0], instance, 0x102, &file_name), status < 0))
        {
            goto block_1;
        }
        if (file_name)
        {
            FltReferenceFileNameInformation();
            WdUnresolvedAtomicBegin();
            file_name_2 = *(int64_t *)(handle_context_2 + 0x70);
            *(int64_t *)(handle_context_2 + 0x70) = file_name;
            WdUnresolvedAtomicEnd();
            if (file_name_2)
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1e, WD_SYMBOL_ADDRESS(WdReadTraceProvider), (uint64_t)KeGetCurrentThread());
                }
                FltReleaseFileNameInformation(file_name_2);
            }
            status = FltGetStreamHandleContext(instance, values[0], &handle_context);
            if (0 <= status && handle_context && *(uint32_t *)(handle_context + 0x28) & 0x40)
            {
                WdAtomicOr32((volatile int32_t *)((uint32_t *)(handle_context_2 + 0x28)), 0x1000);
            }
            goto block_1;
        }
    }
    else
    {
        block_1:
        if (file_name)
        {
            FltReleaseFileNameInformation(file_name);
        }
    }
    if (handle_context)
    {
        FltReleaseContext(handle_context);
    }
    if (handle_context_2)
    {
        FltReleaseContext(handle_context_2);
    }
    if (instance)
    {
        FltObjectDereference();
    }
    __security_check_cookie(values[2] ^ (uint64_t)buffer);
    return;
}

void MpReleaseWriteContextWorker(uint64_t input, uint64_t input_2, void *input_3)
{
    int32_t *atomic_value;
    int32_t value;
    do
    {
        MpDeleteWriteContext((void *)ExpInterlockedPopEntrySList((int64_t)input_3 + 0x1a0));
        atomic_value = &((int32_t *)input_3)[0x6c];
        value = WdAtomicAdd32((volatile int32_t *)atomic_value, -1);
    }
    while (value != 1);
    return;
}

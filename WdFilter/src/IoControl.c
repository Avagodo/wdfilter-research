#include "wdfilter.h"

int32_t MpFsCtlDlpSendServiceMessageTest(void *input)
{
    int32_t trace_argument_1;
    trace_argument_1 = MpDlpSendServiceMessageTest();
    if (trace_argument_1 <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
    {
        WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x20, WD_SYMBOL_ADDRESS(WPP_263f00fce6ca379ddfaa72b3d9ebbb38_Traceguids), trace_argument_1, trace_argument_1);
    }
    ((int32_t *)input)[6] = trace_argument_1;
    ((uint64_t *)input)[4] = 0;
    return trace_argument_1;
}

int32_t MpTerminateEngineProcess(void)
{
    uint64_t current_thread;
    int64_t value;
    int32_t trace_argument_1;
    if (0 <= *(int32_t *)(MpData + 0x364) && (current_thread = (uint64_t)KeGetCurrentThread(), value = *(int64_t *)(MpData + 0xe8), IoThreadToProcess(current_thread) != value) && (current_thread = (uint64_t)KeGetCurrentThread(), value = *(int64_t *)(MpData + 0x100), IoThreadToProcess(current_thread) != value))
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x38, WD_SYMBOL_ADDRESS(WPP_263f00fce6ca379ddfaa72b3d9ebbb38_Traceguids), *(uint32_t *)(MpData + 0x364));
        }
        return -0x3fffffde;
    }
    if (!(*(int64_t *)(MpData + 0xe8)))
    {
        return -0x3ffffff8;
    }
    trace_argument_1 = MpTerminateProcess(*(int64_t *)(MpData + 0xe8));
    if (trace_argument_1 <= -1)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x39, WD_SYMBOL_ADDRESS(WPP_263f00fce6ca379ddfaa72b3d9ebbb38_Traceguids), trace_argument_1);
        }
        return trace_argument_1;
    }
    return 0;
}

void WPP_SF_dDD(uint64_t input, uint16_t input_2, uint64_t input_3, uint32_t input_4)
{
    uint32_t values[2];
    values[0] = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_263f00fce6ca379ddfaa72b3d9ebbb38_Traceguids), input_2, values, 4, &unrecovered_stack_argument_5, 4, &unrecovered_stack_argument_6, 4, 0);
    return;
}

void WPP_SF_dDDddii(uint64_t input, uint64_t input_2, uint64_t input_3, uint32_t input_4)
{
    uint32_t values[2];
    values[0] = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_263f00fce6ca379ddfaa72b3d9ebbb38_Traceguids), 0x16, values, 4, &unrecovered_stack_argument_5, 4, &unrecovered_stack_argument_6, 4, &unrecovered_stack_argument_7, 4, &unrecovered_stack_argument_8, 4, &unrecovered_stack_argument_9, 8, &unrecovered_stack_argument_10, 8, 0);
    return;
}

void WPP_SF_dDZ(uint64_t input, uint64_t input_2, uint64_t input_3, uint32_t input_4, uint64_t input_5, int16_t *input_6)
{
    int16_t *wide_text;
    int16_t value;
    uint32_t values[2];
    uint64_t value_2;
    if (input_6)
    {
        value = *input_6;
        if (*input_6)
        {
            value_2 = *(uint64_t *)(&input_6[4]);
            goto block_1;
        }
    }
    else
    {
        value = 8;
    }
    value_2 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    block_1:
    wide_text = input_6;

    if (!input_6)
    {
        wide_text = &WdCleanupStorage;
    }
    values[0] = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_263f00fce6ca379ddfaa72b3d9ebbb38_Traceguids), 0x15, values, 4, &input_5, 4, wide_text, 2, value_2, (uint16_t)value, 0);
    return;
}

void MpPreFsControl(void *data, void *objects, int64_t *completion_context)
{
    uint32_t value;
    int64_t value_2;
    int32_t status;
    int64_t stream_context = 0;
    int64_t value_3 = 0;
    uint64_t lock = 0;
    if (!((int64_t *)objects)[4])
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 10, WD_SYMBOL_ADDRESS(WPP_263f00fce6ca379ddfaa72b3d9ebbb38_Traceguids));
            return;
        }
        return;
    }
    *completion_context = 0;
    value_2 = ((int64_t *)data)[2];
    if (*(char *)(value_2 + 5) && *(char *)(value_2 + 5) != '\x04')
    {
        return;
    }
    value = *(uint32_t *)(value_2 + 0x28);
    if (value == 0x902eb)
    {
        value_2 = *(int64_t *)(MpData + 0xf0);
        if (PsGetCurrentProcessId() == value_2 || (value_2 = *(int64_t *)(MpData + 0x108), PsGetCurrentProcessId() == value_2) || *(int32_t *)(MpData + 0x364) <= -1 || *(char *)(MpData + 0xd0))
        {
            ((uint32_t *)data)[6] = MpFsCtlDispatcher(data, objects);
            return;
        }
        return;
    }
    if (0x903fd <= value)
    {
        if (value != 0x980c8)
        {
            if (value != 0x98178)
            {
                if (value == 0x98208)
                {
                    MpPreFileLevelTrim(data, objects);
                    return;
                }
                if (value == 0x98268)
                {
                    MpMarkStreamDataChanged(data, objects, 7);
                    return;
                }
                if (value == 0x98344)
                {
                    MpPreDuplicateExtentsToFile(data, objects);
                    return;
                }
            }
            else
            {
                status = MpTxfPreSavepointNotification(data, &value_3);
                if (status < 0)
                {
                    ((int32_t *)data)[6] = status;
                    ((uint64_t *)data)[4] = 0;
                    *completion_context = 0;
                    return;
                }
                if (value_3)
                {
                    *completion_context = value_3;
                    return;
                }
            }
        }
        else
        {
            status = FltGetStreamContext(((uint64_t *)objects)[3], ((uint64_t *)objects)[4], &stream_context);
            if (0 <= status)
            {
                if (!(*(uint32_t *)(*(int64_t *)(stream_context + 8) + 0x50) & 4))
                {
                    status = MpGetMappedPurgeExclusionLock(stream_context, &lock);
                    if (0 <= status)
                    {
                        MpRWLAcquireShared(lock);
                        *completion_context = stream_context;
                        return;
                    }
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xc, WD_SYMBOL_ADDRESS(WPP_263f00fce6ca379ddfaa72b3d9ebbb38_Traceguids), ((uint64_t *)data)[1], status);
                    }
                }
                FltReleaseContext(stream_context);
            }
            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xb, WD_SYMBOL_ADDRESS(WPP_263f00fce6ca379ddfaa72b3d9ebbb38_Traceguids), ((uint64_t *)data)[1], status);
            }
        }
        return;
    }
    if (value == 0x903fc)
    {
        MpMarkStreamDataChanged(data, objects, 1);
        return;
    }
    if (0x22 <= value - 0x900d7)
    {
        return;
    }
    switch (value)
    {
        case 0x900d7:

        case 0x900db:
            MpPreSetEncryption(data, objects);
            break;

        case 0x900df:
            MpMarkStreamDataChanged(*(uint32_t *)(*(uint8_t *)(value - 0x900d7 + WD_IOCONTROL_UNRECOVERED_ADDRESS) * 4ULL + WD_IOCONTROL_UNRECOVERED_ADDRESS2) + WD_SHARED_UNRECOVERED_ADDRESS, objects, 3);
            break;

        case 0x900e3:
            MpPreReadRawEncrypted(data, objects);
            break;

        case 0x900e7:
            break;

        case 0x900f8:
            if (*(int64_t *)(value_2 + 0x30) && *(uint32_t *)(*(int64_t *)(value_2 + 0x30) + 8) & 1)
        {
            return;
        }
            return;

        default:
            break;
    }

    return;
}

void MpFsCtlDispatcher(WD_LAYOUT_4 *data, void *input)
{
    uint32_t value;
    int64_t value_2;
    uint64_t instance;
    int32_t trace_argument_1;
    uint64_t current_thread;
    int64_t stream_context;
    ProbeForRead(*(uint64_t *)(data->field_0x10 + 0x30), 4, 4);
    trace_argument_1 = *(*(int32_t **)(data->field_0x10 + 0x30));
    if (trace_argument_1 == 2)
    {
        MpFsCtlQueryNormalizedName(data, input);
        return;
    }
    if (trace_argument_1 != 6)
    {
        if (trace_argument_1 != 9)
        {
            if (trace_argument_1 != 0xf)
            {
                if (trace_argument_1 != 0x10)
                {
                    if (*(int32_t *)(MpData + 0x364) <= -1)
                    {
                        switch (trace_argument_1)
                        {
                            case 3:
                                MpFsCtlQueryStreamInformation(data, input);
                                break;

                            case 4:
                                MpFsCtlQueryProcessInformation(data);
                                break;

                            case 5:
                                MpPurgeCache();
                                break;

                            default:
                                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                            {
                                WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x13, WD_SYMBOL_ADDRESS(WPP_263f00fce6ca379ddfaa72b3d9ebbb38_Traceguids), trace_argument_1);
                            }
                                break;

                            case 8:
                                MpFsCtlQuerySyncMonitorInformation(data);
                                break;

                            case 10:
                                MpFsCtlSetKernelEaFile(data, input);
                                break;

                            case 0xb:
                                MpFsCtlSetDynamicFsHardeningItems(data);
                                break;

                            case 0xc:
                                MpFsCtlSetProcessInformation(data);
                                break;

                            case 0xd:
                                MpFsCtlQueryGlobalData(data);
                                break;

                            case 0xe:
                                MpFsCtlQueryTestFeatureControls(data);
                                break;

                            case 0x11:
                                MpFsCtlQueryProcessTableInfo(data);
                                break;

                            case 0x12:
                                MpFsCtlQueryOsCopyAcceleratorKernelSupport(data);
                                break;

                            case 0x13:
                                MpFsCtlSimulateAoacState(data);
                                break;

                            case 0x14:
                                MpFsCtlDlpSendServiceMessageTest(data);
                                break;

                            case 0x15:
                                MpFsCtlSetProcessTrust(data);
                        }
                    }
                }
                else
                {
                    MpFsCtlSet1PASOOVolume(data, input);
                }
            }
            else
            {
                MpFsCtlGetTrustedDevVolumeProtectionLevel(data, input);
            }
        }
        else if ((*(int32_t *)(MpData + 0x364) < 0 || *(int32_t *)(MpData + 0xd4) || 1 <= *(int32_t *)(MpData + 0xdc) && !(*(int64_t *)(MpData + 0x140)) || !(*(uint32_t *)(MpData + 0x364) & 7)) && (trace_argument_1 = MpTerminateEngineProcess(), WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2))
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x12, WD_SYMBOL_ADDRESS(WPP_263f00fce6ca379ddfaa72b3d9ebbb38_Traceguids), *(uint64_t *)(MpData + 0xe8), trace_argument_1);
        }
        return;
    }
    stream_context = 0;
    if (0 <= *(int32_t *)(MpData + 0x364) && (current_thread = (uint64_t)KeGetCurrentThread(), value_2 = *(int64_t *)(MpData + 0xe8), IoThreadToProcess(current_thread) != value_2) && (current_thread = (uint64_t)KeGetCurrentThread(), value_2 = *(int64_t *)(MpData + 0x100), IoThreadToProcess(current_thread) != value_2))
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x17, WD_SYMBOL_ADDRESS(WPP_263f00fce6ca379ddfaa72b3d9ebbb38_Traceguids), *(uint32_t *)(MpData + 0x364));
        }
        return;
    }
    current_thread = ((uint64_t *)input)[4];
    instance = ((uint64_t *)input)[3];
    if ((int32_t)FltGetStreamContext(instance, current_thread, &stream_context) < 0)
    {
        return;
    }
    value = *(uint32_t *)(stream_context + 0x20);
    if (value != 3 && (8 <= value || !(0x94U >> (value & 0x1f) & 1)))
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
        {
            current_thread = 0x18;
            block_1:
            WPP_SF_ZD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), current_thread, WD_SYMBOL_ADDRESS(WPP_263f00fce6ca379ddfaa72b3d9ebbb38_Traceguids), (int16_t *)(((int64_t *)input)[4] + 0x58), value);
        }
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
    {
        current_thread = 0x19;
        goto block_1;
    }
    *(uint32_t *)(stream_context + 0x20) = 0;
    WdAtomicAnd32((volatile int32_t *)((uint32_t *)(stream_context + 0x30)), 0xffffbfff);
    FltReleaseContext(stream_context);
    return;
}

void MpPreSetEncryption(void *data, void *input)
{
    uint64_t process_context;
    uint64_t process_context_2 = 0;
    int32_t value = 0;
    int64_t file_name = 0;
    char buffer_2[4];
    int16_t *trace_argument_2;
    char byte_value;
    uint32_t value_2;
    uint64_t value_3;
    char byte_value_2;
    uint32_t value_4;
    uint64_t *data_pointer;
    uint32_t value_5;
    uint32_t value_6;
    uint8_t byte_value_3;
    int32_t status;
    uint32_t process_id;
    int64_t requestor_process;
    uint64_t process_id_2;
    uint64_t value_8;
    uint64_t value_9;
    requestor_process = MpGetRequestorProcess();
    if (!requestor_process)
    {
        return;
    }
    if ((int32_t)MpGetProcessContextByObject(requestor_process, &process_context_2) < 0)
    {
        return;
    }
    status = FltGetFileSystemType(((uint64_t *)input)[3], &value);
    process_context = process_context_2;
    value_2 = *(uint32_t *)(MpData + 0x364) & 0x4000;
    value_9 = ((uint64_t)((uint64_t)((uint64_t)value_3 >> 8)) & 0xffffffffffffffULL) << 8 | (uint64_t)(value == 0xd) & 0xffULL;
    value_6 = value_2;
    byte_value_2 = MpCheckForAmHardening(data, input, 0, process_context_2, value_9);
    process_id = (uint32_t)((uint64_t)value_9 >> 0x20);
    if (byte_value_2)
    {
        status = FltGetFileNameInformation(data, 0x101, &file_name);
        value_5 = (uint32_t)((uint64_t)data_pointer >> 0x20);
        if (status <= -1)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1a, WD_SYMBOL_ADDRESS(WPP_263f00fce6ca379ddfaa72b3d9ebbb38_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)process_id & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
            }
            goto block_1;
        }
        if (value_2)
        {
            buffer_2[0] = 0;
            status = FltIsDirectory(((uint64_t *)input)[4], ((uint64_t *)input)[3], buffer_2);
            requestor_process = file_name;
            if (0 <= status)
            {
                byte_value = buffer_2[0];
            }
            else
            {
                buffer_2[0] = 0;
                byte_value = 0;
            }
            byte_value_3 = 0;
            if (MpFsHardeningData && process_context && file_name)
            {
                data_pointer = &process_context_2;
                process_context_2 &= 0xffffffff00000000;
                value_9 = 0;
                process_id = 0;
                value_8 = file_name;
                byte_value_3 = FsHardeningMatch(file_name, NULL, NULL, ((int64_t *)input)[3], NULL);
                if (byte_value_3)
                {
                    byte_value_3 = -((process_context_2 & 1) != 0) & byte_value_3;
                    if (process_context_2 & 2)
                    {
                        process_id = 0;
                        MpTraceFsHardeningNotification((uint64_t)value_8 & 0xffffffffffffff00 | (uint64_t)1 & 0xff, (uint64_t)value_9 & 0xffffffffffffff00 | (uint64_t)byte_value_3 & 0xff, *(WD_LAYOUT_77 **)(process_context + 0x80), requestor_process, NULL, (uint32_t)value_4 & 0xffffff00 | (uint32_t)byte_value & 0xff, data_pointer);
                    }
                }
                else
                {
                    byte_value_3 = 1;
                }
            }
            value_5 = (uint32_t)((uint64_t)data_pointer >> 0x20);
            byte_value_2 = byte_value_3 == 0;
            value_2 = value_6;
        }
        else
        {
            byte_value_2 = MpIsAMPath(process_context, file_name, NULL);
        }
        if (!byte_value_2)
        {
            goto block_1;
        }
        ((uint32_t *)data)[6] = WD_STATUS_ACCESS_DENIED;
        ((uint64_t *)data)[4] = 0;
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
        {
            if (process_context)
            {
                trace_argument_2 = *(int16_t **)(process_context + 0x80);
            }
            else
            {
                trace_argument_2 = NULL;
            }
            process_id = PsGetCurrentProcessId();
            WPP_SF_ZZDd(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1b, WD_SYMBOL_ADDRESS(WPP_263f00fce6ca379ddfaa72b3d9ebbb38_Traceguids), (int16_t *)(*(int64_t *)(((int64_t *)data)[2] + 8) + 0x58), trace_argument_2, process_id, ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)((uint32_t)(value_2 != 0)) & 0xffffffffULL);
            process_id = (uint32_t)((uint64_t)trace_argument_2 >> 0x20);
        }
        if (process_context)
        {
            value_9 = *(uint64_t *)(process_context + 0x80);
        }
        else
        {
            value_9 = 0;
        }
        process_id_2 = PsGetCurrentProcessId();
        MpLogPrintfW(L"[Mini-filter] Denied access to file [%wZ] from process [%wZ][Pid:%u]. DynamicFsHardeningEnabled[%d].", *(int64_t *)(((int64_t *)data)[2] + 8) + 0x58, value_9, process_id_2, ((uint64_t)process_id & 0xffffffffULL) << 32 | (uint64_t)((uint32_t)(value_2 != 0)) & 0xffffffffULL);
    }
    else
    {
        block_1:
        if (status == -0x3ffffee0 || status == -0x3fffffb5)
        {
            ((int32_t *)data)[6] = status;
            ((uint64_t *)data)[4] = 0;
        }
    }
    if (process_context)
    {
        MpReleaseProcessContext(process_context);
    }
    if (file_name)
    {
        FltReleaseFileNameInformation();
    }
    return;
}

void MpPreFileLevelTrim(void *data, void *input)
{
    uint64_t process_context;
    uint64_t process_context_2 = 0;
    int32_t value = 0;
    int64_t file_name = 0;
    char buffer_2[4];
    int16_t *trace_argument_2;
    char byte_value;
    uint32_t value_2;
    uint64_t value_3;
    char byte_value_2;
    uint32_t value_4;
    uint64_t *data_pointer;
    uint32_t value_5;
    uint32_t value_6;
    uint8_t byte_value_3;
    int32_t status;
    uint32_t process_id;
    int64_t requestor_process;
    uint64_t process_id_2;
    uint64_t value_8;
    uint64_t value_9;
    requestor_process = MpGetRequestorProcess();
    if (!requestor_process)
    {
        return;
    }
    if ((int32_t)MpGetProcessContextByObject(requestor_process, &process_context_2) < 0)
    {
        return;
    }
    status = FltGetFileSystemType(((uint64_t *)input)[3], &value);
    process_context = process_context_2;
    value_2 = *(uint32_t *)(MpData + 0x364) & 0x4000;
    value_9 = ((uint64_t)((uint64_t)((uint64_t)value_3 >> 8)) & 0xffffffffffffffULL) << 8 | (uint64_t)(value == 0xd) & 0xffULL;
    value_6 = value_2;
    byte_value_2 = MpCheckForAmHardening(data, input, 0, process_context_2, value_9);
    process_id = (uint32_t)((uint64_t)value_9 >> 0x20);
    if (byte_value_2)
    {
        status = FltGetFileNameInformation(data, 0x101, &file_name);
        value_5 = (uint32_t)((uint64_t)data_pointer >> 0x20);
        if (status <= -1)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1c, WD_SYMBOL_ADDRESS(WPP_263f00fce6ca379ddfaa72b3d9ebbb38_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)process_id & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
            }
            goto block_1;
        }
        if (value_2)
        {
            buffer_2[0] = 0;
            status = FltIsDirectory(((uint64_t *)input)[4], ((uint64_t *)input)[3], buffer_2);
            requestor_process = file_name;
            if (0 <= status)
            {
                byte_value = buffer_2[0];
            }
            else
            {
                buffer_2[0] = 0;
                byte_value = 0;
            }
            byte_value_3 = 0;
            if (MpFsHardeningData && process_context && file_name)
            {
                data_pointer = &process_context_2;
                process_context_2 &= 0xffffffff00000000;
                value_9 = 0;
                process_id = 0;
                value_8 = file_name;
                byte_value_3 = FsHardeningMatch(file_name, NULL, NULL, ((int64_t *)input)[3], NULL);
                if (byte_value_3)
                {
                    byte_value_3 = -((process_context_2 & 1) != 0) & byte_value_3;
                    if (process_context_2 & 2)
                    {
                        process_id = 0;
                        MpTraceFsHardeningNotification((uint64_t)value_8 & 0xffffffffffffff00 | (uint64_t)1 & 0xff, (uint64_t)value_9 & 0xffffffffffffff00 | (uint64_t)byte_value_3 & 0xff, *(WD_LAYOUT_77 **)(process_context + 0x80), requestor_process, NULL, (uint32_t)value_4 & 0xffffff00 | (uint32_t)byte_value & 0xff, data_pointer);
                    }
                }
                else
                {
                    byte_value_3 = 1;
                }
            }
            value_5 = (uint32_t)((uint64_t)data_pointer >> 0x20);
            byte_value_2 = byte_value_3 == 0;
            value_2 = value_6;
        }
        else
        {
            byte_value_2 = MpIsAMPath(process_context, file_name, NULL);
        }
        if (!byte_value_2)
        {
            goto block_1;
        }
        ((uint32_t *)data)[6] = WD_STATUS_ACCESS_DENIED;
        ((uint64_t *)data)[4] = 0;
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
        {
            if (process_context)
            {
                trace_argument_2 = *(int16_t **)(process_context + 0x80);
            }
            else
            {
                trace_argument_2 = NULL;
            }
            process_id = PsGetCurrentProcessId();
            WPP_SF_ZZDd(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1d, WD_SYMBOL_ADDRESS(WPP_263f00fce6ca379ddfaa72b3d9ebbb38_Traceguids), (int16_t *)(*(int64_t *)(((int64_t *)data)[2] + 8) + 0x58), trace_argument_2, process_id, ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)((uint32_t)(value_2 != 0)) & 0xffffffffULL);
            process_id = (uint32_t)((uint64_t)trace_argument_2 >> 0x20);
        }
        if (process_context)
        {
            value_9 = *(uint64_t *)(process_context + 0x80);
        }
        else
        {
            value_9 = 0;
        }
        process_id_2 = PsGetCurrentProcessId();
        MpLogPrintfW(L"[Mini-filter] Denied access to file [%wZ] from process [%wZ][Pid:%u]. DynamicFsHardeningEnabled[%d].", *(int64_t *)(((int64_t *)data)[2] + 8) + 0x58, value_9, process_id_2, ((uint64_t)process_id & 0xffffffffULL) << 32 | (uint64_t)((uint32_t)(value_2 != 0)) & 0xffffffffULL);
    }
    else
    {
        block_1:
        if (status == -0x3ffffee0 || status == -0x3fffffb5)
        {
            ((int32_t *)data)[6] = status;
            ((uint64_t *)data)[4] = 0;
        }
    }
    if (process_context)
    {
        MpReleaseProcessContext(process_context);
    }
    if (file_name)
    {
        FltReleaseFileNameInformation();
    }
    return;
}

void MpFsCtlQueryNormalizedName(void *data, void *input)
{
    uint32_t value;
    uint64_t name_options = 0x101;
    uint64_t current_thread;
    int64_t value_3;
    uint32_t *data_pointer;
    int32_t status;
    int32_t values[2];
    int64_t file_name = 0;
    uint64_t information_buffer;
    values[0] = 0;
    if (0 <= *(int32_t *)(MpData + 0x364) && (current_thread = (uint64_t)KeGetCurrentThread(), value_3 = *(int64_t *)(MpData + 0xe8), IoThreadToProcess(current_thread) != value_3) && (current_thread = (uint64_t)KeGetCurrentThread(), value_3 = *(int64_t *)(MpData + 0x100), IoThreadToProcess(current_thread) != value_3))
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x14, WD_SYMBOL_ADDRESS(WPP_263f00fce6ca379ddfaa72b3d9ebbb38_Traceguids), *(uint32_t *)(MpData + 0x364));
        }
    }
    else
    {
        ProbeForRead(*(uint64_t *)(((int64_t *)data)[2] + 0x30), 8, 4);
        FltGetFileSystemType(((uint64_t *)input)[3], values);
        if (values[0] == 0xd)
        {
            values[1] = 0;
            information_buffer = 0;
            status = FltQueryInformationFile(((uint64_t *)input)[3], ((uint64_t *)input)[4], &information_buffer, 8, 0x30, &values[1]);
            if (!(status + 0x80000000U & 0x80000000) && status != -0x7ffffffb)
            {
                name_options = 0x102;
            }
        }
        if (0 <= (int32_t)FltGetFileNameInformation(data, name_options, &file_name))
        {
            data_pointer = *(uint32_t **)(((int64_t *)data)[2] + 0x38);
            value = *(uint32_t *)(((int64_t *)data)[2] + 0x18);
            if (*(uint16_t *)(file_name + 8) + 4 <= value)
            {
                ProbeForWrite(data_pointer, value, 2);
                *data_pointer = 0;
                if ((uint32_t)(*(uint16_t *)(file_name + 8)) == *(uint16_t *)(file_name + 0x18) + 2 && *(int16_t *)(*(int64_t *)(file_name + 0x10) + -2 + (uint64_t)(*(uint16_t *)(file_name + 8) >> 1) * 2) == 0x5c)
                {
                    *data_pointer = 1;
                }
                memmove(&data_pointer[1], *(uint64_t **)(file_name + 0x10), *(uint16_t *)(file_name + 8));
                ((int64_t *)data)[4] = *(uint16_t *)(file_name + 8) + 4ULL;
            }
            if (file_name)
            {
                FltReleaseFileNameInformation();
            }
        }
    }
    return;
}

void MpPreQueryEa(void *data, void *objects, uint64_t *completion_context)
{
    int64_t *data_pointer;
    bool enabled;
    int32_t status;
    int64_t requestor_process;
    char *bytes;
    uint64_t value;
    uint64_t value_2;
    uint32_t buffer_size;
    char buffer_2[4];
    int32_t values[3];
    int64_t *data_pointer_2;
    int64_t file_name;
    uint64_t value_3;
    uint32_t value_4;
    uint64_t value_5 = 0;
    int32_t value_6 = 0;
    uint32_t value_7;
    char byte_value;
    char byte_value_2;
    uint8_t byte_value_3;
    uint16_t value_9;
    uint64_t value_10;
    int32_t *data_pointer_3;
    int64_t *buffer_3;
    values[0] = 0;
    buffer_2[2] = 0;
    buffer_2[1] = 0;
    values[1] = 0;
    file_name = 0;
    if (!((int64_t *)objects)[4])
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2b, WD_SYMBOL_ADDRESS(WPP_263f00fce6ca379ddfaa72b3d9ebbb38_Traceguids));
        }
        return;
    }
    *completion_context = 0;
    buffer_2[0] = '\0';
    MpQueryEaFromNetworkFileStubIfNeeded(data, objects, buffer_2);
    if (buffer_2[0] || (value_10 = ((uint64_t *)objects)[3], (int32_t)FltGetFileSystemType(value_10, values) <= -1) || values[0] == 0xd || ((requestor_process = MpGetRequestorProcess(data), !requestor_process || *__imp_PsInitialSystemProcess != requestor_process) || (requestor_process = PsReferenceImpersonationToken((uint64_t)KeGetCurrentThread(), &buffer_2[2], &buffer_2[1], &values[1]), !requestor_process)))
    {
        return;
    }
    PsDereferenceImpersonationToken(requestor_process);
    requestor_process = ((int64_t *)data)[2];
    if (*(int64_t *)(requestor_process + 0x40) || (data_pointer_3 = *(int32_t **)(requestor_process + 0x20), !data_pointer_3) || (*(uint32_t *)(requestor_process + 0x28) <= 7 || (*data_pointer_3 || *(uint32_t *)(requestor_process + 0x28) < *(uint8_t *)(&data_pointer_3[1]) + 6 || *(uint8_t *)(MpData + 0xf40) != *(uint8_t *)(&data_pointer_3[1]))))
    {
        return;
    }
    bytes = &((char *)data_pointer_3)[5];
    requestor_process = MpData + 0xe40 - (int64_t)bytes;
    do
    {
        byte_value = *bytes;
        byte_value_2 = bytes[requestor_process];
        if (byte_value != byte_value_2)
        {
            break;
        }
        bytes = &bytes[1];
    }
    while (byte_value_2);
    if (byte_value != byte_value_2)
    {
        return;
    }
    status = FltGetFileNameInformation(data, 0x101, &file_name);
    if (0 <= status)
    {
        buffer_size = *(uint32_t *)(((int64_t *)data)[2] + 0x18);
        if (*(uint8_t *)(MpData + 0xf40) + 0x17 + (uint32_t)(*(uint16_t *)(file_name + 8)) <= buffer_size)
        {
            buffer_3 = *(int64_t **)(((int64_t *)data)[2] + 0x38);
            value_7 = buffer_size;
            memset(buffer_3, 0, (char *)((uint64_t)buffer_size));
            *(uint32_t *)buffer_3 = 0;
            ((char *)buffer_3)[4] = 0;
            ((char *)buffer_3)[5] = *(char *)(MpData + 0xf40);
            ((int16_t *)buffer_3)[3] = *(int16_t *)(file_name + 8) + 0xe;
            byte_value_3 = *(uint8_t *)(MpData + 0xf40);
            value_5 = byte_value_3;
            if (buffer_3 && buffer_size && (data_pointer_2 = &buffer_3[1], buffer_3 <= data_pointer_2 && (data_pointer = (int64_t *)(&((char *)((uint64_t)buffer_size))[(int64_t)buffer_3]), buffer_3 <= data_pointer)))
            {
                value_3 = 0xffffffffffffffff;
                if (data_pointer_2 <= data_pointer)
                {
                    value = (int64_t)data_pointer - (int64_t)data_pointer_2;
                    value_4 = (uint32_t)value;
                    value_2 = value;
                }
                else
                {
                    value_2 = 0xffffffffffffffff;
                    value_6 = -0x3fffff6b;
                    value = 0xffffffffffffffff;
                    value_4 = 0xffffffff;
                }
                if (0 <= value_6 && value <= 0xffffffff && (byte_value_3 <= value_4 && byte_value_3 <= buffer_size))
                {
                    memmove(data_pointer_2, (uint64_t *)(MpData + 0xe40), value_5, value_5, 0, 8, value_7, value_2);
                    value_5 += 9;
                    if (8 <= value_5)
                    {
                        status = 0;
                        value_2 = value_5;
                    }
                    else
                    {
                        status = -0x3fffff6b;
                        value_5 = 0xffffffffffffffff;
                        value_2 = 0xffffffffffffffff;
                    }
                    if (0 <= status)
                    {
                        *(uint32_t *)((int64_t)buffer_3 + value_2) = (uint32_t)((uint16_t *)buffer_3)[3];
                        *(uint32_t *)((int64_t)buffer_3 + value_2 + 8) = (uint32_t)(*(uint16_t *)(file_name + 0x18));
                        *(uint32_t *)((int64_t)buffer_3 + value_2 + 4) = (uint32_t)(*(uint16_t *)(file_name + 8));
                        value_2 = value_5 + 0xc;
                        if (value_5 <= value_2)
                        {
                            status = 0;
                            value_5 = value_2;
                        }
                        else
                        {
                            value_5 = 0xffffffffffffffff;
                            status = -0x3fffff6b;
                            value_2 = 0xffffffffffffffff;
                        }
                        if (0 <= status)
                        {
                            value_9 = *(uint16_t *)(file_name + 8);
                            if (value_2)
                            {
                                data_pointer_2 = (int64_t *)(value_2 + (int64_t)buffer_3);
                                if (buffer_3 <= data_pointer_2)
                                {
                                    if (data_pointer_2 <= data_pointer)
                                    {
                                        value_2 = (int64_t)data_pointer - (int64_t)data_pointer_2;
                                        value_6 = 0;
                                        buffer_size = (uint32_t)value_2;
                                    }
                                    else
                                    {
                                        value_6 = -0x3fffff6b;
                                        value_2 = 0xffffffffffffffff;
                                        buffer_size = 0xffffffff;
                                    }
                                    if (0 <= value_6 && value_2 <= 0xffffffff && value_9 <= buffer_size && value_9 <= value_7)
                                    {
                                        enabled = 1;
                                        goto block_1;
                                    }
                                }
                            }
                            else
                            {
                                enabled = value_9 <= value_7;
                                block_1:
                                if (enabled)
                                {
                                    memmove((uint64_t *)((int64_t)buffer_3 + value_5), *(uint64_t **)(file_name + 0x10));
                                    value_2 = value_9 + 2ULL + value_5;
                                    if (value_5 <= value_2)
                                    {
                                        status = 0;
                                        value_3 = value_2;
                                    }
                                    else
                                    {
                                        value_2 = 0xffffffffffffffff;
                                        status = -0x3fffff6b;
                                    }
                                    if (0 <= status)
                                    {
                                        value_5 = 0xffffffff;
                                        if (0x100000000 <= value_3)
                                        {
                                            status = -0x3fffff6b;
                                        }
                                        else
                                        {
                                            value_5 = value_2 & 0xffffffff;
                                            values[2] = 0;
                                            status = IoCheckEaBufferValidity(buffer_3, value_7, &values[2]);
                                            if (0 <= status)
                                            {
                                                FltSetCallbackDataDirty(data);
                                                status = 0;
                                            }
                                        }
                                        goto block_3;
                                    }
                                    goto block_2;
                                }
                            }
                            status = -0x3fffffdd;
                            value_5 = 0;
                            requestor_process = file_name;
                            goto block_4;
                        }
                    }
                    block_2:
                    value_5 = 0;

                    goto block_3;
                }
            }
            value_5 = 0;
            status = -0x3fffffdd;
            goto block_3;
        }
        status = -0x3fffffdd;
        requestor_process = file_name;
    }
    else
    {
        block_3:
        requestor_process = file_name;
    }
    block_4:
    if (requestor_process)
    {
        FltReleaseFileNameInformation(requestor_process);
    }

    ((int32_t *)data)[6] = status;
    ((uint64_t *)data)[4] = value_5;
    return;
}

uint64_t MpPostFsControl(void *data, WD_LAYOUT_76 *objects, int64_t completion_context, uint32_t flags)
{
    int32_t value;
    uint64_t value_2;
    int64_t object;
    int64_t context = 0;
    value = *(int32_t *)(((int64_t *)data)[2] + 0x28);
    object = 0;
    if (value != 0x980c8)
    {
        if (value == 0x98178)
        {
            object = completion_context;
        }
    }
    else
    {
        MpRWLReleaseShared(*(WD_LAYOUT_40 **)(completion_context + 0x98));
        context = completion_context;
    }
    if (!(flags & 1) && !((int32_t *)data)[6])
    {
        value = *(int32_t *)(((int64_t *)data)[2] + 0x28);
        if (value != 0x98178)
        {
            if (value == 0x900f8 || value == 0x900e7)
            {
                MpSendCheckJournalNotification(data, objects);
            }
        }
        else
        {
            MpTxfPostSavepointNotification(data, objects, object);
        }
    }
    if (context)
    {
        FltReleaseContext(context);
    }
    if (object)
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
    return 0;
}

void MpSendCheckJournalNotification(void *input, WD_LAYOUT_76 *input_2)
{
    uint32_t value;
    uint64_t current_thread;
    uint64_t value_2;
    uint32_t value_3;
    uint32_t value_5;
    uint32_t value_6;
    int64_t value_7;
    int32_t status;
    uint64_t value_8;
    int64_t value_9;
    int64_t instance_context;
    value_3 = (uint32_t)((uint64_t)value_2 >> 0x20);
    value_9 = 0;
    instance_context = 0;
    status = MpAsyncCreateNotification(&value_9, 0x30);
    value_7 = value_9;
    if (0 <= status)
    {
        status = FltGetInstanceContext(input_2->field_0x18, &instance_context);
        if (0 <= status)
        {
            *(uint32_t *)(value_7 + 8) = 0x30;
            *(uint32_t *)(value_7 + 0x10) = 0xc;
            value_3 = 0;
            *(uint32_t *)(value_7 + 0x18) = *(uint32_t *)(((int64_t *)input)[2] + 0x28);
            value = *(uint32_t *)(instance_context + 0x3c);
            value_5 = *(uint32_t *)(instance_context + 0x40);
            value_6 = *(uint32_t *)(instance_context + 0x44);
            *(uint32_t *)(value_7 + 0x1c) = *(uint32_t *)(instance_context + 0x38);
            *(uint32_t *)(value_7 + 0x20) = value;
            *(uint32_t *)(value_7 + 0x24) = value_5;
            *(uint32_t *)(value_7 + 0x28) = value_6;
            status = MpAsyncSendNotification(value_7, 0x30, 1, 1, NULL);
            if (0 <= status)
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                {
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x11, WD_SYMBOL_ADDRESS(WPP_263f00fce6ca379ddfaa72b3d9ebbb38_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)(*(uint32_t *)(value_7 + 0x18)) & 0xffffffffULL);
                }
                goto block_2;
            }
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                goto block_2;
            }
            value_8 = 0x10;
            goto block_1;
        }
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            goto block_2;
        }
        current_thread = ((uint64_t *)input)[1];
        value_8 = 0xf;
    }
    else
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            goto block_2;
        }
        value_8 = 0xe;
        block_1:
        current_thread = (uint64_t)KeGetCurrentThread();
    }
    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_8, WD_SYMBOL_ADDRESS(WPP_263f00fce6ca379ddfaa72b3d9ebbb38_Traceguids), current_thread, ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
    block_2:
    if (instance_context)
    {
        FltReleaseContext();
    }

    if (value_7)
    {
        MpAsyncDereferenceNotification(value_7);
    }
    return;
}

void MpMarkStreamDataChanged(uint64_t input, void *input_2, uint64_t input_3)
{
    uint64_t file_object;
    uint64_t instance;
    int64_t stream_context;
    file_object = ((uint64_t *)input_2)[4];
    stream_context = 0;
    if (FltSupportsStreamContexts(file_object))
    {
        file_object = ((uint64_t *)input_2)[4];
        instance = ((uint64_t *)input_2)[3];
        if (0 <= (int32_t)FltGetStreamContext(instance, file_object, &stream_context))
        {
            if (input_3 & 1)
            {
                *(uint32_t *)(stream_context + 0x20) = 0;
                WdAtomicAnd32((volatile int32_t *)((uint32_t *)(stream_context + 0x30)), 0xffffbfff);
            }
            if (input_3 & 2)
            {
                WdAtomicOr32((volatile int32_t *)((uint32_t *)(stream_context + 0x30)), 0x100000);
                WdAtomicOr32((volatile int32_t *)((uint32_t *)(stream_context + 0x30)), 0x108);
            }
            if (input_3 & 4)
            {
                WdAtomicOr32((volatile int32_t *)((uint32_t *)(stream_context + 0x30)), 0x80);
            }
            FltReleaseContext(stream_context);
        }
    }
    return;
}

void MpFsCtlGetTrustedDevVolumeProtectionLevel(void *input, WD_LAYOUT_76 *input_2)
{
    uint32_t value;
    uint64_t current_thread;
    int64_t value_3;
    int32_t *data_pointer;
    int32_t value_4;
    int64_t instance_context = 0;
    uint32_t value_5;
    value = *(uint32_t *)(((int64_t *)input)[2] + 0x18);
    if (0 <= *(int32_t *)(MpData + 0x364) && (current_thread = (uint64_t)KeGetCurrentThread(), value_3 = *(int64_t *)(MpData + 0xe8), IoThreadToProcess(current_thread) != value_3) && (current_thread = (uint64_t)KeGetCurrentThread(), value_3 = *(int64_t *)(MpData + 0x100), IoThreadToProcess(current_thread) != value_3))
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1e, WD_SYMBOL_ADDRESS(WPP_263f00fce6ca379ddfaa72b3d9ebbb38_Traceguids), *(uint32_t *)(MpData + 0x364));
        }
    }
    else if (4 <= value)
    {
        value_4 = 0;
        current_thread = input_2->field_0x18;
        if (0 <= (int32_t)FltGetInstanceContext(current_thread, &instance_context))
        {
            if (*(uint32_t *)(instance_context + 0x50) & 0x10)
            {
                value_4 = ((*(uint32_t *)(MpData + 0x364) & 0x2000) != 0) + 3;
            }
            else
            {
                value_4 = 1;
            }
            FltReleaseContext(instance_context);
        }
        data_pointer = *(int32_t **)(((int64_t *)input)[2] + 0x38);
        ProbeForWrite(data_pointer, *(uint32_t *)(((int64_t *)input)[2] + 0x18), 4);
        *data_pointer = value_4;
        ((uint64_t *)input)[4] = 4;
        value_5 = 0;
    }
    return;
}

void MpFsCtlQueryGlobalData(void *input)
{
    uint32_t value;
    uint64_t value_2;
    uint32_t value_3;
    uint64_t value_4;
    uint64_t value_5;
    uint32_t value_6;
    uint32_t value_7;
    char byte_value;
    uint32_t value_8;
    uint64_t value_9;
    uint32_t value_10;
    uint64_t *data_pointer;
    uint32_t value_11;
    uint32_t value_12;
    uint32_t value_13;
    uint64_t value_14;
    uint32_t value_15;
    uint32_t value_16;
    uint32_t value_17;
    uint32_t value_18;
    uint32_t value_19;
    uint32_t value_20;
    uint64_t value_21;
    char byte_value_2;
    uint32_t value_22;
    uint32_t value_23;
    uint32_t value_24;
    uint32_t value_25;
    uint32_t value_26;
    uint32_t value_27;
    uint32_t buffer[2];
    char byte_value_3;
    uint32_t value_28;
    uint32_t value_29;
    uint32_t value_30;
    uint64_t value_31;
    memset(buffer, 0, (char *)0xa8);
    byte_value_3 = *(char *)(MpData + 0xd0);
    value_28 = *(uint32_t *)(MpData + 0xd4);
    value_29 = *(uint32_t *)(MpData + 0xdc);
    value_30 = *(uint32_t *)(MpData + 0xe0);
    value_31 = *(uint64_t *)(MpData + 0xe8);
    value_2 = *(uint64_t *)(MpData + 0xf0);
    value_3 = *(uint32_t *)(MpData + 0xf8);
    value_4 = *(uint64_t *)(MpData + 0x100);
    value_5 = *(uint64_t *)(MpData + 0x108);
    value_6 = *(uint32_t *)(MpData + 0x110);
    value_7 = *(uint32_t *)(MpData + 0x1b8);
    byte_value = *(char *)(MpData + 0x250);
    value_8 = *(uint32_t *)(MpData + 0x254);
    value_9 = *(uint64_t *)(MpData + 600);
    value_10 = *(uint32_t *)(MpData + 0x260);
    value_11 = *(uint32_t *)(MpData + 0x264);
    value_12 = *(uint32_t *)(MpData + 0x268);
    value_13 = *(uint32_t *)(MpData + 0x26c);
    value_14 = *(uint64_t *)(MpData + 0x358);
    value_15 = *(uint32_t *)(MpData + 0x360);
    value_16 = *(uint32_t *)(MpData + 0x364);
    value_17 = *(uint32_t *)(MpData + 0x980);
    value_18 = *(uint32_t *)(MpData + 0x984);
    value_19 = *(uint32_t *)(MpData + 0x988);
    value_20 = *(uint32_t *)(MpData + 0x98c);
    byte_value_2 = *(char *)(MpData + 0x990);
    value_22 = *(uint32_t *)(MpData + 0xf58);
    value_23 = *(uint32_t *)(MpData + 0xfcc);
    value_24 = *(uint32_t *)(MpData + 0xfdc);
    value_25 = *(uint32_t *)(MpAsyncScanData + 0x100);
    value_26 = *(uint32_t *)(MpAsyncScanData + 0x108);
    value_27 = *(uint32_t *)(MpAsyncScanData + 0x104);
    value = *(uint32_t *)(((int64_t *)input)[2] + 0x18);
    value_21 = value;
    if (0xa9 <= value)
    {
        value_21 = 0xa8;
    }
    buffer[0] = (uint32_t)value_21;
    data_pointer = *(uint64_t **)(((int64_t *)input)[2] + 0x38);
    ProbeForWrite(data_pointer, value, 4);
    memmove(data_pointer, buffer, value_21);
    ((uint64_t *)input)[4] = value_21;
    return;
}

uint64_t MpFsCtlQueryOsCopyAcceleratorKernelSupport(void *input)
{
    uint8_t byte_value;
    uint32_t value;
    uint32_t *data_pointer;
    uint32_t value_2;
    value = *(uint32_t *)(((int64_t *)input)[2] + 0x18);
    if (value <= 3)
    {
        return WD_STATUS_INVALID_PARAMETER;
    }
    byte_value = *(uint8_t *)(MpData + 0xfc8);
    if (!(*(int64_t *)(MpData + 0xb8)) || (value_2 = 1, !(*(int64_t *)(MpData + 0xb0))))
    {
        value_2 = 0;
    }
    data_pointer = *(uint32_t **)(((int64_t *)input)[2] + 0x38);
    ProbeForWrite(data_pointer, value, 4);
    *data_pointer = (byte_value & 1) * 2 | value_2;
    ((uint64_t *)input)[4] = 4;
    return 0;
}

uint64_t MpFsCtlQueryProcessInformation(void *input)
{
    int32_t process_id;
    uint32_t value;
    uint64_t value_2 = 0;
    uint64_t value_3 = 0;
    uint64_t value_4 = 0;
    uint64_t value_5 = 0;
    uint64_t value_6 = 0;
    uint32_t event_id;
    uint32_t provider;
    uint64_t *data_pointer;
    int64_t process_context;
    uint64_t status;
    uint8_t byte_value;
    int64_t process_context_2 = 0;
    uint64_t value_7 = 0;
    ProbeForRead(*(uint64_t *)(((int64_t *)input)[2] + 0x30), 8, 4);
    process_id = *(int32_t *)(*(int64_t *)(((int64_t *)input)[2] + 0x30) + 4);
    if (process_id != -1)
    {
        status = MpGetProcessContextById(process_id, &process_context_2);
    }
    else
    {
        status = MpGetProcessContextByObject(IoGetCurrentProcess(), &process_context_2);
    }
    process_context = process_context_2;
    if ((int32_t)status <= -1)
    {
        return status;
    }
    event_id = *(uint32_t *)(process_context_2 + 0x34);
    provider = *(uint32_t *)(process_context_2 + 0x38);
    value_2 = ((uint64_t)(*(uint32_t *)(process_context_2 + 0x60)) & 0xffffffffULL) << 32 | (uint64_t)provider & 0xffffffffULL;
    value_3 = ((uint64_t)WdLoadField(&value_3, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)(*(uint32_t *)(process_context_2 + 100)) & 0xffffffffULL;
    value_4 = *(uint64_t *)(process_context_2 + 0x40);
    value_5 = *(uint64_t *)(process_context_2 + 0x48);
    byte_value = (uint8_t)(*(uint32_t *)(process_context_2 + 0x120));
    value_6 = (((uint64_t)WdLoadField(&value_6, 5, 3) & 0xffffffULL) << 40 | (uint64_t)(((uint64_t)(byte_value >> 3) & 0xffULL) << 32 | (uint64_t)(*(uint32_t *)(process_context_2 + 0x3c)) & 0xffffffffULL) & 0xffffffffffULL) & 0xffffff01ffffffff;
    value_6 = (((uint64_t)WdLoadField(&value_6, 6, 2) & 0xffffULL) << 48 | (uint64_t)(((uint64_t)(byte_value >> 4) & 0xffULL) << 40 | (uint64_t)((uint64_t)value_6) & 0xffffffffffULL) & 0xffffffffffffULL) & 0xffff01ffffffffff;
    value_6 = (((uint64_t)WdLoadField(&value_6, 7, 1) & 0xffULL) << 56 | (uint64_t)(((uint64_t)(byte_value >> 5) & 0xffULL) << 48 | (uint64_t)((uint64_t)value_6) & 0xffffffffffffULL) & 0xffffffffffffffULL) & 0xff01ffffffffffff;
    value = *(uint32_t *)(((int64_t *)input)[2] + 0x18);
    if (0x31 <= value)
    {
        value = 0x30;
    }
    value_7 = ((uint64_t)event_id & 0xffffffffULL) << 32 | (uint64_t)value & 0xffffffffULL;
    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
    {
        WPP_SF_dDDddii(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, provider, process_id, event_id, provider, *(uint32_t *)(process_context_2 + 0x60), *(uint32_t *)(process_context_2 + 100), value_4, value_5);
    }
    data_pointer = *(uint64_t **)(((int64_t *)input)[2] + 0x38);
    ProbeForWrite(data_pointer, *(uint32_t *)(((int64_t *)input)[2] + 0x18), 4);
    memmove(data_pointer, &value_7, value);
    ((uint64_t *)input)[4] = value;
    MpReleaseProcessContext(process_context);
    return 0;
}

int32_t MpFsCtlQueryProcessTableInfo(void *input)
{
    uint64_t *data_pointer;
    int32_t status;
    uint32_t value;
    uint64_t *data_pointer_2;
    uint64_t *process_list;
    int32_t value_2 = 0;
    int32_t value_3;
    uint64_t value_4 = 0;
    if (*(uint32_t *)(((int64_t *)input)[2] + 0x18) <= 0xb)
    {
        return -0x3ffffff3;
    }
    process_list = NULL;
    status = MpGetProcessContextList(&process_list, 0);
    if (status <= -1)
    {
        if (process_list)
        {
            MpReleaseProcessContextList(&process_list);
        }
        return status;
    }
    data_pointer_2 = process_list;
    status = value_2;
    value_3 = value_2;
    while (data_pointer_2)
    {
        data_pointer = (uint64_t *)(*data_pointer_2);
        value = *(uint32_t *)(data_pointer_2[1] + 0x124) & 0xf;
        if (value != 2)
        {
            if (value - 3 <= 1)
            {
                value_3 += 1;
            }
        }
        else
        {
            value_2 += 1;
            value_4 = ((uint64_t)value_2 & 0xffffffffULL) << 32 | (uint64_t)((uint32_t)value_4) & 0xffffffffULL;
        }
        process_list = data_pointer;
        if (value != 1 && *(int32_t *)(data_pointer_2[1] + 0x128) <= 0)
        {
            status += 1;
            value_4 = ((uint64_t)WdLoadField(&value_4, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL;
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_dZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x3a, WD_SYMBOL_ADDRESS(WPP_263f00fce6ca379ddfaa72b3d9ebbb38_Traceguids), *(uint32_t *)(data_pointer_2[1] + 0x18), *(int16_t **)(data_pointer_2[1] + 0x80));
            }
        }
        MpReleaseProcessContextListEntry((WD_LAYOUT_15 *)(&data_pointer_2[-1]));
        data_pointer_2 = data_pointer;
    }

    data_pointer_2 = *(uint64_t **)(((int64_t *)input)[2] + 0x38);
    ProbeForWrite(data_pointer_2, *(uint32_t *)(((int64_t *)input)[2] + 0x18), 4);
    *data_pointer_2 = value_4;
    *(int32_t *)(&data_pointer_2[1]) = value_3;
    ((uint64_t *)input)[4] = 0xc;
    return 0;
}

void MpFsCtlQueryStreamInformation(void *input, void *input_2)
{
    uint32_t value;
    uint32_t value_2;
    int64_t value_3;
    uint32_t value_4;
    uint32_t value_5 = 0;
    uint32_t value_7;
    uint64_t file_object;
    uint64_t instance;
    uint64_t *data_pointer;
    uint32_t value_8;
    int64_t stream_context = 0;
    uint64_t value_9 = 0;
    file_object = ((uint64_t *)input_2)[4];
    instance = ((uint64_t *)input_2)[3];
    if (0 <= (int32_t)FltGetStreamContext(instance, file_object, &stream_context))
    {
        value = *(uint32_t *)(stream_context + 0x20);
        value_5 = *(uint32_t *)(stream_context + 0x30);
        WdStoreField(&value_9, 4, 4, (uint64_t)value);
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            value_3 = ((int64_t *)input_2)[4] + 0x58;
            value_2 = value_5;
            WPP_SF_dDZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18));
        }
        value_7 = *(uint32_t *)(((int64_t *)input)[2] + 0x18);
        value_8 = value_7;
        if (0xd <= value_7)
        {
            value_8 = 0xc;
        }
        value_9 = ((uint64_t)WdLoadField(&value_9, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)value_8 & 0xffffffffULL;
        data_pointer = *(uint64_t **)(((int64_t *)input)[2] + 0x38);
        ProbeForWrite(data_pointer, value_7, 4);
        memmove(data_pointer, &value_9, (uint64_t)value_8);
        ((uint64_t *)input)[4] = value_8;
        value_4 = 0;
        FltReleaseContext(stream_context);
    }
    return;
}

void MpFsCtlQuerySyncMonitorInformation(void *input)
{
    int64_t value;
    uint64_t value_2;
    uint64_t *data_pointer;
    uint32_t buffer_2;
    char buffer_3[36];
    char buffer_4[36];
    char buffer_5[40];
    uint32_t value_4;
    uint32_t value_5;
    memset(&buffer_2, 0, (char *)0x80);
    value_5 = *(uint32_t *)(MpData + 0xe1c);
    value_2 = *(uint64_t *)(MpData + 0xe20);
    memcpy_s(buffer_3, (char *)0x24, (uint64_t *)(MpData + 0xd68), (char *)0x24);
    memcpy_s(buffer_4, (char *)0x24, (uint64_t *)(MpData + 0xd8c), (char *)0x24);
    memcpy_s(buffer_5, (char *)0x24, (uint64_t *)(MpData + 0xdd4), (char *)0x24);
    value = ((int64_t *)input)[2];
    buffer_2 = *(uint32_t *)(value + 0x18);
    if (0x81 <= buffer_2)
    {
        buffer_2 = 0x80;
    }
    data_pointer = *(uint64_t **)(value + 0x38);
    ProbeForWrite(data_pointer, *(uint32_t *)(value + 0x18), 4);
    memmove(data_pointer, &buffer_2, buffer_2);
    ((uint64_t *)input)[4] = buffer_2;
    value_4 = 0;
    return;
}

uint64_t MpFsCtlQueryTestFeatureControls(void *input)
{
    uint64_t *data_pointer;
    uint32_t value;
    uint64_t value_2;
    if (*(uint32_t *)(((int64_t *)input)[2] + 0x18) <= 7)
    {
        return WD_STATUS_INVALID_PARAMETER;
    }
    value = MpFcKernelGetValue(0xcd);
    value_2 = ((uint64_t)MpFcKernelGetValue(0xce) & 0xffffffffULL) << 32 | (uint64_t)value & 0xffffffffULL;
    data_pointer = *(uint64_t **)(((int64_t *)input)[2] + 0x38);
    ProbeForWrite(data_pointer, *(uint32_t *)(((int64_t *)input)[2] + 0x18), 4);
    *data_pointer = value_2;
    ((uint64_t *)input)[4] = 8;
    return 0;
}

void MpFsCtlSet1PASOOVolume(WD_LAYOUT_4 *input, void *input_2)
{
    uint64_t current_thread;
    int64_t value;
    uint64_t *data_pointer;
    int64_t instance_context = 0;
    uint64_t value_2 = 0;
    void *data_pointer_2;
    data_pointer_2 = input_2;
    if (8 <= *(uint32_t *)(input->field_0x10 + 0x20))
    {
        current_thread = (uint64_t)KeGetCurrentThread();
        value = *(int64_t *)(MpData + 0xe8);
        if (IoThreadToProcess(current_thread) != value && (current_thread = (uint64_t)KeGetCurrentThread(), value = *(int64_t *)(MpData + 0x100), IoThreadToProcess(current_thread) != value))
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1f, WD_SYMBOL_ADDRESS(WPP_263f00fce6ca379ddfaa72b3d9ebbb38_Traceguids), *(uint32_t *)(MpData + 0x364));
            }
        }
        else
        {
            data_pointer = *(uint64_t **)(input->field_0x10 + 0x30);
            ProbeForRead(data_pointer, *(uint32_t *)(input->field_0x10 + 0x20), 4);
            value_2 = *data_pointer;
            current_thread = ((uint64_t *)input_2)[3];
            if (0 <= (int32_t)FltGetInstanceContext(current_thread, &instance_context))
            {
                if (*(int32_t *)(instance_context + 0x78) != 0xd)
                {
                    if (WdLoadField(&value_2, 4, 1) != '\x01')
                    {
                        WdAtomicAnd32((volatile int32_t *)((uint32_t *)(instance_context + 0x50)), 0xffffffbf);
                    }
                    else
                    {
                        WdAtomicOr32((volatile int32_t *)((uint32_t *)(instance_context + 0x50)), 0x40);
                    }
                }
                FltReleaseContext(instance_context);
            }
        }
    }
    return;
}

uint32_t MpFsCtlSetDynamicFsHardeningItems(WD_LAYOUT_4 *input)
{
    uint32_t allocation_size;
    int64_t value;
    uint32_t value_2;
    uint32_t *allocation = NULL;
    uint32_t value_3;
    ProbeForRead(*(uint64_t *)(input->field_0x10 + 0x30), 0x10, 4);
    value = *(int64_t *)(input->field_0x10 + 0x30);
    value_2 = *(uint32_t *)(value + 4);
    value_3 = value_2;
    ProbeForRead(value, *(uint32_t *)(value + 8), 4);
    if (0xd <= *(uint32_t *)(value + 8))
    {
        allocation_size = *(uint32_t *)((uint64_t *)(value + 0xc));
        allocation = (uint32_t *)MpAllocatePoolWithTag(1, allocation_size, 0x6968504d);
        if (!allocation)
        {
            return 0xc0000017;
        }
        memcpy_s(allocation, allocation_size, (uint64_t *)(value + 0xc), allocation_size, value_3, allocation);
    }
    value_2 = MpFsHardeningSetServiceHardeningItems(allocation, value_2);
    if (allocation)
    {
        ExFreePoolWithTag(allocation, 0x6968504d);
    }
    return value_2;
}

int32_t MpFsCtlSetKernelEaFile(WD_LAYOUT_4 *input, WD_LAYOUT_50 *input_2)
{
    uint32_t allocation_size;
    uint32_t value;
    int64_t value_2;
    int32_t trace_argument_1;
    uint64_t *allocation;
    uint64_t event_id;
    uint32_t *data_pointer;
    ProbeForRead(*(uint64_t *)(input->field_0x10 + 0x30), 0x18, 4);
    value_2 = *(int64_t *)(input->field_0x10 + 0x30);
    allocation_size = *(uint32_t *)(value_2 + 4);
    trace_argument_1 = *(int32_t *)(value_2 + 8);
    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
    {
        WPP_SF_ZDD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x25, WD_SYMBOL_ADDRESS(WPP_263f00fce6ca379ddfaa72b3d9ebbb38_Traceguids), (int16_t *)(input_2->field_0x20 + 0x58), allocation_size, trace_argument_1);
    }
    if (0x20000 < allocation_size || allocation_size < trace_argument_1 + 0xcU)
    {
        return -0x3ffffff3;
    }
    ProbeForRead(*(uint64_t *)(input->field_0x10 + 0x30), allocation_size, 4);
    allocation = (uint64_t *)MpAllocatePoolWithTag(1, allocation_size, 0x6165504d);
    if (!allocation)
    {
        return -0x3fffffe9;
    }
    memmove(allocation, *(uint64_t **)(input->field_0x10 + 0x30), allocation_size);
    allocation_size = *(uint32_t *)(&allocation[1]);
    if (allocation_size + 0xc <= ((uint32_t *)allocation)[1])
    {
        data_pointer = &((uint32_t *)allocation)[3];
        do
        {
            value = *data_pointer;
            if (!value)
            {
                if ((int64_t)data_pointer + (uint64_t)((uint8_t *)data_pointer)[5] + ((uint16_t *)data_pointer)[3] + 9ULL <= (int64_t)allocation + allocation_size + 0xcULL)
                {
                    trace_argument_1 = MpSetFileKernelEa(input_2->field_0x20, data_pointer);
                    if (0 <= trace_argument_1)
                    {
                        trace_argument_1 = 0;
                    }
                    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2a, WD_SYMBOL_ADDRESS(WPP_263f00fce6ca379ddfaa72b3d9ebbb38_Traceguids), trace_argument_1);
                    }
                    ExFreePoolWithTag(allocation, 0x6165504d);
                    return trace_argument_1;
                }
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    trace_argument_1 = -0x3ffffff3;
                    ExFreePoolWithTag(allocation, 0x6165504d);
                    return trace_argument_1;
                }
                event_id = 0x29;
                WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_263f00fce6ca379ddfaa72b3d9ebbb38_Traceguids));
                trace_argument_1 = -0x3ffffff3;
                ExFreePoolWithTag(allocation, 0x6165504d);
                return trace_argument_1;
            }
            if (value < ((uint16_t *)data_pointer)[3] + 9 + (uint32_t)((uint8_t *)data_pointer)[5])
            {
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    trace_argument_1 = -0x3ffffff3;
                    ExFreePoolWithTag(allocation, 0x6165504d);
                    return trace_argument_1;
                }
                event_id = 0x27;
                WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_263f00fce6ca379ddfaa72b3d9ebbb38_Traceguids));
                trace_argument_1 = -0x3ffffff3;
                ExFreePoolWithTag(allocation, 0x6165504d);
                return trace_argument_1;
            }
            data_pointer = (uint32_t *)((int64_t)data_pointer + (uint64_t)value);
        }
        while (data_pointer < (uint32_t *)((int64_t)allocation + allocation_size + 0xcULL));
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            event_id = 0x28;
            WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_263f00fce6ca379ddfaa72b3d9ebbb38_Traceguids));
        }
    }
    trace_argument_1 = -0x3ffffff3;
    ExFreePoolWithTag(allocation, 0x6165504d);
    return trace_argument_1;
}

uint64_t MpFsCtlSetProcessInformation(WD_LAYOUT_4 *input)
{
    uint32_t value;
    int32_t value_2;
    int64_t value_3;
    uint64_t status;
    int64_t process_context[3];
    int64_t value_4;
    process_context[0] = 0;
    ProbeForRead(*(uint64_t *)(input->field_0x10 + 0x30), 0x18, 4);
    value_3 = *(int64_t *)(input->field_0x10 + 0x30);
    value_4 = value_3;
    ProbeForRead(value_3, *(uint32_t *)(value_3 + 4), 4);
    if (2 < (uint32_t)(*(int32_t *)(value_3 + 8) - 1U))
    {
        return WD_STATUS_INVALID_PARAMETER;
    }
    if (*(uint32_t *)(value_3 + 0x10) <= 3)
    {
        return 0xc0000004;
    }
    if (*(int32_t *)(value_3 + 0xc) != -1)
    {
        status = MpGetProcessContextById(*(int32_t *)(value_3 + 0xc), process_context);
    }
    else
    {
        status = MpGetProcessContextByObject(IoGetCurrentProcess(), process_context);
    }
    if ((int32_t)status <= -1)
    {
        return status;
    }
    value = *(uint32_t *)(value_3 + 0x14);
    value_2 = *(int32_t *)(value_3 + 8);
    if (value_2 != 1)
    {
        if (value_2 != 2)
        {
            if (value_2 == 3)
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                {
                    WPP_SF_dDD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x24, *(uint32_t *)(process_context[0] + 0x3c), *(uint32_t *)(value_3 + 0xc), *(uint32_t *)(process_context[0] + 0x3c), value, value_4);
                }
                *(uint32_t *)(process_context[0] + 0x3c) = value;
            }
        }
        else
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                WPP_SF_dDD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x23, *(uint32_t *)(process_context[0] + 0x38), *(uint32_t *)(value_3 + 0xc), *(uint32_t *)(process_context[0] + 0x38), value, value_4);
            }
            *(uint32_t *)(process_context[0] + 0x38) = value;
        }
    }
    else
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            WPP_SF_dDD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x22, *(uint32_t *)(process_context[0] + 0x34), *(uint32_t *)(value_3 + 0xc), *(uint32_t *)(process_context[0] + 0x34), value, value_4);
        }
        *(uint32_t *)(process_context[0] + 0x34) = value;
    }
    MpReleaseProcessContext(process_context[0]);
    return 0;
}

int32_t MpFsCtlSetProcessTrust(WD_LAYOUT_4 *input)
{
    uint64_t value;
    int32_t value_2;
    uint64_t *data_pointer;
    uint64_t process_context;
    int32_t status;
    uint64_t process_context_2[3];
    int32_t value_3;
    process_context_2[0] = 0;
    if (*(uint32_t *)(input->field_0x10 + 0x20) <= 0xb)
    {
        return -0x3fffffdd;
    }
    ProbeForRead(*(uint64_t *)(input->field_0x10 + 0x30), 0xc, 4);
    data_pointer = *(uint64_t **)(input->field_0x10 + 0x30);
    value = *data_pointer;
    value_2 = *(int32_t *)(&data_pointer[1]);
    value_3 = (int32_t)value;
    if (value_3 != 0x15)
    {
        return -0x3ffffff3;
    }
    status = MpGetProcessContextById(value >> 0x20, process_context_2);
    process_context = process_context_2[0];
    if (0 <= status)
    {
        if (value_2)
        {
            status = MpSetTrustedProcess(process_context_2[0]);
        }
        else
        {
            status = MpSetUntrustedProcess(process_context_2[0]);
        }
        MpReleaseProcessContext(process_context);
    }
    return status;
}

uint64_t MpFsCtlSimulateAoacState(WD_LAYOUT_4 *input, uint64_t input_2)
{
    uint64_t value;
    int32_t value_2;
    uint64_t value_3;
    if (*(uint32_t *)(input->field_0x10 + 0x20) <= 7)
    {
        return 0xc0000023;
    }
    value_3 = input_2;
    ProbeForRead(*(uint64_t *)(input->field_0x10 + 0x30), 8, 4);
    value = *(*(uint64_t **)(input->field_0x10 + 0x30));
    if ((int32_t)value != 0x13)
    {
        return WD_STATUS_INVALID_PARAMETER;
    }
    value_2 = (int32_t)((uint64_t)value >> 0x20);
    value_3 = ((uint64_t)value_2 & 0xffffffffULL) << 32 | (uint64_t)((uint32_t)(value_2 != 0)) & 0xffffffffULL;
    MpPowerStatusCallback(&GUID_LOW_POWER_EPOCH, &value_3, 4);
    return 0;
}

void MpPostSetEa(void *data, void *objects, int64_t *completion_context, uint64_t flags)
{
    int32_t *data_pointer;
    char buffer[8];
    uint64_t stream_context = 0;
    int64_t handle_context = 0;
    int64_t process_context = 0;
    char buffer_2[7];
    int64_t value = 0;
    int64_t value_2 = 0;
    uint64_t value_3;
    uint32_t value_4;
    uint64_t instance;
    int64_t value_5 = 0;
    int64_t *data_pointer_2;
    int64_t *data_pointer_3;
    int32_t status;
    int64_t requestor_process;
    int64_t value_7 = 0;
    bool enabled;
    uint64_t file_object;
    data_pointer_2 = completion_context;
    if (flags & 1 || (value_7 = value_2, !completion_context) || ((int32_t *)data)[6] <= -1 && ((int32_t *)completion_context)[9] != 0xd)
    {
        goto block_4;
    }
    buffer[0] = '\0';
    if (((int32_t *)completion_context)[9] != 0xd)
    {
        block_1:
        requestor_process = MpGetRequestorProcess(data);

        if (!requestor_process)
        {
            goto block_4;
        }
        status = FltGetStreamContext(((uint64_t *)objects)[3], ((uint64_t *)objects)[4], &stream_context);
        if (status <= -1)
        {
            if (!(*(char *)(MpDlpData + 0xf0)) || status != -0x3ffffddb)
            {
                goto block_4;
            }
            value_3 &= 0xffffffffffffff00;
            status = MpCreateStreamContext(data, objects, NULL, 0, value_3, &stream_context);
            if (!(status + 0x80000000U & 0x80000000) && status != -0x3fe3fffe)
            {
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    goto block_4;
                }
                file_object = 0x31;
                goto block_3;
            }
        }
        file_object = ((uint64_t *)objects)[4];
        instance = ((uint64_t *)objects)[3];
        if (0 <= (int32_t)FltGetStreamHandleContext(instance, file_object, &handle_context) && *(uint32_t *)(handle_context + 0x28) & 0x400)
        {
            goto block_4;
        }
        status = MpGetProcessContextByObject(requestor_process, &process_context);
        value_4 = (uint32_t)(value_3 >> 0x20);
        if (0 <= status)
        {
            if (0 <= *(int32_t *)(MpData + 0x364) || *(int32_t *)(process_context + 0xf0) != 0x18 && *(int32_t *)(process_context + 0xf0) != 0x19)
            {
                enabled = 0;
                if (*(int32_t *)(process_context + 0xf0) == 7)
                {
                    enabled = 1;
                }
            }
            else
            {
                enabled = 1;
            }
            if (*(char *)(&completion_context[4]))
            {
                enabled = (bool)(((char *)completion_context)[0x21] != '\0' & enabled);
            }
            if (!enabled)
            {
                if (*(char *)(MpDlpData + 0xf0))
                {
                    MpDlpCheckFileAccess(data, objects, process_context, *(uint32_t *)(*(int64_t *)(stream_context + 8) + 0x54), stream_context, NULL, NULL, *(uint32_t *)(&completion_context[2]), completion_context[3], 0, 0);
                }
                goto block_4;
            }
            if (*(char *)(MpDlpData + 0xf0))
            {
                buffer_2[0] = 0;
                status = MpQueryFileName(data, *(uint32_t *)(*(int64_t *)(stream_context + 8) + 0x54), &value, buffer_2);
                if (0 <= status)
                {
                    status = MpDlpRegisterForPolicyUpdate(process_context, (WD_UNICODE_STRING_VALUE *)(value + 8), stream_context, 0x40);
                    if (status <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                    {
                        file_object = 0x34;
                        goto block_2;
                    }
                }
                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                {
                    file_object = 0x33;
                    block_2:
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), file_object, WD_SYMBOL_ADDRESS(WPP_263f00fce6ca379ddfaa72b3d9ebbb38_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
                }
            }
            FltAcquirePushLockExclusive(stream_context + 0x120);
            data_pointer_3 = *(int64_t **)(stream_context + 0x140);
            if (*data_pointer_3 != stream_context + 0x138)
            {
                (*(WD_ROUTINE)swi(0x29))(3);
            }
            *completion_context = stream_context + 0x138;
            completion_context[1] = (int64_t)data_pointer_3;
            *data_pointer_3 = (int64_t)completion_context;
            *(int64_t **)(stream_context + 0x140) = completion_context;
            FltReleasePushLock(stream_context + 0x120);
            completion_context = NULL;
            data_pointer_2 = NULL;
            WdUnresolvedAtomicBegin();
            data_pointer = (int32_t *)(stream_context + 0x148);
            status = *data_pointer;
            *data_pointer = *data_pointer + 1;
            WdUnresolvedAtomicEnd();
            if (status)
            {
                goto block_4;
            }
            value_7 = FltAllocateGenericWorkItem();
            value_5 = value_7;
            if (!value_7)
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x35, WD_SYMBOL_ADDRESS(WPP_263f00fce6ca379ddfaa72b3d9ebbb38_Traceguids), (uint64_t)KeGetCurrentThread());
                }
                goto block_4;
            }
            value_3 = stream_context;
            status = FltQueueGenericWorkItem(value_7, *(uint64_t *)(MpData + 0x10), MpDlpUpdatePolicyWorker, 1, stream_context);
            if (0 <= status)
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                {
                    WPP_SF_Z(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x36, WD_SYMBOL_ADDRESS(WPP_263f00fce6ca379ddfaa72b3d9ebbb38_Traceguids), (int16_t *)(((int64_t *)objects)[4] + 0x58));
                }
                stream_context = 0;
                value_7 = 0;
                value_5 = 0;
                goto block_4;
            }
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                goto block_4;
            }
            file_object = 0x37;
        }
        else
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                goto block_4;
            }
            file_object = 0x32;
        }
    }
    else
    {
        status = MpSetEaForNetworkFileStubIfNeeded(data, objects, buffer);
        if (0 <= status)
        {
            if (buffer[0])
            {
                ((uint32_t *)data)[6] = 0;
                ((uint64_t *)data)[4] = 0;
            }
            goto block_1;
        }
        ((int32_t *)data)[6] = status;
        ((uint64_t *)data)[4] = 0;
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            goto block_4;
        }
        file_object = 0x30;
        value_7 = 0;
    }
    block_3:
    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), file_object, WD_SYMBOL_ADDRESS(WPP_263f00fce6ca379ddfaa72b3d9ebbb38_Traceguids), (uint64_t)KeGetCurrentThread(), (uint64_t)value_3 & 0xffffffff00000000 | (uint64_t)status & 0xffffffff);

    block_4:
    if (completion_context)
    {
        if (completion_context[3])
        {
            ExFreePoolWithTag(completion_context[3], 0x6165504d);
        }
        ExFreeToPagedLookasideList((void *)(MpData + 0x500), completion_context);
    }

    if (value)
    {
        FltReleaseFileNameInformation();
    }
    if (handle_context)
    {
        FltReleaseContext();
    }
    if (stream_context)
    {
        FltReleaseContext();
    }
    if (process_context)
    {
        MpReleaseProcessContext(process_context);
    }
    if (value_7)
    {
        FltFreeGenericWorkItem(value_7);
    }
    return;
}

void MpPreDuplicateExtentsToFile(uint64_t input, void *input_2)
{
    uint64_t file_object;
    uint64_t instance;
    int64_t stream_context;
    file_object = ((uint64_t *)input_2)[4];
    stream_context = 0;
    if (FltSupportsStreamContexts(file_object))
    {
        file_object = ((uint64_t *)input_2)[4];
        instance = ((uint64_t *)input_2)[3];
        if (0 <= (int32_t)FltGetStreamContext(instance, file_object, &stream_context))
        {
            *(uint32_t *)(stream_context + 0x20) = 0;
            WdAtomicAnd32((volatile int32_t *)((uint32_t *)(stream_context + 0x30)), 0xffffbfff);
            WdAtomicOr32((volatile int32_t *)((uint32_t *)(stream_context + 0x30)), 0x208);
            FltReleaseContext(stream_context);
        }
    }
    return;
}

uint64_t MpPreReadRawEncrypted(WD_LAYOUT_28 *data, void *input)
{
    if (MpScanOnPreUserModeReadCopySourceFile(data, input, NULL, NULL, 0) == 1)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
        {
            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xd, WD_SYMBOL_ADDRESS(WPP_263f00fce6ca379ddfaa72b3d9ebbb38_Traceguids), data->field_0x8);
        }
        return 4;
    }
    return 1;
}

void MpPreSetEa(void *data, void *objects, uint64_t *completion_context)
{
    uint32_t *data_pointer;
    uint32_t values[2];
    uint32_t *data_pointer_2;
    uint32_t *data_pointer_3 = NULL;
    uint32_t *data_pointer_4 = NULL;
    uint32_t index;
    uint64_t value;
    uint32_t value_2;
    char byte_value = '\0';
    bool enabled;
    uint32_t value_3;
    char byte_value_2 = '\0';
    uint64_t value_5;
    int64_t value_6;
    int32_t trace_argument_1;
    uint32_t *data_pointer_5;
    int64_t *allocation;
    uint32_t value_7;
    values[0] = 0;
    if (!(*(char *)(MpDlpData + 0x20)) || *(char *)(((int64_t *)data)[2] + 5) != '\x04' || !MpGetRequestorProcess(data) || (value_5 = ((uint64_t *)objects)[4], !FltSupportsStreamContexts(value_5) || *(uint32_t *)(((int64_t *)data)[2] + 0x18) <= 0xb))
    {
        return;
    }
    if (MpDlpData)
    {
        enabled = *(char *)(MpDlpData + 0x10a);
    }
    else
    {
        enabled = 0;
    }
    trace_argument_1 = FltGetFileSystemType(((uint64_t *)objects)[3], values);
    if (trace_argument_1 <= -1)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
        {
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2c, WD_SYMBOL_ADDRESS(WPP_263f00fce6ca379ddfaa72b3d9ebbb38_Traceguids), trace_argument_1);
        }
        values[0] = 0;
    }
    data_pointer_2 = *(uint32_t **)(((int64_t *)data)[2] + 0x20);
    value_6 = *(int64_t *)(((int64_t *)data)[2] + 0x28);
    data_pointer_5 = data_pointer_3;
    if (value_6)
    {
        if (*(uint8_t *)(value_6 + 10) & 5)
        {
            data_pointer_2 = *(uint32_t **)(value_6 + 0x18);
        }
        else
        {
            value &= 0xffffffff00000000;
            data_pointer_2 = (uint32_t *)MmMapLockedPagesSpecifyCache(value_6, 0, 1, 0, value, ExDefaultMdlProtection | 0x40000010);
        }
        if (data_pointer_2)
        {
            goto block_1;
        }
        data_pointer_5 = data_pointer_4;
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && (data_pointer_5 = data_pointer_3, *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            WPP_SF_qq(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2d, WD_SYMBOL_ADDRESS(WPP_263f00fce6ca379ddfaa72b3d9ebbb38_Traceguids), (uint64_t)KeGetCurrentThread(), *(uint64_t *)(((int64_t *)data)[2] + 0x28));
        }
    }
    else
    {
        block_1:
        for (index = *(uint32_t *)(((int64_t *)data)[2] + 0x18); value_2 = (uint32_t)(value >> 0x20), 0xc <= index; index = index - value_3)
        {
            data_pointer = &data_pointer_2[2];
            if (!_stricmp(data_pointer, "$Kernel.SEC.EndpointDlp"))
            {
                byte_value_2 = '\x01';
                data_pointer_4 = data_pointer_2;
            }
            if (enabled && (!_stricmp(data_pointer, "$Kernel.SEC.MarkOfWeb") || !_stricmp(data_pointer, "$Kernel.SEC.ApplicationSource")))
            {
                byte_value = '\x01';
            }
            value_2 = (uint32_t)(value >> 0x20);
            value_3 = *data_pointer_2;
            if (!value_3)
            {
                break;
            }
            data_pointer_2 = (uint32_t *)((int64_t)data_pointer_2 + (uint64_t)value_3);
        }


        if ((byte_value_2 || byte_value) && ((int16_t *)data_pointer_2)[3])
        {
            data_pointer_5 = (uint32_t *)ExAllocateFromPagedLookasideList((void *)(MpData + 0x500));
            if (data_pointer_5)
            {
                data_pointer_5[6] = 0;
                data_pointer_5[7] = 0;
                data_pointer_5[9] = values[0];
                *(char *)(&data_pointer_5[8]) = byte_value;
                ((char *)data_pointer_5)[0x21] = byte_value_2;
                if (byte_value_2 && data_pointer_4)
                {
                    data_pointer_5[4] = (uint32_t)((uint16_t *)data_pointer_4)[3];
                    allocation = MpAllocatePoolWithTag(1, ((uint16_t *)data_pointer_4)[3], 0x6165504d);
                    *(int64_t **)(&data_pointer_5[6]) = allocation;
                    if (!allocation)
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            value_7 = 0x2f;
                            goto block_2;
                        }
                        goto block_3;
                    }
                    memmove(allocation, (uint64_t *)(((uint8_t *)data_pointer_4)[5] + 9ULL + (int64_t)data_pointer_4), ((uint16_t *)data_pointer_4)[3]);
                }
                *completion_context = data_pointer_5;
                data_pointer_5 = NULL;
            }
            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                value_7 = 0x2e;
                block_2:
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_7, WD_SYMBOL_ADDRESS(WPP_263f00fce6ca379ddfaa72b3d9ebbb38_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_2 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INSUFFICIENT_RESOURCES & 0xffffffffULL);
            }
        }
    }
    block_3:
    if (data_pointer_5)
    {
        if (*(int64_t *)(&data_pointer_5[6]))
        {
            ExFreePoolWithTag(*(int64_t *)(&data_pointer_5[6]), 0x6165504d);
        }
        ExFreeToPagedLookasideList((void *)(MpData + 0x500), data_pointer_5);
    }

    return;
}

void MpPreQueryEa__finally_0(uint64_t input, void *input_2)
{
    int64_t value;
    if (((int64_t *)input_2)[10])
    {
        FltReleaseFileNameInformation();
    }
    value = ((int64_t *)input_2)[9];
    *(uint32_t *)(value + 0x18) = ((uint32_t *)input_2)[8];
    *(uint64_t *)(value + 0x20) = ((uint32_t *)input_2)[0xd];
    return;
}

void MpPostSetEa__finally_0(uint64_t input, void *input_2)
{
    int64_t value;
    value = ((int64_t *)input_2)[0xe];
    if (value)
    {
        if (*(int64_t *)(value + 0x18))
        {
            ExFreePoolWithTag(*(uint64_t *)(value + 0x18), 0x6165504d);
        }
        ExFreeToPagedLookasideList((void *)(MpData + 0x500), value);
    }
    if (((int64_t *)input_2)[0xc])
    {
        FltReleaseFileNameInformation();
    }
    if (((int64_t *)input_2)[0x10])
    {
        FltReleaseContext();
    }
    if (((int64_t *)input_2)[0xf])
    {
        FltReleaseContext();
    }
    if (((void **)input_2)[0xb])
    {
        MpReleaseProcessContext(((void **)input_2)[0xb]);
    }
    if (!((int64_t *)input_2)[0xd])
    {
        return;
    }
    FltFreeGenericWorkItem();
    return;
}

void MpPreSetEa__finally_0(uint64_t input, void *input_2)
{
    int64_t value;
    value = ((int64_t *)input_2)[8];
    if (!value)
    {
        return;
    }
    if (*(int64_t *)(value + 0x18))
    {
        ExFreePoolWithTag(*(uint64_t *)(value + 0x18), 0x6165504d);
    }
    ExFreeToPagedLookasideList((void *)(MpData + 0x500), value);
    return;
}

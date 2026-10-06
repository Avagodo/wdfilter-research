#include "wdfilter.h"

void MpPreSectionSyncPPLReduxCallback(void *data, void *input)
{
    uint32_t value;
    uint64_t process_id;
    uint64_t *index;
    void *data_pointer;
    int64_t stream_context;
    int64_t file_name;
    uint32_t value_2;
    uint64_t *data_pointer_2;
    int16_t *trace_argument_3;
    uint32_t value_3;
    bool enabled;
    uint64_t value_4;
    uint64_t current_thread;
    uint64_t instance;
    uint32_t process_id_2;
    uint32_t process_id_3;
    int32_t status;
    int64_t process;
    int64_t creation_time;
    process_id_2 = (uint32_t)((uint64_t)value_4 >> 0x20);
    enabled = 0;
    stream_context = 0;
    if (!data || !input || (process = ((int64_t *)data)[2], *(char *)(process + 4) != '\xff') || (!((char *)data)[0x50] || ((int64_t *)input)[5] || (value = *(uint32_t *)(MpData + 0x1018), value & 0xffffffe0 || !(value & 1))))
    {
        return;
    }
    value_3 = *(uint32_t *)(process + 0x1c);
    data_pointer = input;
    if (*(uint32_t *)(MpData + 0x360) & 0x2000)
    {
        enabled = (*(uint32_t *)(process + 0x2c) >> 0x18 & 1) != 0;
        if (!(*(uint32_t *)(process + 0x2c) >> 0x18 & 1))
        {
            block_1:
            current_thread = (uint64_t)KeGetCurrentThread();

            process = *(int64_t *)(MpData + 0xe8);
            if (IoThreadToProcess(current_thread) == process || (current_thread = (uint64_t)KeGetCurrentThread(), process = *(int64_t *)(MpData + 0x100), IoThreadToProcess(current_thread) == process))
            {
                return;
            }
        }
    }
    else
    {
        if (!(value_3 & 0xf0))
        {
            goto block_1;
        }
        enabled = 1;
    }
    process = MpGetRequestorProcess(data);
    if (process && *__imp_PsInitialSystemProcess != process)
    {
        creation_time = PsGetProcessCreateTimeQuadPart(process);
        process_id = PsGetProcessId(process);
        process = MpProcessTable;
        if (process_id)
        {
            KeEnterCriticalRegion();
            ExAcquireResourceSharedLite(process + 8, (uint64_t)((uint64_t)data_pointer) & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
            data_pointer_2 = (uint64_t *)(((uint32_t)(process_id >> 2) & 0x7f) * 0x10ULL + *(int64_t *)(MpProcessTable + 0x180));
            for (index = (uint64_t *)(*data_pointer_2); index != data_pointer_2; index = (uint64_t *)(*index))
            {
                if (process_id == index[2] && creation_time == index[3])
                {
                    WdAtomicAdd32((volatile int32_t *)((int32_t *)(&index[5])), 1);
                    ExReleaseResourceLite(MpProcessTable + 8);
                    KeLeaveCriticalRegion();
                    if (*(uint32_t *)(&index[0x23]) & 1 && (*(uint8_t *)(&index[0x16]) & 7) == 1)
                    {
                        current_thread = ((uint64_t *)input)[4];
                        instance = ((uint64_t *)input)[3];
                        file_name = ((uint64_t)WdLoadField(&file_name, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)0xffffffff & 0xffffffffULL;
                        if (0 <= (int32_t)FltGetStreamContext(instance, current_thread, &stream_context))
                        {
                            value_2 = *(uint32_t *)(stream_context + 0x27c);
                            file_name = ((uint64_t)WdLoadField(&file_name, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)value_2 & 0xffffffffULL;
                            FltReleaseContext();
                            stream_context = 0;
                            if (value_2 & 0xfff0000 || value_2 <= 2)
                            {
                                block_2:
                                if (value_2)
                                {
                                    goto block_3;
                                }
                            }
                            else
                            {
                                if ((value_2 & 0xc0000000) == 0x40000000)
                                {
                                    goto block_3;
                                }
                                if ((value_2 & 0x30000000) == 0x30000000)
                                {
                                    goto block_2;
                                }
                            }
                        }
                        else
                        {
                            block_3:
                            process = ((int64_t *)input)[4];

                            creation_time = ((int64_t *)input)[3];
                            if ((int32_t)MpGetFileReparseTag(creation_time, process, &file_name) < 0)
                            {
                                MpReleaseProcessContext((WD_LAYOUT_89 *)(&index[-1]));
                                return;
                            }
                            value_2 = (uint32_t)file_name;
                        }
                        if ((value_2 & 0xffff0fff) == 0x9000001a)
                        {
                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                            {
                                process_id_2 = PsGetCurrentProcessId();
                                trace_argument_3 = (int16_t *)(*(int64_t *)(((int64_t *)data)[2] + 8) + 0x58);
                                WPP_SF_ZDZDDD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xb, WD_SYMBOL_ADDRESS(WPP_3ac2d441938b3ccb0af7fdd108b4c5f3_Traceguids), (int16_t *)index[0xf], process_id_2, trace_argument_3, value_3, value_2, value);
                                process_id_2 = (uint32_t)((uint64_t)trace_argument_3 >> 0x20);
                            }
                            process_id_3 = PsGetCurrentProcessId();
                            MpLogPrintfW(L"[Mini-filter] [PPL-Redux] Detected. Process [%wZ][Pid:%u] trying to map file[%wZ] PageProtection[0x%x] with reparse tag[0x%x]. MpReduxMitigationFlags[0x%x]", index[0xf], process_id_3, *(int64_t *)(((int64_t *)data)[2] + 8) + 0x58, value_3, ((uint64_t)process_id_2 & 0xffffffffULL) << 32 | (uint64_t)value_2 & 0xffffffffULL, value);
                            if (enabled)
                            {
                                if (value & 4)
                                {
                                    block_4:
                                    ((uint64_t *)data)[4] = 0;

                                    ((uint32_t *)data)[6] = WD_STATUS_ACCESS_DENIED;
                                    if (!enabled)
                                    {
                                        goto block_5;
                                    }
                                }
                                if (!(value & 2))
                                {
                                    if (enabled)
                                    {
                                        MpReleaseProcessContext((WD_LAYOUT_89 *)(&index[-1]));
                                        return;
                                    }
                                    goto block_5;
                                }
                            }
                            else
                            {
                                if (value & 8)
                                {
                                    goto block_4;
                                }
                                block_5:
                                if (!(value & 0x10))
                                {
                                    MpReleaseProcessContext((WD_LAYOUT_89 *)(&index[-1]));
                                    return;
                                }
                            }
                            file_name = 0;
                            status = FltGetFileNameInformation(data, 0x101, &file_name);
                            if (status <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                            {
                                WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xc, WD_SYMBOL_ADDRESS(WPP_3ac2d441938b3ccb0af7fdd108b4c5f3_Traceguids), status);
                            }
                            MpTracePPLRedux((WD_LAYOUT_89 *)(&index[-1]), file_name, value, enabled);
                            if (file_name)
                            {
                                FltReleaseFileNameInformation();
                            }
                        }
                    }
                    MpReleaseProcessContext((WD_LAYOUT_89 *)(&index[-1]));
                    return;
                }
            }

            ExReleaseResourceLite(MpProcessTable + 8);
            KeLeaveCriticalRegion();
        }
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 10, WD_SYMBOL_ADDRESS(WPP_3ac2d441938b3ccb0af7fdd108b4c5f3_Traceguids), WD_STATUS_NOT_FOUND);
        }
    }
    return;
}

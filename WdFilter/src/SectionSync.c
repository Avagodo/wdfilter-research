#include "wdfilter.h"

void MpDlpPreAcquireSectionSync(void *data, void *input, void *input_2)
{
    uint64_t *data_pointer;
    int64_t requestor_process;
    uint64_t *data_pointer_2;
    uint64_t *data_pointer_3;
    uint64_t *data_pointer_4;
    WD_UNICODE_STRING_VALUE *record;
    int64_t process_context;
    int64_t handle_context;
    int64_t *data_pointer_5;
    char buffer_2[8];
    uint64_t file_object;
    int64_t value;
    uint64_t value_2;
    uint32_t value_3;
    uint64_t instance;
    int64_t file_name;
    int64_t *data_pointer_6;
    int64_t dlp_data;
    int64_t *data_pointer_7;
    char byte_value;
    int32_t status;
    value_3 = (uint32_t)((uint64_t)value_2 >> 0x20);
    handle_context = 0;
    process_context = 0;
    if ((!(*(uint32_t *)(MpData + 0x360) & 0x2000) || !(*(uint32_t *)(((int64_t *)data)[2] + 0x2c) & 0x1000000)) && (requestor_process = MpGetRequestorProcess(), requestor_process))
    {
        status = MpGetProcessContextByObject(requestor_process, &process_context);
        requestor_process = process_context;
        if (0 <= status)
        {
            byte_value = MpDlpIsEnabled(data, process_context);
            if (byte_value)
            {
                file_object = ((uint64_t *)input)[4];
                instance = ((uint64_t *)input)[3];
                if ((int32_t)FltGetStreamHandleContext(instance, file_object, &handle_context) < 0)
                {
                    return;
                }
                if (*(uint32_t *)(handle_context + 0x28) & 0x40)
                {
                    WdAtomicOr32((volatile int32_t *)((uint32_t *)(handle_context + 0x28)), 0x20);
                    status = MpDlpCheckFileAccess(data, input, requestor_process, *(uint32_t *)(((int64_t *)input_2)[1] + 0x54), input_2, handle_context, NULL, 0, 0, 0);
                    process_context = ((uint64_t)WdLoadField(&process_context, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL;
                    if (status != 2)
                    {
                        if (((uint32_t *)input_2)[0xc] & 0x40000)
                        {
                            FltAcquirePushLockExclusive(MpDlpData + 8);
                            data_pointer = *(uint64_t **)((uint64_t *)(MpDlpData + 0x10));
                            do
                            {
                                data_pointer_2 = data_pointer;
                                if (data_pointer_2 == (uint64_t *)(MpDlpData + 0x10))
                                {
                                    goto block_2;
                                }
                                data_pointer = (uint64_t *)(*data_pointer_2);
                            }
                            while ((void *)data_pointer_2[3] != input_2);
                            *(uint32_t *)(&data_pointer_2[2]) = *(uint32_t *)(&data_pointer_2[2]) & 0xfffffffe;
                            data_pointer_2[6] = *(uint64_t *)(((int64_t *)input)[4] + 0x28);
                            if (!(*(char *)(requestor_process + 0xe0)))
                            {
                                file_name = ((int64_t *)input)[4];
                                if ((WD_UNICODE_STRING_VALUE *)(&data_pointer_2[4]) && ((uint32_t *)input_2)[0xc] & 0x10000)
                                {
                                    FltAcquirePushLockExclusive(requestor_process + 200);
                                    data_pointer = (uint64_t *)(requestor_process + 0xd0);
                                    data_pointer_4 = (uint64_t *)(*data_pointer);
                                    do
                                    {
                                        data_pointer_3 = data_pointer_4;
                                        if (data_pointer_3 == data_pointer)
                                        {
                                            data_pointer_5 = NULL;
                                            if (MpCreateDlpSectionFileNameEntry(input_2, (WD_UNICODE_STRING_VALUE *)(&data_pointer_2[4]), &data_pointer_5) < 0 || !data_pointer_5)
                                            {
                                                goto block_1;
                                            }
                                            data_pointer_5[6] = *(int64_t *)(file_name + 0x28);
                                            data_pointer_2 = *(uint64_t **)(requestor_process + 0xd8);
                                            if ((uint64_t *)(*data_pointer_2) != data_pointer)
                                            {
                                                (*(WD_ROUTINE)swi(0x29))(3);
                                            }
                                            *data_pointer_5 = (int64_t)data_pointer;
                                            data_pointer_5[1] = (int64_t)data_pointer_2;
                                            *data_pointer_2 = data_pointer_5;
                                            *(int64_t **)(requestor_process + 0xd8) = data_pointer_5;
                                            goto block_1;
                                        }
                                        data_pointer_4 = (uint64_t *)(*data_pointer_3);
                                    }
                                    while ((void *)data_pointer_3[3] != input_2);
                                    *(uint32_t *)(&data_pointer_3[2]) = *(uint32_t *)(&data_pointer_3[2]) & 0xfffffffe;
                                    data_pointer_3[6] = *(uint64_t *)(file_name + 0x28);
                                    block_1:
                                    FltReleasePushLock(requestor_process + 200);
                                }
                            }
                            block_2:
                            FltReleasePushLock(MpDlpData + 8);
                        }
                        else
                        {
                            data_pointer_5 = NULL;
                            value = 0;
                            buffer_2[0] = 0;
                            status = MpQueryFileName(data, *(uint32_t *)(((int64_t *)input_2)[1] + 0x54), &value, buffer_2);
                            file_name = value;
                            record = (WD_UNICODE_STRING_VALUE *)(value + 8);
                            if (status <= -1)
                            {
                                record = (WD_UNICODE_STRING_VALUE *)((int64_t)input_2 + 0xf0);
                            }
                            status = MpCreateDlpSectionFileNameEntry(input_2, record, &data_pointer_5);
                            data_pointer_7 = data_pointer_5;
                            if (0 <= status && data_pointer_5)
                            {
                                data_pointer_5[6] = *(int64_t *)(((int64_t *)input)[4] + 0x28);
                                FltAcquirePushLockExclusive(MpDlpData + 8);
                                dlp_data = MpDlpData;
                                data_pointer_6 = *(int64_t **)(MpDlpData + 0x18);
                                if (*data_pointer_6 != MpDlpData + 0x10)
                                {
                                    (*(WD_ROUTINE)swi(0x29))(3);
                                }
                                *data_pointer_7 = MpDlpData + 0x10;
                                data_pointer_7[1] = (int64_t)data_pointer_6;
                                *data_pointer_6 = (int64_t)data_pointer_7;
                                *(int64_t **)(dlp_data + 0x18) = data_pointer_7;
                                WdAtomicOr32((volatile int32_t *)((uint32_t *)((int64_t)input_2 + 0x30)), 0x40000);
                                FltReleasePushLock(MpDlpData + 8);
                                if (!(*(char *)(requestor_process + 0xe0)))
                                {
                                    record = (WD_UNICODE_STRING_VALUE *)(file_name + 8);
                                    if (!file_name)
                                    {
                                        record = (WD_UNICODE_STRING_VALUE *)((int64_t)input_2 + 0xf0);
                                    }
                                    dlp_data = ((int64_t *)input)[4];
                                    if (record && ((uint32_t *)input_2)[0xc] & 0x10000)
                                    {
                                        FltAcquirePushLockExclusive(requestor_process + 200);
                                        data_pointer = (uint64_t *)(requestor_process + 0xd0);
                                        data_pointer_2 = (uint64_t *)(*data_pointer);
                                        do
                                        {
                                            data_pointer_4 = data_pointer_2;
                                            if (data_pointer_4 == data_pointer)
                                            {
                                                data_pointer_5 = NULL;
                                                if (MpCreateDlpSectionFileNameEntry(input_2, record, &data_pointer_5) < 0 || !data_pointer_5)
                                                {
                                                    goto block_3;
                                                }
                                                data_pointer_5[6] = *(int64_t *)(dlp_data + 0x28);
                                                data_pointer_2 = *(uint64_t **)(requestor_process + 0xd8);
                                                if ((uint64_t *)(*data_pointer_2) != data_pointer)
                                                {
                                                    (*(WD_ROUTINE)swi(0x29))(3);
                                                }
                                                *data_pointer_5 = (int64_t)data_pointer;
                                                data_pointer_5[1] = (int64_t)data_pointer_2;
                                                *data_pointer_2 = data_pointer_5;
                                                *(int64_t **)(requestor_process + 0xd8) = data_pointer_5;
                                                goto block_3;
                                            }
                                            data_pointer_2 = (uint64_t *)(*data_pointer_4);
                                        }
                                        while ((void *)data_pointer_4[3] != input_2);
                                        *(uint32_t *)(&data_pointer_4[2]) = *(uint32_t *)(&data_pointer_4[2]) & 0xfffffffe;
                                        data_pointer_4[6] = *(uint64_t *)(dlp_data + 0x28);
                                        block_3:
                                        FltReleasePushLock(requestor_process + 200);
                                    }
                                }
                            }
                            if (file_name)
                            {
                                FltReleaseFileNameInformation(file_name);
                            }
                        }
                    }
                    else
                    {
                        ((uint32_t *)data)[6] = WdDlpStorage2;
                        ((uint64_t *)data)[4] = 0;
                    }
                }
            }
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xd, WD_SYMBOL_ADDRESS(WPP_a67f6715d69b338c18208b3d25efa3ca_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
        }
        if (requestor_process)
        {
            MpReleaseProcessContext(requestor_process);
        }
        if (handle_context)
        {
            FltReleaseContext();
        }
    }
    return;
}

void MpPreAcquireSectionSync(void *data, void *objects)
{
    uint64_t current_thread;
    int64_t value;
    int64_t context;
    uint64_t value_2;
    uint32_t value_3;
    value_3 = (uint32_t)((uint64_t)value_2 >> 0x20);
    context = 0;
    if (*(int32_t *)(((int64_t *)data)[2] + 0x18) == 1 && (current_thread = ((uint64_t *)objects)[4], FltSupportsStreamContexts(current_thread)) && !MpIsThisPrefetchOperation(objects, NULL) && MpPreSectionSyncPPLReduxCallback(data, objects) != 0x1c0001)
    {
        value = IoGetTopLevelIrp();
        if (value)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                WPP_SF_qqL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xb, WD_SYMBOL_ADDRESS(WPP_a67f6715d69b338c18208b3d25efa3ca_Traceguids), ((uint64_t *)data)[1], value, (uint8_t)(*(char *)(((int64_t *)data)[2] + 4)));
            }
        }
        else if (MpScanOnPreUserModeReadCopySourceFile(data, objects, &context, NULL, ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)1 & 0xffffffffULL) == 1)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
            {
                WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 10, WD_SYMBOL_ADDRESS(WPP_a67f6715d69b338c18208b3d25efa3ca_Traceguids), ((uint64_t *)data)[1]);
            }
            if (context)
            {
                FltReleaseContext(context);
            }
            return;
        }
        if (context || (FltGetStreamContext(((uint64_t *)objects)[3], ((uint64_t *)objects)[4], &context), context))
        {
            if (*(char *)(MpDlpData + 0x20) && *(uint32_t *)(context + 0x30) & 0x10000 && ((*(char *)(MpDlpData + 0x10c) || *(uint32_t *)(context + 0x30) & 0x600000) && MpDlpPreAcquireSectionSync(data, objects) == 2))
            {
                if (context)
                {
                    FltReleaseContext(context);
                }
                if (0 <= ((int32_t *)data)[6])
                {
                    ((uint32_t *)data)[6] = WdDlpStorage2;
                }
            }
            else
            {
                current_thread = (uint64_t)KeGetCurrentThread();
                value = *(int64_t *)(MpData + 0xe8);
                if (IoThreadToProcess(current_thread) != value && (current_thread = (uint64_t)KeGetCurrentThread(), value = *(int64_t *)(MpData + 0x100), IoThreadToProcess(current_thread) != value))
                {
                    WdAtomicOr32((volatile int32_t *)((uint32_t *)(context + 0x30)), 0x800);
                }
                if (*(uint32_t *)(((int64_t *)data)[2] + 0x1c) & 0x44)
                {
                    WdAtomicOr32((volatile int32_t *)((uint32_t *)(context + 0x30)), 0x20);
                    if (*(uint32_t *)(MpData + 0x360) & 0x40 && *(uint8_t *)(*(int64_t *)(context + 8) + 0x58) & 1)
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                        {
                            WPP_SF_Z(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xc, WD_SYMBOL_ADDRESS(WPP_a67f6715d69b338c18208b3d25efa3ca_Traceguids), (int16_t *)(((int64_t *)objects)[4] + 0x58));
                        }
                        WdAtomicOr32((volatile int32_t *)((uint32_t *)(context + 0x30)), 0x100000);
                        *(uint32_t *)(context + 0x20) = 0;
                        WdAtomicAnd32((volatile int32_t *)((uint32_t *)(context + 0x30)), 0xffffbfff);
                        WdAtomicOr32((volatile int32_t *)((uint32_t *)(context + 0x30)), 0x108);
                    }
                }
                FltReleaseContext(context);
            }
        }
    }
    return;
}

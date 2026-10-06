#include "wdfilter.h"

void MpPostDirectoryCtrl(void *data, void *objects, uint64_t completion_context, uint64_t flags)
{
    uint32_t value;
    uint64_t value_2;
    uint32_t value_3;
    uint64_t value_4;
    uint32_t value_5;
    uint64_t file_object;
    uint64_t instance;
    uint32_t value_7;
    int32_t status;
    int64_t handle_context;
    char buffer_2[8];
    bool enabled;
    value_3 = (uint32_t)((uint64_t)value_2 >> 0x20);
    value_5 = (uint32_t)((uint64_t)value_4 >> 0x20);
    if (KeIsExecutingDpc() || 2 <= (uint8_t)KeGetCurrentIrql() || ((int32_t *)data)[6] < 0 || (flags & 1 || *(char *)(((int64_t *)data)[2] + 5) != '\x01' || (file_object = ((uint64_t *)objects)[4], !FltSupportsStreamHandleContexts(file_object))))
    {
        return;
    }
    file_object = ((uint64_t *)objects)[4];
    instance = ((uint64_t *)objects)[3];
    handle_context = 0;
    if (FltGetStreamHandleContext(instance, file_object, &handle_context) == -0x3fffff45)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qZD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 10, WD_SYMBOL_ADDRESS(WPP_296cf4eb32a13e34549309923deeee07_Traceguids), ((uint64_t *)data)[1], (int16_t *)(((int64_t *)objects)[4] + 0x58), ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_NOT_SUPPORTED & 0xffffffffULL);
        }
        return;
    }
    if (handle_context)
    {
        value_7 = *(uint32_t *)(handle_context + 0x28);
        do
        {
            WdUnresolvedAtomicBegin();
            value = *(uint32_t *)(handle_context + 0x28);
            enabled = value_7 == value;
            if (enabled)
            {
                *(uint32_t *)(handle_context + 0x28) = value_7 & 0x10;
            }
            else
            {
                value_7 = value;
            }
            WdUnresolvedAtomicEnd();
        }
        while (!enabled);
        if (!value_7)
        {
            goto block_1;
        }
        enabled = 0;
        switch (*(uint32_t *)(((int64_t *)data)[2] + 0x28))
        {
            case 1:

            case 2:

            case 3:

            case 0xc:

            case 0x25:

            case 0x26:
                if (!(*(uint8_t *)(((int64_t *)data)[2] + 6) & 5))
            {
                goto block_3;
            }
                goto block_2;
        }
    }
    else
    {
        block_1:
        enabled = 1;

        block_2:
        buffer_2[0] = '\0';

        if (0 <= (int32_t)MpSendAsyncDirectoryNotification(data, objects, 4, buffer_2) && buffer_2[0] && enabled)
        {
            buffer_2[0] = '\0';
            status = MpCreateHandleContext(objects, &handle_context, buffer_2);
            if (status < 0)
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qLZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xc, WD_SYMBOL_ADDRESS(WPP_296cf4eb32a13e34549309923deeee07_Traceguids), ((uint64_t *)data)[1], ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL, (int16_t *)(((int64_t *)objects)[4] + 0x58));
                }
                return;
            }
            if (!buffer_2[0])
            {
                WdAtomicOr32((volatile int32_t *)((uint32_t *)(handle_context + 0x28)), 0x10);
            }
        }
    }
    block_3:
    if (handle_context)
    {
        FltReleaseContext();
    }

    return;
}

void MpSendAsyncDirectoryNotification(WD_LAYOUT_4 *data, void *input, int32_t input_2, char *input_3)
{
    uint32_t value;
    int64_t value_2;
    uint64_t value_3;
    uint64_t process_context;
    uint32_t value_4;
    uint64_t value_5;
    uint64_t current_thread;
    uint64_t value_6;
    int64_t *data_pointer;
    uint32_t value_7;
    char byte_value;
    uint32_t value_9;
    int32_t trace_argument_1;
    int64_t requestor_process;
    uint64_t value_10;
    int64_t instance_context;
    uint64_t process_context_2;
    value_9 = (uint32_t)((uint64_t)value_5 >> 0x20);
    value_7 = (uint32_t)((uint64_t)value_6 >> 0x20);
    if (*(int32_t *)(MpData + 0xf44) <= -1)
    {
        return;
    }
    if (input_3)
    {
        *input_3 = 0;
    }
    if (input_2 != 4)
    {
        if (input_2 != 2)
        {
            return;
        }
        value = *(uint32_t *)(MpData + 0xf44) & 2;
    }
    else
    {
        value = *(uint32_t *)(MpData + 0xf44) & 4;
    }
    if (!value || !(*(uint32_t *)(MpData + 0x364) & 1))
    {
        return;
    }
    current_thread = ((uint64_t *)input)[3];
    instance_context = 0;
    if ((int32_t)FltGetInstanceContext(current_thread, &instance_context) < 0)
    {
        return;
    }
    value = *(uint32_t *)(instance_context + 0x54);
    FltReleaseContext(instance_context);
    current_thread = (uint64_t)KeGetCurrentThread();
    requestor_process = *(int64_t *)(MpData + 0xe8);
    if (IoThreadToProcess(current_thread) == requestor_process || (current_thread = (uint64_t)KeGetCurrentThread(), requestor_process = *(int64_t *)(MpData + 0x100), IoThreadToProcess(current_thread) == requestor_process))
    {
        return;
    }
    process_context_2 = 0;
    requestor_process = MpGetRequestorProcess(data);
    process_context = 0;
    if (!requestor_process || (trace_argument_1 = MpGetProcessContextByObject(requestor_process, &process_context_2), process_context = process_context_2, trace_argument_1 < 0 || (byte_value = MpIsProcessExemptByContext(process_context_2), !byte_value)))
    {
        value_2 = 0;
        value_4 = 0x400;
        if (input_2 == 2)
        {
            if (!value)
            {
                current_thread = ((uint64_t *)input)[3];
                process_context_2 = 0;
                if (0 <= (int32_t)FltGetInstanceContext(current_thread, &process_context_2))
                {
                    FltReleaseContext(process_context_2);
                }
            }
            requestor_process = *(int64_t *)(data->field_0x10 + 0x38);
            data_pointer = &value_2;
            current_thread = ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)(*(uint32_t *)(requestor_process + 0x10)) & 0xffffffffULL;
            trace_argument_1 = FltGetDestinationFileNameInformation(((uint64_t *)input)[3], ((uint64_t *)input)[4], *(uint64_t *)(requestor_process + 8), requestor_process + 0x14, current_thread, 0x101, data_pointer);
            value_7 = (uint32_t)((uint64_t)data_pointer >> 0x20);
            if (trace_argument_1 < 0)
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xd, WD_SYMBOL_ADDRESS(WPP_296cf4eb32a13e34549309923deeee07_Traceguids), (uint64_t)KeGetCurrentThread(), (uint64_t)current_thread & 0xffffffff00000000 | (uint64_t)trace_argument_1 & 0xffffffff);
                }
                goto block_1;
            }
            value_4 = 0xc00;
        }
        value_9 = MpGetFileAttributes(input);
        value_10 = value_2 + 8;
        if (!value_2)
        {
            value_10 = 0;
        }
        value_3 = 0;
        trace_argument_1 = 0;
        process_context_2 &= 0xffffffff00000000;
        if (*(uint32_t *)(MpData + 0x364) & 1 && process_context && (!(*(uint32_t *)(process_context + 0x34) & 8) || !(*(uint32_t *)(process_context + 0x38) & 0x4000)) && ((!(*(uint32_t *)(process_context + 0x34) & 1) || *(uint32_t *)(process_context + 0x38) & 0x4000) && !(*(uint32_t *)(process_context + 0x38) & 4)))
        {
            trace_argument_1 = MpCreateFileAsyncMessage(&value_3, &process_context_2, input_2, data, input, value, ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)value_9 & 0xffffffffULL, value_4, 0, value_10, NULL, NULL, process_context, NULL);
            current_thread = value_3;
            if (0 <= trace_argument_1)
            {
                trace_argument_1 = MpAsyncSendNotification(value_3, process_context_2 & 0xffffffff, 0, 0xffffffff, process_context);
                if (trace_argument_1 < 0 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                {
                    WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x3f, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), trace_argument_1);
                }
                MpAsyncDereferenceNotification(current_thread);
            }
            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x3e, WD_SYMBOL_ADDRESS(WPP_788a6467b6253b2fe8c68db135e5c037_Traceguids), trace_argument_1);
            }
        }
        if (value_2)
        {
            FltReleaseFileNameInformation();
        }
        if (0 <= trace_argument_1 && input_3)
        {
            *input_3 = 1;
        }
    }
    block_1:
    if (process_context)
    {
        MpReleaseProcessContext(process_context);
    }

    return;
}

#include "wdfilter.h"

int64_t MpGetRequestorProcess(void)
{
    int64_t requestor_process;
    int64_t thread_process;
    requestor_process = FltGetRequestorProcess();
    if (*(int32_t *)(MpData + 0xfec) && requestor_process == *__imp_PsInitialSystemProcess && (thread_process = IoThreadToProcess((uint64_t)KeGetCurrentThread()), requestor_process != thread_process))
    {
        requestor_process = thread_process;
    }
    return requestor_process;
}

uint32_t MpGetRequestorProcessId(const WD_CALLBACK_DATA_VIEW *data)
{
    uintptr_t process_id = (uintptr_t)FltGetRequestorProcessIdEx(data);
    WD_READ_MONITOR_GLOBALS *globals = (WD_READ_MONITOR_GLOBALS *)MpData;
    if (globals->UseThreadProcessForSystemRequests &&
        process_id == (uintptr_t)PsGetProcessId(*__imp_PsInitialSystemProcess))
    {
        uintptr_t current_process_id = (uintptr_t)PsGetCurrentProcessId();
        if (process_id != current_process_id)
        {
            process_id = current_process_id;
        }
    }
    return (uint32_t)process_id;
}

uintptr_t MpGetRequestorProcessIdEx(const WD_CALLBACK_DATA_VIEW *data)
{
    uintptr_t process_id = (uintptr_t)FltGetRequestorProcessIdEx(data);
    WD_READ_MONITOR_GLOBALS *globals = (WD_READ_MONITOR_GLOBALS *)MpData;
    if (globals->UseThreadProcessForSystemRequests &&
        process_id == (uintptr_t)PsGetProcessId(*__imp_PsInitialSystemProcess))
    {
        uintptr_t current_process_id = (uintptr_t)PsGetCurrentProcessId();
        if (process_id != current_process_id)
        {
            process_id = current_process_id;
        }
    }
    return process_id;
}

void MpGetInstanceFromFileObject(uint64_t input, uint64_t *input_2)
{
    int32_t status;
    uint64_t value;
    int64_t value_2 = 0;
    *input_2 = 0;
    status = FltGetVolumeFromFileObject(*(uint64_t *)(MpData + 0x10), input, &value_2);
    if (0 <= status)
    {
        status = FltGetVolumeInstanceFromName(*(uint64_t *)(MpData + 0x10), value_2, 0, input_2);
        if (0 <= status || WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            goto block_1;
        }
        value = 0xd;
    }
    else
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            goto block_1;
        }
        value = 0xc;
    }
    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value, WD_SYMBOL_ADDRESS(WPP_758b915934d1399825cf02cdfef09c14_Traceguids), (uint64_t)KeGetCurrentThread(), status);
    block_1:
    if (value_2)
    {
        FltObjectDereference();
    }

    return;
}

uint64_t MpGetInstanceFromFileHandle(int64_t input, int64_t *input_2, int64_t *input_3, uint64_t input_4)
{
    int64_t value;
    uint32_t value_2;
    uint64_t value_3;
    uint64_t value_4;
    uint64_t current_thread;
    uint64_t value_5;
    int64_t *data_pointer;
    uint32_t value_6;
    if (!input)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xe, WD_SYMBOL_ADDRESS(WPP_758b915934d1399825cf02cdfef09c14_Traceguids), (uint64_t)KeGetCurrentThread(), (uint64_t)value_5 & 0xffffffff00000000 | (uint64_t)0xc0000008 & 0xffffffff);
        }
        return 0xc0000008;
    }
    *input_2 = 0;
    *input_3 = 0;
    data_pointer = input_2;
    value_2 = MpReferenceObjectByHandle(input, 0x80, *__imp_IoFileObjectType, (uint64_t)input_4 & 0xffffffffffffff00 | (uint64_t)1 & 0xff, input_2);
    value_6 = (uint32_t)((uint64_t)data_pointer >> 0x20);
    if (0 <= (int32_t)value_2)
    {
        value_2 = MpGetInstanceFromFileObject(*input_2, input_3);
        if (0 <= (int32_t)value_2 || WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            goto block_1;
        }
        current_thread = (uint64_t)KeGetCurrentThread();
        value_4 = 0x10;
    }
    else
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            goto block_1;
        }
        current_thread = (uint64_t)KeGetCurrentThread();
        value_4 = 0xf;
    }
    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_4, WD_SYMBOL_ADDRESS(WPP_758b915934d1399825cf02cdfef09c14_Traceguids), current_thread, ((uint64_t)value_6 & 0xffffffffULL) << 32 | (uint64_t)value_2 & 0xffffffffULL);
    block_1:
    if ((int32_t)value_2 <= -1)
    {
        if (*input_2)
        {
            ObfDereferenceObject();
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
                value_3 = (*(WD_ROUTINE)swi(3))();
                return value_3;
            }
            *input_2 = 0;
        }
        if (*input_3)
        {
            FltObjectDereference();
            *input_3 = 0;
        }
    }

    return value_2;
}

void MpGetInstanceFromVolumeName(uint64_t input, uint64_t *input_2)
{
    int32_t status;
    uint64_t value;
    int64_t value_2 = 0;
    *input_2 = 0;
    status = FltGetVolumeFromName(*(uint64_t *)(MpData + 0x10), input, &value_2);
    if (0 <= status)
    {
        status = FltGetVolumeInstanceFromName(*(uint64_t *)(MpData + 0x10), value_2, 0, input_2);
        if (0 <= status || WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            goto block_1;
        }
        value = 0xb;
    }
    else
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            goto block_1;
        }
        value = 10;
    }
    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value, WD_SYMBOL_ADDRESS(WPP_758b915934d1399825cf02cdfef09c14_Traceguids), (uint64_t)KeGetCurrentThread(), status);
    block_1:
    if (value_2)
    {
        FltObjectDereference();
    }

    return;
}

void MpGetInstanceFromFileObject__finally_0(uint64_t input, void *input_2)
{
    if (!((int64_t *)input_2)[7])
    {
        return;
    }
    FltObjectDereference();
    return;
}

void MpGetInstanceFromFileHandle__finally_0(uint64_t input, void *input_2)
{
    int64_t *data_pointer;
    int64_t value;
    if (0 <= ((int32_t *)input_2)[0x18])
    {
        return;
    }
    data_pointer = ((int64_t **)input_2)[0xd];
    if (*data_pointer)
    {
        ObfDereferenceObject(*data_pointer);
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
        *data_pointer = 0;
    }
    data_pointer = ((int64_t **)input_2)[0xe];
    if (!(*data_pointer))
    {
        return;
    }
    FltObjectDereference(*data_pointer);
    *data_pointer = 0;
    return;
}

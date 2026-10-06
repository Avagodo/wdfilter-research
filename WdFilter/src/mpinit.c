#include "wdfilter.h"

void WppClassicProviderCallback(uint64_t input, uint8_t input_2, uint64_t *input_3, void *input_4)
{
    uint64_t value;
    if (2 <= input_2)
    {
        return;
    }
    value = 0;
    if (input_2)
    {
        ((uint32_t *)input_4)[0xb] = ((uint32_t *)input_3)[1];
        ((char *)input_4)[0x29] = ((char *)input_3)[2];
        value = *input_3;
    }
    else
    {
        ((char *)input_4)[0x29] = 0;
        ((uint32_t *)input_4)[0xb] = 0;
    }
    ((uint64_t *)input_4)[3] = value;
    return;
}

void McGenControlCallbackV2(uint64_t input, int32_t input_2, char input_3, uint64_t input_4, uint64_t input_5, uint64_t input_6, void *input_7)
{
    uint32_t *data_pointer;
    uint64_t value;
    bool enabled;
    bool enabled_2;
    uint32_t value_2;
    uint32_t value_3;
    uint64_t value_4 = 0;
    if (!input_7)
    {
        return;
    }
    enabled_2 = 0;
    if (!input_2)
    {
        ((uint32_t *)input_7)[9] = 0;
        ((char *)input_7)[0x28] = 0;
        ((uint64_t *)input_7)[2] = 0;
        ((uint64_t *)input_7)[3] = 0;
        if (!((uint16_t *)input_7)[0x15])
        {
            return;
        }
        memset(((int64_t **)input_7)[6], 0, (int64_t)((int32_t)((uint32_t)((uint16_t *)input_7)[0x15] - 1) / 0x20 + 1) << 2);
        return;
    }
    if (input_2 != 1)
    {
        return;
    }
    ((char *)input_7)[0x28] = input_3;
    ((uint64_t *)input_7)[3] = input_5;
    ((uint64_t *)input_7)[2] = input_4;
    ((uint32_t *)input_7)[9] = 1;
    if (!((int16_t *)input_7)[0x15])
    {
        return;
    }
    do
    {
        value = *(uint64_t *)(((int64_t *)input_7)[7] + value_4 * 8);
        enabled = enabled_2;
        if ((*(uint8_t *)(value_4 + ((int64_t *)input_7)[8]) <= ((uint8_t *)input_7)[0x28] || !((uint8_t *)input_7)[0x28]) && (!value || ((uint64_t *)input_7)[2] & value && (((uint64_t *)input_7)[3] & value) == ((uint64_t *)input_7)[3]))
        {
            enabled = 1;
        }
        value_3 = 1 << ((uint8_t)value_4 & 0x1f);
        data_pointer = (uint32_t *)(((int64_t *)input_7)[6] + (value_4 >> 5) * 4);
        value_2 = *data_pointer;
        if (enabled)
        {
            value_2 |= value_3;
        }
        else
        {
            value_2 &= ~value_3;
        }
        *data_pointer = value_2;
        value_2 = (int32_t)value_4 + 1;
        value_4 = value_2;
    }
    while (value_2 < ((uint16_t *)input_7)[0x15]);
    return;
}

void McGenEventRegister_EtwRegister(void)
{
    if (Microsoft_Antimalware_AMFilter_Context)
    {
        return;
    }
    EtwRegister(WD_SYMBOL_ADDRESS(Microsoft_Antimalware_AMFilter), McGenControlCallbackV2, WD_SYMBOL_ADDRESS(Microsoft_Antimalware_AMFilter_Context), WD_SYMBOL_ADDRESS(Microsoft_Antimalware_AMFilter_Context));
    return;
}

uint64_t McGenEventUnregister_EtwUnregister(void)
{
    uint64_t value;
    if (!Microsoft_Antimalware_AMFilter_Context)
    {
        return 0;
    }
    value = EtwUnregister();
    Microsoft_Antimalware_AMFilter_Context = 0;
    return value;
}

void MpReactivateDpc(uint64_t input, int64_t input_2)
{
    int16_t *trace_argument_2;
    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        trace_argument_2 = &WdInitStorage;
        if (input_2 != 2)
        {
            trace_argument_2 = &WdInitStorage2;
        }
        WPP_SF_qS(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x37, WD_SYMBOL_ADDRESS(WPP_b960013237753183ac7a6d55d666ce86_Traceguids), (uint64_t)KeGetCurrentThread(), trace_argument_2);
    }
    if (input_2 != 2)
    {
        return;
    }
    *(uint32_t *)(MpData + 0x260) = 0;
    *(char *)(MpData + 0xd0) = 0;
    *(char *)(MpData + 0xd8) = 1;
    return;
}

void RtlStringCbLengthA(char *input, uint64_t input_2, uint64_t *input_3)
{
    int32_t value;
    uint64_t value_2;
    uint64_t value_3;
    uint64_t value_4 = 0;
    if (input)
    {
        value = RtlStringLengthWorkerA(input, 0x100, &value_4);
        value_2 = value_4;
    }
    else
    {
        value = -0x3ffffff3;
        value_2 = 0;
    }
    if (input_3)
    {
        value_3 = 0;
        if (0 <= value)
        {
            value_3 = value_2;
        }
        *input_3 = value_3;
    }
    return;
}

void RtlStringCbPrintfA(char *input, uint64_t input_2, char *input_3, uint64_t input_4)
{
    uint64_t value_2;
    value_2 = input_4;
    if (0 <= (int32_t)RtlStringValidateDestW(input, input_2, 0x7fffffff))
    {
        RtlStringVPrintfWorkerA(input, input_2, NULL, input_3, &value_2);
    }
    else if (input_2)
    {
        *input = 0;
    }
    return;
}

void WPP_SF_Sd(uint64_t input, uint16_t input_2, uint64_t input_3, int16_t *input_4)
{
    int64_t index;
    if (input_4)
    {
        index = -1;
        do
        {
            index += 1;
        }
        while (input_4[index]);
        index = index * 2 + 2;
    }
    else
    {
        index = 10;
    }
    if (!input_4)
    {
        input_4 = &WdAsyncnotificationStorage3;
    }
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_b960013237753183ac7a6d55d666ce86_Traceguids), input_2, input_4, index, &unrecovered_stack_argument_5, 4, 0);
    return;
}

void WPP_SF_qS(uint64_t input, uint16_t input_2, uint64_t input_3, uint64_t input_4, int16_t *input_5)
{
    int64_t index;
    int16_t *wide_text;
    uint64_t value;
    if (input_5)
    {
        index = -1;
        do
        {
            index += 1;
        }
        while (input_5[index]);
        index = index * 2 + 2;
    }
    else
    {
        index = 10;
    }
    wide_text = input_5;
    if (!input_5)
    {
        wide_text = &WdAsyncnotificationStorage3;
    }
    value = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, input_3, input_2, &value, 8, wide_text, index, 0);
    return;
}

void MpInstanceSetup(void *input, uint64_t input_2, uint32_t input_3, int32_t input_4)
{
    uint64_t value;
    int64_t data;
    uint64_t *data_pointer;
    char buffer_2[128];
    uint64_t trace_argument_1;
    uint64_t value_3;
    char *bytes;
    data = MpData;
    bytes = buffer_2;
    trace_argument_1 = 0x800000;
    value_3 = input_2 & 0xffffffff;
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(data + 0x2f0, (uint64_t)input_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
    data_pointer = *(uint64_t **)((uint64_t *)(MpData + 0x228));
    while (true)
    {
        if (data_pointer == (uint64_t *)(MpData + 0x228))
        {
            ExReleaseResourceLite(MpData + 0x2f0);
            KeLeaveCriticalRegion();
            if (input_4 != 2 && input_4 != 0x1c || (value = ((uint64_t *)input)[2], !MpIsVolumeOnCsvDisk(value)))
            {
                MpCreateInstanceContext(input, value_3, input_3, input_4);
            }
            return;
        }
        if (data_pointer[0xd] == ((int64_t *)input)[2])
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
            {
                WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x26, WD_SYMBOL_ADDRESS(WPP_b960013237753183ac7a6d55d666ce86_Traceguids), (uint64_t)KeGetCurrentThread());
            }
            value = ((uint64_t *)input)[2];
            if ((FltGetVolumeName(value, &trace_argument_1, 0) & 0xc0000000) != 0xc0000000)
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                {
                    WPP_SF_Z(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x27, WD_SYMBOL_ADDRESS(WPP_b960013237753183ac7a6d55d666ce86_Traceguids), &trace_argument_1);
                }
            }
            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
            {
                WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x28, WD_SYMBOL_ADDRESS(WPP_b960013237753183ac7a6d55d666ce86_Traceguids), ((uint64_t *)input)[2]);
            }
            ExReleaseResourceLite(MpData + 0x2f0);
            KeLeaveCriticalRegion();
            return;
        }
        data_pointer = (uint64_t *)(*data_pointer);
    }
}

void MpInstanceTeardownComplete(void)
{
    return;
}

void MpTearDownFltMgr(void)
{
    if (!(*(int64_t *)(MpData + 0x10)))
    {
        return;
    }
    FltUnregisterFilter();
    *(uint64_t *)(MpData + 0x10) = 0;
    FltDeleteExtraCreateParameterLookasideList(0, MpData + 0x7c0, 0);
    return;
}

void MpDeleteLookasideLists(void)
{
    ExDeletePagedLookasideList(MpData + 0x600);
    ExDeletePagedLookasideList(MpData + 0x380);
    ExDeletePagedLookasideList(MpData + 0x400);
    ExDeleteNPagedLookasideList(MpData + 0x480);
    ExDeleteNPagedLookasideList(MpData + 0x580);
    ExDeletePagedLookasideList(MpData + 0x680);
    ExDeletePagedLookasideList(MpData + 0x700);
    ExDeletePagedLookasideList(MpData + 0x840);
    ExDeletePagedLookasideList(MpData + 0x500);
    ExDeletePagedLookasideList(MpData + 0x8c0);
    ExDeletePagedLookasideList(MpData + 0x1080);
    ExDeletePagedLookasideList(MpData + 0x1100);
    return;
}

void MpFreeGlobals(void)
{
    if (*(int64_t *)(MpData + 0xcc0))
    {
        ExFreePoolWithTag(*(int64_t *)(MpData + 0xcc0), 0x6e76504d);
    }
    MpFreeCsrssHookData(*(int64_t **)(MpData + 0x9b0));
    if (*(int64_t *)(MpData + 0x978))
    {
        ExFreePoolWithTag(*(int64_t *)(MpData + 0x978), 0x6473504d);
    }
    if (*(int64_t *)(MpData + 0x948))
    {
        ExFreePoolWithTag(*(int64_t *)(MpData + 0x948), 0x6473504d);
    }
    if (*(int64_t *)(MpData + 0x950))
    {
        ExFreePoolWithTag(*(int64_t *)(MpData + 0x950), 0x6473504d);
    }
    if (*(int64_t *)(MpData + 0x960))
    {
        ExFreePoolWithTag(*(int64_t *)(MpData + 0x960), 0x6473504d);
    }
    if (*(int64_t *)(MpData + 0x968))
    {
        ExFreePoolWithTag(*(int64_t *)(MpData + 0x968), 0x6473504d);
    }
    if (*(int64_t *)(MpData + 0x958))
    {
        ExFreePoolWithTag(*(int64_t *)(MpData + 0x958), 0x6473504d);
    }
    if (*(int64_t *)(MpData + 0x970))
    {
        ExFreePoolWithTag(*(int64_t *)(MpData + 0x970), 0x6473504d);
    }
    if (*(int64_t *)(MpData + 0x248))
    {
        ExFreePoolWithTag(*(int64_t *)(MpData + 0x248), 0x6772504d);
    }
    if (*(int64_t *)(MpData + 0xfb0))
    {
        MpFreeString(*(int64_t *)(MpData + 0xfb0));
    }
    MpDeleteLookasideLists();
    ExDeleteResourceLite(MpData + 0xbe8);
    ExDeleteResourceLite(MpData + 0xc50);
    ExDeleteResourceLite(MpData + 0x2f0);
    if (!(*(int64_t *)(MpData + 0xf60)))
    {
        return;
    }
    ExFreePoolWithTag(*(int64_t *)(MpData + 0xf60), 0x6e76504d);
    return;
}

uint64_t MpQueryTeardown(void)
{
    if (!WdDataStorage9 && !(*(int32_t *)(MpData + 0xbd4)))
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x29, WD_SYMBOL_ADDRESS(WPP_b960013237753183ac7a6d55d666ce86_Traceguids));
        }
        return 0xc01c0010;
    }
    return 0;
}

uint64_t MpUnload(uint64_t input)
{
    int64_t *data_pointer;
    int64_t value;
    if (!(input & 1))
    {
        return 0xc01c0010;
    }
    MpRemoveImageVerificationCallback();
    MpUnregisterRegCallback();
    PsRemoveCreateThreadNotifyRoutine(MpCreateThreadNotifyRoutine);
    if (*(int64_t *)(MpData + 0x28))
    {
        PsRemoveCreateThreadNotifyRoutine(MpCreateThreadNotifyRoutineEx);
    }
    PsRemoveLoadImageNotifyRoutine(MpLoadImageNotifyRoutine);
    MpRemoveProcessNotifyRoutine();
    MpObShutdown();
    MpFreeCommPorts();
    MpFgAuditShutdown();
    MpDlpDeleteNetworkRedirectionInfo();
    MpAsyncScanShutdown();
    MpTearDownFltMgr();
    MpDlpShutdown();
    MpHashLibReleaseImpl(MpHashLibData);
    MpSeqDetectCtxShutdown();
    KeCancelTimer(MpData + 0x2b0);
    value = MpData + 0x2b0;
    if (!KeCancelTimer(value))
    {
        KeFlushQueuedDpcs();
    }
    KeRemoveQueueDpc(MpData + 0x270);
    data_pointer = *(int64_t **)((int64_t *)(MpData + 0x228));
    if (data_pointer == (int64_t *)(MpData + 0x228))
    {
        MpCleanupDriverInfo();
        MpFgCleanup();
        MpRegShutdown();
        MpPowerStatusUninitialize(*(int64_t *)(MpData + 0x998));
        *(uint64_t *)(MpData + 0x998) = 0;
        MpShutdownProcessExclusions();
        if (MpAsyncScanData)
        {
            ExFreePoolWithTag(MpAsyncScanData, 0x6461504d);
            MpAsyncScanData = 0;
        }
        MpAsyncShutdown();
        MpTxfCleanup();
        MpDeleteBootSectorCache();
        MpShutdownThreadTable();
        MpShutdownProcessTable();
        MpCleanupDocOpenRules();
        MpShutdownBoostManager();
        MpFsHardeningRelease();
        ExDeleteLookasideListEx(WD_SYMBOL_ADDRESS(gs_CopyCacheLookaside));
        MpFreeGlobals();
        MpObRundownRelease();
        MpTraceLogRelease();
        ExFreePoolWithTag(MpData, 0x6466504d);
        McGenEventUnregister_EtwUnregister();
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
        {
            WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x25, WD_SYMBOL_ADDRESS(WPP_b960013237753183ac7a6d55d666ce86_Traceguids));
        }
        WppCleanupKm();
        return 0;
    }
    KeBugCheckEx(0x108, WD_SYMBOL_ADDRESS(MpData), data_pointer, *(uint64_t *)(MpData + 0x230), 0);
}

void WppCleanupKm(void)
{
    int64_t w_p_p__g_l_o_b_a_l__control;
    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
    {
        return;
    }
    w_p_p__g_l_o_b_a_l__control = WPP_GLOBAL_Control;
    if (WPPTraceSuite != 4)
    {
        if (WPPTraceSuite != 2)
        {
            WPP_GLOBAL_Control = WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control);
            return;
        }
        IoWMIRegistrationControl(WPP_GLOBAL_Control, 0x80000002);
        WPP_GLOBAL_Control = WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control);
        return;
    }
    for (; w_p_p__g_l_o_b_a_l__control; w_p_p__g_l_o_b_a_l__control = *(int64_t *)(w_p_p__g_l_o_b_a_l__control + 0x10))
    {
        if (*(int64_t *)(w_p_p__g_l_o_b_a_l__control + 0x38))
        {
            (*__guard_dispatch_icall_fptr)();
            *(uint64_t *)(w_p_p__g_l_o_b_a_l__control + 0x38) = 0;
        }
    }

    WPP_GLOBAL_Control = WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control);
    return;
}

void WppInitKm(void)
{
    int64_t value;
    value = WD_SYMBOL_ADDRESS(WPP_MAIN_CB);
    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_MAIN_CB))
    {
        return;
    }
    WPP_GLOBAL_Control = WD_SYMBOL_ADDRESS(WPP_MAIN_CB);
    if (WPPTraceSuite != 4)
    {
        if (WPPTraceSuite != 2)
        {
            WPP_GLOBAL_Control = WD_SYMBOL_ADDRESS(WPP_MAIN_CB);
            return;
        }
        WPP_MAIN_CB = WppTraceCallback;
        IoWMIRegistrationControl(WD_SYMBOL_ADDRESS(WPP_MAIN_CB), 0x80010001);
        return;
    }
    do
    {
        *(uint64_t *)(value + 0x38) = 0;
        (*__guard_dispatch_icall_fptr)(*(uint64_t *)(value + 8), 0, WppClassicProviderCallback, value, (uint64_t *)(value + 0x38));
        value = *(int64_t *)(value + 0x10);
    }
    while (value);
    return;
}

void WppLoadTracingSupport(void)
{
    uint64_t string;
    uint32_t values[2];
    uint64_t value;
    values[0] = 0;
    string = 0;
    value = 0;
    RtlInitUnicodeString(&string, L"PsGetVersion");
    pfnWppGetVersion = MmGetSystemRoutineAddress(&string);
    RtlInitUnicodeString(&string, L"WmiTraceMessage");
    pfnWppTraceMessage = MmGetSystemRoutineAddress(&string);
    RtlInitUnicodeString(&string, L"WmiQueryTraceInformation");
    pfnWppQueryTraceInformation = MmGetSystemRoutineAddress(&string);
    WPPTraceSuite = 2;
    if (pfnWppGetVersion)
    {
        (*__guard_dispatch_icall_fptr)(values, 0, 0, 0);
    }
    if (6 <= values[0])
    {
        RtlInitUnicodeString(&string, L"EtwRegisterClassicProvider");
        pfnEtwRegisterClassicProvider = MmGetSystemRoutineAddress(&string);
        if (pfnEtwRegisterClassicProvider)
        {
            RtlInitUnicodeString(&string, L"EtwUnregister");
            pfnEtwUnregister = MmGetSystemRoutineAddress(&string);
            WPPTraceSuite = 4;
        }
    }
    return;
}

void WppTraceCallback(uint8_t input, uint64_t input_2, uint32_t buffer_size, uint32_t *buffer, void *input_3, uint32_t *input_4)
{
    uint32_t *data_pointer;
    uint32_t value;
    uint32_t value_2;
    uint32_t value_3;
    uint32_t value_4;
    uint32_t *data_pointer_2;
    uint32_t value_5;
    uint32_t value_6;
    bool enabled;
    char byte_value;
    uint64_t value_7;
    uint32_t value_8;
    uint16_t *wide_text;
    uint32_t *data_pointer_3;
    uint32_t value_10;
    int32_t value_11;
    void *data_pointer_4;
    uint64_t value_12;
    void *data_pointer_5;
    data_pointer = input_4;
    data_pointer_5 = input_3;
    value_6 = 0;
    *input_4 = 0;
    if (6 <= input)
    {
        if (input != 6 && input != 7 && input == 8)
        {
            wide_text = ((uint16_t **)input_3)[4];
            data_pointer_4 = input_3;
            do
            {
                data_pointer_4 = ((void **)data_pointer_4)[2];
                value_6 += 1;
            }
            while (data_pointer_4);
            if (value_6 <= 0x3f)
            {
                value_3 = value_6 * 0x20 + 0x18;
                if (wide_text)
                {
                    value_4 = value_3 + *wide_text + 2;
                    value_5 = value_3;
                }
                else
                {
                    value_4 = value_3;
                    value_5 = 0;
                }
                if (value_4 <= buffer_size)
                {
                    memset(buffer, 0, buffer_size);
                    *buffer = value_4;
                    buffer[2] = value_5;
                    buffer[4] = value_6;
                    if (wide_text)
                    {
                        *(uint16_t *)((uint64_t)value_5 + (int64_t)buffer) = *wide_text;
                        memmove((uint64_t *)(value_5 + 2ULL + (int64_t)buffer), *(uint64_t **)(&wide_text[4]), *wide_text);
                    }
                    if (value_6)
                    {
                        value_12 = value_6;
                        data_pointer_2 = &buffer[10];
                        do
                        {
                            data_pointer_3 = ((uint32_t **)data_pointer_5)[1];
                            value_6 = *data_pointer_3;
                            value_3 = data_pointer_3[1];
                            value_5 = data_pointer_3[2];
                            value_10 = data_pointer_3[3];
                            *data_pointer_2 = 0x81000;
                            data_pointer_3 = &data_pointer_2[8];
                            data_pointer_2[-4] = value_6;
                            data_pointer_2[-3] = value_3;
                            data_pointer_2[-2] = value_5;
                            data_pointer_2[-1] = value_10;
                            ((char *)data_pointer_5)[0x29] = 0;
                            ((uint32_t *)data_pointer_5)[0xb] = 0;
                            data_pointer_5 = ((void **)data_pointer_5)[2];
                            value_12 -= 1;
                            data_pointer_2 = data_pointer_3;
                        }
                        while (value_12);
                    }
                    *data_pointer = value_4;
                }
                else if (4 <= buffer_size)
                {
                    *buffer = value_4;
                    *input_4 = 4;
                }
            }
        }
    }
    else if (input == 5 || input && input != 1 && (input != 2 && (input != 3 && input == 4)))
    {
        value_2 = 0;
        value = 0;
        if (input_3 && 0x30 <= buffer_size)
        {
            data_pointer_4 = input_3;
            do
            {
                data_pointer = ((uint32_t **)data_pointer_4)[1];
                if (*data_pointer == buffer[6] && data_pointer[1] == buffer[7] && data_pointer[2] == buffer[8] && data_pointer[3] == buffer[9])
                {
                    break;
                }
                data_pointer_5 = ((void **)data_pointer_4)[2];
                data_pointer_4 = data_pointer_5;
            }
            while (data_pointer_5);
            if (data_pointer_4)
            {
                if (input != 5)
                {
                    enabled = WPPTraceSuite != 2;
                    value_7 = *(uint64_t *)(&buffer[2]);
                    ((uint64_t *)data_pointer_5)[3] = value_7;
                    if (enabled)
                    {
                        value_8 = (uint32_t)((uint64_t)value_7 >> 0x20);
                        ((uint32_t *)data_pointer_4)[0xb] = value_8;
                        byte_value = (char)((uint64_t)value_7 >> 0x10);
                        ((char *)data_pointer_4)[0x29] = byte_value;
                    }
                    else
                    {
                        value_11 = (*__guard_dispatch_icall_fptr)(3, &value_2, 4, &value, buffer);
                        if (!value_11)
                        {
                            ((char *)data_pointer_4)[0x29] = (char)value_2;
                        }
                        (*__guard_dispatch_icall_fptr)(2, (int64_t)data_pointer_4 + 0x2c, 4, &value, buffer);
                    }
                }
                else
                {
                    ((uint32_t *)data_pointer_4)[0xb] = 0;
                    ((uint64_t *)data_pointer_5)[3] = 0;
                    ((char *)data_pointer_4)[0x29] = 0;
                }
            }
        }
    }
    return;
}

void MpVerifyWindowsVersion(uint32_t input, uint32_t input_2, int16_t input_3, uint64_t input_4, int32_t input_5)
{
    int32_t value;
    int16_t value_2;
    uint16_t value_3;
    uint32_t value_5;
    uint32_t buffer_2;
    uint64_t value_6 = 0x11c;
    uint64_t value_7;
    uint32_t value_8;
    uint32_t value_9;
    int32_t value_10;
    memset(&buffer_2, 0, (char *)0x11c);
    value_7 = (uint64_t)value_6 & 0xffffffffffffff00 | (uint64_t)3 & 0xff;
    value_6 = VerSetConditionMask(0, 2, value_7);
    value_7 = (uint64_t)value_7 & 0xffffffffffffff00 | (uint64_t)3 & 0xff;
    value_6 = VerSetConditionMask(value_6, 1, value_7);
    if (input_3)
    {
        value_5 = 0x23;
        value_7 = (uint64_t)value_7 & 0xffffffffffffff00 | (uint64_t)3 & 0xff;
        value_6 = VerSetConditionMask(value_6, 0x20, value_7);
    }
    else
    {
        value_5 = 3;
    }
    value = input_5;
    if (input_5)
    {
        value_5 |= 4;
        value_6 = VerSetConditionMask(value_6, 4, (uint64_t)value_7 & 0xffffffffffffff00 | (uint64_t)3 & 0xff);
    }
    buffer_2 = 0x11c;
    value_3 = 0;
    value_10 = value;
    value_8 = input;
    value_9 = input_2;
    value_2 = input_3;
    RtlVerifyVersionInfo(&buffer_2, value_5, value_6);
    return;
}

void DriverEntry(WD_LAYOUT_124 *driver_object, WD_UNICODE_STRING_VALUE *registry_path)
{
    int32_t value;
    bool enabled = 0;
    bool enabled_2 = 0;
    int32_t value_2;
    uint16_t *wide_text;
    uint32_t value_3;
    uint32_t value_4;
    uint16_t *allocation;
    uint64_t value_6;
    uint32_t value_7;
    uint32_t buffer_2;
    uint64_t value_8;
    char buffer_3[8];
    uint32_t value_9;
    if (*__imp_InitSafeBootMode)
    {
        return;
    }
    buffer_3[0] = '\0';
    value_8 = 0x320030;
    wide_text = L"NtQuerySystemInformation";
    memset(&buffer_2, 0, (char *)0x114);
    buffer_2 = 0x114;
    if (0 <= (int32_t)RtlGetVersion(&buffer_2))
    {
        value_7 = value_3;
        value_9 = value_4;
    }
    else
    {
        value_7 = 5;
        value_9 = 0;
    }
    if (MmGetSystemRoutineAddress(&value_8) && (value = (*__guard_dispatch_icall_fptr)(0xe3, buffer_3, 1, 0), 0 <= value) && buffer_3[0])
    {
        ExPoolZeroingNativelySupported = 1;
    }
    if (7 <= value_7 || value_7 == 6 && 2 <= value_9)
    {
        ExDefaultNonPagedPoolType = 0x200;
        ExDefaultMdlProtection = 0x40000000;
    }
    ObTotalReferences = 0;
    WPP_MAIN_CB = 0;
    WdModule113Storage8 = WD_SYMBOL_ADDRESS(WPP_ThisDir_CTLGUID_MpFilter);
    WdModule113Storage9 = 0;
    WdModule113Storage10 = 0;
    WdModule113Storage11 = 1;
    WppLoadTracingSupport();
    WdModule113Storage10 = 0;
    WppInitKm();
    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 10, WD_SYMBOL_ADDRESS(WPP_b960013237753183ac7a6d55d666ce86_Traceguids), driver_object);
    }
    McGenEventRegister_EtwRegister();
    allocation = (uint16_t *)MpAllocatePoolWithTag(ExDefaultNonPagedPoolType, (char *)0x1180, 0x6466504d);
    MpData = allocation;
    if (allocation)
    {
        *allocation = 0xda00;
        MpData[1] = 0x1180;
        value = MpInitializeGlobals(driver_object, registry_path);
        if (0 <= value)
        {
            MpTraceLogInitialize();
            value = MpLoadRegistryParameters();
            if (0 <= value)
            {
                MpSetDefaultConfigs();
                MpSetBufferLimits();
                MpInitializeBoostManager();
                value = MpFsHardeningInitialize();
                if (0 <= value)
                {
                    value = ExInitializeLookasideListEx(WD_SYMBOL_ADDRESS(gs_CopyCacheLookaside), 0, 0, 1, 0, (uint64_t)WdDataStorage10 * 0x38, 0x7043504d, 0, value);
                    if (0 <= value)
                    {
                        value = MpInitializeDocOpenRules();
                        if (0 <= value)
                        {
                            value = MpInitializeProcessTable();
                            if (0 <= value)
                            {
                                value = MpInitializeThreadTable();
                                if (0 <= value)
                                {
                                    value = MpInitBootSectorCache();
                                    if (0 <= value)
                                    {
                                        value = MpInitializeProcessExclusions();
                                        if (0 <= value)
                                        {
                                            value = MpPowerStatusInitialize(&MpData[0x4cc]);
                                            if (value <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                            {
                                                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x16, WD_SYMBOL_ADDRESS(WPP_b960013237753183ac7a6d55d666ce86_Traceguids), (uint64_t)KeGetCurrentThread(), value);
                                            }
                                            value = MpTxfInitialize();
                                            if (0 <= value)
                                            {
                                                value = MpAsyncInitialize();
                                                if (0 <= value)
                                                {
                                                    value = MpAsyncScanInitialize();
                                                    if (0 <= value)
                                                    {
                                                        value = MpRegInitialize();
                                                        if (0 <= value)
                                                        {
                                                            value = MpFgInitialize();
                                                            if (0 <= value)
                                                            {
                                                                MpInitializeDriverInfo();
                                                                value = MpDlpInitialize();
                                                                if (0 <= value)
                                                                {
                                                                    value = MpInitializeFltMgr(driver_object);
                                                                    if (0 <= value)
                                                                    {
                                                                        value = MpCreateCommPorts();
                                                                        if (0 <= value)
                                                                        {
                                                                            value = MpSetProcessNotifyRoutine();
                                                                            if (0 <= value)
                                                                            {
                                                                                value = PsSetLoadImageNotifyRoutine(MpLoadImageNotifyRoutine);
                                                                                if (0 <= value)
                                                                                {
                                                                                    value = PsSetCreateThreadNotifyRoutine(MpCreateThreadNotifyRoutine);
                                                                                    if (0 <= value)
                                                                                    {
                                                                                        if (*(int64_t *)(&MpData[0x14]) && (value = (*__guard_dispatch_icall_fptr)(0, MpCreateThreadNotifyRoutineEx), value <= -1))
                                                                                        {
                                                                                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                                                                            {
                                                                                                value_6 = 0x22;
                                                                                                enabled_2 = enabled;
                                                                                                goto block_1;
                                                                                            }
                                                                                        }
                                                                                        else
                                                                                        {
                                                                                            MpSetImageVerificationCallback();
                                                                                            MpSeqDetectCtxInitialize(*(uint64_t *)(&MpData[8]));
                                                                                            enabled_2 = 1;
                                                                                            value = FltStartFiltering(*(uint64_t *)(&MpData[8]));
                                                                                            if (0 <= value)
                                                                                            {
                                                                                                MpUpdateRunningProcesses();
                                                                                                value = MpObInitialize();
                                                                                                if (0 <= value)
                                                                                                {
                                                                                                    value = MpRegisterRegCallback();
                                                                                                    if (value <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                                                                                    {
                                                                                                        value_6 = 0x24;
                                                                                                        enabled_2 = 1;
                                                                                                        goto block_1;
                                                                                                    }
                                                                                                }
                                                                                                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                                                                                {
                                                                                                    value_6 = 0x23;
                                                                                                    enabled_2 = 1;
                                                                                                    block_1:
                                                                                                    value_2 = value;

                                                                                                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_6, WD_SYMBOL_ADDRESS(WPP_b960013237753183ac7a6d55d666ce86_Traceguids), (uint64_t)KeGetCurrentThread(), value_2);
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                                                                    {
                                                                                        value_6 = 0x21;
                                                                                        enabled_2 = enabled;
                                                                                        goto block_1;
                                                                                    }
                                                                                }
                                                                                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                                                                {
                                                                                    value_6 = 0x20;
                                                                                    enabled_2 = enabled;
                                                                                    goto block_1;
                                                                                }
                                                                            }
                                                                            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                                                            {
                                                                                value_6 = 0x1f;
                                                                                enabled_2 = enabled;
                                                                                goto block_1;
                                                                            }
                                                                        }
                                                                        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                                                        {
                                                                            value_6 = 0x1e;
                                                                            enabled_2 = enabled;
                                                                            goto block_1;
                                                                        }
                                                                    }
                                                                    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                                                    {
                                                                        value_6 = 0x1d;
                                                                        enabled_2 = enabled;
                                                                        goto block_1;
                                                                    }
                                                                }
                                                                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                                                {
                                                                    value_6 = 0x1c;
                                                                    enabled_2 = enabled;
                                                                    goto block_1;
                                                                }
                                                            }
                                                            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                                            {
                                                                value_6 = 0x1b;
                                                                enabled_2 = enabled;
                                                                goto block_1;
                                                            }
                                                        }
                                                        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                                        {
                                                            value_6 = 0x1a;
                                                            enabled_2 = enabled;
                                                            goto block_1;
                                                        }
                                                    }
                                                    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                                    {
                                                        value_6 = 0x19;
                                                        enabled_2 = enabled;
                                                        goto block_1;
                                                    }
                                                }
                                                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                                {
                                                    value_6 = 0x18;
                                                    enabled_2 = enabled;
                                                    goto block_1;
                                                }
                                            }
                                            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                            {
                                                value_6 = 0x17;
                                                enabled_2 = enabled;
                                                goto block_1;
                                            }
                                        }
                                        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                        {
                                            value_6 = 0x15;
                                            enabled_2 = enabled;
                                            goto block_1;
                                        }
                                    }
                                    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                    {
                                        value_6 = 0x14;
                                        enabled_2 = enabled;
                                        goto block_1;
                                    }
                                }
                                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                {
                                    value_6 = 0x13;
                                    enabled_2 = enabled;
                                    goto block_1;
                                }
                            }
                            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                            {
                                value_6 = 0x12;
                                enabled_2 = enabled;
                                goto block_1;
                            }
                        }
                        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            value_6 = 0x11;
                            enabled_2 = enabled;
                            goto block_1;
                        }
                    }
                    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        value_6 = 0x10;
                        enabled_2 = enabled;
                        goto block_1;
                    }
                }
                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    value_6 = 0xf;
                    enabled_2 = enabled;
                    goto block_1;
                }
            }
            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                value_6 = 0xe;
                enabled_2 = 0;
                goto block_1;
            }
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            value_6 = 0xd;
            value_2 = value;
            enabled_2 = 0;
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_6, WD_SYMBOL_ADDRESS(WPP_b960013237753183ac7a6d55d666ce86_Traceguids), (uint64_t)KeGetCurrentThread(), value_2);
        }
    }
    else
    {
        value = -0x3fffff66;
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            value_6 = 0xc;
            value = -0x3fffff66;
            value_2 = -0x3fffff66;
            enabled_2 = 0;
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_6, WD_SYMBOL_ADDRESS(WPP_b960013237753183ac7a6d55d666ce86_Traceguids), (uint64_t)KeGetCurrentThread(), value_2);
        }
    }
    if (value <= -1)
    {
        if (MpData)
        {
            MpTraceLogDriverEntryFailure(value);
            MpRemoveImageVerificationCallback();
            MpUnregisterRegCallback();
            MpObShutdown();
            PsRemoveCreateThreadNotifyRoutine(MpCreateThreadNotifyRoutine);
            if (*(int64_t *)(&MpData[0x14]))
            {
                PsRemoveCreateThreadNotifyRoutine(MpCreateThreadNotifyRoutineEx);
            }
            PsRemoveLoadImageNotifyRoutine(MpLoadImageNotifyRoutine);
            MpRemoveProcessNotifyRoutine();
            MpFreeCommPorts();
            MpFgAuditShutdown();
            MpTearDownFltMgr();
            if (enabled_2)
            {
                MpSeqDetectCtxShutdown();
            }
            MpDlpShutdown();
            MpHashLibRelease();
            MpCleanupDriverInfo();
            MpFgCleanup();
            MpRegShutdown();
            MpAsyncScanShutdown();
            MpAsyncShutdown();
            MpTxfCleanup();
            MpPowerStatusUninitialize(*(int64_t *)(&MpData[0x4cc]));
            *(uint64_t *)(&MpData[0x4cc]) = 0;
            MpShutdownProcessExclusions();
            MpDeleteBootSectorCache();
            MpShutdownThreadTable();
            MpShutdownProcessTable();
            MpCleanupDocOpenRules();
            MpShutdownBoostManager();
            MpFsHardeningRelease();
            MpCopyCacheCleanup();
            MpFreeGlobals();
            MpTraceLogRelease();
            ExFreePoolWithTag(MpData, 0x6466504d);
        }
        McGenEventUnregister_EtwUnregister();
        WppCleanupKm();
    }
    return;
}

void MpGetSystemRoutines(void)
{
    bool enabled;
    int64_t data;
    uint64_t string = 0;
    uint64_t value = 0;
    if (*(uint32_t *)(MpData + 0x360) & 4)
    {
        RtlInitUnicodeString(&string, L"FsRtlQueryCachedVdl");
        data = MpData;
        *(uint64_t *)(data + 0x70) = MmGetSystemRoutineAddress(&string);
        if (!(*(int64_t *)(MpData + 0x70)) && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x38, WD_SYMBOL_ADDRESS(WPP_b960013237753183ac7a6d55d666ce86_Traceguids), (uint64_t)KeGetCurrentThread());
        }
        RtlInitUnicodeString(&string, L"IoBoostThreadIo");
        data = MpData;
        *(uint64_t *)(data + 0x78) = MmGetSystemRoutineAddress(&string);
        if (!(*(int64_t *)(MpData + 0x78)) && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x39, WD_SYMBOL_ADDRESS(WPP_b960013237753183ac7a6d55d666ce86_Traceguids), (uint64_t)KeGetCurrentThread());
        }
        RtlInitUnicodeString(&string, L"KeSetActualBasePriorityThread");
        data = MpData;
        *(uint64_t *)(data + 0x80) = MmGetSystemRoutineAddress(&string);
        if (!(*(int64_t *)(MpData + 0x80)) && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x3a, WD_SYMBOL_ADDRESS(WPP_b960013237753183ac7a6d55d666ce86_Traceguids), (uint64_t)KeGetCurrentThread());
        }
        RtlInitUnicodeString(&string, L"FsRtlSetKernelEaFile");
        data = MpData;
        *(uint64_t *)(data + 0x98) = MmGetSystemRoutineAddress(&string);
        if (!(*(int64_t *)(MpData + 0x98)) && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x3b, WD_SYMBOL_ADDRESS(WPP_b960013237753183ac7a6d55d666ce86_Traceguids), (uint64_t)KeGetCurrentThread());
        }
        RtlInitUnicodeString(&string, L"FsRtlQueryKernelEaFile");
        data = MpData;
        *(uint64_t *)(data + 0xa0) = MmGetSystemRoutineAddress(&string);
        if (!(*(int64_t *)(MpData + 0xa0)) && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x3c, WD_SYMBOL_ADDRESS(WPP_b960013237753183ac7a6d55d666ce86_Traceguids), (uint64_t)KeGetCurrentThread());
        }
        RtlInitUnicodeString(&string, L"FsRtlKernelFsControlFile");
        data = MpData;
        *(uint64_t *)(data + 0xa8) = MmGetSystemRoutineAddress(&string);
        if (!(*(int64_t *)(MpData + 0xa8)) && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x3d, WD_SYMBOL_ADDRESS(WPP_b960013237753183ac7a6d55d666ce86_Traceguids), (uint64_t)KeGetCurrentThread());
        }
    }
    if (*(uint32_t *)(MpData + 0x360) & 8)
    {
        RtlInitUnicodeString(&string, L"SeGetCachedSigningLevel");
        data = MpData;
        *(uint64_t *)(data + 0x88) = MmGetSystemRoutineAddress(&string);
        if (!(*(int64_t *)(MpData + 0x88)) && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x3e, WD_SYMBOL_ADDRESS(WPP_b960013237753183ac7a6d55d666ce86_Traceguids), (uint64_t)KeGetCurrentThread());
        }
        RtlInitUnicodeString(&string, L"IoGetSiloParameters");
        data = MpData;
        *(uint64_t *)(data + 0xc0) = MmGetSystemRoutineAddress(&string);
    }
    if (*(uint32_t *)(MpData + 0x360) & 0x40)
    {
        RtlInitUnicodeString(&string, L"ZwSetCachedSigningLevel");
        data = MpData;
        *(uint64_t *)(data + 0x90) = MmGetSystemRoutineAddress(&string);
        if (!(*(int64_t *)(MpData + 0x90)) && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x3f, WD_SYMBOL_ADDRESS(WPP_b960013237753183ac7a6d55d666ce86_Traceguids), (uint64_t)KeGetCurrentThread());
        }
    }
    RtlInitUnicodeString(&string, L"PsSetCreateThreadNotifyRoutineEx");
    data = MpData;
    *(uint64_t *)(data + 0x28) = MmGetSystemRoutineAddress(&string);
    RtlInitUnicodeString(&string, L"PsSetCreateProcessNotifyRoutineEx");
    data = MpData;
    *(uint64_t *)(data + 0x18) = MmGetSystemRoutineAddress(&string);
    data = MpData;
    *(uint64_t *)(data + 0x40) = FltGetRoutineAddress("FltRegisterForDataScan");
    data = MpData;
    *(uint64_t *)(data + 0x48) = FltGetRoutineAddress("FltCreateSectionForDataScan");
    data = MpData;
    *(uint64_t *)(data + 0x50) = FltGetRoutineAddress("FltCloseSectionForDataScan");
    if ((char)(*(uint32_t *)(MpData + 0x360)) <= '\xff')
    {
        RtlInitUnicodeString(&string, L"PsSetCreateProcessNotifyRoutineEx2");
        data = MpData;
        *(uint64_t *)(data + 0x20) = MmGetSystemRoutineAddress(&string);
        if (!(*(int64_t *)(MpData + 0x20)) && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x40, WD_SYMBOL_ADDRESS(WPP_b960013237753183ac7a6d55d666ce86_Traceguids));
        }
    }
    data = MpData;
    if (*(uint32_t *)(MpData + 0x360) & 0x400)
    {
        *(uint64_t *)(data + 0x58) = FltGetRoutineAddress("FltRequestFileInfoOnCreateCompletion");
        if (!(*(int64_t *)(MpData + 0x58)) && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x41, WD_SYMBOL_ADDRESS(WPP_b960013237753183ac7a6d55d666ce86_Traceguids));
        }
        data = MpData;
        *(uint64_t *)(data + 0x60) = FltGetRoutineAddress("FltRetrieveFileInfoOnCreateCompletion");
        if (!(*(int64_t *)(MpData + 0x60)) && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x42, WD_SYMBOL_ADDRESS(WPP_b960013237753183ac7a6d55d666ce86_Traceguids));
        }
    }
    if (*(uint32_t *)(MpData + 0x360) & 0x40)
    {
        RtlInitUnicodeString(&string, L"PsIsCurrentThreadInServerSilo");
        data = MpData;
        *(uint64_t *)(data + 200) = MmGetSystemRoutineAddress(&string);
        if (!(*(int64_t *)(MpData + 200)) && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x43, WD_SYMBOL_ADDRESS(WPP_b960013237753183ac7a6d55d666ce86_Traceguids), (uint64_t)KeGetCurrentThread());
        }
    }
    if (!(*(uint32_t *)(MpData + 0x360) & 0x800))
    {
        return;
    }
    enabled = 0;
    RtlInitUnicodeString(&string, L"IoCheckFileObjectOpenedAsCopySource");
    data = MpData;
    *(uint64_t *)(data + 0xb0) = MmGetSystemRoutineAddress(&string);
    if (!(*(int64_t *)(MpData + 0xb0)))
    {
        enabled = 1;
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x44, WD_SYMBOL_ADDRESS(WPP_b960013237753183ac7a6d55d666ce86_Traceguids), (uint64_t)KeGetCurrentThread());
        }
    }
    RtlInitUnicodeString(&string, L"IoCheckFileObjectOpenedAsCopyDestination");
    data = MpData;
    *(uint64_t *)(data + 0xb8) = MmGetSystemRoutineAddress(&string);
    if (*(int64_t *)(MpData + 0xb8))
    {
        if (enabled)
        {
            goto block_1;
        }
    }
    else
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x45, WD_SYMBOL_ADDRESS(WPP_b960013237753183ac7a6d55d666ce86_Traceguids), (uint64_t)KeGetCurrentThread());
        }
        block_1:
        *(uint64_t *)(MpData + 0xb0) = 0;

        *(uint64_t *)(MpData + 0xb8) = 0;
    }
    data = MpData;
    *(uint64_t *)(data + 0x68) = FltGetRoutineAddress("FltGetCopyInformationFromCallbackData");
    if (!(*(int64_t *)(MpData + 0x68)) && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
    {
        WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x46, WD_SYMBOL_ADDRESS(WPP_b960013237753183ac7a6d55d666ce86_Traceguids), (uint64_t)KeGetCurrentThread());
    }
    return;
}

int32_t MpInitializeFltMgr(WD_LAYOUT_124 *input, uint64_t input_2)
{
    int32_t status;
    int32_t values[2];
    values[0] = 0;
    if (*(uint32_t *)(MpData + 0x360) & 0x100)
    {
        if (!MpQueryRegDword(input, input_2, values) && values[0] == 1)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
            {
                WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x54, WD_SYMBOL_ADDRESS(WPP_b960013237753183ac7a6d55d666ce86_Traceguids));
            }
            WdRegistrationdataStorage3 &= 0xfffffff7;
        }
        WdRegistrationdataStorage = WD_SYMBOL_ADDRESS(CallbacksRs3);
    }
    if (WdDataStorage20 && (WdRegistrationdataStorage2 = 0, WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control)) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
    {
        WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x55, WD_SYMBOL_ADDRESS(WPP_b960013237753183ac7a6d55d666ce86_Traceguids));
    }
    status = FltRegisterFilter(input, WD_SYMBOL_ADDRESS(FilterRegistration), MpData + 0x10);
    if (status <= -1)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x56, WD_SYMBOL_ADDRESS(WPP_b960013237753183ac7a6d55d666ce86_Traceguids), (uint64_t)KeGetCurrentThread(), status);
        }
        if (*(int64_t *)(MpData + 0x10))
        {
            FltUnregisterFilter();
            *(uint64_t *)(MpData + 0x10) = 0;
        }
        return status;
    }
    *(uint64_t *)(MpData + 0xf50) = input->field_0x68;
    *(char *)(MpData + 0xf5c) = 0;
    *(uint32_t *)(MpData + 0x780) = 0x24;
    FltInitExtraCreateParameterLookasideList(*(uint64_t *)(MpData + 0x10), MpData + 0x7c0, 0, *(uint32_t *)(MpData + 0x780), 0x3162504d);
    return 0;
}

void MpInitializeGlobals(WD_LAYOUT_124 *driver_object, WD_UNICODE_STRING_VALUE *registry_path)
{
    uint32_t *data_pointer;
    int64_t *destination_string;
    uint32_t value;
    char buffer_2[278];
    uint32_t value_2;
    uint32_t values[2];
    char byte_value;
    uint16_t *wide_text;
    uint16_t value_4;
    bool enabled;
    uint8_t byte_value_2;
    int32_t value_5;
    uint32_t value_6;
    int64_t data;
    uint64_t value_7;
    memmove((uint64_t *)(MpData + 0xfe0), &WdFckernelimplStorage2, 0x6c);
    *(WD_LAYOUT_124 **)(MpData + 8) = driver_object;
    *(uint64_t *)(MpData + 0x358) = 0;
    *(uint32_t *)(MpData + 0x364) = 0;
    *(uint32_t *)(MpData + 0x988) = 0;
    *(char *)(MpData + 0x990) = 0;
    *(uint64_t *)(MpData + 0xe38) = 0;
    enabled = 1;
    *(char *)(MpData + 0xe30) = 1;
    *(uint32_t *)(MpData + 0xfdc) = 0;
    ExInitializeResourceLite(MpData + 0x2f0);
    data = MpData + 0x228;
    *(int64_t *)(MpData + 0x230) = data;
    *(int64_t *)data = data;
    data = MpData + 0x238;
    *(int64_t *)(MpData + 0x240) = data;
    *(int64_t *)data = data;
    ExInitializeResourceLite(MpData + 0xbe8);
    ExInitializeResourceLite(MpData + 0xc50);
    data = MpData + 0xbd8;
    *(int64_t *)(MpData + 0xbe0) = data;
    *(int64_t *)data = data;
    KeInitializeTimer(MpData + 0x2b0);
    KeInitializeDpc(MpData + 0x270, MpReactivateDpc, 2);
    byte_value_2 = MpVerifyWindowsVersion(6, 0, 1);
    *(uint32_t *)(MpData + 0x360) = ((uint32_t)byte_value_2 ^ *(uint32_t *)(MpData + 0x360)) & 1 ^ *(uint32_t *)(MpData + 0x360);
    *(uint32_t *)(MpData + 0x360) = ((uint32_t)((uint8_t)MpVerifyWindowsVersion(6, 1, 0)) * 2 ^ *(uint32_t *)(MpData + 0x360)) & 2 ^ *(uint32_t *)(MpData + 0x360);
    *(uint32_t *)(MpData + 0x360) = ((uint32_t)((uint8_t)MpVerifyWindowsVersion(6, 2, 0)) << 2 ^ *(uint32_t *)(MpData + 0x360)) & 4 ^ *(uint32_t *)(MpData + 0x360);
    *(uint32_t *)(MpData + 0x360) = ((uint32_t)((uint8_t)MpVerifyWindowsVersion(6, 3, 0)) << 3 ^ *(uint32_t *)(MpData + 0x360)) & 8 ^ *(uint32_t *)(MpData + 0x360);
    *(uint32_t *)(MpData + 0x360) = ((uint32_t)((uint8_t)MpVerifyWindowsVersion(10, 0, 0)) << 4 ^ *(uint32_t *)(MpData + 0x360)) & 0x10 ^ *(uint32_t *)(MpData + 0x360);
    *(uint32_t *)(MpData + 0x360) = ((uint32_t)((uint8_t)MpVerifyWindowsVersion(10, 0, 0)) << 5 ^ *(uint32_t *)(MpData + 0x360)) & 0x20 ^ *(uint32_t *)(MpData + 0x360);
    *(uint32_t *)(MpData + 0x360) = ((uint32_t)((uint8_t)MpVerifyWindowsVersion(10, 0, 0)) << 6 ^ *(uint32_t *)(MpData + 0x360)) & 0x40 ^ *(uint32_t *)(MpData + 0x360);
    *(uint32_t *)(MpData + 0x360) = ((uint32_t)((uint8_t)MpVerifyWindowsVersion(10, 0, 0)) << 7 ^ *(uint32_t *)(MpData + 0x360)) & 0x80 ^ *(uint32_t *)(MpData + 0x360);
    *(uint32_t *)(MpData + 0x360) = ((uint32_t)((uint8_t)MpVerifyWindowsVersion(10, 0, 0)) << 8 ^ *(uint32_t *)(MpData + 0x360)) & 0x100 ^ *(uint32_t *)(MpData + 0x360);
    *(uint32_t *)(MpData + 0x360) = ((uint32_t)((uint8_t)MpVerifyWindowsVersion(10, 0, 0)) << 9 ^ *(uint32_t *)(MpData + 0x360)) & 0x200 ^ *(uint32_t *)(MpData + 0x360);
    *(uint32_t *)(MpData + 0x360) = ((uint32_t)((uint8_t)MpVerifyWindowsVersion(10, 0, 0)) << 10 ^ *(uint32_t *)(MpData + 0x360)) & 0x400 ^ *(uint32_t *)(MpData + 0x360);
    *(uint32_t *)(MpData + 0x360) = ((uint32_t)((uint8_t)MpVerifyWindowsVersion(10, 0, 0)) << 0xb ^ *(uint32_t *)(MpData + 0x360)) & 0x800 ^ *(uint32_t *)(MpData + 0x360);
    *(uint32_t *)(MpData + 0x360) = ((uint32_t)((uint8_t)MpVerifyWindowsVersion(10, 0, 0)) << 0xc ^ *(uint32_t *)(MpData + 0x360)) & 0x1000 ^ *(uint32_t *)(MpData + 0x360);
    *(uint32_t *)(MpData + 0x360) = ((uint32_t)((uint8_t)MpVerifyWindowsVersion(10, 0, 0)) << 0xd ^ *(uint32_t *)(MpData + 0x360)) & 0x2000 ^ *(uint32_t *)(MpData + 0x360);
    value_2 = 0x11c;
    memset(buffer_2, 0, (char *)0x118);
    value_5 = RtlGetVersion(&value_2);
    if (0 <= value_5)
    {
        value_6 = 0;
        if (byte_value != '\x01')
        {
            if (((uint8_t)(*(uint32_t *)(MpData + 0x360)) & 6) == 2)
            {
                value_6 = 0x10000;
            }
        }
        else
        {
            enabled = 0;
        }
        *(uint32_t *)(MpData + 0x360) = *(uint32_t *)(MpData + 0x360) & 0xfffeffff | value_6;
        if (!enabled || (value_6 = 0x4000, !(*(uint32_t *)(MpData + 0x360) & 8)))
        {
            value_6 = 0;
        }
        *(uint32_t *)(MpData + 0x360) = *(uint32_t *)(MpData + 0x360) & 0xffffbfff | value_6;
        if (!enabled || (value_6 = 0x8000, ((uint8_t)(*(uint32_t *)(MpData + 0x360)) & 0xc0) != 0x40))
        {
            value_6 = 0;
        }
        *(uint32_t *)(MpData + 0x360) = *(uint32_t *)(MpData + 0x360) & 0xffff7fff | value_6;
        MpInitializeLookasideLists();
        data = MpData;
        data_pointer = (uint32_t *)(MpData + 0x254);
        *(char *)(data + 0x250) = MpIsDriverVerified(data_pointer);
        if (*(char *)(MpData + 0x250) && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
        {
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x48, WD_SYMBOL_ADDRESS(WPP_b960013237753183ac7a6d55d666ce86_Traceguids), *(uint32_t *)(MpData + 0x254));
        }
        data = MpData;
        value_6 = (uint32_t)((uint64_t)WdSharedTickCount >> 0x20);
        value = (uint32_t)WdSharedTickCount;
        values[0] = (uint32_t)((uint64_t)KeGetCurrentThread()) ^ value_6 ^ value;
        *(uint32_t *)(data + 0xe28) = RtlRandomEx(values);
        data = MpData;
        values[0] = value ^ (uint32_t)MpData ^ value_6;
        *(uint32_t *)(data + 0xe2c) = RtlRandomEx(values);
        value_5 = RtlStringCbPrintfA((char *)(MpData + 0xe40), 0x100, "$MPEA_%I64X", *(uint64_t *)(MpData + 0xe28));
        if (0 <= value_5)
        {
            value_5 = RtlStringCbLengthA((char *)(MpData + 0xe40));
            if (value_5 <= -1)
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x4a, WD_SYMBOL_ADDRESS(WPP_b960013237753183ac7a6d55d666ce86_Traceguids), (uint64_t)KeGetCurrentThread(), value_5);
                }
                return;
            }
            *(char *)(MpData + 0xf40) = 0;
            value_5 = MpGetSystemRoutines();
            if (0 <= value_5)
            {
                value_5 = MpCreateMpServiceSID((int64_t *)(MpData + 0x948));
                if (0 <= value_5)
                {
                    value_5 = MpCreateNriServiceSID((int64_t *)(MpData + 0x950));
                    if (0 <= value_5)
                    {
                        value_5 = MpCreateMpDlpServiceSID((int64_t *)(MpData + 0x958));
                        if (0 <= value_5)
                        {
                            value_5 = MpCreateTrustedInstallerSID((int64_t *)(MpData + 0x960));
                            if (0 <= value_5)
                            {
                                value_5 = MpCreateSecurityHealthServiceSID((uint64_t *)(MpData + 0x968));
                                if (0 <= value_5)
                                {
                                    value_5 = MpCreateCoreServiceSID((int64_t *)(MpData + 0x970));
                                    if (0 <= value_5)
                                    {
                                        value_5 = MpCreateCryptServiceSID((int64_t *)(MpData + 0x978));
                                        data = MpData;
                                        if (0 <= value_5)
                                        {
                                            value_4 = registry_path->Length;
                                            *(int64_t **)(data + 0x248) = MpAllocatePoolWithTag(1, (char *)(value_4 + 0x18ULL), 0x6772504d);
                                            if (!(*(uint64_t **)(MpData + 0x248)))
                                            {
                                                return;
                                            }
                                            memmove(*(uint64_t **)(MpData + 0x248), (uint64_t *)registry_path->Buffer, registry_path->Length);
                                            value_4 = registry_path->Length;
                                            data = *(int64_t *)(MpData + 0x248);
                                            wide_text = (uint16_t *)(data + (uint64_t)value_4);
                                            *(uint64_t *)wide_text = WdLoadField(&s_14001b110, 0, 8);
                                            *(uint64_t *)(&wide_text[4]) = WdLoadField(&s_14001b110, 8, 8);
                                            *(uint64_t *)(data + 0x10 + (uint64_t)value_4) = WdLoadField(&s_14001b110, 16, 8);
                                            destination_string = (int64_t *)(MpData + 0xfb0);
                                            if (0 <= (int32_t)MpDuplicateString(registry_path, destination_string))
                                            {
                                                WdAtomicExchange32((volatile int32_t *)((uint32_t *)(MpData + 0xe1c)), 1);
                                                WdAtomicExchange64((volatile int64_t *)((uint64_t *)(MpData + 0xe20)), 100000000);
                                                WdAtomicExchange32((volatile int32_t *)((uint32_t *)(MpData + 0xf44)), 3);
                                                WdAtomicAnd32((volatile int32_t *)((uint32_t *)(MpData + 0x364)), 0xffffffbf);
                                                WdAtomicAnd32((volatile int32_t *)((uint32_t *)(MpData + 0x364)), 0xfffffdff);
                                                WdAtomicAnd32((volatile int32_t *)((uint32_t *)(MpData + 0x364)), 0xfff7ffff);
                                                WdAtomicAnd32((volatile int32_t *)((uint32_t *)(MpData + 0x364)), 0xfffff7ff);
                                                WdAtomicAnd32((volatile int32_t *)((uint32_t *)(MpData + 0x364)), 0xffffefff);
                                                *(uint64_t *)(MpData + 0xfc0) = WdSharedTickCount;
                                                *(char *)(MpData + 0xfd0) = 0;
                                                *(char *)(MpData + 0xfd1) = 0;
                                                *(char *)(MpData + 0xfd8) = 0;
                                                return;
                                            }
                                            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                                            {
                                                return;
                                            }
                                            value_7 = 0x53;
                                            value_5 = -0x3fffff66;
                                        }
                                        else
                                        {
                                            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                                            {
                                                return;
                                            }
                                            value_7 = 0x52;
                                        }
                                    }
                                    else
                                    {
                                        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                                        {
                                            return;
                                        }
                                        value_7 = 0x51;
                                    }
                                }
                                else
                                {
                                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                                    {
                                        return;
                                    }
                                    value_7 = 0x50;
                                }
                            }
                            else
                            {
                                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                                {
                                    return;
                                }
                                value_7 = 0x4f;
                            }
                        }
                        else
                        {
                            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                            {
                                return;
                            }
                            value_7 = 0x4e;
                        }
                    }
                    else
                    {
                        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                        {
                            return;
                        }
                        value_7 = 0x4d;
                    }
                }
                else
                {
                    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                    {
                        return;
                    }
                    value_7 = 0x4c;
                }
            }
            else
            {
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    return;
                }
                value_7 = 0x4b;
            }
        }
        else
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return;
            }
            value_7 = 0x49;
        }
    }
    else
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return;
        }
        value_7 = 0x47;
    }
    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_7, WD_SYMBOL_ADDRESS(WPP_b960013237753183ac7a6d55d666ce86_Traceguids), (uint64_t)KeGetCurrentThread(), value_5);
    return;
}

void MpInitializeLookasideLists(void)
{
    ExInitializeNPagedLookasideList(MpData + 0x580, 0, 0, ExDefaultNonPagedPoolType, 0x90, 0x7772504d, 0);
    ExInitializeNPagedLookasideList(MpData + 0x480, 0, 0, ExDefaultNonPagedPoolType, 0x30, 0x7877504d, 0);
    ExInitializePagedLookasideList(MpData + 0x400, 0, 0, 0, 0x18, 0x7869504d, 0);
    ExInitializePagedLookasideList(MpData + 0x380, 0, 0, 0, 0xf8, 0x7443504d, 0);
    ExInitializePagedLookasideList(MpData + 0x600, 0, 0, 0, 0x800, 0x6669504d, 0);
    ExInitializePagedLookasideList(MpData + 0x680, 0, 0, 0, 0x80, 0x3161504d, 0);
    ExInitializePagedLookasideList(MpData + 0x700, 0, 0, 0, 0x210, 0x3261504d, 0);
    ExInitializePagedLookasideList(MpData + 0x840, 0, 0, 0, 0x28, 0x6363504d, 0);
    ExInitializePagedLookasideList(MpData + 0x500, 0, 0, 0, 0x28, 0x7869504d, 0);
    ExInitializePagedLookasideList(MpData + 0x8c0, 0, 0, 0, 0x78, 0x7273504d, 0);
    ExInitializePagedLookasideList(MpData + 0x1080, 0, 0, 0, 0x60, 0x6f63504d, 0);
    ExInitializePagedLookasideList(MpData + 0x1100, 0, 0, 0, 0xdc, 0x6972504d, 0);
    return;
}

void MpIsDriverVerified(uint32_t *input)
{
    int32_t status;
    uint64_t *data_pointer = NULL;
    uint64_t value = 0;
    uint64_t value_2 = 0;
    uint64_t value_3;
    uint64_t value_4;
    int64_t allocation;
    uint64_t string;
    uint64_t object_attributes = 0;
    int64_t key_handle;
    uint32_t result_length[2];
    char byte_value;
    uint64_t value_6 = 0;
    value_3 &= 0xffffffff00000000;
    string = 0;
    value_4 = 0;
    key_handle = 0;
    allocation = 0;
    result_length[0] = 0;
    *input = 0;
    if (MmIsDriverVerifyingByAddress(MpIsDriverVerified))
    {
        byte_value = 1;
        RtlInitUnicodeString(&string, L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\Session Manager\\Memory Management");
        object_attributes = ((uint64_t)WdLoadField(&object_attributes, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)0x30 & 0xffffffffULL;
        value_6 = 0;
        value = ((uint64_t)WdLoadField(&value, 4, 4) & 0xffffffffULL) << 32 | (uint64_t)0x240 & 0xffffffffULL;
        data_pointer = &string;
        value_2 = 0;
        value_3 = 0;
        if (0 <= (int32_t)ZwOpenKey(&key_handle, 0x20019, &object_attributes) && (allocation = (int64_t)MpAllocatePoolWithTag(1, (char *)0x112, 0x5672504d), allocation))
        {
            RtlInitUnicodeString(&string, L"VerifyDriverLevel");
            status = ZwQueryValueKey(key_handle, &string, 2, allocation, 0x112, result_length, byte_value);
            if (0 <= status && (*(int32_t *)(allocation + 4) == 4 && *(int32_t *)(allocation + 8) == 4))
            {
                *input = *(uint32_t *)(allocation + 0xc);
            }
        }
    }
    if (allocation)
    {
        ExFreePoolWithTag(allocation, 0x5672504d);
    }
    if (key_handle)
    {
        ZwClose();
    }
    return;
}

void MpLoadRegistryParameters(void)
{
    uint64_t *data_pointer;
    uint64_t string;
    uint64_t *data_pointer_2;
    int64_t value;
    int64_t value_2;
    uint32_t *data_pointer_3;
    int64_t value_3;
    uint64_t value_4;
    uint64_t value_5;
    uint64_t value_6;
    uint32_t *data_pointer_4;
    int32_t provider;
    uint32_t value_8;
    int64_t allocation;
    uint32_t event_id;
    uint64_t *data_pointer_5;
    uint64_t event_id_2;
    event_id = (uint32_t)((uint64_t)value_4 >> 0x20);
    allocation = (int64_t)MpAllocatePoolWithTag(ExDefaultNonPagedPoolType, (char *)0x5b0, 0x6d6d504d);
    if (!allocation)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2a, WD_SYMBOL_ADDRESS(WPP_b960013237753183ac7a6d55d666ce86_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)event_id & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INSUFFICIENT_RESOURCES & 0xffffffffULL);
        }
        return;
    }
    value_3 = 0x19;
    data_pointer_3 = &WdInitStorage5;
    data_pointer_5 = &WdInitStorage4;
    value = WD_INIT_UNRECOVERED_ADDRESS3;
    value_2 = 0x19;
    data_pointer_2 = (uint64_t *)(allocation + 0x10);
    do
    {
        *(uint32_t *)(&data_pointer_2[-1]) = 0x80000020;
        *data_pointer_2 = data_pointer_5[-1];
        data_pointer = &data_pointer_2[7];
        event_id_2 = *data_pointer_5;
        data_pointer_5 = &data_pointer_5[3];
        data_pointer_2[3] = value;
        value += 0x18;
        data_pointer_2[1] = event_id_2;
        *(uint32_t *)(&data_pointer_2[2]) = 4;
        *(uint32_t *)(&data_pointer_2[4]) = 4;
        value_2 -= 1;
        data_pointer_2 = data_pointer;
    }
    while (value_2);
    string = 0;
    value_6 = 0;
    event_id_2 = *(uint64_t *)(MpData + 0x248);
    RtlInitUnicodeString(&string, L"RtlQueryRegistryValuesEx");
    MmGetSystemRoutineAddress(&string);
    value_5 = 0;
    provider = (*__guard_dispatch_icall_fptr)(0x80000000, event_id_2, allocation, 0, 0);
    if (provider != -0x3fffffcc)
    {
        if (0 <= provider)
        {
            goto block_1;
        }
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2c, WD_SYMBOL_ADDRESS(WPP_b960013237753183ac7a6d55d666ce86_Traceguids), (uint64_t)KeGetCurrentThread(), (uint64_t)value_5 & 0xffffffff00000000 | (uint64_t)provider & 0xffffffff);
        }
    }
    else
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2b, WD_SYMBOL_ADDRESS(WPP_b960013237753183ac7a6d55d666ce86_Traceguids), (uint64_t)KeGetCurrentThread());
        }
        data_pointer_5 = (uint64_t *)(allocation + 0x18);
        value = 0x19;
        do
        {
            data_pointer_4 = (uint32_t *)(*data_pointer_5);
            data_pointer_5 = &data_pointer_5[7];
            event_id = *data_pointer_3;
            data_pointer_3 = &data_pointer_3[6];
            *data_pointer_4 = event_id;
            value -= 1;
        }
        while (value);
        block_1:
        if (0x201 <= WdDataStorage10)
        {
            WdDataStorage10 = 0x200;
        }

        value_8 = WdDataStorage11;
        if (WdDataStorage11 <= 0xf)
        {
            value_8 = 0x10;
            WdDataStorage11 = 0x10;
        }
        if (0x1001 <= value_8)
        {
            WdDataStorage11 = 0x1000;
        }
        value_8 = 1000;
        if ((uint32_t)(WdDataStorage - 1U) <= 0x3e6)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 0x10)
            {
                value_5 = (uint64_t)value_5 & 0xffffffff00000000 | (uint64_t)1000 & 0xffffffff;
                WPP_SF_DD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2d, WD_SYMBOL_ADDRESS(WPP_b960013237753183ac7a6d55d666ce86_Traceguids), WdDataStorage, value_5);
            }
            WdDataStorage = 1000;
        }
        if ((uint32_t)(WdDataStorage2 - 1U) <= 0x3e6 && (WdDataStorage2 = 1000, WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control)) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 0x10)
        {
            value_5 = (uint64_t)value_5 & 0xffffffff00000000 | (uint64_t)1000 & 0xffffffff;
            WPP_SF_DD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2e, WD_SYMBOL_ADDRESS(WPP_b960013237753183ac7a6d55d666ce86_Traceguids), 1000, value_5);
        }
        if ((uint32_t)(WdDataStorage3 - 1U) <= 0x62)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 0x10)
            {
                value_5 = (uint64_t)value_5 & 0xffffffff00000000 | (uint64_t)100 & 0xffffffff;
                WPP_SF_DD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2f, WD_SYMBOL_ADDRESS(WPP_b960013237753183ac7a6d55d666ce86_Traceguids), WdDataStorage3, value_5);
            }
            WdDataStorage3 = 100;
        }
        if (1000 <= WdDataStorage18)
        {
            value_8 = 30000;
            if (0x7531 <= WdDataStorage18)
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 0x10)
                {
                    event_id_2 = 0x31;
                    value_5 = (uint64_t)value_5 & 0xffffffff00000000 | (uint64_t)value_8 & 0xffffffff;
                    WPP_SF_DD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id_2, WD_SYMBOL_ADDRESS(WPP_b960013237753183ac7a6d55d666ce86_Traceguids), WdDataStorage18, value_5);
                }
                WdDataStorage18 = value_8;
            }
        }
        else
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 0x10)
            {
                event_id_2 = 0x30;
                value_5 = (uint64_t)value_5 & 0xffffffff00000000 | (uint64_t)value_8 & 0xffffffff;
                WPP_SF_DD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id_2, WD_SYMBOL_ADDRESS(WPP_b960013237753183ac7a6d55d666ce86_Traceguids), WdDataStorage18, value_5);
            }
            WdDataStorage18 = value_8;
        }
        value_8 = 6;
        if (6 <= WdDataStorage19)
        {
            value_8 = 0x28;
            if (0x29 <= WdDataStorage19)
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 0x10)
                {
                    event_id = 0x33;
                    value_5 = (uint64_t)value_5 & 0xffffffff00000000 | (uint64_t)value_8 & 0xffffffff;
                    WPP_SF_DD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_b960013237753183ac7a6d55d666ce86_Traceguids), WdDataStorage19, value_5);
                }
                WdDataStorage19 = value_8;
            }
        }
        else
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 0x10)
            {
                event_id = 0x32;
                value_5 = (uint64_t)value_5 & 0xffffffff00000000 | (uint64_t)value_8 & 0xffffffff;
                WPP_SF_DD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_b960013237753183ac7a6d55d666ce86_Traceguids), WdDataStorage19, value_5);
            }
            WdDataStorage19 = value_8;
        }
        if (*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 0x10)
        {
            data_pointer_2 = &WdInitStorage3;
            data_pointer_5 = (uint64_t *)(allocation + 0x18);
            do
            {
                provider = *(int32_t *)(*data_pointer_5);
                if (provider != *(int32_t *)(&data_pointer_2[2]))
                {
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 0x10)
                    {
                        event_id_2 = 0x34;
                        block_2:
                        value_5 = (uint64_t)value_5 & 0xffffffff00000000 | (uint64_t)provider & 0xffffffff;

                        WPP_SF_Sd(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id_2, provider, (int16_t *)(*data_pointer_2), value_5);
                    }
                }
                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 0x10)
                {
                    event_id_2 = 0x35;
                    goto block_2;
                }
                data_pointer_5 = &data_pointer_5[7];
                data_pointer_2 = &data_pointer_2[3];
                value_3 -= 1;
            }
            while (value_3);
        }
    }
    ExFreePoolWithTag(allocation, 0x6d6d504d);
    return;
}

void MpSetDefaultConfigs(void)
{
    uint32_t value;
    int64_t value_2;
    *(uint32_t *)(MpData + 0x980) = WdDataStorage;
    *(uint32_t *)(MpData + 0x984) = WdDataStorage2;
    value_2 = 0;
    if (MpConfig)
    {
        value = KeQueryTimeIncrement();
        value_2 = (uint64_t)MpConfig * 10000 / value + 1;
    }
    *(int64_t *)(MpData + 600) = value_2;
    *(uint32_t *)(MpData + 0xb64) = WdDataStorage15;
    *(uint32_t *)(MpData + 0xb88) = WdDataStorage16;
    *(uint32_t *)(MpData + 0xb40) = WdDataStorage17;
    return;
}

void DriverEntry__finally_0(uint64_t input, void *input_2)
{
    if (0 <= ((int32_t *)input_2)[0x10])
    {
        return;
    }
    if (MpData)
    {
        MpTraceLogDriverEntryFailure(((int32_t *)input_2)[0x10]);
        MpRemoveImageVerificationCallback();
        MpUnregisterRegCallback();
        MpObShutdown();
        PsRemoveCreateThreadNotifyRoutine(MpCreateThreadNotifyRoutine);
        if (*(int64_t *)(MpData + 0x28))
        {
            PsRemoveCreateThreadNotifyRoutine(MpCreateThreadNotifyRoutineEx);
        }
        PsRemoveLoadImageNotifyRoutine(MpLoadImageNotifyRoutine);
        MpRemoveProcessNotifyRoutine();
        MpFreeCommPorts();
        MpFgAuditShutdown();
        MpTearDownFltMgr();
        if (((uint8_t *)input_2)[0x44] & 1)
        {
            MpSeqDetectCtxShutdown();
        }
        MpDlpShutdown();
        MpHashLibRelease();
        MpCleanupDriverInfo();
        MpFgCleanup();
        MpRegShutdown();
        MpAsyncScanShutdown();
        MpAsyncShutdown();
        MpTxfCleanup();
        MpPowerStatusUninitialize(*(int64_t *)(MpData + 0x998));
        *(uint64_t *)(MpData + 0x998) = 0;
        MpShutdownProcessExclusions();
        MpDeleteBootSectorCache();
        MpShutdownThreadTable();
        MpShutdownProcessTable();
        MpCleanupDocOpenRules();
        MpShutdownBoostManager();
        MpFsHardeningRelease();
        MpCopyCacheCleanup();
        MpFreeGlobals();
        MpTraceLogRelease();
        ExFreePoolWithTag(MpData, 0x6466504d);
    }
    McGenEventUnregister_EtwUnregister();
    WppCleanupKm();
    return;
}

void MpIsDriverVerified__finally_0(uint64_t input, void *input_2)
{
    if (((int64_t *)input_2)[7])
    {
        ExFreePoolWithTag(((int64_t *)input_2)[7], 0x5672504d);
    }
    if (!((int64_t *)input_2)[8])
    {
        return;
    }
    ZwClose();
    return;
}

#include "wdfilter.h"

void WPP_SF_Diiii(uint64_t input, uint64_t input_2, uint64_t input_3, uint32_t input_4)
{
    uint32_t values[2];
    values[0] = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_da25ed7ac0df3f6c27bc2dc1e0325faa_Traceguids), 0x1b, values, 4, &unrecovered_stack_argument_5, 8, &unrecovered_stack_argument_6, 8, &unrecovered_stack_argument_7, 8, &unrecovered_stack_argument_8, 8, 0);
    return;
}

void WPP_SF_iii(uint64_t input, uint64_t input_2, uint64_t input_3, uint64_t input_4)
{
    uint64_t value;
    value = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_da25ed7ac0df3f6c27bc2dc1e0325faa_Traceguids), 0x19, &value, 8, &unrecovered_stack_argument_5, 8, &unrecovered_stack_argument_6, 8, 0);
    return;
}

void MpAddECP(uint64_t input, uint64_t input_2, uint32_t buffer_size, int64_t input_3)
{
    int32_t trace_argument_1;
    uint64_t event_id;
    int64_t value = 0;
    uint64_t buffer_2 = 0;
    trace_argument_1 = FltGetEcpListFromCallbackData(*(uint64_t *)(MpData + 0x10), input, &value);
    if (0 <= trace_argument_1)
    {
        if (value)
        {
            trace_argument_1 = FltFindExtraCreateParameter(*(uint64_t *)(MpData + 0x10), value, input_2, 0, 0);
            if (trace_argument_1 != -0x3ffffddb)
            {
                return;
            }
            block_1:
            trace_argument_1 = FltAllocateExtraCreateParameterFromLookasideList(*(uint64_t *)(MpData + 0x10), input_2, buffer_size, 0, 0, MpData + 0x7c0, &buffer_2);

            if (0 <= trace_argument_1)
            {
                memset(buffer_2, 0, buffer_size);
                if (input_3)
                {
                    (*__guard_dispatch_icall_fptr)(buffer_2);
                }
                trace_argument_1 = FltInsertExtraCreateParameter(*(uint64_t *)(MpData + 0x10), value, buffer_2);
                if (trace_argument_1 < 0)
                {
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x15, WD_SYMBOL_ADDRESS(WPP_da25ed7ac0df3f6c27bc2dc1e0325faa_Traceguids), trace_argument_1);
                    }
                    FltFreeExtraCreateParameter(*(uint64_t *)(MpData + 0x10), buffer_2);
                }
                return;
            }
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                return;
            }
            event_id = 0x14;
        }
        else
        {
            trace_argument_1 = FltAllocateExtraCreateParameterList(*(uint64_t *)(MpData + 0x10), 0, &value);
            if (0 <= trace_argument_1)
            {
                trace_argument_1 = FltSetEcpListIntoCallbackData(*(uint64_t *)(MpData + 0x10), input, value);
                if (0 <= trace_argument_1)
                {
                    goto block_1;
                }
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    return;
                }
                event_id = 0x13;
            }
            else
            {
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    return;
                }
                event_id = 0x12;
            }
        }
    }
    else
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return;
        }
        event_id = 0x11;
    }
    WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_da25ed7ac0df3f6c27bc2dc1e0325faa_Traceguids), trace_argument_1);
    return;
}

void MpIsVolumeOnCsvDisk(uint64_t input)
{
    int32_t trace_argument_1;
    int64_t object;
    int64_t value_2;
    uint32_t event_id;
    uint64_t event_id_2;
    int64_t values[8];
    uint64_t value_3;
    uint64_t value_4;
    values[0] = 0;
    values[3] = 0;
    values[4] &= 0xffffffff00000000;
    values[7] = 0;
    value_3 = 0;
    value_4 = 0;
    values[1] = 0;
    values[2] = 0;
    values[5] = 0;
    values[6] = 0;
    if (!(*(uint32_t *)(MpData + 0x360) & 4))
    {
        return;
    }
    trace_argument_1 = FltGetDiskDeviceObject(input, values);
    if (0 <= trace_argument_1)
    {
        WdUnresolvedAtomicBegin();
        WdUnresolvedAtomicEnd();
        WdUnresolvedAtomicBegin();
        ObTotalReferences += 2;
        WdUnresolvedAtomicEnd();
        object = IoGetAttachedDeviceReference(values[0]);
        if (object)
        {
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            KeInitializeEvent(&values[5], 0, 0);
            value_2 = IoBuildDeviceIoControlRequest(0x70214, object, 0, 0, &values[1], 0x20, 0, &values[5], &value_3);
            if (value_2)
            {
                trace_argument_1 = IofCallDriver(object, value_2);
                if (trace_argument_1 == 0x103)
                {
                    KeWaitForSingleObject(&values[5], 0, 0, 0, 0);
                    trace_argument_1 = (int32_t)value_3;
                }
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xd, WD_SYMBOL_ADDRESS(WPP_da25ed7ac0df3f6c27bc2dc1e0325faa_Traceguids), trace_argument_1);
                }
                if (0 <= trace_argument_1)
                {
                    if (values[2] & 2U)
                    {
                        if (values[2] & 4U)
                        {
                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                            {
                                WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xe, WD_SYMBOL_ADDRESS(WPP_da25ed7ac0df3f6c27bc2dc1e0325faa_Traceguids));
                            }
                            goto block_1;
                        }
                        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4))
                        {
                            goto block_2;
                        }
                        event_id_2 = 0xf;
                    }
                    else
                    {
                        block_1:
                        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4))
                        {
                            goto block_2;
                        }

                        event_id_2 = 0x10;
                    }
                    WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id_2, WD_SYMBOL_ADDRESS(WPP_da25ed7ac0df3f6c27bc2dc1e0325faa_Traceguids));
                }
            }
            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xc, WD_SYMBOL_ADDRESS(WPP_da25ed7ac0df3f6c27bc2dc1e0325faa_Traceguids), WD_STATUS_INSUFFICIENT_RESOURCES);
            }
            block_2:
            KeEnterCriticalRegion();

            ObfDereferenceObject(object);
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
            KeLeaveCriticalRegion();
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            event_id = 0xb;
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_da25ed7ac0df3f6c27bc2dc1e0325faa_Traceguids), trace_argument_1);
        }
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        event_id = 10;
        WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_da25ed7ac0df3f6c27bc2dc1e0325faa_Traceguids), trace_argument_1);
    }
    if (values[0])
    {
        ObfDereferenceObject(values[0]);
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
    return;
}

void MpSaveStreamStateToCsvCache(void *input)
{
    char buffer_2[64];
    memset(buffer_2, 0, (char *)0x40);
    MpSaveStreamStateToFileStateGenericTable(input, 0x1b, -(*(int32_t *)(MpData + 0x103c) != 0) & 2, MpSaveCsvStreamStateToCacheEntry, 0x40, buffer_2);
    return;
}

void MpRedirectionEcpContextInitializer(uint16_t *input)
{
    *input = 0x24;
    return;
}

void MpFindAckedECP(uint64_t input, uint64_t input_2, uint64_t *input_3, uint32_t *input_4)
{
    uint64_t value;
    char byte_value;
    int32_t value_2;
    int64_t value_3 = 0;
    uint32_t values[2];
    uint64_t value_4 = 0;
    values[0] = 0;
    value = *(uint64_t *)(MpData + 0x10);
    if (0 <= (int32_t)FltGetEcpListFromCallbackData(value, input, &value_3) && value_3 && (value_2 = FltFindExtraCreateParameter(*(uint64_t *)(MpData + 0x10), value_3, input_2, &value_4, values), 0 <= value_2) && (byte_value = FltIsEcpAcknowledged(*(uint64_t *)(MpData + 0x10), value_4), byte_value))
    {
        *input_3 = value_4;
        *input_4 = values[0];
    }
    return;
}

uint64_t MpCopyCsvStreamStateFromCacheEntry(void *input, void *input_2)
{
    uint32_t value;
    uint64_t value_2;
    uint64_t value_3;
    if (*(int32_t *)(((int64_t *)input)[1] + 0x78) == 0x1b && 0x40 <= ((uint32_t *)input_2)[6] && (value_3 = 0, ((int64_t *)input_2)[4]) && (((int64_t *)input_2)[5] && ((int64_t *)input_2)[6]))
    {
        ((uint32_t *)input)[8] = ((uint32_t *)input_2)[0xe];
        value = *(uint32_t *)(((int64_t *)input)[1] + 0x90);
        ((uint32_t *)input)[9] = value;
        value_2 = ((uint64_t *)input_2)[5];
        ((uint64_t *)input)[0x1b] = ((uint64_t *)input_2)[4];
        ((uint64_t *)input)[0x1c] = value_2;
        ((uint64_t *)input)[0x1d] = ((uint64_t *)input_2)[6];
        return ((uint64_t)((uint64_t)((uint32_t)((uint32_t)value >> 8))) & 0xffffffffffffffULL) << 8 | (uint64_t)1 & 0xffULL;
    }
    return value_3 & 0xffffffffffffff00;
}

void MpReadCsvRevisionECP(uint64_t input, uint64_t *input_2)
{
    uint32_t values[2];
    int64_t value = 0;
    values[0] = 0;
    if ((int32_t)MpFindAckedECP(input, WD_SYMBOL_ADDRESS(GUID_ECP_CSV_QUERY_FILE_REVISION), &value, values) <= -1)
    {
        return;
    }
    *input_2 = *(uint64_t *)(value + 8);
    input_2[1] = *(uint64_t *)(value + 0x10);
    input_2[2] = *(uint64_t *)(value + 0x18);
    return;
}

uint64_t MpSaveCsvStreamStateToCacheEntry(void *input, uint32_t input_2, void *input_3)
{
    uint32_t value;
    uint64_t value_2;
    uint64_t value_3;
    value_3 = ((uint64_t *)input)[1];
    if (*(int32_t *)(value_3 + 0x78) == 0x1b && 0x40 <= input_2)
    {
        value_3 = 0;
        if (((int64_t *)input)[0x1b] && (value_3 = 0, ((int64_t *)input)[0x1c] && ((int64_t *)input)[0x1d]))
        {
            value_2 = ((uint64_t *)input)[0x1c];
            ((uint64_t *)input_3)[4] = ((uint64_t *)input)[0x1b];
            ((uint64_t *)input_3)[5] = value_2;
            ((uint64_t *)input_3)[6] = ((uint64_t *)input)[0x1d];
            value = ((uint32_t *)input)[8];
            ((uint32_t *)input_3)[0xe] = value;
            return ((uint64_t)((uint64_t)((uint32_t)((uint32_t)value >> 8))) & 0xffffffffffffffULL) << 8 | (uint64_t)1 & 0xffULL;
        }
    }
    return value_3 & 0xffffffffffffff00;
}

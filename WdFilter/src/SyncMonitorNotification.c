#include "wdfilter.h"

void WPP_SF_ii(uint64_t input, uint64_t input_2, uint64_t input_3, uint64_t input_4)
{
    uint64_t value = 300000000;
    uint64_t value_2;
    value_2 = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_08fcbcbc57df34e6eaa3c5bf09140d00_Traceguids), 0x15, &value_2, 8, &value, 8, 0);
    return;
}

void WPP_SF_qDi(uint64_t input, uint64_t input_2, uint64_t input_3, uint64_t input_4)
{
    uint64_t value;
    value = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_08fcbcbc57df34e6eaa3c5bf09140d00_Traceguids), 0x12, &value, 8, &unrecovered_stack_argument_5, 4, &unrecovered_stack_argument_6, 8, 0);
    return;
}

void MpSendSyncMonitorNotification(int32_t input, WD_LAYOUT_66 *input_2, uint16_t *input_3, WD_LAYOUT_26 *input_4, uint32_t *input_5)
{
    int32_t *data_pointer;
    int64_t values[2];
    uint32_t values_2[2];
    int64_t value;
    uint64_t current_thread;
    int64_t value_2;
    int64_t value_3;
    uint64_t value_4;
    int64_t *data_pointer_2;
    uint32_t value_5;
    uint64_t value_6;
    uint32_t *data_pointer_3;
    uint32_t value_7;
    uint64_t value_8;
    uint64_t value_9;
    uint64_t value_10;
    uint64_t value_11;
    uint32_t value_12;
    uint32_t *atomic_value;
    uint32_t value_14;
    int32_t value_15;
    uint32_t *allocation;
    int64_t value_16;
    int64_t value_17;
    atomic_value = input_5;
    value_3 = input;
    if (*(int32_t *)(MpData + 0xe1c))
    {
        if (!(input - 1U & 0xfffffff8U) && input != 4 && input_2 && (input_3 && input_4 && input_5))
        {
            value_2 = MpData + 0x140;
            if (value_2)
            {
                value_14 = MpConstructSyncMonitorVariableData(input, input_3, NULL, 0);
                allocation = (uint32_t *)MpAllocatePoolWithTag(1, value_14 + 0x30, 0x6d73504d);
                if (allocation)
                {
                    current_thread = value_14;
                    allocation[1] = value_14 + 0x30;
                    *allocation = 0x300a3;
                    allocation[6] = input;
                    allocation[10] = value_14;
                    value_6 = input_4->field_0x8;
                    value_5 = input_2->field_0x8;
                    *(uint64_t *)(&allocation[2]) = input_4->field_0x0;
                    *(uint64_t *)(&allocation[4]) = value_6;
                    *(uint64_t *)(&allocation[7]) = input_2->field_0x0;
                    allocation[9] = value_5;
                    MpConstructSyncMonitorVariableData(input, input_3, &allocation[0xc], current_thread);
                    value_17 = *(int64_t *)(MpData + 0xe20);
                    if (*(int64_t *)(MpData + 0xe20))
                    {
                        value_17 = -value_17;
                    }
                    value_15 = MpAcquireSendingSyncMonitorNotification(value_17, &value_17);
                    if (value_15)
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            current_thread = (uint64_t)KeGetCurrentThread();
                            value_4 = (uint64_t)value_4 & 0xffffffff00000000 | (uint64_t)value_15 & 0xffffffff;
                            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x11, WD_SYMBOL_ADDRESS(WPP_08fcbcbc57df34e6eaa3c5bf09140d00_Traceguids), current_thread, value_4);
                        }
                        WdUnresolvedAtomicBegin();
                        data_pointer = (int32_t *)(MpData + 0xd8c + value_3 * 4);
                        *data_pointer = *data_pointer + 1;
                        WdUnresolvedAtomicEnd();
                        WdAtomicExchange32((volatile int32_t *)((uint32_t *)(MpData + 0xdb0 + value_3 * 4)), WD_STATUS_INSUFFICIENT_RESOURCES);
                        ExFreePoolWithTag(allocation, 0x6d73504d);
                        if (value_15 == -0x3fffff4b && *(char *)(MpData + 0xfb8))
                        {
                            WdAtomicAdd32((volatile int32_t *)((int32_t *)(MpData + 0x268)), 1);
                            if (WdDataStorage4 < *(uint32_t *)(MpData + 0x268))
                            {
                                MpSendAsyncPanicModeMessage(4, NULL, (uint64_t)MpData & 0xffffffffffffff00 | (uint64_t)(*(char *)(MpData + 0xd0)) & 0xff, (uint64_t)current_thread & 0xffffffffffffff00 | (uint64_t)1 & 0xff, value_4 & 0xffffffff00000000);
                            }
                        }
                    }
                    else
                    {
                        values[0] = 0;
                        values_2[0] = 0x2c;
                        value_11 = 0;
                        values[1] = 0;
                        value_8 = 0;
                        value_12 = 0;
                        value_9 = 0;
                        value_10 = 0;
                        value_16 = KeQueryPerformanceCounter(values);
                        data_pointer_3 = values_2;
                        data_pointer_2 = &values[1];
                        value_15 = FltSendMessage(*(uint64_t *)(MpData + 0x10), value_2, allocation, allocation[1], data_pointer_2, data_pointer_3, &value_17);
                        value_7 = (uint32_t)((uint64_t)data_pointer_3 >> 0x20);
                        value_5 = (uint32_t)((uint64_t)data_pointer_2 >> 0x20);
                        if (values[0])
                        {
                            value_2 = KeQueryPerformanceCounter(0);
                            value = value_3 * 0x10;
                            if (*(int32_t *)(MpData + (value_3 + 0xce) * 0x10) <= -1)
                            {
                                WdAtomicExchange64((volatile int64_t *)((uint64_t *)(value + 0xcd8 + MpData)), 0);
                                WdAtomicExchange32((volatile int32_t *)((uint32_t *)(value + 0xce0 + MpData)), 0);
                            }
                            WdUnresolvedAtomicBegin();
                            data_pointer_2 = (int64_t *)(value + 0xcd8 + MpData);
                            *data_pointer_2 = *data_pointer_2 + (value_2 - value_16) * 1000 / values[0];
                            WdUnresolvedAtomicEnd();
                            WdUnresolvedAtomicBegin();
                            data_pointer = (int32_t *)(value + 0xce0 + MpData);
                            *data_pointer = *data_pointer + 1;
                            WdUnresolvedAtomicEnd();
                        }
                        if (value_15 == 0x102)
                        {
                            value_15 = -0x3fffff4b;
                        }
                        MpReleaseSendingSyncMonitorNotification();
                        ExFreePoolWithTag(allocation, 0x6d73504d);
                        if (value_15)
                        {
                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                            {
                                WPP_SF_qDi(*(uint64_t *)(WPP_GLOBAL_Control + 0x18));
                            }
                            value_3 *= 4;
                            if (value_15 != -0x3fffff4b)
                            {
                                WdUnresolvedAtomicBegin();
                                data_pointer = (int32_t *)(value_3 + 0xd8c + MpData);
                                *data_pointer = *data_pointer + 1;
                                WdUnresolvedAtomicEnd();
                                WdUnresolvedAtomicBegin();
                                *(int32_t *)(value_3 + 0xdb0 + MpData) = value_15;
                                WdUnresolvedAtomicEnd();
                            }
                            else
                            {
                                WdUnresolvedAtomicBegin();
                                data_pointer = (int32_t *)(value_3 + 0xdd4 + MpData);
                                *data_pointer = *data_pointer + 1;
                                WdUnresolvedAtomicEnd();
                            }
                        }
                        else if (input != (int32_t)value_8)
                        {
                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                            {
                                WPP_SF_qDL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x13, WD_SYMBOL_ADDRESS(WPP_08fcbcbc57df34e6eaa3c5bf09140d00_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)((int32_t)value_8) & 0xffffffffULL, ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)input & 0xffffffffULL);
                            }
                            WdUnresolvedAtomicBegin();
                            data_pointer = (int32_t *)(MpData + 0xdf8 + value_3 * 4);
                            *data_pointer = *data_pointer + 1;
                            WdUnresolvedAtomicEnd();
                        }
                        else
                        {
                            WdUnresolvedAtomicBegin();
                            data_pointer = (int32_t *)(MpData + 0xd68 + value_3 * 4);
                            *data_pointer = *data_pointer + 1;
                            WdUnresolvedAtomicEnd();
                            if (value_8 & 0x200000000)
                            {
                                if ((int32_t)value_8 != 1)
                                {
                                    if ((int32_t)value_8 != 2)
                                    {
                                        if ((int32_t)value_8 != 3)
                                        {
                                            if ((int32_t)value_8 != 5)
                                            {
                                                if ((int32_t)value_8 != 6)
                                                {
                                                    if ((int32_t)value_8 != 7)
                                                    {
                                                        if ((int32_t)value_8 == 8)
                                                        {
                                                            WdAtomicAnd32((volatile int32_t *)atomic_value, 0xfffffffb);
                                                        }
                                                    }
                                                    else
                                                    {
                                                        WdAtomicAnd32((volatile int32_t *)atomic_value, 0xdfffffff);
                                                    }
                                                }
                                                else
                                                {
                                                    WdAtomicAnd32((volatile int32_t *)atomic_value, 0xefffffff);
                                                }
                                            }
                                            else
                                            {
                                                WdAtomicAnd32((volatile int32_t *)atomic_value, 0xf7ffffff);
                                            }
                                        }
                                        else
                                        {
                                            WdAtomicAnd32((volatile int32_t *)atomic_value, 0xffbfffff);
                                        }
                                    }
                                    else
                                    {
                                        WdAtomicAnd32((volatile int32_t *)atomic_value, 0xffdfffff);
                                    }
                                }
                                else
                                {
                                    WdAtomicAnd32((volatile int32_t *)atomic_value, 0xffff7fff);
                                }
                            }
                            if (value_8 & 0x100000000 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                            {
                                WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x14, WD_SYMBOL_ADDRESS(WPP_08fcbcbc57df34e6eaa3c5bf09140d00_Traceguids), (uint64_t)KeGetCurrentThread());
                            }
                        }
                    }
                }
            }
            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), (int32_t)MpData + 0x150, WD_SYMBOL_ADDRESS(WPP_08fcbcbc57df34e6eaa3c5bf09140d00_Traceguids), (uint64_t)KeGetCurrentThread());
            }
        }
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
    {
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xf, WD_SYMBOL_ADDRESS(WPP_08fcbcbc57df34e6eaa3c5bf09140d00_Traceguids), (uint64_t)KeGetCurrentThread(), value_4 & 0xffffffff00000000);
    }
    return;
}

int32_t MpConstructSyncMonitorVariableData(int32_t input, uint16_t *input_2, int64_t *buffer, uint32_t buffer_size)
{
    uint16_t value;
    uint16_t value_2;
    uint64_t *data_pointer;
    int64_t value_3;
    int32_t value_4;
    int32_t value_5;
    uint64_t value_6;
    if (!input_2)
    {
        return 0;
    }
    if (input - 1U & 0xfffffff8U)
    {
        return 0;
    }
    if (input == 4)
    {
        return 0;
    }
    if (!buffer)
    {
        if (input != 1)
        {
            if (input == 2)
            {
                return *(int32_t *)(&input_2[4]);
            }
            if (input == 3)
            {
                return 0xc;
            }
            if (input != 5)
            {
                if (input == 6)
                {
                    return 0x38;
                }
                if (input != 7)
                {
                    if (input != 8)
                    {
                        return 0;
                    }
                    return 0x2c;
                }
                if (*(uint16_t **)input_2)
                {
                    value_5 = *(*(uint16_t **)input_2) + 2;
                }
                else
                {
                    value_5 = 0;
                }
                if (*(uint16_t **)(&input_2[4]))
                {
                    value_4 = *(*(uint16_t **)(&input_2[4])) + 10;
                }
                else
                {
                    value_4 = 8;
                }
                return value_4 + value_5;
            }
        }
        return *input_2 + 10;
    }
    if (input != 1)
    {
        if (input == 2)
        {
            value_5 = *(int32_t *)(&input_2[4]);
            if (!memcpy_s(buffer, buffer_size, input_2, value_5))
            {
                return value_5;
            }
            return 0;
        }
        if (input == 3)
        {
            if (buffer_size <= 0xb)
            {
                return 0;
            }
            *buffer = *(int64_t *)input_2;
            *(uint32_t *)(&buffer[1]) = *(uint32_t *)(&input_2[4]);
            return 0xc;
        }
        if (input != 5)
        {
            if (input == 6)
            {
                if (buffer_size <= 0x37)
                {
                    return 0;
                }
                value_3 = *(int64_t *)(&input_2[4]);
                *buffer = *(int64_t *)input_2;
                buffer[1] = value_3;
                value_3 = *(int64_t *)(&input_2[0xc]);
                buffer[2] = *(int64_t *)(&input_2[8]);
                buffer[3] = value_3;
                value_3 = *(int64_t *)(&input_2[0x14]);
                buffer[4] = *(int64_t *)(&input_2[0x10]);
                buffer[5] = value_3;
                buffer[6] = *(int64_t *)(&input_2[0x18]);
                return 0x38;
            }
            if (input == 7)
            {
                if (buffer_size <= 7)
                {
                    return 0;
                }
                *(uint32_t *)buffer = *(*(uint16_t **)input_2) + 2;
                ((int32_t *)buffer)[1] = *(*(uint16_t **)(&input_2[4])) + 2;
                value = *(*(uint16_t **)input_2);
                value_6 = value;
                data_pointer = *(uint64_t **)(&(*(uint16_t **)input_2)[4]);
                if (memcpy_s(&buffer[1], buffer_size - 8, data_pointer, (uint32_t)value))
                {
                    return 0;
                }
                *(uint16_t *)((int64_t)buffer + value_6 + 8) = 0;
                value_2 = *(*(uint16_t **)(&input_2[4]));
                data_pointer = *(uint64_t **)(&(*(uint16_t **)(&input_2[4]))[4]);
                if (memcpy_s((int64_t *)((int64_t)buffer + value_6 + 10), buffer_size - 8 - (uint32_t)value + -2, data_pointer, (uint32_t)value_2))
                {
                    return 0;
                }
                *(uint16_t *)((int64_t)buffer + value_2 + 10ULL + value_6) = 0;
                return value_2 + 0xc + (uint32_t)value;
            }
            if (input != 8)
            {
                return 0;
            }
            if (buffer_size <= 0x2b)
            {
                return 0;
            }
            value_3 = *(int64_t *)(&input_2[4]);
            *buffer = *(int64_t *)input_2;
            buffer[1] = value_3;
            value_3 = *(int64_t *)(&input_2[0xc]);
            buffer[2] = *(int64_t *)(&input_2[8]);
            buffer[3] = value_3;
            buffer[4] = *(int64_t *)(&input_2[0x10]);
            *(uint32_t *)(&buffer[5]) = *(uint32_t *)(&input_2[0x14]);
            return 0x2c;
        }
    }
    if (buffer_size <= 7)
    {
        return 0;
    }
    *(uint32_t *)buffer = *input_2 + 2;
    value = *input_2;
    data_pointer = *(uint64_t **)(&input_2[4]);
    if (memcpy_s(&buffer[1], buffer_size - 8, data_pointer, (uint32_t)value))
    {
        return 0;
    }
    *(uint16_t *)(value + 8ULL + (int64_t)buffer) = 0;
    return value + 10;
}

void MpReleaseSendingSyncMonitorNotification(void)
{
    uint64_t trace_handle;
    int64_t value;
    KeReleaseSemaphore(MpData + 0x200, 0, 1);
    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
    {
        trace_handle = *(uint64_t *)(WPP_GLOBAL_Control + 0x18);
        value = MpData + 0x200;
        WPP_SF_D(trace_handle, 0xe, WD_SYMBOL_ADDRESS(WPP_08fcbcbc57df34e6eaa3c5bf09140d00_Traceguids), KeReadStateSemaphore(value));
    }
    return;
}

int32_t MpAcquireSendingSyncMonitorNotification(uint64_t input, int64_t *input_2)
{
    uint64_t trace_handle;
    int64_t value = 0;
    int32_t trace_argument_1;
    bool enabled;
    WdUnresolvedAtomicBegin();
    enabled = *(int32_t *)(MpData + 0x1bc) == 0;
    if (enabled)
    {
        *(int32_t *)(MpData + 0x1bc) = 0;
    }
    WdUnresolvedAtomicEnd();
    if (enabled)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xb, WD_SYMBOL_ADDRESS(WPP_08fcbcbc57df34e6eaa3c5bf09140d00_Traceguids));
        }
        return -0x3fffffff;
    }
    trace_argument_1 = FltCancellableWaitForSingleObject(MpData + 0x200, input_2, 0);
    if (trace_argument_1 != 0x102)
    {
        if (!trace_argument_1)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                trace_handle = *(uint64_t *)(WPP_GLOBAL_Control + 0x18);
                value = MpData + 0x200;
                WPP_SF_D(trace_handle, 0xd, WD_SYMBOL_ADDRESS(WPP_08fcbcbc57df34e6eaa3c5bf09140d00_Traceguids), KeReadStateSemaphore(value));
            }
            return 0;
        }
    }
    else
    {
        trace_argument_1 = -0x3fffff4b;
    }
    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        if (input_2)
        {
            value = *input_2 + WdSignedMultiplyHigh(-0x29406b2a1a85bd43, *input_2);
            value = (value >> 0x17) - (value >> 0x3f);
        }
        WPP_SF_Di(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xc, WD_SYMBOL_ADDRESS(WPP_08fcbcbc57df34e6eaa3c5bf09140d00_Traceguids), trace_argument_1, value);
    }
    return trace_argument_1;
}

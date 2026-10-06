#include "wdfilter.h"

void _tlgWriteTemplate__Write(uint64_t input, uint8_t *input_2, uint64_t input_3, uint64_t input_4, uint64_t input_5, uint64_t input_6, uint64_t input_7, uint64_t input_8, uint64_t *input_9, uint64_t *input_10, uint64_t input_11, uint64_t input_12, uint64_t *input_13, uint64_t input_14, uint64_t input_15, uint64_t *input_16, uint64_t input_17, uint64_t input_18, uint64_t *input_19, uint64_t input_20, uint64_t input_21, uint64_t *input_22, uint64_t input_23, uint64_t input_24, uint64_t *input_25, uint64_t input_26, uint64_t input_27, uint64_t *input_28, uint64_t input_29, uint64_t input_30, uint64_t *input_31, uint64_t input_32, uint64_t input_33, uint64_t *input_34, uint64_t input_35, uint64_t input_36)
{
    uint32_t values[2];
    char buffer_2[32];
    uint64_t value;
    uint64_t value_2;
    uint64_t value_3;
    uint64_t value_4;
    uint64_t value_5;
    uint64_t value_6;
    uint64_t value_7;
    uint64_t value_8;
    uint32_t values_2[2];
    uint64_t value_9;
    uint64_t value_10;
    uint32_t *data_pointer;
    uint64_t value_11;
    uint64_t value_12;
    uint64_t value_13;
    uint64_t value_14;
    uint64_t value_15;
    uint64_t value_16;
    uint32_t *data_pointer_2;
    uint32_t values_3[2];
    uint64_t value_17;
    uint64_t value_18;
    uint64_t value_19;
    uint64_t value_20;
    uint64_t value_21;
    uint64_t value_22;
    uint32_t *data_pointer_3;
    uint64_t value_23;
    uint64_t value_24;
    uint64_t value_25;
    uint32_t values_4[2];
    uint64_t value_26;
    uint64_t value_27;
    uint64_t value_28;
    uint32_t *data_pointer_4;
    uint64_t value_29;
    uint64_t value_30;
    uint64_t value_31;
    uint64_t value_32;
    uint64_t value_33;
    uint64_t value_34;
    uint32_t values_5[2];
    uint32_t *data_pointer_5;
    uint64_t value_35;
    uint64_t value_36;
    uint64_t value_37;
    uint64_t value_38;
    uint64_t value_39;
    uint64_t value_40;
    uint32_t *data_pointer_6;
    uint64_t value_41;
    uint64_t value_42;
    uint32_t values_6[2];
    uint64_t value_43;
    uint64_t value_44;
    uint64_t value_45;
    uint64_t value_46;
    uint32_t *data_pointer_7;
    uint64_t value_47;
    uint64_t value_48;
    uint64_t value_49;
    uint64_t value_50;
    uint64_t value_51;
    uint32_t values_7[2];
    uint64_t value_52;
    uint32_t *data_pointer_8;
    uint64_t value_53;
    uint64_t value_54;
    uint64_t value_55;
    uint64_t value_56;
    uint64_t value_57;
    uint64_t value_58;
    uint32_t *data_pointer_9;
    uint64_t value_59;
    uint32_t values_8[2];
    uint64_t value_60;
    uint64_t value_61;
    uint64_t value_62;
    uint64_t value_63;
    uint64_t value_64;
    uint32_t values_9[2];
    value_63 = input_36;
    value_61 = input_35;
    data_pointer_9 = values_2;
    value_60 = *input_34;
    values_2[0] = (uint32_t)(*(uint16_t *)(&input_34[1]));
    value_57 = input_33;
    value_55 = input_32;
    data_pointer_8 = values_3;
    value_54 = *input_31;
    values_3[0] = (uint32_t)(*(uint16_t *)(&input_31[1]));
    value_51 = input_30;
    value_49 = input_29;
    data_pointer_7 = values_4;
    value_48 = *input_28;
    values_4[0] = (uint32_t)(*(uint16_t *)(&input_28[1]));
    value_45 = input_27;
    value_43 = input_26;
    data_pointer_6 = values_5;
    value_42 = *input_25;
    values_5[0] = (uint32_t)(*(uint16_t *)(&input_25[1]));
    value_39 = input_24;
    value_37 = input_23;
    data_pointer_5 = values_6;
    value_36 = *input_22;
    values_6[0] = (uint32_t)(*(uint16_t *)(&input_22[1]));
    value_33 = input_21;
    value_31 = input_20;
    value_64 = 1;
    value_62 = 4;
    value_59 = 2;
    values_2[1] = 0;
    value_58 = 1;
    value_56 = 8;
    value_53 = 2;
    values_3[1] = 0;
    value_52 = 1;
    value_50 = 8;
    value_47 = 2;
    values_4[1] = 0;
    value_46 = 1;
    value_44 = 8;
    value_41 = 2;
    values_5[1] = 0;
    value_40 = 1;
    value_38 = 8;
    value_35 = 2;
    values_6[1] = 0;
    value_34 = 1;
    data_pointer_4 = values_7;
    value_32 = 8;
    value_29 = 2;
    value_30 = *input_19;
    values_7[0] = (uint32_t)(*(uint16_t *)(&input_19[1]));
    value_27 = input_18;
    value_25 = input_17;
    data_pointer_3 = values_8;
    value_24 = *input_16;
    values_8[0] = (uint32_t)(*(uint16_t *)(&input_16[1]));
    value_21 = input_15;
    value_19 = input_14;
    data_pointer_2 = values_9;
    value_18 = *input_13;
    values_9[0] = (uint32_t)(*(uint16_t *)(&input_13[1]));
    value_15 = input_12;
    value_13 = input_11;
    data_pointer = values;
    value_12 = *input_10;
    values[0] = (uint32_t)(*(uint16_t *)(&input_10[1]));
    values_7[1] = 0;
    value_28 = 1;
    value_26 = 8;
    value_9 = *input_9;
    value_7 = input_8;
    value_5 = input_7;
    value_3 = input_6;
    value = input_5;
    value_23 = 2;
    values_8[1] = 0;
    value_22 = 1;
    value_20 = 8;
    value_17 = 2;
    values_9[1] = 0;
    value_16 = 1;
    value_14 = 8;
    value_11 = 2;
    values[1] = 0;
    value_10 = 0x10;
    value_8 = 1;
    value_6 = 4;
    value_4 = 4;
    value_2 = 8;
    _tlgWriteTransfer_EtwWriteTransfer(&WdTlgaggregateimplStorage4, input_2, 0, 0, 0x2b, buffer_2);
    return;
}

void ExSetTimer(uint64_t input, uint64_t input_2, uint64_t input_3, uint64_t input_4)
{
    WD_ROUTINE routine;
    uint64_t string;
    uint64_t value;
    if (!(WdExsettimerStorage2 & 1))
    {
        WdExsettimerStorage2 |= 1;
        string = 0;
        value = 0;
        RtlInitUnicodeString(&string, L"ExSetTimer");
        routine = (WD_ROUTINE)MmGetSystemRoutineAddress(&string);
        WdExsettimerStorage = ExSetTimerDownlevel;
        if (routine)
        {
            WdExsettimerStorage = routine;
        }
    }
    (*__guard_dispatch_icall_fptr)(input, input_2, input_3, input_4);
    return;
}

char ExSetTimerDownlevel(void)
{
    return 0;
}

void ExDeleteTimer(uint64_t input, uint16_t *input_2, char input_3, uint64_t input_4)
{
    char byte_value;
    WD_ROUTINE routine;
    uint64_t string;
    uint64_t value;
    byte_value = (uint8_t)((uint64_t)input_2 >> 0 * 8);
    if (!(WdExdeletetimerStorage2 & 1))
    {
        WdExdeletetimerStorage2 |= 1;
        input_2 = L"ExDeleteTimer";
        string = 0;
        value = 0;
        RtlInitUnicodeString(&string, L"ExDeleteTimer");
        routine = (WD_ROUTINE)MmGetSystemRoutineAddress(&string);
        WdExdeletetimerStorage = ExSetTimerDownlevel;
        if (routine)
        {
            WdExdeletetimerStorage = routine;
        }
    }
    (*__guard_dispatch_icall_fptr)(input, (uint64_t)((uint64_t)input_2) & 0xffffffffffffff00 | (uint64_t)byte_value & 0xff, input_3, input_4);
    return;
}

void ExAllocateTimer(uint64_t input, uint64_t input_2, uint32_t input_3)
{
    WD_ROUTINE routine;
    uint64_t string;
    uint64_t value;
    if (WdExallocatetimerStorage2 & 1)
    {
        routine = WdExallocatetimerStorage;
    }
    else
    {
        WdExallocatetimerStorage2 |= 1;
        string = 0;
        value = 0;
        RtlInitUnicodeString(&string, L"ExAllocateTimer");
        routine = (WD_ROUTINE)MmGetSystemRoutineAddress(&string);
        WdExallocatetimerStorage = ExAllocateTimerDownlevel;
        if (routine)
        {
            WdExallocatetimerStorage = routine;
        }
        routine = WdExallocatetimerStorage;
    }
    (*__guard_dispatch_icall_fptr)(input, input_2, input_3, routine);
    return;
}

uint64_t ExAllocateTimerDownlevel(void)
{
    return 0;
}

void EtwSetInformation(uint64_t input, uint32_t input_2, uint64_t input_3, uint32_t input_4)
{
    WD_ROUTINE routine;
    uint64_t string;
    uint64_t value;
    if (!(WdEtwsetinformationStorage2 & 1))
    {
        WdEtwsetinformationStorage2 |= 1;
        string = 0;
        value = 0;
        RtlInitUnicodeString(&string, L"EtwSetInformation");
        routine = (WD_ROUTINE)MmGetSystemRoutineAddress(&string);
        WdEtwsetinformationStorage = EtwSetInformationDownlevel;
        if (routine)
        {
            WdEtwsetinformationStorage = routine;
        }
    }
    (*__guard_dispatch_icall_fptr)(input, input_2, input_3, input_4);
    return;
}

uint64_t EtwSetInformationDownlevel(void)
{
    return 0xc0000002;
}

void ExAcquirePushLockSharedEx(uint64_t input, uint32_t input_2)
{
    WD_ROUTINE routine;
    uint64_t string;
    uint64_t value;
    if (WdExacquirepushlocksharedexStorage2 & 1)
    {
        routine = WdExacquirepushlocksharedexStorage;
    }
    else
    {
        WdExacquirepushlocksharedexStorage2 |= 1;
        string = 0;
        value = 0;
        RtlInitUnicodeString(&string, L"ExAcquirePushLockSharedEx");
        routine = (WD_ROUTINE)MmGetSystemRoutineAddress(&string);
        WdExacquirepushlocksharedexStorage = _guard_check_icall_nop;
        if (routine)
        {
            WdExacquirepushlocksharedexStorage = routine;
        }
        routine = WdExacquirepushlocksharedexStorage;
    }
    (*__guard_dispatch_icall_fptr)(input, input_2, routine);
    return;
}

void _invalid_parameter(void)
{
    return;
}

void ExReleasePushLockSharedEx(uint64_t input, uint32_t input_2)
{
    WD_ROUTINE routine;
    uint64_t string;
    uint64_t value;
    if (WdExreleasepushlocksharedexStorage2 & 1)
    {
        routine = WdExreleasepushlocksharedexStorage;
    }
    else
    {
        WdExreleasepushlocksharedexStorage2 |= 1;
        string = 0;
        value = 0;
        RtlInitUnicodeString(&string, L"ExReleasePushLockSharedEx");
        routine = (WD_ROUTINE)MmGetSystemRoutineAddress(&string);
        WdExreleasepushlocksharedexStorage = _guard_check_icall_nop;
        if (routine)
        {
            WdExreleasepushlocksharedexStorage = routine;
        }
        routine = WdExreleasepushlocksharedexStorage;
    }
    (*__guard_dispatch_icall_fptr)(input, input_2, routine);
    return;
}

void ExReleasePushLockExclusiveEx(uint64_t input, uint32_t input_2)
{
    WD_ROUTINE routine;
    uint64_t string;
    uint64_t value;
    if (WdExreleasepushlockexclusiveexStorage2 & 1)
    {
        routine = WdExreleasepushlockexclusiveexStorage;
    }
    else
    {
        WdExreleasepushlockexclusiveexStorage2 |= 1;
        string = 0;
        value = 0;
        RtlInitUnicodeString(&string, L"ExReleasePushLockExclusiveEx");
        routine = (WD_ROUTINE)MmGetSystemRoutineAddress(&string);
        WdExreleasepushlockexclusiveexStorage = _guard_check_icall_nop;
        if (routine)
        {
            WdExreleasepushlockexclusiveexStorage = routine;
        }
        routine = WdExreleasepushlockexclusiveexStorage;
    }
    (*__guard_dispatch_icall_fptr)(input, input_2, routine);
    return;
}

void ExAcquirePushLockExclusiveEx(uint64_t input, uint32_t input_2)
{
    WD_ROUTINE routine;
    uint64_t string;
    uint64_t value;
    if (WdExacquirepushlockexclusiveexStorage2 & 1)
    {
        routine = WdExacquirepushlockexclusiveexStorage;
    }
    else
    {
        WdExacquirepushlockexclusiveexStorage2 |= 1;
        string = 0;
        value = 0;
        RtlInitUnicodeString(&string, L"ExAcquirePushLockExclusiveEx");
        routine = (WD_ROUTINE)MmGetSystemRoutineAddress(&string);
        WdExacquirepushlockexclusiveexStorage = _guard_check_icall_nop;
        if (routine)
        {
            WdExacquirepushlockexclusiveexStorage = routine;
        }
        routine = WdExacquirepushlockexclusiveexStorage;
    }
    (*__guard_dispatch_icall_fptr)(input, input_2, routine);
    return;
}

void ExTryAcquirePushLockExclusiveEx(uint64_t input, uint32_t input_2)
{
    WD_ROUTINE routine;
    uint64_t string;
    uint64_t value;
    if (WdExtryacquirepushlockexclusiveexStorage2 & 1)
    {
        routine = WdExtryacquirepushlockexclusiveexStorage;
    }
    else
    {
        WdExtryacquirepushlockexclusiveexStorage2 |= 1;
        string = 0;
        value = 0;
        RtlInitUnicodeString(&string, L"ExTryAcquirePushLockExclusiveEx");
        routine = (WD_ROUTINE)MmGetSystemRoutineAddress(&string);
        WdExtryacquirepushlockexclusiveexStorage = ExSetTimerDownlevel;
        if (routine)
        {
            WdExtryacquirepushlockexclusiveexStorage = routine;
        }
        routine = WdExtryacquirepushlockexclusiveexStorage;
    }
    (*__guard_dispatch_icall_fptr)(input, input_2, routine);
    return;
}

void __C_specific_handler(void)
{
    __C_specific_handler();
    return;
}

uint64_t memcpy_s(int64_t *buffer, char *buffer_size, uint64_t *input, char *input_2)
{
    uint64_t value;
    if (!input_2)
    {
        return 0;
    }
    if (buffer)
    {
        if (input && input_2 <= buffer_size)
        {
            memmove(buffer, input, input_2);
            return 0;
        }
        memset(buffer, 0, buffer_size);
        if (input)
        {
            if (input_2 <= buffer_size)
            {
                return 0x16;
            }
            value = 0x22;
            _guard_check_icall_nop(0, 0, 0, 0, 0);
            return value;
        }
    }
    value = 0x16;
    _guard_check_icall_nop(0, 0, 0, 0, 0);
    return value;
}

uint64_t __GSHandlerCheck(uint64_t input, uint64_t input_2, uint64_t input_3, void *input_4)
{
    __GSHandlerCheckCommon(input_2, input_4, ((uint32_t **)input_4)[7]);
    return 1;
}

void __GSHandlerCheckCommon(uint64_t input, void *input_2, uint32_t *input_3)
{
    uint8_t byte_value;
    uint64_t value;
    value = input;
    if (*input_3 & 4)
    {
        value = (int32_t)input_3[1] + input & (int32_t)(-input_3[2]);
    }
    byte_value = *(uint8_t *)(*(uint32_t *)(((int64_t *)input_2)[2] + 8) + 3ULL + ((int64_t *)input_2)[1]);
    if (byte_value & 0xf)
    {
        input += byte_value & 0xfffffff0;
    }
    __security_check_cookie(input ^ *(uint64_t *)((int32_t)(*input_3 & 0xfffffff8) + value));
    return;
}

uint64_t __cpu_features_init(void)
{
    int32_t *data_pointer;
    uint32_t value;
    bool enabled;
    uint8_t byte_value;
    uint8_t byte_value_2;
    uint8_t byte_value_3;
    data_pointer = (int32_t *)cpuid_basic_info(0);
    byte_value_2 = 0;
    enabled = 0;
    value = *(uint32_t *)(cpuid_Version_info(1) + 0xc);
    if (value >> 0x14 & 1)
    {
        byte_value_2 = 8;
        enabled = 0;
        if (value >> 0x1b & 1 && value >> 0x1c & 1)
        {
            byte_value_2 = 8;
            enabled = 0;
            if ((byte_value_3 & (uint8_t)xinuse(0) & 6) == 6)
            {
                byte_value_2 = 0xc;
                enabled = 1;
            }
        }
    }
    byte_value = byte_value_2;
    if (7 <= *data_pointer)
    {
        value = *(uint32_t *)(cpuid_Extended_Feature_Enumeration_info(7) + 4);
        byte_value = byte_value_2 | 2;
        if (!(value >> 9 & 1))
        {
            byte_value = byte_value_2;
        }
        if (value & 0x20 && enabled)
        {
            byte_value |= 0x10;
        }
    }
    __isa_info = byte_value | 1;
    return 0;
}

void __report_gsfailure(uint64_t input)
{
    KeBugCheckEx(0xf7, input, __security_cookie, __security_cookie_complement, 0);
}

uint32_t RtlStringCopyWideCharArrayWorker(uint16_t *input, int64_t input_2, int64_t *input_3, int64_t input_4, int64_t input_5)
{
    uint16_t *wide_text;
    int64_t value;
    int64_t value_2 = 0;
    if (input_2)
    {
        input_4 -= (int64_t)input;
        do
        {
            if (!input_5)
            {
                break;
            }
            input_5 -= 1;
            *input = *(uint16_t *)(input_4 + (int64_t)input);
            value_2 += 1;
            input = &input[1];
            input_2 -= 1;
        }
        while (input_2);
    }
    wide_text = &input[-1];
    if (input_2)
    {
        wide_text = input;
    }
    *wide_text = 0;
    if (input_3)
    {
        value = value_2 + -1;
        if (input_2)
        {
            value = value_2;
        }
        *input_3 = value;
    }
    return ~(-(uint32_t)(input_2 != 0)) & 0x80000005;
}

uint32_t RtlStringCopyWorkerA(char *input, int64_t input_2, int64_t *input_3, int64_t index, int64_t input_4)
{
    char *bytes;
    int64_t value;
    int64_t value_2 = 0;
    if (input_2)
    {
        index -= (int64_t)input;
        do
        {
            if (!input_4 || !input[index])
            {
                break;
            }
            *input = input[index];
            input_4 -= 1;
            input = &input[1];
            value_2 += 1;
            input_2 -= 1;
        }
        while (input_2);
    }
    bytes = &input[-1];
    if (input_2)
    {
        bytes = input;
    }
    *bytes = '\0';
    if (input_3)
    {
        value = value_2 + -1;
        if (input_2)
        {
            value = value_2;
        }
        *input_3 = value;
    }
    return ~(-(uint32_t)(input_2 != 0)) & 0x80000005;
}

uint32_t RtlStringCopyWorkerW(int16_t *input, int64_t input_2, int64_t *input_3, int64_t input_4, int64_t input_5)
{
    int16_t value;
    int16_t *wide_text;
    int64_t value_2;
    int64_t value_3 = 0;
    if (input_2)
    {
        input_4 -= (int64_t)input;
        do
        {
            if (!input_5 || (value = *(int16_t *)(input_4 + (int64_t)input), !value))
            {
                break;
            }
            *input = value;
            input_5 -= 1;
            input = &input[1];
            value_3 += 1;
            input_2 -= 1;
        }
        while (input_2);
    }
    wide_text = &input[-1];
    if (input_2)
    {
        wide_text = input;
    }
    *wide_text = 0;
    if (input_3)
    {
        value_2 = value_3 + -1;
        if (input_2)
        {
            value_2 = value_3;
        }
        *input_3 = value_2;
    }
    return ~(-(uint32_t)(input_2 != 0)) & 0x80000005;
}

uint64_t RtlStringExValidateDestW(int64_t input, uint64_t input_2, uint64_t input_3, uint32_t input_4)
{
    if (input_4 >> 8 & 1)
    {
        if (!input && input_2)
        {
            return WD_STATUS_INVALID_PARAMETER;
        }
    }
    else if (!input_2)
    {
        return WD_STATUS_INVALID_PARAMETER;
    }
    if (input_3 < input_2)
    {
        return WD_STATUS_INVALID_PARAMETER;
    }
    return 0;
}

uint64_t RtlStringExValidateSrcW(int64_t *input, uint64_t *input_2, uint64_t input_3, uint32_t input_4)
{
    if (input_2 && input_3 <= *input_2)
    {
        return WD_STATUS_INVALID_PARAMETER;
    }
    if (input_4 >> 8 & 1 && (!(*input) && (*input = WD_EXCLUDEPROCESS_UNRECOVERED_ADDRESS, input_2)))
    {
        *input_2 = 0;
    }
    return 0;
}

uint32_t RtlStringLengthWorkerA(char *input, int64_t input_2, int64_t *input_3)
{
    uint32_t value;
    int64_t value_2;
    value_2 = input_2;
    for (; value_2 && *input; input = &input[1])
    {
        value_2 -= 1;
    }

    value = ~(-(uint32_t)(value_2 != 0)) & WD_STATUS_INVALID_PARAMETER;
    if (input_3)
    {
        if (value_2)
        {
            *input_3 = input_2 - value_2;
            return value;
        }
        *input_3 = 0;
    }
    return value;
}

uint32_t RtlStringLengthWorkerW(int16_t *input, int64_t input_2, int64_t *input_3)
{
    uint32_t value;
    int64_t value_2;
    value_2 = input_2;
    for (; value_2 && *input; input = &input[1])
    {
        value_2 -= 1;
    }

    value = ~(-(uint32_t)(value_2 != 0)) & WD_STATUS_INVALID_PARAMETER;
    if (input_3)
    {
        if (value_2)
        {
            *input_3 = input_2 - value_2;
            return value;
        }
        *input_3 = 0;
    }
    return value;
}

uint64_t RtlStringVPrintfWorkerA(int64_t input, int64_t input_2, uint64_t *input_3, char *input_4, uint64_t input_5)
{
    int32_t value;
    uint64_t value_2;
    uint64_t value_3;
    uint64_t value_4;
    value_3 = input_2 - 1;
    value_4 = 0;
    value = _vsnprintf(input, value_3, input_4, input_5);
    if (0 <= value)
    {
        value_2 = value;
        if (value_2 <= value_3)
        {
            if (value_2 != value_3)
            {
                value_3 = value_2;
            }
            else
            {
                *(char *)(value_3 + input) = 0;
            }
            goto block_1;
        }
    }
    *(char *)(value_3 + input) = 0;
    value_4 = 0x80000005;
    block_1:
    if (!input_3)
    {
        return value_4;
    }

    *input_3 = value_3;
    return value_4;
}

uint32_t RtlStringVPrintfWorkerW(uint16_t *input, int64_t input_2, uint64_t *input_3, uint64_t input_4, uint64_t input_5)
{
    int32_t value;
    uint64_t value_2;
    uint64_t index;
    uint32_t value_3;
    index = input_2 - 1;
    value_3 = 0;
    value = _vsnwprintf(input, index, input_4, input_5);
    if (0 <= value)
    {
        value_2 = value;
        if (index < value_2)
        {
            goto block_1;
        }
        if (value_2 != index)
        {
            index = value_2;
            goto block_2;
        }
    }
    else
    {
        block_1:
        value_3 = 0x80000005;
    }
    input[index] = 0;
    block_2:
    if (!input_3)
    {
        return value_3;
    }

    *input_3 = index;
    return value_3;
}

uint64_t RtlStringValidateDestA(uint64_t input, uint64_t input_2, uint64_t input_3)
{
    if (input_2 && input_2 <= input_3)
    {
        return 0;
    }
    return WD_STATUS_INVALID_PARAMETER;
}

uint64_t RtlStringValidateDestAndLengthW(int16_t *input, uint64_t input_2, int64_t *input_3, uint64_t input_4)
{
    if (input_2 && input_2 <= input_4)
    {
        return RtlStringLengthWorkerW(input, input_2, input_3);
    }
    *input_3 = 0;
    return WD_STATUS_INVALID_PARAMETER;
}

int32_t RtlUnicodeStringValidateDestWorker(WD_UNICODE_STRING_VALUE *input, int64_t *input_2, uint64_t *input_3, uint64_t *input_4, int64_t input_5, uint32_t input_6)
{
    int32_t value;
    *input_2 = 0;
    *input_3 = 0;
    if (input_4)
    {
        *input_4 = 0;
    }
    value = RtlUnicodeStringValidateWorker(input, input_5, input_6);
    if (0 <= value && input)
    {
        *input_2 = input->Buffer;
        *input_3 = (uint64_t)(input->MaximumLength >> 1);
        if (input_4)
        {
            *input_4 = (uint64_t)(input->Length >> 1);
        }
    }
    return value;
}

void RtlUnicodeStringValidateSrcWorker(WD_UNICODE_STRING_VALUE *input, int64_t *input_2, uint64_t *input_3, int64_t input_4, uint32_t input_5)
{
    int32_t value;
    *input_2 = 0;
    *input_3 = 0;
    value = RtlUnicodeStringValidateWorker(input, input_4, input_5);
    if (0 <= value)
    {
        if (input)
        {
            *input_2 = input->Buffer;
            *input_3 = (uint64_t)(input->Length >> 1);
        }
        if (!(*input_2) && input_5 & 0x100)
        {
            *input_2 = WD_EXCLUDEPROCESS_UNRECOVERED_ADDRESS;
        }
    }
    return;
}

uint64_t RtlUnicodeStringValidateWorker(WD_UNICODE_STRING_VALUE *input, int64_t input_2, uint32_t input_3)
{
    uint16_t value;
    uint16_t value_2;
    if (!input && input_3 >> 8 & 1)
    {
        return 0;
    }
    value = input->Length;
    if (!(value & 1))
    {
        value_2 = input->MaximumLength;
        if (!(value_2 & 1) && value <= value_2 && (uint64_t)value_2 <= (uint64_t)(input_2 * 2))
        {
            if (input->Buffer)
            {
                return 0;
            }
            if (!value && !value_2)
            {
                return 0;
            }
        }
    }
    return WD_STATUS_INVALID_PARAMETER;
}

int64_t RtlWideCharArrayCopyStringWorker(int64_t input, int64_t input_2, int64_t *input_3, int16_t *input_4, int64_t input_5)
{
    int64_t value = 0;
    int64_t value_2;
    value_2 = value;
    if (input_2)
    {
        input -= (int64_t)input_4;
        do
        {
            if (!input_5)
            {
                goto block_1;
            }
            if (!(*input_4))
            {
                break;
            }
            *(int16_t *)(input + (int64_t)input_4) = *input_4;
            input_5 -= 1;
            input_4 = &input_4[1];
            value_2 += 1;
            input_2 -= 1;
        }
        while (input_2);
        if (input_2)
        {
            goto block_1;
        }
    }
    if (input_5 && (value = 0, *input_4))
    {
        value = 0x80000005;
    }
    block_1:
    *input_3 = value_2;

    return value;
}

uint32_t RtlWideCharArrayCopyWorker(int64_t input, int64_t input_2, int64_t *input_3, uint16_t *input_4, int64_t input_5)
{
    uint32_t value = 0;
    int64_t value_2 = 0;
    if (input_2)
    {
        input -= (int64_t)input_4;
        do
        {
            if (!input_5)
            {
                goto block_1;
            }
            input_5 -= 1;
            *(uint16_t *)(input + (int64_t)input_4) = *input_4;
            value_2 += 1;
            input_4 = &input_4[1];
            input_2 -= 1;
        }
        while (input_2);
    }
    value = 0;
    if (input_5)
    {
        value = 0x80000005;
    }
    block_1:
    *input_3 = value_2;

    return value;
}

uint32_t _vsnprintf(void)
{
    return _vsnprintf_l();
}

uint32_t _vsnprintf_l(char *input, uint64_t input_2, char *input_3, uint64_t input_4, uint64_t *input_5)
{
    uint32_t value;
    char *bytes;
    int32_t value_2;
    uint32_t value_3 = 0;
    char *bytes_2;
    uint32_t value_4;
    uint64_t value_5 = 0;
    uint64_t value_6 = 0;
    uint32_t value_7 = 0;
    if (!input_3)
    {
        _guard_check_icall_nop(0, 0, 0, 0, 0);
        return 0xffffffff;
    }
    if (input_2)
    {
        if (!input)
        {
            _guard_check_icall_nop(0, 0, 0, 0, 0);
            return 0xffffffff;
        }
        value_2 = 0x7fffffff;
        if (0x80000000 <= input_2)
        {
            goto block_1;
        }
    }
    value_2 = (int32_t)input_2;
    block_1:
    value_4 = 0x42;

    bytes = input;
    bytes_2 = input;
    value = _output_l(&bytes, input_3, input_4, input_5);
    if (input)
    {
        value_2 -= 1;
        if (0 <= value_2)
        {
            *bytes = 0;
        }
        else
        {
            _flsbuf(0, &bytes);
        }
    }
    return value;
}

uint32_t _vsnwprintf(void)
{
    return _vsnwprintf_l();
}

uint32_t _vsnwprintf_l(char *input, uint64_t input_2, uint16_t *input_3, uint64_t input_4, uint16_t *input_5)
{
    uint32_t value;
    uint32_t value_2 = 0;
    char *bytes;
    char *bytes_2;
    int32_t value_3;
    uint32_t value_4 = 0;
    char *bytes_3;
    uint32_t value_5;
    uint64_t value_6 = 0;
    uint64_t value_7 = 0;
    if (input_3 && (!input_2 || input))
    {
        value_5 = 0x42;
        if (0x40000000 <= input_2)
        {
            value_3 = 0x7fffffff;
        }
        else
        {
            value_3 = (int32_t)input_2 * 2;
        }
        bytes_2 = input;
        bytes_3 = input;
        value = _woutput_l(&bytes_2, input_3, input_4, input_5);
        if (input)
        {
            value_3 -= 1;
            if (0 <= value_3)
            {
                *bytes_2 = 0;
                bytes_2 = &bytes_2[1];
                bytes = bytes_2;
            }
            else
            {
                _flsbuf(0, &bytes_2);
                bytes = bytes_2;
            }
            value_3 -= 1;
            if (0 <= value_3)
            {
                *bytes = 0;
            }
            else
            {
                _flsbuf(0, &bytes_2);
            }
        }
        return value;
    }
    _guard_check_icall_nop(0, 0, 0, 0, 0);
    return 0xffffffff;
}

uint64_t _flsbuf(uint64_t input, WD_LAYOUT_22 *input_2)
{
    input_2->field_0x18 = input_2->field_0x18 | 0x20;
    return 0xffffffff;
}

void _output_l(WD_LAYOUT_49 *input, char *input_2, uint64_t input_3, uint64_t *input_4)
{
    char *bytes;
    bool enabled = 0;
    WD_LAYOUT_49 *record;
    char index;
    uint32_t value = 0;
    int32_t value_2;
    int32_t value_3;
    uint16_t *wide_text;
    uint16_t *wide_text_2;
    uint64_t value_4;
    int32_t value_5;
    uint16_t value_6;
    uint16_t *wide_text_3;
    char *bytes_2;
    int32_t value_7;
    char *bytes_3 = NULL;
    uint16_t buffer_2[255];
    int32_t value_8;
    char buffer_3[9];
    uint32_t value_9;
    char buffer_4[4];
    uint16_t value_10;
    int32_t values[2];
    uint32_t value_11;
    int32_t value_12;
    uint64_t value_13;
    uint32_t value_14;
    uint64_t value_15;
    uint32_t value_16;
    char *bytes_4;
    uint32_t value_17 = 0;
    int32_t value_18;
    uint16_t *wide_text_4;
    uint32_t value_19 = 0;
    uint32_t value_20 = 0;
    int32_t value_21;
    uint32_t value_22;
    uint32_t value_23 = 0;
    uint64_t *data_pointer;
    int32_t value_24 = 0;
    uint32_t value_25 = 0;
    WD_LAYOUT_49 *record_2;
    uint32_t *data_pointer_2;
    bool enabled_2 = 0;
    bool enabled_3 = 0;
    bool enabled_4 = 0;
    bool enabled_5 = 0;
    data_pointer = input_4;
    record_2 = input;
    memset(buffer_2, 0, (char *)0x200);
    value_18 = 0;
    value_21 = 0;
    if (!input || !input_2)
    {
        _guard_check_icall_nop(0, 0, 0, 0, 0);
        return;
    }
    index = *input_2;
    value_9 = 0;
    value_8 = 0;
    value_14 = value_18;
    value_3 = 0;
    block_1:
    if (!index)
    {
        return;
    }

    value_11 = 0;
    bytes_4 = &input_2[1];
    if (value_18 < 0)
    {
        return;
    }
    value_16 = 0;
    value_5 = value_16;
    if ((uint8_t)(index - 0x20U) <= 0x5a)
    {
        value_5 = (int32_t)"(null)"[index] & 0xf;
    }
    value_7 = index;
    value_14 = (int32_t)__lookuptable[(int32_t)(value_14 + value_5 * 8)] >> 4;
    value_15 = value_14;
    value_22 = value_14;
    if (value_14)
    {
        if (value_14 == 1)
        {
            value_24 = 0;
            value_23 = 0;
            value_19 = 0;
            enabled = 0;
            enabled_5 = 0;
            enabled_4 = 0;
            enabled_3 = 0;
            enabled_2 = 0;
            value_20 = 0;
            value = 0xffffffff;
            value_17 = 0xffffffff;
            value_21 = 0;
            goto block_16;
        }
        value_11 = value_3;
        if (value_14 == 2)
        {
            if (index != ' ')
            {
                if (index != '#')
                {
                    if (index != '+')
                    {
                        if (index != '-')
                        {
                            if (index == '0')
                            {
                                value_19 |= 8;
                            }
                        }
                        else
                        {
                            value_19 |= 4;
                        }
                    }
                    else
                    {
                        enabled_4 = 1;
                    }
                }
            }
            else
            {
                enabled = 1;
            }
            goto block_16;
        }
        if (value_14 == 3)
        {
            if (index != '*')
            {
                value_23 = value_7 + (value_23 * 5 + -0x18) * 2;
            }
            else
            {
                value_3 = *(uint32_t *)input_4;
                data_pointer = &input_4[1];
                if (value_3 <= -1)
                {
                    value_19 |= 4;
                }
                value_23 = -value_3;
                if (0 <= value_3)
                {
                    value_23 = value_3;
                }
            }
            goto block_16;
        }
        if (value_14 == 4)
        {
            value_17 = value_16;
            value = value_16;
            goto block_16;
        }
        if (value_14 == 5)
        {
            if (index != '*')
            {
                value_17 = value_7 + (value_17 * 5 + -0x18) * 2;
                value = value_17;
            }
            else
            {
                value_17 = *(uint32_t *)input_4;
                data_pointer = &input_4[1];
                value = value_17;
                if ((int32_t)value_17 <= -1)
                {
                    value_17 = 0xffffffff;
                    value = 0xffffffff;
                }
            }
            goto block_16;
        }
        if (value_14 == 6)
        {
            if (index != 'I')
            {
                if (index != 'h')
                {
                    if (index == 'j')
                    {
                        goto block_2;
                    }
                    if (index != 'l')
                    {
                        if (index == 't')
                        {
                            goto block_2;
                        }
                        if (index != 'w')
                        {
                            if (index == 'z')
                            {
                                goto block_2;
                            }
                        }
                        else
                        {
                            value_19 |= 0x800;
                        }
                    }
                    else
                    {
                        index = *bytes_4;
                        if (index == 'l')
                        {
                            bytes_4 = &input_2[2];
                        }
                        value_3 = 0x1000;
                        if (index != 'l')
                        {
                            value_3 = 0x10;
                        }
                        value_19 |= value_3;
                    }
                }
                else
                {
                    value_19 |= 0x20;
                }
            }
            else
            {
                block_2:
                value_19 |= 0x8000;

                if (index != 'I')
                {
                    if (index != 'j')
                    {
                        block_3:
                        value_15 = 0;

                        if (0x21 > (uint8_t)(*bytes_4 + 0xa8U))
                        {
                            value_15 = 0x120821001;
                            if (0x120821001U >> ((uint8_t)(*bytes_4 + 0xa8U) & 0x3fULL) & 1)
                            {
                                goto block_16;
                            }
                        }
                        value_22 = 0;
                        goto block_14;
                    }
                }
                else if (*bytes_4 != '6' || input_2[2] != '4')
                {
                    if (*bytes_4 != '3' || input_2[2] != '2')
                    {
                        goto block_3;
                    }
                    bytes_4 = &input_2[3];
                    value_19 &= 0xffff7fff;
                }
                else
                {
                    bytes_4 = &input_2[3];
                }
            }
            goto block_16;
        }
        if (value_14 != 7)
        {
            goto block_16;
        }
        wide_text_3 = NULL;
        if (0x6a > value_7)
        {
            if (value_7 != 0x69)
            {
                if (value_7 != 0x43)
                {
                    if (value_7 != 0x53)
                    {
                        if (value_7 == 0x58)
                        {
                            goto block_13;
                        }
                        if (value_7 != 0x5a)
                        {
                            if (value_7 == 99)
                            {
                                goto block_5;
                            }
                            if (value_7 == 100)
                            {
                                goto block_6;
                            }
                        }
                        else
                        {
                            wide_text_4 = (uint16_t *)(*input_4);
                            data_pointer = &input_4[1];
                            if (wide_text_4 && (bytes_3 = *(char **)(&wide_text_4[4]), (uint16_t *)bytes_3))
                            {
                                value_6 = *wide_text_4;
                                if (wide_text_4[1] < value_6)
                                {
                                    _guard_check_icall_nop(0, 0, 0, 0, 0);
                                    return;
                                }
                                wide_text_3 = (uint16_t *)((uint64_t)value_6);
                                if (value_19 >> 0xb & 1)
                                {
                                    if (!(~(uint32_t)value_6 & 1) || !(~(uint32_t)bytes_3 & 1))
                                    {
                                        _guard_check_icall_nop(0, 0, 0, 0, 0);
                                        return;
                                    }
                                    value_21 = 1;
                                    wide_text_3 = (uint16_t *)((uint64_t)(value_6 >> 1));
                                }
                                else
                                {
                                    value_21 = 0;
                                }
                            }
                            else
                            {
                                bytes_3 = "(null)";
                                wide_text = (uint16_t *)0xffffffffffffffff;
                                do
                                {
                                    wide_text_3 = (uint16_t *)((int64_t)wide_text + 1);
                                    bytes = (char *)((int64_t)wide_text + WD_OUTPUT_UNRECOVERED_ADDRESS);
                                    wide_text = wide_text_3;
                                }
                                while (*bytes);
                            }
                            value_8 = (int32_t)wide_text_3;
                        }
                    }
                    else
                    {
                        if (!(value_19 & 0x830))
                        {
                            value_19 |= 0x800;
                        }
                        block_4:
                        wide_text = (uint16_t *)(*input_4);

                        wide_text_3 = (uint16_t *)((uint64_t)value_17);
                        if (value_17 == 0xffffffff)
                        {
                            wide_text_3 = (uint16_t *)0x7fffffff;
                        }
                        data_pointer = &input_4[1];
                        if (value_19 & 0x810)
                        {
                            bytes_3 = (char *)wide_text;
                            if (!wide_text)
                            {
                                wide_text = L"(null)";
                                bytes_3 = (char *)L"(null)";
                            }
                            value_21 = 1;
                            for (; (int32_t)wide_text_3 && (wide_text_3 = (uint16_t *)((uint64_t)((uint32_t)((int32_t)wide_text_3 - 1))), *wide_text); wide_text = &wide_text[1])
                            {
                            }

                            value_8 = (int32_t)((int64_t)wide_text - (int64_t)bytes_3 >> 1);
                        }
                        else
                        {
                            bytes_3 = "(null)";
                            wide_text_2 = (uint16_t *)bytes_3;
                            if (wide_text)
                            {
                                wide_text_2 = wide_text;
                                bytes_3 = (char *)wide_text;
                            }
                            for (; (int32_t)wide_text_3 && (wide_text_3 = (uint16_t *)((uint64_t)((uint32_t)((int32_t)wide_text_3 - 1))), *(char *)wide_text_2); wide_text_2 = (uint16_t *)((int64_t)wide_text_2 + 1))
                            {
                            }

                            value_8 = (int32_t)wide_text_2 - (int32_t)bytes_3;
                        }
                    }
                }
                else
                {
                    if (!(value_19 & 0x830))
                    {
                        value_19 |= 0x800;
                    }
                    block_5:
                    data_pointer = &input_4[1];

                    if (value_19 & 0x810)
                    {
                        wide_text_3 = (uint16_t *)(&value_8);
                        value_7 = wctomb_s(wide_text_3, buffer_2, 0x200, *(uint16_t *)input_4);
                        if (value_7)
                        {
                            value_24 = 1;
                        }
                    }
                    else
                    {
                        WdStoreField(&buffer_2[0], 0, 1, (uint64_t)(*(char *)input_4));
                        value_8 = 1;
                    }
                    bytes_3 = (uint16_t *)buffer_2;
                }
            }
            else
            {
                block_6:
                enabled_5 = 1;

                block_7:
                value_15 = 10;

                block_8:
                data_pointer = &input_4[1];

                if (value_19 >> 0xf || value_19 >> 0xc & 1)
                {
                    value_4 = *input_4;
                    if (enabled_5)
                    {
                        goto block_9;
                    }
                }
                else if (value_19 & 0x20)
                {
                    if (enabled_5)
                    {
                        value_4 = (int16_t)(*(uint16_t *)input_4);
                        block_9:
                        if ((int64_t)value_4 <= -1)
                        {
                            value_4 = -value_4;
                            enabled_3 = 1;
                        }
                    }
                    else
                    {
                        value_4 = *(uint16_t *)input_4;
                    }
                }
                else
                {
                    if (enabled_5)
                    {
                        value_4 = (int32_t)(*(uint32_t *)input_4);
                        goto block_9;
                    }
                    value_4 = *(uint32_t *)input_4;
                }
                value_13 = value_4 & 0xffffffff;
                if (value_19 & 0x9000)
                {
                    value_13 = value_4;
                }
                if (0 <= (int32_t)value_17)
                {
                    value_19 &= 0xfffffff7;
                    if (0x201 <= (int32_t)value_17)
                    {
                        value = 0x200;
                    }
                }
                else
                {
                    value = 1;
                }
                value_20 = -(uint32_t)(value_13 != 0) & value_3;
                wide_text_3 = (uint16_t *)buffer_3;
                while (value_17 = value - 1, 1 <= (int32_t)value || value_13)
                {
                    value_4 = value_13 / value_15;
                    value = (int32_t)(value_13 % value_15) + 0x30;
                    index = (char)value;
                    if (0x3a <= value)
                    {
                        index += (char)value_25;
                    }
                    *(char *)wide_text_3 = index;
                    wide_text_3 = (uint16_t *)((int64_t)wide_text_3 + -1);
                    value_13 = value_4;
                    value = value_17;
                }

                value_8 = (int32_t)buffer_3 - (int32_t)wide_text_3;
                bytes_3 = &((char *)wide_text_3)[1];
                if (enabled_2 && (!value_8 || *bytes_3 != '0'))
                {
                    value_8 += 1;
                    *(char *)wide_text_3 = '0';
                    bytes_3 = (char *)wide_text_3;
                }
                value = value_17;
                value_3 = value_20;
            }
            block_12:
            if (!value_24)
            {
                if (enabled_5)
                {
                    if (enabled_3)
                    {
                        buffer_4[0] = 0x2d;
                    }
                    else if (enabled_4)
                    {
                        buffer_4[0] = 0x2b;
                    }
                    else
                    {
                        if (!enabled)
                        {
                            goto block_10;
                        }
                        buffer_4[0] = 0x20;
                    }
                    value_20 = 1;
                    value_18 = 1;
                }
                else
                {
                    block_10:
                    value_18 = value_20;
                }
                value_7 = value_23 - value_8 - value_18;
                if (!(value_19 & 0xc))
                {
                    write_multi_char__output((uint64_t)((uint64_t)wide_text_3) & 0xffffffffffffff00 | (uint64_t)0x20 & 0xff, value_7, record_2, &value_9);
                }
                bytes_2 = buffer_4;
                write_string__output(bytes_2, value_18, record_2, &value_9);
                record = record_2;
                if ((value_19 & 0xc) == 8)
                {
                    write_multi_char__output((uint64_t)((uint64_t)bytes_2) & 0xffffffffffffff00 | (uint64_t)0x30 & 0xff, value_7, record_2, &value_9);
                }
                if (value_21 && 1 <= value_8)
                {
                    values[0] = 0;
                    wide_text = (uint16_t *)bytes_3;
                    value_12 = value_8;
                    do
                    {
                        value_10 = *wide_text;
                        wide_text_3 = (uint16_t *)values;
                        wide_text = &wide_text[1];
                        value_12 -= 1;
                        value_2 = wctomb_s(wide_text_3, &buffer_3[1], 6, (uint16_t)value_10);
                        if (value_2 || !values[0])
                        {
                            value_18 = 0xffffffff;
                            value_9 = 0xffffffff;
                            goto block_11;
                        }
                        wide_text_3 = (uint16_t *)(&buffer_3[1]);
                        write_string__output(wide_text_3, values[0], record_2, &value_9);
                    }
                    while (value_12);
                }
                else
                {
                    wide_text_3 = (uint16_t *)bytes_3;
                    write_string__output(bytes_3, value_8, record, &value_9);
                }
                value_18 = value_9;
                block_11:
                value_3 = value_20;

                if (0 <= value_18 && value_19 & 4)
                {
                    write_multi_char__output((uint64_t)((uint64_t)wide_text_3) & 0xffffffffffffff00 | (uint64_t)0x20 & 0xff, value_7, record_2, &value_9);
                    value_18 = value_9;
                }
            }

            goto block_15;
        }
        if (value_7 != 0x6e)
        {
            if (value_7 != 0x6f)
            {
                if (value_7 != 0x70)
                {
                    if (value_7 == 0x73)
                    {
                        goto block_4;
                    }
                    if (value_7 == 0x75)
                    {
                        goto block_7;
                    }
                    if (value_7 != 0x78)
                    {
                        goto block_12;
                    }
                    value_25 = 0x27;
                }
                else
                {
                    value = 0x10;
                    value_17 = 0x10;
                    value_19 |= 0x8000;
                    block_13:
                    value_25 = 7;
                }
                value_15 = 0x10;
            }
            else
            {
                value_15 = 8;
                if ('\0' > enabled_4)
                {
                    enabled_2 = 1;
                }
            }
            goto block_8;
        }
        data_pointer = &input_4[1];
        data_pointer_2 = (uint32_t *)(*input_4);
        if (!_get_printf_count_output())
        {
            _guard_check_icall_nop(0, 0, 0, 0, 0);
            return;
        }
        if (value_19 & 0x20)
        {
            *(int16_t *)data_pointer_2 = (int16_t)value_18;
        }
        else
        {
            *data_pointer_2 = value_18;
        }
        value_24 = 1;
    }
    else
    {
        block_14:
        value_21 = 0;

        write_char__output((uint64_t)value_15 & 0xffffffffffffff00 | (uint64_t)index & 0xff, record_2, &value_9);
        value_18 = value_9;
    }
    block_15:
    value_14 = value_22;

    value_11 = value_3;
    block_16:
    index = *bytes_4;

    input_4 = data_pointer;
    input_2 = bytes_4;
    value_3 = value_11;
    goto block_1;
}

void write_char__output(uint8_t input, WD_LAYOUT_49 *input_2, int32_t *input_3)
{
    int32_t *data_pointer;
    uint32_t value;
    if (input_2->field_0x18 & 0x40 && !input_2->field_0x10)
    {
        *input_3 = *input_3 + 1;
        return;
    }
    data_pointer = &input_2->field_0x8;
    *data_pointer = *data_pointer + -1;
    if (0 <= *data_pointer)
    {
        *input_2->field_0x0 = input;
        input_2->field_0x0 = &input_2->field_0x0[1];
        value = input;
    }
    else
    {
        value = _flsbuf((int32_t)((char)input), input_2);
    }
    if (value == 0xffffffff)
    {
        *input_3 = -1;
        return;
    }
    *input_3 = *input_3 + 1;
    return;
}

void write_multi_char__output(uint8_t input, int32_t input_2, WD_LAYOUT_49 *input_3, int32_t *input_4)
{
    if (input_2 <= 0)
    {
        return;
    }
    do
    {
        input_2 -= 1;
        write_char__output(input, input_3, input_4);
        if (*input_4 == -1)
        {
            return;
        }
    }
    while (0 < input_2);
    return;
}

void write_string__output(uint8_t *input, int32_t input_2, WD_LAYOUT_49 *input_3, int32_t *input_4)
{
    if (input_3->field_0x18 & 0x40 && !input_3->field_0x10)
    {
        *input_4 = *input_4 + input_2;
        return;
    }
    do
    {
        if (input_2 <= 0)
        {
            return;
        }
        input_2 -= 1;
        write_char__output(*input, input_3, input_4);
        input = &input[1];
    }
    while (*input_4 != -1);
    return;
}

void _woutput_l(void *input, uint16_t *input_2, uint64_t input_3, uint16_t *input_4)
{
    uint16_t index;
    int32_t value;
    char *bytes;
    uint64_t value_2;
    int32_t value_3;
    char *bytes_2 = NULL;
    uint16_t buffer_2[255];
    char byte_value;
    char buffer_3[513];
    uint32_t value_4;
    int32_t *data_pointer;
    uint16_t values[2];
    uint16_t values_2[2];
    uint64_t value_5;
    uint32_t value_6 = 0;
    void *data_pointer_2;
    int64_t value_7;
    uint64_t value_8;
    uint64_t index_2;
    int32_t value_9;
    uint32_t value_10;
    bool enabled = 0;
    uint32_t value_11 = 0;
    uint16_t *wide_text;
    uint16_t *wide_text_2;
    uint16_t *wide_text_3;
    uint32_t value_12 = 0;
    int32_t value_13 = 0;
    int32_t value_14;
    uint32_t value_15;
    char byte_value_2;
    uint32_t value_16 = 0;
    bool enabled_2 = 0;
    uint16_t *wide_text_4;
    int32_t value_17 = 0;
    void *data_pointer_3;
    uint32_t value_18 = 0;
    uint16_t *wide_text_5;
    bool enabled_3 = 0;
    bool enabled_4 = 0;
    uint32_t value_20;
    char byte_value_3;
    uint32_t value_21 = 0;
    wide_text_4 = input_4;
    data_pointer_3 = input;
    memset(buffer_2, 0, (char *)0x400);
    value_5 = 0;
    values_2[0] = L'\0';
    value_14 = 0;
    if (input && input_2)
    {
        index = *input_2;
        value_4 = 0;
        if (index)
        {
            index_2 = value_5;
            value_2 = value_5;
            do
            {
                wide_text_2 = &input_2[1];
                wide_text_5 = wide_text_2;
                if ((int32_t)value_5 < 0)
                {
                    break;
                }
                value_10 = 0;
                value_3 = value_10;
                if ((uint16_t)(index - 0x20) <= 0x5a)
                {
                    value_3 = (int32_t)"(null)"[index] & 0xf;
                }
                value_15 = (int32_t)__lookuptable[(int32_t)((int32_t)index_2 + value_3 * 8)] >> 4;
                index_2 = value_15;
                if (value_15)
                {
                    wide_text_3 = wide_text_2;
                    if (value_15 != 1)
                    {
                        if (value_15 != 2)
                        {
                            if (value_15 != 3)
                            {
                                if (value_15 != 4)
                                {
                                    if (value_15 != 5)
                                    {
                                        if (value_15 != 6)
                                        {
                                            if (value_15 == 7)
                                            {
                                                if (0x6a <= index)
                                                {
                                                    if (index != 0x6e)
                                                    {
                                                        if (index != 0x6f)
                                                        {
                                                            if (index != 0x70)
                                                            {
                                                                if (index == 0x73)
                                                                {
                                                                    goto block_6;
                                                                }
                                                                if (index == 0x75)
                                                                {
                                                                    goto block_5;
                                                                }
                                                                if (index != 0x78)
                                                                {
                                                                    goto block_8;
                                                                }
                                                                value_18 = 0x27;
                                                            }
                                                            else
                                                            {
                                                                value_21 = 0x10;
                                                                value_6 = 0x10;
                                                                value_11 |= 0x8000;
                                                                block_1:
                                                                value_18 = 7;
                                                            }
                                                            index_2 = 0x10;
                                                        }
                                                        else
                                                        {
                                                            index_2 = 8;
                                                        }
                                                        block_2:
                                                        value_20 = value_18;

                                                        wide_text_4 = &input_4[4];
                                                        if (value_11 >> 0xf || value_11 >> 0xc & 1)
                                                        {
                                                            value_2 = *(uint64_t *)input_4;
                                                            if (enabled_3)
                                                            {
                                                                goto block_3;
                                                            }
                                                        }
                                                        else if (value_11 & 0x20)
                                                        {
                                                            if (enabled_3)
                                                            {
                                                                value_2 = *input_4;
                                                                block_3:
                                                                if ((int64_t)value_2 <= -1)
                                                                {
                                                                    value_2 = -value_2;
                                                                    enabled = 1;
                                                                }
                                                            }
                                                            else
                                                            {
                                                                value_2 = (uint16_t)(*input_4);
                                                            }
                                                        }
                                                        else
                                                        {
                                                            if (enabled_3)
                                                            {
                                                                value_2 = (int32_t)(*(uint32_t *)input_4);
                                                                goto block_3;
                                                            }
                                                            value_2 = *(uint32_t *)input_4;
                                                        }
                                                        value_8 = value_2 & 0xffffffff;
                                                        if (value_11 & 0x9000)
                                                        {
                                                            value_8 = value_2;
                                                        }
                                                        if (0 <= (int32_t)value_6)
                                                        {
                                                            value_11 &= 0xfffffff7;
                                                            if (0x201 <= (int32_t)value_6)
                                                            {
                                                                value_21 = 0x200;
                                                            }
                                                        }
                                                        else
                                                        {
                                                            value_21 = 1;
                                                        }
                                                        value_12 = -(uint32_t)(value_8 != 0) & value_12;
                                                        bytes_2 = buffer_3;
                                                        while (value_6 = value_21 - 1, 1 <= (int32_t)value_21 || value_8)
                                                        {
                                                            value_2 = value_8 / index_2;
                                                            value_21 = (int32_t)(value_8 % index_2) + 0x30;
                                                            byte_value_3 = (char)value_21;
                                                            if (0x3a <= value_21)
                                                            {
                                                                byte_value_3 += (char)value_20;
                                                            }
                                                            *bytes_2 = byte_value_3;
                                                            bytes_2 = &bytes_2[-1];
                                                            value_8 = value_2;
                                                            value_21 = value_6;
                                                        }

                                                        value_2 = (uint32_t)((int32_t)buffer_3 - (int32_t)bytes_2);
                                                        bytes_2 = &bytes_2[1];
                                                        value_21 = value_6;
                                                        value_13 = value_6;
                                                        goto block_8;
                                                    }
                                                    data_pointer = *(int32_t **)input_4;
                                                    wide_text_4 = &input_4[4];
                                                    if (!_get_printf_count_output())
                                                    {
                                                        _guard_check_icall_nop(0, 0, 0, 0, 0);
                                                        return;
                                                    }
                                                    if (value_11 & 0x20)
                                                    {
                                                        *(int16_t *)data_pointer = (int16_t)value_5;
                                                    }
                                                    else
                                                    {
                                                        *data_pointer = (int32_t)value_5;
                                                    }
                                                    value_17 = 1;
                                                }
                                                else
                                                {
                                                    if (index == 0x69)
                                                    {
                                                        block_4:
                                                        enabled_3 = 1;

                                                        block_5:
                                                        index_2 = 10;

                                                        goto block_2;
                                                    }
                                                    if (index != 0x43)
                                                    {
                                                        if (index != 0x53)
                                                        {
                                                            if (index == 0x58)
                                                            {
                                                                goto block_1;
                                                            }
                                                            if (index != 0x5a)
                                                            {
                                                                if (index == 99)
                                                                {
                                                                    goto block_7;
                                                                }
                                                                if (index == 100)
                                                                {
                                                                    goto block_4;
                                                                }
                                                            }
                                                            else
                                                            {
                                                                wide_text_3 = *(uint16_t **)input_4;
                                                                wide_text_4 = &input_4[4];
                                                                if (wide_text_3 && (bytes_2 = *(char **)(&wide_text_3[4]), (uint16_t *)bytes_2))
                                                                {
                                                                    index = *wide_text_3;
                                                                    if (wide_text_3[1] < index)
                                                                    {
                                                                        _guard_check_icall_nop(0, 0, 0, 0, 0);
                                                                        return;
                                                                    }
                                                                    value_2 = index;
                                                                    if (value_11 >> 0xb & 1)
                                                                    {
                                                                        if (!(~(uint32_t)index & 1) || !(~(uint32_t)bytes_2 & 1))
                                                                        {
                                                                            _guard_check_icall_nop(0, 0, 0, 0, 0);
                                                                            return;
                                                                        }
                                                                        value_2 = index >> 1;
                                                                        value_14 = 1;
                                                                    }
                                                                    else
                                                                    {
                                                                        value_14 = 0;
                                                                    }
                                                                }
                                                                else
                                                                {
                                                                    bytes_2 = "(null)";
                                                                    index_2 = 0xffffffffffffffff;
                                                                    do
                                                                    {
                                                                        value_2 = index_2 + 1;
                                                                        bytes = &"null)"[index_2];
                                                                        index_2 = value_2;
                                                                    }
                                                                    while (*bytes);
                                                                }
                                                            }
                                                        }
                                                        else
                                                        {
                                                            if (!(value_11 & 0x830))
                                                            {
                                                                value_11 |= 0x20;
                                                            }
                                                            block_6:
                                                            bytes = *(char **)input_4;

                                                            value_3 = value_6;
                                                            if (value_6 == 0xffffffff)
                                                            {
                                                                value_3 = 0x7fffffff;
                                                            }
                                                            wide_text_4 = &input_4[4];
                                                            if (value_11 & 0x20)
                                                            {
                                                                bytes_2 = bytes;
                                                                if (!(uint16_t *)bytes)
                                                                {
                                                                    bytes_2 = "(null)";
                                                                    bytes = "(null)";
                                                                }
                                                                value_2 = 0;
                                                                if (1 <= value_3)
                                                                {
                                                                    do
                                                                    {
                                                                        if (!(*bytes))
                                                                        {
                                                                            goto block_8;
                                                                        }
                                                                        bytes = &((char *)bytes)[1];
                                                                        value_10 = (int32_t)value_2 + 1;
                                                                        value_2 = value_10;
                                                                    }
                                                                    while ((int32_t)value_10 < value_3);
                                                                }
                                                            }
                                                            else
                                                            {
                                                                value_14 = 1;
                                                                wide_text = L"(null)";
                                                                bytes_2 = (char *)L"(null)";
                                                                if ((uint16_t *)bytes)
                                                                {
                                                                    wide_text = (uint16_t *)bytes;
                                                                    bytes_2 = bytes;
                                                                }
                                                                while (value_3 && (value_3 = value_3 - 1, *wide_text))
                                                                {
                                                                    wide_text = &wide_text[1];
                                                                }

                                                                value_2 = (int64_t)wide_text - (int64_t)bytes_2 >> 1 & 0xffffffff;
                                                            }
                                                        }
                                                    }
                                                    else
                                                    {
                                                        if (!(value_11 & 0x830))
                                                        {
                                                            value_11 |= 0x20;
                                                        }
                                                        block_7:
                                                        values_2[0] = *input_4;

                                                        wide_text_4 = &input_4[4];
                                                        value_14 = 1;
                                                        if (value_11 & 0x20)
                                                        {
                                                            value_7 = (int64_t)__mb_cur_max;
                                                            byte_value = (char)values_2[0];
                                                            byte_value_2 = 0;
                                                            if (mbtowc(buffer_2, &byte_value, value_7) <= -1)
                                                            {
                                                                value_17 = 1;
                                                            }
                                                        }
                                                        else
                                                        {
                                                            buffer_2[0] = values_2[0];
                                                        }
                                                        bytes_2 = (uint16_t *)buffer_2;
                                                        value_2 = 1;
                                                    }
                                                    block_8:
                                                    if (value_17)
                                                    {
                                                        goto block_15;
                                                    }

                                                    if (enabled_3)
                                                    {
                                                        if (enabled)
                                                        {
                                                            values[0] = 0x2d;
                                                        }
                                                        else if (enabled_2)
                                                        {
                                                            values[0] = 0x2b;
                                                        }
                                                        else
                                                        {
                                                            if (!enabled_4)
                                                            {
                                                                goto block_9;
                                                            }
                                                            values[0] = 0x20;
                                                        }
                                                        value_12 = 1;
                                                        value_6 = 1;
                                                    }
                                                    else
                                                    {
                                                        block_9:
                                                        value_6 = value_12;
                                                    }
                                                    value_9 = value_16 - (int32_t)value_2 - value_6;
                                                    if (!(value_11 & 0xc))
                                                    {
                                                        write_multi_char__woutput(0x20, value_9, data_pointer_3, &value_4);
                                                    }
                                                    write_string__woutput(values, value_6, data_pointer_3, &value_4);
                                                    data_pointer_2 = data_pointer_3;
                                                    if ((value_11 & 0xc) == 8)
                                                    {
                                                        write_multi_char__woutput(0x30, value_9, data_pointer_3, &value_4);
                                                    }
                                                    if (value_14 || (int32_t)value_2 <= 0)
                                                    {
                                                        write_string__woutput(bytes_2, value_2 & 0xffffffff, data_pointer_2, &value_4);
                                                    }
                                                    else
                                                    {
                                                        value_5 = value_2 & 0xffffffff;
                                                        wide_text = (uint16_t *)bytes_2;
                                                        do
                                                        {
                                                            value_6 = (int32_t)value_5 - 1;
                                                            value = mbtowc(values_2, wide_text, (int64_t)__mb_cur_max);
                                                            if (value != 2)
                                                            {
                                                                if (value <= 0)
                                                                {
                                                                    value_5 = 0xffffffff;
                                                                    value_4 = 0xffffffff;
                                                                    data_pointer_2 = data_pointer_3;
                                                                    wide_text_2 = wide_text_5;
                                                                    goto block_10;
                                                                }
                                                            }
                                                            else
                                                            {
                                                                value_6 = (int32_t)value_5 - 2;
                                                            }
                                                            value_5 = value_6;
                                                            write_char__woutput((uint16_t)values_2[0], data_pointer_3, &value_4);
                                                            wide_text = (uint16_t *)((int64_t)wide_text + value);
                                                        }
                                                        while (0 < (int32_t)value_6);
                                                        data_pointer_2 = data_pointer_3;
                                                        wide_text_2 = wide_text_5;
                                                    }
                                                    value_5 = value_4;
                                                    block_10:
                                                    if (0 <= (int32_t)value_5 && value_11 & 4)
                                                    {
                                                        write_multi_char__woutput(0x20, value_9, data_pointer_2, &value_4);
                                                        value_6 = value_13;
                                                        value_21 = value_13;
                                                        goto block_14;
                                                    }
                                                }
                                                index_2 = value_15;
                                                wide_text_3 = wide_text_2;
                                                value_6 = value_13;
                                                value_21 = value_13;
                                            }
                                        }
                                        else if (index != 0x49)
                                        {
                                            if (index != 0x68)
                                            {
                                                if (index == 0x6a)
                                                {
                                                    goto block_11;
                                                }
                                                if (index != 0x6c)
                                                {
                                                    if (index == 0x74)
                                                    {
                                                        goto block_11;
                                                    }
                                                    if (index != 0x77)
                                                    {
                                                        if (index == 0x7a)
                                                        {
                                                            goto block_11;
                                                        }
                                                    }
                                                    else
                                                    {
                                                        value_11 |= 0x800;
                                                    }
                                                }
                                                else
                                                {
                                                    if (*wide_text_2 == 0x6c)
                                                    {
                                                        wide_text_3 = &input_2[2];
                                                    }
                                                    value_3 = 0x1000;
                                                    if (*wide_text_2 != 0x6c)
                                                    {
                                                        value_3 = 0x10;
                                                    }
                                                    value_11 |= value_3;
                                                }
                                            }
                                            else
                                            {
                                                value_11 |= 0x20;
                                            }
                                        }
                                        else
                                        {
                                            block_11:
                                            value_11 |= 0x8000;

                                            if (index != 0x49)
                                            {
                                                if (index != 0x6a)
                                                {
                                                    block_12:
                                                    if (0x20 >= (uint16_t)(*wide_text_2 - 0x58))
                                                    {
                                                        if (0x120821001U >> ((uint16_t)(*wide_text_2 - 0x58) & 0x3fULL) & 1)
                                                        {
                                                            goto block_16;
                                                        }
                                                    }

                                                    value_15 = 0;
                                                    goto block_13;
                                                }
                                            }
                                            else if (*wide_text_2 != 0x36 || input_2[2] != 0x34)
                                            {
                                                if (*wide_text_2 != 0x33 || input_2[2] != 0x32)
                                                {
                                                    goto block_12;
                                                }
                                                value_11 &= 0xffff7fff;
                                                wide_text_3 = &input_2[3];
                                            }
                                            else
                                            {
                                                wide_text_3 = &input_2[3];
                                            }
                                        }
                                    }
                                    else if (index != 0x2a)
                                    {
                                        value_13 = (uint32_t)index + (value_6 * 5 + -0x18) * 2;
                                        value_6 = value_13;
                                        value_21 = value_13;
                                    }
                                    else
                                    {
                                        value_13 = *(uint32_t *)input_4;
                                        wide_text_4 = &input_4[4];
                                        value_6 = value_13;
                                        value_21 = value_13;
                                        if (value_13 <= -1)
                                        {
                                            value_13 = 0xffffffff;
                                            value_6 = 0xffffffff;
                                            value_21 = 0xffffffff;
                                        }
                                    }
                                }
                                else
                                {
                                    value_13 = 0;
                                    value_6 = value_10;
                                    value_21 = value_10;
                                }
                            }
                            else if (index != 0x2a)
                            {
                                value_16 = (uint32_t)index + (value_16 * 5 + -0x18) * 2;
                            }
                            else
                            {
                                value_3 = *(uint32_t *)input_4;
                                wide_text_4 = &input_4[4];
                                if (value_3 <= -1)
                                {
                                    value_11 |= 4;
                                }
                                value_16 = -value_3;
                                if (0 <= value_3)
                                {
                                    value_16 = value_3;
                                }
                            }
                        }
                        else if (index != 0x20)
                        {
                            if (index != 0x23)
                            {
                                if (index != 0x2b)
                                {
                                    if (index != 0x2d)
                                    {
                                        if (index == 0x30)
                                        {
                                            value_11 |= 8;
                                        }
                                    }
                                    else
                                    {
                                        value_11 |= 4;
                                    }
                                }
                                else
                                {
                                    enabled_2 = 1;
                                }
                            }
                            else
                            {
                            }
                        }
                        else
                        {
                            enabled_4 = 1;
                        }
                    }
                    else
                    {
                        value_21 = 0xffffffff;
                        value_6 = 0xffffffff;
                        value_17 = 0;
                        value_13 = 0xffffffff;
                        value_11 = 0;
                        enabled_4 = 0;
                        enabled_3 = 0;
                        enabled_2 = 0;
                        enabled = 0;
                        value_16 = 0;
                        value_12 = 0;
                        value_14 = 0;
                    }
                }
                else
                {
                    block_13:
                    value_14 = 1;

                    write_char__woutput((uint64_t)index, data_pointer_3, &value_4);
                    block_14:
                    value_5 = value_4;

                    block_15:
                    index_2 = value_15;

                    wide_text_3 = wide_text_2;
                }
                block_16:
                index = *wide_text_3;

                input_4 = wide_text_4;
                input_2 = wide_text_3;
            }
            while (index);
        }
    }
    else
    {
        _guard_check_icall_nop(0, 0, 0, 0, 0);
    }
    return;
}

void write_char__woutput(uint64_t input, void *input_2, int32_t *input_3)
{
    if (((uint32_t *)input_2)[6] & 0x40 && !((int64_t *)input_2)[2])
    {
        *input_3 = *input_3 + 1;
        return;
    }
    if (_fputwc_nolock(input, input_2) == -1 && ((uint32_t *)input_2)[6] & 0x20)
    {
        *input_3 = -1;
        return;
    }
    *input_3 = *input_3 + 1;
    return;
}

void write_multi_char__woutput(uint16_t input, int32_t input_2, void *input_3, int32_t *input_4)
{
    if (input_2 <= 0)
    {
        return;
    }
    do
    {
        input_2 -= 1;
        write_char__woutput(input, input_3, input_4);
        if (*input_4 == -1)
        {
            return;
        }
    }
    while (0 < input_2);
    return;
}

void write_string__woutput(uint16_t *input, int32_t input_2, void *input_3, int32_t *input_4)
{
    if (((uint32_t *)input_3)[6] & 0x40 && !((int64_t *)input_3)[2])
    {
        *input_4 = *input_4 + input_2;
        return;
    }
    do
    {
        if (input_2 <= 0)
        {
            return;
        }
        input_2 -= 1;
        write_char__woutput(*input, input_3, input_4);
        input = &input[1];
    }
    while (*input_4 != -1);
    return;
}

bool _get_printf_count_output(void)
{
    return WdPrintfcountStorage == (__security_cookie | 1);
}

uint64_t _wctomb_s_l(uint32_t *input, int64_t input_2, uint64_t input_3, uint16_t input_4)
{
    uint16_t values[4];
    uint32_t values_2[4];
    uint64_t value;
    if (!input_2 && input_3)
    {
        if (!input)
        {
            return 0;
        }
        *input = 0;
        return 0;
    }
    if (input)
    {
        *input = 0xffffffff;
    }
    values[0] = input_4;
    if (input_3 <= 0x7fffffff)
    {
        if (!input_2)
        {
            if (!input)
            {
                return 0;
            }
            *input = __mb_cur_max;
            return 0;
        }
        values_2[0] = 0;
        if ((int32_t)RtlUnicodeToMultiByteN(input_2, input_3 & 0xffffffff, values_2, values, (uint64_t)value & 0xffffffff00000000 | (uint64_t)2 & 0xffffffff) <= -1)
        {
            return 0x2a;
        }
        if (!input)
        {
            return 0;
        }
        *input = values_2[0];
        return 0;
    }
    _guard_check_icall_nop(0, 0, 0, 0, 0);
    return 0x16;
}

uint64_t wctomb_s(void)
{
    return _wctomb_s_l();
}

uint64_t _fputwc_nolock(uint16_t input, WD_LAYOUT_23 *input_2)
{
    int32_t *data_pointer;
    uint64_t value;
    if (!input_2)
    {
        _guard_check_icall_nop(0, 0, 0, 0, 0);
        value = 0xffff;
        return value;
    }
    data_pointer = &input_2->field_0x8;
    *data_pointer = *data_pointer + -2;
    if (0 <= *data_pointer)
    {
        *input_2->field_0x0 = input;
        value = input;
        input_2->field_0x0 = &input_2->field_0x0[1];
    }
    else
    {
        value = _flswbuf(input, input_2);
    }
    return value;
}

int32_t mbtowc(uint16_t *input, char *input_2, int64_t input_3)
{
    char *buffer[3];
    if (!input_2)
    {
        return 0;
    }
    if (!input_3)
    {
        return 0;
    }
    if (*input_2)
    {
        buffer[0] = input_2;
        *input = RtlAnsiCharToUnicodeChar(buffer);
        return (int32_t)buffer[0] - (int32_t)input_2;
    }
    if (!input)
    {
        return 0;
    }
    *input = 0;
    return 0;
}

uint64_t _flswbuf(uint64_t input, WD_LAYOUT_22 *input_2)
{
    input_2->field_0x18 = input_2->field_0x18 | 0x20;
    return 0xffff;
}

uint32_t RtlUnicodeToMultiByteN(void)
{
    return RtlUnicodeToMultiByteN();
}

uint16_t RtlAnsiCharToUnicodeChar(void)
{
    return RtlAnsiCharToUnicodeChar();
}

int64_t CBufferGetNextOffset(WD_LAYOUT_53 *input, uint64_t input_2)
{
    int64_t value;
    if (input && input_2 && input_2 <= (uint64_t)input->field_0x8)
    {
        value = input->field_0x0;
        input->field_0x8 = input->field_0x8 - input_2;
        input->field_0x0 = value + input_2;
        return value;
    }
    return 0;
}

int32_t ComputeEventEntryHash(char input, uint64_t input_2, int64_t input_3)
{
    uint64_t *data_pointer;
    int32_t values[2];
    uint8_t byte_value;
    uint64_t value;
    char byte_value_2;
    values[0] = 0;
    byte_value_2 = '\b';
    RunningHash(values, (uint8_t *)(input_3 + 0x10), 8);
    byte_value = input + 2;
    if (byte_value < (uint8_t)(byte_value_2 + 5U))
    {
        data_pointer = (uint64_t *)(byte_value * 0x10ULL + input_3);
        value = (uint8_t)(byte_value_2 + 5U - byte_value);
        do
        {
            RunningHash(values, (uint8_t *)(*data_pointer), *(uint32_t *)(&data_pointer[1]));
            data_pointer = &data_pointer[2];
            value -= 1;
        }
        while (value);
    }
    return ((uint32_t)(values[0] * 9) >> 0xb ^ values[0] * 9) * 0x8001;
}

uint64_t CreateNewEventEntry(char input, uint32_t *input_2, uint64_t input_3, int64_t input_4, char input_5, uint32_t input_6, uint64_t *input_7)
{
    uint32_t *data_pointer;
    uint32_t value;
    uint32_t value_2;
    int64_t buffer;
    uint64_t value_3;
    uint32_t *data_pointer_2;
    uint32_t *data_pointer_3;
    uint8_t byte_value;
    uint64_t value_4 = 0;
    uint8_t byte_value_2 = 0;
    uint32_t *data_pointer_4;
    uint32_t value_5;
    uint64_t value_6;
    char *allocation_size;
    int64_t value_7;
    int64_t value_8;
    char *bytes;
    uint32_t value_9;
    uint32_t value_10;
    uint32_t value_11;
    uint32_t value_12;
    uint64_t value_13;
    uint32_t *data_pointer_5;
    uint64_t *data_pointer_6;
    data_pointer_2 = (uint32_t *)(input_4 + 8);
    *input_7 = 0;
    value_3 = value_4;
    data_pointer_4 = data_pointer_2;
    value_6 = value_4;
    do
    {
        value = *data_pointer_4;
        data_pointer_4 = &data_pointer_4[4];
        value_13 = value_6 + value;
        if (2 <= byte_value_2)
        {
            value_6 = value_13;
        }
        value_13 = value_3 + value;
        if (2 <= byte_value_2)
        {
            value_13 = value_3;
        }
        byte_value_2 += 1;
        value_3 = value_13;
    }
    while (byte_value_2 < 0xd);
    if (0x10000 <= value_13 + value_6)
    {
        return WD_STATUS_INTEGER_OVERFLOW;
    }
    allocation_size = (char *)(value_6 + 0xfe);
    if (allocation_size && (buffer = ExAllocatePoolWithTag((-(uint32_t)(input != '\0') & 0xfffffe01) + 0x200, allocation_size, 0x47417254, -input), buffer))
    {
        memset(buffer, 0, allocation_size);
        bytes = allocation_size;
        value_8 = CBufferGetNextOffset(&buffer, 0xd0);
        byte_value_2 = input_5 + 2;
        if (byte_value_2)
        {
            value_7 = value_8 - input_4;
            do
            {
                if (2 <= (uint8_t)value_4)
                {
                    value = *data_pointer_2;
                    data_pointer_6 = (uint64_t *)CBufferGetNextOffset(&buffer, value);
                    memmove(data_pointer_6, *(uint64_t **)(&data_pointer_2[-2]), value);
                    *(uint64_t **)((int64_t)data_pointer_2 + value_7 + -8) = data_pointer_6;
                    *(uint32_t *)((int64_t)data_pointer_2 + value_7 + 4) = *(uint32_t *)((int64_t)data_pointer_2 + (input_4 - value_8) + value_7 + 4);
                    *(uint32_t *)((int64_t)data_pointer_2 + value_7) = *data_pointer_2;
                }
                else
                {
                    value = data_pointer_2[-1];
                    value_5 = *data_pointer_2;
                    value_9 = data_pointer_2[1];
                    data_pointer_4 = (uint32_t *)((int64_t)data_pointer_2 + value_7 + -8);
                    *data_pointer_4 = data_pointer_2[-2];
                    data_pointer_4[1] = value;
                    data_pointer_4[2] = value_5;
                    data_pointer_4[3] = value_9;
                }
                byte_value = (uint8_t)value_4 + 1;
                value_4 = byte_value;
                data_pointer_2 = &data_pointer_2[4];
            }
            while (byte_value < byte_value_2);
        }
        value_7 = 0x2e;
        data_pointer_5 = (uint32_t *)CBufferGetNextOffset(&buffer, 0x2e);
        *(int64_t *)(&data_pointer_5[4]) = value_8;
        value_2 = *input_2;
        value_10 = input_2[1];
        value_11 = input_2[2];
        value_12 = input_2[3];
        *(char *)(&data_pointer_5[0xb]) = 0xd;
        ((char *)data_pointer_5)[0x2d] = input_5;
        data_pointer_5[10] = input_6;
        *data_pointer_5 = value_2;
        data_pointer_5[1] = value_10;
        data_pointer_5[2] = value_11;
        data_pointer_5[3] = value_12;
        if (byte_value_2 <= 0xc)
        {
            value_7 = value_7 + -0x36 - input_4;
            value_3 = (uint8_t)(0xd - byte_value_2);
            data_pointer_3 = (uint32_t *)(byte_value_2 * 0x10ULL + 8 + input_4);
            do
            {
                value_2 = *data_pointer_3;
                data_pointer_6 = (uint64_t *)CBufferGetNextOffset(&buffer, value_2);
                memmove(data_pointer_6, *(uint64_t **)(&data_pointer_3[-2]), value_2);
                *(uint64_t **)((int64_t)data_pointer_3 + *(int64_t *)(&data_pointer_5[4]) + value_7) = data_pointer_6;
                *(uint32_t *)((int64_t)data_pointer_3 + *(int64_t *)(&data_pointer_5[4]) + value_7 + 0xc) = data_pointer_3[1];
                data_pointer = &data_pointer_3[4];
                *(uint32_t *)((int64_t)data_pointer_3 + *(int64_t *)(&data_pointer_5[4]) + value_7 + 8) = *data_pointer_3;
                value_3 -= 1;
                data_pointer_3 = data_pointer;
            }
            while (value_3);
        }
        *input_7 = data_pointer_5;
        return 0;
    }
    return 0xc0000017;
}

void DestroyEventEntry(WD_LAYOUT_45 *input)
{
    if (!input)
    {
        return;
    }
    ExFreePoolWithTag(input->field_0x10, 0);
    return;
}

void EnableFlushTimer(int64_t input, uint64_t input_2)
{
    uint64_t value;
    uint64_t value_2;
    if (!input)
    {
        return;
    }
    value = 0;
    value_2 = 0xffffffffffffffff;
    (*__imp_ExSetTimer)(input, (input_2 & 0xffffffff) * -10000, 0, &value);
    return;
}

uint64_t ExtractAggregateFieldTypes(uint64_t input, void *input_2)
{
    uint8_t byte_value;
    uint8_t *bytes;
    uint8_t byte_value_2;
    uint8_t byte_value_3;
    uint32_t value;
    int64_t value_2;
    uint32_t value_3;
    uint64_t value_4;
    uint64_t value_5;
    uint64_t value_6;
    uint8_t *bytes_2;
    value_2 = ((int64_t *)input_2)[2];
    byte_value_2 = 0;
    value = ((uint32_t *)input_2)[6];
    bytes_2 = (uint8_t *)(value_2 + 2);
    do
    {
        byte_value = *bytes_2;
        bytes_2 = &bytes_2[1];
    }
    while ((char)byte_value < '\0');
    do
    {
        byte_value = *bytes_2;
        value_4 = 0;
        bytes_2 = &bytes_2[1];
    }
    while (byte_value);
    while (bytes_2 < (uint8_t *)((uint64_t)value + value_2))
    {
        do
        {
            bytes = bytes_2;
            value_6 = (uint64_t)(value_4 >> 8);
            value_4 = ((uint64_t)value_6 & 0xffffffffffffffULL) << 8 | (uint64_t)(*bytes) & 0xffULL;
            bytes_2 = &bytes[1];
        }
        while (*bytes);
        byte_value = bytes[1];
        if ('\0' <= (char)byte_value)
        {
            break;
        }
        value_4 = ((uint64_t)value_6 & 0xffffffffffffffULL) << 8 | (uint64_t)bytes[2] & 0xffULL;
        bytes_2 = &bytes[3];
        if ('\0' <= (char)bytes[2])
        {
            break;
        }
        for (; byte_value_3 = *bytes_2, (char)byte_value_3 <= '\xff'; bytes_2 = &bytes_2[1])
        {
            if (byte_value_3 != 0x80)
            {
                return (uint64_t)value_4 & 0xffffffffffffff00 | (uint64_t)byte_value_2 & 0xff;
            }
        }

        if ((byte_value & 0x7f) != 9 || (value_3 = (int32_t)((uint64_t)((uint64_t)input_2) & 0xffffffffffffff00 | (uint64_t)byte_value_3 & 0xff) - 0x71, value_4 = value_3, 3 <= (uint8_t)value_3))
        {
            break;
        }
        value_5 = byte_value_2;
        value_4 = value_5 * 2;
        byte_value_2 += 1;
        ((uint8_t *)input_2)[value_5 * 0x10 + 0x2d] = byte_value_3;
    }

    block_1:
    return (uint64_t)value_4 & 0xffffffffffffff00 | (uint64_t)byte_value_2 & 0xff;
}

void FinishHash(int32_t *input)
{
    *input = ((uint32_t)(*input * 9) >> 0xb ^ *input * 9) * 0x8001;
    return;
}

void FlushLookUpTableBucket(void *input, uint64_t input_2)
{
    int64_t value;
    int32_t value_2;
    uint64_t index;
    int64_t value_4;
    char byte_value;
    int64_t *data_pointer;
    int64_t *data_pointer_2;
    uint64_t value_5;
    int64_t value_6;
    int64_t value_7;
    index = input_2 & 0xffffffff;
    if (((int64_t *)input)[index])
    {
        byte_value = 0;
        KeEnterCriticalRegion();
        if (WdTlgaggregateimplStorage3)
        {
            value_5 = 0;
            (*__imp_ExAcquirePushLockExclusiveEx)((int64_t)input + 0x110, 0);
        }
        else
        {
            value_5 = (uint64_t)input_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
            ExAcquireResourceExclusiveLite((int64_t)input + 0x110, value_5);
        }
        if (!((char *)input)[0x1dd])
        {
            byte_value = ExAcquireSpinLockExclusive((int64_t)input + 0x180);
        }
        value = ((int64_t *)input)[index];
        data_pointer_2 = &value_7;
        ((uint64_t *)input)[index] = 0;
        value_2 = 0;
        value_7 = value;
        if (value)
        {
            value_6 = value;
            do
            {
                value_4 = *(int64_t *)(value_6 + 0x20);
                *(uint64_t *)(value_6 + 0x20) = 0;
                data_pointer_2 = (int64_t *)(*data_pointer_2 + 0x18);
                value_6 = *data_pointer_2;
                data_pointer = data_pointer_2;
                while (value_6)
                {
                    data_pointer = (int64_t *)(value_6 + 0x20);
                    value_6 = *data_pointer;
                }

                *data_pointer = value_4;
                value_2 += 1;
                value_6 = *data_pointer_2;
                value_5 = 0;
            }
            while (value_6);
        }
        *(int32_t *)((int64_t)input + 0x100) = *(int32_t *)((int64_t)input + 0x100) - value_2;
        if (!((char *)input)[0x1dd])
        {
            ExReleaseSpinLockExclusive((int64_t)input + 0x180, (uint64_t)value_5 & 0xffffffffffffff00 | (uint64_t)byte_value & 0xff);
        }
        if (WdTlgaggregateimplStorage3)
        {
            (*__imp_ExReleasePushLockExclusiveEx)((int64_t)input + 0x110, 0);
        }
        else
        {
            ExReleaseResourceLite((int64_t)input + 0x110);
        }
        KeLeaveCriticalRegion();
        FlushEventEntryList(*(uint64_t *)(((int64_t *)input)[0x38] + 0x20), value);
    }
    return;
}

uint64_t InsertEventEntryInLookUpTable(uint64_t input, int64_t *input_2, uint64_t input_3, int64_t input_4, uint8_t input_5)
{
    int64_t value;
    int32_t value_2;
    uint64_t left_buffer;
    int64_t value_3;
    int64_t *right_buffer;
    uint32_t index;
    int64_t value_4;
    int64_t value_5;
    uint64_t value_6;
    int64_t *data_pointer;
    char byte_value;
    uint32_t buffer_size;
    int64_t value_7;
    bool enabled;
    bool enabled_2;
    int64_t value_8;
    uint8_t current_irql;
    uint32_t value_9;
    value_8 = WdTracelogStorage5;
    value_6 = input_5;
    right_buffer = input_2;
    value_9 = ComputeEventEntryHash((uint64_t)input & 0xffffffffffffff00 | (uint64_t)input_5 & 0xff, input_2, input_4);
    current_irql = KeGetCurrentIrql();
    if (2 <= current_irql)
    {
        left_buffer = value_8 + 0x180;
        if (*(char *)(value_8 + 0x1dd))
        {
            KeBugCheckEx(0xd1, left_buffer, (uint8_t)KeGetCurrentIrql(), 1, 0);
        }
        ExAcquireSpinLockSharedAtDpcLevel(left_buffer);
        block_1:
        enabled_2 = 1;
    }
    else
    {
        if (KeIsExecutingDpc())
        {
            left_buffer = value_8 + 0x180;
            if (*(char *)(value_8 + 0x1dd))
            {
                KeBugCheckEx(0xd1, left_buffer, (uint8_t)KeGetCurrentIrql(), 1, 0);
            }
            ExAcquireSpinLockShared(left_buffer);
            goto block_1;
        }
        left_buffer = value_8 + 0x110;
        KeEnterCriticalRegion();
        if (WdTlgaggregateimplStorage3)
        {
            right_buffer = NULL;
            (*__imp_ExAcquirePushLockSharedEx)(left_buffer, 0);
        }
        else
        {
            right_buffer = (int64_t *)((uint64_t)((uint64_t)right_buffer) & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
            ExAcquireResourceSharedLite(left_buffer, right_buffer);
        }
        enabled_2 = 0;
    }
    data_pointer = (int64_t *)(value_8 + (value_9 & 0x1f) * 8ULL);
    block_3:
    if (*data_pointer)
    {
        value_3 = *data_pointer;
        index = *(uint32_t *)(value_3 + 0x28);
        left_buffer = index;
        if (value_9 != index)
        {
            value_2 = value_9 - index;
        }
        else
        {
            value_4 = *(int64_t *)(value_3 + 0x10);
            left_buffer = input_4 + 0x10;
            right_buffer = (int64_t *)(value_4 + 0x10);
            value_2 = memcmp(left_buffer, right_buffer, 8);
            if (!value_2)
            {
                for (index = *(uint8_t *)(value_3 + 0x2d) + 2; index <= 0xc; index = index + 1)
                {
                    left_buffer = index * 0x10ULL;
                    buffer_size = *(uint32_t *)(left_buffer + 8 + input_4);
                    right_buffer = (int64_t *)((uint64_t)buffer_size);
                    value_2 = buffer_size - *(int32_t *)(left_buffer + 8 + value_4);
                    if (value_2)
                    {
                        goto block_2;
                    }
                    right_buffer = *(int64_t **)(left_buffer + value_4);
                    left_buffer = *(uint64_t *)(left_buffer + input_4);
                    value_2 = memcmp(left_buffer, right_buffer, buffer_size);
                    if (value_2)
                    {
                        goto block_2;
                    }
                }

                value_2 = 0;
            }
        }
        block_2:
        value_3 = *data_pointer;

        if (value_2)
        {
            goto block_5;
        }
        if (value_3 && 3 <= (uint8_t)(input_5 + 2))
        {
            value_4 = 0x20;
            do
            {
                value_5 = *(*(int64_t **)(value_4 + input_4));
                byte_value = *(char *)(value_4 + 0xd + *(int64_t *)(value_3 + 0x10));
                right_buffer = *(int64_t **)(value_4 + *(int64_t *)(value_3 + 0x10));
                if (byte_value != 'q')
                {
                    if (byte_value == 'r' || byte_value == 's')
                    {
                        do
                        {
                            value_7 = *right_buffer;
                            if (byte_value != 'r')
                            {
                                if (value_5 <= value_7)
                                {
                                    break;
                                }
                            }
                            else if (value_7 <= value_5)
                            {
                                break;
                            }
                            WdUnresolvedAtomicBegin();
                            value = *right_buffer;
                            if (value_7 == value)
                            {
                                *right_buffer = value_5;
                            }
                            WdUnresolvedAtomicEnd();
                        }
                        while (value_7 != value);
                    }
                }
                else
                {
                    WdAtomicAdd64((volatile int64_t *)right_buffer, value_5);
                }
                value_4 += 0x10;
                value_6 -= 1;
            }
            while (value_6);
        }
        value_6 = 0;
    }
    else if (0x400 <= *(uint32_t *)(value_8 + 0x100))
    {
        *(int32_t *)(value_8 + 0x1a4) = *(int32_t *)(value_8 + 0x1a4) + 1;
        value_6 = 0xc0000023;
    }
    else
    {
        left_buffer = CreateNewEventEntry((uint64_t)left_buffer & 0xffffffffffffff00 | (uint64_t)(*(char *)(value_8 + 0x1dd)) & 0xff, input_2);
        value_6 = left_buffer & 0xffffffff;
        right_buffer = input_2;
        if ((int32_t)left_buffer != -0x3fffffe9)
        {
            *(int32_t *)(value_8 + 0x1ac) = *(int32_t *)(value_8 + 0x1ac) + 1;
        }
        else
        {
            *(int32_t *)(value_8 + 0x1a8) = *(int32_t *)(value_8 + 0x1a8) + 1;
        }
    }

    enabled = 0;
    if (!(*(int32_t *)(value_8 + 0x1d8)) || *(int64_t *)(value_8 + 0x1d0) || WdTlgaggregateimplStorage8 <= 0)
    {
        goto block_4;
    }
    value_3 = KeQueryPerformanceCounter(0);
    if (1 <= *(int64_t *)(value_8 + 0x178))
    {
        value_4 = (uint64_t)(*(uint32_t *)(value_8 + 0x1d8)) * WdTlgaggregateimplStorage8;
        value_5 = value_3 - *(int64_t *)(value_8 + 0x178);
        right_buffer = (int64_t *)(value_4 / 1000);
        if (value_5 <= (int64_t)right_buffer)
        {
            if (0 < value_5)
            {
                goto block_4;
            }
        }
        else
        {
            if (current_irql <= 1)
            {
                value_2 = KeIsExecutingDpc(value_4, right_buffer);
                enabled = 0;
                if (!value_2)
                {
                    enabled = 1;
                }
            }
            if (!enabled)
            {
                goto block_4;
            }
        }
    }
    *(int64_t *)(value_8 + 0x178) = value_3;
    block_4:
    if (enabled_2)
    {
        if (2 <= current_irql)
        {
            ExReleaseSpinLockSharedFromDpcLevel(value_8 + 0x180);
        }
        else
        {
            ExReleaseSpinLockShared(value_8 + 0x180, (uint64_t)((uint64_t)right_buffer) & 0xffffffffffffff00 | (uint64_t)current_irql & 0xff);
        }
    }
    else
    {
        if (WdTlgaggregateimplStorage3)
        {
            (*__imp_ExReleasePushLockSharedEx)(value_8 + 0x110, 0);
        }
        else
        {
            ExReleaseResourceLite(value_8 + 0x110);
        }
        KeLeaveCriticalRegion();
    }

    if (enabled)
    {
        LookUpTableFlushComplete(value_8);
    }
    return value_6;
    block_5:
    data_pointer = (int64_t *)(((int64_t)value_2 >> 0x3f & 0xfffffffffffffff8U) + 0x20 + value_3);

    goto block_3;
}

void RunningHash(uint32_t *input, uint8_t *input_2, uint64_t input_3)
{
    uint8_t *bytes;
    uint32_t value;
    uint64_t index = 0;
    if (!input_3)
    {
        return;
    }
    value = *input;
    do
    {
        bytes = &input_2[index];
        index += 1;
        value = (*bytes + value) * 0x401;
        value = value >> 6 ^ value;
    }
    while (index < input_3);
    *input = value;
    return;
}

void TlgAggregateInternalFlushTimerCallbackKernelMode(int64_t input, void *input_2)
{
    int16_t value;
    int16_t value_2 = 0;
    WdUnresolvedAtomicBegin();
    value = *(int16_t *)((int64_t)input_2 + 0x38);
    if (value)
    {
        value_2 = value;
    }
    else
    {
        *(int16_t *)((int64_t)input_2 + 0x38) = 1;
    }
    WdUnresolvedAtomicEnd();
    if (value_2)
    {
        if (value_2 != 1)
        {
            return;
        }
        EnableFlushTimer(input, 15000);
        return;
    }
    ExQueueWorkItem(input_2);
    return;
}

void TlgAggregateInitialize(void)
{
    uint64_t string = 0;
    uint64_t value = 0;
    RtlInitUnicodeString(&string, L"ExAcquirePushLockSharedEx");
    WdTlgaggregateimplStorage3 = MmGetSystemRoutineAddress(&string) != 0;
    RtlInitUnicodeString(&string, L"ExAllocateTimer");
    WdTlgaggregateimplStorage2 = MmGetSystemRoutineAddress(&string) != 0;
    KeQueryPerformanceCounter(WD_TLGAGGREGATEIMPL_UNRECOVERED_ADDRESS);
    if (WdTlgaggregateimplStorage3)
    {
        WdTlgaggregateimplStorage6 = 0;
    }
    else
    {
        ExInitializeResourceLite(WD_TLGAGGREGATEIMPL_UNRECOVERED_ADDRESS2);
    }
    return;
}

void _tlgWriteAgg(uint64_t input, uint8_t *input_2, uint64_t input_3, uint64_t input_4, uint64_t *input_5)
{
    uint64_t *data_pointer;
    char byte_value;
    int32_t value;
    uint32_t value_2;
    uint64_t value_3;
    data_pointer = input_5;
    value = (uint32_t)(*input_2) << 0x18;
    value_2 = *(uint16_t *)(&input_2[1]);
    value_3 = *(uint64_t *)(&input_2[3]);
    *input_5 = WdTracelogStorage2;
    *(uint32_t *)(&input_5[1]) = (uint32_t)(*WdTracelogStorage2);
    ((uint32_t *)input_5)[3] = 2;
    input_5[2] = &input_2[0xb];
    *(uint32_t *)(&input_5[3]) = (uint32_t)(*(uint16_t *)(&input_2[0xb]));
    ((uint32_t *)input_5)[7] = 1;
    if (WdTracelogStorage4 == TlgAggregateInternalRegisteredProviderEtwCallback)
    {
        byte_value = ExtractAggregateFieldTypes(TlgAggregateInternalRegisteredProviderEtwCallback, input_5);
        if (byte_value)
        {
            InsertEventEntryInLookUpTable();
        }
        else
        {
            EtwWriteTransfer(WdTracelogStorage3, &value, 0, 0, 0xd, data_pointer);
        }
    }
    return;
}

void MpTerminateProcess(int64_t input)
{
    uint64_t value;
    uint64_t handle;
    if (input)
    {
        handle = 0;
        value = *__imp_PsProcessType;
        if (0 <= (int32_t)ObOpenObjectByPointer(input, 0x200, 0, 0, value, 0, &handle))
        {
            ZwTerminateProcess(handle, WD_STATUS_ACCESS_DENIED);
            ZwClose(handle);
        }
    }
    return;
}

void MpQueryRegString(int64_t input, int64_t value_name, int64_t *destination_string)
{
    int64_t allocation;
    int64_t value;
    uint32_t value_2 = 0;
    uint64_t value_3;
    int64_t value_4;
    uint32_t value_5;
    uint32_t value_6 = 0;
    uint64_t value_7;
    uint64_t value_8;
    int32_t value_10;
    uint32_t object_attributes;
    int64_t key_handle = 0;
    uint32_t values[2];
    uint64_t source_string;
    uint32_t *data_pointer;
    int64_t value_11 = 0;
    values[0] = 0;
    source_string = 0;
    value = 0;
    if (input && value_name && destination_string)
    {
        *destination_string = 0;
        object_attributes = 0x30;
        value_3 = 0;
        value_5 = 0x240;
        value_7 = 0;
        value_8 = 0;
        value_4 = input;
        if (0 <= (int32_t)ZwOpenKey(&key_handle, 0x80000000, &object_attributes))
        {
            data_pointer = values;
            value_10 = MpQueryValueKey(key_handle, value_name);
            allocation = value_11;
            if (0 <= value_10 && *(int32_t *)(value_11 + 4) == 1)
            {
                value = value_11 + 0xc;
                source_string = ((uint64_t)(((uint64_t)WdLoadField(&source_string, 4, 4) & 0xffffffffULL) << 16 | (uint64_t)(*(uint16_t *)(value_11 + 8)) & 0xffffULL) & 0xffffffffffffULL) << 16 | (uint64_t)(*(uint16_t *)(value_11 + 8)) & 0xffffULL;
                if (0 <= (int32_t)RtlUnicodeStringValidateWorker(&source_string, 0x7fff, 0))
                {
                    MpDuplicateString(&source_string, destination_string);
                }
            }
            if (allocation)
            {
                MpFreeKeyData(allocation);
            }
        }
        if (key_handle)
        {
            ZwClose();
        }
    }
    return;
}

void MpSetValueKeyString(int64_t input, int64_t input_2, uint16_t *source_string)
{
    uint16_t *string;
    uint32_t value = 0;
    uint64_t value_2;
    uint64_t value_3;
    uint32_t object_attributes;
    int64_t key_handle = 0;
    uint16_t *destination_string = NULL;
    uint32_t value_5 = 0;
    uint64_t value_6;
    int64_t value_7;
    uint32_t value_8;
    if (!input || !input_2 || !source_string)
    {
        return;
    }
    object_attributes = 0x30;
    value_6 = 0;
    value_8 = 0x240;
    value_2 = 0;
    value_3 = 0;
    value_7 = input;
    if (0 <= (int32_t)ZwOpenKey(&key_handle, 2, &object_attributes))
    {
        if (!key_handle)
        {
            return;
        }
        if ((uint64_t)source_string[1] != *source_string + 2ULL)
        {
            string = destination_string;
            if (0 <= (int32_t)MpDuplicateString(source_string, &destination_string))
            {
                goto block_1;
            }
        }
        else
        {
            string = source_string;
            block_1:
            ZwSetValueKey(key_handle, input_2, 0, 1, *(uint64_t *)(&string[4]), string[1]);
        }
        if (string && string != source_string)
        {
            MpFreeString(string);
        }
    }
    if (key_handle)
    {
        ZwClose();
    }
    return;
}

void __GSHandlerCheck_SEH(void *input, uint64_t input_2, uint64_t input_3, void *input_4)
{
    uint32_t value;
    uint32_t *data_pointer;
    data_pointer = ((uint32_t **)input_4)[7];
    value = *data_pointer;
    __GSHandlerCheckCommon(input_2, input_4, &data_pointer[value * 4ULL + 1]);
    if (!(data_pointer[value * 4ULL + 1] & ((((uint32_t *)input)[1] & 0x66) != 0) + 1))
    {
        return;
    }
    __C_specific_handler(input, input_2, input_3, input_4);
    return;
}

uint32_t wcscmp(uint64_t input, uint64_t input_2)
{
    return wcscmp(input, input_2);
}

void _guard_dispatch_icall_nop(void)
{
    WD_ROUTINE routine;
    (*routine)();
    return;
}

void _guard_xfg_dispatch_icall_nop(void)
{
    WD_ROUTINE routine;
    switch (__guard_dispatch_icall_fptr)
    {
        case WD_GUARDDISPATCH_BRANCH_TARGET:
            (*routine)();
            return;
    }
}

void __security_check_cookie(int64_t input)
{
    if (input == __security_cookie && !(int16_t)((uint64_t)input >> 0x30))
    {
        return;
    }
    __report_gsfailure(input);
    return;
}

void *memcpy(void *destination, const void *source, size_t size)
{
    uint8_t *output = destination;
    const uint8_t *input = source;
    for (size_t index = 0; index < size; ++index)
    {
        output[index] = input[index];
    }

    return destination;
}

void *memset(void *destination, int value, size_t size)
{
    uint8_t *output = destination;
    for (size_t index = 0; index < size; ++index)
    {
        output[index] = (uint8_t)value;
    }

    return destination;
}

uint64_t __memset_repmovs(char *input, uint64_t input_2, int64_t input_3)
{
    char *bytes;
    char byte_value;
    char byte_value_2;
    char byte_value_3;
    char byte_value_4;
    char byte_value_5;
    char byte_value_6;
    char byte_value_7;
    char byte_value_8;
    char byte_value_9;
    char byte_value_10;
    uint64_t value;
    char byte_value_11;
    char byte_value_12;
    char byte_value_13;
    char byte_value_14;
    char byte_value_15;
    char byte_value_16;
    char byte_value_17;
    char byte_value_18;
    char byte_value_19;
    char byte_value_20;
    char *bytes_2;
    char byte_value_21;
    char byte_value_22;
    char byte_value_23;
    char byte_value_24;
    char byte_value_25;
    char byte_value_26;
    char byte_value_27;
    char *bytes_3;
    char byte_value_28;
    char byte_value_29;
    char byte_value_30;
    char byte_value_31;
    char byte_value_32;
    if (!(__isa_info & 1))
    {
        value = __memset_query();
        byte_value_28 = byte_value_29;
        byte_value_30 = byte_value_31;
        byte_value_32 = byte_value;
        byte_value_2 = byte_value_3;
        byte_value_4 = byte_value_5;
        byte_value_6 = byte_value_7;
        byte_value_8 = byte_value_9;
        byte_value_10 = byte_value_11;
        byte_value_12 = byte_value_13;
        byte_value_14 = byte_value_15;
        byte_value_16 = byte_value_17;
        byte_value_18 = byte_value_19;
        byte_value_20 = byte_value_21;
        byte_value_22 = byte_value_23;
        byte_value_24 = byte_value_25;
        byte_value_26 = byte_value_27;
    }
    *input = byte_value_28;
    input[1] = byte_value_30;
    input[2] = byte_value_32;
    input[3] = byte_value_2;
    input[4] = byte_value_4;
    input[5] = byte_value_6;
    input[6] = byte_value_8;
    input[7] = byte_value_10;
    input[8] = byte_value_12;
    input[9] = byte_value_14;
    input[10] = byte_value_16;
    input[0xb] = byte_value_18;
    input[0xc] = byte_value_20;
    input[0xd] = byte_value_22;
    input[0xe] = byte_value_24;
    input[0xf] = byte_value_26;
    input[0x10] = byte_value_28;
    input[0x11] = byte_value_30;
    input[0x12] = byte_value_32;
    input[0x13] = byte_value_2;
    input[0x14] = byte_value_4;
    input[0x15] = byte_value_6;
    input[0x16] = byte_value_8;
    input[0x17] = byte_value_10;
    input[0x18] = byte_value_12;
    input[0x19] = byte_value_14;
    input[0x1a] = byte_value_16;
    input[0x1b] = byte_value_18;
    input[0x1c] = byte_value_20;
    input[0x1d] = byte_value_22;
    input[0x1e] = byte_value_24;
    input[0x1f] = byte_value_26;
    input[0x20] = byte_value_28;
    input[0x21] = byte_value_30;
    input[0x22] = byte_value_32;
    input[0x23] = byte_value_2;
    input[0x24] = byte_value_4;
    input[0x25] = byte_value_6;
    input[0x26] = byte_value_8;
    input[0x27] = byte_value_10;
    input[0x28] = byte_value_12;
    input[0x29] = byte_value_14;
    input[0x2a] = byte_value_16;
    input[0x2b] = byte_value_18;
    input[0x2c] = byte_value_20;
    input[0x2d] = byte_value_22;
    input[0x2e] = byte_value_24;
    input[0x2f] = byte_value_26;
    input[0x30] = byte_value_28;
    input[0x31] = byte_value_30;
    input[0x32] = byte_value_32;
    input[0x33] = byte_value_2;
    input[0x34] = byte_value_4;
    input[0x35] = byte_value_6;
    input[0x36] = byte_value_8;
    input[0x37] = byte_value_10;
    input[0x38] = byte_value_12;
    input[0x39] = byte_value_14;
    input[0x3a] = byte_value_16;
    input[0x3b] = byte_value_18;
    input[0x3c] = byte_value_20;
    input[0x3d] = byte_value_22;
    input[0x3e] = byte_value_24;
    input[0x3f] = byte_value_26;
    bytes_3 = &input[input_3 - (int64_t)((char *)((uint64_t)(&input[0x40]) & 0xffffffffffffffc0))];
    bytes_2 = (char *)((uint64_t)(&input[0x40]) & 0xffffffffffffffc0);
    while (bytes_3)
    {
        bytes = &bytes_2[1];
        *bytes_2 = byte_value_28;
        bytes_3 = &bytes_3[-1];
        bytes_2 = bytes;
    }

    return value;
}

uint64_t __memset_query(void)
{
    uint64_t value;
    __cpu_features_init();
    return value;
}

int32_t memcmp(const void *left, const void *right, size_t size)
{
    const uint8_t *left_bytes = left;
    const uint8_t *right_bytes = right;
    for (size_t index = 0; index < size; ++index)
    {
        if (left_bytes[index] != right_bytes[index])
        {
            return (int32_t)left_bytes[index] - right_bytes[index];
        }
    }

    return 0;
}

void MpGetRunningProcesses(uint64_t *input, uint32_t *input_2)
{
    int32_t status;
    uint32_t values[2];
    int32_t *allocation;
    int32_t *data_pointer;
    int64_t *allocation_2;
    uint32_t allocation_size;
    uint32_t value_2;
    uint64_t index;
    uint32_t value_3;
    values[0] = 0;
    allocation_size = 0x8000;
    if (input && input_2)
    {
        while (allocation = (int32_t *)MpAllocatePoolWithTag(1, allocation_size, 0x7072704d), allocation)
        {
            status = ZwQuerySystemInformation(5, allocation, allocation_size, values);
            if (status != -0x3ffffffc)
            {
                if (status < 0)
                {
                    ExFreePoolWithTag(allocation, 0x7072704d);
                    return;
                }
                value_3 = 0;
                data_pointer = allocation;
                allocation_size = 0;
                goto block_1;
            }
            ExFreePoolWithTag(allocation, 0x7072704d);
            allocation_size = values[0];
        }
    }
    return;
    block_1:
    value_3 += 1;

    if (!(*data_pointer))
    {
        allocation_2 = MpAllocatePoolWithTag(1, (uint64_t)value_3 << 3, 0x7072704d);
        if (allocation_2)
        {
            index = 0;
            data_pointer = allocation;
            allocation_size = 0;
            goto block_2;
        }
        ExFreePoolWithTag(allocation, 0x7072704d);
        return;
    }
    value_2 = *data_pointer + allocation_size;
    if (value_2 < allocation_size || values[0] < value_2 || (data_pointer = (int32_t *)((uint64_t)value_2 + (int64_t)allocation), allocation_size = value_2, data_pointer < allocation))
    {
        ExFreePoolWithTag(allocation, 0x7072704d);
        return;
    }
    goto block_1;
    block_2:
    if (value_3 <= (uint32_t)index)
    {
        goto block_3;
    }

    allocation_2[index] = *(int64_t *)(&data_pointer[0x14]);
    value_2 = *data_pointer + allocation_size;
    if (value_2 < allocation_size || (data_pointer = (int32_t *)((uint64_t)value_2 + (int64_t)allocation), data_pointer < allocation))
    {
        ExFreePoolWithTag(allocation_2, 0x7072704d);
        ExFreePoolWithTag(allocation, 0x7072704d);
        return;
    }
    index = (uint32_t)index + 1;
    allocation_size = value_2;
    goto block_2;
    block_3:
    *input = allocation_2;

    *input_2 = value_3;
    ExFreePoolWithTag(allocation, 0x7072704d);
    return;
}

void MpQueryObjectName(int64_t object, uint64_t *name)
{
    int32_t value;
    int64_t *allocation;
    uint32_t values[2];
    uint64_t value_2;
    uint64_t value_3;
    values[0] = 0;
    value_2 = 0;
    value_3 = 0;
    if (object && name && (value = ObQueryNameString(0, &value_2, 0x10, values), value == -0x7ffffffb || value == -0x3ffffffc) && (allocation = MpAllocatePoolWithTag(1, values[0], 0x6e6f704d), allocation))
    {
        value = ObQueryNameString(object, allocation, values[0], values);
        if (0 <= value)
        {
            *name = allocation;
        }
        else
        {
            ExFreePoolWithTag(allocation, 0x6e6f704d);
        }
    }
    return;
}

int32_t MpFreeString(void *string)
{
    if (!string)
    {
        return (int32_t)WD_STATUS_INVALID_PARAMETER;
    }
    ExFreePoolWithTag(string, 0x7375704d);
    return 0;
}

uint64_t MpAllocateString(uint16_t input, int64_t *input_2)
{
    int64_t *allocation;
    if (input_2 && input && !(input & 1))
    {
        allocation = MpAllocatePoolWithTag(1, input + 0x12, 0x7375704d);
        *input_2 = (int64_t)allocation;
        if (allocation)
        {
            allocation[1] = (int64_t)(&allocation[2]);
            *(uint16_t *)(*input_2) = 0;
            *(uint16_t *)(*input_2 + 2) = input + 2;
            return 0;
        }
        return WD_STATUS_INSUFFICIENT_RESOURCES;
    }
    return WD_STATUS_INVALID_PARAMETER;
}

void MpGetSystemFolderPath(uint64_t source_text, uint64_t *name)
{
    uint32_t value = 0;
    uint64_t value_2;
    uint64_t value_3;
    uint64_t value_4 = 0;
    uint64_t value_5 = 0;
    uint64_t string = 0;
    uint64_t value_7 = 0;
    uint32_t value_8;
    int64_t handle = 0;
    uint32_t value_9 = 0;
    uint64_t value_10;
    uint64_t *data_pointer;
    uint32_t value_11;
    RtlInitUnicodeString(&string, source_text);
    data_pointer = &string;
    value_8 = 0x30;
    value_10 = 0;
    value_11 = 0x240;
    value_2 = 0;
    value_3 = 0;
    if (0 <= (int32_t)ZwOpenFile(&handle, 0x100000, &value_8, &value_7, 3, 0x4020))
    {
        MpQueryObjectNameByHandle(handle, *__imp_IoFileObjectType, name);
    }
    if (handle)
    {
        ZwClose();
    }
    return;
}

uint64_t MpDuplicateString(WD_UNICODE_STRING_VALUE *source_string, int64_t *input)
{
    uint16_t value;
    int64_t *allocation;
    if (source_string && input && 0 <= (int32_t)RtlUnicodeStringValidateWorker(source_string, 0x7fff, 0))
    {
        value = source_string->Length;
        if (value && !(value & 1))
        {
            allocation = MpAllocatePoolWithTag(1, (char *)(value + 0x12ULL), 0x7375704d);
            *input = (int64_t)allocation;
            if (!allocation)
            {
                return WD_STATUS_INSUFFICIENT_RESOURCES;
            }
            allocation[1] = (int64_t)(&allocation[2]);
            *(uint16_t *)(*input) = 0;
            *(uint16_t *)(*input + 2) = value + 2;
            RtlCopyUnicodeString(*input, source_string);
            return 0;
        }
        return WD_STATUS_INVALID_PARAMETER;
    }
    return WD_STATUS_INVALID_PARAMETER;
}

int64_t MpMultiStringCbLen(int16_t *input)
{
    int64_t index = -1;
    int64_t index_2;
    int64_t value;
    do
    {
        value = index;
        index = value + 1;
    }
    while (input[index]);
    value += 2;
    while (index)
    {
        index_2 = -1;
        input = &input[index + 1];
        do
        {
            index_2 += 1;
        }
        while (input[index_2]);
        value = value + 1 + index_2;
        index = index_2;
    }

    return value * 2;
}

uint64_t MpSuffixUnicodeString(WD_UNICODE_STRING_POINTER_VIEW *input, WD_UNICODE_STRING_ADDRESS_VIEW *input_2)
{
    uint16_t *wide_text;
    uint16_t value;
    int16_t value_2;
    uint64_t value_3;
    uint64_t value_4;
    uint16_t *wide_text_2;
    uint16_t *wide_text_3;
    value = input->Length;
    value_3 = value;
    if (value <= input_2->Length)
    {
        wide_text_2 = input->Buffer;
        value_4 = input_2->Length - value_3;
        value_3 = input_2->Buffer;
        wide_text_3 = (uint16_t *)(value_3 + (value_4 & 0xfffffffffffffffe));
        wide_text = &wide_text_2[value >> 1];
        for (; wide_text_2 < wide_text; wide_text_2 = &wide_text_2[1])
        {
            value_2 = RtlUpcaseUnicodeChar(*wide_text_2);
            value_3 = RtlUpcaseUnicodeChar(*wide_text_3);
            if (value_2 != (int16_t)value_3)
            {
                value_3 &= 0xffffffffffffff00;
                return value_3;
            }
            wide_text_3 = &wide_text_3[1];
        }

        value_3 = (uint64_t)value_3 & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
    }
    else
    {
        value_3 &= 0xffffffffffffff00;
    }
    return value_3;
}

void MpMatchPerServiceSidByObj(int64_t input, int64_t input_2)
{
    uint64_t value;
    int64_t value_2;
    int64_t value_3 = 0;
    char buffer_2[8];
    buffer_2[0] = 0;
    if (input && input_2)
    {
        if (RtlValidSid(input_2))
        {
            value_2 = PsReferencePrimaryToken(input);
            value = *__imp_SeTokenObjectType;
            if (0 <= (int32_t)ObOpenObjectByPointer(value_2, 0x200, 0, 8, value, 0, &value_3))
            {
                MpCheckTokenMembership(value_3, input_2, buffer_2);
            }
            if (value_2)
            {
                PsDereferencePrimaryToken(value_2);
            }
        }
        if (value_3)
        {
            ZwClose();
        }
    }
    return;
}

void MpCheckTokenMembership(int64_t input, uint64_t input_2, char *input_3)
{
    bool enabled;
    int32_t value = 0;
    int64_t *data_pointer;
    uint64_t *data_pointer_2;
    uint32_t value_2;
    uint64_t value_3;
    uint64_t value_4;
    uint64_t value_5;
    uint64_t value_6;
    int32_t status;
    uint64_t value_8;
    char buffer_2[96];
    int64_t values[10];
    uint64_t value_9;
    uint64_t value_10;
    int32_t value_11 = 0;
    memset(buffer_2, 0, (char *)0x54);
    values[0] = 0;
    enabled = 0;
    value_9 = 0;
    value_2 = 0;
    value_6 = 0;
    *input_3 = 0;
    values[5] = 0;
    values[6] = 0;
    values[7] = 0;
    values[8] = 0;
    values[9] = 0;
    data_pointer_2 = NULL;
    value_10 = 0;
    value_3 = 0;
    value_4 = 0;
    value_5 = 0;
    values[1] = 0;
    values[2] = 0;
    values[3] = 0;
    values[4] = 0;
    if (input)
    {
        values[6] = 0;
        values[7] = 0;
        values[9] = 0;
        data_pointer_2 = &value_9;
        values[5] = 0x30;
        data_pointer = (int64_t *)((uint64_t)((uint64_t)data_pointer) & 0xffffffff00000000 | (uint64_t)2 & 0xffffffff);
        values[8] = 0x200;
        value_9 = 0x20000000c;
        value_2 = 1;
        status = ZwDuplicateToken(input, 8, &values[5], 0, data_pointer, values);
        if (status < 0)
        {
            return;
        }
    }
    else
    {
        SeCaptureSubjectContext(&values[1]);
        enabled = 1;
    }
    RtlCreateSecurityDescriptor(&value_10, 1);
    RtlSetOwnerSecurityDescriptor(&value_10, input_2, 0);
    RtlSetGroupSecurityDescriptor(&value_10, input_2, 0);
    RtlCreateAcl(buffer_2, 0x54, 2);
    value_8 = 0;
    RtlAddAccessAllowedAce(buffer_2, 2, 1, input_2);
    RtlSetDaclSecurityDescriptor(&value_10, (uint64_t)value_8 & 0xffffffffffffff00 | (uint64_t)1 & 0xff, buffer_2, 0);
    if (enabled)
    {
        block_1:
        SeAccessCheck(&value_10, &values[1], 0, 1, (uint64_t)data_pointer & 0xffffffff00000000, 0, WD_KMPROCESSUTILS_UNRECOVERED_ADDRESS, 1, &value, &value_11);

        if (!enabled)
        {
            ObfDereferenceObject(values[3]);
        }
        if (!value_11 && value == 1)
        {
            *input_3 = 1;
        }
        if (enabled)
        {
            SeReleaseSubjectContext(&values[1]);
        }
    }
    else
    {
        data_pointer = &values[3];
        values[1] = 0;
        values[2] = 0;
        values[3] = 0;
        values[4] = 0;
        status = ObReferenceObjectByHandle(values[0], 8, *__imp_SeTokenObjectType, 0, data_pointer, 0);
        if (0 <= status)
        {
            goto block_1;
        }
    }
    if (values[0])
    {
        ZwClose();
    }
    return;
}

void MpGetThreadCreateTimeById(int64_t input, uint64_t *input_2)
{
    int32_t value;
    uint64_t object;
    uint64_t handle = 0;
    if (input && input_2)
    {
        object = 0;
        if (0 <= (int32_t)PsLookupThreadByThreadId(input, &object))
        {
            value = ObOpenObjectByPointer(object, 0x200, 0, 0x800, *__imp_PsThreadType, 0, &handle);
            ObfDereferenceObject(object);
            if (0 <= value)
            {
                MpGetThreadCreateTimeByHandle(handle, input_2);
                ZwClose(handle);
            }
        }
    }
    return;
}

void MpGetThreadCreateTimeByHandle(int64_t input, uint64_t *input_2)
{
    uint32_t value = 0;
    uint32_t value_2 = 0;
    uint32_t value_3 = 0;
    uint64_t value_4 = 0;
    uint64_t value_5 = 0;
    uint32_t value_6 = 0;
    if (input && input_2 && 0 <= (int32_t)ZwQueryInformationThread(0, 1, &value, 0x20, 0))
    {
        *input_2 = ((uint64_t)value_2 & 0xffffffffULL) << 32 | (uint64_t)value & 0xffffffffULL;
    }
    return;
}

void MpGetThreadWin32StartAddressById(int64_t input, int64_t input_2)
{
    int32_t value;
    uint64_t object;
    int64_t handle = 0;
    if (input && input_2)
    {
        object = 0;
        if (0 <= (int32_t)PsLookupThreadByThreadId(input, &object))
        {
            value = ObOpenObjectByPointer(object, 0x200, 0, 0x40, *__imp_PsThreadType, 0, &handle);
            ObfDereferenceObject(object);
            if (0 <= value)
            {
                if (handle)
                {
                    ZwQueryInformationThread(handle, 9, input_2, 8, 0);
                }
                ZwClose(handle);
            }
        }
    }
    return;
}

void MpFreeObjectName(int64_t name)
{
    if (!name)
    {
        return;
    }
    ExFreePoolWithTag(name, 0x6e6f704d);
    return;
}

void TlgAggregateInternalRegisteredProviderEtwCallback(uint64_t input, int32_t input_2, uint64_t input_3, uint64_t input_4, uint64_t input_5, uint64_t input_6, void *input_7)
{
    void *data_pointer;
    data_pointer = input_7;
    if (((int64_t *)input_7)[0x36])
    {
        (*__guard_dispatch_icall_fptr)(input, input_2, input_3, input_4, input_5, input_6, ((uint64_t *)input_7)[0x37]);
    }
    if (input_2 == 1)
    {
        LookUpTableFlushComplete(data_pointer);
        return;
    }
    if (input_2 != 2)
    {
        return;
    }
    LookUpTableFlushPartial(data_pointer);
    return;
}

void LookUpTableFlushComplete(void *input)
{
    void *data_pointer;
    uint32_t value;
    if (!((int32_t *)input)[0x40])
    {
        return;
    }
    data_pointer = input;
    UpdateInternalStatsOnFlush(input, ((int32_t *)input)[0x40]);
    value = 0;
    if (((int64_t *)data_pointer)[0x31])
    {
        if (6 <= WdTlgaggregateimplStorage4 && _tlgKeywordOn(&WdTlgaggregateimplStorage4, 0x200000000000))
        {
            _tlgWriteTemplate__Write(*(uint64_t *)(((int64_t *)input)[0x38] + 8), &WdTlgaggregateimplStorage);
        }
        ((uint64_t *)input)[0x31] = 0;
        ((uint64_t *)input)[0x32] = 0;
        ((uint64_t *)input)[0x33] = 0;
        ((uint64_t *)input)[0x34] = 0;
        ((uint64_t *)input)[0x35] = 0;
        value = 0;
    }
    do
    {
        FlushLookUpTableBucket(input, value);
        value += 1;
    }
    while (value < 0x20);
    return;
}

void MpGetProcessName(int64_t input, uint64_t *input_2)
{
    int64_t value;
    char buffer[32];
    int64_t values[9];
    int64_t value_2;
    values[8] = __security_cookie ^ (uint64_t)buffer;
    value = 0;
    value_2 = 0;
    values[0] = 0;
    values[1] = 0;
    values[2] = 0;
    values[3] = 0;
    values[4] = 0;
    values[5] = 0;
    values[6] = 0;
    values[7] = 0;
    if (input && input_2)
    {
        values[1] = 0;
        values[3] = 0;
        values[4] = 0;
        values[2] = 0x30;
        values[5] = 0x200;
        values[6] = 0;
        values[7] = 0;
        values[0] = input;
        if (0 <= (int32_t)ZwOpenProcess(&value_2, 0x10000000, &values[2], values))
        {
            MpGetProcessNameByHandle(value_2, input_2);
        }
        value = value_2;
    }
    if (value)
    {
        ZwClose();
    }
    __security_check_cookie(values[8] ^ (uint64_t)buffer);
    return;
}

void MpGetProcessNameByHandle(int64_t input, uint64_t *input_2)
{
    int64_t *allocation;
    uint32_t values[2];
    int32_t value;
    values[0] = 0;
    if (input && input_2 && ZwQueryInformationProcess(input, 0x1b, 0, 0, values) == -0x3ffffffc && 0x10 <= values[0])
    {
        values[0] += 2;
        allocation = MpAllocatePoolWithTag(1, values[0], 0x7375704d);
        if (allocation)
        {
            value = values[0] - 2;
            if (0 <= (int32_t)ZwQueryInformationProcess(input, 0x1b, allocation, value, 0))
            {
                if (!allocation[1])
                {
                    allocation[1] = (int64_t)(&allocation[2]);
                }
                *input_2 = allocation;
            }
            else
            {
                ExFreePoolWithTag(allocation, 0x7375704d);
            }
        }
    }
    return;
}

void TlgAggregateInternalProviderCallback(uint64_t input, int32_t input_2, uint64_t input_3, int64_t input_4)
{
    char byte_value;
    int64_t index;
    if (input_2 == 2 && input_4 == 0x20)
    {
        KeEnterCriticalRegion();
        if (WdTlgaggregateimplStorage3)
        {
            byte_value = (*__imp_ExTryAcquirePushLockExclusiveEx)(WD_TLGAGGREGATEIMPL_UNRECOVERED_ADDRESS2);
        }
        else
        {
            byte_value = ExAcquireResourceExclusiveLite(WD_TLGAGGREGATEIMPL_UNRECOVERED_ADDRESS2);
        }
        if (byte_value)
        {
            for (index = WdTlgaggregateimplStorage7; index; index = *(int64_t *)(index + 0x1c8))
            {
                LookUpTableFlushComplete(index);
            }

            if (WdTlgaggregateimplStorage3)
            {
                (*__imp_ExReleasePushLockExclusiveEx)(WD_TLGAGGREGATEIMPL_UNRECOVERED_ADDRESS2, 0);
            }
            else
            {
                ExReleaseResourceLite(WD_TLGAGGREGATEIMPL_UNRECOVERED_ADDRESS2);
            }
        }
        KeLeaveCriticalRegion();
    }
    return;
}

void MpGetProcessCommandLineByHandle(int64_t input, uint64_t *input_2)
{
    int64_t *allocation;
    uint32_t values[2];
    int32_t value;
    values[0] = 0;
    if (input && input_2 && ZwQueryInformationProcess(input, 0x3c, 0, 0, values) == -0x3ffffffc && 0x10 <= values[0])
    {
        values[0] += 2;
        allocation = MpAllocatePoolWithTag(1, values[0], 0x7375704d);
        if (allocation)
        {
            value = values[0] - 2;
            if (0 <= (int32_t)ZwQueryInformationProcess(input, 0x3c, allocation, value, 0))
            {
                *input_2 = allocation;
            }
            else
            {
                ExFreePoolWithTag(allocation, 0x7375704d);
            }
        }
    }
    return;
}

void MpQueryObjectNameByHandle(int64_t handle, uint64_t name, uint64_t *name_2)
{
    int64_t value = 0;
    int64_t object = 0;
    if (handle && name_2)
    {
        if (0 <= (int32_t)ObReferenceObjectByHandle(handle, 0, name, 0, &object, 0))
        {
            MpQueryObjectName(object, name_2);
        }
        value = object;
    }
    if (value)
    {
        ObfDereferenceObject();
    }
    return;
}

void CancelTimerCallbacksAndDeleteTimer(void *input, uint64_t input_2, uint64_t input_3)
{
    uint16_t *wide_text;
    uint16_t value;
    uint64_t value_2;
    uint64_t value_3;
    uint64_t value_4;
    uint64_t value_5;
    if (((int64_t *)input)[0x3a])
    {
        WdUnresolvedAtomicBegin();
        wide_text = (uint16_t *)(((int64_t *)input)[0x21] + 0x38);
        value = *wide_text;
        *wide_text = 2;
        value_2 = value;
        WdUnresolvedAtomicEnd();
        if (value == 1)
        {
            input_3 = 0;
            value_2 = 0;
            KeWaitForSingleObject(((int64_t *)input)[0x21] + 0x20, 0, 0, 0, 0);
        }
        value_3 = 0;
        value_4 = 0;
        value_5 = 0;
        (*__imp_ExDeleteTimer)(((uint64_t *)input)[0x3a], (uint64_t)value_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff, (uint64_t)input_3 & 0xffffffffffffff00 | (uint64_t)1 & 0xff, &value_3);
        ((uint64_t *)input)[0x3a] = 0;
    }
    return;
}

int32_t ComputeFlushPeriod(uint64_t input)
{
    int64_t value;
    uint32_t values[6];
    uint32_t value_2;
    uint64_t value_3;
    uint32_t value_4;
    uint32_t value_5;
    uint32_t value_6;
    value_3 = input >> 4;
    values[0] = 0;
    value = *(int64_t *)(*(int64_t *)(input + 0x1c0) + 8);
    value_2 = *(uint32_t *)(value + -0x10);
    value_4 = *(uint32_t *)(value + -0xc);
    value_5 = *(uint32_t *)(value + -8);
    value_6 = *(uint32_t *)(value + -4);
    RunningHash(values, (uint8_t *)(&value_2), 0x10);
    RunningHash(values, (uint8_t *)(&value_3), 8);
    FinishHash(values);
    return values[0] % 600000 + 600000;
}

int64_t *CreateTlgAggregateSession(bool input, bool input_2)
{
    uint64_t *data_pointer;
    int64_t *buffer;
    int64_t *buffer_2;
    int64_t value;
    buffer = (int64_t *)ExAllocatePoolWithTag((-(uint32_t)(input != 0) & 0xfffffe01) + 0x200, 0x1e0, 0x47417254);
    if (buffer)
    {
        memset(buffer, 0, (char *)0x1e0);
        if (WdTlgaggregateimplStorage3)
        {
            buffer[0x22] = 0;
        }
        else
        {
            ExInitializeResourceLite(&buffer[0x22]);
        }
        if (!input_2 && input)
        {
            return buffer;
        }
        buffer_2 = (int64_t *)ExAllocatePoolWithTag(0x200, 0x40, 0x47417254);
        if (buffer_2)
        {
            memset(buffer_2, 0, (char *)0x40);
        }
        buffer[0x21] = (int64_t)buffer_2;
        if (buffer_2)
        {
            KeInitializeEvent(&buffer_2[4], 0, 0);
            data_pointer = (uint64_t *)buffer[0x21];
            data_pointer[2] = TlgAggregateInternalFlushWorkItemRoutineKernelMode;
            data_pointer[3] = buffer;
            *data_pointer = 0;
            *(uint16_t *)(buffer[0x21] + 0x38) = 0;
            if (!input_2)
            {
                return buffer;
            }
            value = (*__imp_ExAllocateTimer)(TlgAggregateInternalFlushTimerCallbackKernelMode, buffer[0x21], 8);
            buffer[0x3a] = value;
            if (value)
            {
                return buffer;
            }
        }
    }
    DestroyAggregateSession(buffer);
    return NULL;
}

void DestroyAggregateSession(WD_LAYOUT_85 *allocation)
{
    if (!allocation)
    {
        return;
    }
    CancelTimerCallbacksAndDeleteTimer(allocation);
    if (allocation->field_0x108)
    {
        ExFreePoolWithTag(allocation->field_0x108, 0);
    }
    if (!WdTlgaggregateimplStorage3)
    {
        ExDeleteResourceLite(&allocation[1]);
    }
    ExFreePoolWithTag(allocation, 0);
    return;
}

void FlushEventEntryList(uint64_t input, void *input_2)
{
    void *data_pointer;
    int64_t value;
    int32_t value_2;
    if (!input_2)
    {
        return;
    }
    do
    {
        value_2 = 2;
        if (3 <= ((uint8_t *)input_2)[0x2d] + 2)
        {
            value = 0x20;
            do
            {
                value += 0x10;
                value_2 += 1;
                *(char *)(((int64_t *)input_2)[2] + -3 + value) = 0;
            }
            while (value_2 < (int32_t)(((uint8_t *)input_2)[0x2d] + 2));
        }
        EtwWriteTransfer(input, input_2, 0, 0, (uint8_t)((char *)input_2)[0x2c], ((uint64_t *)input_2)[2]);
        data_pointer = ((void **)input_2)[3];
        DestroyEventEntry(input_2);
        input_2 = data_pointer;
    }
    while (data_pointer);
    return;
}

void LookUpTableFlushPartial(void *input)
{
    uint32_t value;
    uint32_t index;
    uint32_t value_2 = 0;
    if (!((int32_t *)input)[0x40])
    {
        return;
    }
    value = ((uint32_t *)input)[0x41];
    index = value;
    do
    {
        if (((int64_t *)input)[index])
        {
            value_2 += FlushLookUpTableBucket(input, index);
        }
        index = index + 1 & 0x1f;
    }
    while (index != value && value_2 < 0x10);
    ((uint32_t *)input)[0x41] = index;
    UpdateInternalStatsOnFlush(input, value_2);
    return;
}

void TlgAggregateInternalFlushWorkItemRoutineKernelMode(void *input)
{
    int16_t *wide_text;
    int16_t value;
    int16_t value_2;
    if (((char *)input)[0x1dc])
    {
        ((char *)input)[0x1dc] = 0;
        LookUpTableFlushComplete(input);
    }
    else
    {
        LookUpTableFlushPartial(input);
    }
    if (((int32_t *)input)[0x40])
    {
        EnableFlushTimer(((int64_t *)input)[0x3a], ((uint32_t *)input)[0x76]);
    }
    value_2 = 1;
    wide_text = (int16_t *)(((int64_t *)input)[0x21] + 0x38);
    WdUnresolvedAtomicBegin();
    value = *wide_text;
    if (value != 1)
    {
        value_2 = value;
    }
    else
    {
        *wide_text = 0;
    }
    WdUnresolvedAtomicEnd();
    if (value_2 != 2)
    {
        return;
    }
    KeSetEvent(((int64_t *)input)[0x21] + 0x20, 0, 0);
    return;
}

void UpdateInternalStatsOnFlush(void *input, uint32_t input_2)
{
    int64_t *data_pointer;
    int64_t value;
    if (!input_2)
    {
        return;
    }
    data_pointer = &((int64_t *)input)[0x32];
    if (input_2 < ((uint32_t *)input)[0x68] || (value = *data_pointer, !value))
    {
        value = *data_pointer;
        ((uint32_t *)input)[0x68] = input_2;
    }
    if (((uint32_t *)input)[0x67] < input_2)
    {
        ((uint32_t *)input)[0x67] = input_2;
    }
    *data_pointer = value + 1;
    *(int64_t *)((int64_t)input + 0x188) = *(int64_t *)((int64_t)input + 0x188) + (uint64_t)input_2;
    return;
}

uint64_t TlgRegisterAggregateProviderEx(WD_LAYOUT_123 *input, uint64_t input_2)
{
    int64_t value;
    uint32_t value_2;
    int64_t allocation;
    uint64_t value_3;
    int64_t *data_pointer;
    WD_ROUTINE routine;
    allocation = (int64_t)CreateTlgAggregateSession(0, ((uint64_t)((uint64_t)((uint64_t)input_2 >> 8)) & 0xffffffffffffffULL) << 8 | (uint64_t)(WdTlgaggregateimplStorage2 != '\0') & 0xffULL);
    if (allocation)
    {
        *(uint64_t *)(allocation + 0x1b0) = 0;
        *(uint64_t *)(allocation + 0x1b8) = 0;
        *(WD_LAYOUT_123 **)(allocation + 0x1c0) = input;
        *(char *)(allocation + 0x1dd) = 0;
        *(int32_t *)(allocation + 0x1d8) = ComputeFlushPeriod(allocation);
        routine = TlgAggregateInternalRegisteredProviderEtwCallback;
        value_2 = TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(input, TlgAggregateInternalRegisteredProviderEtwCallback, allocation);
        value_3 = value_2;
        if (0 <= (int32_t)value_2)
        {
            KeEnterCriticalRegion();
            if (WdTlgaggregateimplStorage3)
            {
                (*__imp_ExAcquirePushLockExclusiveEx)(WD_TLGAGGREGATEIMPL_UNRECOVERED_ADDRESS2, 0);
            }
            else
            {
                ExAcquireResourceExclusiveLite(WD_TLGAGGREGATEIMPL_UNRECOVERED_ADDRESS2, (uint64_t)((uint64_t)routine) & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
            }
            if (!WdTlgaggregateimplStorage7)
            {
                TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&WdTlgaggregateimplStorage4, TlgAggregateInternalProviderCallback, 0);
            }
            data_pointer = &WdTlgaggregateimplStorage7;
            while (value = *data_pointer, value)
            {
                if (*(WD_LAYOUT_123 **)(value + 0x1c0) == input)
                {
                    goto block_1;
                }
                data_pointer = (int64_t *)(value + 0x1c8);
            }

            *data_pointer = allocation;
            block_1:
            if (WdTlgaggregateimplStorage3)
            {
                (*__imp_ExReleasePushLockExclusiveEx)(WD_TLGAGGREGATEIMPL_UNRECOVERED_ADDRESS2, 0);
            }
            else
            {
                ExReleaseResourceLite(WD_TLGAGGREGATEIMPL_UNRECOVERED_ADDRESS2);
            }

            KeLeaveCriticalRegion();
            return 0;
        }
        input->field_0x28 = 0;
        DestroyAggregateSession(allocation);
    }
    else
    {
        value_3 = TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(input, 0, 0);
    }
    return value_3;
}

void TlgUnregisterAggregateProvider(WD_LAYOUT_114 *input, uint64_t input_2)
{
    void *data_pointer;
    uint64_t value;
    uint64_t *data_pointer_2;
    void *allocation;
    if (input->field_0x28 != TlgAggregateInternalRegisteredProviderEtwCallback)
    {
        value = input->field_0x20;
        input->field_0x20 = 0;
        input->field_0x0 = 0;
        EtwUnregister(value);
        return;
    }
    KeEnterCriticalRegion();
    if (WdTlgaggregateimplStorage3)
    {
        (*__imp_ExAcquirePushLockExclusiveEx)(WD_TLGAGGREGATEIMPL_UNRECOVERED_ADDRESS2, 0);
    }
    else
    {
        ExAcquireResourceExclusiveLite(WD_TLGAGGREGATEIMPL_UNRECOVERED_ADDRESS2, (uint64_t)input_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
    }
    data_pointer_2 = (uint64_t *)WD_TLGAGGREGATEIMPL_UNRECOVERED_ADDRESS3;
    while (true)
    {
        data_pointer = (void *)(*data_pointer_2);
        allocation = NULL;
        if (!data_pointer)
        {
            block_1:
            if (WdTlgaggregateimplStorage3)
            {
                (*__imp_ExReleasePushLockExclusiveEx)(WD_TLGAGGREGATEIMPL_UNRECOVERED_ADDRESS2, 0);
            }
            else
            {
                ExReleaseResourceLite(WD_TLGAGGREGATEIMPL_UNRECOVERED_ADDRESS2);
            }

            KeLeaveCriticalRegion();
            if (allocation)
            {
                CancelTimerCallbacksAndDeleteTimer(allocation);
            }
            value = input->field_0x20;
            input->field_0x20 = 0;
            input->field_0x0 = 0;
            EtwUnregister(value);
            input->field_0x28 = NULL;
            DestroyAggregateSession(allocation);
            return;
        }
        if (((WD_LAYOUT_114 **)data_pointer)[0x38] == input)
        {
            *data_pointer_2 = *(uint64_t *)((int64_t)data_pointer + 0x1c8);
            LookUpTableFlushComplete(data_pointer);
            value = WdTlgaggregateimplStorage5;
            allocation = data_pointer;
            if (!WdTlgaggregateimplStorage7)
            {
                WdTlgaggregateimplStorage5 = 0;
                WdTlgaggregateimplStorage4 = 0;
                EtwUnregister(value);
            }
            goto block_1;
        }
        data_pointer_2 = (uint64_t *)((int64_t)data_pointer + 0x1c8);
    }
}

void TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(void *input, uint64_t input_2, uint64_t input_3)
{
    int64_t *data_pointer;
    int64_t value;
    uint32_t value_2;
    uint32_t value_3;
    uint32_t value_4;
    uint32_t value_5;
    value = ((int64_t *)input)[1];
    data_pointer = &((int64_t *)input)[4];
    value_2 = *(uint32_t *)(value + -0x10);
    value_3 = *(uint32_t *)(value + -0xc);
    value_4 = *(uint32_t *)(value + -8);
    value_5 = *(uint32_t *)(value + -4);
    if (*data_pointer)
    {
        (*(WD_ROUTINE)swi(0x29))(5);
    }
    ((uint64_t *)input)[5] = input_2;
    ((uint64_t *)input)[6] = input_3;
    if (!EtwRegister(&value_2, _tlgEnableCallback, input, data_pointer))
    {
        (*__imp_EtwSetInformation)(*data_pointer, 2, ((uint16_t **)input)[1], *((uint16_t **)input)[1]);
    }
    return;
}

void MpCreateCallback(int64_t input)
{
    uint64_t value;
    uint64_t value_2 = 0;
    uint64_t string = 0;
    uint32_t value_4;
    uint32_t value_5 = 0;
    uint64_t value_6;
    uint64_t *data_pointer;
    uint32_t value_7;
    uint32_t value_8 = 0;
    uint64_t value_9;
    if (input)
    {
        RtlInitUnicodeString(&string);
        value_4 = 0x30;
        data_pointer = &string;
        value_6 = 0;
        value_7 = 0x210;
        value_9 = 0;
        value = 0;
        ExCreateCallback(input, &value_4, 1);
    }
    return;
}

void MpGetParentProcessByObject(int64_t input, int64_t process)
{
    uint64_t value;
    int32_t status;
    int64_t value_2;
    char buffer[32];
    int64_t values[8];
    values[7] = __security_cookie ^ (uint64_t)buffer;
    value_2 = 0;
    values[0] = 0;
    values[1] = 0;
    values[2] = 0;
    values[3] = 0;
    values[4] = 0;
    values[5] = 0;
    values[6] = 0;
    if (input && process)
    {
        value = *__imp_PsProcessType;
        if (0 <= (int32_t)ObOpenObjectByPointer(input, 0x200, 0, 0x1000, value, 0, values) && (status = ZwQueryInformationProcess(values[0], 0, &values[1], 0x30, 0), 0 <= status))
        {
            PsLookupProcessByProcessId(values[6], process);
        }
        value_2 = values[0];
    }
    if (value_2)
    {
        ZwClose();
    }
    __security_check_cookie(values[7] ^ (uint64_t)buffer);
    return;
}

void MpGetProcessCommandLineByPointer(int64_t input, uint64_t *input_2)
{
    uint64_t value;
    uint64_t handle = 0;
    if (input && input_2 && (value = *__imp_PsProcessType, 0 <= (int32_t)ObOpenObjectByPointer(input, 0x200, 0, 0x1000, value, 0, &handle)))
    {
        MpGetProcessCommandLineByHandle(handle, input_2);
        ZwClose(handle);
    }
    return;
}

void MpGetProcessNameByObject(int64_t input, uint64_t *input_2)
{
    uint64_t value;
    int64_t value_2 = 0;
    int64_t value_3 = 0;
    if (input && input_2)
    {
        value = *__imp_PsProcessType;
        if (0 <= (int32_t)ObOpenObjectByPointer(input, 0x200, 0, 0, value, 0, &value_3))
        {
            MpGetProcessNameByHandle(value_3, input_2);
        }
        value_2 = value_3;
    }
    if (value_2)
    {
        ZwClose();
    }
    return;
}

uint32_t MpRegisterCallback(int64_t input, int64_t input_2, uint64_t input_3, int64_t *input_4)
{
    int64_t value;
    uint32_t value_2;
    if (input && input_2 && input_4)
    {
        value = ExRegisterCallback();
        *input_4 = value;
        value_2 = 0;
        if (!value)
        {
            value_2 = WD_STATUS_UNSUCCESSFUL;
        }
        return value_2;
    }
    return WD_STATUS_INVALID_PARAMETER;
}

int16_t *MpFindUnicodeSubstring(WD_UNICODE_STRING_VALUE *string)
{
    int16_t *wide_text;
    int16_t value;
    int16_t value_2;
    int16_t *wide_text_2;
    int16_t *wide_text_3;
    int16_t *wide_text_4;
    int16_t *wide_text_5;
    int16_t *wide_text_6;
    if (0 <= (int32_t)RtlUnicodeStringValidateWorker(string, 0x7fff, 0) && 0 <= (int32_t)RtlUnicodeStringValidateWorker((WD_UNICODE_STRING_VALUE *)WD_PROCESSCONTEXT_UNRECOVERED_ADDRESS7, 0x7fff, 0) && 0x3a <= string->Length)
    {
        wide_text_4 = (int16_t *)string->Buffer;
        wide_text_6 = (int16_t *)((uint64_t)string->Length - 0x3a + (int64_t)wide_text_4);
        wide_text = &WdProcesscontextStorage7[0x1d];
        wide_text_2 = WdProcesscontextStorage7;
        for (; wide_text_4 <= wide_text_6; wide_text_4 = &wide_text_4[1])
        {
            wide_text_3 = wide_text_2;
            wide_text_5 = wide_text_4;
            if (wide_text_2 < wide_text)
            {
                do
                {
                    value = *wide_text_5;
                    if (value != *wide_text_2)
                    {
                        value_2 = RtlUpcaseUnicodeChar((uint16_t)(*wide_text_2));
                        wide_text_3 = wide_text_2;
                        if (RtlUpcaseUnicodeChar((uint16_t)value) != value_2)
                        {
                            break;
                        }
                    }
                    wide_text_2 = &wide_text_2[1];
                    wide_text_5 = &wide_text_5[1];
                    wide_text_3 = wide_text_2;
                }
                while (wide_text_2 < wide_text);
                wide_text_2 = WdProcesscontextStorage7;
            }
            if (wide_text_3 == wide_text)
            {
                return wide_text_4;
            }
        }
    }
    return NULL;
}

void MpFreeKeyData(int64_t allocation)
{
    if (!allocation)
    {
        return;
    }
    ExFreePoolWithTag(allocation, 0x6b76704d);
    return;
}

void MpQueryRegDword(uint64_t input, uint64_t input_2, uint32_t *input_3)
{
    int32_t value;
    char buffer[32];
    int64_t key_handle[8];
    uint32_t values[2];
    uint32_t *data_pointer;
    int64_t allocation;
    key_handle[7] = __security_cookie ^ (uint64_t)buffer;
    key_handle[0] = 0;
    key_handle[1] = 0x30;
    key_handle[3] = WD_INIT_UNRECOVERED_ADDRESS;
    key_handle[4] = 0x240;
    allocation = 0;
    values[0] = 0;
    key_handle[5] = 0;
    key_handle[6] = 0;
    key_handle[2] = 0;
    if (0 <= (int32_t)ZwOpenKey(key_handle, 0x80000000, &key_handle[1]))
    {
        data_pointer = values;
        value = MpQueryValueKey(key_handle[0], WD_INIT_UNRECOVERED_ADDRESS2);
        if (0 <= value && *(int32_t *)(allocation + 4) == 4 && *(int32_t *)(allocation + 8) == 4)
        {
            *input_3 = *(uint32_t *)(allocation + 0xc);
        }
        if (allocation)
        {
            MpFreeKeyData(allocation);
        }
    }
    if (key_handle[0])
    {
        ZwClose();
    }
    __security_check_cookie(key_handle[7] ^ (uint64_t)buffer);
    return;
}

void MpQueryValueKey(uint64_t key_handle, uint64_t value_name, uint64_t input, uint64_t *input_2, uint32_t *input_3)
{
    uint32_t *data_pointer;
    int32_t status;
    int64_t *allocation;
    uint32_t result_length[2];
    data_pointer = input_3;
    result_length[0] = 0x200;
    if (input_3 && input_2)
    {
        *input_3 = 0;
        *input_2 = 0;
        allocation = MpAllocatePoolWithTag(1, (char *)0x200, 0x6b76704d);
        if (allocation)
        {
            status = ZwQueryValueKey(key_handle, value_name, 2, allocation, result_length[0], result_length);
            if (status == -0x7ffffffb || status == -0x3fffffdd)
            {
                ExFreePoolWithTag(allocation, 0x6b76704d);
                allocation = MpAllocatePoolWithTag(1, result_length[0], 0x6b76704d);
                if (!allocation)
                {
                    return;
                }
                status = ZwQueryValueKey(key_handle, value_name, 2, allocation, result_length[0], result_length);
            }
            if (0 <= status)
            {
                *data_pointer = result_length[0];
                *input_2 = allocation;
            }
            else
            {
                ExFreePoolWithTag(allocation, 0x6b76704d);
            }
        }
    }
    return;
}

void GsDriverEntry(WD_LAYOUT_124 *driver_object, WD_UNICODE_STRING_VALUE *registry_path)
{
    __security_init_cookie();
    DriverEntry(driver_object, registry_path);
    return;
}

void __security_init_cookie(void)
{
    uint64_t value;
    if (!__security_cookie || (value = __security_cookie, __security_cookie == 0x2b992ddfa232))
    {
        __security_cookie = (rdtsc() ^ WD_SYMBOL_ADDRESS(__security_cookie)) & 0xffffffffffff;
        value = __security_cookie;
        if (!__security_cookie)
        {
            value = 0x2b992ddfa232;
            __security_cookie = 0x2b992ddfa232;
        }
    }
    __security_cookie_complement = ~value;
    return;
}

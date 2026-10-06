#include "wdfilter.h"

void WPP_SF_qI(uint64_t input, uint16_t input_2, uint64_t input_3, uint64_t input_4)
{
    uint64_t value;
    value = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_cdc8c5bdf4153e2541ef4ccbc66457af_Traceguids), input_2, &value, 8, &unrecovered_stack_argument_5, 8, 0);
    return;
}

void WPP_SF_qIZ(uint64_t input, uint64_t input_2, uint64_t input_3, uint64_t input_4, uint64_t input_5, int16_t *input_6)
{
    int16_t *wide_text;
    int16_t value;
    uint64_t value_2;
    uint64_t value_3;
    if (input_6)
    {
        value = *input_6;
        if (*input_6)
        {
            value_3 = *(uint64_t *)(&input_6[4]);
            goto block_1;
        }
    }
    else
    {
        value = 8;
    }
    value_3 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    block_1:
    wide_text = input_6;

    if (!input_6)
    {
        wide_text = &WdCleanupStorage;
    }
    value_2 = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_cdc8c5bdf4153e2541ef4ccbc66457af_Traceguids), 0xf, &value_2, 8, &input_5, 8, wide_text, 2, value_3, (uint16_t)value, 0);
    return;
}

void WPP_SF_qZI(uint64_t input, uint64_t input_2, uint64_t input_3, uint64_t input_4, int16_t *input_5)
{
    int16_t *wide_text;
    int16_t value;
    uint64_t value_2;
    uint64_t value_3;
    if (input_5)
    {
        value = *input_5;
        if (*input_5)
        {
            value_3 = *(uint64_t *)(&input_5[4]);
            goto block_1;
        }
    }
    else
    {
        value = 8;
    }
    value_3 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    block_1:
    wide_text = input_5;

    if (!input_5)
    {
        wide_text = &WdCleanupStorage;
    }
    value_2 = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_cdc8c5bdf4153e2541ef4ccbc66457af_Traceguids), 0xb, &value_2, 8, wide_text, 2, value_3, (uint16_t)value, &unrecovered_stack_argument_6, 8, 0);
    return;
}

void MpCopyCacheSetTimeStamp(void *input, int64_t input_2, int64_t input_3)
{
    int64_t *provider;
    int64_t *data_pointer;
    uint64_t value;
    int32_t *atomic_value;
    uint32_t value_2;
    int64_t value_3;
    uint32_t *trace_argument_1;
    uint32_t value_4;
    uint64_t value_5;
    uint32_t *data_pointer_2;
    uint32_t *data_pointer_3;
    if (!((int64_t *)input)[0x21])
    {
        return;
    }
    FltAcquirePushLockExclusive((int64_t)input + 0x110);
    value_3 = ((int64_t *)input)[0x21];
    if (value_3)
    {
        value_5 = (uint64_t)WdDataStorage10;
        trace_argument_1 = NULL;
        value = 0;
        if (WdDataStorage10)
        {
            data_pointer = (int64_t *)(value_5 * 0x38 + 0x20 + value_3);
            do
            {
                provider = &data_pointer[-7];
                value_4 = (int32_t)value_5 - 1;
                value_5 = value_4;
                if (((uint8_t)(*(uint32_t *)(&data_pointer[-0xb])) & 3) == 3 && data_pointer[-10] == input_2 && (!input_3 || *provider == input_3) && value < (uint64_t)data_pointer[-6])
                {
                    trace_argument_1 = (uint32_t *)(&data_pointer[-0xb]);
                    value = data_pointer[-6];
                }
                data_pointer = provider;
            }
            while (value_4);
            if (trace_argument_1)
            {
                *trace_argument_1 = *trace_argument_1 | 4;
                atomic_value = &((int32_t *)input)[0x46];
                value_2 = WdAtomicAdd32((volatile int32_t *)atomic_value, 1);
                *(uint64_t *)(&trace_argument_1[10]) = value_2 + 1;
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                {
                    WPP_SF_qI(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xe, provider, trace_argument_1, *(uint64_t *)(&trace_argument_1[6]));
                }
                FltReleasePushLock((int64_t)input + 0x110);
                return;
            }
        }
        value_5 = (uint64_t)WdDataStorage10;
        trace_argument_1 = NULL;
        value = 0;
        if (WdDataStorage10)
        {
            data_pointer_2 = (uint32_t *)(value_5 * 0x38 + value_3);
            do
            {
                data_pointer_3 = &data_pointer_2[-0xe];
                value_4 = (int32_t)value_5 - 1;
                value_5 = value_4;
                if (((uint8_t)(*data_pointer_3) & 7) == 7 && *(int64_t *)(&data_pointer_2[-0xc]) == input_2 && value < *(uint64_t *)(&data_pointer_2[-4]))
                {
                    trace_argument_1 = data_pointer_3;
                    value = *(uint64_t *)(&data_pointer_2[-4]);
                }
                data_pointer_2 = data_pointer_3;
            }
            while (value_4);
            if (trace_argument_1)
            {
                *trace_argument_1 = *trace_argument_1 & 0xfffffffb;
            }
        }
    }
    FltReleasePushLock((int64_t)input + 0x110);
    return;
}

void MpCopyCacheSetFileSize(void *input, int64_t input_2, int64_t input_3)
{
    int64_t *provider;
    int64_t *data_pointer;
    uint64_t value;
    int32_t *atomic_value;
    uint32_t value_2;
    int64_t value_3;
    uint32_t *trace_argument_1;
    uint32_t value_4;
    uint64_t value_5;
    uint32_t *data_pointer_2;
    uint32_t *data_pointer_3;
    if (!((int64_t *)input)[0x21])
    {
        return;
    }
    FltAcquirePushLockExclusive((int64_t)input + 0x110);
    value_3 = ((int64_t *)input)[0x21];
    if (value_3)
    {
        value_5 = (uint64_t)WdDataStorage10;
        trace_argument_1 = NULL;
        value = 0;
        if (WdDataStorage10)
        {
            data_pointer = (int64_t *)(value_5 * 0x38 + 0x18 + value_3);
            do
            {
                provider = &data_pointer[-7];
                value_4 = (int32_t)value_5 - 1;
                value_5 = value_4;
                if (((uint8_t)(*(uint32_t *)(&data_pointer[-10])) & 3) == 3 && data_pointer[-9] == input_2 && (!input_3 || *provider == input_3) && value < (uint64_t)data_pointer[-5])
                {
                    trace_argument_1 = (uint32_t *)(&data_pointer[-10]);
                    value = data_pointer[-5];
                }
                data_pointer = provider;
            }
            while (value_4);
            if (trace_argument_1)
            {
                *trace_argument_1 = *trace_argument_1 | 8;
                atomic_value = &((int32_t *)input)[0x46];
                value_2 = WdAtomicAdd32((volatile int32_t *)atomic_value, 1);
                *(uint64_t *)(&trace_argument_1[10]) = value_2 + 1;
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                {
                    WPP_SF_qI(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xd, provider, trace_argument_1, *(uint64_t *)(&trace_argument_1[6]));
                }
                FltReleasePushLock((int64_t)input + 0x110);
                return;
            }
        }
        value_5 = (uint64_t)WdDataStorage10;
        trace_argument_1 = NULL;
        value = 0;
        if (WdDataStorage10)
        {
            data_pointer_2 = (uint32_t *)(value_5 * 0x38 + value_3);
            do
            {
                data_pointer_3 = &data_pointer_2[-0xe];
                value_4 = (int32_t)value_5 - 1;
                value_5 = value_4;
                if (((uint8_t)(*data_pointer_3) & 0xb) == 0xb && *(int64_t *)(&data_pointer_2[-0xc]) == input_2 && value < *(uint64_t *)(&data_pointer_2[-4]))
                {
                    trace_argument_1 = data_pointer_3;
                    value = *(uint64_t *)(&data_pointer_2[-4]);
                }
                data_pointer_2 = data_pointer_3;
            }
            while (value_4);
            if (trace_argument_1)
            {
                *trace_argument_1 = *trace_argument_1 & 0xfffffff7;
            }
        }
    }
    FltReleasePushLock((int64_t)input + 0x110);
    return;
}

uint64_t MpCopyCacheMatch(WD_LAYOUT_85 *input, int64_t input_2, int64_t input_3, int64_t input_4, uint64_t *input_5, char *input_6)
{
    uint64_t *data_pointer;
    char *bytes;
    uint32_t value;
    uint64_t value_2;
    uint64_t value_3;
    uint64_t *data_pointer_2;
    uint64_t *data_pointer_3;
    uint64_t *data_pointer_4;
    uint64_t *data_pointer_5;
    bytes = input_6;
    data_pointer = input_5;
    data_pointer_4 = NULL;
    *input_6 = 0;
    *input_5 = 0;
    if (input->field_0x108)
    {
        FltAcquirePushLockExclusive(&input[1]);
        if (input->field_0x108)
        {
            value_3 = (uint64_t)WdDataStorage10;
            if (WdDataStorage10)
            {
                data_pointer_2 = (uint64_t *)(value_3 * 0x38 + input->field_0x108);
                data_pointer_5 = data_pointer_4;
                do
                {
                    data_pointer_3 = &data_pointer_2[-7];
                    value = (int32_t)value_3 - 1;
                    value_3 = value;
                    if (((uint8_t)(*(uint32_t *)(&data_pointer_2[-7])) & 0xf) == 0xf && data_pointer_2[-6] == input_2 && (!input_3 || data_pointer_2[-4] == input_3) && ((!input_4 || data_pointer_2[-3] == input_4) && data_pointer_5 < (uint64_t *)data_pointer_2[-2]))
                    {
                        data_pointer_4 = data_pointer_3;
                        data_pointer_5 = (uint64_t *)data_pointer_2[-2];
                    }
                    data_pointer_2 = data_pointer_3;
                }
                while (value);
            }
            if (data_pointer_4)
            {
                if (!IsThisCallBeingThrottled())
                {
                    MpSendCopyHintTelemetry();
                }
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                {
                    WPP_SF_qIZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18));
                }
                *data_pointer = data_pointer_4[2];
                *bytes = *(char *)(&data_pointer_4[6]);
                *data_pointer_4 = 0;
                data_pointer_4[1] = 0;
                data_pointer_4[2] = 0;
                data_pointer_4[3] = 0;
                data_pointer_4[4] = 0;
                data_pointer_4[5] = 0;
                data_pointer_4[6] = 0;
                WdUnresolvedAtomicBegin();
                WdCopycacheStorage2 -= 1;
                WdUnresolvedAtomicEnd();
                WdUnresolvedAtomicBegin();
                WdCopycacheStorage4 += 1;
                WdUnresolvedAtomicEnd();
            }
        }
        value_3 = ((uint64_t)((uint64_t)((uint64_t)FltReleasePushLock(&input[1]) >> 8)) & 0xffffffffffffffULL) << 8 | (uint64_t)(data_pointer_4 != NULL) & 0xffULL;
    }
    else
    {
        value_3 = value_2 & 0xffffffffffffff00;
    }
    return value_3;
}

void MpFreeCopyCache(WD_LAYOUT_8 *input)
{
    int64_t string;
    uint64_t value;
    uint32_t value_2;
    uint64_t value_3;
    int64_t value_4;
    value_2 = WdDataStorage10;
    value_3 = (uint64_t)WdDataStorage10;
    if (!input->field_0x108)
    {
        return;
    }
    FltAcquirePushLockExclusive(&input[1]);
    if (value_2)
    {
        value_4 = value_3 * 0x38;
        do
        {
            value_4 -= 0x38;
            value_2 = (int32_t)value_3 - 1;
            value_3 = value_2;
            string = *(int64_t *)(input->field_0x108 + 0x10 + value_4);
            if (string)
            {
                MpFreeString(string);
            }
        }
        while (value_2);
    }
    value = input->field_0x108;
    WdCopycacheStorage8 += 1;
    if (WdCopycacheStorage5 <= (uint16_t)ExQueryDepthSList(WD_SYMBOL_ADDRESS(gs_CopyCacheLookaside)))
    {
        WdCopycacheStorage9 += 1;
        (*__guard_dispatch_icall_fptr)(value, WD_SYMBOL_ADDRESS(gs_CopyCacheLookaside));
    }
    else
    {
        ExpInterlockedPushEntrySList(WD_SYMBOL_ADDRESS(gs_CopyCacheLookaside), value);
    }
    input->field_0x108 = 0;
    FltReleasePushLock(&input[1]);
    return;
}

uint64_t MpCopyCacheCleanup(void)
{
    ExDeleteLookasideListEx(WD_SYMBOL_ADDRESS(gs_CopyCacheLookaside));
    return 0;
}

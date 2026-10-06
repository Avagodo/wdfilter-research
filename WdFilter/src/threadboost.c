#include "wdfilter.h"

uint64_t MpBoostLowPriThreads(int32_t input, char input_2, uint64_t input_3, uint64_t input_4)
{
    uint32_t value;
    uint64_t *index;
    uint64_t *data_pointer;
    uint32_t value_2;
    if (!(*(uint32_t *)(MpData + 0x360) & 4) || WdDataStorage14)
    {
        return WD_STATUS_NOT_SUPPORTED;
    }
    if (!(*(int64_t *)(MpData + 0x80)) || !(*(int64_t *)(MpData + 0x78)))
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 10, WD_SYMBOL_ADDRESS(WPP_27a2cd78501a34f8ef1761f750746219_Traceguids), (uint64_t)KeGetCurrentThread());
        }
        return 0xc00000e5;
    }
    if (!input_2 && 0x1f <= (uint32_t)(input - 1U))
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xb, WD_SYMBOL_ADDRESS(WPP_27a2cd78501a34f8ef1761f750746219_Traceguids), (uint64_t)KeGetCurrentThread(), input);
        }
        return WD_STATUS_INVALID_PARAMETER;
    }
    ExAcquireFastMutex(MpData + 0xa10);
    if (input_2)
    {
        *(int32_t *)(MpData + 0xb00) = *(int32_t *)(MpData + 0xb00) + -1;
        if (1 <= *(int32_t *)(MpData + 0xb00))
        {
            ExReleaseFastMutex(MpData + 0xa10);
            return 0;
        }
        *(uint32_t *)(MpData + 0xb04) = 0xffffffff;
    }
    else
    {
        *(int32_t *)(MpData + 0xb00) = *(int32_t *)(MpData + 0xb00) + 1;
        if (2 <= *(int32_t *)(MpData + 0xb00))
        {
            ExReleaseFastMutex(MpData + 0xa10);
            return 0;
        }
        *(int32_t *)(MpData + 0xb04) = input;
    }
    data_pointer = (uint64_t *)(MpData + 0xa00);
    for (index = (uint64_t *)(*data_pointer); index != data_pointer; index = (uint64_t *)(*index))
    {
        if (input_2)
        {
            value = ((uint32_t *)index)[7];
            value_2 = *(uint32_t *)(&index[3]);
        }
        else
        {
            value_2 = 2;
            value = *(uint32_t *)(MpData + 0xb04);
        }
        input_4 = (uint64_t)input_4 & 0xffffffffffffff00 | (uint64_t)input_2 & 0xff;
        MppBoostThread(index[2], value, value_2, input_4);
    }

    ExReleaseFastMutex(MpData + 0xa10);
    return 0;
}

void MppBoostThread(uint64_t input, uint32_t input_2, uint32_t input_3, char input_4)
{
    (*__guard_dispatch_icall_fptr)(input, input_3, (uint32_t)input_3 & 0xffffff00 | (uint32_t)input_4 & 0xff, 0);
    (*__guard_dispatch_icall_fptr)(input, input_2);
    return;
}

void MpRegisterThreadBoost(void *input, uint64_t input_2, uint64_t input_3, uint64_t input_4)
{
    int64_t value;
    int64_t *data_pointer = NULL;
    uint64_t value_2;
    uint32_t *data_pointer_2;
    uint32_t value_3;
    uint32_t value_4 = 0;
    uint32_t value_5 = 0;
    uint32_t value_6 = 0;
    int32_t value_8;
    int64_t *data_pointer_3 = NULL;
    int64_t *data_pointer_4;
    uint32_t value_9;
    int64_t value_10 = 0;
    uint32_t value_11 = 0;
    int64_t *data_pointer_5 = NULL;
    if (!(*(uint32_t *)(MpData + 0x360) & 4))
    {
        return;
    }
    if (WdDataStorage14)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
        {
            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xc, WD_SYMBOL_ADDRESS(WPP_27a2cd78501a34f8ef1761f750746219_Traceguids), (uint64_t)KeGetCurrentThread());
        }
        return;
    }
    data_pointer_4 = &value_10;
    value_2 = (uint64_t)input_4 & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
    value_8 = MpReferenceObjectByHandle(((uint64_t *)input)[2], 0xc60, *__imp_PsThreadType, value_2, data_pointer_4);
    value_3 = (uint32_t)((uint64_t)data_pointer_4 >> 0x20);
    data_pointer_4 = data_pointer;
    if (0 <= value_8)
    {
        data_pointer_4 = data_pointer_5;
        if (((char *)input)[0x18])
        {
            data_pointer_2 = &value_11;
            value_11 = 0x10;
            value_5 = 0;
            value_4 = 0xffff;
            value_6 = 2;
            value_8 = FltRetrieveIoPriorityInfo(0, 0, value_10, data_pointer_2);
            if (0 <= value_8)
            {
                data_pointer_3 = (int64_t *)ExAllocateFromPagedLookasideList((void *)(MpData + 0xa80));
                if (data_pointer_3)
                {
                    data_pointer_3[2] = 0;
                    data_pointer_3[3] = 0;
                    data_pointer_3[1] = (int64_t)data_pointer_3;
                    *data_pointer_3 = (int64_t)data_pointer_3;
                    ((uint32_t *)data_pointer_3)[7] = value_4;
                    *(uint32_t *)(&data_pointer_3[3]) = value_6;
                    data_pointer_3[2] = value_10;
                    ObfReferenceObject();
                    WdUnresolvedAtomicBegin();
                    ObTotalReferences += 1;
                    WdUnresolvedAtomicEnd();
                    ExAcquireFastMutex(MpData + 0xa10);
                    data_pointer_4 = MppFindBoostControlUnsafe(value_10);
                    if (data_pointer_4)
                    {
                        value = *data_pointer_4;
                        if (*(int64_t **)(value + 8) != data_pointer_4 || (data_pointer_5 = (int64_t *)data_pointer_4[1], (int64_t *)(*data_pointer_5) != data_pointer_4))
                        {
                            (*(WD_ROUTINE)swi(0x29))(3);
                        }
                        *data_pointer_5 = value;
                        *(int64_t **)(value + 8) = data_pointer_5;
                        if (*(int32_t *)(MpData + 0xb00))
                        {
                            MppBoostThread(data_pointer_3[2], ((uint32_t *)data_pointer_3)[7], *(uint32_t *)(&data_pointer_3[3]), (uint64_t)((uint64_t)data_pointer_2) & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
                        }
                    }
                    data_pointer_5 = (int64_t *)(MpData + 0xa00);
                    value = *data_pointer_5;
                    if (*(int64_t **)(value + 8) != data_pointer_5)
                    {
                        (*(WD_ROUTINE)swi(0x29))(3);
                    }
                    *data_pointer_3 = value;
                    data_pointer_3[1] = (int64_t)data_pointer_5;
                    *(int64_t **)(value + 8) = data_pointer_3;
                    *data_pointer_5 = (int64_t)data_pointer_3;
                    if (*(int32_t *)(MpData + 0xb00))
                    {
                        MppBoostThread(data_pointer_3[2], *(uint32_t *)(MpData + 0xb04), 2, 0);
                    }
                    data_pointer_3 = NULL;
                    goto block_1;
                }
                data_pointer_3 = NULL;
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    value_9 = 0xf;
                    value_2 = ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INSUFFICIENT_RESOURCES & 0xffffffffULL;
                    goto block_3;
                }
            }
            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && (data_pointer_3 = NULL, *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
            {
                value_9 = 0xe;
                goto block_2;
            }
        }
        else
        {
            ExAcquireFastMutex(MpData + 0xa10);
            data_pointer_3 = (int64_t *)MppFindBoostControlUnsafe(value_10);
            data_pointer_4 = data_pointer;
            if (data_pointer_3)
            {
                value = *data_pointer_3;
                if (*(int64_t **)(value + 8) != data_pointer_3 || (data_pointer_4 = (int64_t *)data_pointer_3[1], (int64_t *)(*data_pointer_4) != data_pointer_3))
                {
                    (*(WD_ROUTINE)swi(0x29))(3);
                }
                *data_pointer_4 = value;
                *(int64_t **)(value + 8) = data_pointer_4;
                data_pointer_4 = data_pointer;
                if (*(int32_t *)(MpData + 0xb00))
                {
                    MppBoostThread(data_pointer_3[2], ((uint32_t *)data_pointer_3)[7], *(uint32_t *)(&data_pointer_3[3]), (uint64_t)value_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
                    data_pointer_4 = data_pointer_5;
                }
            }
            block_1:
            ExReleaseFastMutex(MpData + 0xa10);
        }
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        value_9 = 0xd;
        block_2:
        value_2 = ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)value_8 & 0xffffffffULL;

        block_3:
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value_9, WD_SYMBOL_ADDRESS(WPP_27a2cd78501a34f8ef1761f750746219_Traceguids), (uint64_t)KeGetCurrentThread(), value_2);

        data_pointer_3 = NULL;
        data_pointer_4 = data_pointer;
    }
    if (value_10)
    {
        ObfDereferenceObject();
        value = ObTotalReferences;
        WdUnresolvedAtomicBegin();
        ObTotalReferences -= 1;
        WdUnresolvedAtomicEnd();
        if (value + -1 <= -1 && *(int32_t *)(MpData + 0x364) <= -1)
        {
            if (!KdRefreshDebuggerNotPresent())
            {
                (*(WD_ROUTINE)swi(3))();
                return;
            }
            KeBugCheck(1);
        }
    }
    if (data_pointer_3)
    {
        if (data_pointer_3[2])
        {
            ObfDereferenceObject();
            value = ObTotalReferences;
            WdUnresolvedAtomicBegin();
            ObTotalReferences -= 1;
            WdUnresolvedAtomicEnd();
            if (value + -1 <= -1 && *(int32_t *)(MpData + 0x364) <= -1)
            {
                if (!KdRefreshDebuggerNotPresent())
                {
                    (*(WD_ROUTINE)swi(3))();
                    return;
                }
                KeBugCheck(1);
            }
        }
        ExFreeToPagedLookasideList((void *)(MpData + 0xa80), data_pointer_3);
    }
    if (data_pointer_4)
    {
        if (data_pointer_4[2])
        {
            ObfDereferenceObject();
            value = ObTotalReferences;
            WdUnresolvedAtomicBegin();
            ObTotalReferences -= 1;
            WdUnresolvedAtomicEnd();
            if (value + -1 <= -1 && *(int32_t *)(MpData + 0x364) <= -1)
            {
                if (!KdRefreshDebuggerNotPresent())
                {
                    (*(WD_ROUTINE)swi(3))();
                    return;
                }
                KeBugCheck(1);
            }
        }
        ExFreeToPagedLookasideList((void *)(MpData + 0xa80), data_pointer_4);
    }
    return;
}

uint64_t *MppFindBoostControlUnsafe(int64_t input)
{
    uint64_t *data_pointer;
    data_pointer = *(uint64_t **)((uint64_t *)(MpData + 0xa00));
    while (true)
    {
        if (data_pointer == (uint64_t *)(MpData + 0xa00))
        {
            return NULL;
        }
        if (data_pointer[2] == input)
        {
            break;
        }
        data_pointer = (uint64_t *)(*data_pointer);
    }

    return data_pointer;
}

void MpClearBoostControlList(void)
{
    int64_t *data_pointer;
    int64_t *data_pointer_2;
    int64_t value;
    if (!(*(uint32_t *)(MpData + 0x360) & 4))
    {
        return;
    }
    ExAcquireFastMutex(MpData + 0xa10);
    while (true)
    {
        data_pointer = (int64_t *)(MpData + 0xa00);
        data_pointer_2 = (int64_t *)(*data_pointer);
        if (data_pointer_2 == data_pointer)
        {
            ExReleaseFastMutex(MpData + 0xa10);
            return;
        }
        if ((int64_t *)data_pointer_2[1] != data_pointer || (value = *data_pointer_2, (int64_t *)(*(int64_t *)(value + 8)) != data_pointer_2))
        {
            break;
        }
        *data_pointer = value;
        *(int64_t **)(value + 8) = data_pointer;
        if (*(int32_t *)(MpData + 0xb00))
        {
            MppBoostThread(data_pointer_2[2], ((uint32_t *)data_pointer_2)[7], *(uint32_t *)(&data_pointer_2[3]), 1);
        }
        if (data_pointer_2)
        {
            if (data_pointer_2[2])
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
                    (*(WD_ROUTINE)swi(3))();
                    return;
                }
            }
            ExFreeToPagedLookasideList((void *)(MpData + 0xa80), data_pointer_2);
        }
    }

    (*(WD_ROUTINE)swi(0x29))(3);
}

void MpShutdownBoostManager(void)
{
    MpClearBoostControlList();
    ExDeletePagedLookasideList(MpData + 0xa80);
    return;
}

void MpInitializeBoostManager(void)
{
    int64_t data;
    data = MpData;
    *(uint32_t *)(MpData + 0xa10) = 1;
    *(uint64_t *)(data + 0xa18) = 0;
    *(uint32_t *)(data + 0xa20) = 0;
    KeInitializeEvent(data + 0xa28, 1, 0);
    data = MpData + 0xa00;
    *(int64_t *)(MpData + 0xa08) = data;
    *(int64_t *)data = data;
    ExInitializePagedLookasideList(MpData + 0xa80, 0, 0, 0, 0x20, 0x6362504d, 0);
    *(uint32_t *)(MpData + 0xb00) = 0;
    *(uint32_t *)(MpData + 0xb04) = 0xffffffff;
    return;
}

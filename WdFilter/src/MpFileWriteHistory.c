#include "wdfilter.h"

void MpUpdateFileWriteHistory(void *input, void *input_2, void *input_3, WD_LAYOUT_2 *input_4, int64_t *input_5)
{
    uint64_t *atomic_value;
    uint64_t file_object;
    uint64_t buffer_2;
    int64_t handle_context;
    uint64_t value;
    uint64_t value_2;
    uint64_t *data_pointer;
    char byte_value;
    int64_t *data_pointer_2;
    bool enabled;
    int32_t value_3;
    char byte_value_2;
    uint64_t process_id;
    void *data_pointer_3;
    uint64_t value_4;
    uint64_t value_5;
    uint64_t value_6;
    uint64_t value_7;
    uint64_t value_8;
    uint64_t value_9;
    uint64_t value_10;
    int64_t value_11;
    uint64_t value_12;
    uint64_t value_13;
    uint64_t value_14;
    uint64_t value_15;
    uint64_t value_16;
    uint64_t value_17;
    uint64_t value_18;
    uint64_t value_19;
    uint64_t value_20;
    uint64_t value_21;
    uint64_t value_22;
    uint64_t value_23;
    uint64_t value_24;
    uint64_t value_25;
    uint64_t value_26;
    uint64_t value_27;
    uint64_t value_28;
    uint32_t value_29;
    uint32_t value_30;
    uint32_t value_31;
    uint32_t value_32;
    uint64_t instance;
    uint64_t value_33;
    uint32_t value_34;
    int64_t *data_pointer_4;
    void *data_pointer_5;
    int64_t process;
    uint64_t value_36;
    data_pointer_4 = input_5;
    data_pointer_3 = input;
    memset(&buffer_2, 0, (char *)0xdc);
    byte_value_2 = '\0';
    if (!input || !input_2 || !input_3 || input_4 && (input_4->field_0xa8 & 1 || ((uint16_t *)input_2)[1] && ((uint16_t *)input_2)[1] < 0xfffe) || (process = MpGetRequestorProcess(input), !process))
    {
        return;
    }
    value_36 = MpFileTimeFromUlong64(PsGetProcessCreateTimeQuadPart(process));
    process_id = PsGetProcessId(process);
    if (input_4)
    {
        if (input_4->field_0xa8 & 1)
        {
            return;
        }
        if ((uint16_t)(((int16_t *)input_2)[1] - 1U) <= 0xfffc)
        {
            goto block_1;
        }
        FltAcquirePushLockShared((int64_t)input_3 + 0xc0);
        data_pointer_2 = (int64_t *)(((int64_t *)input_3)[0x1a] + 0x20);
        if (!((int64_t *)input_3)[0x1a])
        {
            data_pointer_2 = &((int64_t *)input_3)[0x16];
        }
        process = 0;
        WdUnresolvedAtomicBegin();
        if (*data_pointer_2)
        {
            process = *data_pointer_2;
        }
        else
        {
            *data_pointer_2 = 0;
        }
        WdUnresolvedAtomicEnd();
        FltReleasePushLock((int64_t)input_3 + 0xc0);
        file_object = process_id;
    }
    else
    {
        block_1:
        process = 0;

        WdUnresolvedAtomicBegin();
        value_11 = *(int64_t *)((int64_t)input_3 + 0xb0);
        if (value_11)
        {
            process = value_11;
        }
        else
        {
            *(int64_t *)((int64_t)input_3 + 0xb0) = 0;
        }
        WdUnresolvedAtomicEnd();
        file_object = process_id;
    }
    buffer_2 &= 0xffffffffffffff00;
    if (0 < ((int32_t *)input_3)[0x9e])
    {
        file_object = ((uint64_t *)input_2)[4];
        if (FltSupportsStreamHandleContexts(file_object))
        {
            file_object = ((uint64_t *)input_2)[4];
            instance = ((uint64_t *)input_2)[3];
            handle_context = 0;
            if (0 <= (int32_t)FltGetStreamHandleContext(instance, file_object, &handle_context))
            {
                if (*(char **)(handle_context + 0x68) && *(*(char **)(handle_context + 0x68)))
                {
                    data_pointer = *(uint64_t **)(handle_context + 0x68);
                    buffer_2 = *data_pointer;
                    value_4 = data_pointer[1];
                    value_5 = data_pointer[2];
                    value_6 = data_pointer[3];
                    value_7 = data_pointer[4];
                    value_8 = data_pointer[5];
                    value_9 = data_pointer[6];
                    value_10 = data_pointer[7];
                    value_12 = data_pointer[8];
                    value_13 = data_pointer[9];
                    value_14 = data_pointer[10];
                    value_15 = data_pointer[0xb];
                    value_16 = data_pointer[0xc];
                    value_17 = data_pointer[0xd];
                    value_18 = data_pointer[0xe];
                    value_19 = data_pointer[0xf];
                    value_33 = data_pointer[0x1a];
                    value_20 = data_pointer[0x10];
                    value_21 = data_pointer[0x11];
                    value_23 = data_pointer[0x12];
                    value_24 = data_pointer[0x13];
                    value_25 = data_pointer[0x14];
                    value_26 = data_pointer[0x15];
                    value_27 = data_pointer[0x16];
                    value_28 = data_pointer[0x17];
                    value_29 = *(uint32_t *)(&data_pointer[0x18]);
                    value_30 = ((uint32_t *)data_pointer)[0x31];
                    value_31 = *(uint32_t *)(&data_pointer[0x19]);
                    value_32 = ((uint32_t *)data_pointer)[0x33];
                    value_34 = *(uint32_t *)(&data_pointer[0x1b]);
                }
                FltReleaseContext(handle_context);
            }
        }
        file_object = process_id;
    }
    data_pointer_5 = data_pointer_3;
    if (data_pointer_4 && *data_pointer_4)
    {
        value_2 = process - (uint64_t)(*(uint32_t *)(((int64_t *)data_pointer_3)[2] + 0x18));
    }
    else
    {
        value_2 = *(uint64_t *)(((int64_t *)data_pointer_3)[2] + 0x28);
        process = *(uint32_t *)(((int64_t *)data_pointer_3)[2] + 0x18) + value_2;
    }
    value = process - 1;
    if (input_4)
    {
        FltAcquirePushLockShared((int64_t)input_3 + 0xc0);
        byte_value = 1;
        byte_value_2 = '\x01';
        file_object = process_id;
        if (!((int64_t *)input_3)[0x1a])
        {
            goto block_2;
        }
        data_pointer = (uint64_t *)(((int64_t *)input_3)[0x1a] + 0x48);
    }
    else
    {
        byte_value = 0;
        block_2:
        data_pointer = &((uint64_t *)input_3)[0x2a];
    }
    atomic_value = &data_pointer[6];
    value_3 = WdAtomicAdd32((volatile int32_t *)((int32_t *)atomic_value), 1);
    if (!value_3)
    {
        WdUnresolvedAtomicBegin();
        *data_pointer = value_2;
        WdUnresolvedAtomicEnd();
    }
    WdUnresolvedAtomicBegin();
    data_pointer[1] = value;
    WdUnresolvedAtomicEnd();
    do
    {
        value_22 = data_pointer[2];
        if (value_22 <= value_2)
        {
            goto block_3;
        }
        WdUnresolvedAtomicBegin();
        enabled = value_22 == data_pointer[2];
        if (enabled)
        {
            data_pointer[2] = value_2;
        }
        WdUnresolvedAtomicEnd();
    }
    while (!enabled);
    block_3:
    do
    {
        value_2 = data_pointer[3];
        if (value <= value_2)
        {
            break;
        }
        WdUnresolvedAtomicBegin();
        enabled = value_2 == data_pointer[3];
        if (enabled)
        {
            data_pointer[3] = value;
        }
        WdUnresolvedAtomicEnd();
    }
    while (!enabled);

    WdUnresolvedAtomicBegin();
    data_pointer[4] = data_pointer[4] + *(uint32_t *)(((int64_t *)data_pointer_5)[2] + 0x18);
    WdUnresolvedAtomicEnd();
    if (!(*(int32_t *)(&data_pointer[8])) || (int32_t)file_object != *(int32_t *)(&data_pointer[8]))
    {
        *(int32_t *)(&data_pointer[8]) = (int32_t)file_object;
        data_pointer[7] = value_36;
    }
    if (data_pointer_4 && *data_pointer_4)
    {
        WdUnresolvedAtomicBegin();
        data_pointer[5] = data_pointer[5] + *data_pointer_4;
        WdUnresolvedAtomicEnd();
        WdAtomicOr32((volatile int32_t *)((uint32_t *)((int64_t)data_pointer + 0x34)), 4);
    }
    if ((char)buffer_2)
    {
        FltAcquirePushLockExclusive((int64_t)input_3 + 0x270);
        *(uint64_t *)((int64_t)data_pointer + 0x44) = buffer_2;
        *(uint64_t *)((int64_t)data_pointer + 0x4c) = value_4;
        *(uint64_t *)((int64_t)data_pointer + 0x54) = value_5;
        *(uint64_t *)((int64_t)data_pointer + 0x5c) = value_6;
        *(uint64_t *)((int64_t)data_pointer + 100) = value_7;
        *(uint64_t *)((int64_t)data_pointer + 0x6c) = value_8;
        *(uint64_t *)((int64_t)data_pointer + 0x74) = value_9;
        *(uint64_t *)((int64_t)data_pointer + 0x7c) = value_10;
        *(uint64_t *)((int64_t)data_pointer + 0x84) = value_12;
        *(uint64_t *)((int64_t)data_pointer + 0x8c) = value_13;
        *(uint64_t *)((int64_t)data_pointer + 0x94) = value_14;
        *(uint64_t *)((int64_t)data_pointer + 0x9c) = value_15;
        *(uint64_t *)((int64_t)data_pointer + 0xa4) = value_16;
        *(uint64_t *)((int64_t)data_pointer + 0xac) = value_17;
        *(uint64_t *)((int64_t)data_pointer + 0xb4) = value_18;
        *(uint64_t *)((int64_t)data_pointer + 0xbc) = value_19;
        *(uint64_t *)((int64_t)data_pointer + 0xc4) = value_20;
        *(uint64_t *)((int64_t)data_pointer + 0xcc) = value_21;
        *(uint64_t *)((int64_t)data_pointer + 0xd4) = value_23;
        *(uint64_t *)((int64_t)data_pointer + 0xdc) = value_24;
        *(uint64_t *)((int64_t)data_pointer + 0xe4) = value_25;
        *(uint64_t *)((int64_t)data_pointer + 0xec) = value_26;
        ((uint32_t *)data_pointer)[0x3d] = (uint32_t)value_27;
        *(uint32_t *)(&data_pointer[0x1f]) = WdLoadField(&value_27, 4, 4);
        ((uint32_t *)data_pointer)[0x3f] = (uint32_t)value_28;
        *(uint32_t *)(&data_pointer[0x20]) = WdLoadField(&value_28, 4, 4);
        ((uint32_t *)data_pointer)[0x41] = value_29;
        *(uint32_t *)(&data_pointer[0x21]) = value_30;
        ((uint32_t *)data_pointer)[0x43] = value_31;
        *(uint32_t *)(&data_pointer[0x22]) = value_32;
        *(uint64_t *)((int64_t)data_pointer + 0x114) = value_33;
        ((uint32_t *)data_pointer)[0x47] = value_34;
        FltReleasePushLock((int64_t)input_3 + 0x270);
        byte_value = byte_value_2;
    }
    else
    {
        ((char *)data_pointer)[0x44] = 0;
    }
    if (input_4 && byte_value)
    {
        FltReleasePushLock((int64_t)input_3 + 0xc0);
    }
    return;
}

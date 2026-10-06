#include "wdfilter.h"

int64_t MpGetFileWriteHistoryAndReset__scan(WD_LAYOUT_2 *input, int16_t input_2, void *input_3, WD_LAYOUT_1 *buffer)
{
    char byte_value;
    int32_t value;
    int64_t value_2;
    int64_t *buffer_2;
    int32_t value_3;
    int64_t lock;
    int64_t value_4;
    int64_t value_5;
    uint32_t value_6;
    uint32_t value_7;
    uint32_t value_8;
    uint64_t value_9;
    if (!input)
    {
        buffer_2 = &((int64_t *)input_3)[0x2a];
        value = 0;
        WdUnresolvedAtomicBegin();
        value_3 = *(int32_t *)((int64_t)input_3 + 0x180);
        if (value_3)
        {
            value = value_3;
        }
        else
        {
            *(int32_t *)((int64_t)input_3 + 0x180) = 0;
        }
        WdUnresolvedAtomicEnd();
        buffer->field_0x30 = value;
        value_2 = 0;
        WdUnresolvedAtomicBegin();
        if (*buffer_2)
        {
            value_2 = *buffer_2;
        }
        else
        {
            *buffer_2 = 0;
        }
        WdUnresolvedAtomicEnd();
        buffer->field_0x0 = value_2;
        value_2 = 0;
        WdUnresolvedAtomicBegin();
        lock = *(int64_t *)((int64_t)input_3 + 0x158);
        if (lock)
        {
            value_2 = lock;
        }
        else
        {
            *(int64_t *)((int64_t)input_3 + 0x158) = 0;
        }
        WdUnresolvedAtomicEnd();
        buffer->field_0x8 = value_2;
        value_2 = 0;
        WdUnresolvedAtomicBegin();
        lock = *(int64_t *)((int64_t)input_3 + 0x160);
        if (lock)
        {
            value_2 = lock;
        }
        else
        {
            *(int64_t *)((int64_t)input_3 + 0x160) = 0;
        }
        WdUnresolvedAtomicEnd();
        buffer->field_0x10 = value_2;
        value_2 = 0;
        WdUnresolvedAtomicBegin();
        lock = *(int64_t *)((int64_t)input_3 + 0x168);
        if (lock)
        {
            value_2 = lock;
        }
        else
        {
            *(int64_t *)((int64_t)input_3 + 0x168) = 0;
        }
        WdUnresolvedAtomicEnd();
        buffer->field_0x18 = value_2;
        value_2 = 0;
        WdUnresolvedAtomicBegin();
        lock = *(int64_t *)((int64_t)input_3 + 0x170);
        if (lock)
        {
            value_2 = lock;
        }
        else
        {
            *(int64_t *)((int64_t)input_3 + 0x170) = 0;
        }
        WdUnresolvedAtomicEnd();
        buffer->field_0x20 = value_2;
        value_2 = 0;
        WdUnresolvedAtomicBegin();
        lock = *(int64_t *)((int64_t)input_3 + 0x178);
        if (lock)
        {
            value_2 = lock;
        }
        else
        {
            *(int64_t *)((int64_t)input_3 + 0x178) = 0;
        }
        WdUnresolvedAtomicEnd();
        buffer->field_0x28 = value_2;
        value = 0;
        WdUnresolvedAtomicBegin();
        value_3 = *(int32_t *)((int64_t)input_3 + 0x184);
        if (value_3)
        {
            value = value_3;
        }
        else
        {
            *(int32_t *)((int64_t)input_3 + 0x184) = 0;
        }
        WdUnresolvedAtomicEnd();
        buffer->field_0x34 = value;
        buffer->field_0x40 = ((uint32_t *)input_3)[100];
        buffer->field_0x38 = ((int64_t *)input_3)[0x31];
        WdUnresolvedAtomicBegin();
        byte_value = *(char *)((int64_t)input_3 + 0x194);
        *(char *)((int64_t)input_3 + 0x194) = '\0';
        WdUnresolvedAtomicEnd();
        if (byte_value)
        {
            FltAcquirePushLockExclusive((int64_t)input_3 + 0x270);
            value_9 = *(uint64_t *)((int64_t)input_3 + 0x19c);
            *(uint64_t *)buffer->field_0x44 = *(uint64_t *)((int64_t)input_3 + 0x194);
            *(uint64_t *)(&buffer->field_0x44[8]) = value_9;
            value_9 = *(uint64_t *)((int64_t)input_3 + 0x1ac);
            *(uint64_t *)(&buffer->field_0x44[0x10]) = *(uint64_t *)((int64_t)input_3 + 0x1a4);
            *(uint64_t *)(&buffer->field_0x44[0x18]) = value_9;
            value_9 = *(uint64_t *)((int64_t)input_3 + 0x1bc);
            *(uint64_t *)(&buffer->field_0x44[0x20]) = *(uint64_t *)((int64_t)input_3 + 0x1b4);
            *(uint64_t *)(&buffer->field_0x44[0x28]) = value_9;
            value_9 = *(uint64_t *)((int64_t)input_3 + 0x1cc);
            *(uint64_t *)(&buffer->field_0x44[0x30]) = *(uint64_t *)((int64_t)input_3 + 0x1c4);
            *(uint64_t *)(&buffer->field_0x44[0x38]) = value_9;
            value_9 = *(uint64_t *)((int64_t)input_3 + 0x1dc);
            *(uint64_t *)(&buffer->field_0x44[0x40]) = *(uint64_t *)((int64_t)input_3 + 0x1d4);
            *(uint64_t *)(&buffer->field_0x44[0x48]) = value_9;
            value_9 = *(uint64_t *)((int64_t)input_3 + 0x1ec);
            *(uint64_t *)(&buffer->field_0x44[0x50]) = *(uint64_t *)((int64_t)input_3 + 0x1e4);
            *(uint64_t *)(&buffer->field_0x44[0x58]) = value_9;
            value_9 = *(uint64_t *)((int64_t)input_3 + 0x1fc);
            *(uint64_t *)(&buffer->field_0x44[0x60]) = *(uint64_t *)((int64_t)input_3 + 500);
            *(uint64_t *)(&buffer->field_0x44[0x68]) = value_9;
            value_9 = *(uint64_t *)((int64_t)input_3 + 0x20c);
            *(uint64_t *)(&buffer->field_0x44[0x70]) = *(uint64_t *)((int64_t)input_3 + 0x204);
            *(uint64_t *)(&buffer->field_0x44[0x78]) = value_9;
            value_9 = *(uint64_t *)((int64_t)input_3 + 0x21c);
            *(uint64_t *)(&buffer->field_0x44[0x80]) = *(uint64_t *)((int64_t)input_3 + 0x214);
            *(uint64_t *)(&buffer->field_0x44[0x88]) = value_9;
            value_9 = *(uint64_t *)((int64_t)input_3 + 0x22c);
            *(uint64_t *)(&buffer->field_0x44[0x90]) = *(uint64_t *)((int64_t)input_3 + 0x224);
            *(uint64_t *)(&buffer->field_0x44[0x98]) = value_9;
            value_9 = *(uint64_t *)((int64_t)input_3 + 0x23c);
            *(uint64_t *)(&buffer->field_0x44[0xa0]) = *(uint64_t *)((int64_t)input_3 + 0x234);
            *(uint64_t *)(&buffer->field_0x44[0xa8]) = value_9;
            value_6 = ((uint32_t *)input_3)[0x92];
            value_7 = ((uint32_t *)input_3)[0x93];
            value_8 = ((uint32_t *)input_3)[0x94];
            buffer->field_0xf4 = ((uint32_t *)input_3)[0x91];
            buffer->field_0xf8 = value_6;
            buffer->field_0xfc = value_7;
            buffer->field_0x100 = value_8;
            value_6 = ((uint32_t *)input_3)[0x96];
            value_7 = ((uint32_t *)input_3)[0x97];
            value_8 = ((uint32_t *)input_3)[0x98];
            buffer->field_0x104 = ((uint32_t *)input_3)[0x95];
            buffer->field_0x108 = value_6;
            buffer->field_0x10c = value_7;
            buffer->field_0x110 = value_8;
            *(uint64_t *)buffer->field_0x114 = *(uint64_t *)((int64_t)input_3 + 0x264);
            buffer->field_0x11c = ((uint32_t *)input_3)[0x9b];
            FltReleasePushLock((int64_t)input_3 + 0x270);
            buffer->field_0x44[0] = 1;
        }
        else
        {
            buffer->field_0x44[0] = 0;
        }
        memset(buffer_2, 0, (char *)0x44);
        ((char *)input_3)[0x194] = 0;
        ((uint64_t *)input_3)[0x2c] = 0xffffffffffffffff;
        value_2 = 0;
        return value_2;
    }
    if (input->field_0xa8 & 1)
    {
        value_2 = 0xc00000e5;
        return value_2;
    }
    if ((uint16_t)(input_2 - 1U) <= 0xfffc)
    {
        memset(buffer, 0, (char *)0x120);
        value_2 = 0;
        return value_2;
    }
    FltAcquirePushLockShared((int64_t)input_3 + 0xc0);
    value_5 = ((int64_t *)input_3)[0x1a];
    lock = (int64_t)input_3 + 0x270;
    if (value_5)
    {
        buffer_2 = (int64_t *)(value_5 + 0x48);
        value = 0;
        WdUnresolvedAtomicBegin();
        value_3 = *(int32_t *)(value_5 + 0x78);
        if (value_3)
        {
            value = value_3;
        }
        else
        {
            *(int32_t *)(value_5 + 0x78) = 0;
        }
        WdUnresolvedAtomicEnd();
        buffer->field_0x30 = value;
        value_2 = 0;
        WdUnresolvedAtomicBegin();
        if (*buffer_2)
        {
            value_2 = *buffer_2;
        }
        else
        {
            *buffer_2 = 0;
        }
        WdUnresolvedAtomicEnd();
        buffer->field_0x0 = value_2;
        value_2 = 0;
        WdUnresolvedAtomicBegin();
        value_4 = *(int64_t *)(value_5 + 0x50);
        if (value_4)
        {
            value_2 = value_4;
        }
        else
        {
            *(int64_t *)(value_5 + 0x50) = 0;
        }
        WdUnresolvedAtomicEnd();
        buffer->field_0x8 = value_2;
        value_2 = 0;
        WdUnresolvedAtomicBegin();
        value_4 = *(int64_t *)(value_5 + 0x58);
        if (value_4)
        {
            value_2 = value_4;
        }
        else
        {
            *(int64_t *)(value_5 + 0x58) = 0;
        }
        WdUnresolvedAtomicEnd();
        buffer->field_0x10 = value_2;
        value_2 = 0;
        WdUnresolvedAtomicBegin();
        value_4 = *(int64_t *)(value_5 + 0x60);
        if (value_4)
        {
            value_2 = value_4;
        }
        else
        {
            *(int64_t *)(value_5 + 0x60) = 0;
        }
        WdUnresolvedAtomicEnd();
        buffer->field_0x18 = value_2;
        value_2 = 0;
        WdUnresolvedAtomicBegin();
        value_4 = *(int64_t *)(value_5 + 0x68);
        if (value_4)
        {
            value_2 = value_4;
        }
        else
        {
            *(int64_t *)(value_5 + 0x68) = 0;
        }
        WdUnresolvedAtomicEnd();
        buffer->field_0x20 = value_2;
        value_2 = 0;
        WdUnresolvedAtomicBegin();
        value_4 = *(int64_t *)(value_5 + 0x70);
        if (value_4)
        {
            value_2 = value_4;
        }
        else
        {
            *(int64_t *)(value_5 + 0x70) = 0;
        }
        WdUnresolvedAtomicEnd();
        buffer->field_0x28 = value_2;
        value = 0;
        WdUnresolvedAtomicBegin();
        value_3 = *(int32_t *)(value_5 + 0x7c);
        if (value_3)
        {
            value = value_3;
        }
        else
        {
            *(int32_t *)(value_5 + 0x7c) = 0;
        }
        WdUnresolvedAtomicEnd();
        buffer->field_0x34 = value;
        buffer->field_0x40 = *(uint32_t *)(value_5 + 0x88);
        buffer->field_0x38 = *(int64_t *)(value_5 + 0x80);
        WdUnresolvedAtomicBegin();
        byte_value = *(char *)(value_5 + 0x8c);
        *(char *)(value_5 + 0x8c) = '\0';
        WdUnresolvedAtomicEnd();
        if (!byte_value)
        {
            block_1:
            buffer->field_0x44[0] = 0;

            goto block_2;
        }
        FltAcquirePushLockExclusive(lock);
        value_9 = *(uint64_t *)(value_5 + 0x94);
        *(uint64_t *)buffer->field_0x44 = *(uint64_t *)(value_5 + 0x8c);
        *(uint64_t *)(&buffer->field_0x44[8]) = value_9;
        value_9 = *(uint64_t *)(value_5 + 0xa4);
        *(uint64_t *)(&buffer->field_0x44[0x10]) = *(uint64_t *)(value_5 + 0x9c);
        *(uint64_t *)(&buffer->field_0x44[0x18]) = value_9;
        value_9 = *(uint64_t *)(value_5 + 0xb4);
        *(uint64_t *)(&buffer->field_0x44[0x20]) = *(uint64_t *)(value_5 + 0xac);
        *(uint64_t *)(&buffer->field_0x44[0x28]) = value_9;
        value_9 = *(uint64_t *)(value_5 + 0xc4);
        *(uint64_t *)(&buffer->field_0x44[0x30]) = *(uint64_t *)(value_5 + 0xbc);
        *(uint64_t *)(&buffer->field_0x44[0x38]) = value_9;
        value_9 = *(uint64_t *)(value_5 + 0xd4);
        *(uint64_t *)(&buffer->field_0x44[0x40]) = *(uint64_t *)(value_5 + 0xcc);
        *(uint64_t *)(&buffer->field_0x44[0x48]) = value_9;
        value_9 = *(uint64_t *)(value_5 + 0xe4);
        *(uint64_t *)(&buffer->field_0x44[0x50]) = *(uint64_t *)(value_5 + 0xdc);
        *(uint64_t *)(&buffer->field_0x44[0x58]) = value_9;
        value_9 = *(uint64_t *)(value_5 + 0xf4);
        *(uint64_t *)(&buffer->field_0x44[0x60]) = *(uint64_t *)(value_5 + 0xec);
        *(uint64_t *)(&buffer->field_0x44[0x68]) = value_9;
        value_9 = *(uint64_t *)(value_5 + 0x104);
        *(uint64_t *)(&buffer->field_0x44[0x70]) = *(uint64_t *)(value_5 + 0xfc);
        *(uint64_t *)(&buffer->field_0x44[0x78]) = value_9;
        value_9 = *(uint64_t *)(value_5 + 0x114);
        *(uint64_t *)(&buffer->field_0x44[0x80]) = *(uint64_t *)(value_5 + 0x10c);
        *(uint64_t *)(&buffer->field_0x44[0x88]) = value_9;
        value_9 = *(uint64_t *)(value_5 + 0x124);
        *(uint64_t *)(&buffer->field_0x44[0x90]) = *(uint64_t *)(value_5 + 0x11c);
        *(uint64_t *)(&buffer->field_0x44[0x98]) = value_9;
        value_9 = *(uint64_t *)(value_5 + 0x134);
        *(uint64_t *)(&buffer->field_0x44[0xa0]) = *(uint64_t *)(value_5 + 300);
        *(uint64_t *)(&buffer->field_0x44[0xa8]) = value_9;
        value_6 = *(uint32_t *)(value_5 + 0x140);
        value_7 = *(uint32_t *)(value_5 + 0x144);
        value_8 = *(uint32_t *)(value_5 + 0x148);
        buffer->field_0xf4 = *(uint32_t *)(value_5 + 0x13c);
        buffer->field_0xf8 = value_6;
        buffer->field_0xfc = value_7;
        buffer->field_0x100 = value_8;
        value_6 = *(uint32_t *)(value_5 + 0x150);
        value_7 = *(uint32_t *)(value_5 + 0x154);
        value_8 = *(uint32_t *)(value_5 + 0x158);
        buffer->field_0x104 = *(uint32_t *)(value_5 + 0x14c);
        buffer->field_0x108 = value_6;
        buffer->field_0x10c = value_7;
        buffer->field_0x110 = value_8;
        *(uint64_t *)buffer->field_0x114 = *(uint64_t *)(value_5 + 0x15c);
        buffer->field_0x11c = *(uint32_t *)(value_5 + 0x164);
    }
    else
    {
        buffer_2 = &((int64_t *)input_3)[0x2a];
        value = 0;
        WdUnresolvedAtomicBegin();
        value_3 = *(int32_t *)((int64_t)input_3 + 0x180);
        if (value_3)
        {
            value = value_3;
        }
        else
        {
            *(int32_t *)((int64_t)input_3 + 0x180) = 0;
        }
        WdUnresolvedAtomicEnd();
        buffer->field_0x30 = value;
        value_2 = 0;
        WdUnresolvedAtomicBegin();
        if (*buffer_2)
        {
            value_2 = *buffer_2;
        }
        else
        {
            *buffer_2 = 0;
        }
        WdUnresolvedAtomicEnd();
        buffer->field_0x0 = value_2;
        value_2 = 0;
        WdUnresolvedAtomicBegin();
        value_5 = *(int64_t *)((int64_t)input_3 + 0x158);
        if (value_5)
        {
            value_2 = value_5;
        }
        else
        {
            *(int64_t *)((int64_t)input_3 + 0x158) = 0;
        }
        WdUnresolvedAtomicEnd();
        buffer->field_0x8 = value_2;
        value_2 = 0;
        WdUnresolvedAtomicBegin();
        value_5 = *(int64_t *)((int64_t)input_3 + 0x160);
        if (value_5)
        {
            value_2 = value_5;
        }
        else
        {
            *(int64_t *)((int64_t)input_3 + 0x160) = 0;
        }
        WdUnresolvedAtomicEnd();
        buffer->field_0x10 = value_2;
        value_2 = 0;
        WdUnresolvedAtomicBegin();
        value_5 = *(int64_t *)((int64_t)input_3 + 0x168);
        if (value_5)
        {
            value_2 = value_5;
        }
        else
        {
            *(int64_t *)((int64_t)input_3 + 0x168) = 0;
        }
        WdUnresolvedAtomicEnd();
        buffer->field_0x18 = value_2;
        value_2 = 0;
        WdUnresolvedAtomicBegin();
        value_5 = *(int64_t *)((int64_t)input_3 + 0x170);
        if (value_5)
        {
            value_2 = value_5;
        }
        else
        {
            *(int64_t *)((int64_t)input_3 + 0x170) = 0;
        }
        WdUnresolvedAtomicEnd();
        buffer->field_0x20 = value_2;
        value_2 = 0;
        WdUnresolvedAtomicBegin();
        value_5 = *(int64_t *)((int64_t)input_3 + 0x178);
        if (value_5)
        {
            value_2 = value_5;
        }
        else
        {
            *(int64_t *)((int64_t)input_3 + 0x178) = 0;
        }
        WdUnresolvedAtomicEnd();
        buffer->field_0x28 = value_2;
        value = 0;
        WdUnresolvedAtomicBegin();
        value_3 = *(int32_t *)((int64_t)input_3 + 0x184);
        if (value_3)
        {
            value = value_3;
        }
        else
        {
            *(int32_t *)((int64_t)input_3 + 0x184) = 0;
        }
        WdUnresolvedAtomicEnd();
        buffer->field_0x34 = value;
        buffer->field_0x40 = ((uint32_t *)input_3)[100];
        buffer->field_0x38 = ((int64_t *)input_3)[0x31];
        WdUnresolvedAtomicBegin();
        byte_value = *(char *)((int64_t)input_3 + 0x194);
        *(char *)((int64_t)input_3 + 0x194) = '\0';
        WdUnresolvedAtomicEnd();
        if (!byte_value)
        {
            goto block_1;
        }
        FltAcquirePushLockExclusive(lock);
        value_9 = *(uint64_t *)((int64_t)input_3 + 0x19c);
        *(uint64_t *)buffer->field_0x44 = *(uint64_t *)((int64_t)input_3 + 0x194);
        *(uint64_t *)(&buffer->field_0x44[8]) = value_9;
        value_9 = *(uint64_t *)((int64_t)input_3 + 0x1ac);
        *(uint64_t *)(&buffer->field_0x44[0x10]) = *(uint64_t *)((int64_t)input_3 + 0x1a4);
        *(uint64_t *)(&buffer->field_0x44[0x18]) = value_9;
        value_9 = *(uint64_t *)((int64_t)input_3 + 0x1bc);
        *(uint64_t *)(&buffer->field_0x44[0x20]) = *(uint64_t *)((int64_t)input_3 + 0x1b4);
        *(uint64_t *)(&buffer->field_0x44[0x28]) = value_9;
        value_9 = *(uint64_t *)((int64_t)input_3 + 0x1cc);
        *(uint64_t *)(&buffer->field_0x44[0x30]) = *(uint64_t *)((int64_t)input_3 + 0x1c4);
        *(uint64_t *)(&buffer->field_0x44[0x38]) = value_9;
        value_9 = *(uint64_t *)((int64_t)input_3 + 0x1dc);
        *(uint64_t *)(&buffer->field_0x44[0x40]) = *(uint64_t *)((int64_t)input_3 + 0x1d4);
        *(uint64_t *)(&buffer->field_0x44[0x48]) = value_9;
        value_9 = *(uint64_t *)((int64_t)input_3 + 0x1ec);
        *(uint64_t *)(&buffer->field_0x44[0x50]) = *(uint64_t *)((int64_t)input_3 + 0x1e4);
        *(uint64_t *)(&buffer->field_0x44[0x58]) = value_9;
        value_9 = *(uint64_t *)((int64_t)input_3 + 0x1fc);
        *(uint64_t *)(&buffer->field_0x44[0x60]) = *(uint64_t *)((int64_t)input_3 + 500);
        *(uint64_t *)(&buffer->field_0x44[0x68]) = value_9;
        value_9 = *(uint64_t *)((int64_t)input_3 + 0x20c);
        *(uint64_t *)(&buffer->field_0x44[0x70]) = *(uint64_t *)((int64_t)input_3 + 0x204);
        *(uint64_t *)(&buffer->field_0x44[0x78]) = value_9;
        value_9 = *(uint64_t *)((int64_t)input_3 + 0x21c);
        *(uint64_t *)(&buffer->field_0x44[0x80]) = *(uint64_t *)((int64_t)input_3 + 0x214);
        *(uint64_t *)(&buffer->field_0x44[0x88]) = value_9;
        value_9 = *(uint64_t *)((int64_t)input_3 + 0x22c);
        *(uint64_t *)(&buffer->field_0x44[0x90]) = *(uint64_t *)((int64_t)input_3 + 0x224);
        *(uint64_t *)(&buffer->field_0x44[0x98]) = value_9;
        value_9 = *(uint64_t *)((int64_t)input_3 + 0x23c);
        *(uint64_t *)(&buffer->field_0x44[0xa0]) = *(uint64_t *)((int64_t)input_3 + 0x234);
        *(uint64_t *)(&buffer->field_0x44[0xa8]) = value_9;
        value_6 = ((uint32_t *)input_3)[0x92];
        value_7 = ((uint32_t *)input_3)[0x93];
        value_8 = ((uint32_t *)input_3)[0x94];
        buffer->field_0xf4 = ((uint32_t *)input_3)[0x91];
        buffer->field_0xf8 = value_6;
        buffer->field_0xfc = value_7;
        buffer->field_0x100 = value_8;
        value_6 = ((uint32_t *)input_3)[0x96];
        value_7 = ((uint32_t *)input_3)[0x97];
        value_8 = ((uint32_t *)input_3)[0x98];
        buffer->field_0x104 = ((uint32_t *)input_3)[0x95];
        buffer->field_0x108 = value_6;
        buffer->field_0x10c = value_7;
        buffer->field_0x110 = value_8;
        *(uint64_t *)buffer->field_0x114 = *(uint64_t *)((int64_t)input_3 + 0x264);
        buffer->field_0x11c = ((uint32_t *)input_3)[0x9b];
    }
    FltReleasePushLock(lock);
    buffer->field_0x44[0] = 1;
    block_2:
    memset(buffer_2, 0, (char *)0x44);

    buffer_2[2] = -1;
    ((char *)buffer_2)[0x44] = 0;
    FltReleasePushLock((int64_t)input_3 + 0xc0);
    value_2 = 0;
    return value_2;
}

void ExAllocateFromNPagedLookasideList(void *input)
{
    *(int32_t *)((int64_t)input + 0x14) = *(int32_t *)((int64_t)input + 0x14) + 1;
    if (!ExpInterlockedPopEntrySList())
    {
        *(int32_t *)((int64_t)input + 0x18) = *(int32_t *)((int64_t)input + 0x18) + 1;
        switch (__guard_dispatch_icall_fptr)
        {
            case WD_GUARDDISPATCH_BRANCH_TARGET:
                (*((WD_ROUTINE *)input)[6])(((uint32_t *)input)[9], ((uint32_t *)input)[0xb], ((uint32_t *)input)[10]);
                return;
        }
    }
    return;
}

int64_t MpGetStreamSize(WD_LAYOUT_2 *input, int16_t input_2, void *input_3, uint64_t input_4, int64_t *input_5)
{
    int64_t value;
    int64_t value_2;
    int64_t *data_pointer;
    if (input)
    {
        if (input->field_0xa8 & 1)
        {
            value_2 = 0xc00000e5;
            return value_2;
        }
        if (0xfffd <= (uint16_t)(input_2 - 1U))
        {
            FltAcquirePushLockShared((int64_t)input_3 + 0xc0);
            data_pointer = (int64_t *)(((int64_t *)input_3)[0x1a] + 0x20);
            if (!((int64_t *)input_3)[0x1a])
            {
                data_pointer = &((int64_t *)input_3)[0x16];
            }
            value_2 = 0;
            WdUnresolvedAtomicBegin();
            if (*data_pointer)
            {
                value_2 = *data_pointer;
            }
            else
            {
                *data_pointer = 0;
            }
            WdUnresolvedAtomicEnd();
            *input_5 = value_2;
            FltReleasePushLock((int64_t)input_3 + 0xc0);
            value_2 = 0;
            return value_2;
        }
    }
    value_2 = 0;
    WdUnresolvedAtomicBegin();
    value = *(int64_t *)((int64_t)input_3 + 0xb0);
    if (value)
    {
        value_2 = value;
    }
    else
    {
        *(int64_t *)((int64_t)input_3 + 0xb0) = 0;
    }
    WdUnresolvedAtomicEnd();
    *input_5 = value_2;
    value_2 = 0;
    return value_2;
}

uint64_t MpSetStreamState__scan(WD_LAYOUT_2 *input, int16_t input_2, void *input_3, uint32_t input_4)
{
    uint32_t value;
    if (input)
    {
        if (input->field_0xa8 & 1)
        {
            return 0xc00000e5;
        }
        if (0xfffd <= (uint16_t)(input_2 - 1U))
        {
            FltAcquirePushLockShared((int64_t)input_3 + 0xc0);
            if (((int64_t *)input_3)[0x1a])
            {
                *(uint32_t *)(((int64_t *)input_3)[0x1a] + 0x18) = input_4;
                *(uint32_t *)(((int64_t *)input_3)[0x1a] + 0x1c) = *(uint32_t *)(((int64_t *)input_3)[1] + 0x90);
            }
            else
            {
                ((uint32_t *)input_3)[8] = input_4;
                value = ((uint32_t *)input_3)[8];
                ((uint32_t *)input_3)[9] = *(uint32_t *)(((int64_t *)input_3)[1] + 0x90);
                if (value != 3 && (8 <= value || !(0x94U >> (value & 0x1f) & 1)))
                {
                    WdAtomicAnd32((volatile int32_t *)((uint32_t *)((int64_t)input_3 + 0x30)), 0xffffbfff);
                }
            }
            FltReleasePushLock((int64_t)input_3 + 0xc0);
        }
    }
    else
    {
        ((uint32_t *)input_3)[8] = input_4;
        value = ((uint32_t *)input_3)[8];
        ((uint32_t *)input_3)[9] = *(uint32_t *)(((int64_t *)input_3)[1] + 0x90);
        if (value != 3 && (8 <= value || !(0x94U >> (value & 0x1f) & 1)))
        {
            WdAtomicAnd32((volatile int32_t *)((uint32_t *)((int64_t)input_3 + 0x30)), 0xffffbfff);
            return 0;
        }
    }
    return 0;
}

int32_t RtlULongAdd(uint32_t left, uint32_t right, uint32_t *result)
{
    uint32_t sum = left + right;
    if (sum < left)
    {
        *result = UINT32_MAX;
        return (int32_t)WD_STATUS_INTEGER_OVERFLOW;
    }
    *result = sum;
    return 0;
}

void RtlStringCbCopyUnicodeString(uint16_t *input, uint64_t input_2, WD_UNICODE_STRING_VALUE *input_3)
{
    uint64_t value;
    uint64_t value_2;
    uint64_t value_3;
    if (0 <= (int32_t)RtlStringValidateDestW(input, input_2 >> 1, 0x7fff))
    {
        value_2 = 0;
        value = 0;
        if (0 <= (int32_t)RtlUnicodeStringValidateSrcWorker(input_3, &value_2, &value, 0x7fff, value_3 & 0xffffffff00000000))
        {
            RtlStringCopyWideCharArrayWorker(input, input_2 >> 1, NULL, value_2, value);
        }
        else
        {
            *input = 0;
        }
    }
    return;
}

void McTemplateK0zqqqqxx_EtwWriteTransfer(uint64_t input, uint64_t input_2, uint64_t input_3, int16_t *input_4)
{
    int64_t index;
    uint64_t value;
    char *bytes;
    uint64_t value_2;
    char *bytes_2;
    uint64_t value_3;
    char *bytes_3;
    uint64_t value_4;
    char *bytes_4;
    uint64_t value_5;
    char buffer_2[16];
    int16_t *wide_text;
    int32_t value_7;
    uint32_t value_8;
    char *bytes_5;
    uint64_t value_9;
    char *bytes_6;
    if (input_4)
    {
        index = -1;
        do
        {
            index += 1;
        }
        while (input_4[index]);
        value_7 = (int32_t)index * 2 + 2;
    }
    else
    {
        value_7 = 10;
    }
    value_8 = 0;
    bytes_5 = &unrecovered_stack_argument_5;
    value_9 = 4;
    if (!input_4)
    {
        input_4 = &WdAsyncnotificationStorage3;
    }
    value = 4;
    bytes_6 = &unrecovered_stack_argument_6;
    bytes = &unrecovered_stack_argument_7;
    value_2 = 4;
    bytes_2 = &unrecovered_stack_argument_8;
    bytes_3 = &unrecovered_stack_argument_9;
    bytes_4 = &unrecovered_stack_argument_10;
    value_3 = 4;
    value_4 = 8;
    value_5 = 8;
    wide_text = input_4;
    McGenEventWrite_EtwWriteTransfer(WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS, WD_SYMBOL_ADDRESS(AMFilter_FileScanResultEvent), input_3, 8, buffer_2);
    return;
}

void WPP_SF_qdZiDdDd(uint64_t input, uint64_t input_2, uint64_t input_3, uint64_t input_4, uint64_t input_5, int16_t *input_6)
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
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), 0x35, &value_2, 8, &input_5, 4, wide_text, 2, value_3, (uint16_t)value, &unrecovered_stack_argument_7, 8, &unrecovered_stack_argument_8, 4, &unrecovered_stack_argument_9, 4, &unrecovered_stack_argument_10, 4, &unrecovered_stack_argument_11, 4, 0);
    return;
}

void McTemplateK0_EtwWriteTransfer(void)
{
    char buffer_2[16];
    char *bytes;
    bytes = buffer_2;
    McGenEventWrite_EtwWriteTransfer();
    return;
}

void McTemplateK0zzx_EtwWriteTransfer(uint64_t input, uint64_t input_2, uint64_t input_3, int16_t *input_4)
{
    int64_t index = -1;
    int32_t value = 10;
    uint32_t value_2;
    char *bytes;
    uint64_t value_3;
    int64_t index_2;
    char buffer_2[16];
    int16_t *wide_text;
    int16_t *wide_text_2;
    int32_t value_5;
    uint32_t value_6;
    int16_t *wide_text_3;
    if (input_4)
    {
        index_2 = -1;
        do
        {
            index_2 += 1;
        }
        while (input_4[index_2]);
        value_5 = (int32_t)index_2 * 2 + 2;
    }
    else
    {
        value_5 = 10;
    }
    if (!input_4)
    {
        input_4 = &WdAsyncnotificationStorage3;
    }
    value_6 = 0;
    if (wide_text)
    {
        do
        {
            index += 1;
        }
        while (wide_text[index]);
        value = (int32_t)index * 2 + 2;
    }
    bytes = &unrecovered_stack_argument_6;
    value_2 = 0;
    wide_text_3 = wide_text;
    if (!wide_text)
    {
        wide_text_3 = &WdAsyncnotificationStorage3;
    }
    value_3 = 8;
    wide_text_2 = input_4;
    McGenEventWrite_EtwWriteTransfer(wide_text_3, WD_SYMBOL_ADDRESS(AMFilter_FileScanEvent), 0, 4, buffer_2);
    return;
}

void MpScanWaitForSemaphores(uint64_t input, WD_LAYOUT_20 *input_2, void *input_3, int64_t input_4, uint32_t *input_5)
{
    uint32_t *data_pointer;
    int32_t trace_argument_1;
    int64_t value;
    uint64_t trace_handle;
    int64_t *data_pointer_2;
    int64_t value_2;
    data_pointer = input_5;
    value_2 = input_4;
    if (((uint8_t *)input_3)[0x1bc] & 0x10 && !(*input_5 & 2))
    {
        data_pointer_2 = &value_2;
        if (!input_4)
        {
            data_pointer_2 = NULL;
        }
        trace_argument_1 = FltCancellableWaitForSingleObject(MpData + 0x1e0, data_pointer_2, input);
        if (!trace_argument_1)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                trace_handle = *(uint64_t *)(WPP_GLOBAL_Control + 0x18);
                value = MpData + 0x1e0;
                WPP_SF_D(trace_handle, 0x17, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), KeReadStateSemaphore(value));
            }
            *data_pointer = *data_pointer | 2;
            input_4 = value_2;
            goto block_1;
        }
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return;
        }
        trace_handle = 0x16;
    }
    else
    {
        block_1:
        if (*(int32_t *)(input_2->field_0x8 + 0x78) != 0x1b || *data_pointer & 1)
        {
            return;
        }

        data_pointer_2 = &value_2;
        if (!input_4)
        {
            data_pointer_2 = NULL;
        }
        trace_argument_1 = FltCancellableWaitForSingleObject(MpData + 0x1c0, data_pointer_2, input);
        if (!trace_argument_1)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                trace_handle = *(uint64_t *)(WPP_GLOBAL_Control + 0x18);
                value = MpData + 0x1c0;
                WPP_SF_D(trace_handle, 0x19, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), KeReadStateSemaphore(value));
            }
            *data_pointer = *data_pointer | 1;
            return;
        }
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            return;
        }
        trace_handle = 0x18;
    }
    WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), trace_handle, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), trace_argument_1);
    return;
}

uint64_t MpSetStreamUnknownRevertTickcount(WD_LAYOUT_2 *input, int16_t input_2, void *input_3, uint64_t input_4)
{
    void *data_pointer;
    if (!input)
    {
        WdUnresolvedAtomicBegin();
        ((uint64_t *)input_3)[5] = input_4;
        WdUnresolvedAtomicEnd();
        return 0;
    }
    if (!(input->field_0xa8 & 1))
    {
        if ((uint16_t)(input_2 - 1U) <= 0xfffc)
        {
            return 0;
        }
        FltAcquirePushLockShared((int64_t)input_3 + 0xc0);
        data_pointer = input_3;
        if (((void **)input_3)[0x1a])
        {
            data_pointer = ((void **)input_3)[0x1a];
        }
        WdUnresolvedAtomicBegin();
        ((uint64_t *)data_pointer)[5] = input_4;
        WdUnresolvedAtomicEnd();
        FltReleasePushLock((int64_t)input_3 + 0xc0);
        return 0;
    }
    return 0xc00000e5;
}

void WPP_SF_DZS(uint64_t input, uint64_t input_2, uint64_t input_3, uint32_t input_4, int16_t *input_5, int16_t *input_6)
{
    int64_t index;
    int16_t *wide_text;
    int16_t value;
    uint32_t values[2];
    int16_t *wide_text_2;
    uint64_t value_2;
    if (input_6)
    {
        index = -1;
        do
        {
            index += 1;
        }
        while (input_6[index]);
        index = index * 2 + 2;
    }
    else
    {
        index = 10;
    }
    value_2 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    wide_text_2 = input_6;
    if (!input_6)
    {
        wide_text_2 = &WdAsyncnotificationStorage3;
    }
    if (input_5)
    {
        value = *input_5;
        if (*input_5)
        {
            value_2 = *(uint64_t *)(&input_5[4]);
        }
    }
    else
    {
        value = 8;
    }
    wide_text = input_5;
    if (!input_5)
    {
        wide_text = &WdCleanupStorage;
    }
    values[0] = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), 0x23, values, 4, wide_text, 2, value_2, (uint16_t)value, wide_text_2, index, 0);
    return;
}

void WPP_SF_DiisZ(uint64_t input, uint64_t input_2, uint64_t input_3, uint32_t input_4, uint64_t input_5, uint64_t input_6, char *input_7, int16_t *input_8)
{
    int64_t index;
    int16_t *wide_text;
    int16_t value;
    uint32_t values[2];
    char *bytes;
    int64_t value_2;
    uint64_t value_3;
    if (input_8)
    {
        value = *input_8;
        if (*input_8)
        {
            value_3 = *(uint64_t *)(&input_8[4]);
            goto block_1;
        }
    }
    else
    {
        value = 8;
    }
    value_3 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    block_1:
    wide_text = input_8;

    if (!input_8)
    {
        wide_text = &WdCleanupStorage;
    }
    if (input_7)
    {
        index = -1;
        do
        {
            value_2 = index;
            index = value_2 + 1;
        }
        while (input_7[index]);
        value_2 += 2;
    }
    else
    {
        value_2 = 5;
    }
    bytes = input_7;
    if (!input_7)
    {
        bytes = "NULL";
    }
    values[0] = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), 0x20, values, 4, &input_5, 8, &input_6, 8, bytes, value_2, wide_text, 2, value_3, (uint16_t)value, 0);
    return;
}

void WPP_SF_SZ(uint64_t input, uint64_t input_2, uint64_t input_3, int16_t *input_4, int16_t *input_5)
{
    int64_t index;
    int16_t *wide_text;
    int16_t value;
    uint64_t value_2;
    if (input_5)
    {
        value = *input_5;
        if (*input_5)
        {
            value_2 = *(uint64_t *)(&input_5[4]);
            goto block_1;
        }
    }
    else
    {
        value = 8;
    }
    value_2 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    block_1:
    wide_text = input_5;

    if (!input_5)
    {
        wide_text = &WdCleanupStorage;
    }
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
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), 0x45, input_4, index, wide_text, 2, value_2, (uint16_t)value, 0);
    return;
}

void WPP_SF_iisZ(uint64_t input, uint64_t input_2, uint64_t input_3, uint64_t input_4, uint64_t input_5, char *input_6, int16_t *input_7)
{
    int64_t index;
    int16_t *wide_text;
    int16_t value;
    uint64_t value_2;
    char *bytes;
    int64_t value_3;
    uint64_t value_4;
    if (input_7)
    {
        value = *input_7;
        if (*input_7)
        {
            value_4 = *(uint64_t *)(&input_7[4]);
            goto block_1;
        }
    }
    else
    {
        value = 8;
    }
    value_4 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    block_1:
    wide_text = input_7;

    if (!input_7)
    {
        wide_text = &WdCleanupStorage;
    }
    if (input_6)
    {
        index = -1;
        do
        {
            value_3 = index;
            index = value_3 + 1;
        }
        while (input_6[index]);
        value_3 += 2;
    }
    else
    {
        value_3 = 5;
    }
    bytes = input_6;
    if (!input_6)
    {
        bytes = "NULL";
    }
    value_2 = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), 0x21, &value_2, 8, &input_5, 8, bytes, value_3, wide_text, 2, value_4, (uint16_t)value, 0);
    return;
}

void WPP_SF_qdZiSDDDDDDDiiii(uint64_t input, uint64_t input_2, uint64_t input_3, uint64_t input_4, uint64_t input_5, int16_t *input_6, uint64_t input_7, int16_t *input_8)
{
    int64_t index;
    int16_t *wide_text;
    int16_t *wide_text_2;
    uint64_t value;
    int16_t value_2;
    uint64_t value_3;
    if (input_8)
    {
        index = -1;
        do
        {
            index += 1;
        }
        while (input_8[index]);
        index = index * 2 + 2;
    }
    else
    {
        index = 10;
    }
    value_3 = WD_ASYNCNOTIFICATION_UNRECOVERED_ADDRESS;
    wide_text = input_8;
    if (!input_8)
    {
        wide_text = &WdAsyncnotificationStorage3;
    }
    if (input_6)
    {
        value_2 = *input_6;
        if (*input_6)
        {
            value_3 = *(uint64_t *)(&input_6[4]);
        }
    }
    else
    {
        value_2 = 8;
    }
    wide_text_2 = input_6;
    if (!input_6)
    {
        wide_text_2 = &WdCleanupStorage;
    }
    value = input_4;
    (*__guard_dispatch_icall_fptr)(input, 0x2b, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), 0x2e, &value, 8, &input_5, 4, wide_text_2, 2, value_3, (uint16_t)value_2, &input_7, 8, wide_text, index, &unrecovered_stack_argument_9, 4, &unrecovered_stack_argument_10, 4, &unrecovered_stack_argument_11, 4, &unrecovered_stack_argument_12, 4, &unrecovered_stack_argument_13, 4, &unrecovered_stack_argument_14, 4, &unrecovered_stack_argument_15, 4, &unrecovered_stack_argument_16, 8, &unrecovered_stack_argument_17, 8, &unrecovered_stack_argument_18, 8, &unrecovered_stack_argument_19, 8, 0);
    return;
}

void MpGetUsn(uint64_t input, void *input_2, uint16_t input_3)
{
    uint32_t allocation_size;
    int32_t trace_argument_1;
    WD_LAYOUT_21 *allocation;
    uint32_t values[2];
    values[0] = 0;
    if (*(int32_t *)(((int64_t *)input_2)[1] + 0x78) != 2 || ((uint32_t *)input_2)[0xc] & 0x40)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xc, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids));
        }
    }
    else
    {
        allocation_size = (uint32_t)input_3 * 2 + 0x49 & 0xfffffff8;
        allocation = (WD_LAYOUT_21 *)MpAllocatePoolWithTag(1, allocation_size, 0x6573504d);
        if (allocation)
        {
            trace_argument_1 = FltFsControlFile(*(uint64_t *)(((int64_t *)input_2)[1] + 0x68), input, 0x900eb, 0, 0, allocation, allocation_size, values);
            if (0 <= trace_argument_1)
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                {
                    WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xb, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), allocation->field_0x18);
                }
            }
            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
            {
                WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 10, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), trace_argument_1);
            }
            ExFreePoolWithTag(allocation, 0x6573504d);
        }
    }
    return;
}

void MpCleanupScanRequestContext(int64_t *input)
{
    uint16_t value;
    int64_t value_2;
    int64_t data;
    int64_t value_3;
    value_2 = *input;
    if (!value_2)
    {
        return;
    }
    if (*(int64_t *)(value_2 + 0x58))
    {
        ObfDereferenceObject();
        data = ObTotalReferences;
        WdUnresolvedAtomicBegin();
        ObTotalReferences -= 1;
        WdUnresolvedAtomicEnd();
        if (data + -1 < 0 && *(int32_t *)(MpData + 0x364) <= -1)
        {
            if (KdRefreshDebuggerNotPresent())
            {
                KeBugCheck(1);
            }
            (*(WD_ROUTINE)swi(3))();
            return;
        }
    }
    if (*(int64_t *)(value_2 + 0x40))
    {
        FltReleaseContext();
    }
    if (*(int64_t *)(value_2 + 0x48))
    {
        FltReleaseContext();
    }
    if (*(void **)(value_2 + 0x50))
    {
        MpReleaseProcessContext(*(void **)(value_2 + 0x50));
    }
    if (*(int64_t *)(value_2 + 0x30))
    {
        ExFreePoolWithTag(*(int64_t *)(value_2 + 0x30), 0x7366504d);
    }
    data = MpData;
    value_3 = MpData + 0x8c0;
    *(int32_t *)(MpData + 0x8dc) = *(int32_t *)(MpData + 0x8dc) + 1;
    value = *(uint16_t *)(data + 0x8d0);
    if (value <= (uint16_t)ExQueryDepthSList(value_3))
    {
        *(int32_t *)(data + 0x8e0) = *(int32_t *)(data + 0x8e0) + 1;
        (*__guard_dispatch_icall_fptr)(value_2);
    }
    else
    {
        ExpInterlockedPushEntrySList(value_3, value_2);
    }
    *input = 0;
    return;
}

void MpDoScanFile(void *input)
{
    bool enabled;
    uint32_t value;
    int32_t trace_argument_1;
    int64_t event_id;
    uint64_t trace_handle;
    uint32_t *trace_argument_1_2;
    uint64_t value_2;
    uint64_t *data_pointer;
    uint64_t value_3;
    uint32_t value_4;
    uint32_t value_5;
    bool enabled_2;
    uint16_t *wide_text;
    uint32_t trace_argument_1_3;
    uint8_t buffer_2[4];
    uint32_t values[2];
    int64_t value_6;
    uint32_t values_2[2];
    uint64_t value_7;
    uint64_t value_8;
    uint32_t value_9;
    uint64_t *allocation;
    uint32_t *data;
    uint8_t byte_value;
    int64_t trace_argument_1_4;
    WD_LAYOUT_2 *record;
    uint16_t *event_id_2;
    char *provider;
    void *data_pointer_2;
    uint32_t *data_pointer_3;
    uint32_t value_10;
    uint32_t value_11;
    uint32_t value_12;
    void *lock;
    bool enabled_3;
    int16_t *trace_argument_2;
    uint64_t *data_pointer_4;
    uint64_t trace_argument_2_2;
    uint16_t *wide_text_2;
    int64_t value_13;
    uint64_t value_14;
    uint32_t value_15;
    char byte_value_2;
    uint64_t value_16;
    uint64_t value_17;
    uint32_t value_18;
    uint64_t value_19;
    uint64_t value_20;
    uint32_t value_21;
    uint64_t value_22;
    uint64_t value_23;
    uint64_t value_24;
    uint32_t value_25;
    int32_t value_26;
    uint64_t value_27;
    uint32_t value_28;
    uint32_t trace_argument_1_5;
    WD_LAYOUT_2 *record_2;
    uint32_t value_29;
    int64_t trace_argument_1_6;
    void *data_pointer_5;
    uint16_t *wide_text_3;
    uint32_t *data_pointer_6;
    void *lock_2;
    uint32_t status;
    uint16_t *wide_text_4;
    uint16_t *wide_text_5;
    uint32_t *data_pointer_7;
    uint64_t value_30;
    uint64_t value_31;
    uint64_t value_32;
    uint64_t value_33;
    uint32_t value_34;
    uint64_t value_35;
    uint64_t value_36;
    int64_t *allocation_2;
    uint64_t value_37;
    uint64_t value_38;
    int16_t *trace_argument_3;
    record_2 = ((WD_LAYOUT_2 **)input)[9];
    value_9 = 0;
    data_pointer_2 = ((void **)input)[6];
    data_pointer_3 = ((uint32_t **)input)[8];
    value_5 = 0;
    data_pointer_6 = &MpData[0x50];
    wide_text = ((uint16_t **)input)[10];
    wide_text_3 = ((uint16_t **)input)[0xd];
    value_33 = 0;
    value_34 = 0;
    value_6 = 0;
    values_2[0] = 0;
    value_7 = 0;
    value_30 = 0;
    value_31 = 0;
    value_32 = 0;
    trace_argument_1_6 = (int64_t)KeGetCurrentThread();
    trace_argument_1_4 = ((int64_t *)input)[0xb];
    buffer_2[0] = 0;
    trace_argument_1_3 = 0;
    value_29 = 0;
    trace_argument_1_5 = 0;
    enabled_3 = 0;
    enabled_2 = 0;
    values[0] = 0;
    lock_2 = NULL;
    trace_argument_1_2 = data_pointer_6;
    data_pointer_5 = data_pointer_2;
    data_pointer_7 = data_pointer_3;
    if (*(int64_t *)(&MpData[0x22]))
    {
        if (MpData[0xd8] & 8 && !(((int32_t *)data_pointer_2)[6] - 3U & 0xfffffffdU) && !(*(uint32_t *)(*(int64_t *)(&data_pointer_3[2]) + 0x54) & 0x10))
        {
            value_14 = 0;
            trace_argument_1_2 = &trace_argument_1_3;
            trace_argument_2 = NULL;
            trace_argument_1 = (*__guard_dispatch_icall_fptr)(trace_argument_1_4, trace_argument_1_2, buffer_2, 0, 0, 0);
            value_4 = value_9;
            if (0 <= trace_argument_1)
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && (value_4 = value_5, *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4))
                {
                    trace_argument_2 = (int16_t *)(trace_argument_1_4 + 0x58);
                    trace_argument_1_2 = NULL;
                    WPP_SF_dZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x10, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), buffer_2[0], trace_argument_2);
                    value_5 = values[0];
                    goto block_1;
                }
            }
            else
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && (value_4 = value_5, *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4))
                {
                    trace_argument_2 = (int16_t *)(trace_argument_1_4 + 0x58);
                    trace_argument_1_2 = NULL;
                    WPP_SF_dZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xf, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), trace_argument_1, trace_argument_2);
                    value_4 = values[0];
                }
                buffer_2[0] = 0;
            }
            value_5 = value_4;
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            trace_argument_1_2 = NULL;
            WPP_SF_Z(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xe, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), (int16_t *)(trace_argument_1_4 + 0x58));
        }
    }
    else
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            trace_argument_1_2 = NULL;
            WPP_SF_Z(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xd, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), (int16_t *)(trace_argument_1_4 + 0x58));
        }
        value_5 = value_9;
    }
    block_1:
    trace_argument_1_4 = -1;

    ((uint32_t *)data_pointer_2)[0x6b] = (uint32_t)buffer_2[0];
    if (!(((uint32_t *)input)[10] & 1) && (trace_argument_1_2 = ((uint32_t **)input)[0xd], !(*(char *)(*(int64_t *)(&trace_argument_1_2[4]) + 4))) && *(int64_t *)(&MpData[0x18]))
    {
        trace_argument_1_3 = 0;
        allocation_2 = (int64_t *)(*__guard_dispatch_icall_fptr)(*(int64_t *)(&MpData[4]), trace_argument_1_2, 8, &trace_argument_1_3);
        if (allocation_2 && 0x18 <= trace_argument_1_3 && (trace_argument_1_4 = *allocation_2, trace_argument_1_4 != -1))
        {
            goto block_2;
        }
    }
    if (((int32_t *)data_pointer_2)[6] == 3 || ((int32_t *)data_pointer_2)[6] == 5)
    {
        trace_argument_1_2 = ((uint32_t **)input)[8];
        trace_argument_1_4 = MpGetUsn(((uint64_t *)input)[0xb], trace_argument_1_2, ((uint16_t *)data_pointer_2)[0x105]);
    }
    block_2:
    ((int64_t *)data_pointer_2)[0x31] = trace_argument_1_4;

    while (true)
    {
        data = MpData;
        value_26 = 0;
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(&data[0xbc], (uint64_t)((uint64_t)trace_argument_1_2) & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
        trace_argument_1_4 = *(int64_t *)(((int64_t *)input)[8] + 8);
        trace_argument_1 = *(int32_t *)(trace_argument_1_4 + 0x78);
        if (trace_argument_1 != 2 && (MpData[0xd9] & 0x2000 || trace_argument_1 != 0x1c) || *(uint32_t *)(((int64_t *)input)[8] + 0x30) & 2)
        {
            goto block_3;
        }
        trace_argument_1 = *(int32_t *)(((int64_t *)input)[6] + 0x18);
        if (trace_argument_1 != 3)
        {
            if (trace_argument_1 != 4)
            {
                if (trace_argument_1 == 5)
                {
                    goto block_4;
                }
            }
            else if (!(MpData[0xd9] >> 8 & 1))
            {
                goto block_5;
            }
            block_3:
            enabled = 0;
        }
        else
        {
            block_4:
            if (MpData[0xd9] & 0x2000 || !(*(uint32_t *)(trace_argument_1_4 + 0x50) & 0x50))
            {
                goto block_3;
            }

            block_5:
            enabled = 1;

            if (!(MpData[0xd9] >> 0xd & 1) && (((int32_t *)data_pointer_2)[6] != 4 && ((uint32_t *)data_pointer_2)[7] & 0x20 && !(data_pointer_3[0xc] & 0x4000)))
            {
                goto block_3;
            }
        }
        record = record_2;
        if (!data_pointer_3 || MpData[0x401])
        {
            block_7:
            block_6:
            if (!enabled)
            {
                goto block_12;
            }


            if (record)
            {
                if (!(record->field_0xa8 & 1) && (uint16_t)(((int16_t *)input)[0x30] - 1U) > 0xfffc)
                {
                    FltAcquirePushLockShared(&data_pointer_3[0x30]);
                    if (*(int64_t *)(&data_pointer_3[0x34]))
                    {
                        trace_argument_1_2 = (uint32_t *)(*(int64_t *)(&data_pointer_3[0x34]) + 0x18);
                    }
                    else
                    {
                        trace_argument_1_2 = &data_pointer_3[8];
                    }
                    if (trace_argument_1_2 && *(int64_t *)(&data_pointer_3[2]))
                    {
                        if (*trace_argument_1_2 != 5 || MpData[0xd9] >> 0xf & 1)
                        {
                            if (trace_argument_1_2[1] != *(uint32_t *)(*(int64_t *)(&data_pointer_3[2]) + 0x90))
                            {
                                goto block_8;
                            }
                            trace_argument_1_3 = *trace_argument_1_2;
                        }
                        else
                        {
                            trace_argument_1_3 = 5;
                        }
                    }
                    else
                    {
                        block_8:
                        trace_argument_1_3 = 0;
                    }
                    FltReleasePushLock(&data_pointer_3[0x30]);
                    goto block_10;
                }
                goto block_12;
            }
            trace_argument_1_2 = &data_pointer_3[8];
            if (trace_argument_1_2 && *(int64_t *)(&data_pointer_3[2]))
            {
                if (*trace_argument_1_2 != 5 || MpData[0xd9] >> 0xf & 1)
                {
                    if (data_pointer_3[9] != *(uint32_t *)(*(int64_t *)(&data_pointer_3[2]) + 0x90))
                    {
                        goto block_9;
                    }
                    trace_argument_1_3 = *trace_argument_1_2;
                }
                else
                {
                    trace_argument_1_3 = 5;
                }
            }
            else
            {
                block_9:
                trace_argument_1_3 = 0;
            }
            block_10:
            if (!trace_argument_1_3)
            {
                goto block_12;
            }

            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                trace_argument_1_4 = ((int64_t *)input)[6];
                provider = "OnClose";
                if (*(int32_t *)(trace_argument_1_4 + 0x18) != 4)
                {
                    provider = "OnOpen";
                }
                WPP_SF_DiisZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), trace_argument_1_4, provider, trace_argument_1_3, *(uint64_t *)(trace_argument_1_4 + 0x180), *(uint64_t *)(trace_argument_1_4 + 0x188), provider, (int16_t *)(((int64_t *)input)[0xb] + 0x58));
            }
            goto block_23;
        }
        if (record_2)
        {
            if (!(record_2->field_0xa8 & 1) && 0xfffd <= (uint16_t)(((int16_t *)input)[0x30] - 1U))
            {
                FltAcquirePushLockShared(&data_pointer_3[0x30]);
                if (*(int64_t *)(&data_pointer_3[0x34]))
                {
                    value_9 = *(uint32_t *)(*(int64_t *)(&data_pointer_3[0x34]) + 0x30);
                }
                else
                {
                    value_9 = data_pointer_3[0xc];
                }
                byte_value = (uint8_t)(value_9 >> 0x14);
                FltReleasePushLock(&data_pointer_3[0x30]);
                value_9 = trace_argument_1_5;
                goto block_11;
            }
            goto block_6;
        }
        byte_value = (uint8_t)(data_pointer_3[0xc] >> 0x14);
        block_11:
        if (!(byte_value & 1))
        {
            record = record_2;
            goto block_7;
        }

        enabled = 0;
        block_12:
        trace_argument_1_4 = trace_argument_1_6;

        value_15 = (uint32_t)((uint64_t)value_14 >> 0x20);
        value_4 = (uint32_t)((uint64_t)trace_argument_2 >> 0x20);
        value_25 = (uint32_t)((uint64_t)value_24 >> 0x20);
        value_28 = (uint32_t)((uint64_t)value_27 >> 0x20);
        value = (uint32_t)((uint64_t)value_19 >> 0x20);
        value_21 = (uint32_t)((uint64_t)value_20 >> 0x20);
        status = (uint32_t)((uint64_t)value_22 >> 0x20);
        value_18 = (uint32_t)((uint64_t)value_16 >> 0x20);
        if (!(*(int64_t *)(&data_pointer_3[0x14])))
        {
            *(int64_t *)(&data_pointer_3[0x14]) = trace_argument_1_6;
            *(int64_t *)(&data_pointer_3[0x12]) = ((int64_t *)input)[0xb];
            trace_argument_1_2 = &MpData[0x37];
            value_9 = WdAtomicAdd32((volatile int32_t *)trace_argument_1_2, 1);
            trace_argument_1_2 = &data_pointer_3[0xe];
            data_pointer_3[0x16] = value_9 + 1;
            event_id = 0;
            value_9 = 0;
            data_pointer_3[0x1e] = 0;
            data_pointer_3[0x1f] = 0;
            data_pointer_3[0x20] = 0;
            data_pointer_3[0x21] = 0;
            data_pointer_3[0x18] = 0;
            data_pointer_3[0x19] = 0;
            data_pointer_3[0x28] = ((uint32_t *)data_pointer_2)[2];
            data = MpData;
            allocation_2 = *(int64_t **)(&MpData[0x90]);
            if ((uint32_t *)(*allocation_2) != &MpData[0x8e])
            {
                (*(WD_ROUTINE)swi(0x29))(3);
            }
            *(uint32_t **)trace_argument_1_2 = &MpData[0x8e];
            *(int64_t **)(&data_pointer_3[0x10]) = allocation_2;
            *allocation_2 = (int64_t)trace_argument_1_2;
            *(uint32_t **)(&data[0x90]) = trace_argument_1_2;
            MpData[0x38] = MpData[0x38] + 1;
            if (((int32_t *)data_pointer_2)[6] != 3)
            {
                if (((int32_t *)data_pointer_2)[6] == 5)
                {
                    MpData[0x334] = MpData[0x334] + 1;
                    data_pointer_3[0xc] = data_pointer_3[0xc] | 0xc00;
                }
            }
            else
            {
                MpData[0x332] = MpData[0x332] + 1;
                data_pointer_3[0xc] = data_pointer_3[0xc] & 0xfffff7ff | 0x400;
            }
            value_11 = data_pointer_3[0xc];
            if (value_11 >> 0x13 & 1)
            {
                if (((int32_t *)data_pointer_2)[6] != 3 && ((int32_t *)data_pointer_2)[6] != 5)
                {
                    data_pointer_3[0xc] = value_11 & 0xfff7ffff;
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                    {
                        trace_handle = 0x29;
                        block_13:
                        WPP_SF_Z(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), trace_handle, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), (int16_t *)(((int64_t *)input)[0xb] + 0x58));
                    }
                }
                else
                {
                    data_pointer_3[0xc] = value_11 & 0xfff7ffff;
                    *(uint32_t *)((int64_t)data_pointer_2 + 0x1c) = *(uint32_t *)((int64_t)data_pointer_2 + 0x1c) | 0x8000;
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                    {
                        trace_handle = 0x28;
                        goto block_13;
                    }
                }
            }
            if (*(int64_t *)(&data_pointer_3[0x24]))
            {
                KeClearEvent();
            }
            data_pointer_3[8] = 1;
            value_11 = *(uint32_t *)(*(int64_t *)(&data_pointer_3[2]) + 0x50);
            if (value_11 & 4)
            {
                lock = NULL;
            }
            else
            {
                lock = *(void **)(&data_pointer_3[0x26]);
                lock_2 = lock;
                if (lock)
                {
                    *(char *)(&data_pointer_3[0x29]) = 0;
                }
            }
            KeEnterCriticalRegion(value_11);
            ExReleaseResourceLite(&MpData[0xbc]);
            KeLeaveCriticalRegion();
            ((uint32_t *)data_pointer_2)[0x5e] = data_pointer_3[0x16];
            if (((int32_t *)data_pointer_2)[6] == 4 && MpData[0xd9] & 1)
            {
                trace_argument_1_2 = &MpData[0xd6];
                value_13 = WdAtomicAdd64((volatile int64_t *)((int64_t *)trace_argument_1_2), 1);
                ((int64_t *)data_pointer_2)[10] = value_13 + 1;
            }
            values_2[0] = 0x2c;
            if (*(char *)(&MpData[0x268]))
            {
                trace_argument_1_2 = MpData;
            }
            else
            {
                if (*(uint32_t *)(*(int64_t *)(&data_pointer_3[2]) + 0x54) & 0x10)
                {
                    value_11 = MpData[0x261];
                }
                else
                {
                    value_11 = MpData[0x260];
                }
                trace_argument_1_2 = (uint32_t *)((uint64_t)value_11);
                data = (uint32_t *)((int64_t)trace_argument_1_2 * 2);
                if (2 <= ((int32_t *)data_pointer_2)[2])
                {
                    data = trace_argument_1_2;
                }
                event_id = (int64_t)data * -10000;
            }
            trace_argument_1_5 = 0;
            value_7 &= 0xffffffff;
            value_6 = event_id;
            if (lock)
            {
                if (MpRWLTryAcquireExclusive(lock))
                {
                    event_id = value_6;
                    goto block_14;
                }
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    trace_argument_1_2 = NULL;
                    WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2a, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), trace_argument_1_4);
                }
                value_9 = 0x102;
                enabled_2 = 1;
                trace_argument_1_5 = 0x102;
            }
            else
            {
                block_14:
                if (!(((uint32_t *)input)[10] & 1))
                {
                    data = values;
                    trace_argument_1_2 = data_pointer_3;
                    value_9 = MpScanWaitForSemaphores(wide_text_3, data_pointer_3, data_pointer_2, event_id, data);
                    value_4 = (uint32_t)((uint64_t)data >> 0x20);
                    trace_argument_1_5 = value_9;
                    if (value_9)
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            trace_argument_1_2 = NULL;
                            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2b, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), trace_argument_1_4);
                        }
                        value_9 = 0x102;
                        trace_argument_1_5 = 0x102;
                    }
                    value_5 = values[0];
                }
            }
            value_10 = 0;
            value_11 = 0;
            wide_text_4 = L"(unknown)";
            event_id_2 = L"(unknown)";
            wide_text_5 = L"(unknown)";
            if (((int16_t *)data_pointer_5)[0x105])
            {
                event_id_2 = &((uint16_t *)data_pointer_5)[0x19a];
                wide_text_5 = event_id_2;
            }
            if (wide_text)
            {
                wide_text_4 = *(uint16_t **)(*(int64_t *)(&wide_text[0x40]) + 8);
            }
            wide_text_3 = L"OnRead";
            value_12 = value_11;
            if (value_9)
            {
                block_15:
                if (value_9 != 0xc000004b)
                {
                    goto block_20;
                }

                if (value_5 & 2 || value_5 & 1)
                {
                    trace_argument_1_5 = ExAcquireFastMutex(&MpData[0x3dc]);
                    wide_text = (uint16_t *)0xfffffffffff0bdc0;
                    trace_argument_1_2 = NULL;
                    KeDelayExecutionThread(0, 0, &wide_text);
                    value_9 = trace_argument_1_5;
                    if ((int32_t)trace_argument_1_5 <= -1)
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                        {
                            trace_argument_1_2 = NULL;
                            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x34, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), trace_argument_1_5);
                            value_5 = values[0];
                        }
                        trace_argument_1_5 = 0;
                        value_9 = 0;
                    }
                    ExReleaseFastMutex(&MpData[0x3dc]);
                    goto block_20;
                }
            }
            else
            {
                if (*(uint32_t *)(*(int64_t *)(&data_pointer_3[2]) + 0x54) & 0x10 && (trace_argument_1_2 = &MpData[0x60], *(int64_t *)trace_argument_1_2))
                {
                    data_pointer_6 = trace_argument_1_2;
                }
                else if (2 <= ((int32_t *)data_pointer_5)[2])
                {
                    trace_argument_1_2 = data_pointer_6;
                }
                else
                {
                    data_pointer_6 = &MpData[0x58];
                    trace_argument_1_2 = data_pointer_6;
                }
                data_pointer_2 = data_pointer_5;
                if (((char *)data_pointer_5)[0x332])
                {
                    if (MpData[0x400] && (!MpData[0x407] || !(MpData[0xd9] & 0x2100) && *(uint32_t *)(*(int64_t *)(&data_pointer_3[2]) + 0x50) & 0x50))
                    {
                        trace_argument_1_2 = &MpData[0x60];
                        *(uint32_t *)((int64_t)data_pointer_5 + 0x1c) = *(uint32_t *)((int64_t)data_pointer_5 + 0x1c) | 0x80000;
                        data_pointer_6 = trace_argument_1_2;
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                        {
                            trace_handle = 0x2c;
                            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), trace_handle, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), trace_argument_1_2);
                            data_pointer_2 = data_pointer_5;
                        }
                    }
                    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                    {
                        trace_handle = 0x2d;
                        WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), trace_handle, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), trace_argument_1_2);
                        data_pointer_2 = data_pointer_5;
                    }
                }
                WdUnresolvedAtomicBegin();
                trace_argument_1_2 = (uint32_t *)(*(int64_t *)(&data_pointer_3[2]) + 0x50);
                value_9 = *trace_argument_1_2;
                *trace_argument_1_2 = *trace_argument_1_2 | 8;
                WdUnresolvedAtomicEnd();
                if (!(value_9 >> 3 & 1))
                {
                    MpLogPrintfW(L"[Mini-filter] First scan on a volume: %ls", event_id_2);
                    *(uint32_t *)((int64_t)data_pointer_5 + 0x1c) = *(uint32_t *)((int64_t)data_pointer_5 + 0x1c) | 0x1000;
                    data_pointer_2 = data_pointer_5;
                }
                byte_value_2 = (char)MpData[0xd9];
                if (byte_value_2 <= '\xff')
                {
                    trace_argument_1 = ((int32_t *)data_pointer_2)[6];
                    if ((trace_argument_1 != 3 && trace_argument_1 != 5 || !(((uint32_t *)data_pointer_2)[0x68] & 0x2000100)) && trace_argument_1 != 4)
                    {
                        data_pointer_3[0xc] = data_pointer_3[0xc] & 0xfffdffff;
                    }
                    else
                    {
                        data_pointer_3[0xc] = data_pointer_3[0xc] | 0x20000;
                    }
                }
                if (wide_text)
                {
                    WdAtomicAdd32((volatile int32_t *)((int32_t *)(&wide_text[0x30])), 1);
                }
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                {
                    event_id_2 = L"OnOpen";
                    if (((int32_t *)data_pointer_2)[6] != 3)
                    {
                        event_id_2 = L"OnClose";
                    }
                    trace_handle = ((uint64_t *)data_pointer_2)[0x39];
                    trace_argument_2_2 = ((uint64_t *)data_pointer_2)[0x38];
                    value_23 = ((uint64_t)status & 0xffffffffULL) << 32 | (uint64_t)((uint32_t *)data_pointer_2)[0x68] & 0xffffffffULL;
                    value_17 = ((uint64_t)value_21 & 0xffffffffULL) << 32 | (uint64_t)((uint32_t *)data_pointer_2)[0x67] & 0xffffffffULL;
                    WPP_SF_qdZiSDDDDDDDiiii(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id_2, &data_pointer_3[0x3c], trace_argument_1_6, ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)((uint32_t *)data_pointer_2)[0x5e] & 0xffffffffULL, &data_pointer_3[0x3c], ((uint64_t *)data_pointer_2)[0x30], event_id_2, value_17, value_23, ((uint32_t *)data_pointer_2)[0x80], ((uint32_t *)data_pointer_2)[7], ((uint32_t *)data_pointer_2)[0x6c], ((uint32_t *)data_pointer_2)[0x6e], ((uint16_t *)data_pointer_2)[0xde], trace_argument_2_2, trace_handle, ((uint64_t *)data_pointer_2)[0x3b], ((uint64_t *)data_pointer_2)[0x3a]);
                    value_25 = (uint32_t)((uint64_t)trace_argument_2_2 >> 0x20);
                    value_28 = (uint32_t)((uint64_t)trace_handle >> 0x20);
                    value = (uint32_t)((uint64_t)event_id_2 >> 0x20);
                    value_21 = (uint32_t)((uint64_t)value_17 >> 0x20);
                    status = (uint32_t)((uint64_t)value_23 >> 0x20);
                }
                if (Microsoft_Antimalware_AMFilterEnableBits & 0x20)
                {
                    McTemplateK0zzx_EtwWriteTransfer();
                }
                if (record_2)
                {
                    if (!(record_2->field_0xa8 & 1) && 0xfffd <= (uint16_t)(((int16_t *)input)[0x30] - 1U))
                    {
                        FltAcquirePushLockShared(&data_pointer_3[0x30]);
                        if (data_pointer_3[0xc] & 0x100008)
                        {
                            if (*(int64_t *)(&data_pointer_3[0x34]))
                            {
                                WdUnresolvedAtomicBegin();
                                trace_argument_1_2 = (uint32_t *)(*(int64_t *)(&data_pointer_3[0x34]) + 0x30);
                                *trace_argument_1_2 = *trace_argument_1_2 & 0xffeffff7;
                                WdUnresolvedAtomicEnd();
                            }
                            else
                            {
                                WdUnresolvedAtomicBegin();
                                data_pointer_3[0xc] = data_pointer_3[0xc] & 0xffeffff7;
                                WdUnresolvedAtomicEnd();
                            }
                        }
                        FltReleasePushLock(&data_pointer_3[0x30]);
                    }
                }
                else if (data_pointer_3[0xc] & 0x100008)
                {
                    WdUnresolvedAtomicBegin();
                    data_pointer_3[0xc] = data_pointer_3[0xc] & 0xffeffff7;
                    WdUnresolvedAtomicEnd();
                }
                allocation_2 = &value_6;
                if (!value_6)
                {
                    allocation_2 = NULL;
                }
                data = values_2;
                data_pointer_4 = &value_7;
                trace_argument_1_2 = data_pointer_6;
                value_9 = FltSendMessage(*(int64_t *)(&MpData[4]), data_pointer_6, data_pointer_5, ((uint32_t *)data_pointer_5)[1], data_pointer_4, data, allocation_2);
                value_15 = (uint32_t)((uint64_t)data >> 0x20);
                value_4 = (uint32_t)((uint64_t)data_pointer_4 >> 0x20);
                value_18 = (uint32_t)((uint64_t)allocation_2 >> 0x20);
                trace_argument_1_5 = value_9;
                value_29 = value_9;
                if (lock_2)
                {
                    MpRWLReleaseExclusive(lock_2);
                }
                if ((int32_t)value_9 < 0)
                {
                    if (value_9 != 0xc0000123)
                    {
                        goto block_17;
                    }
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                    {
                        trace_argument_1_2 = (uint32_t *)0x32;
                        trace_handle = ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)0xc0000123 & 0xffffffffULL;
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), trace_argument_1_2, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), trace_argument_1_6, trace_handle);
                        value_4 = (uint32_t)((uint64_t)trace_handle >> 0x20);
                    }
                    block_16:
                    value_7 &= 0xffffffff;

                    goto block_15;
                }
                if (value_9 == 0x102)
                {
                    block_17:
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        trace_argument_1_2 = (uint32_t *)0x33;
                        trace_handle = ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)value_9 & 0xffffffffULL;
                        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), trace_argument_1_2, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), trace_argument_1_6, trace_handle);
                        value_4 = (uint32_t)((uint64_t)trace_handle >> 0x20);
                    }

                    goto block_16;
                }
                if (2 <= values_2[0])
                {
                    if ((uint8_t)value_7 != 0xa3)
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            trace_argument_1_2 = NULL;
                            trace_argument_1_4 = (uint64_t)value << 0x20;
                            value_17 = ((uint64_t)value_18 & 0xffffffffULL) << 32 | (uint64_t)0xa3 & 0xffffffffULL;
                            trace_argument_2_2 = ((uint64_t)value_15 & 0xffffffffULL) << 32 | (uint64_t)((uint32_t)WdLoadField(&value_7, 1, 1)) & 0xffffffffULL;
                            value = (uint32_t)((uint8_t)value_7);
                            trace_handle = ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)value & 0xffffffffULL;
                            WPP_SF_qdddd(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x2f, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), (uint64_t)KeGetCurrentThread(), trace_handle, trace_argument_2_2, value_17, trace_argument_1_4);
                            value_15 = (uint32_t)((uint64_t)trace_argument_2_2 >> 0x20);
                            value_4 = (uint32_t)((uint64_t)trace_handle >> 0x20);
                            value = (uint32_t)((uint64_t)trace_argument_1_4 >> 0x20);
                            value_18 = (uint32_t)((uint64_t)value_17 >> 0x20);
                        }
                        block_18:
                        value_7 &= 0xffffffff;

                        value_12 = 0;
                    }
                    else
                    {
                        if (!WdLoadField(&value_7, 1, 1))
                        {
                            goto block_19;
                        }
                        value_12 = 0;
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && (value_12 = value_11, *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2))
                        {
                            trace_argument_1_4 = (uint64_t)value << 0x20;
                            trace_argument_1_2 = NULL;
                            value_17 = ((uint64_t)value_18 & 0xffffffffULL) << 32 | (uint64_t)0xa3 & 0xffffffffULL;
                            value = (uint32_t)WdLoadField(&value_7, 1, 1);
                            trace_argument_2_2 = ((uint64_t)value_15 & 0xffffffffULL) << 32 | (uint64_t)value & 0xffffffffULL;
                            trace_handle = ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)0xa3 & 0xffffffffULL;
                            WPP_SF_qdddd(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x30, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), (uint64_t)KeGetCurrentThread(), trace_handle, trace_argument_2_2, value_17, trace_argument_1_4);
                            value_15 = (uint32_t)((uint64_t)trace_argument_2_2 >> 0x20);
                            value_4 = (uint32_t)((uint64_t)trace_handle >> 0x20);
                            value = (uint32_t)((uint64_t)trace_argument_1_4 >> 0x20);
                            value_18 = (uint32_t)((uint64_t)value_17 >> 0x20);
                        }
                    }
                }
                else
                {
                    trace_argument_1_2 = (uint32_t *)((uint64_t)WdLoadField(&value_7, 2, 2));
                    if (values_2[0] != 0x2c || WdLoadField(&value_7, 2, 2) != 0x2c)
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            trace_argument_1_2 = NULL;
                            trace_argument_2_2 = ((uint64_t)value_15 & 0xffffffffULL) << 32 | (uint64_t)((uint32_t)WdLoadField(&value_7, 2, 2)) & 0xffffffffULL;
                            trace_handle = ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)values_2[0] & 0xffffffffULL;
                            WPP_SF_qDL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x31, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), trace_argument_1_6, trace_handle, trace_argument_2_2);
                            value_15 = (uint32_t)((uint64_t)trace_argument_2_2 >> 0x20);
                            value_4 = (uint32_t)((uint64_t)trace_handle >> 0x20);
                            value_7 &= 0xffffffff;
                            goto block_20;
                        }
                        goto block_18;
                    }
                    block_19:
                    if ((int32_t)value_30 == 1)
                    {
                        WdUnresolvedAtomicBegin();
                        data_pointer_3[0xc] = data_pointer_3[0xc] | 0x8000;
                        WdUnresolvedAtomicEnd();
                    }

                    WdUnresolvedAtomicBegin();
                    data_pointer_3[0x40] = value_34;
                    WdUnresolvedAtomicEnd();
                    value_12 = value_34;
                }
                block_20:
                value_10 = value_12;

                if (value_5 & 1)
                {
                    trace_argument_1_2 = NULL;
                    KeReleaseSemaphore(&MpData[0x70], 0, 1, 0);
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                    {
                        trace_handle = *(uint64_t *)(WPP_GLOBAL_Control + 0x18);
                        data = &MpData[0x70];
                        trace_argument_1_2 = NULL;
                        WPP_SF_D(trace_handle, 0x1a, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), KeReadStateSemaphore(data));
                    }
                    value_5 &= 0xfffffffe;
                }
            }
            if (value_5 & 2)
            {
                trace_argument_1_2 = NULL;
                KeReleaseSemaphore(&MpData[0x78], 0, 1, 0);
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                {
                    trace_handle = *(uint64_t *)(WPP_GLOBAL_Control + 0x18);
                    data = &MpData[0x78];
                    trace_argument_1_2 = NULL;
                    WPP_SF_D(trace_handle, 0x1b, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), KeReadStateSemaphore(data));
                }
            }
            value_5 = WdLoadField(&value_7, 4, 4);
            trace_argument_1_3 = WdLoadField(&value_7, 4, 4);
            if (Microsoft_Antimalware_AMFilterEnableBits & 0x20)
            {
                status = (uint32_t)((uint64_t)((uint64_t *)data_pointer_5)[0x31] >> 0x20);
                value_21 = (uint32_t)((uint64_t)((uint64_t *)data_pointer_5)[0x30] >> 0x20);
                McTemplateK0zqqqqxx_EtwWriteTransfer();
            }
            data_pointer_2 = data_pointer_5;
            value_3 = (uint64_t)((uint64_t)trace_argument_1_2 >> 8);
            if (value_5 != 7 || ((uint32_t *)data_pointer_5)[7] & 0x20)
            {
                event_id_2 = (uint16_t *)((uint64_t)value_3 << 8);
            }
            else
            {
                event_id_2 = (uint16_t *)(((uint64_t)value_3 & 0xffffffffffffffULL) << 8 | (uint64_t)1 & 0xffULL);
            }
            buffer_2[0] = (uint8_t)event_id_2;
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                value_11 = (uint32_t)event_id_2;
                event_id_2 = (uint16_t *)(&data_pointer_3[0x3c]);
                value_17 = ((uint64_t)value & 0xffffffffULL) << 32 | (uint64_t)data_pointer_3[0xc] & 0xffffffffULL;
                trace_handle = ((uint64_t *)data_pointer_5)[0x30];
                trace_argument_2_2 = ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)((uint32_t *)data_pointer_5)[0x5e] & 0xffffffffULL;
                wide_text_2 = event_id_2;
                WPP_SF_qdZiDdDd(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id_2, WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control), trace_argument_1_6, trace_argument_2_2, event_id_2, trace_handle, value_17, ((uint64_t)value_21 & 0xffffffffULL) << 32 | (uint64_t)value_5 & 0xffffffffULL, ((uint64_t)status & 0xffffffffULL) << 32 | (uint64_t)value_10 & 0xffffffffULL, value_11 & 0xff);
                value_15 = (uint32_t)((uint64_t)wide_text_2 >> 0x20);
                value_4 = (uint32_t)((uint64_t)trace_argument_2_2 >> 0x20);
                value_18 = (uint32_t)((uint64_t)trace_handle >> 0x20);
                value = (uint32_t)((uint64_t)value_17 >> 0x20);
            }
            if (value_5 == 8)
            {
                data_pointer_3[0xc] = data_pointer_3[0xc] | 0x80000;
                value_5 = 0;
                trace_argument_1_3 = 0;
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                {
                    event_id_2 = NULL;
                    WPP_SF_Z(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x36, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), (int16_t *)(((int64_t *)input)[0xb] + 0x58));
                }
            }
            value_11 = trace_argument_1_3;
            if (value_9 || 8 <= value_5 || !(0x9dU >> (value_5 & 0x1f) & 1))
            {
                trace_argument_1_2 = &MpData[0x3da];
                value_10 = WdAtomicAdd32((volatile int32_t *)trace_argument_1_2, 1);
                trace_argument_1 = value_10 + 1;
                if (0x65 <= trace_argument_1)
                {
                    if (0x3e9 <= trace_argument_1)
                    {
                        if (0x2711 <= trace_argument_1)
                        {
                            if (0x186a1 <= trace_argument_1)
                            {
                                event_id_2 = (uint16_t *)((uint64_t)((uint32_t)(trace_argument_1 / 10000)));
                                enabled_3 = trace_argument_1 == trace_argument_1 / 10000 * 10000;
                            }
                            else
                            {
                                event_id_2 = (uint16_t *)((uint64_t)((uint32_t)(trace_argument_1 / 1000)));
                                enabled_3 = trace_argument_1 == trace_argument_1 / 1000 * 1000;
                            }
                        }
                        else
                        {
                            event_id_2 = (uint16_t *)((uint64_t)((uint32_t)(trace_argument_1 / 100)));
                            enabled_3 = trace_argument_1 == trace_argument_1 / 100 * 100;
                        }
                    }
                    else
                    {
                        event_id_2 = (uint16_t *)((uint64_t)((uint32_t)(trace_argument_1 / 10)));
                        enabled_3 = trace_argument_1 == trace_argument_1 / 10 * 10;
                    }
                    if (enabled_3)
                    {
                        goto block_21;
                    }
                }
                else
                {
                    block_21:
                    if (((int32_t *)data_pointer_2)[6] != 5 && (wide_text_3 = L"OnOpen", ((int32_t *)data_pointer_2)[6] != 3))
                    {
                        wide_text_3 = L"OnClose";
                    }

                    wide_text = L"Blocked file";
                    event_id_2 = L"Unsuccessful scan status";
                    if (!trace_argument_1_5)
                    {
                        event_id_2 = L"Blocked file";
                    }
                    trace_handle = ((uint64_t)value_15 & 0xffffffffULL) << 32 | (uint64_t)trace_argument_1_5 & 0xffffffffULL;
                    wide_text_2 = wide_text_4;
                    MpLogPrintfW(L"[Mini-filter] %ls(#%d): %ls. Process: %ls, Status: 0x%x, State: %u, ScanRequest #%d, FileId: 0x%I64x, Reason: %ls, IoStatusBlockForNewFile: 0x%x, DesiredAccess:0x%x, FileAttributes:0x%x, ScanAttributes:0x%x, AccessStateFlags:0x%x, BackingFileInfo: 0x%x, 0x%x, 0x%I64x:%I64x\\0x%I64x:%I64x", event_id_2, MpData[0x3da], wide_text_5, wide_text_4, trace_handle, ((uint64_t)value_18 & 0xffffffffULL) << 32 | (uint64_t)trace_argument_1_3 & 0xffffffffULL, ((uint64_t)value & 0xffffffffULL) << 32 | (uint64_t)((uint32_t *)data_pointer_2)[0x5e] & 0xffffffffULL, ((uint64_t *)data_pointer_2)[0x30], wide_text_3, ((uint32_t *)data_pointer_2)[0x67], ((uint32_t *)data_pointer_2)[0x68], ((uint32_t *)data_pointer_2)[0x80], ((uint32_t *)data_pointer_2)[7], ((uint32_t *)data_pointer_2)[0x6c], ((uint64_t)value_25 & 0xffffffffULL) << 32 | (uint64_t)((uint32_t *)data_pointer_2)[0x6e] & 0xffffffffULL, ((uint64_t)value_28 & 0xffffffffULL) << 32 | (uint64_t)((uint32_t)((uint16_t *)data_pointer_2)[0xde]) & 0xffffffffULL, ((uint64_t *)data_pointer_2)[0x38], ((uint64_t *)data_pointer_2)[0x39], ((uint64_t *)data_pointer_2)[0x3b], ((uint64_t *)data_pointer_2)[0x3a]);
                    value_15 = (uint32_t)((uint64_t)trace_handle >> 0x20);
                    value_4 = (uint32_t)((uint64_t)wide_text_2 >> 0x20);
                    data_pointer_3 = data_pointer_7;
                    value_5 = value_11;
                    value_9 = trace_argument_1_5;
                }
                if (WdDataStorage21 && !value_9)
                {
                    MpLogPrintfW(L"[Mini-Filter] Force context leak on detection triggered. Driver unload from now on will hang and requires reboot!!!");
                    FltReferenceContext(data_pointer_3);
                }
            }
            trace_argument_1_4 = WdSharedTickCount;
            if (*(int64_t *)(&MpData[0x96]) && value_5 == 0x10)
            {
                event_id = 0;
                trace_argument_1_2 = &MpData[0x96];
                WdUnresolvedAtomicBegin();
                if (*(int64_t *)trace_argument_1_2)
                {
                    event_id = *(int64_t *)trace_argument_1_2;
                }
                else
                {
                    trace_argument_1_2[0] = 0;
                    trace_argument_1_2[1] = 0;
                }
                WdUnresolvedAtomicEnd();
                event_id_2 = (uint16_t *)((uint64_t)((uint16_t *)input)[0x30]);
                MpSetStreamUnknownRevertTickcount(record_2, event_id_2, data_pointer_3, trace_argument_1_4 + event_id);
            }
            trace_argument_1_2 = MpData;
            KeEnterCriticalRegion();
            ExAcquireResourceExclusiveLite(&trace_argument_1_2[0xbc], (uint64_t)((uint64_t)event_id_2) & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
            KeLeaveCriticalRegion();
            enabled_3 = 0;
            if (*(int64_t *)(&MpData[0x26a]) && (trace_argument_1 = (int32_t)((uint64_t)(WdSharedSystemTime - *(int64_t *)(&MpData[0x26a])) >> 0x20), trace_argument_1 || 0x23c34601 <= (uint32_t)(WdSharedSystemTime - *(int64_t *)(&MpData[0x26a]))))
            {
                *(char *)(&MpData[0x268]) = 0;
                trace_argument_1_2 = MpData;
                trace_argument_1_2[0x26a] = 0;
                trace_argument_1_2[0x26b] = 0;
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                {
                    WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x37, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids));
                }
            }
            if (value_29 != 0x102 && value_9 != 0x102)
            {
                if (!enabled_2)
                {
                    block_22:
                    if (*(char *)(&MpData[0x36]))
                    {
                        trace_argument_1_4 = (uint64_t)value_4 << 0x20;
                        trace_argument_1 = MpSendAsyncPanicModeMessage(3, NULL, 0, 0, trace_argument_1_4);
                        value_4 = (uint32_t)((uint64_t)trace_argument_1_4 >> 0x20);
                        if (0 <= trace_argument_1)
                        {
                            *(char *)(&MpData[0x36]) = 0;
                        }
                        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x39, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), trace_argument_1);
                        }
                    }
                }
            }
            else if (!enabled_2)
            {
                if (*(char *)(&MpData[0x268]))
                {
                    goto block_22;
                }
                MpData[0x98] = MpData[0x98] + 1;
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    trace_argument_3 = (int16_t *)(((int64_t *)input)[0xb] + 0x58);
                    trace_handle = ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)MpData[0x98] & 0xffffffffULL;
                    WPP_SF_qLZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x38, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), trace_argument_1_6, trace_handle, trace_argument_3);
                    value_15 = (uint32_t)((uint64_t)trace_argument_3 >> 0x20);
                    value_4 = (uint32_t)((uint64_t)trace_handle >> 0x20);
                }
                if (WdDataStorage4 <= MpData[0x98])
                {
                    SwitchToPanicMode(3, (WD_UNICODE_STRING_VALUE *)(((int64_t *)input)[0xb] + 0x58), *(uint32_t *)(*(int64_t *)(&data_pointer_3[2]) + 0x54));
                    enabled_3 = 1;
                    value_5 = 0;
                }
                else
                {
                    SwitchOffPanicMode(3);
                }
            }
            data_pointer_3[0x28] = 2;
            trace_argument_1_4 = 0;
            if (*(int64_t *)(&data_pointer_3[0x20]))
            {
                trace_argument_1_4 = *(int64_t *)(&data_pointer_3[0x20]);
            }
            event_id = 0;
            if (*(int64_t *)(&data_pointer_3[0x22]))
            {
                event_id = *(int64_t *)(&data_pointer_3[0x22]);
            }
            data_pointer_3[0x18] = 0;
            data_pointer_3[0x19] = 0;
            data_pointer_3[0x1e] = 0;
            data_pointer_3[0x1f] = 0;
            data_pointer_3[0x20] = 0;
            data_pointer_3[0x21] = 0;
            data_pointer_3[0x22] = 0;
            data_pointer_3[0x23] = 0;
            if (3 <= value_5 - 2 && value_5 != 7 || (byte_value_2 = IsFileDirty(record_2, ((uint16_t *)input)[0x30], data_pointer_3), !byte_value_2))
            {
                if (!buffer_2[0])
                {
                    trace_argument_1 = MpSetStreamState__scan(record_2, ((uint16_t *)input)[0x30], data_pointer_3, value_5);
                    if (0 <= trace_argument_1)
                    {
                        if ((value_5 - 2 <= 2 || value_5 == 7) && ((uint32_t *)data_pointer_5)[7] & 0x20)
                        {
                            WdUnresolvedAtomicBegin();
                            data_pointer_3[0xc] = data_pointer_3[0xc] | 0x4000;
                            WdUnresolvedAtomicEnd();
                        }
                    }
                    else
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            trace_handle = ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)trace_argument_1 & 0xffffffffULL;
                            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x3b, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), trace_argument_1_6, trace_handle);
                            value_4 = (uint32_t)((uint64_t)trace_handle >> 0x20);
                        }
                        value_5 = 0;
                    }
                }
            }
            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x3a, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids));
            }
            trace_argument_1_2 = &data_pointer_3[0xe];
            data_pointer_3[0x14] = 0;
            data_pointer_3[0x15] = 0;
            data_pointer_3[0x12] = 0;
            data_pointer_3[0x13] = 0;
            value_13 = *(int64_t *)trace_argument_1_2;
            if (*(uint32_t **)(value_13 + 8) != trace_argument_1_2 || (allocation_2 = *(int64_t **)(&data_pointer_3[0x10]), (uint32_t *)(*allocation_2) != trace_argument_1_2))
            {
                (*(WD_ROUTINE)swi(0x29))(3);
            }
            *allocation_2 = value_13;
            *(int64_t **)(value_13 + 8) = allocation_2;
            MpData[0x38] = MpData[0x38] - 1;
            if (*(int64_t *)(&data_pointer_3[0x24]))
            {
                KeSetEvent(*(int64_t *)(&data_pointer_3[0x24]), 0, 0);
            }
            ExReleaseResourceLite(&MpData[0xbc]);
            KeLeaveCriticalRegion();
            if (enabled_3)
            {
                MpPurgeCache();
            }
            if (value_5 != 0x10)
            {
                value_9 = data_pointer_3[0x2a];
                value_13 = *(int64_t *)(&data_pointer_3[2]);
                value_2 = value_9 % (uint64_t)WdDataStorage11;
                enabled_3 = 0;
                value_29 = (uint32_t)value_2;
                if (*(int32_t *)(value_13 + 0x78) != 2 || !(*(int64_t *)(value_13 + 0x1b8)))
                {
                    goto block_34;
                }
                KeEnterCriticalRegion();
                ExAcquireResourceExclusiveLite(value_13 + 0x120, (uint64_t)value_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
                data_pointer = (uint64_t *)(value_29 * 0x10ULL + *(int64_t *)(value_13 + 0x1b8));
                data_pointer_4 = (uint64_t *)(*data_pointer);
                goto block_31;
            }
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                trace_argument_1_2 = &data_pointer_3[0x3c];
                WPP_SF_dZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x3c, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), data_pointer_3[0x2a], trace_argument_1_2);
                value_4 = (uint32_t)((uint64_t)trace_argument_1_2 >> 0x20);
            }
            value_9 = data_pointer_3[0x2a];
            data_pointer_2 = *(void **)(&data_pointer_3[2]);
            if ((int32_t)MpAddKnownBadEntry(data_pointer_2, value_9) < 0 || WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4))
            {
                goto block_34;
            }
            trace_handle = 0x3d;
            goto block_33;
        }
        if (enabled)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                trace_argument_1_4 = ((int64_t *)input)[6];
                provider = "OnClose";
                event_id = ((int64_t *)input)[0xb] + 0x58;
                if (*(int32_t *)(trace_argument_1_4 + 0x18) != 4)
                {
                    provider = "OnOpen";
                }
                WPP_SF_iisZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, provider, *(uint64_t *)(trace_argument_1_4 + 0x180), *(uint64_t *)(trace_argument_1_4 + 0x188), provider, event_id);
            }
            block_23:
            ExReleaseResourceLite(&MpData[0xbc]);

            KeLeaveCriticalRegion();
            return;
        }
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            trace_argument_2 = (int16_t *)(((int64_t *)input)[0xb] + 0x58);
            value_14 = ((uint64_t)value_15 & 0xffffffffULL) << 32 | (uint64_t)value_9 & 0xffffffffULL;
            WPP_SF_qZD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x22, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), *(int64_t *)(&data_pointer_3[0x14]), trace_argument_2, value_14);
        }
        if (10 <= value_9)
        {
            block_24:
            MpSetStreamState__scan(record_2, ((uint16_t *)input)[0x30], data_pointer_3, 0);

            goto block_23;
        }
        if (!(*(int64_t *)(&data_pointer_3[0x24])))
        {
            allocation_2 = MpAllocatePoolWithTag(ExDefaultNonPagedPoolType, (char *)0x18, 0x6573504d);
            *(int64_t **)(&data_pointer_3[0x24]) = allocation_2;
            if (!allocation_2)
            {
                goto block_24;
            }
            KeInitializeEvent(allocation_2, 0, 0);
        }
        if (2 <= (int32_t)data_pointer_3[0x28] || ((int32_t *)data_pointer_2)[2] <= 1 || !(MpData[0xd8] & 4))
        {
            ExReleaseResourceLite(&MpData[0xbc]);
            KeLeaveCriticalRegion();
            if (enabled_3)
            {
                goto block_25;
            }
        }
        else
        {
            enabled_3 = 1;
            ExReleaseResourceLite(&MpData[0xbc]);
            KeLeaveCriticalRegion();
            block_25:
            value_26 = MpBoostLowPriThreads(((uint32_t *)data_pointer_2)[3], 0);
        }
        event_id_2 = wide_text_3;
        if (((uint8_t *)input)[0x28] & 1)
        {
            event_id_2 = NULL;
        }
        trace_argument_1_2 = NULL;
        FltCancellableWaitForSingleObject(*(int64_t *)(&data_pointer_3[0x24]), 0, event_id_2);
        if (enabled_3 && 0 <= value_26)
        {
            trace_argument_1_2 = (uint32_t *)((uint64_t)((uint64_t)trace_argument_1_2) & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
            MpBoostLowPriThreads(((uint32_t *)data_pointer_2)[3], trace_argument_1_2);
        }
        if (!record_2)
        {
            trace_argument_1_2 = *(uint32_t **)(&data_pointer_3[2]);
            data = &data_pointer_3[8];
            if (data && trace_argument_1_2)
            {
                if (*data != 5 || MpData[0xd9] >> 0xf & 1)
                {
                    if (data_pointer_3[9] != trace_argument_1_2[0x24])
                    {
                        goto block_26;
                    }
                    value_9 = *data;
                }
                else
                {
                    value_9 = 5;
                }
            }
            else
            {
                block_26:
                value_9 = 0;
            }
            block_27:
            if (value_9 == 1)
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                {
                    trace_argument_1_2 = NULL;
                    WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x25, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), (uint64_t)KeGetCurrentThread());
                }
                goto block_30;
            }

            if (!value_9)
            {
                goto block_29;
            }
            if (((uint32_t *)data_pointer_2)[7] & 0x20 && !(data_pointer_3[0xc] & 0x4000))
            {
                value_9 = trace_argument_1_5 + 1;
                trace_argument_1_5 = value_9;
                continue;
            }
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                WPP_SF_ZD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x27, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), (int16_t *)(((int64_t *)input)[0xb] + 0x58), (uint64_t)((uint64_t)trace_argument_2) & 0xffffffff00000000 | (uint64_t)value_9 & 0xffffffff);
            }
            return;
        }
        if (record_2->field_0xa8 & 1)
        {
            return;
        }
        if (0xfffc < (uint16_t)(((int16_t *)input)[0x30] - 1U))
        {
            FltAcquirePushLockShared(&data_pointer_3[0x30]);
            trace_argument_1_2 = *(uint32_t **)(&data_pointer_3[2]);
            if (*(int64_t *)(&data_pointer_3[0x34]))
            {
                data = (uint32_t *)(*(int64_t *)(&data_pointer_3[0x34]) + 0x18);
            }
            else
            {
                data = &data_pointer_3[8];
            }
            if (data && trace_argument_1_2)
            {
                if (*data != 5 || MpData[0xd9] >> 0xf & 1)
                {
                    if (data[1] != trace_argument_1_2[0x24])
                    {
                        goto block_28;
                    }
                    value_9 = *data;
                }
                else
                {
                    value_9 = 5;
                }
            }
            else
            {
                block_28:
                value_9 = 0;
            }
            FltReleasePushLock(&data_pointer_3[0x30]);
            goto block_27;
        }
        block_29:
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
        {
            trace_argument_1_2 = NULL;
            WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x26, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids));
            value_9 = trace_argument_1_5 + 1;
            trace_argument_1_5 = value_9;
            continue;
        }

        block_30:
        trace_argument_1_5 += 1;

        value_9 = trace_argument_1_5;
    }

    while (true)
    {
        data_pointer_4 = (uint64_t *)(*allocation);
        if (*(uint32_t *)(&allocation[2]) == value_9)
        {
            break;
        }
        block_31:
        allocation = data_pointer_4;

        if (allocation == data_pointer)
        {
            goto block_32;
        }
    }

    if ((uint64_t *)data_pointer_4[1] != allocation || (data_pointer = (uint64_t *)allocation[1], (uint64_t *)(*data_pointer) != allocation))
    {
        (*(WD_ROUTINE)swi(0x29))(3);
    }
    *data_pointer = data_pointer_4;
    data_pointer_4[1] = data_pointer;
    ExFreePoolWithTag(allocation, 0x6862504d);
    enabled_3 = 1;
    block_32:
    ExReleaseResourceLite(value_13 + 0x120);

    KeLeaveCriticalRegion();
    if (enabled_3 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
    {
        trace_handle = 0x3e;
        block_33:
        trace_argument_1_2 = &data_pointer_3[0x3c];

        WPP_SF_dZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), trace_handle, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), data_pointer_3[0x2a], trace_argument_1_2);
        value_4 = (uint32_t)((uint64_t)trace_argument_1_2 >> 0x20);
    }
    block_34:
    if (trace_argument_1_4)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            value_13 = trace_argument_1_4;
            WPP_SF_qq(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x3f, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), trace_argument_1_6, trace_argument_1_4);
            value_4 = (uint32_t)((uint64_t)value_13 >> 0x20);
        }
        ObfDereferenceObject(trace_argument_1_4);
        trace_argument_1_4 = ObTotalReferences;
        WdUnresolvedAtomicBegin();
        ObTotalReferences -= 1;
        WdUnresolvedAtomicEnd();
        if (trace_argument_1_4 + -1 <= -1 && (int32_t)MpData[0xd9] <= -1)
        {
            if (!KdRefreshDebuggerNotPresent())
            {
                (*(WD_ROUTINE)swi(3))();
                return;
            }
            KeBugCheck(1);
        }
    }

    if (event_id)
    {
        trace_argument_1 = (*__guard_dispatch_icall_fptr)(event_id);
        if (trace_argument_1)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                trace_argument_1_4 = event_id;
                WPP_SF_qqL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x40, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), trace_argument_1_6, event_id, ((uint64_t)value_15 & 0xffffffffULL) << 32 | (uint64_t)trace_argument_1 & 0xffffffffULL);
                value_4 = (uint32_t)((uint64_t)trace_argument_1_4 >> 0x20);
            }
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            trace_argument_1_4 = event_id;
            WPP_SF_qq(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x41, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), trace_argument_1_6, event_id);
            value_4 = (uint32_t)((uint64_t)trace_argument_1_4 >> 0x20);
        }
        byte_value_2 = (char)MpData[0xd9];
        if (byte_value_2 <= '\xff' && (trace_argument_1_4 = ((int64_t *)input)[0xb], *(uint32_t *)(event_id + 4) & 1))
        {
            value_35 = 0xfffffffffffffffe;
            value_8 = 0;
            value_36 = 0;
            value_37 = 0;
            value_38 = 0;
            status = FltSetInformationFile(*(uint64_t *)(*(int64_t *)(&data_pointer_3[2]) + 0x68), trace_argument_1_4, &value_8, 0x28, ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)4 & 0xffffffffULL);
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                WPP_SF_dZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x47, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), status, (int16_t *)(trace_argument_1_4 + 0x58));
            }
            *(uint32_t *)(event_id + 4) = *(uint32_t *)(event_id + 4) & 0xfffffffe;
        }
        FltReleaseContext(event_id);
    }
    return;
}

void MpScanFile(int64_t input, void *data, void *input_2, int32_t input_3, uint32_t input_4, uint16_t *input_5, uint64_t *input_6, uint32_t input_7, uint64_t *input_8, void *input_9, int64_t input_10, void *input_11)
{
    int64_t value;
    uint16_t value_2;
    char buffer_2[8];
    int64_t file_name;
    uint32_t result[2];
    uint64_t *data_pointer;
    uint32_t value_3;
    uint32_t value_4;
    uint64_t value_5;
    uint32_t value_6;
    int64_t value_7;
    int32_t value_8;
    uint32_t value_9;
    int64_t value_10;
    uint32_t *allocation;
    int64_t process_context;
    uint16_t *wide_text;
    uint64_t value_11;
    uint64_t *data_pointer_2;
    uint32_t value_13;
    uint32_t value_14;
    bool enabled;
    int32_t trace_argument_1;
    uint32_t *allocation_2;
    uint64_t creation_time;
    uint64_t *data_pointer_3;
    value_6 = (uint32_t)((uint64_t)value_5 >> 0x20);
    wide_text = input_5;
    process_context = input_10;
    data_pointer = NULL;
    value_3 = 0;
    value_8 = input_3;
    value_10 = input;
    if (!(*(int32_t *)(MpData + 0x1b8)))
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            WPP_SF_Z(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1c, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), &((int16_t *)input_9)[0x78]);
        }
        return;
    }
    if ((*(uint32_t *)(&input_6[4]) & 0x400200) == 0x200 && ((trace_argument_1 = *(int32_t *)(((int64_t *)input_9)[1] + 0x78), trace_argument_1 == 2 || trace_argument_1 == 0x1c) && MpIsEmptySparseFile(input_2)))
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            WPP_SF_ZD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1d, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), (int16_t *)(((int64_t *)input_2)[4] + 0x58), ((uint64_t)value_6 & 0xffffffffULL) << 32 | (uint64_t)(*(uint32_t *)(&input_6[4])) & 0xffffffffULL);
        }
        MpSetStreamState__scan(input, ((uint16_t *)input_2)[1], input_9, 3);
        return;
    }
    file_name = 0;
    buffer_2[0] = '\0';
    enabled = 0;
    allocation = NULL;
    value_9 = 0;
    value_11 = 0;
    data_pointer_2 = NULL;
    if (input_3 != 4 || !(*(uint32_t *)(MpData + 0x364) & 1))
    {
        trace_argument_1 = FltGetFileNameInformation(data, 0x102, &file_name);
    }
    else
    {
        trace_argument_1 = MpQueryFileName(data, *(uint32_t *)(((int64_t *)input_9)[1] + 0x54), &file_name, buffer_2);
    }
    if (0 <= trace_argument_1)
    {
        value_11 = *(uint64_t *)(file_name + 8);
        data_pointer_2 = *(uint64_t **)(file_name + 0x10);
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x11, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), trace_argument_1);
    }
    value_4 = (uint32_t)((uint16_t)value_11);
    result[0] = 0x334;
    trace_argument_1 = RtlULongAdd(0x334, value_4 + 2, result);
    if (0 <= trace_argument_1)
    {
        if (wide_text && *wide_text)
        {
            trace_argument_1 = RtlULongAdd(result[0], *wide_text + 2, result);
            if (0 <= trace_argument_1)
            {
                enabled = 1;
            }
            else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x13, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), trace_argument_1);
            }
        }
        allocation_2 = (uint32_t *)MpAllocatePoolWithTag(1, result[0], 0x7366504d);
        if (allocation_2)
        {
            *allocation_2 = 0x100a3;
            allocation_2[1] = result[0];
            allocation_2[6] = value_8;
            if (!(value_8 - 3U & 0xfffffffdU))
            {
                if (input_11 && ((char **)input_11)[0xd] && *((char **)input_11)[0xd])
                {
                    data_pointer_3 = ((uint64_t **)input_11)[0xd];
                    creation_time = data_pointer_3[1];
                    *(uint64_t *)(&allocation_2[0x84]) = *data_pointer_3;
                    *(uint64_t *)(&allocation_2[0x86]) = creation_time;
                    creation_time = data_pointer_3[3];
                    *(uint64_t *)(&allocation_2[0x88]) = data_pointer_3[2];
                    *(uint64_t *)(&allocation_2[0x8a]) = creation_time;
                    creation_time = data_pointer_3[5];
                    *(uint64_t *)(&allocation_2[0x8c]) = data_pointer_3[4];
                    *(uint64_t *)(&allocation_2[0x8e]) = creation_time;
                    creation_time = data_pointer_3[7];
                    *(uint64_t *)(&allocation_2[0x90]) = data_pointer_3[6];
                    *(uint64_t *)(&allocation_2[0x92]) = creation_time;
                    creation_time = data_pointer_3[9];
                    *(uint64_t *)(&allocation_2[0x94]) = data_pointer_3[8];
                    *(uint64_t *)(&allocation_2[0x96]) = creation_time;
                    creation_time = data_pointer_3[0xb];
                    *(uint64_t *)(&allocation_2[0x98]) = data_pointer_3[10];
                    *(uint64_t *)(&allocation_2[0x9a]) = creation_time;
                    creation_time = data_pointer_3[0xd];
                    *(uint64_t *)(&allocation_2[0x9c]) = data_pointer_3[0xc];
                    *(uint64_t *)(&allocation_2[0x9e]) = creation_time;
                    creation_time = data_pointer_3[0xf];
                    *(uint64_t *)(&allocation_2[0xa0]) = data_pointer_3[0xe];
                    *(uint64_t *)(&allocation_2[0xa2]) = creation_time;
                    creation_time = data_pointer_3[0x11];
                    *(uint64_t *)(&allocation_2[0xa4]) = data_pointer_3[0x10];
                    *(uint64_t *)(&allocation_2[0xa6]) = creation_time;
                    creation_time = data_pointer_3[0x13];
                    *(uint64_t *)(&allocation_2[0xa8]) = data_pointer_3[0x12];
                    *(uint64_t *)(&allocation_2[0xaa]) = creation_time;
                    creation_time = data_pointer_3[0x15];
                    *(uint64_t *)(&allocation_2[0xac]) = data_pointer_3[0x14];
                    *(uint64_t *)(&allocation_2[0xae]) = creation_time;
                    value_6 = ((uint32_t *)data_pointer_3)[0x2d];
                    value_13 = *(uint32_t *)(&data_pointer_3[0x17]);
                    value_14 = ((uint32_t *)data_pointer_3)[0x2f];
                    allocation_2[0xb0] = *(uint32_t *)(&data_pointer_3[0x16]);
                    allocation_2[0xb1] = value_6;
                    allocation_2[0xb2] = value_13;
                    allocation_2[0xb3] = value_14;
                    creation_time = data_pointer_3[0x19];
                    *(uint64_t *)(&allocation_2[0xb4]) = data_pointer_3[0x18];
                    *(uint64_t *)(&allocation_2[0xb6]) = creation_time;
                    *(uint64_t *)(&allocation_2[0xb8]) = data_pointer_3[0x1a];
                    allocation_2[0xba] = *(uint32_t *)(&data_pointer_3[0x1b]);
                }
                else
                {
                    *(char *)(&allocation_2[0x84]) = 0;
                }
            }
            if (allocation_2[6] != 3)
            {
                if (allocation_2[6] == 5)
                {
                    if (!input_11)
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                        {
                            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x14, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), ((uint64_t *)data)[1]);
                        }
                        trace_argument_1 = -0x3ffffff3;
                        goto block_1;
                    }
                    allocation_2[0x68] = ((uint32_t *)input_11)[0x16];
                    if (((int64_t *)input_11)[0xc])
                    {
                        value_3 = *(uint32_t *)(((int64_t *)input_11)[0xc] + 8);
                    }
                    allocation_2[0x69] = value_3;
                    if (((int64_t *)input_11)[0xc])
                    {
                        allocation_2[0x6a] = *(uint32_t *)(((int64_t *)input_11)[0xc] + 0xc);
                    }
                    else
                    {
                        allocation_2[0x6a] = 0;
                    }
                }
            }
            else
            {
                allocation_2[0x68] = *(uint32_t *)(*(int64_t *)(((int64_t *)data)[2] + 0x18) + 0x10);
                value_4 = *(uint16_t *)(((int64_t *)data)[2] + 0x2a);
                allocation_2[0x69] = value_4;
                allocation_2[0x6a] = *(uint32_t *)(((int64_t *)data)[2] + 0x20);
            }
            *(void **)(&allocation_2[0x5c]) = input_9;
            MpGetPriorityInfo(data, ((uint64_t *)input_2)[4], (WD_LAYOUT_26 *)(&allocation_2[2]));
            if (*(uint32_t *)(MpData + 0x364) >> 0x10 & 1)
            {
                value = ((int64_t *)data)[1];
                MpQuerySessionIdFromObjects(value, IoGetCurrentProcess(), process_context, &allocation_2[0x12]);
            }
            else
            {
                MpQuerySessionId(0xfffffffffffffffe, 0xffffffffffffffff, &allocation_2[0x12]);
            }
            value = value_10;
            *(uint64_t *)(&allocation_2[0x60]) = ((uint64_t *)input_9)[0x15];
            allocation_2[0x65] = *(uint32_t *)(((int64_t *)input_9)[1] + 0x54);
            allocation_2[0x66] = *(uint32_t *)(((int64_t *)input_9)[1] + 0x60);
            creation_time = input_6[1];
            *(uint64_t *)(&allocation_2[0x78]) = *input_6;
            *(uint64_t *)(&allocation_2[0x7a]) = creation_time;
            value_3 = ((uint32_t *)input_6)[5];
            value_6 = *(uint32_t *)(&input_6[3]);
            value_13 = ((uint32_t *)input_6)[7];
            allocation_2[0x7c] = *(uint32_t *)(&input_6[2]);
            allocation_2[0x7d] = value_3;
            allocation_2[0x7e] = value_6;
            allocation_2[0x7f] = value_13;
            creation_time = input_6[4];
            allocation_2[7] = input_4;
            *(uint64_t *)(&allocation_2[0x80]) = creation_time;
            allocation_2[100] = (int32_t)((char *)data)[0x50];
            allocation_2[0x6c] = input_7;
            if (allocation_2[6] != 4)
            {
                creation_time = input_8[1];
                *(uint64_t *)(&allocation_2[0x6e]) = *input_8;
                *(uint64_t *)(&allocation_2[0x70]) = creation_time;
                creation_time = input_8[3];
                *(uint64_t *)(&allocation_2[0x72]) = input_8[2];
                *(uint64_t *)(&allocation_2[0x74]) = creation_time;
                *(uint64_t *)(&allocation_2[0x76]) = input_8[4];
                allocation_2[0x67] = 0xffffffff;
            }
            else
            {
                value_3 = WdAtomicExchange32((volatile int32_t *)((uint32_t *)((int64_t)input_9 + 0x34)), 0xffffffff);
                allocation_2[0x67] = value_3;
                trace_argument_1 = MpGetFileWriteHistoryAndReset__scan(value_10, ((uint16_t *)input_2)[1], input_9, (WD_LAYOUT_1 *)(&allocation_2[0x84]));
                if (trace_argument_1 <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x15, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), trace_argument_1);
                }
            }
            MpGetStreamSize(value, ((uint16_t *)input_2)[1], input_9, ((uint64_t *)input_2)[4], &allocation_2[8]);
            *(uint64_t *)(&allocation_2[10]) = (uint32_t)MpGetRequestorProcessId(data);
            creation_time = PsGetProcessCreateTimeQuadPart(MpGetRequestorProcess(data));
            *(uint64_t *)(&allocation_2[0xe]) = MpFileTimeFromUlong64(creation_time);
            *(uint64_t *)(&allocation_2[0x10]) = PsGetCurrentThreadId();
            if (process_context)
            {
                allocation_2[0xc] = *(uint32_t *)(process_context + 0x38);
                allocation_2[0xd] = *(uint32_t *)(process_context + 0x3c);
            }
            if (*(int64_t *)(((int64_t *)input_9)[1] + 0x30))
            {
                *(uint16_t *)(&allocation_2[0x16]) = *(uint16_t *)(((int64_t *)input_9)[1] + 0x28);
                data_pointer_3 = *(uint64_t **)(((int64_t *)input_9)[1] + 0x30);
                creation_time = data_pointer_3[1];
                *(uint64_t *)((int64_t)allocation_2 + 0x5a) = *data_pointer_3;
                *(uint64_t *)((int64_t)allocation_2 + 0x62) = creation_time;
                creation_time = data_pointer_3[3];
                *(uint64_t *)((int64_t)allocation_2 + 0x6a) = data_pointer_3[2];
                *(uint64_t *)((int64_t)allocation_2 + 0x72) = creation_time;
                creation_time = data_pointer_3[5];
                *(uint64_t *)((int64_t)allocation_2 + 0x7a) = data_pointer_3[4];
                *(uint64_t *)((int64_t)allocation_2 + 0x82) = creation_time;
                creation_time = data_pointer_3[7];
                *(uint64_t *)((int64_t)allocation_2 + 0x8a) = data_pointer_3[6];
                *(uint64_t *)((int64_t)allocation_2 + 0x92) = creation_time;
                value_3 = ((uint32_t *)data_pointer_3)[0x11];
                value_6 = *(uint32_t *)(&data_pointer_3[9]);
                value_13 = ((uint32_t *)data_pointer_3)[0x13];
                *(uint32_t *)((int64_t)allocation_2 + 0x9a) = *(uint32_t *)(&data_pointer_3[8]);
                *(uint32_t *)((int64_t)allocation_2 + 0x9e) = value_3;
                *(uint32_t *)((int64_t)allocation_2 + 0xa2) = value_6;
                *(uint32_t *)((int64_t)allocation_2 + 0xa6) = value_13;
                creation_time = data_pointer_3[0xb];
                *(uint64_t *)((int64_t)allocation_2 + 0xaa) = data_pointer_3[10];
                *(uint64_t *)((int64_t)allocation_2 + 0xb2) = creation_time;
                ((uint16_t *)allocation_2)[0x5d] = *(uint16_t *)(&data_pointer_3[0xc]);
            }
            if (value)
            {
                if (*(uint16_t **)(value + 0x98))
                {
                    *(uint16_t *)(&allocation_2[0x48]) = *(*(uint16_t **)(value + 0x98));
                    data_pointer_3 = *(uint64_t **)(&(*(uint16_t **)(value + 0x98))[4]);
                    if (data_pointer_3 && (value_2 = *(*(uint16_t **)(value + 0x98)), value_2))
                    {
                        if (0x4c <= value_2)
                        {
                            value_2 = 0x4c;
                        }
                        memmove((uint64_t *)((int64_t)allocation_2 + 0x122), data_pointer_3, value_2);
                    }
                }
                ((uint16_t *)allocation_2)[0x8f] = ((uint16_t *)input_2)[1];
            }
            if (!(value_8 - 3U & 0xfffffffdU) && !(*(uint32_t *)(((int64_t *)input_2)[4] + 0x50) & 0x100008) && !(*(uint32_t *)(((int64_t *)input_9)[1] + 0x54) & 0x10) && (((int64_t *)data)[1] && MpSeqDetectCtxCheck(WD_SYMBOL_ADDRESS(MpSeqDetectCtx))) && (allocation_2[7] = allocation_2[7] | 8, Microsoft_Antimalware_AMFilterEnableBits & 4))
            {
                McTemplateK0_EtwWriteTransfer(WD_SYMBOL_ADDRESS(Microsoft_Antimalware_AMFilter_Context), WD_SYMBOL_ADDRESS(AMFilter_SeqReadFlagEvent), 0);
            }
            value_2 = 0;
            if ((int16_t)value_11)
            {
                if (buffer_2[0])
                {
                    allocation_2[7] = allocation_2[7] | 0x10;
                }
                ((int16_t *)allocation_2)[0x105] = (int16_t)value_11;
                memmove(&allocation_2[0xcd], data_pointer_2, value_11 & 0xffff);
                value_2 = (uint16_t)value_11;
            }
            if (enabled)
            {
                *(uint16_t *)(&allocation_2[0x82]) = *wide_text;
                memmove((uint64_t *)(value_2 + 0x336ULL + (int64_t)allocation_2), *(uint64_t **)(&wide_text[4]), *wide_text);
                allocation_2[7] = allocation_2[7] | 0x10000;
            }
            trace_argument_1 = 0;
            allocation = allocation_2;
            allocation_2 = NULL;
            value_9 = result[0];
        }
        else
        {
            trace_argument_1 = -0x3fffff66;
        }
    }
    else
    {
        allocation_2 = NULL;
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x12, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), trace_argument_1);
            allocation_2 = NULL;
        }
    }
    block_1:
    if (file_name)
    {
        FltReleaseFileNameInformation();
    }

    if (allocation_2)
    {
        ExFreePoolWithTag(allocation_2, 0x7366504d);
    }
    if (trace_argument_1 <= -1)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1e, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), trace_argument_1);
        }
        MpSetStreamState__scan(value_10, ((uint16_t *)input_2)[1], input_9, 0);
        return;
    }
    ObfReferenceObject(((uint64_t *)input_2)[4]);
    WdUnresolvedAtomicBegin();
    ObTotalReferences += 1;
    WdUnresolvedAtomicEnd();
    data_pointer_3 = (uint64_t *)ExAllocateFromPagedLookasideList((void *)(MpData + 0x8c0));
    if (data_pointer_3)
    {
        *data_pointer_3 = 0;
        data_pointer_3[1] = 0;
        data_pointer_3[2] = 0;
        data_pointer_3[3] = 0;
        data_pointer_3[4] = 0;
        data_pointer_3[5] = 0;
        data_pointer_3[6] = 0;
        data_pointer_3[7] = 0;
        data_pointer_3[8] = 0;
        data_pointer_3[9] = 0;
        data_pointer_3[10] = 0;
        data_pointer_3[0xb] = 0;
        data_pointer_3[0xc] = 0;
        data_pointer_3[0xd] = 0;
        data_pointer_3[0xe] = 0;
        data_pointer_3[6] = allocation;
        *(uint32_t *)(&data_pointer_3[7]) = value_9;
        *(uint32_t *)data_pointer_3 = 0x78da21;
        data_pointer_3[8] = input_9;
        FltReferenceContext(input_9);
        if (value_10)
        {
            data_pointer_3[9] = value_10;
            FltReferenceContext(value_10);
        }
        if (process_context)
        {
            data_pointer_3[10] = process_context;
            MpReferenceProcessContext(process_context);
        }
        data_pointer_3[0xb] = ((uint64_t *)input_2)[4];
        if (data)
        {
            data_pointer_3[0xd] = data;
            data_pointer_3[0xe] = input_2;
        }
        value = data_pointer_3[10];
        value_4 = *(uint32_t *)(MpData + 0x364) & 0x2000;
        data_pointer = data_pointer_3;
        if (!data_pointer_3[9])
        {
            value_7 = *(int64_t *)(data_pointer_3[8] + 8);
            trace_argument_1 = *(int32_t *)(value_7 + 0x78);
            if ((trace_argument_1 == 2 || !value_4 && trace_argument_1 == 0x1c) && !(*(uint32_t *)(data_pointer_3[8] + 0x30) & 2))
            {
                trace_argument_1 = *(int32_t *)(data_pointer_3[6] + 0x18);
                if (trace_argument_1 != 3)
                {
                    if (trace_argument_1 != 4)
                    {
                        if (trace_argument_1 == 5)
                        {
                            goto block_4;
                        }
                    }
                    else if (!(*(uint32_t *)(MpData + 0x364) >> 8 & 1))
                    {
                        if (0 <= *(int32_t *)(MpData + 0x364) && WdDataStorage22 != 2)
                        {
                            if (!value)
                            {
                                goto block_5;
                            }
                            value_4 = *(uint32_t *)(value + 0x3c) & 1;
                            goto block_3;
                        }
                        goto block_2;
                    }
                }
                else
                {
                    block_4:
                    if (!value_4 && (value_4 = *(uint32_t *)(value_7 + 0x50), value_4 & 0x50) && value_4 & 8 && (!(*(uint32_t *)(data_pointer_3[6] + 0x1c) & 0x20) && value))
                    {
                        value_4 = *(uint32_t *)(value + 0x3c) & 0x100;
                        block_3:
                        if (value_4)
                        {
                            block_2:
                            data_pointer = data_pointer_3;

                            trace_argument_1 = MpAsyncScanEnqueue(data_pointer_3);
                            if (!trace_argument_1)
                            {
                                return;
                            }
                            if (trace_argument_1 == -0x3ffffd02)
                            {
                                goto block_6;
                            }
                            *(char *)(data_pointer[6] + 0x333) = 1;
                        }
                    }
                }
            }
        }
        block_5:
        MpDoScanFile(data_pointer);
    }
    else
    {
        ObfDereferenceObject(((uint64_t *)input_2)[4]);
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
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x1f, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), WD_STATUS_INSUFFICIENT_RESOURCES);
        }
        if (allocation)
        {
            ExFreePoolWithTag(allocation, 0x7366504d);
        }
    }
    block_6:
    if (data_pointer)
    {
        MpCleanupScanRequestContext(&data_pointer);
    }

    return;
}

void SwitchOffPanicMode(uint64_t input)
{
    int32_t trace_argument_1;
    if (*(char *)(MpData + 0xd0))
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x68, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids));
            return;
        }
    }
    else if (*(char *)(MpData + 0xd8))
    {
        trace_argument_1 = MpSendAsyncPanicModeMessage(input, NULL, 0, 0, 0);
        if (0 <= trace_argument_1)
        {
            *(char *)(MpData + 0xd8) = 0;
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x69, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), trace_argument_1);
            return;
        }
    }
    return;
}

uint64_t MpGetMappedPurgeExclusionLock(void *input, int64_t *input_2)
{
    int64_t data;
    WD_LAYOUT_35 *lock;
    int64_t *allocation;
    uint64_t value;
    uint64_t value_2;
    int64_t value_3;
    uint64_t value_4;
    uint32_t value_5;
    data = MpData;
    value_5 = (uint32_t)((uint64_t)value_4 >> 0x20);
    value_2 = 0;
    value_3 = 0;
    allocation = input_2;
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(data + 0x2f0, (uint64_t)((uint64_t)allocation) & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
    data = ((int64_t *)input)[0x13];
    if (data)
    {
        value_3 = data;
        if (((char *)input)[0xa4] == '\x01')
        {
            block_1:
            if (((int64_t *)input)[10])
            {
                if (!((int64_t *)input)[0x12])
                {
                    allocation = MpAllocatePoolWithTag(ExDefaultNonPagedPoolType, (char *)0x18, 0x6573504d);
                    ((int64_t **)input)[0x12] = allocation;
                    if (!allocation)
                    {
                        value_3 = 0;
                        value_2 = WD_STATUS_INSUFFICIENT_RESOURCES;
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            value = 0x56;
                            goto block_2;
                        }
                        goto block_3;
                    }
                    KeInitializeEvent(allocation, 0, 0);
                }
                ExReleaseResourceLite(MpData + 0x2f0);
                KeLeaveCriticalRegion();
                KeWaitForSingleObject(((uint64_t *)input)[0x12], 0, 0, 0, 0);
                goto block_4;
            }

            ((char *)input)[0xa4] = 0;
        }
    }
    else
    {
        lock = (WD_LAYOUT_35 *)ExAllocateFromNPagedLookasideList((void *)(MpData + 0x580));
        ((WD_LAYOUT_35 **)input)[0x13] = lock;
        if (lock)
        {
            MpRWLInitialize(lock);
            value_3 = ((int64_t *)input)[0x13];
            goto block_1;
        }
        value_2 = WD_STATUS_INSUFFICIENT_RESOURCES;
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
        {
            goto block_3;
        }
        value = 0x55;
        block_2:
        value_3 = 0;

        value_2 = WD_STATUS_INSUFFICIENT_RESOURCES;
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), value, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INSUFFICIENT_RESOURCES & 0xffffffffULL);
    }
    block_3:
    ExReleaseResourceLite(MpData + 0x2f0);

    KeLeaveCriticalRegion();
    block_4:
    if (!value_3)
    {
        return value_2;
    }

    *input_2 = value_3;
    return value_2;
}

void MpScanOnPreUserModeReadCopySourceFile(WD_LAYOUT_28 *data, void *input, int64_t *input_2, int64_t *input_3, uint8_t input_4)
{
    uint32_t value;
    char *trace_argument_2;
    uint64_t current_thread;
    int64_t handle_context;
    int64_t stream_context;
    uint64_t process_context;
    uint64_t process_context_2;
    uint64_t value_2;
    uint64_t value_3;
    uint64_t instance;
    uint64_t value_4;
    uint64_t value_5;
    uint32_t value_6;
    uint32_t *atomic_value;
    char byte_value;
    uint32_t value_8;
    int32_t status;
    uint32_t requestor_process_id;
    uint32_t value_9;
    int64_t requestor_process;
    value_9 = (uint32_t)((uint64_t)value_2 >> 0x20);
    value_6 = (uint32_t)((uint64_t)value_4 >> 0x20);
    stream_context = 0;
    handle_context = 0;
    process_context = 0;
    if (!data || !(*(char *)(MpData + 0xfc8)) || !(data->field_0x0 & 2) && (!data->field_0x50 && !(input_4 & 1)) || !(*(int64_t *)(MpData + 0xb0)) || ((byte_value = (*__guard_dispatch_icall_fptr)(((uint64_t *)input)[4]), !byte_value || (current_thread = (uint64_t)KeGetCurrentThread(), requestor_process = *(int64_t *)(MpData + 0xe8), IoThreadToProcess(current_thread) == requestor_process)) || (current_thread = (uint64_t)KeGetCurrentThread(), requestor_process = *(int64_t *)(MpData + 0x100), IoThreadToProcess(current_thread) == requestor_process)))
    {
        goto block_1;
    }
    current_thread = ((uint64_t *)input)[4];
    if (FltSupportsStreamContexts(current_thread) && (current_thread = ((uint64_t *)input)[4], FltSupportsStreamHandleContexts(current_thread)))
    {
        current_thread = ((uint64_t *)input)[4];
        instance = ((uint64_t *)input)[3];
        if (0 <= (int32_t)FltGetStreamHandleContext(instance, current_thread, &handle_context))
        {
            atomic_value = *(uint32_t **)(handle_context + 0x60);
            if (atomic_value && (value = *atomic_value, value & 1))
            {
                if (value & 2)
                {
                    if (value & 8)
                    {
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                        {
                            WPP_SF_qZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x62, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), data->field_0x8, (int16_t *)(((int64_t *)input)[4] + 0x58));
                        }
                        value = *(uint32_t *)(MpData + 0x360);
                        data->field_0x20 = 0;
                        value_8 = 0xc0000906;
                        if (!(value & 4))
                        {
                            value_8 = WD_STATUS_ACCESS_DENIED;
                        }
                        data->field_0x18 = value_8;
                    }
                }
                else
                {
                    WdAtomicOr32((volatile int32_t *)atomic_value, 4);
                    if (!IsThisCallBeingThrottled())
                    {
                        MpSendOSCopyHintTelemetry(1);
                    }
                    current_thread = ((uint64_t *)input)[4];
                    instance = ((uint64_t *)input)[3];
                    if (0 <= (int32_t)FltGetStreamContext(instance, current_thread, &stream_context))
                    {
                        requestor_process = MpGetRequestorProcess(data);
                        process_context_2 = 0;
                        if (requestor_process)
                        {
                            status = MpGetProcessContextByObject(requestor_process, &process_context);
                            if (status <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
                            {
                                current_thread = data->field_0x8;
                                instance = *(uint64_t *)(WPP_GLOBAL_Control + 0x18);
                                requestor_process_id = MpGetRequestorProcessId(data);
                                value_3 = ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)requestor_process_id & 0xffffffffULL;
                                WPP_SF_qDL(instance, 100, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), current_thread, value_3, ((uint64_t)value_6 & 0xffffffffULL) << 32 | (uint64_t)status & 0xffffffffULL);
                                value_9 = (uint32_t)((uint64_t)value_3 >> 0x20);
                            }
                            process_context_2 = process_context;
                        }
                        WdUnresolvedAtomicBegin();
                        *(*(uint32_t **)(handle_context + 0x60)) = *(*(uint32_t **)(handle_context + 0x60)) | 2;
                        WdUnresolvedAtomicEnd();
                        requestor_process = *(int64_t *)(handle_context + 0x60);
                        process_context &= 0xffffffff00000000;
                        value_5 = 0;
                        value_9 = MpScanFile(0, data, input, 5, ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)(*(uint32_t *)(requestor_process + 4)) & 0xffffffffULL, NULL, (uint64_t *)(requestor_process + 0x10), *(uint32_t *)(handle_context + 0x2c), (uint64_t *)(requestor_process + 0x38), stream_context, process_context_2, handle_context);
                        value_5 &= 0xffffffffffffff00;
                        status = HandleMpScanFileResult(&process_context, value_9, data, *(uint32_t *)(*(int64_t *)(handle_context + 0x60) + 4), process_context_2, value_5);
                        value_9 = (uint32_t)(value_5 >> 0x20);
                        if (status == 1)
                        {
                            WdUnresolvedAtomicBegin();
                            *(*(uint32_t **)(handle_context + 0x60)) = *(*(uint32_t **)(handle_context + 0x60)) | 8;
                            WdUnresolvedAtomicEnd();
                            MpSendOSCopyHintTelemetry(4);
                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                            {
                                if ((int32_t)process_context != 1)
                                {
                                    if ((int32_t)process_context != 2)
                                    {
                                        if ((int32_t)process_context != 3)
                                        {
                                            trace_argument_2 = "blocked for execution";
                                            if ((int32_t)process_context != 4)
                                            {
                                                trace_argument_2 = "unknown";
                                            }
                                        }
                                        else
                                        {
                                            trace_argument_2 = "blocked access";
                                        }
                                    }
                                    else
                                    {
                                        trace_argument_2 = "HIPS blocked for execution";
                                    }
                                }
                                else
                                {
                                    trace_argument_2 = "bad";
                                }
                                WPP_SF_qsDZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x65, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), data->field_0x8, trace_argument_2, ((uint64_t)value_9 & 0xffffffffULL) << 32 | (uint64_t)(*(uint32_t *)(stream_context + 0xa8)) & 0xffffffffULL, (int16_t *)(((int64_t *)input)[4] + 0x58));
                            }
                        }
                        if (process_context_2)
                        {
                            MpReleaseProcessContext(process_context_2);
                        }
                    }
                    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        WPP_SF_qZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 99, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), data->field_0x8, (int16_t *)(((int64_t *)input)[4] + 0x58));
                    }
                }
            }
            goto block_1;
        }
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4))
        {
            goto block_1;
        }
        current_thread = 0x61;
    }
    else
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) || !(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4))
        {
            goto block_1;
        }
        current_thread = 0x60;
    }
    WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), current_thread, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), data->field_0x8);
    block_1:
    if (input_2 && stream_context)
    {
        *input_2 = stream_context;
        stream_context = 0;
    }

    if (input_3 && handle_context)
    {
        *input_3 = handle_context;
        handle_context = 0;
    }
    if (stream_context)
    {
        FltReleaseContext();
    }
    if (handle_context)
    {
        FltReleaseContext();
    }
    return;
}

uint64_t MpValidateAndReferenceStream(WD_LAYOUT_102 *input, uint64_t *input_2, uint64_t *input_3, bool input_4)
{
    uint64_t *trace_argument_2;
    int64_t data;
    uint64_t *data_pointer;
    uint64_t value;
    bool enabled;
    *input_2 = 0;
    data = MpData;
    value = 0;
    data_pointer = input_2;
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(data + 0x2f0, (uint64_t)((uint64_t)data_pointer) & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
    data_pointer = *(uint64_t **)((uint64_t *)(MpData + 0x238));
    while (true)
    {
        if (data_pointer == (uint64_t *)(MpData + 0x238))
        {
            ExReleaseResourceLite(MpData + 0x2f0);
            KeLeaveCriticalRegion();
            return value;
        }
        trace_argument_2 = input->field_0x0;
        if (trace_argument_2 == &data_pointer[-7])
        {
            if (*(int32_t *)(&trace_argument_2[0xb]) != input->field_0x8)
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qqDD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x42, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), (uint64_t)KeGetCurrentThread(), trace_argument_2, *(int32_t *)(&trace_argument_2[0xb]), input->field_0x8);
                }
                block_1:
                *input_2 = 0;

                ExReleaseResourceLite(MpData + 0x2f0);
                return KeLeaveCriticalRegion() & 0xffffffffffffff00;
            }
            if (input_4)
            {
                WdUnresolvedAtomicBegin();
                enabled = trace_argument_2[0xc] == 0;
                if (enabled)
                {
                    trace_argument_2[0xc] = (int64_t)KeGetCurrentThread();
                }
                WdUnresolvedAtomicEnd();
                if (!enabled)
                {
                    goto block_1;
                }
            }
            ObfReferenceObject(trace_argument_2[9]);
            WdUnresolvedAtomicBegin();
            ObTotalReferences += 1;
            WdUnresolvedAtomicEnd();
            value = 1;
            *input_2 = trace_argument_2[9];
            if (input_3)
            {
                *input_3 = input->field_0x0;
                FltReferenceContext();
            }
            ExReleaseResourceLite(MpData + 0x2f0);
            KeLeaveCriticalRegion();
            return value;
        }
        data_pointer = (uint64_t *)(*data_pointer);
    }
}

uint64_t IsFileDirty(WD_LAYOUT_2 *input, int16_t input_2, void *input_3)
{
    uint64_t data;
    uint64_t value;
    uint32_t value_2;
    if (input_3 && (data = MpData, !(*(int32_t *)(MpData + 0x1004))))
    {
        value = 0;
        if (!input)
        {
            return (uint8_t)(((uint32_t *)input_3)[0xc] >> 0x14) & 1;
        }
        if (!(input->field_0xa8 & 1) && 0xfffd <= (uint16_t)(input_2 - 1U))
        {
            FltAcquirePushLockShared((int64_t)input_3 + 0xc0);
            if (((int64_t *)input_3)[0x1a])
            {
                value_2 = *(uint32_t *)(((int64_t *)input_3)[0x1a] + 0x30);
            }
            else
            {
                value_2 = ((uint32_t *)input_3)[0xc];
            }
            value = (uint8_t)(value_2 >> 0x14) & 1;
            FltReleasePushLock((int64_t)input_3 + 0xc0);
        }
    }
    else
    {
        value = data & 0xffffffffffffff00;
    }
    return value;
}

void MpCreateSection(void *input, void *input_2)
{
    uint64_t *trace_argument_2;
    uint64_t *data_pointer;
    uint64_t event_id;
    uint16_t *trace_argument_1;
    uint64_t trace_argument_1_2;
    uint64_t value;
    bool enabled;
    uint64_t value_2;
    uint16_t **wide_text;
    uint64_t *object;
    int16_t *trace_argument_2_2;
    uint32_t value_3;
    uint64_t value_4;
    uint32_t value_5;
    uint64_t value_6;
    uint32_t value_7;
    uint64_t value_8;
    int32_t trace_argument_1_3;
    int64_t context;
    int64_t data;
    int32_t trace_argument_1_4;
    char byte_value;
    uint64_t *data_pointer_2;
    uint16_t *context_2;
    void *data_pointer_3;
    context = MpData;
    value_7 = (uint32_t)((uint64_t)value_6 >> 0x20);
    value_3 = (uint32_t)((uint64_t)value_2 >> 0x20);
    value_5 = (uint32_t)((uint64_t)value_4 >> 0x20);
    trace_argument_1_3 = 0;
    trace_argument_1_2 = 0;
    value = 0;
    trace_argument_1 = NULL;
    data_pointer_3 = input_2;
    KeEnterCriticalRegion(input);
    ExAcquireResourceSharedLite(context + 0x2f0, (uint64_t)((uint64_t)data_pointer_3) & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
    data_pointer_2 = *(uint64_t **)((uint64_t *)(MpData + 0x238));
    while (true)
    {
        if (data_pointer_2 == (uint64_t *)(MpData + 0x238))
        {
            block_1:
            ExReleaseResourceLite(MpData + 0x2f0);

            KeLeaveCriticalRegion();
            block_2:
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x48, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), (uint64_t)KeGetCurrentThread());
            }

            return;
        }
        trace_argument_2 = ((uint64_t **)input)[2];
        if (trace_argument_2 == &data_pointer_2[-7])
        {
            if (*(int32_t *)(&trace_argument_2[0xb]) != ((int32_t *)input)[6])
            {
                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                {
                    WPP_SF_qqDD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x42, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), (uint64_t)KeGetCurrentThread(), trace_argument_2, ((uint64_t)value_5 & 0xffffffffULL) << 32 | (uint64_t)(*(int32_t *)(&trace_argument_2[0xb])) & 0xffffffffULL, ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)((int32_t *)input)[6] & 0xffffffffULL);
                }
                ExReleaseResourceLite(MpData + 0x2f0);
                KeLeaveCriticalRegion();
                goto block_2;
            }
            WdUnresolvedAtomicBegin();
            enabled = trace_argument_2[0xc] == 0;
            if (enabled)
            {
                trace_argument_2[0xc] = (int64_t)KeGetCurrentThread();
            }
            WdUnresolvedAtomicEnd();
            if (enabled)
            {
                ObfReferenceObject(trace_argument_2[9]);
                WdUnresolvedAtomicBegin();
                ObTotalReferences += 1;
                WdUnresolvedAtomicEnd();
                object = (uint64_t *)trace_argument_2[9];
                context = ((int64_t *)input)[2];
                FltReferenceContext(context);
                ExReleaseResourceLite(MpData + 0x2f0);
                KeLeaveCriticalRegion();
                if (*(int64_t *)(context + 0x78))
                {
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                    {
                        WPP_SF_qq(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x49, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), (uint64_t)KeGetCurrentThread(), *(int64_t *)(context + 0x78));
                    }
                    FltReleaseContext(context);
                    ObfDereferenceObject(object);
                    context = ObTotalReferences;
                    WdUnresolvedAtomicBegin();
                    ObTotalReferences -= 1;
                    WdUnresolvedAtomicEnd();
                    if (context + -1 <= -1 && *(int32_t *)(MpData + 0x364) <= -1)
                    {
                        if (!KdRefreshDebuggerNotPresent())
                        {
                            (*(WD_ROUTINE)swi(3))();
                            return;
                        }
                        KeBugCheck(1);
                    }
                }
                else
                {
                    KeEnterCriticalRegion(0);
                    if (*(uint32_t *)(*(int64_t *)(context + 8) + 0x50) & 4)
                    {
                        wide_text = &trace_argument_1;
                        trace_argument_1_4 = FltAllocateContext(*(uint64_t *)(MpData + 0x10), 0x40, 8, 1, wide_text);
                        value_3 = (uint32_t)((uint64_t)wide_text >> 0x20);
                        if (0 <= trace_argument_1_4)
                        {
                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                            {
                                WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x4b, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), trace_argument_1);
                            }
                            *trace_argument_1 = 0xda16;
                            trace_argument_1[1] = 8;
                            *(uint32_t *)(&trace_argument_1[2]) = 0;
                            byte_value = (char)(*(uint32_t *)(MpData + 0x364));
                            if (byte_value <= '\xff')
                            {
                                if (*(uint32_t *)(context + 0x30) & 0x20000)
                                {
                                    MpSuppressFileAccessTimeUpdateIfNeeded(context, object, trace_argument_1);
                                    *(uint32_t *)(context + 0x30) = *(uint32_t *)(context + 0x30) & 0xfffdffff;
                                }
                                else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                                {
                                    WPP_SF_Z(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x4c, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), &object[0xb]);
                                }
                            }
                            value_3 = 0;
                            data_pointer = object;
                            trace_argument_1_3 = (*__guard_dispatch_icall_fptr)(*(uint64_t *)(*(int64_t *)(context + 8) + 0x68), object, trace_argument_1, 5, 0, 0, ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)2 & 0xffffffffULL, 0x8000000, 0, &value, &trace_argument_1_2, (int64_t)input_2 + 0x18);
                            if (0 <= trace_argument_1_3)
                            {
                                WdUnresolvedAtomicBegin();
                                ObTotalReferences += 1;
                                WdUnresolvedAtomicEnd();
                                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                                {
                                    trace_argument_2_2 = (int16_t *)(&object[0xb]);
                                    data_pointer = NULL;
                                    WPP_SF_qZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x4e, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), trace_argument_1_2, trace_argument_2_2);
                                    value_3 = (uint32_t)((uint64_t)trace_argument_2_2 >> 0x20);
                                }
                                goto block_3;
                            }
                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                            {
                                event_id = 0x4d;
                                WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), trace_argument_1_3);
                            }
                            goto block_4;
                        }
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                        {
                            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x4a, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), trace_argument_1_4);
                        }
                    }
                    else
                    {
                        data_pointer = &trace_argument_1_2;
                        event_id = ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)5 & 0xffffffffULL;
                        trace_argument_1_3 = FsRtlCreateSectionForDataScan(&value, data_pointer, (int64_t)input_2 + 0x18, object, event_id, 0, 0, 2, 0x8000000, value_8 & 0xffffffff00000000);
                        value_3 = (uint32_t)((uint64_t)event_id >> 0x20);
                        if (0 <= trace_argument_1_3)
                        {
                            WdUnresolvedAtomicBegin();
                            ObTotalReferences += 1;
                            WdUnresolvedAtomicEnd();
                            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                            {
                                trace_argument_2_2 = (int16_t *)(&object[0xb]);
                                data_pointer = NULL;
                                WPP_SF_qZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x50, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), trace_argument_1_2, trace_argument_2_2);
                                value_3 = (uint32_t)((uint64_t)trace_argument_2_2 >> 0x20);
                            }
                            block_3:
                            data = MpData;

                            KeEnterCriticalRegion();
                            ExAcquireResourceSharedLite(data + 0x2f0, (uint64_t)((uint64_t)data_pointer) & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
                            if (*(uint64_t **)(context + 0x48) != object || *(int32_t *)(context + 0x58) != ((int32_t *)input)[6])
                            {
                                trace_argument_1_3 = -0x3fffff4b;
                                if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                                {
                                    WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x51, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), trace_argument_1_2);
                                }
                                NtClose(value);
                                ObfDereferenceObject(trace_argument_1_2);
                                data = ObTotalReferences;
                                WdUnresolvedAtomicBegin();
                                ObTotalReferences -= 1;
                                WdUnresolvedAtomicEnd();
                                if (data + -1 <= -1 && *(int32_t *)(MpData + 0x364) <= -1)
                                {
                                    if (!KdRefreshDebuggerNotPresent())
                                    {
                                        (*(WD_ROUTINE)swi(3))();
                                        return;
                                    }
                                    KeBugCheck(1);
                                }
                                if (trace_argument_1)
                                {
                                    trace_argument_1_4 = (*__guard_dispatch_icall_fptr)();
                                    if (trace_argument_1_4)
                                    {
                                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
                                        {
                                            event_id = ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)trace_argument_1_4 & 0xffffffffULL;
                                            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x52, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), trace_argument_1, event_id);
                                            value_3 = (uint32_t)((uint64_t)event_id >> 0x20);
                                        }
                                    }
                                    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                                    {
                                        WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x53, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), trace_argument_1);
                                    }
                                }
                                value = 0;
                                trace_argument_1_2 = 0;
                            }
                            else
                            {
                                *(uint64_t *)(context + 0x78) = value;
                                *(uint64_t *)(context + 0x80) = trace_argument_1_2;
                                *(uint16_t **)(context + 0x88) = trace_argument_1;
                                trace_argument_1 = NULL;
                                *(uint64_t *)(context + 0x68) = IoGetCurrentProcess();
                                *(uint64_t *)(context + 0x70) = PsGetCurrentProcessId();
                            }
                            ExReleaseResourceLite(MpData + 0x2f0);
                            KeLeaveCriticalRegion();
                        }
                        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                        {
                            event_id = 0x4f;
                            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), trace_argument_1_3);
                        }
                        block_4:
                        ((uint64_t *)input_2)[2] = value;

                        ((int32_t *)input_2)[2] = trace_argument_1_3;
                    }
                    KeLeaveCriticalRegion();
                    if (trace_argument_1)
                    {
                        context_2 = trace_argument_1;
                        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                        {
                            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x54, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), trace_argument_1, ((uint64_t)value_3 & 0xffffffffULL) << 32 | (uint64_t)trace_argument_1_3 & 0xffffffffULL);
                            context_2 = trace_argument_1;
                        }
                        FltReleaseContext(context_2);
                    }
                    FltReleaseContext(context);
                    ObfDereferenceObject(object);
                    context = ObTotalReferences;
                    WdUnresolvedAtomicBegin();
                    ObTotalReferences -= 1;
                    WdUnresolvedAtomicEnd();
                    if (context + -1 < 0 && *(int32_t *)(MpData + 0x364) <= -1)
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
            goto block_1;
        }
        data_pointer_2 = (uint64_t *)(*data_pointer_2);
    }
}

void MpSuppressFileAccessTimeUpdateIfNeeded(WD_LAYOUT_20 *input, int64_t input_2, WD_LAYOUT_107 *input_3)
{
    int32_t trace_argument_1;
    uint64_t value;
    uint64_t value_2;
    uint64_t value_3;
    int32_t value_4;
    uint16_t value_5;
    char buffer_2[8];
    char buffer_3[132];
    uint64_t value_7;
    uint64_t value_8;
    uint64_t value_9;
    uint32_t value_10;
    uint64_t value_11;
    value_10 = (uint32_t)((uint64_t)value_8 >> 0x20);
    trace_argument_1 = *(int32_t *)(input->field_0x8 + 0x78);
    if (trace_argument_1 == 0x1c)
    {
        return;
    }
    if (trace_argument_1 != 2)
    {
        if (trace_argument_1 != 0xd || *(uint32_t *)(MpData + 0x364) >> 0x12 & 1)
        {
            return;
        }
        memset(buffer_2, 0, (char *)0x94);
        value_9 = ((uint64_t)value_10 & 0xffffffffULL) << 32 | (uint64_t)5 & 0xffffffffULL;
        trace_argument_1 = FltQueryVolumeInformationFile(*(uint64_t *)(input->field_0x8 + 0x68), input_2, buffer_2, 0x94, value_9, 0);
        value_10 = (uint32_t)((uint64_t)value_9 >> 0x20);
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x44, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), trace_argument_1);
        }
        if (trace_argument_1 < 0)
        {
            return;
        }
        value_5 = 0;
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            value_10 = (uint32_t)((uint64_t)(input_2 + 0x58) >> 0x20);
            WPP_SF_SZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18));
        }
        if (value_4 != 8 || wcsncmp(buffer_3, WD_SCAN_UNRECOVERED_ADDRESS, 4) && wcsncmp(buffer_3, WD_SCAN_UNRECOVERED_ADDRESS2, 4))
        {
            return;
        }
    }
    else if ((*(uint32_t *)(MpData + 0x360) & 0x1400) != 0x400)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            WPP_SF_Z(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x43, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), (int16_t *)(input_2 + 0x58));
        }
        return;
    }
    value_7 = 0;
    value = 0;
    value_2 = 0;
    value_3 = 0;
    value_11 = 0xffffffffffffffff;
    trace_argument_1 = FltSetInformationFile(*(uint64_t *)(input->field_0x8 + 0x68), input_2, &value_7, 0x28, ((uint64_t)value_10 & 0xffffffffULL) << 32 | (uint64_t)4 & 0xffffffffULL);
    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
    {
        WPP_SF_dZ(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x46, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), trace_argument_1, (int16_t *)(input_2 + 0x58));
    }
    if (0 <= trace_argument_1)
    {
        input_3->field_0x4 = input_3->field_0x4 | 1;
    }
    return;
}

void MpFileHasMotwAds(uint64_t file_object, WD_LAYOUT_20 *input)
{
    char byte_value;
    uint32_t *result_length;
    uint32_t *data_pointer;
    uint64_t value;
    int32_t status;
    uint32_t *allocation;
    uint32_t values[2];
    uint64_t string;
    uint64_t trace_argument_1;
    uint32_t *data_pointer_2;
    uint32_t *data_pointer_3;
    values[0] = 0;
    trace_argument_1 = 0;
    data_pointer = NULL;
    string = 0;
    value = 0;
    if ((*(uint32_t *)(input->field_0x8 + 0x5c) & 0x40000 || *(int32_t *)(input->field_0x8 + 0x7c) == 0x14) && (allocation = (uint32_t *)MpAllocatePoolWithTag(1, (char *)0x10000, 0x6973504d), allocation))
    {
        result_length = values;
        data_pointer_3 = allocation;
        status = FltQueryInformationFile(*(uint64_t *)(input->field_0x8 + 0x68), file_object, allocation, 0x10000, 0x16, result_length);
        if (0 <= status)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
            {
                data_pointer_3 = &WPP_c438d926258d3bf145608300707e764d_Traceguids;
                WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x5d, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), values[0]);
            }
            if (0x20 <= values[0])
            {
                RtlInitUnicodeString(&string, L":Zone.Identifier:$DATA");
                data_pointer_2 = allocation;
                while (true)
                {
                    WdStoreField(&trace_argument_1, 0, 4, (uint64_t)(((uint64_t)(*(uint16_t *)(&data_pointer_2[1])) & 0xffffULL) << 16 | (uint64_t)(*(uint16_t *)(&data_pointer_2[1])) & 0xffffULL));
                    data_pointer = &data_pointer_2[6];
                    if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
                    {
                        data_pointer_3 = &WPP_c438d926258d3bf145608300707e764d_Traceguids;
                        result_length = (uint32_t *)((uint64_t)((uint64_t)result_length) & 0xffffffff00000000 | (uint64_t)(*data_pointer_2) & 0xffffffff);
                        WPP_SF_ZDD(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x5e, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), &trace_argument_1, data_pointer_2[1], result_length);
                    }
                    data_pointer_3 = (uint32_t *)((uint64_t)((uint64_t)data_pointer_3) & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
                    byte_value = RtlEqualUnicodeString(&trace_argument_1, &string, data_pointer_3);
                    if (byte_value || !(*data_pointer_2))
                    {
                        break;
                    }
                    data_pointer_2 = (uint32_t *)((int64_t)data_pointer_2 + (uint64_t)(*data_pointer_2));
                }
            }
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x5c, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), (uint64_t)KeGetCurrentThread(), status);
        }
        ExFreePoolWithTag(allocation, 0x6973504d);
    }
    return;
}

uint64_t HandleMpScanFileResult(uint32_t *input, int32_t input_2, WD_LAYOUT_28 *input_3, uint64_t input_4, void *input_5, char input_6)
{
    uint32_t value;
    uint32_t value_2;
    int16_t *trace_argument_1 = NULL;
    uint64_t value_3;
    if (input)
    {
        *input = 0;
    }
    value_3 = 1;
    if (input_2 != 7)
    {
        if (2 <= (uint32_t)(input_2 - 5U) && input_2 != 0x10)
        {
            return 2;
        }
    }
    else
    {
        if (input_6 && !(input_4 & 0x20))
        {
            return 0;
        }
        if (*(char *)(MpData + 0xfa8))
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return 0;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2))
            {
                return 0;
            }
            if (input_5)
            {
                trace_argument_1 = ((int16_t **)input_5)[0x10];
            }
            WPP_SF_Z(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x5f, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), trace_argument_1);
            return 0;
        }
    }
    if (input_2 != 5)
    {
        if (input_2 != 6)
        {
            if (input_2 != 7)
            {
                value_2 = 1;
                value = (-(uint32_t)((*(uint32_t *)(MpData + 0x360) & 4) != 0) & 0x8e4) + WD_STATUS_ACCESS_DENIED;
            }
            else
            {
                value_2 = 4;
                value = MpGetProcessBlockExecStatus(input_5);
            }
            goto block_1;
        }
        value_2 = 2;
    }
    else
    {
        value_2 = 3;
    }
    value = WD_STATUS_ACCESS_DENIED;
    block_1:
    input_3->field_0x20 = trace_argument_1;

    input_3->field_0x18 = value;
    if (input)
    {
        *input = value_2;
    }
    return value_3 & 0xffffffff;
}

void MpIsEmptySparseFile(void *input)
{
    int64_t file_object;
    uint64_t value;
    int64_t value_3;
    int32_t trace_argument_1;
    int64_t value_4;
    int32_t values[2];
    uint64_t value_5;
    uint64_t value_6;
    uint64_t value_7;
    file_object = ((int64_t *)input)[4];
    values[0] = 0;
    value_3 = ((int64_t *)input)[3];
    value_6 = 0;
    value_7 = 0;
    value_4 = 0;
    if ((int32_t)MpGetFileCompressedFileSize(value_3, file_object, &value_4) < 0)
    {
        value_5 = WdAsyncnotificationStorage;
        value = WdAsyncnotificationStorage2;
        trace_argument_1 = FltFsControlFile(((uint64_t *)input)[3], ((uint64_t *)input)[4], 0x940cf, &value_5, 0x10, &value_6, 0x10, values);
        if (trace_argument_1 < 0 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x5b, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), trace_argument_1);
        }
    }
    return;
}

int32_t MpPersistFilterHealthInformation(void *input)
{
    int32_t value;
    int64_t value_2;
    uint64_t value_3;
    uint32_t value_4;
    value_4 = (uint32_t)((uint64_t)value_3 >> 0x20);
    if (!input)
    {
        return -0x3ffffff3;
    }
    if (!((char *)input)[4])
    {
        return 0;
    }
    value_2 = FltAllocateGenericWorkItem();
    if (value_2)
    {
        value_4 = 0;
        value = FltQueueGenericWorkItem(value_2, *(uint64_t *)(MpData + 0x10), PersistFilterPanicInfoWorker, 1, 0);
        if (value <= -1)
        {
            if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
            {
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x6b, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)value & 0xffffffffULL);
            }
            FltFreeGenericWorkItem(value_2);
        }
        return value;
    }
    if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
    {
        return -0x3fffff66;
    }
    if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
    {
        return -0x3fffff66;
    }
    WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x6a, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_4 & 0xffffffffULL) << 32 | (uint64_t)WD_STATUS_INSUFFICIENT_RESOURCES & 0xffffffffULL);
    return -0x3fffff66;
}

int32_t MpSendAsyncPanicModeMessage(uint32_t input, WD_UNICODE_STRING_VALUE *input_2, char input_3, char input_4, uint32_t input_5)
{
    uint16_t value;
    uint16_t *wide_text;
    int64_t value_2;
    uint32_t value_3;
    uint16_t *wide_text_2;
    int32_t value_4;
    uint16_t *wide_text_3;
    uint32_t value_5;
    uint64_t value_6;
    uint32_t value_7;
    int64_t data;
    int64_t process_id;
    int64_t value_8;
    int32_t trace_argument_1;
    int32_t trace_argument_1_2;
    uint32_t value_9;
    uint16_t *wide_text_4;
    uint16_t *wide_text_5;
    uint16_t *string;
    value_7 = (uint32_t)((uint64_t)value_6 >> 0x20);
    string = NULL;
    value_2 = 0;
    process_id = 0;
    value_5 = 0;
    wide_text = NULL;
    value_9 = 0x58;
    wide_text_3 = NULL;
    wide_text_4 = string;
    wide_text_2 = string;
    if (input_2)
    {
        wide_text_4 = NULL;
        wide_text_2 = NULL;
        if (input_2->Buffer)
        {
            value = input_2->Length;
            wide_text_4 = string;
            wide_text_2 = string;
            if (value)
            {
                value_9 = value + 0x5a;
                wide_text_2 = (uint16_t *)0x58;
                wide_text_4 = (uint16_t *)((uint64_t)(value + 2));
            }
        }
    }
    trace_argument_1_2 = (int32_t)wide_text_4;
    value_3 = (uint32_t)((uint64_t)wide_text_2 >> 0 * 8);
    if (!input_3)
    {
        wide_text_5 = string;
        if (!input_4)
        {
            goto block_1;
        }
    }
    process_id = PsGetCurrentProcessId();
    trace_argument_1 = MpGetProcessName(process_id, &wide_text);
    if (trace_argument_1 <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x57, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), trace_argument_1);
    }
    string = wide_text;
    wide_text_5 = wide_text_3;
    if (wide_text && *(int64_t *)(&wide_text[4]) && (value = *wide_text, value))
    {
        wide_text_5 = (uint16_t *)((uint64_t)(value + 2));
        value_9 = value_9 + 2 + (uint32_t)value;
        value_5 = trace_argument_1_2 + 0x58;
    }
    block_1:
    value_4 = (int32_t)wide_text_5;

    wide_text_3 = (uint16_t *)((uint64_t)value_9);
    trace_argument_1 = MpAsyncCreateNotification(&value_2, wide_text_3);
    value_8 = value_2;
    if (0 <= trace_argument_1)
    {
        if (trace_argument_1_2)
        {
            trace_argument_1 = RtlStringCbCopyUnicodeString((uint16_t *)((int64_t)wide_text_2 + value_2), wide_text_4, input_2);
            wide_text_3 = wide_text_4;
            if (trace_argument_1 <= -1)
            {
                trace_argument_1_2 = 0;
                value_3 = 0;
            }
        }
        if (value_4)
        {
            trace_argument_1 = RtlStringCbCopyUnicodeString((uint16_t *)(value_8 + (uint64_t)value_5), wide_text_5, string);
            wide_text_3 = wide_text_5;
            if (trace_argument_1 <= -1)
            {
                value_4 = 0;
                value_5 = 0;
            }
        }
        *(uint64_t *)(value_8 + 0x20) = WdSharedSystemTime;
        *(uint32_t *)(value_8 + 0x18) = input;
        *(char *)(value_8 + 0x1c) = input_3;
        *(char *)(value_8 + 0x1d) = input_4;
        *(uint32_t *)(value_8 + 0x3c) = input_5;
        data = MpData;
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(data + 0x2f0, (uint64_t)((uint64_t)wide_text_3) & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
        *(uint32_t *)(value_8 + 0x40) = *(uint32_t *)(MpData + 0x260);
        *(uint32_t *)(value_8 + 0x44) = *(uint32_t *)(MpData + 0x264);
        *(uint32_t *)(value_8 + 0x48) = *(uint32_t *)(MpData + 0x268);
        *(uint32_t *)(value_8 + 0x4c) = *(uint32_t *)(MpData + 0x26c);
        *(uint32_t *)(value_8 + 0x50) = *(uint32_t *)(MpData + 0xe0);
        *(uint32_t *)(value_8 + 0x54) = *(uint32_t *)(MpData + 0xdc);
        ExReleaseResourceLite(MpData + 0x2f0);
        KeLeaveCriticalRegion();
        if (input_3 || input_4)
        {
            *(uint32_t *)(value_8 + 0x30) = value_3;
            *(int32_t *)(value_8 + 0x2c) = trace_argument_1_2;
            *(int32_t *)(value_8 + 0x28) = (int32_t)process_id;
            *(uint32_t *)(value_8 + 0x38) = value_5;
            *(int32_t *)(value_8 + 0x34) = value_4;
        }
        *(uint32_t *)(value_8 + 8) = value_9;
        *(uint32_t *)(value_8 + 0x10) = 0xb;
        trace_argument_1_2 = MpPersistFilterHealthInformation((void *)(value_8 + 0x18));
        if (trace_argument_1_2 <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 2)
        {
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x58, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), trace_argument_1_2);
        }
        value_7 = 0;
        trace_argument_1 = MpAsyncSendNotification(value_8, value_9, input_3 != '\0', 1, NULL);
        if (0 <= trace_argument_1)
        {
            WdAtomicExchange32((volatile int32_t *)((uint32_t *)(MpData + 0x264)), 0);
            WdAtomicExchange32((volatile int32_t *)((uint32_t *)(MpData + 0x268)), 0);
            WdAtomicExchange32((volatile int32_t *)((uint32_t *)(MpData + 0x26c)), 0);
        }
        else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x59, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)trace_argument_1 & 0xffffffffULL);
        }
        MpAsyncDereferenceNotification(value_8);
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x5a, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), (uint64_t)KeGetCurrentThread(), ((uint64_t)value_7 & 0xffffffffULL) << 32 | (uint64_t)trace_argument_1 & 0xffffffffULL);
    }
    if (string)
    {
        MpFreeString(string);
    }
    return trace_argument_1;
}

void PersistFilterPanicInfoWorker(uint64_t input)
{
    int64_t allocation;
    char byte_value;
    int32_t value;
    char buffer[32];
    int64_t values[9];
    int64_t *destination_string;
    int64_t *data_pointer;
    values[7] = __security_cookie ^ (uint64_t)buffer;
    values[0] = 0;
    destination_string = NULL;
    values[1] = 0;
    values[2] = 0;
    values[3] = 0;
    values[4] = 0;
    values[5] = 0;
    values[6] = 0;
    RtlInitUnicodeString(&values[1], L"PassThrough");
    RtlInitUnicodeString(&values[3], L"HealthStatus");
    RtlInitUnicodeString(&values[5], WD_EXCLUDEPROCESS_UNRECOVERED_ADDRESS);
    data_pointer = &values[5];
    value = MpQueryRegString(*(int64_t *)(MpData + 0xfb0), &values[3], &destination_string);
    if (0 <= value)
    {
        byte_value = RtlPrefixUnicodeString(&values[1], destination_string, 0);
        if (byte_value)
        {
            goto block_1;
        }
        data_pointer = destination_string;
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
    {
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x6c, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), (uint64_t)KeGetCurrentThread(), value);
    }
    value = MpAppendUnicodeStringToUnicodeString(&values[1], data_pointer, values, 0x6d50504d);
    allocation = values[0];
    if (0 <= value)
    {
        value = MpSetValueKeyString(*(int64_t *)(MpData + 0xfb0), &values[3], values[0]);
        if (value <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x6e, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), (uint64_t)KeGetCurrentThread(), value);
        }
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x6d, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), (uint64_t)KeGetCurrentThread(), value);
    }
    if (allocation)
    {
        MpFreeWithTag(allocation, 0x6d50504d);
    }
    block_1:
    if (destination_string)
    {
        MpFreeString(destination_string);
    }

    FltFreeGenericWorkItem(input);
    __security_check_cookie(values[7] ^ (uint64_t)buffer);
    return;
}

void SwitchToPanicMode(uint32_t input, WD_UNICODE_STRING_VALUE *input_2, uint32_t input_3, uint64_t input_4)
{
    int32_t trace_argument_1;
    uint64_t value;
    uint64_t value_2;
    uint64_t current_thread;
    current_thread = (uint64_t)input_4 & 0xffffffffffffff00 | (uint64_t)(*(char *)(MpData + 0xd0)) & 0xff;
    if (!(*(char *)(MpData + 0xd0)))
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            current_thread = (uint64_t)KeGetCurrentThread();
            WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x66, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), current_thread, WdDataStorage5 / 1000);
        }
        value = (uint64_t)WdDataStorage5;
        *(char *)(MpData + 0xd0) = 1;
        *(int32_t *)(MpData + 0xd4) = *(int32_t *)(MpData + 0xd4) + 1;
        KeCancelTimer(MpData + 0x2b0);
        KeRemoveQueueDpc(MpData + 0x270);
        value_2 = MpData + 0x270;
        KeSetTimer(MpData + 0x2b0, value * -10000, value_2);
        trace_argument_1 = MpSendAsyncPanicModeMessage(input, input_2, (uint64_t)value_2 & 0xffffffffffffff00 | (uint64_t)1 & 0xff, (uint64_t)current_thread & 0xffffffffffffff00 | (uint64_t)1 & 0xff, input_3);
        if (trace_argument_1 <= -1 && WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_D(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x67, WD_SYMBOL_ADDRESS(WPP_c438d926258d3bf145608300707e764d_Traceguids), trace_argument_1);
        }
    }
    return;
}

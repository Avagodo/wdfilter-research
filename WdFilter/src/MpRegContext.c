#include "wdfilter.h"

void MpRegpFreeCallContext(int64_t input)
{
    if (input)
    {
        (*__guard_dispatch_icall_fptr)();
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 10, WD_SYMBOL_ADDRESS(WPP_719ad12d355730323d35d55ae991b011_Traceguids), (uint64_t)KeGetCurrentThread());
        return;
    }
    return;
}

void MpRegpAllocDeleteKeyContext(void)
{
    uint64_t *data_pointer;
    data_pointer = (uint64_t *)ExAllocateFromPagedLookasideList((void *)(MpRegData + 0x300));
    if (!data_pointer)
    {
        return;
    }
    *data_pointer = 0x38da11;
    data_pointer[2] = 0;
    data_pointer[3] = 0;
    data_pointer[4] = 0;
    data_pointer[1] = MpRegpFreeDeleteKeyContext;
    data_pointer[5] = 0;
    data_pointer[6] = 0;
    return;
}

WD_LAYOUT_94 *MpRegpAllocDeleteValueContext(void)
{
    WD_LAYOUT_94 *buffer;
    buffer = (WD_LAYOUT_94 *)ExAllocateFromPagedLookasideList((void *)(MpRegData + 0x280));
    if (buffer)
    {
        memset(buffer, 0, (char *)0x50);
        buffer->field_0x0 = 0x50da0d;
        buffer->field_0x8 = MpRegpFreeDeleteValueContext;
    }
    return buffer;
}

WD_LAYOUT_94 *MpRegpAllocSetValueContext(void)
{
    WD_LAYOUT_94 *buffer;
    buffer = (WD_LAYOUT_94 *)ExAllocateFromPagedLookasideList((void *)(MpRegData + 0x200));
    if (buffer)
    {
        memset(buffer, 0, (char *)0x50);
        buffer->field_0x0 = 0x50da0c;
        buffer->field_0x8 = MpRegpFreeSetValueContext;
    }
    return buffer;
}

void MpRegpAllocCreateKeyContext(void)
{
    WD_LAYOUT_84 *record;
    record = (WD_LAYOUT_84 *)ExAllocateFromPagedLookasideList((void *)(MpRegData + 0x180));
    if (!record)
    {
        return;
    }
    record->field_0x0 = 0x40da0b;
    record->field_0x8 = MpRegpFreeCreateKeyContext;
    record->field_0x28 = 0;
    record->field_0x30 = 0;
    record->field_0x38 = 0;
    return;
}

void MpRegpFreeSetValueContext(void *input)
{
    int64_t allocation;
    if (!input)
    {
        return;
    }
    allocation = ((int64_t *)input)[5];
    if (allocation)
    {
        if (*(int64_t *)(MpRegData + 0x28))
        {
            (*__guard_dispatch_icall_fptr)(allocation);
        }
        else
        {
            if (*(int64_t *)(allocation + 0x10))
            {
                ExFreePoolWithTag(*(int64_t *)(allocation + 0x10), 0x4b72504d);
            }
            ExFreeToPagedLookasideList((void *)(MpRegData + 0x400), allocation);
        }
        ((uint64_t *)input)[5] = 0;
    }
    if (((int64_t *)input)[6])
    {
        ExFreePoolWithTag(((int64_t *)input)[6], 0x5672504d);
        ((uint64_t *)input)[6] = 0;
    }
    allocation = ((int64_t *)input)[8];
    if (allocation)
    {
        if (*(int64_t *)(allocation + 8))
        {
            ExFreePoolWithTag(*(int64_t *)(allocation + 8), 0x496d504d);
        }
        ExFreePoolWithTag(allocation, 0x496d504d);
        ((uint64_t *)input)[8] = 0;
    }
    ExFreeToPagedLookasideList((void *)(MpRegData + 0x200), input);
    return;
}

void MpRegpFreeDeleteValueContext(void *input)
{
    int64_t allocation;
    if (!input)
    {
        return;
    }
    allocation = ((int64_t *)input)[5];
    if (allocation)
    {
        if (*(int64_t *)(MpRegData + 0x28))
        {
            (*__guard_dispatch_icall_fptr)(allocation);
        }
        else
        {
            if (*(int64_t *)(allocation + 0x10))
            {
                ExFreePoolWithTag(*(int64_t *)(allocation + 0x10), 0x4b72504d);
            }
            ExFreeToPagedLookasideList((void *)(MpRegData + 0x400), allocation);
        }
        ((uint64_t *)input)[5] = 0;
    }
    if (((int64_t *)input)[6])
    {
        ExFreePoolWithTag(((int64_t *)input)[6], 0x5364504d);
        ((uint64_t *)input)[6] = 0;
    }
    if (((int64_t *)input)[7])
    {
        ExFreePoolWithTag(((int64_t *)input)[7], 0x5672504d);
        ((uint64_t *)input)[7] = 0;
    }
    allocation = ((int64_t *)input)[8];
    if (allocation)
    {
        if (*(int64_t *)(allocation + 8))
        {
            ExFreePoolWithTag(*(int64_t *)(allocation + 8), 0x496d504d);
        }
        ExFreePoolWithTag(allocation, 0x496d504d);
        ((uint64_t *)input)[8] = 0;
    }
    ExFreeToPagedLookasideList((void *)(MpRegData + 0x280), input);
    return;
}

void MpRegpFreeDeleteKeyContext(void *input)
{
    int64_t allocation;
    if (!input)
    {
        return;
    }
    allocation = ((int64_t *)input)[5];
    if (allocation)
    {
        if (*(int64_t *)(MpRegData + 0x28))
        {
            (*__guard_dispatch_icall_fptr)(allocation);
        }
        else
        {
            if (*(int64_t *)(allocation + 0x10))
            {
                ExFreePoolWithTag(*(int64_t *)(allocation + 0x10), 0x4b72504d);
            }
            ExFreeToPagedLookasideList((void *)(MpRegData + 0x400), allocation);
        }
        ((uint64_t *)input)[5] = 0;
    }
    allocation = ((int64_t *)input)[6];
    if (allocation)
    {
        if (*(int64_t *)(allocation + 8))
        {
            ExFreePoolWithTag(*(int64_t *)(allocation + 8), 0x496d504d);
        }
        ExFreePoolWithTag(allocation, 0x496d504d);
        ((uint64_t *)input)[6] = 0;
    }
    ExFreeToPagedLookasideList((void *)(MpRegData + 0x300), input);
    return;
}

void MpRegpFreeCreateKeyContext(void *input)
{
    int64_t allocation;
    if (!input)
    {
        return;
    }
    if (((int64_t *)input)[5])
    {
        ExFreePoolWithTag(((int64_t *)input)[5], 0x5364504d);
        ((uint64_t *)input)[5] = 0;
    }
    allocation = ((int64_t *)input)[6];
    if (allocation)
    {
        if (*(int64_t *)(allocation + 8))
        {
            ExFreePoolWithTag(*(int64_t *)(allocation + 8), 0x496d504d);
        }
        ExFreePoolWithTag(allocation, 0x496d504d);
        ((uint64_t *)input)[6] = 0;
    }
    ExFreeToPagedLookasideList((void *)(MpRegData + 0x180), input);
    return;
}

void MpRegpFreeSetKeySecurityContext(void *input)
{
    int64_t allocation;
    if (!input)
    {
        return;
    }
    allocation = ((int64_t *)input)[5];
    if (allocation)
    {
        if (*(int64_t *)(MpRegData + 0x28))
        {
            (*__guard_dispatch_icall_fptr)(allocation);
        }
        else
        {
            if (*(int64_t *)(allocation + 0x10))
            {
                ExFreePoolWithTag(*(int64_t *)(allocation + 0x10), 0x4b72504d);
            }
            ExFreeToPagedLookasideList((void *)(MpRegData + 0x400), allocation);
        }
        ((uint64_t *)input)[5] = 0;
    }
    allocation = ((int64_t *)input)[6];
    if (allocation)
    {
        if (*(int64_t *)(allocation + 8))
        {
            ExFreePoolWithTag(*(int64_t *)(allocation + 8), 0x496d504d);
        }
        ExFreePoolWithTag(allocation, 0x496d504d);
        ((uint64_t *)input)[6] = 0;
    }
    ExFreeToPagedLookasideList((void *)(MpRegData + 0x300), input);
    return;
}

void MpRegpAllocRenameKeyContext(void)
{
    uint64_t *data_pointer;
    data_pointer = (uint64_t *)ExAllocateFromPagedLookasideList((void *)(MpRegData + 0x480));
    if (!data_pointer)
    {
        return;
    }
    *data_pointer = 0x40da19;
    data_pointer[2] = 0;
    data_pointer[3] = 0;
    data_pointer[4] = 0;
    data_pointer[1] = MpRegpFreeRenameKeyContext;
    data_pointer[5] = 0;
    data_pointer[6] = 0;
    data_pointer[7] = 0;
    return;
}

void MpRegpAllocSetKeySecurityContext(void)
{
    uint64_t *data_pointer;
    data_pointer = (uint64_t *)ExAllocateFromPagedLookasideList((void *)(MpRegData + 0x300));
    if (!data_pointer)
    {
        return;
    }
    *data_pointer = 0x38da22;
    data_pointer[2] = 0;
    data_pointer[3] = 0;
    data_pointer[4] = 0;
    data_pointer[1] = MpRegpFreeSetKeySecurityContext;
    data_pointer[5] = 0;
    data_pointer[6] = 0;
    return;
}

void MpRegpFreeAllCallContextsUnsafe(void)
{
    int64_t *data_pointer;
    int64_t value;
    int64_t *data_pointer_2;
    while (true)
    {
        data_pointer_2 = (int64_t *)(MpRegData + 0x160);
        data_pointer = (int64_t *)(*data_pointer_2);
        if (data_pointer == data_pointer_2)
        {
            return;
        }
        if ((int64_t *)data_pointer[1] != data_pointer_2 || (value = *data_pointer, (int64_t *)(*(int64_t *)(value + 8)) != data_pointer))
        {
            break;
        }
        *data_pointer_2 = value;
        *(int64_t **)(value + 8) = data_pointer_2;
        if (&data_pointer[-2])
        {
            MpRegpFreeCallContext(&data_pointer[-2]);
        }
    }

    (*(WD_ROUTINE)swi(0x29))(3);
}

void MpRegpFreeRenameKeyContext(void *input)
{
    int64_t allocation;
    if (!input)
    {
        return;
    }
    allocation = ((int64_t *)input)[5];
    if (allocation)
    {
        if (*(int64_t *)(MpRegData + 0x28))
        {
            (*__guard_dispatch_icall_fptr)(allocation);
        }
        else
        {
            if (*(int64_t *)(allocation + 0x10))
            {
                ExFreePoolWithTag(*(int64_t *)(allocation + 0x10), 0x4b72504d);
            }
            ExFreeToPagedLookasideList((void *)(MpRegData + 0x400), allocation);
        }
        ((uint64_t *)input)[5] = 0;
    }
    if (((int64_t *)input)[6])
    {
        ExFreePoolWithTag(((int64_t *)input)[6], 0x4b72504d);
        ((uint64_t *)input)[6] = 0;
    }
    allocation = ((int64_t *)input)[7];
    if (allocation)
    {
        if (*(int64_t *)(allocation + 8))
        {
            ExFreePoolWithTag(*(int64_t *)(allocation + 8), 0x496d504d);
        }
        ExFreePoolWithTag(allocation, 0x496d504d);
        ((uint64_t *)input)[7] = 0;
    }
    ExFreeToPagedLookasideList((void *)(MpRegData + 0x480), input);
    return;
}

#include "wdfilter.h"

void MpHashDataBuffer(int64_t buffer, int32_t size, uint32_t *hash)
{
    uint16_t value;
    int64_t hash_lib_data;
    uint32_t value_2;
    uint64_t value_3;
    bool enabled;
    int32_t value_4;
    int64_t list_entry;
    char buffer_2[32];
    int64_t values[6];
    int64_t value_5;
    values[5] = __security_cookie ^ (uint64_t)buffer_2;
    values[0] = 0;
    enabled = 0;
    values[3] = 0;
    values[4] = 0;
    values[1] = 0;
    values[2] = 0;
    if (buffer && hash && size && (MpHashLibInitIfNeeded(), hash_lib_data = MpHashLibData, MpHashLibData && *(char *)(MpHashLibData + 0x18)))
    {
        *(int32_t *)(MpHashLibData + 0x34) = *(int32_t *)(MpHashLibData + 0x34) + 1;
        list_entry = ExpInterlockedPopEntrySList(hash_lib_data + 0x20);
        if (!list_entry)
        {
            *(int32_t *)(hash_lib_data + 0x38) = *(int32_t *)(hash_lib_data + 0x38) + 1;
            list_entry = (*__guard_dispatch_icall_fptr)(*(uint32_t *)(hash_lib_data + 0x44), *(uint32_t *)(hash_lib_data + 0x4c), *(uint32_t *)(hash_lib_data + 0x48), hash_lib_data + 0x20);
            if (!list_entry)
            {
                __security_check_cookie(values[5] ^ (uint64_t)buffer_2);
                return;
            }
        }
        value_2 = *(uint32_t *)(MpHashLibData + 0x10);
        value_3 = *(uint64_t *)(MpHashLibData + 8);
        hash_lib_data = list_entry;
        if (0 <= (int32_t)BCryptCreateHash(value_3, values, list_entry, value_2, 0, 0, 0))
        {
            RtlInitUnicodeString(&values[3], buffer);
            if (0 <= (int32_t)RtlUpcaseUnicodeString(&values[1], &values[3], (uint64_t)hash_lib_data & 0xffffffffffffff00 | (uint64_t)1 & 0xff))
            {
                enabled = 1;
                value_4 = BCryptHashData(values[0], values[2], size, 0);
                if (0 <= value_4)
                {
                    *(uint64_t *)(&hash[1]) = 0;
                    *(uint64_t *)(&hash[3]) = 0;
                    *(uint64_t *)(&hash[5]) = 0;
                    *(uint64_t *)(&hash[7]) = 0;
                    value_4 = BCryptFinishHash(values[0], &hash[1], *(uint32_t *)(MpHashLibData + 0x14), 0);
                    if (0 <= value_4)
                    {
                        *hash = *(uint32_t *)(MpHashLibData + 0x14);
                    }
                }
            }
        }
        if (values[0])
        {
            BCryptDestroyHash();
        }
        hash_lib_data = MpHashLibData;
        if (list_entry)
        {
            *(int32_t *)(MpHashLibData + 0x3c) = *(int32_t *)(MpHashLibData + 0x3c) + 1;
            value_5 = hash_lib_data + 0x20;
            value = *(uint16_t *)(hash_lib_data + 0x30);
            if (value <= (uint16_t)ExQueryDepthSList(value_5))
            {
                *(int32_t *)(hash_lib_data + 0x40) = *(int32_t *)(hash_lib_data + 0x40) + 1;
                (*__guard_dispatch_icall_fptr)(list_entry, value_5);
            }
            else
            {
                ExpInterlockedPushEntrySList(value_5, list_entry);
            }
        }
        if (enabled)
        {
            RtlFreeUnicodeString(&values[1]);
        }
    }
    __security_check_cookie(values[5] ^ (uint64_t)buffer_2);
    return;
}

void MpHashLibInitIfNeeded(void)
{
    uint64_t *data_pointer;
    uint32_t *data_pointer_2;
    uint64_t value;
    uint32_t *data_pointer_3;
    uint64_t value_3;
    int32_t value_4;
    uint32_t *allocation;
    uint64_t value_5;
    uint32_t values[2];
    bool enabled;
    WdUnresolvedAtomicBegin();
    enabled = MpHashLibData == NULL;
    if (enabled)
    {
        MpHashLibData = NULL;
    }
    WdUnresolvedAtomicEnd();
    if (enabled)
    {
        values[0] = 0;
        allocation = (uint32_t *)MpAllocatePoolWithTag(ExDefaultNonPagedPoolType, (char *)0x90, 0x6864504d);
        if (allocation)
        {
            data_pointer = (uint64_t *)(&allocation[2]);
            *allocation = 0x90da24;
            if (0 <= (int32_t)BCryptOpenAlgorithmProvider(data_pointer, L"SHA256", 0, 0))
            {
                data_pointer_2 = values;
                data_pointer_3 = &allocation[4];
                value_4 = BCryptGetProperty(*data_pointer, L"ObjectLength", data_pointer_3, 4, data_pointer_2, value & 0xffffffff00000000);
                if (0 <= value_4)
                {
                    value_5 = *data_pointer_3;
                    value_4 = ExInitializeLookasideListEx(&allocation[8], 0, 0, 1, (uint64_t)data_pointer_2 & 0xffffffff00000000, value_5, 0x6868504d, 0);
                    if (0 <= value_4)
                    {
                        value_3 = *data_pointer;
                        allocation[0x20] = *data_pointer_3;
                        if (0 <= (int32_t)BCryptGetProperty(value_3, L"HashDigestLength", &allocation[5], 4, values, value_5 & 0xffffffff00000000) && (uint32_t)allocation[5] <= 0x20)
                        {
                            *(char *)(&allocation[6]) = 1;
                            WdUnresolvedAtomicBegin();
                            enabled = MpHashLibData == NULL;
                            if (enabled)
                            {
                                MpHashLibData = allocation;
                            }
                            WdUnresolvedAtomicEnd();
                            if (enabled)
                            {
                                return;
                            }
                        }
                    }
                }
            }
            MpHashLibReleaseImpl(allocation);
        }
    }
    return;
}

void MpHashLibRelease(void)
{
    MpHashLibReleaseImpl(MpHashLibData);
    return;
}

void MpHashLibReleaseImpl(void *allocation)
{
    if (!allocation)
    {
        return;
    }
    if (((int64_t *)allocation)[1])
    {
        BCryptCloseAlgorithmProvider(((int64_t *)allocation)[1], 0);
    }
    if (((int32_t *)allocation)[0x20])
    {
        ExDeleteLookasideListEx((int64_t)allocation + 0x20);
    }
    ExFreePoolWithTag(allocation, 0x6864504d);
    return;
}

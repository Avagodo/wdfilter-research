#include "wdfilter.h"

uint64_t MpPowerStatusCallback(int32_t *input, int32_t *input_2, int32_t input_3)
{
    int64_t data;
    uint64_t event_id;
    data = MpData;
    if (!input_2)
    {
        return 0;
    }
    if (input_3 != 4)
    {
        return 0;
    }
    if (*input != -0x1edcc66d)
    {
        return 0;
    }
    if (input[1] == WdAsyncnotificationStorage4)
    {
        if (input[2] != WdAsyncnotificationStorage5)
        {
            return 0;
        }
        if (input[3] != WdAsyncnotificationStorage6)
        {
            return 0;
        }
        if (*input_2)
        {
            if (*input_2 != 1)
            {
                return 0;
            }
            KeEnterCriticalRegion();
            ExAcquireResourceExclusiveLite(data + 0x2f0, (uint64_t)((uint64_t)input_2) & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
            *(char *)(MpData + 0x9a0) = 1;
            *(uint64_t *)(MpData + 0x9a8) = 0;
            ExReleaseResourceLite(MpData + 0x2f0);
            KeLeaveCriticalRegion();
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return 0;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4))
            {
                return 0;
            }
            event_id = 0xb;
        }
        else
        {
            KeEnterCriticalRegion();
            ExAcquireResourceExclusiveLite(data + 0x2f0, (uint64_t)((uint64_t)input_2) & 0xffffffffffffff00 | (uint64_t)1 & 0xff);
            *(uint64_t *)(MpData + 0x9a8) = WdSharedSystemTime;
            ExReleaseResourceLite(MpData + 0x2f0);
            KeLeaveCriticalRegion();
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return 0;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4))
            {
                return 0;
            }
            event_id = 10;
        }
        WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_38c012aa56173da8e26793d60907d04c_Traceguids), (uint64_t)KeGetCurrentThread());
        return 0;
    }
    return 0;
}

void MpPowerStatusUninitialize(int64_t input)
{
    int32_t value;
    int64_t w_p_p__g_l_o_b_a_l__control;
    uint64_t event_id;
    w_p_p__g_l_o_b_a_l__control = WPP_GLOBAL_Control;
    if (input)
    {
        if (*(uint32_t *)(MpData + 0x360) & 4)
        {
            value = PoUnregisterPowerSettingCallback(input);
            if (value <= -1)
            {
                if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
                {
                    return;
                }
                if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1))
                {
                    return;
                }
                WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0x11, WD_SYMBOL_ADDRESS(WPP_38c012aa56173da8e26793d60907d04c_Traceguids), (uint64_t)KeGetCurrentThread(), value);
                return;
            }
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4))
            {
                return;
            }
            event_id = 0x12;
            w_p_p__g_l_o_b_a_l__control = WPP_GLOBAL_Control;
        }
        else
        {
            if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
            {
                return;
            }
            if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4))
            {
                return;
            }
            event_id = 0x10;
        }
    }
    else
    {
        if (WPP_GLOBAL_Control == WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control))
        {
            return;
        }
        if (!(*(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4))
        {
            return;
        }
        event_id = 0xf;
    }
    WPP_SF_(*(uint64_t *)(w_p_p__g_l_o_b_a_l__control + 0x18), event_id, WD_SYMBOL_ADDRESS(WPP_38c012aa56173da8e26793d60907d04c_Traceguids));
    return;
}

int32_t MpPowerStatusInitialize(uint64_t *input)
{
    int32_t value;
    *input = 0;
    *(char *)(MpData + 0x9a0) = 0;
    if (!(*(uint32_t *)(MpData + 0x360) & 4))
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xc, WD_SYMBOL_ADDRESS(WPP_38c012aa56173da8e26793d60907d04c_Traceguids));
        }
        return 0;
    }
    value = PoRegisterPowerSettingCallback(0, WD_SYMBOL_ADDRESS(GUID_LOW_POWER_EPOCH), MpPowerStatusCallback, 0, input);
    if (0 <= value)
    {
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 4)
        {
            WPP_SF_(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xe, WD_SYMBOL_ADDRESS(WPP_38c012aa56173da8e26793d60907d04c_Traceguids));
        }
    }
    else if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
    {
        WPP_SF_qL(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 0xd, WD_SYMBOL_ADDRESS(WPP_38c012aa56173da8e26793d60907d04c_Traceguids), (uint64_t)KeGetCurrentThread(), (uint64_t)((uint64_t)input) & 0xffffffff00000000 | (uint64_t)value & 0xffffffff);
    }
    return value;
}

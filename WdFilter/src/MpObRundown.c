#include "wdfilter.h"

void MpFltCreateFileEx2(void)
{
    if ((int32_t)FltCreateFileEx2() <= -1)
    {
        return;
    }
    WdUnresolvedAtomicBegin();
    ObTotalReferences += 1;
    WdUnresolvedAtomicEnd();
    return;
}

void MpFltCreateFileEx(void)
{
    if ((int32_t)FltCreateFileEx() <= -1)
    {
        return;
    }
    WdUnresolvedAtomicBegin();
    ObTotalReferences += 1;
    WdUnresolvedAtomicEnd();
    return;
}

void MpReferenceObjectByHandle(void)
{
    if ((int32_t)ObReferenceObjectByHandle() <= -1)
    {
        return;
    }
    WdUnresolvedAtomicBegin();
    ObTotalReferences += 1;
    WdUnresolvedAtomicEnd();
    return;
}

void MpObRundownRelease(void)
{
    int64_t trace_argument_1 = 0;
    bool enabled;
    WdUnresolvedAtomicBegin();
    enabled = ObTotalReferences == 0;
    if (enabled)
    {
        ObTotalReferences = 0;
    }
    else
    {
        trace_argument_1 = ObTotalReferences;
    }
    WdUnresolvedAtomicEnd();
    if (!enabled)
    {
        if (*(int32_t *)(MpData + 0x364) <= -1)
        {
            if (!KdRefreshDebuggerNotPresent())
            {
                (*(WD_ROUTINE)swi(3))();
                return;
            }
            KeBugCheck(1);
        }
        MpTraceObRefLeak(trace_argument_1);
        if (WPP_GLOBAL_Control != WD_SYMBOL_ADDRESS(WPP_GLOBAL_Control) && *(uint32_t *)(WPP_GLOBAL_Control + 0x2c) & 1)
        {
            WPP_SF_i(*(uint64_t *)(WPP_GLOBAL_Control + 0x18), 10, WD_SYMBOL_ADDRESS(WPP_97af117c59a53f81369268d03dc3fd50_Traceguids), trace_argument_1);
        }
    }
    return;
}

#include "wdfilter.h"
#include "registration.h"

const WD_OPERATION_REGISTRATION Callbacks[] = {
    {0x00, 0x00000000, (WD_ROUTINE)MpPreCreate, (WD_ROUTINE)MpPostCreate, 0},
    {0x12, 0x00000000, (WD_ROUTINE)MpPreCleanup, (WD_ROUTINE)MpPostCleanup, 0},
    {0x06, 0x00000000, (WD_ROUTINE)MpPreSetInfo, (WD_ROUTINE)MpPostSetInfo, 0},
    {0x04, 0x00000000, (WD_ROUTINE)MpPreWrite, (WD_ROUTINE)MpPostWrite, 0},
    {0xed, 0x00000000, 0, (WD_ROUTINE)MpPostMountVolume, 0},
    {0x0d, 0x00000000, (WD_ROUTINE)MpPreFsControl, (WD_ROUTINE)MpPostFsControl, 0},
    {0xff, 0x00000000, (WD_ROUTINE)MpPreAcquireSectionSync, 0, 0},
    {0x0c, 0x00000000, 0, (WD_ROUTINE)MpPostDirectoryCtrl, 0},
    {0x07, 0x00000000, (WD_ROUTINE)MpPreQueryEa, 0, 0},
    {0xf9, 0x00000000, (WD_ROUTINE)MpPreQueryOpen, 0, 0},
    {0x03, 0x00000000, 0, (WD_ROUTINE)MpPostRead, 0},
    {0x80, 0x00000000, 0, 0, 0},
};

const WD_OPERATION_REGISTRATION CallbacksRs3[] = {
    {0x03, 0x00000009, (WD_ROUTINE)MpPreRead, (WD_ROUTINE)MpPostRead, 0},
    {0x00, 0x00000000, (WD_ROUTINE)MpPreCreate, (WD_ROUTINE)MpPostCreate, 0},
    {0x12, 0x00000000, (WD_ROUTINE)MpPreCleanup, (WD_ROUTINE)MpPostCleanup, 0},
    {0x06, 0x00000000, (WD_ROUTINE)MpPreSetInfo, (WD_ROUTINE)MpPostSetInfo, 0},
    {0x04, 0x00000000, (WD_ROUTINE)MpPreWrite, (WD_ROUTINE)MpPostWrite, 0},
    {0xed, 0x00000000, 0, (WD_ROUTINE)MpPostMountVolume, 0},
    {0x0d, 0x00000000, (WD_ROUTINE)MpPreFsControl, (WD_ROUTINE)MpPostFsControl, 0},
    {0xff, 0x00000000, (WD_ROUTINE)MpPreAcquireSectionSync, 0, 0},
    {0x0c, 0x00000000, 0, (WD_ROUTINE)MpPostDirectoryCtrl, 0},
    {0x07, 0x00000000, (WD_ROUTINE)MpPreQueryEa, 0, 0},
    {0xf9, 0x00000000, (WD_ROUTINE)MpPreQueryOpen, 0, 0},
    {0x08, 0x00000001, (WD_ROUTINE)MpPreSetEa, (WD_ROUTINE)MpPostSetEa, 0},
    {0x80, 0x00000000, 0, 0, 0},
};

const WD_CONTEXT_REGISTRATION ContextRegistration[] = {
    {0x0002, 0x0000, (WD_ROUTINE)MpDeleteInstanceContext, 0x1d0, 0x6369504d, 0, 0, 0},
    {0x0008, 0x0000, (WD_ROUTINE)MpDeleteStreamContext, 0x280, 0x6373504d, 0, 0, 0},
    {0x0010, 0x0000, (WD_ROUTINE)MpDeleteHandleContext, 0x78, 0x6368504d, 0, 0, 0},
    {0x0020, 0x0000, (WD_ROUTINE)MpTxfDeleteContext, 0xb0, 0x6374504d, 0, 0, 0},
    {0x0040, 0x0000, (WD_ROUTINE)MpDeleteSectionContext, 0x8, 0x4353504d, 0, 0, 0},
    {0xffff, 0x0000, 0, 0x0, 0x00000000, 0, 0, 0},
};

const WD_FILTER_REGISTRATION FilterRegistration = {
    .Size = 0x0070,
    .Version = 0x0203,
    .Flags = 0x0000000c,
    .ContextRegistration = ContextRegistration,
    .OperationRegistration = Callbacks,
    .FilterUnloadCallback = (WD_ROUTINE)MpUnload,
    .InstanceSetupCallback = (WD_ROUTINE)MpInstanceSetup,
    .InstanceQueryTeardownCallback = (WD_ROUTINE)MpQueryTeardown,
    .InstanceTeardownStartCallback = 0,
    .InstanceTeardownCompleteCallback = (WD_ROUTINE)MpInstanceTeardownComplete,
    .GenerateFileNameCallback = 0,
    .NormalizeNameComponentCallback = 0,
    .NormalizeContextCleanupCallback = 0,
    .TransactionNotificationCallback = (WD_ROUTINE)MpTxfCallback,
    .NormalizeNameComponentExCallback = 0,
    .SectionNotificationCallback = 0,
};

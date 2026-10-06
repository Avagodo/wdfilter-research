#ifndef WD_REGISTRATION_H
#define WD_REGISTRATION_H

#include <stddef.h>
#include <stdint.h>
#include "types.h"


typedef struct {
    uint8_t MajorFunction;
    uint32_t Flags;
    WD_ROUTINE PreOperation;
    WD_ROUTINE PostOperation;
    uint64_t Reserved1;
} WD_OPERATION_REGISTRATION;

typedef struct {
    uint16_t ContextType;
    uint16_t Flags;
    WD_ROUTINE ContextCleanupCallback;
    uint64_t Size;
    uint32_t PoolTag;
    WD_ROUTINE ContextAllocateCallback;
    WD_ROUTINE ContextFreeCallback;
    uint64_t Reserved1;
} WD_CONTEXT_REGISTRATION;

typedef struct {
    uint16_t Size;
    uint16_t Version;
    uint32_t Flags;
    const WD_CONTEXT_REGISTRATION *ContextRegistration;
    const WD_OPERATION_REGISTRATION *OperationRegistration;
    WD_ROUTINE FilterUnloadCallback;
    WD_ROUTINE InstanceSetupCallback;
    WD_ROUTINE InstanceQueryTeardownCallback;
    WD_ROUTINE InstanceTeardownStartCallback;
    WD_ROUTINE InstanceTeardownCompleteCallback;
    WD_ROUTINE GenerateFileNameCallback;
    WD_ROUTINE NormalizeNameComponentCallback;
    WD_ROUTINE NormalizeContextCleanupCallback;
    WD_ROUTINE TransactionNotificationCallback;
    WD_ROUTINE NormalizeNameComponentExCallback;
    WD_ROUTINE SectionNotificationCallback;
} WD_FILTER_REGISTRATION;

_Static_assert(sizeof(WD_OPERATION_REGISTRATION) == 32, "Operation image size");
_Static_assert(offsetof(WD_OPERATION_REGISTRATION, PreOperation) == 8, "Operation callback offset");
_Static_assert(sizeof(WD_CONTEXT_REGISTRATION) == 56, "Context image size");
_Static_assert(offsetof(WD_CONTEXT_REGISTRATION, PoolTag) == 24, "Context pool tag offset");
_Static_assert(sizeof(WD_FILTER_REGISTRATION) == 112, "Filter image size");
_Static_assert(offsetof(WD_FILTER_REGISTRATION, ContextRegistration) == 8, "Filter context offset");

extern const WD_OPERATION_REGISTRATION Callbacks[];
extern const WD_OPERATION_REGISTRATION CallbacksRs3[];
extern const WD_CONTEXT_REGISTRATION ContextRegistration[];
extern const WD_FILTER_REGISTRATION FilterRegistration;

#endif

#ifndef WDFILTER_PRIMITIVES_H
#define WDFILTER_PRIMITIVES_H

#include <stddef.h>
#include <stdint.h>

static inline uint64_t WdLoadField(const void *object, size_t offset, size_t width)
{
    const uint8_t *bytes = (const uint8_t *)object + offset;
    uint64_t value = 0;
    for (size_t index = 0; index < width; ++index) {
        value |= (uint64_t)bytes[index] << (index * 8);
    }
    return value;
}

static inline void WdStoreField(void *object, size_t offset, size_t width, uint64_t value)
{
    uint8_t *bytes = (uint8_t *)object + offset;
    for (size_t index = 0; index < width; ++index) {
        bytes[index] = (uint8_t)(value >> (index * 8));
    }
}

static inline uint64_t WdUnsignedMultiplyHigh(uint64_t left, uint64_t right)
{
    uint64_t low_product = (uint64_t)(uint32_t)left * (uint32_t)right;
    uint64_t cross = (left >> 32) * (uint32_t)right + (low_product >> 32);
    uint64_t middle = (uint32_t)cross + (uint64_t)(uint32_t)left * (right >> 32);
    return (left >> 32) * (right >> 32) + (cross >> 32) + (middle >> 32);
}

static inline int64_t WdSignedMultiplyHigh(int64_t left, int64_t right)
{
    uint64_t high = WdUnsignedMultiplyHigh((uint64_t)left, (uint64_t)right);
    if (left < 0) {
        high -= (uint64_t)right;
    }
    if (right < 0) {
        high -= (uint64_t)left;
    }
    return (int64_t)high;
}

#ifdef _MSC_VER
#include <intrin.h>
#define WD_ATOMIC_OPERATIONS(bits, type, win_type, suffix) \
static inline type WdAtomicAdd##bits(volatile type *target, type value) \
{ return (type)_InterlockedExchangeAdd##suffix((volatile win_type *)target, value); } \
static inline type WdAtomicExchange##bits(volatile type *target, type value) \
{ return (type)_InterlockedExchange##suffix((volatile win_type *)target, value); } \
static inline type WdAtomicCompareExchange##bits(volatile type *target, type desired, type expected) \
{ return (type)_InterlockedCompareExchange##suffix((volatile win_type *)target, desired, expected); } \
static inline type WdAtomicOr##bits(volatile type *target, type value) \
{ return (type)_InterlockedOr##suffix((volatile win_type *)target, value); } \
static inline type WdAtomicAnd##bits(volatile type *target, type value) \
{ return (type)_InterlockedAnd##suffix((volatile win_type *)target, value); }
#else
#define WD_ATOMIC_OPERATIONS(bits, type, win_type, suffix) \
static inline type WdAtomicAdd##bits(volatile type *target, type value) \
{ return __atomic_fetch_add(target, value, __ATOMIC_SEQ_CST); } \
static inline type WdAtomicExchange##bits(volatile type *target, type value) \
{ return __atomic_exchange_n(target, value, __ATOMIC_SEQ_CST); } \
static inline type WdAtomicCompareExchange##bits(volatile type *target, type desired, type expected) \
{ __atomic_compare_exchange_n(target, &expected, desired, 0, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST); return expected; } \
static inline type WdAtomicOr##bits(volatile type *target, type value) \
{ return __atomic_fetch_or(target, value, __ATOMIC_SEQ_CST); } \
static inline type WdAtomicAnd##bits(volatile type *target, type value) \
{ return __atomic_fetch_and(target, value, __ATOMIC_SEQ_CST); }
#endif

WD_ATOMIC_OPERATIONS(32, int32_t, long, )
WD_ATOMIC_OPERATIONS(64, int64_t, __int64, 64)
#undef WD_ATOMIC_OPERATIONS

void WdUnresolvedAtomicBegin(void);
void WdUnresolvedAtomicEnd(void);

#endif

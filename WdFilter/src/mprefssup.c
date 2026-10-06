#include "wdfilter.h"

void MpSaveStreamStateToRefsCache(void)
{
    uint64_t value = 0;
    uint8_t byte_value;
    bool enabled;
    uint64_t value_2 = 0;
    uint64_t value_3 = 0;
    uint64_t value_4 = 0;
    uint64_t value_5 = 0;
    enabled = *(int32_t *)(MpData + 0x1038) != 0;
    byte_value = enabled | 2;
    if (!(*(int32_t *)(MpData + 0x103c)))
    {
        byte_value = enabled;
    }
    MpSaveStreamStateToFileStateGenericTable(0, 0x1c, byte_value, MpSaveRefsStreamStateToCacheEntry, 0x28, &value);
    return;
}

uint8_t MpCopyRefsStreamStateFromCacheEntry(WD_STREAM_STATE *stream, const WD_CACHE_ENTRY *entry)
{
    if (stream->Volume->FileSystemType != WD_FILESYSTEM_REFS || entry->Size < sizeof(*entry))
    {
        return 0;
    }
    stream->State = entry->State;
    stream->VolumeGeneration = stream->Volume->Generation;
    return 1;
}

uint8_t MpSaveRefsStreamStateToCacheEntry(const WD_STREAM_STATE *stream, uint32_t size, WD_CACHE_ENTRY *entry)
{
    if (stream->Volume->FileSystemType != WD_FILESYSTEM_REFS || size < sizeof(*entry))
    {
        return 0;
    }
    entry->State = stream->State;
    return 1;
}

#include "wdfilter.h"

void MpSaveStreamStateToNtfsCache(void)
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
    MpSaveStreamStateToFileStateGenericTable(0, 2, byte_value, MpSaveNtfsStreamStateToCacheEntry, 0x28, &value);
    return;
}

uint8_t MpCopyNtfsStreamStateFromCacheEntry(WD_STREAM_STATE *stream, const WD_CACHE_ENTRY *entry)
{
    if (stream->Volume->FileSystemType != WD_FILESYSTEM_NTFS || entry->Size < sizeof(*entry))
    {
        return 0;
    }
    stream->State = entry->State;
    stream->VolumeGeneration = stream->Volume->Generation;
    return 1;
}

uint8_t MpSaveNtfsStreamStateToCacheEntry(const WD_STREAM_STATE *stream, uint32_t size, WD_CACHE_ENTRY *entry)
{
    if (stream->Volume->FileSystemType != WD_FILESYSTEM_NTFS || size < sizeof(*entry))
    {
        return 0;
    }
    entry->State = stream->State;
    return 1;
}

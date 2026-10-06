#include "wdfilter.h"

void _tlgWriteTransfer_EtwWriteTransfer(void *input, uint8_t *input_2, uint64_t input_3, uint64_t input_4, uint32_t input_5, uint64_t *input_6)
{
    int32_t value;
    uint32_t value_2;
    uint64_t *data_pointer;
    uint32_t value_3;
    uint32_t value_4;
    uint64_t value_5;
    value = (uint32_t)(*input_2) << 0x18;
    value_4 = *(uint16_t *)(&input_2[1]);
    value_5 = *(uint64_t *)(&input_2[3]);
    *input_6 = ((uint64_t *)input)[1];
    data_pointer = input_6;
    *(uint32_t *)(&input_6[1]) = (uint32_t)(*((uint16_t **)input)[1]);
    input_6[2] = &input_2[0xb];
    ((uint32_t *)input_6)[3] = 2;
    *(uint32_t *)(&input_6[3]) = (uint32_t)(*(uint16_t *)(&input_2[0xb]));
    ((uint32_t *)input_6)[7] = 1;
    value_3 = 0x104f;
    value_2 = input_5;
    EtwWriteTransfer(((uint64_t *)input)[4], &value);
    return;
}

uint64_t _tlgKeywordOn(void *input, uint64_t input_2)
{
    uint64_t value;
    if (((uint64_t *)input)[2] & input_2 && (value = ((uint64_t *)input)[3] & input_2, value == ((uint64_t *)input)[3]))
    {
        return (uint64_t)value & 0xffffffffffffff00 | (uint64_t)1 & 0xff;
    }
    return value & 0xffffffffffffff00;
}

void _tlgCreate1Sz_char(WD_EVENT_DATA_DESCRIPTOR *input, int64_t input_2)
{
    int32_t value;
    int64_t value_2;
    if (input_2)
    {
        value_2 = -1;
        do
        {
            value_2 += 1;
        }
        while (*(char *)(input_2 + value_2));
        value = (int32_t)value_2 + 1;
    }
    else
    {
        input_2 = WD_TRACELOG_UNRECOVERED_ADDRESS;
        value = 1;
    }
    input->Ptr = input_2;
    input->Size = value;
    input->Reserved = 0;
    return;
}

void MpTraceAsyncScanQueueExceeded(uint32_t input, uint64_t input_2, uint64_t input_3, char input_4)
{
    uint32_t value;
    char buffer[32];
    uint64_t *data_pointer;
    uint64_t value_2;
    uint32_t *data_pointer_2;
    uint64_t value_3;
    uint64_t *data_pointer_3;
    uint64_t value_4;
    uint32_t *data_pointer_4;
    uint64_t value_5;
    char *bytes;
    uint64_t value_6;
    uint32_t *data_pointer_5;
    uint64_t value_7;
    uint32_t *data_pointer_6;
    uint64_t value_8;
    uint64_t value_10;
    uint32_t value_11;
    uint64_t values[2];
    uint32_t value_12;
    char buffer_3[4];
    uint32_t value_13;
    uint32_t values_2[2];
    value = KeQueryActiveProcessorCount(0);
    if (6 <= WdTracelogStorage8)
    {
        if (_tlgKeywordOn(&WdTracelogStorage8, 0x400000000000))
        {
            value_13 = value;
            data_pointer = &value_10;
            data_pointer_2 = &value_11;
            value_10 = 0x1000000;
            data_pointer_3 = values;
            value_2 = 8;
            data_pointer_4 = &value_12;
            bytes = buffer_3;
            data_pointer_5 = &value_13;
            value_3 = 4;
            value_4 = 8;
            value_12 = 0x10;
            value_5 = 4;
            value_6 = 1;
            value_7 = 4;
            values_2[0] = *(uint32_t *)(MpData + 0x360);
            data_pointer_6 = values_2;
            value_8 = 4;
            buffer_3[0] = input_4;
            value_11 = input;
            values[0] = input_2;
            _tlgWriteTransfer_EtwWriteTransfer(&WdTracelogStorage8, &WdAsyncnotificationStorage23, 0, 0, 9, buffer);
        }
    }
    return;
}

void _tlgDefineProvider_annotation__TlgMpWdFilter1DSProviderHandleProv(void)
{
    return;
}

void MpTraceRegHardeningNotification(int32_t input, char input_2, void *input_3, int64_t input_4, uint32_t *input_5, uint32_t *input_6, uint32_t *input_7)
{
    int64_t value;
    char buffer[8];
    uint32_t values[2];
    uint32_t values_2[2];
    uint32_t values_3[2];
    uint32_t values_4[2];
    uint32_t values_5[2];
    char buffer_2[32];
    uint32_t value_2;
    uint16_t *wide_text;
    uint16_t *wide_text_2;
    int16_t *wide_text_3;
    uint16_t *wide_text_4;
    uint16_t *wide_text_5;
    uint16_t *wide_text_6 = L"(NONE)";
    uint16_t value_3 = 0xc;
    uint32_t value_4 = 0xc;
    uint32_t value_5 = 0xc;
    uint32_t value_6 = 0xc;
    uint16_t *wide_text_7;
    uint16_t **wide_text_8;
    uint64_t value_7;
    uint32_t value_8;
    char *bytes;
    uint64_t value_9;
    uint32_t *data_pointer;
    uint64_t value_10;
    uint16_t *wide_text_9;
    uint32_t *data_pointer_2;
    uint64_t value_11;
    uint16_t *wide_text_10;
    uint32_t *data_pointer_3;
    uint64_t value_12;
    uint32_t value_13;
    uint16_t *wide_text_11;
    uint32_t *data_pointer_4;
    uint64_t value_14;
    uint16_t *wide_text_12;
    uint32_t *data_pointer_5;
    uint64_t value_15;
    uint16_t *wide_text_13;
    uint8_t *bytes_2;
    uint64_t string;
    uint16_t *values_6[2];
    char buffer_4[16];
    values_6[0] = L"(NONE)";
    wide_text_4 = L"(NONE)";
    string = 0xe000c;
    wide_text_5 = L"(NONE)";
    wide_text_7 = L"(NONE)";
    value_2 = 0xc;
    wide_text = L"(NONE)";
    buffer[0] = input_2;
    value_13 = 0xc;
    if (input_2)
    {
        if (input_3)
        {
            value = *__imp_PsInitialSystemProcess;
            if (value == IoGetCurrentProcess())
            {
                return;
            }
            wide_text = wide_text_7;
            if (((uint32_t *)input_3)[0x48] & 1 && ((uint8_t *)input_3)[0xb8] & 7)
            {
                if ((uint8_t)((((uint8_t *)input_3)[0xb8] >> 4) - 3) <= 4)
                {
                    return;
                }
                value_13 = (uint32_t)string & 0xffff;
                goto block_1;
            }
            value_2 = (uint32_t)string & 0xffff;
            goto block_2;
        }
    }
    else
    {
        block_1:
        value_2 = value_13;

        if (input_3)
        {
            block_2:
            wide_text_3 = ((int16_t **)input_3)[0x10];

            if (wide_text_3 && *wide_text_3)
            {
                value_8 = *(uint32_t *)wide_text_3;
                wide_text_6 = *(uint16_t **)(&wide_text_3[4]);
                FltParseFileName(wide_text_3, 0, 0, &string);
                if (!wide_text_7 || !(uint16_t)string)
                {
                    RtlInitUnicodeString(&string, L"(NONE)");
                }
                value_2 = (uint32_t)((uint16_t)string);
                value_3 = (uint16_t)value_8;
                wide_text = wide_text_7;
            }
        }
    }
    if (input_5)
    {
        wide_text_4 = *(uint16_t **)(&input_5[2]);
        value_4 = *input_5;
    }
    if (input_6)
    {
        wide_text_5 = *(uint16_t **)(&input_6[2]);
        value_5 = *input_6;
    }
    if (input_7)
    {
        value_6 = *input_7;
        wide_text_2 = *(uint16_t **)(&input_7[2]);
    }
    else
    {
        wide_text_2 = values_6[0];
    }
    if (input != 1)
    {
        if (input != 2)
        {
            if (input != 3)
            {
                if (input != 4)
                {
                    if (input != 5 || WdTracelogStorage8 <= 5 || !_tlgKeywordOn(&WdTracelogStorage8, 0x400000000000))
                    {
                        return;
                    }
                    wide_text_8 = values_6;
                    bytes = buffer;
                    values_6[0] = (uint16_t *)0x1000000;
                    value_7 = 8;
                    value_9 = 1;
                    _tlgCreate1Sz_char(buffer_4, input_4);
                    bytes_2 = &WdAsyncnotificationStorage13;
                }
                else
                {
                    if (WdTracelogStorage8 <= 5 || !_tlgKeywordOn(&WdTracelogStorage8, 0x400000000000))
                    {
                        return;
                    }
                    wide_text_8 = values_6;
                    bytes = buffer;
                    values_6[0] = (uint16_t *)0x1000000;
                    value_7 = 8;
                    value_9 = 1;
                    _tlgCreate1Sz_char(buffer_4, input_4);
                    bytes_2 = &WdAsyncnotificationStorage10;
                }
            }
            else
            {
                if (WdTracelogStorage8 <= 5 || !_tlgKeywordOn(&WdTracelogStorage8, 0x400000000000))
                {
                    return;
                }
                wide_text_8 = values_6;
                bytes = buffer;
                values_6[0] = (uint16_t *)0x1000000;
                value_7 = 8;
                value_9 = 1;
                _tlgCreate1Sz_char(buffer_4, input_4);
                bytes_2 = &WdAsyncnotificationStorage12;
            }
        }
        else
        {
            if (WdTracelogStorage8 <= 5 || !_tlgKeywordOn(&WdTracelogStorage8, 0x400000000000))
            {
                return;
            }
            wide_text_8 = values_6;
            bytes = buffer;
            values_6[0] = (uint16_t *)0x1000000;
            value_7 = 8;
            value_9 = 1;
            _tlgCreate1Sz_char(buffer_4, input_4);
            bytes_2 = &WdAsyncnotificationStorage22;
        }
    }
    else
    {
        if (WdTracelogStorage8 <= 5 || !_tlgKeywordOn(&WdTracelogStorage8, 0x400000000000))
        {
            return;
        }
        wide_text_8 = values_6;
        bytes = buffer;
        values_6[0] = (uint16_t *)0x1000000;
        value_7 = 8;
        value_9 = 1;
        _tlgCreate1Sz_char(buffer_4, input_4);
        bytes_2 = &WdAsyncnotificationStorage20;
    }
    data_pointer = values;
    values[0] = (uint32_t)value_3;
    data_pointer_2 = values_2;
    values_2[0] = value_2 & 0xffff;
    data_pointer_3 = values_3;
    values_3[0] = value_4 & 0xffff;
    data_pointer_4 = values_4;
    values_4[0] = value_5 & 0xffff;
    data_pointer_5 = values_5;
    values_5[0] = value_6 & 0xffff;
    value_10 = 2;
    values[1] = 0;
    value_11 = 2;
    values_2[1] = 0;
    value_12 = 2;
    values_3[1] = 0;
    value_14 = 2;
    values_4[1] = 0;
    value_15 = 2;
    values_5[1] = 0;
    wide_text_9 = wide_text_6;
    wide_text_10 = wide_text;
    wide_text_11 = wide_text_4;
    wide_text_12 = wide_text_5;
    wide_text_13 = wide_text_2;
    _tlgWriteTransfer_EtwWriteTransfer(&WdTracelogStorage8, bytes_2, 0, 0, 0xf, buffer_2);
    return;
}

void MpTraceLogBindFltHardeningChanged(int32_t input, int32_t input_2)
{
    int32_t *data_pointer;
    uint64_t value;
    uint64_t value_3;
    int32_t value_4;
    int32_t value_5;
    char buffer_2[32];
    uint64_t *data_pointer_2;
    uint64_t value_6;
    int32_t *data_pointer_3;
    uint64_t value_7;
    if (input == input_2)
    {
        return;
    }
    if (6 <= WdTracelogStorage8 && _tlgKeywordOn(&WdTracelogStorage8, 0x400000000000))
    {
        data_pointer_2 = &value_3;
        value_4 = input;
        data_pointer_3 = &value_4;
        value_5 = input_2;
        data_pointer = &value_5;
        value_3 = 0x800;
        value_6 = 8;
        value_7 = 4;
        value = 4;
        _tlgWriteTransfer_EtwWriteTransfer(&WdTracelogStorage8, &WdAsyncnotificationStorage19, 0, 0, 5, buffer_2);
    }
    return;
}

void MpTraceLogTrustedInstallerHardeningFlags(uint32_t input)
{
    uint64_t value;
    uint32_t values[2];
    char buffer_2[32];
    uint64_t *data_pointer;
    uint64_t value_2;
    uint32_t *data_pointer_2;
    uint64_t value_3;
    if (6 <= WdTracelogStorage8)
    {
        if (_tlgKeywordOn(&WdTracelogStorage8, 0x400000000000))
        {
            values[0] = input;
            data_pointer = &value;
            value_3 = 4;
            data_pointer_2 = values;
            value = 0x800;
            value_2 = 8;
            _tlgWriteTransfer_EtwWriteTransfer(&WdTracelogStorage8, &WdAsyncnotificationStorage25, 0, 0, 4, buffer_2);
        }
    }
    return;
}

void _tlgEnableCallback(uint64_t input, int32_t input_2, uint8_t input_3, uint64_t input_4, uint64_t input_5, uint64_t input_6, int32_t *input_7)
{
    int32_t value;
    if (!input_7)
    {
        return;
    }
    if (input_2)
    {
        if (input_2 == 1)
        {
            if (input_3)
            {
                value = input_3 + 1;
            }
            else
            {
                value = 0x100;
            }
            *input_7 = value;
            *(uint64_t *)(&input_7[4]) = input_4;
            *(uint64_t *)(&input_7[6]) = input_5;
        }
    }
    else
    {
        *input_7 = 0;
    }
    if (!(*(int64_t *)(&input_7[10])))
    {
        return;
    }
    (*__guard_dispatch_icall_fptr)(input);
    return;
}

void MpTraceLogServiceConnectFailure(uint32_t input, uint64_t input_2, uint64_t input_3, uint8_t input_4)
{
    uint64_t value;
    uint8_t byte_value;
    uint8_t buffer_2[3];
    char buffer_3[32];
    char *bytes;
    uint64_t *data_pointer;
    uint64_t value_2;
    uint64_t *data_pointer_2;
    uint64_t value_3;
    uint32_t *data_pointer_3;
    uint64_t value_4;
    uint64_t value_5;
    uint32_t *data_pointer_4;
    uint64_t value_6;
    uint32_t *data_pointer_5;
    uint64_t value_7;
    uint64_t *data_pointer_6;
    uint64_t value_8;
    uint64_t *data_pointer_7;
    uint64_t value_9;
    uint64_t *data_pointer_8;
    uint64_t value_10;
    uint64_t value_11;
    uint64_t *data_pointer_9;
    uint64_t value_12;
    uint8_t *bytes_2;
    uint64_t value_13;
    uint8_t *bytes_3;
    uint64_t value_14;
    uint32_t value_16;
    uint32_t value_17;
    uint32_t value_18;
    uint64_t value_19;
    uint64_t value_20;
    uint64_t value_21;
    if (6 <= WdTracelogStorage)
    {
        if (_tlgKeywordOn(&WdTracelogStorage, 0x400000000000))
        {
            data_pointer = &value_4;
            value_4 = 0x1000000;
            data_pointer_2 = &value_10;
            data_pointer_3 = &value_16;
            value_2 = 8;
            value_10 = 1;
            value_3 = 8;
            value_16 = input;
            value_5 = 4;
            value_17 = *(uint32_t *)(MpData + 0x360);
            data_pointer_4 = &value_17;
            value_6 = 4;
            value_18 = *(uint32_t *)(MpData + 0x364);
            data_pointer_5 = &value_18;
            value_7 = 4;
            value_19 = *(uint64_t *)(MpData + 0xe8);
            data_pointer_6 = &value_19;
            value_8 = 8;
            value_20 = *(uint64_t *)(MpData + 0xf0);
            data_pointer_7 = &value_20;
            data_pointer_8 = &value_21;
            data_pointer_9 = &value;
            bytes_2 = &byte_value;
            bytes_3 = buffer_2;
            bytes = buffer_3;
            byte_value = input_4;
            buffer_2[0] = input_4 >> 4;
            value_9 = 8;
            value_21 = input_2;
            value_11 = 8;
            value = input_3;
            value_12 = 8;
            value_13 = 1;
            value_14 = 1;
            _tlgWriteAgg(MpData, &WdAsyncnotificationStorage17);
        }
    }
    return;
}

void MpTraceLogRegLinkHardeningFlags(int32_t input, int32_t input_2)
{
    int32_t *data_pointer;
    uint64_t value;
    uint64_t value_3;
    int32_t value_4;
    int32_t value_5;
    char buffer_2[32];
    uint64_t *data_pointer_2;
    uint64_t value_6;
    int32_t *data_pointer_3;
    uint64_t value_7;
    if (input == input_2)
    {
        return;
    }
    if (6 <= WdTracelogStorage8 && _tlgKeywordOn(&WdTracelogStorage8, 0x400000000000))
    {
        data_pointer_2 = &value_3;
        value_4 = input;
        data_pointer_3 = &value_4;
        value_5 = input_2;
        data_pointer = &value_5;
        value_3 = 0x800;
        value_6 = 8;
        value_7 = 4;
        value = 4;
        _tlgWriteTransfer_EtwWriteTransfer(&WdTracelogStorage8, &WdAsyncnotificationStorage11, 0, 0, 5, buffer_2);
    }
    return;
}

void MpTraceLogEfsHardeningChanged(int32_t input, int32_t input_2)
{
    int32_t *data_pointer;
    uint64_t value;
    uint64_t value_3;
    int32_t value_4;
    int32_t value_5;
    char buffer_2[32];
    uint64_t *data_pointer_2;
    uint64_t value_6;
    int32_t *data_pointer_3;
    uint64_t value_7;
    if (input == input_2)
    {
        return;
    }
    if (6 <= WdTracelogStorage8 && _tlgKeywordOn(&WdTracelogStorage8, 0x400000000000))
    {
        data_pointer_2 = &value_3;
        value_4 = input;
        data_pointer_3 = &value_4;
        value_5 = input_2;
        data_pointer = &value_5;
        value_3 = 0x800;
        value_6 = 8;
        value_7 = 4;
        value = 4;
        _tlgWriteTransfer_EtwWriteTransfer(&WdTracelogStorage8, &WdAsyncnotificationStorage15, 0, 0, 5, buffer_2);
    }
    return;
}

void MpTraceDlpSyncMessageTimeout(char input, uint16_t input_2, uint16_t input_3)
{
    uint64_t value;
    uint16_t *wide_text;
    uint64_t value_2;
    uint16_t *wide_text_2;
    uint64_t value_3;
    uint64_t values[2];
    char buffer_2[4];
    uint16_t values_2[2];
    uint16_t values_3[4];
    char buffer_3[32];
    uint64_t *data_pointer;
    uint64_t value_5;
    char *bytes;
    if (6 <= WdTracelogStorage8)
    {
        if (_tlgKeywordOn(&WdTracelogStorage8, 0x400000000000))
        {
            data_pointer = values;
            bytes = buffer_2;
            wide_text = values_2;
            values[0] = 0x1000000;
            wide_text_2 = values_3;
            value_5 = 8;
            buffer_2[0] = input;
            value = 1;
            value_2 = 2;
            value_3 = 2;
            values_2[0] = input_2;
            values_3[0] = input_3;
            _tlgWriteTransfer_EtwWriteTransfer(&WdTracelogStorage8, &WdAsyncnotificationStorage24, 0, 0, 6, buffer_3);
        }
    }
    return;
}

void MpTraceFsHardeningNotification(char input, char input_2, WD_LAYOUT_77 *input_3, void *input_4, uint32_t *input_5, char input_6)
{
    uint32_t *data_pointer;
    char buffer[32];
    uint32_t value;
    uint16_t *wide_text = L"(NONE)";
    uint32_t value_2;
    uint64_t *data_pointer_2;
    uint64_t value_3;
    char *bytes;
    uint64_t value_4;
    char *bytes_2;
    uint64_t value_5;
    uint16_t *wide_text_2;
    uint32_t *data_pointer_3;
    uint64_t value_6;
    uint16_t *wide_text_3;
    uint32_t *data_pointer_4;
    uint64_t value_7;
    uint16_t *wide_text_4;
    char *bytes_3;
    uint64_t value_8;
    uint64_t values[3];
    char byte_value;
    char byte_value_2;
    uint32_t values_2[2];
    uint32_t values_3[2];
    char buffer_3[6];
    values[0] = (uint64_t)((uint32_t)values[0]);
    wide_text_2 = L"(NONE)";
    value_2 = 0xc;
    value = 0xc;
    if (input_3)
    {
        wide_text = input_3->field_0x8;
        value_2 = input_3->field_0x0;
    }
    data_pointer = input_5;
    if (!input_5)
    {
        if (!input_4)
        {
            goto block_1;
        }
        data_pointer = &((uint32_t *)input_4)[2];
    }
    wide_text_2 = *(uint16_t **)(&data_pointer[2]);
    value = *data_pointer;
    block_1:
    if (6 <= WdTracelogStorage8)
    {
        if (_tlgKeywordOn(&WdTracelogStorage8, 0x400000000000))
        {
            data_pointer_2 = values;
            values[0] = 0x1000000;
            bytes = &byte_value;
            value_3 = 8;
            bytes_2 = &byte_value_2;
            data_pointer_3 = values_2;
            value_4 = 1;
            values_2[0] = value_2 & 0xffff;
            data_pointer_4 = values_3;
            values_3[0] = value & 0xffff;
            buffer_3[0] = input_6;
            bytes_3 = buffer_3;
            value_5 = 1;
            value_6 = 2;
            wide_text_3 = wide_text;
            values_2[1] = 0;
            value_7 = 2;
            values_3[1] = 0;
            value_8 = 1;
            byte_value = input;
            byte_value_2 = input_2;
            wide_text_4 = wide_text_2;
            _tlgWriteTransfer_EtwWriteTransfer(&WdTracelogStorage8, &WdAsyncnotificationStorage7, 0, 0, 10, buffer);
        }
    }

    return;
}

void MpTraceLogDriverEntryFailure(uint32_t input)
{
    uint64_t value;
    uint64_t value_2;
    char *bytes;
    uint64_t value_3;
    char *bytes_2;
    uint64_t value_4;
    uint32_t *data_pointer;
    uint64_t value_5;
    char *bytes_3;
    uint64_t value_6;
    uint32_t value_8;
    uint32_t value_9;
    uint64_t value_10;
    uint32_t value_11;
    char byte_value;
    uint32_t value_12;
    uint64_t value_13;
    uint32_t value_14;
    uint32_t value_15;
    uint64_t value_16;
    uint32_t value_17;
    uint32_t value_18;
    uint32_t value_19;
    uint32_t value_20;
    uint32_t value_21;
    char byte_value_2;
    uint32_t value_22;
    uint32_t value_23;
    uint32_t value_24;
    char byte_value_3;
    uint32_t value_25;
    char byte_value_4;
    uint64_t values[2];
    char byte_value_5;
    char byte_value_6;
    char byte_value_7;
    uint32_t value_26;
    char byte_value_8;
    char buffer_2[32];
    uint64_t *data_pointer_2;
    uint64_t value_27;
    uint32_t value_28;
    uint32_t *data_pointer_3;
    uint64_t value_29;
    uint32_t *data_pointer_4;
    uint64_t value_30;
    uint32_t *data_pointer_5;
    uint64_t value_31;
    uint32_t *data_pointer_6;
    uint64_t value_32;
    uint64_t value_33;
    uint32_t *data_pointer_7;
    uint32_t value_34;
    uint64_t value_35;
    uint32_t *data_pointer_8;
    uint64_t value_36;
    uint64_t *data_pointer_9;
    uint64_t value_37;
    uint64_t *data_pointer_10;
    uint64_t value_38;
    uint32_t *data_pointer_11;
    uint64_t value_39;
    uint32_t *data_pointer_12;
    uint32_t values_2[2];
    uint64_t value_40;
    uint64_t *data_pointer_13;
    uint64_t value_41;
    uint32_t *data_pointer_14;
    uint64_t value_42;
    char *bytes_4;
    uint64_t value_43;
    uint32_t *data_pointer_15;
    uint64_t value_44;
    uint64_t *data_pointer_16;
    uint32_t value_45;
    uint64_t value_46;
    uint32_t *data_pointer_17;
    uint64_t value_47;
    uint32_t *data_pointer_18;
    uint64_t value_48;
    uint32_t *data_pointer_19;
    uint64_t value_49;
    uint32_t *data_pointer_20;
    uint64_t value_50;
    uint32_t *data_pointer_21;
    uint32_t value_51;
    uint64_t value_52;
    uint32_t *data_pointer_22;
    uint64_t value_53;
    uint32_t *data_pointer_23;
    uint64_t value_54;
    char *bytes_5;
    uint64_t value_55;
    uint32_t *data_pointer_24;
    uint64_t value_56;
    uint32_t *data_pointer_25;
    uint64_t value_57;
    uint64_t value_58;
    uint32_t *data_pointer_26;
    uint64_t value_59;
    char *bytes_6;
    uint64_t value_60;
    char *bytes_7;
    uint64_t value_61;
    uint64_t *data_pointer_27;
    uint64_t value_62;
    char *bytes_8;
    if (6 <= WdTracelogStorage8)
    {
        if (_tlgKeywordOn(&WdTracelogStorage8, 0x400000000000))
        {
            data_pointer_2 = &value_16;
            data_pointer_3 = &value_25;
            value_25 = input;
            value_16 = 0x1000000;
            value_27 = 8;
            value_29 = 4;
            value_28 = *(uint32_t *)(MpData + 0x360);
            data_pointer_4 = &value_28;
            value_30 = 4;
            value_34 = *(uint32_t *)(MpData + 0x364);
            data_pointer_5 = &value_34;
            value_31 = 4;
            value_33 = *(uint64_t *)(&(*(uint16_t **)(MpData + 0xfb0))[4]);
            data_pointer_6 = values_2;
            value_32 = 2;
            values_2[0] = (uint32_t)(*(*(uint16_t **)(MpData + 0xfb0)));
            values_2[1] = 0;
            value_45 = *(uint32_t *)(MpData + 0xfcc);
            data_pointer_7 = &value_45;
            value_35 = 4;
            value_51 = *(uint32_t *)(MpData + 0xfdc);
            data_pointer_8 = &value_51;
            value_36 = 4;
            value_57 = *(uint64_t *)(MpData + 0xe8);
            data_pointer_9 = &value_57;
            value_37 = 8;
            value = *(uint64_t *)(MpData + 0xf0);
            data_pointer_10 = &value;
            value_38 = 8;
            value_8 = *(uint32_t *)(MpData + 0xf8);
            data_pointer_11 = &value_8;
            value_39 = 4;
            value_9 = *(uint32_t *)(MpData + 0x110);
            data_pointer_12 = &value_9;
            value_40 = 4;
            value_10 = *(uint64_t *)(MpData + 0x108);
            data_pointer_13 = &value_10;
            value_41 = 8;
            value_11 = *(uint32_t *)(MpData + 0x1b8);
            data_pointer_14 = &value_11;
            value_42 = 4;
            byte_value = *(char *)(MpData + 0x250);
            bytes_4 = &byte_value;
            value_43 = 1;
            value_12 = *(uint32_t *)(MpData + 0x254);
            data_pointer_15 = &value_12;
            value_44 = 4;
            value_13 = *(uint64_t *)(MpData + 600);
            data_pointer_16 = &value_13;
            value_46 = 8;
            value_14 = *(uint32_t *)(MpData + 0x260);
            data_pointer_17 = &value_14;
            value_47 = 4;
            value_15 = *(uint32_t *)(MpData + 0x264);
            data_pointer_18 = &value_15;
            value_48 = 4;
            value_17 = *(uint32_t *)(MpData + 0x268);
            data_pointer_19 = &value_17;
            value_49 = 4;
            value_18 = *(uint32_t *)(MpData + 0x26c);
            data_pointer_20 = &value_18;
            value_50 = 4;
            value_19 = *(uint32_t *)(MpData + 0x98c);
            data_pointer_21 = &value_19;
            value_52 = 4;
            value_20 = *(uint32_t *)(MpData + 0x988);
            data_pointer_22 = &value_20;
            value_53 = 4;
            value_21 = *(uint32_t *)(MpData + 0x980);
            data_pointer_23 = &value_21;
            value_54 = 4;
            byte_value_2 = *(char *)(MpData + 0x990);
            bytes_5 = &byte_value_2;
            value_55 = 1;
            value_22 = *(uint32_t *)(MpData + 0xf44);
            data_pointer_24 = &value_22;
            value_56 = 4;
            value_23 = *(uint32_t *)(MpData + 0xf48);
            data_pointer_25 = &value_23;
            value_58 = 4;
            value_24 = *(uint32_t *)(MpData + 0xf58);
            data_pointer_26 = &value_24;
            value_59 = 4;
            byte_value_3 = *(char *)(MpData + 0xf5c);
            bytes_6 = &byte_value_3;
            value_60 = 1;
            byte_value_4 = *(char *)(MpData + 0xfa8);
            bytes_7 = &byte_value_4;
            value_61 = 1;
            values[0] = *(uint64_t *)(MpData + 0xfc0);
            data_pointer_27 = values;
            value_62 = 8;
            byte_value_5 = *(char *)(MpData + 0xfc8);
            value_2 = 1;
            bytes_8 = &byte_value_5;
            byte_value_6 = *(char *)(MpData + 0xfd0);
            bytes = &byte_value_6;
            value_3 = 1;
            byte_value_7 = *(char *)(MpData + 0xfd1);
            bytes_2 = &byte_value_7;
            value_4 = 1;
            value_26 = *(uint32_t *)(MpData + 0xfd4);
            data_pointer = &value_26;
            value_5 = 4;
            byte_value_8 = *(char *)(MpData + 0xfd8);
            bytes_3 = &byte_value_8;
            value_6 = 1;
            _tlgWriteTransfer_EtwWriteTransfer(&WdTracelogStorage8, &WdAsyncnotificationStorage21, 0, 0, 0x26, buffer_2);
        }
    }
    return;
}

void MpTraceLogInitialize(void)
{
    if (*(uint32_t *)(MpData + 0x360) & 0x10)
    {
        TlgAggregateInitialize();
    }
    TraceLoggingRegisterEx_EtwRegister_2K(&WdTracelogStorage8);
    TraceLoggingRegisterEx_EtwRegister_2K(&WdTracelogStorage6);
    if (!(*(uint32_t *)(MpData + 0x360) & 0x10))
    {
        return;
    }
    TlgRegisterAggregateProviderEx(&WdTracelogStorage14);
    TlgRegisterAggregateProviderEx(&WdTracelogStorage);
    TlgRegisterAggregateProviderEx(&WdTracelogStorage13);
    return;
}

void MpTraceLogRelease(void)
{
    uint64_t value;
    value = WdTracelogStorage12;
    WdTracelogStorage12 = 0;
    WdTracelogStorage8 = 0;
    EtwUnregister(value);
    value = WdTracelogStorage7;
    WdTracelogStorage7 = 0;
    WdTracelogStorage6 = 0;
    EtwUnregister(value);
    if (!(*(uint32_t *)(MpData + 0x360) & 0x10))
    {
        return;
    }
    TlgUnregisterAggregateProvider(&WdTracelogStorage14);
    TlgUnregisterAggregateProvider(&WdTracelogStorage);
    TlgUnregisterAggregateProvider(&WdTracelogStorage13);
    return;
}

void MpTraceObRefLeak(uint64_t input)
{
    uint64_t value;
    uint64_t value_2;
    char buffer_2[32];
    uint64_t *data_pointer;
    uint64_t value_3;
    uint64_t *data_pointer_2;
    uint64_t value_4;
    if (6 <= WdTracelogStorage8)
    {
        if (_tlgKeywordOn(&WdTracelogStorage8, 0x400000000000))
        {
            data_pointer = &value;
            value_2 = input;
            data_pointer_2 = &value_2;
            value = 0x1000000;
            value_3 = 8;
            value_4 = 8;
            _tlgWriteTransfer_EtwWriteTransfer(&WdTracelogStorage8, &WdAsyncnotificationStorage14, 0, 0, 4, buffer_2);
        }
    }
    return;
}

void MpTracePPLRedux(WD_LAYOUT_89 *input, void *input_2, uint32_t input_3, char input_4)
{
    uint32_t *data_pointer;
    uint16_t *wide_text;
    uint16_t *wide_text_2 = L"(NONE)";
    uint32_t value;
    uint64_t *data_pointer_2;
    uint64_t value_2;
    uint32_t *data_pointer_3;
    uint64_t value_3;
    uint16_t *wide_text_3;
    uint32_t *data_pointer_4;
    uint64_t value_4;
    uint32_t value_5;
    uint16_t *wide_text_4;
    uint32_t *data_pointer_5;
    uint64_t value_6;
    char *bytes;
    uint64_t value_7;
    uint64_t values[3];
    uint32_t values_2[2];
    uint32_t values_3[2];
    uint32_t value_9;
    char buffer_2[4];
    char buffer_3[32];
    values[0] = (uint64_t)((uint32_t)values[0]);
    wide_text = L"(NONE)";
    value = 0xc;
    value_5 = 0xc;
    if (input)
    {
        data_pointer = input->field_0x80;
        if (data_pointer)
        {
            wide_text_2 = *(uint16_t **)(&data_pointer[2]);
            value = *data_pointer;
        }
        if (input_2)
        {
            wide_text = ((uint16_t **)input_2)[2];
            value_5 = ((uint32_t *)input_2)[2];
        }
        if (6 <= WdTracelogStorage8)
        {
            if (_tlgKeywordOn(&WdTracelogStorage8, 0x400000000000))
            {
                data_pointer_2 = values;
                wide_text_4 = wide_text;
                data_pointer_3 = values_2;
                values_2[0] = value & 0xffff;
                data_pointer_4 = values_3;
                values[0] = 0x1000000;
                values_3[0] = value_5 & 0xffff;
                data_pointer_5 = &value_9;
                bytes = buffer_2;
                value_2 = 8;
                value_3 = 2;
                wide_text_3 = wide_text_2;
                values_2[1] = 0;
                value_4 = 2;
                values_3[1] = 0;
                value_6 = 4;
                value_7 = 1;
                buffer_2[0] = input_4;
                value_9 = input_3;
                _tlgWriteTransfer_EtwWriteTransfer(&WdTracelogStorage8, &WdAsyncnotificationStorage16, 0, 0, 9, buffer_3);
            }
        }
    }
    return;
}

void TraceLoggingRegisterEx_EtwRegister_2K(void *input)
{
    int64_t *data_pointer;
    uint16_t value_2;
    int64_t value_3;
    uint16_t *wide_text;
    uint32_t value_4;
    uint32_t value_5;
    uint32_t value_6;
    uint32_t value_7;
    value_3 = ((int64_t *)input)[1];
    data_pointer = &((int64_t *)input)[4];
    value_4 = *(uint32_t *)(value_3 + -0x10);
    value_5 = *(uint32_t *)(value_3 + -0xc);
    value_6 = *(uint32_t *)(value_3 + -8);
    value_7 = *(uint32_t *)(value_3 + -4);
    if (*data_pointer)
    {
        (*(WD_ROUTINE)swi(0x29))(5);
    }
    ((uint64_t *)input)[5] = 0;
    ((uint64_t *)input)[6] = 0;
    if (!EtwRegister(&value_4, _tlgEnableCallback, input, data_pointer))
    {
        wide_text = ((uint16_t **)input)[1];
        value_2 = *wide_text;
        if (MmGetSystemRoutineAddress(WD_TRACELOG_UNRECOVERED_ADDRESS2))
        {
            (*__guard_dispatch_icall_fptr)(*data_pointer, 2, wide_text, value_2);
        }
    }
    return;
}

#ifndef WDFILTER_TYPES_H
#define WDFILTER_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef uintptr_t (*WD_ROUTINE)();

typedef struct WD_EVENT_DATA_DESCRIPTOR WD_EVENT_DATA_DESCRIPTOR;
typedef struct WD_LAYOUT_1 WD_LAYOUT_1;
typedef struct WD_LAYOUT_2 WD_LAYOUT_2;
typedef struct WD_LAYOUT_3 WD_LAYOUT_3;
typedef struct WD_LAYOUT_4 WD_LAYOUT_4;
typedef struct WD_LAYOUT_5 WD_LAYOUT_5;
typedef struct WD_LAYOUT_6 WD_LAYOUT_6;
typedef struct WD_LAYOUT_7 WD_LAYOUT_7;
typedef struct WD_LAYOUT_8 WD_LAYOUT_8;
typedef struct WD_LAYOUT_9 WD_LAYOUT_9;
typedef struct WD_LAYOUT_10 WD_LAYOUT_10;
typedef struct WD_UNICODE_STRING_VALUE WD_UNICODE_STRING_VALUE;
typedef struct WD_UNICODE_STRING_POINTER_VIEW WD_UNICODE_STRING_POINTER_VIEW;
typedef struct WD_UNICODE_STRING_ADDRESS_VIEW WD_UNICODE_STRING_ADDRESS_VIEW;
typedef struct WD_LAYOUT_14 WD_LAYOUT_14;
typedef struct WD_LAYOUT_15 WD_LAYOUT_15;
typedef struct WD_LAYOUT_16 WD_LAYOUT_16;
typedef struct WD_LAYOUT_17 WD_LAYOUT_17;
typedef struct WD_PROCESS_REFERENCE_VIEW WD_PROCESS_REFERENCE_VIEW;
typedef struct WD_LAYOUT_19 WD_LAYOUT_19;
typedef struct WD_LAYOUT_20 WD_LAYOUT_20;
typedef struct WD_LAYOUT_21 WD_LAYOUT_21;
typedef struct WD_LAYOUT_22 WD_LAYOUT_22;
typedef struct WD_LAYOUT_23 WD_LAYOUT_23;
typedef struct WD_LAYOUT_24 WD_LAYOUT_24;
typedef struct WD_LAYOUT_25 WD_LAYOUT_25;
typedef struct WD_LAYOUT_26 WD_LAYOUT_26;
typedef struct WD_LAYOUT_27 WD_LAYOUT_27;
typedef struct WD_LAYOUT_28 WD_LAYOUT_28;
typedef struct WD_LAYOUT_29 WD_LAYOUT_29;
typedef struct WD_LAYOUT_30 WD_LAYOUT_30;
typedef struct WD_LAYOUT_31 WD_LAYOUT_31;
typedef struct WD_LAYOUT_32 WD_LAYOUT_32;
typedef struct WD_LAYOUT_33 WD_LAYOUT_33;
typedef struct WD_LAYOUT_34 WD_LAYOUT_34;
typedef struct WD_LAYOUT_35 WD_LAYOUT_35;
typedef struct WD_LAYOUT_36 WD_LAYOUT_36;
typedef struct WD_LAYOUT_37 WD_LAYOUT_37;
typedef struct WD_LAYOUT_38 WD_LAYOUT_38;
typedef struct WD_LAYOUT_39 WD_LAYOUT_39;
typedef struct WD_LAYOUT_40 WD_LAYOUT_40;
typedef struct WD_LAYOUT_41 WD_LAYOUT_41;
typedef struct WD_LAYOUT_42 WD_LAYOUT_42;
typedef struct WD_LAYOUT_43 WD_LAYOUT_43;
typedef struct WD_LAYOUT_44 WD_LAYOUT_44;
typedef struct WD_LAYOUT_45 WD_LAYOUT_45;
typedef struct WD_LAYOUT_46 WD_LAYOUT_46;
typedef struct WD_LAYOUT_47 WD_LAYOUT_47;
typedef struct WD_LAYOUT_48 WD_LAYOUT_48;
typedef struct WD_LAYOUT_49 WD_LAYOUT_49;
typedef struct WD_LAYOUT_50 WD_LAYOUT_50;
typedef struct WD_LAYOUT_51 WD_LAYOUT_51;
typedef struct WD_LAYOUT_52 WD_LAYOUT_52;
typedef struct WD_LAYOUT_53 WD_LAYOUT_53;
typedef struct WD_LAYOUT_54 WD_LAYOUT_54;
typedef struct WD_LAYOUT_55 WD_LAYOUT_55;
typedef struct WD_LAYOUT_56 WD_LAYOUT_56;
typedef struct WD_LAYOUT_57 WD_LAYOUT_57;
typedef struct WD_LAYOUT_58 WD_LAYOUT_58;
typedef struct WD_LAYOUT_59 WD_LAYOUT_59;
typedef struct WD_LAYOUT_60 WD_LAYOUT_60;
typedef struct WD_LAYOUT_61 WD_LAYOUT_61;
typedef struct WD_LAYOUT_62 WD_LAYOUT_62;
typedef struct WD_LAYOUT_63 WD_LAYOUT_63;
typedef struct WD_LAYOUT_64 WD_LAYOUT_64;
typedef struct WD_LAYOUT_65 WD_LAYOUT_65;
typedef struct WD_LAYOUT_66 WD_LAYOUT_66;
typedef struct WD_LAYOUT_67 WD_LAYOUT_67;
typedef struct WD_LAYOUT_68 WD_LAYOUT_68;
typedef struct WD_LAYOUT_69 WD_LAYOUT_69;
typedef struct WD_LAYOUT_70 WD_LAYOUT_70;
typedef struct WD_LAYOUT_71 WD_LAYOUT_71;
typedef struct WD_LAYOUT_72 WD_LAYOUT_72;
typedef struct WD_LAYOUT_74 WD_LAYOUT_74;
typedef struct WD_LAYOUT_75 WD_LAYOUT_75;
typedef struct WD_LAYOUT_76 WD_LAYOUT_76;
typedef struct WD_LAYOUT_77 WD_LAYOUT_77;
typedef struct WD_LAYOUT_78 WD_LAYOUT_78;
typedef struct WD_LAYOUT_79 WD_LAYOUT_79;
typedef struct WD_LAYOUT_80 WD_LAYOUT_80;
typedef struct WD_LAYOUT_81 WD_LAYOUT_81;
typedef struct WD_LAYOUT_82 WD_LAYOUT_82;
typedef struct WD_LAYOUT_83 WD_LAYOUT_83;
typedef struct WD_LAYOUT_84 WD_LAYOUT_84;
typedef struct WD_LAYOUT_85 WD_LAYOUT_85;
typedef struct WD_LAYOUT_86 WD_LAYOUT_86;
typedef struct WD_LAYOUT_87 WD_LAYOUT_87;
typedef struct WD_LAYOUT_88 WD_LAYOUT_88;
typedef struct WD_LAYOUT_89 WD_LAYOUT_89;
typedef struct WD_LAYOUT_90 WD_LAYOUT_90;
typedef struct WD_LAYOUT_91 WD_LAYOUT_91;
typedef struct WD_LAYOUT_92 WD_LAYOUT_92;
typedef struct WD_LAYOUT_93 WD_LAYOUT_93;
typedef struct WD_LAYOUT_94 WD_LAYOUT_94;
typedef struct WD_LAYOUT_95 WD_LAYOUT_95;
typedef struct WD_LAYOUT_96 WD_LAYOUT_96;
typedef struct WD_LAYOUT_97 WD_LAYOUT_97;
typedef struct WD_LAYOUT_98 WD_LAYOUT_98;
typedef struct WD_LAYOUT_99 WD_LAYOUT_99;
typedef struct WD_LAYOUT_100 WD_LAYOUT_100;
typedef struct WD_LAYOUT_101 WD_LAYOUT_101;
typedef struct WD_LAYOUT_102 WD_LAYOUT_102;
typedef struct WD_LAYOUT_103 WD_LAYOUT_103;
typedef struct WD_LAYOUT_104 WD_LAYOUT_104;
typedef struct WD_LAYOUT_105 WD_LAYOUT_105;
typedef struct WD_LAYOUT_106 WD_LAYOUT_106;
typedef struct WD_LAYOUT_107 WD_LAYOUT_107;
typedef struct WD_LAYOUT_108 WD_LAYOUT_108;
typedef struct WD_LAYOUT_109 WD_LAYOUT_109;
typedef struct WD_LAYOUT_110 WD_LAYOUT_110;
typedef struct WD_LAYOUT_111 WD_LAYOUT_111;
typedef struct WD_LAYOUT_112 WD_LAYOUT_112;
typedef struct WD_LAYOUT_113 WD_LAYOUT_113;
typedef struct WD_LAYOUT_114 WD_LAYOUT_114;
typedef struct WD_LAYOUT_115 WD_LAYOUT_115;
typedef struct WD_LAYOUT_116 WD_LAYOUT_116;
typedef struct WD_LAYOUT_117 WD_LAYOUT_117;
typedef struct WD_LAYOUT_118 WD_LAYOUT_118;
typedef struct WD_LAYOUT_119 WD_LAYOUT_119;
typedef struct WD_LAYOUT_120 WD_LAYOUT_120;
typedef struct WD_LAYOUT_121 WD_LAYOUT_121;
typedef struct WD_LAYOUT_122 WD_LAYOUT_122;
typedef struct WD_LAYOUT_123 WD_LAYOUT_123;
typedef struct WD_LAYOUT_124 WD_LAYOUT_124;

struct WD_EVENT_DATA_DESCRIPTOR {
    int64_t Ptr;
    int32_t Size;
    uint32_t Reserved;
};

struct WD_LAYOUT_1 {
    int64_t field_0x0;
    int64_t field_0x8;
    int64_t field_0x10;
    int64_t field_0x18;
    int64_t field_0x20;
    int64_t field_0x28;
    int32_t field_0x30;
    int32_t field_0x34;
    int64_t field_0x38;
    uint32_t field_0x40;
    char field_0x44[176];
    uint32_t field_0xf4;
    uint32_t field_0xf8;
    uint32_t field_0xfc;
    uint32_t field_0x100;
    uint32_t field_0x104;
    uint32_t field_0x108;
    uint32_t field_0x10c;
    uint32_t field_0x110;
    char field_0x114[8];
    uint32_t field_0x11c;
};

struct WD_LAYOUT_2 {
    char field_0x0[168];
    uint32_t field_0xa8;
};

struct WD_LAYOUT_3 {
    char field_0x0[256];
    uint32_t field_0x100;
};

struct WD_LAYOUT_4 {
    char field_0x0[16];
    int64_t field_0x10;
};

struct WD_LAYOUT_5 {
    char field_0x0[12];
    int32_t field_0xc;
};

struct WD_LAYOUT_6 {
    int64_t field_0x0;
    char field_0x8[4];
    int32_t field_0xc;
    int32_t field_0x10;
    char field_0x14[4];
};

struct WD_LAYOUT_7 {
    char field_0x0[208];
    int64_t *field_0xd0;
};

struct WD_LAYOUT_8 {
    char field_0x0[264];
    uint64_t field_0x108;
};

struct WD_LAYOUT_9 {
    uint16_t field_0x0;
    uint16_t field_0x2;
    int32_t field_0x4;
    uint64_t field_0x8;
    uint64_t field_0x10;
    char field_0x18[12];
    uint32_t field_0x24;
};

struct WD_LAYOUT_10 {
    uint16_t field_0x0;
    char field_0x2[6];
    uint64_t *field_0x8;
};

struct WD_UNICODE_STRING_VALUE {
    uint16_t Length;
    uint16_t MaximumLength;
    char Alignment[4];
    int64_t Buffer;
};

struct WD_UNICODE_STRING_POINTER_VIEW {
    uint16_t Length;
    char HeaderTail[6];
    uint16_t *Buffer;
};

struct WD_UNICODE_STRING_ADDRESS_VIEW {
    uint16_t Length;
    char HeaderTail[6];
    uint64_t Buffer;
};

struct WD_LAYOUT_14 {
    char field_0x0[228];
    uint32_t field_0xe4;
};

struct WD_LAYOUT_15 {
    char field_0x0[16];
    void *field_0x10;
};

struct WD_LAYOUT_16 {
    uint64_t field_0x0;
    uint64_t field_0x8;
    char field_0x10[8];
    int64_t field_0x18;
    int64_t field_0x20;
    int16_t field_0x28;
    char field_0x2a[6];
};

struct WD_LAYOUT_17 {
    char field_0x0[56];
    uint32_t field_0x38;
};

struct WD_PROCESS_REFERENCE_VIEW {
    char OpaquePrefix[48];
    int32_t ReferenceCount;
};

struct WD_LAYOUT_19 {
    uint32_t field_0x0;
    char field_0x4[4];
    uint64_t field_0x8;
};

struct WD_LAYOUT_20 {
    char field_0x0[8];
    int64_t field_0x8;
};

struct WD_LAYOUT_21 {
    char field_0x0[24];
    int64_t field_0x18;
};

struct WD_LAYOUT_22 {
    char field_0x0[24];
    uint32_t field_0x18;
};

struct WD_LAYOUT_23 {
    uint16_t *field_0x0;
    int32_t field_0x8;
    char field_0xc[4];
};

struct WD_LAYOUT_24 {
    char field_0x0[8];
    int64_t *field_0x8;
};

struct WD_LAYOUT_25 {
    int64_t field_0x0;
    int64_t *field_0x8;
    uint32_t field_0x10;
    char field_0x14[4];
};

struct WD_LAYOUT_26 {
    uint64_t field_0x0;
    uint64_t field_0x8;
};

struct WD_LAYOUT_27 {
    char field_0x0[240];
    int32_t field_0xf0;
};

struct WD_LAYOUT_28 {
    uint32_t field_0x0;
    char field_0x4[4];
    uint64_t field_0x8;
    char field_0x10[8];
    uint32_t field_0x18;
    char field_0x1c[4];
    uint64_t field_0x20;
    char field_0x28[40];
    char field_0x50;
    char field_0x51[7];
};

struct WD_LAYOUT_29 {
    char field_0x0[48];
    uint64_t *field_0x30;
};

struct WD_LAYOUT_30 {
    uint64_t field_0x0;
    int64_t field_0x8;
};

struct WD_LAYOUT_31 {
    uint64_t field_0x0;
    char field_0x8[32];
    uint64_t field_0x28;
    uint64_t field_0x30;
    uint32_t field_0x38;
    uint32_t field_0x3c;
    uint32_t field_0x40;
    char field_0x44[4];
};

struct WD_LAYOUT_32 {
    uint32_t field_0x0;
    uint32_t field_0x4;
    uint64_t field_0x8;
};

struct WD_LAYOUT_33 {
    char field_0x0[200];
    int64_t field_0xc8;
};

struct WD_LAYOUT_34 {
    char field_0x0[40];
    int64_t field_0x28;
};

struct WD_LAYOUT_35 {
    uint32_t field_0x0;
    char field_0x4[4];
    uint64_t field_0x8;
    uint32_t field_0x10;
    char field_0x14[100];
    uint32_t field_0x78;
    uint32_t field_0x7c;
    uint64_t field_0x80;
    char field_0x88;
    char field_0x89[7];
};

struct WD_LAYOUT_36 {
    char field_0x0[8];
    uint64_t field_0x8;
};

struct WD_LAYOUT_37 {
    char field_0x0[228];
    uint32_t field_0xe4;
};

struct WD_LAYOUT_38 {
    int16_t field_0x0;
    int16_t field_0x2;
    char field_0x4[4];
    uint64_t *field_0x8;
    uint32_t field_0x10;
    uint32_t field_0x14;
};

struct WD_LAYOUT_39 {
    char field_0x0[32];
    uint16_t *field_0x20;
};

struct WD_LAYOUT_40 {
    char field_0x0[124];
    int32_t field_0x7c;
};

struct WD_LAYOUT_41 {
    uint32_t field_0x0;
    char field_0x4[4];
    uint64_t field_0x8;
    uint32_t *field_0x10;
    uint32_t field_0x18;
    char field_0x1c[4];
    uint64_t field_0x20;
};

struct WD_LAYOUT_42 {
    char field_0x0[144];
    int32_t field_0x90;
};

struct WD_LAYOUT_43 {
    uint32_t field_0x0;
    char field_0x4[20];
    uint32_t field_0x18;
};

struct WD_LAYOUT_44 {
    char field_0x0[52];
    uint32_t field_0x34;
};

struct WD_LAYOUT_45 {
    char field_0x0[16];
    uint64_t field_0x10;
};

struct WD_LAYOUT_46 {
    int64_t field_0x0;
    int64_t *field_0x8;
    int64_t field_0x10;
    uint32_t field_0x18;
    char field_0x1c[4];
};

struct WD_LAYOUT_47 {
    int64_t field_0x0;
    void *field_0x8;
    uint32_t field_0x10;
    char field_0x14;
    char field_0x15[3];
};

struct WD_LAYOUT_48 {
    int32_t field_0x0;
    uint32_t field_0x4;
    uint64_t *field_0x8;
    char field_0x10[16];
    uint64_t *field_0x20;
    char field_0x28[176];
    char field_0xd8;
    char field_0xd9[7];
};

struct WD_LAYOUT_49 {
    uint8_t *field_0x0;
    int32_t field_0x8;
    char field_0xc[4];
    int64_t field_0x10;
    uint32_t field_0x18;
    char field_0x1c[4];
};

struct WD_LAYOUT_50 {
    char field_0x0[32];
    int64_t field_0x20;
};

struct WD_LAYOUT_51 {
    uint32_t field_0x0;
    uint32_t field_0x4;
    uint32_t field_0x8;
    uint32_t field_0xc;
    uint64_t field_0x10;
};

struct WD_LAYOUT_52 {
    int32_t field_0x0;
    char field_0x4[4];
    uint64_t field_0x8;
    char field_0x10[16];
    int64_t field_0x20;
};

struct WD_LAYOUT_53 {
    int64_t field_0x0;
    uint64_t field_0x8;
};

struct WD_LAYOUT_54 {
    int64_t *field_0x0;
    char field_0x8[8];
    int64_t field_0x10;
};

struct WD_LAYOUT_55 {
    int64_t field_0x0;
    int64_t *field_0x8;
    int64_t field_0x10;
    char field_0x18;
    char field_0x19;
    char field_0x1a;
    char field_0x1b[5];
};

struct WD_LAYOUT_56 {
    uint32_t field_0x0;
    char field_0x4[8];
    uint32_t field_0xc;
    char field_0x10[16];
    uint64_t field_0x20;
    char field_0x28[61];
    char field_0x65;
    char field_0x66[2];
};

struct WD_LAYOUT_57 {
    char field_0x0[4];
    int32_t field_0x4;
};

struct WD_LAYOUT_58 {
    char field_0x0[80];
    void *field_0x50;
};

struct WD_LAYOUT_59 {
    int64_t field_0x0;
    uint16_t field_0x8;
    int16_t field_0xa;
    char field_0xc[4];
    int64_t field_0x10;
    char field_0x18;
    char field_0x19;
    char field_0x1a[6];
};

struct WD_LAYOUT_60 {
    int32_t field_0x0;
    uint32_t field_0x4;
    int64_t field_0x8;
    char field_0x10[16];
    uint32_t *field_0x20;
};

struct WD_LAYOUT_61 {
    int32_t field_0x0;
    char field_0x4[28];
    int64_t field_0x20;
};

struct WD_LAYOUT_62 {
    uint32_t field_0x0;
    uint32_t field_0x4;
    uint64_t field_0x8;
    uint64_t field_0x10;
    uint32_t field_0x18;
    char field_0x1c[8];
    uint32_t field_0x24;
    uint32_t field_0x28;
    char field_0x2c[4];
    int64_t field_0x30;
    uint64_t field_0x38;
    uint64_t field_0x40;
    uint64_t field_0x48;
    uint64_t field_0x50;
    uint32_t field_0x58;
    char field_0x5c[4];
};

struct WD_LAYOUT_63 {
    int32_t field_0x0;
    uint32_t field_0x4;
    int64_t field_0x8;
    char field_0x10[16];
    uint32_t *field_0x20;
};

struct WD_LAYOUT_64 {
    uint16_t field_0x0;
    int16_t field_0x2;
    char field_0x4[4];
    int64_t field_0x8;
    uint32_t field_0x10;
    char field_0x14[4];
    void *field_0x18;
    void *field_0x20;
};

struct WD_LAYOUT_65 {
    uint16_t field_0x0;
    char field_0x2[6];
    int64_t field_0x8;
};

struct WD_LAYOUT_66 {
    uint64_t field_0x0;
    uint32_t field_0x8;
    char field_0xc[4];
};

struct WD_LAYOUT_67 {
    int64_t field_0x0;
    char field_0x8[40];
    uint32_t field_0x30;
    char field_0x34[12];
    uint32_t field_0x40;
    char field_0x44[4];
    uint32_t field_0x48;
    char field_0x4c[12];
    int64_t field_0x58;
    int32_t *field_0x60;
    uint32_t field_0x68;
    char field_0x6c;
    char field_0x6d[3];
    int64_t field_0x70;
};

struct WD_LAYOUT_68 {
    int64_t field_0x0;
    int64_t field_0x8;
    int64_t field_0x10;
    char field_0x18[24];
    uint32_t field_0x30;
    uint32_t field_0x34;
    int64_t field_0x38;
    uint32_t field_0x40;
    char field_0x44[20];
    int64_t field_0x58;
    int64_t field_0x60;
    char field_0x68[4];
    char field_0x6c;
    char field_0x6d[3];
};

struct WD_LAYOUT_69 {
    int16_t field_0x0;
    char field_0x2[38];
    int64_t field_0x28;
    int64_t field_0x30;
    int64_t field_0x38;
    int64_t field_0x40;
    char field_0x48;
    char field_0x49[7];
};

struct WD_LAYOUT_70 {
    int64_t field_0x0;
    int32_t field_0x8;
    char field_0xc[4];
};

struct WD_LAYOUT_71 {
    uint16_t field_0x0;
    char field_0x2[38];
    int64_t field_0x28;
    int64_t field_0x30;
    int32_t field_0x38;
    char field_0x3c[4];
    int64_t field_0x40;
    char field_0x48;
    char field_0x49[7];
};

struct WD_LAYOUT_72 {
    int64_t field_0x0;
    int32_t field_0x8;
    char field_0xc[4];
    int64_t field_0x10;
};

struct WD_LAYOUT_74 {
    int16_t field_0x0;
    char field_0x2[38];
    int64_t field_0x28;
    int64_t field_0x30;
};

struct WD_LAYOUT_75 {
    char field_0x0[84];
    uint32_t field_0x54;
};

struct WD_LAYOUT_76 {
    char field_0x0[24];
    uint64_t field_0x18;
};

struct WD_LAYOUT_77 {
    uint32_t field_0x0;
    char field_0x4[4];
    uint16_t *field_0x8;
};

struct WD_LAYOUT_78 {
    char field_0x0[128];
    WD_LAYOUT_77 *field_0x80;
};

struct WD_LAYOUT_79 {
    uint16_t field_0x0;
    uint16_t field_0x2;
    char field_0x4[4];
    uint64_t field_0x8;
};

struct WD_LAYOUT_80 {
    int16_t field_0x0;
    char field_0x2[38];
    int64_t field_0x28;
    int64_t field_0x30;
    char field_0x38;
    char field_0x39[7];
};

struct WD_LAYOUT_81 {
    char field_0x0[8];
    int16_t *field_0x8;
};

struct WD_LAYOUT_82 {
    uint16_t field_0x0;
    char field_0x2[6];
    uint64_t field_0x8;
};

struct WD_LAYOUT_83 {
    uint16_t field_0x0;
    uint16_t field_0x2;
    char field_0x4[4];
    int64_t field_0x8;
};

struct WD_LAYOUT_84 {
    uint32_t field_0x0;
    char field_0x4[4];
    WD_ROUTINE field_0x8;
    char field_0x10[24];
    uint64_t field_0x28;
    uint64_t field_0x30;
    char field_0x38;
    char field_0x39[7];
};

struct WD_LAYOUT_85 {
    char field_0x0[264];
    int64_t field_0x108;
};

struct WD_LAYOUT_86 {
    uint64_t field_0x0;
    uint64_t field_0x8;
    uint64_t field_0x10;
    uint64_t field_0x18;
    uint64_t field_0x20;
    uint64_t field_0x28;
    uint32_t field_0x30;
    char field_0x34[4];
};

struct WD_LAYOUT_87 {
    uint32_t field_0x0;
    char field_0x4[1];
    uint8_t field_0x5;
    uint16_t field_0x6;
};

struct WD_LAYOUT_88 {
    char field_0x0[32];
    uint64_t field_0x20;
};

struct WD_LAYOUT_89 {
    char field_0x0[128];
    uint32_t *field_0x80;
};

struct WD_LAYOUT_90 {
    uint32_t field_0x0;
    char field_0x4[4];
    int64_t field_0x8;
    char field_0x10[8];
    uint64_t field_0x18;
    uint64_t field_0x20;
    uint64_t field_0x28;
    uint64_t field_0x30;
    uint64_t field_0x38;
    uint64_t field_0x40;
    uint64_t field_0x48;
    uint64_t field_0x50;
    uint64_t field_0x58;
    uint64_t field_0x60;
    uint64_t field_0x68;
    uint64_t field_0x70;
    uint64_t field_0x78;
    uint64_t field_0x80;
    uint64_t field_0x88;
    uint64_t field_0x90;
    uint64_t field_0x98;
    uint64_t field_0xa0;
    uint64_t field_0xa8;
    uint64_t field_0xb0;
    uint64_t field_0xb8;
    uint64_t field_0xc0;
    uint64_t field_0xc8;
    uint64_t field_0xd0;
    uint32_t field_0xd8;
    uint32_t field_0xdc;
    uint32_t field_0xe0;
    uint32_t field_0xe4;
    uint64_t field_0xe8;
    uint32_t field_0xf0;
    char field_0xf4[4];
};

struct WD_LAYOUT_91 {
    uint64_t field_0x0;
    uint64_t field_0x8;
    uint64_t field_0x10;
    uint64_t field_0x18;
    uint64_t field_0x20;
    uint64_t field_0x28;
    uint64_t field_0x30;
    uint64_t field_0x38;
    uint64_t field_0x40;
    uint64_t field_0x48;
    uint64_t field_0x50;
    uint64_t field_0x58;
    uint64_t field_0x60;
    uint64_t field_0x68;
    uint64_t field_0x70;
    uint64_t field_0x78;
    uint64_t field_0x80;
    uint64_t field_0x88;
    uint64_t field_0x90;
    uint64_t field_0x98;
    uint64_t field_0xa0;
    uint64_t field_0xa8;
    uint64_t field_0xb0;
    uint64_t field_0xb8;
    uint32_t field_0xc0;
    uint32_t field_0xc4;
    uint32_t field_0xc8;
    uint32_t field_0xcc;
    uint64_t field_0xd0;
    uint32_t field_0xd8;
    char field_0xdc[4];
};

struct WD_LAYOUT_92 {
    uint32_t field_0x0;
    uint32_t field_0x4;
    uint32_t field_0x8;
    uint32_t field_0xc;
    uint64_t field_0x10;
    uint64_t field_0x18;
    uint64_t field_0x20;
    uint64_t field_0x28;
    uint64_t field_0x30;
    uint64_t field_0x38;
    uint64_t field_0x40;
    uint32_t field_0x48;
    uint32_t field_0x4c;
    uint32_t field_0x50;
    uint32_t field_0x54;
    uint64_t field_0x58;
};

struct WD_LAYOUT_93 {
    uint64_t field_0x0;
    char field_0x8[16];
    char field_0x18;
    char field_0x19[7];
};

struct WD_LAYOUT_94 {
    uint32_t field_0x0;
    char field_0x4[4];
    WD_ROUTINE field_0x8;
};

struct WD_LAYOUT_95 {
    int64_t field_0x0;
    void *field_0x8;
};

struct WD_LAYOUT_96 {
    int64_t field_0x0;
    WD_LAYOUT_65 *field_0x8;
    char field_0x10[4];
    uint32_t field_0x14;
    int64_t field_0x18;
    uint32_t field_0x20;
    char field_0x24[4];
};

struct WD_LAYOUT_97 {
    uint16_t field_0x0;
    char field_0x2[6];
    int64_t field_0x8;
};

struct WD_LAYOUT_98 {
    char field_0x0[8];
    WD_LAYOUT_10 *field_0x8;
};

struct WD_LAYOUT_99 {
    int64_t *field_0x0;
    int64_t *field_0x8;
};

struct WD_LAYOUT_100 {
    int64_t field_0x0;
    int64_t field_0x8;
};

struct WD_LAYOUT_101 {
    uint32_t field_0x0;
    char field_0x4[4];
    uint32_t field_0x8;
};

struct WD_LAYOUT_102 {
    uint64_t *field_0x0;
    int32_t field_0x8;
    char field_0xc[4];
};

struct WD_LAYOUT_103 {
    char field_0x0[208];
    uint64_t *field_0xd0;
};

struct WD_LAYOUT_104 {
    uint32_t field_0x0;
    uint32_t field_0x4;
    int64_t field_0x8;
};

struct WD_LAYOUT_105 {
    uint32_t field_0x0;
    uint32_t field_0x4;
    int64_t field_0x8;
    char field_0x10[528];
    int64_t *field_0x220;
};

struct WD_LAYOUT_106 {
    int64_t field_0x0;
    int64_t field_0x8;
    int32_t field_0x10;
    char field_0x14[4];
};

struct WD_LAYOUT_107 {
    char field_0x0[4];
    uint32_t field_0x4;
};

struct WD_LAYOUT_108 {
    uint32_t field_0x0;
    char field_0x4[4];
    uint64_t field_0x8;
    char field_0x10[16];
    uint32_t *field_0x20;
    uint32_t *field_0x28;
    uint16_t field_0x30;
    uint16_t field_0x32;
    char field_0x34[4];
    int64_t *field_0x38;
    char field_0x40[16];
    uint16_t field_0x50;
    uint16_t field_0x52;
    char field_0x54[4];
    int64_t *field_0x58;
    uint16_t field_0x60;
    uint16_t field_0x62;
    char field_0x64[4];
    int64_t *field_0x68;
    int64_t *field_0x70;
    uint32_t field_0x78;
    uint32_t field_0x7c;
    int64_t *field_0x80;
    uint32_t field_0x88;
    uint32_t field_0x8c;
    char field_0x90[16];
    uint32_t field_0xa0;
    char field_0xa4[4];
};

struct WD_LAYOUT_109 {
    uint16_t field_0x0;
    char field_0x2[2];
    uint32_t field_0x4;
    uint16_t field_0x8;
    char field_0xa[2];
};

struct WD_LAYOUT_110 {
    uint16_t field_0x0;
    char field_0x2[2];
    uint32_t field_0x4;
    uint16_t field_0x8;
    char field_0xa[2];
};

struct WD_LAYOUT_111 {
    int16_t field_0x0;
    int16_t field_0x2;
    char field_0x4[4];
    int64_t field_0x8;
};

struct WD_LAYOUT_112 {
    uint32_t field_0x0;
    char field_0x4[4];
    uint64_t *field_0x8;
};

struct WD_LAYOUT_113 {
    uint16_t field_0x0;
    char field_0x2[6];
    int16_t *field_0x8;
};

struct WD_LAYOUT_114 {
    uint32_t field_0x0;
    char field_0x4[28];
    uint64_t field_0x20;
    WD_ROUTINE field_0x28;
};

struct WD_LAYOUT_115 {
    int64_t field_0x0;
    int64_t field_0x8;
    char field_0x10[8];
    int64_t field_0x18;
    char field_0x20[56];
    int64_t field_0x58;
    int64_t field_0x60;
};

struct WD_LAYOUT_116 {
    int16_t field_0x0;
    char field_0x2[38];
    int64_t field_0x28;
    int64_t field_0x30;
    int64_t field_0x38;
};

struct WD_LAYOUT_117 {
    int64_t field_0x0;
    int64_t field_0x8;
    char field_0x10[16];
    int64_t field_0x20;
    int64_t field_0x28;
    char field_0x30[40];
    int64_t field_0x58;
    int64_t field_0x60;
};

struct WD_LAYOUT_118 {
    int64_t field_0x0;
    int64_t field_0x8;
    char field_0x10[16];
    int64_t field_0x20;
    char field_0x28[32];
    uint32_t field_0x48;
    char field_0x4c[12];
    int64_t field_0x58;
    int64_t field_0x60;
};

struct WD_LAYOUT_119 {
    int64_t field_0x0;
    char field_0x8[4];
    uint32_t field_0xc;
    int32_t field_0x10;
    char field_0x14[20];
    int64_t field_0x28;
};

struct WD_LAYOUT_120 {
    int64_t field_0x0;
    uint32_t field_0x8;
    char field_0xc[4];
    int32_t field_0x10;
    char field_0x14[44];
    int64_t field_0x40;
    char field_0x48;
    char field_0x49[3];
    uint32_t field_0x4c;
    char field_0x50;
    char field_0x51[3];
    int32_t field_0x54;
};

struct WD_LAYOUT_121 {
    char field_0x0[88];
    int16_t *field_0x58;
};

struct WD_LAYOUT_122 {
    int32_t field_0x0;
    char field_0x4[4];
    WD_LAYOUT_121 *field_0x8;
};

struct WD_LAYOUT_123 {
    char field_0x0[40];
    uint64_t field_0x28;
};

struct WD_LAYOUT_124 {
    char field_0x0[104];
    uint64_t field_0x68;
};

#endif

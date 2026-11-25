/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

extern M2C_UNK D_80079AF8;
extern M2C_UNK *D_8008F4B4;
extern M2C_UNK *D_8008F580;
extern M2C_UNK *D_8008F64C;
extern M2C_UNK *D_8008F718;
extern M2C_UNK *D_8008F7E4;
extern M2C_UNK *D_8008F8B0;
extern M2C_UNK *D_8008F97C;
extern M2C_UNK *D_8008FA48;
extern M2C_UNK *D_8008FB14;
extern M2C_UNK *D_8008FBE0;
extern M2C_UNK *D_8008FCAC;
extern M2C_UNK *D_8008FD78;
extern M2C_UNK *D_8008FE44;
extern M2C_UNK *D_8008FF10;
extern M2C_UNK *D_8008FFDC;
extern M2C_UNK *D_800900A8;
extern M2C_UNK *D_80090174;
extern M2C_UNK *D_80090240;
extern M2C_UNK *D_8009030C;
extern M2C_UNK *D_800903D8;
extern M2C_UNK *D_800904A4;
extern M2C_UNK *D_80090C9C;
extern M2C_UNK *D_80091494;
extern M2C_UNK *D_80091C8C;
extern M2C_UNK *D_80092484;
extern M2C_UNK *D_80092550;
extern M2C_UNK *D_8009261C;
extern M2C_UNK *D_800926E8;
extern M2C_UNK *D_800927B4;
extern M2C_UNK *D_80092880;
extern M2C_UNK *D_80093078;
extern M2C_UNK *D_800933A8;
extern M2C_UNK *D_80093540;
extern M2C_UNK *D_80093870;
extern M2C_UNK *D_80093C6C;
extern M2C_UNK *D_80094068;
extern M2C_UNK *D_800942CC;
extern M2C_UNK *D_80094530;
extern M2C_UNK *D_800946C8;
extern M2C_UNK *D_80094794;
extern M2C_UNK *D_80094860;
extern M2C_UNK *D_80094AC4;
extern M2C_UNK *D_80094D28;
extern M2C_UNK *D_80095058;
extern M2C_UNK *D_80095124;
extern M2C_UNK *D_800951F0;
extern M2C_UNK *D_800952BC;
extern M2C_UNK *D_80095388;
extern M2C_UNK *D_80095454;
extern M2C_UNK *D_80095520;
extern M2C_UNK *D_800955EC;
extern M2C_UNK *D_80095784;
extern M2C_UNK *D_8009591C;

void func_80047DA4(void) {
    M2C_UNK **var_a0_10;
    M2C_UNK **var_a0_11;
    M2C_UNK **var_a0_12;
    M2C_UNK **var_a0_13;
    M2C_UNK **var_a0_14;
    M2C_UNK **var_a0_15;
    M2C_UNK **var_a0_16;
    M2C_UNK **var_a0_18;
    M2C_UNK **var_a0_19;
    M2C_UNK **var_a0_2;
    M2C_UNK **var_a0_3;
    M2C_UNK **var_a0_4;
    M2C_UNK **var_a0_6;
    M2C_UNK **var_a0_7;
    M2C_UNK **var_a0_8;
    M2C_UNK **var_a0_9;
    M2C_UNK **var_a1;
    M2C_UNK **var_a1_2;
    M2C_UNK **var_a1_3;
    s32 var_a0;
    s32 var_a0_17;
    s32 var_a0_5;
    s32 var_v1;
    s32 var_v1_10;
    s32 var_v1_11;
    s32 var_v1_12;
    s32 var_v1_13;
    s32 var_v1_14;
    s32 var_v1_15;
    s32 var_v1_16;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_5;
    s32 var_v1_6;
    s32 var_v1_7;
    s32 var_v1_8;
    s32 var_v1_9;

    var_a1 = &D_800904A4;
    var_a0 = 9;
    D_8008F4B4 = &D_80079AF8;
    D_8008F580 = &D_80079AF8;
    D_8008F64C = &D_80079AF8;
    D_8008F718 = &D_80079AF8;
    D_8008F7E4 = &D_80079AF8;
    D_8008F8B0 = &D_80079AF8;
    D_8008F97C = &D_80079AF8;
    D_8008FA48 = &D_80079AF8;
    D_8008FB14 = &D_80079AF8;
    D_8008FBE0 = &D_80079AF8;
    D_8008FCAC = &D_80079AF8;
    D_8008FD78 = &D_80079AF8;
    D_8008FE44 = &D_80079AF8;
    D_8008FF10 = &D_80079AF8;
    D_8008FFDC = &D_80079AF8;
    D_800900A8 = &D_80079AF8;
    D_80090174 = &D_80079AF8;
    D_80090240 = &D_80079AF8;
    D_8009030C = &D_80079AF8;
    D_800903D8 = &D_80079AF8;
    do {
        *var_a1 = &D_80079AF8;
        var_a0 -= 1;
        var_a1 += 0xCC;
    } while (var_a0 != -1);
    var_a0_2 = &D_80090C9C;
    var_v1 = 9;
    do {
        *var_a0_2 = &D_80079AF8;
        var_v1 -= 1;
        var_a0_2 += 0xCC;
    } while (var_v1 != -1);
    var_a0_3 = &D_80091494;
    var_v1_2 = 9;
    do {
        *var_a0_3 = &D_80079AF8;
        var_v1_2 -= 1;
        var_a0_3 += 0xCC;
    } while (var_v1_2 != -1);
    var_a0_4 = &D_80091C8C;
    var_v1_3 = 9;
    do {
        *var_a0_4 = &D_80079AF8;
        var_v1_3 -= 1;
        var_a0_4 += 0xCC;
    } while (var_v1_3 != -1);
    var_a1_2 = &D_80092880;
    var_a0_5 = 9;
    D_80092484 = &D_80079AF8;
    D_80092550 = &D_80079AF8;
    D_8009261C = &D_80079AF8;
    D_800926E8 = &D_80079AF8;
    D_800927B4 = &D_80079AF8;
    do {
        *var_a1_2 = &D_80079AF8;
        var_a0_5 -= 1;
        var_a1_2 += 0xCC;
    } while (var_a0_5 != -1);
    var_a0_6 = &D_80093078;
    var_v1_4 = 3;
    do {
        *var_a0_6 = &D_80079AF8;
        var_v1_4 -= 1;
        var_a0_6 += 0xCC;
    } while (var_v1_4 != -1);
    var_a0_7 = &D_800933A8;
    var_v1_5 = 1;
    do {
        *var_a0_7 = &D_80079AF8;
        var_v1_5 -= 1;
        var_a0_7 += 0xCC;
    } while (var_v1_5 != -1);
    var_a0_8 = &D_80093540;
    var_v1_6 = 3;
    do {
        *var_a0_8 = &D_80079AF8;
        var_v1_6 -= 1;
        var_a0_8 += 0xCC;
    } while (var_v1_6 != -1);
    var_a0_9 = &D_80093870;
    var_v1_7 = 4;
    do {
        *var_a0_9 = &D_80079AF8;
        var_v1_7 -= 1;
        var_a0_9 += 0xCC;
    } while (var_v1_7 != -1);
    var_a0_10 = &D_80093C6C;
    var_v1_8 = 4;
    do {
        *var_a0_10 = &D_80079AF8;
        var_v1_8 -= 1;
        var_a0_10 += 0xCC;
    } while (var_v1_8 != -1);
    var_a0_11 = &D_80094068;
    var_v1_9 = 2;
    do {
        *var_a0_11 = &D_80079AF8;
        var_v1_9 -= 1;
        var_a0_11 += 0xCC;
    } while (var_v1_9 != -1);
    var_a0_12 = &D_800942CC;
    var_v1_10 = 2;
    do {
        *var_a0_12 = &D_80079AF8;
        var_v1_10 -= 1;
        var_a0_12 += 0xCC;
    } while (var_v1_10 != -1);
    var_a0_13 = &D_80094530;
    var_v1_11 = 1;
    do {
        *var_a0_13 = &D_80079AF8;
        var_v1_11 -= 1;
        var_a0_13 += 0xCC;
    } while (var_v1_11 != -1);
    var_a0_14 = &D_80094860;
    var_v1_12 = 2;
    D_800946C8 = &D_80079AF8;
    D_80094794 = &D_80079AF8;
    do {
        *var_a0_14 = &D_80079AF8;
        var_v1_12 -= 1;
        var_a0_14 += 0xCC;
    } while (var_v1_12 != -1);
    var_a0_15 = &D_80094AC4;
    var_v1_13 = 2;
    do {
        *var_a0_15 = &D_80079AF8;
        var_v1_13 -= 1;
        var_a0_15 += 0xCC;
    } while (var_v1_13 != -1);
    var_a0_16 = &D_80094D28;
    var_v1_14 = 3;
    do {
        *var_a0_16 = &D_80079AF8;
        var_v1_14 -= 1;
        var_a0_16 += 0xCC;
    } while (var_v1_14 != -1);
    var_a1_3 = &D_800955EC;
    var_a0_17 = 1;
    D_80095058 = &D_80079AF8;
    D_80095124 = &D_80079AF8;
    D_800951F0 = &D_80079AF8;
    D_800952BC = &D_80079AF8;
    D_80095388 = &D_80079AF8;
    D_80095454 = &D_80079AF8;
    D_80095520 = &D_80079AF8;
    do {
        *var_a1_3 = &D_80079AF8;
        var_a0_17 -= 1;
        var_a1_3 += 0xCC;
    } while (var_a0_17 != -1);
    var_a0_18 = &D_80095784;
    var_v1_15 = 1;
    do {
        *var_a0_18 = &D_80079AF8;
        var_v1_15 -= 1;
        var_a0_18 += 0xCC;
    } while (var_v1_15 != -1);
    var_a0_19 = &D_8009591C;
    var_v1_16 = 1;
    do {
        *var_a0_19 = &D_80079AF8;
        var_v1_16 -= 1;
        var_a0_19 += 0xCC;
    } while (var_v1_16 != -1);
}

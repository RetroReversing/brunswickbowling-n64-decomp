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

extern f64 D_80079910;
extern f64 D_80079918;
extern M2C_UNK D_80093078;
extern M2C_UNK D_80093540;
extern M2C_UNK D_80093870;
extern M2C_UNK D_80093C6C;
extern M2C_UNK D_80094068;
extern M2C_UNK D_80094134;
extern M2C_UNK D_800942CC;
extern M2C_UNK D_80094398;
extern M2C_UNK D_80094530;
extern M2C_UNK D_800946C8;
extern M2C_UNK D_80094860;
extern M2C_UNK D_80094AC4;
extern M2C_UNK D_80094D28;
extern M2C_UNK D_80095058;
extern M2C_UNK D_80095124;
extern M2C_UNK D_800951F0;
extern M2C_UNK D_800952BC;
extern M2C_UNK D_80095388;
extern M2C_UNK D_80095454;
extern M2C_UNK D_800955EC;
extern M2C_UNK D_80095784;
extern M2C_UNK D_8009591C;
extern s32 D_80095B04;
extern s32 D_80095B08;
extern s32 D_80095B0C;

void func_800452EC(void *arg0) {
    M2C_UNK *var_a0;
    M2C_UNK *var_a0_2;
    M2C_UNK *var_a0_3;
    M2C_UNK *var_a0_4;
    M2C_UNK *var_a2;
    M2C_UNK *var_t0;
    M2C_UNK *var_v1;
    M2C_UNK *var_v1_2;
    M2C_UNK *var_v1_3;
    M2C_UNK *var_v1_4;
    M2C_UNK *var_v1_5;
    M2C_UNK *var_v1_6;
    f64 var_ft1;
    s32 var_a3;
    s32 var_a3_10;
    s32 var_a3_11;
    s32 var_a3_12;
    s32 var_a3_2;
    s32 var_a3_3;
    s32 var_a3_4;
    s32 var_a3_5;
    s32 var_a3_6;
    s32 var_a3_7;
    s32 var_a3_8;
    s32 var_a3_9;
    u32 temp_v1;
    void *temp_a2;

    temp_v1 = M2C_FIELD(arg0, u32 *, 0x31C);
    var_ft1 = D_80079910;
    var_a3 = 0;
    if (temp_v1 != 0) {
        var_ft1 = D_80079918;
    }
    var_a2 = &D_800942CC;
    M2C_FIELD(arg0, u32 *, 0x31C) = (u32) (temp_v1 < 1U);
    M2C_FIELD(&D_800951F0, s32 *, 0x9C) = 1;
    M2C_FIELD(&D_80095124, s32 *, 0x9C) = 1;
    M2C_FIELD(&D_80095454, s32 *, 0x9C) = 1;
    M2C_FIELD(&D_800951F0, f32 *, 0x7C) = (f32) ((f64) M2C_FIELD(&D_800951F0, f32 *, 0x7C) + var_ft1);
    M2C_FIELD(&D_80095124, f32 *, 0x7C) = (f32) ((f64) M2C_FIELD(&D_80095124, f32 *, 0x7C) + var_ft1);
    M2C_FIELD(&D_80095454, f32 *, 0x7C) = (f32) ((f64) M2C_FIELD(&D_80095454, f32 *, 0x7C) + var_ft1);
loop_3:
    var_a3 += 1;
    if (var_a3 < (D_80095B04 - 1)) {
        M2C_FIELD(var_a2, s32 *, 0x9C) = 1;
        M2C_FIELD(var_a2, f32 *, 0x7C) = (f32) ((f64) M2C_FIELD(var_a2, f32 *, 0x7C) + var_ft1);
        var_a2 += 0xCC;
        goto loop_3;
    }
    var_a3_2 = 0;
    var_a0 = &D_80095784;
    M2C_FIELD(&D_80094398, s32 *, 0x9C) = 1;
    M2C_FIELD(&D_80094398, f32 *, 0x7C) = (f32) ((f64) M2C_FIELD(&D_80094398, f32 *, 0x7C) + var_ft1);
loop_6:
    var_a3_2 += 1;
    if (var_a3_2 < D_80095B0C) {
        M2C_FIELD(var_a0, s32 *, 0x9C) = 1;
        M2C_FIELD(var_a0, f32 *, 0x7C) = (f32) ((f64) M2C_FIELD(var_a0, f32 *, 0x7C) + var_ft1);
        var_a0 += 51;
        goto loop_6;
    }
    var_a3_3 = 0;
    var_v1 = &D_80093078;
loop_9:
    var_a3_3 += 1;
    if (var_a3_3 < D_80095B04) {
        M2C_FIELD(var_v1, s32 *, 0x9C) = 1;
        M2C_FIELD(var_v1, f32 *, 0x7C) = (f32) ((f64) M2C_FIELD(var_v1, f32 *, 0x7C) + var_ft1);
        var_v1 += 0xCC;
        goto loop_9;
    }
    var_a3_4 = 0;
    var_a0_2 = &D_80093540;
    M2C_FIELD(&D_800946C8, s32 *, 0x9C) = 1;
    M2C_FIELD(&D_800946C8, f32 *, 0x7C) = (f32) ((f64) M2C_FIELD(&D_800946C8, f32 *, 0x7C) + var_ft1);
loop_12:
    var_a3_4 += 1;
    if (var_a3_4 < D_80095B04) {
        M2C_FIELD(var_a0_2, s32 *, 0x9C) = 1;
        M2C_FIELD(var_a0_2, f32 *, 0x7C) = (f32) ((f64) M2C_FIELD(var_a0_2, f32 *, 0x7C) + var_ft1);
        var_a0_2 += 0xCC;
        goto loop_12;
    }
    var_a3_5 = 0;
    var_a0_3 = &D_80094068;
loop_15:
    var_a3_5 += 1;
    if (var_a3_5 < (D_80095B04 - 1)) {
        M2C_FIELD(var_a0_3, s32 *, 0x9C) = 1;
        M2C_FIELD(var_a0_3, f32 *, 0x7C) = (f32) ((f64) M2C_FIELD(var_a0_3, f32 *, 0x7C) + var_ft1);
        var_a0_3 += 0xCC;
        goto loop_15;
    }
    var_a3_6 = 0;
    var_a0_4 = &D_8009591C;
    M2C_FIELD(&D_80094134, s32 *, 0x9C) = 1;
    M2C_FIELD(&D_80094134, f32 *, 0x7C) = (f32) ((f64) M2C_FIELD(&D_80094134, f32 *, 0x7C) + var_ft1);
loop_18:
    var_a3_6 += 1;
    if (var_a3_6 < D_80095B0C) {
        M2C_FIELD(var_a0_4, s32 *, 0x9C) = 1;
        M2C_FIELD(var_a0_4, f32 *, 0x7C) = (f32) ((f64) M2C_FIELD(var_a0_4, f32 *, 0x7C) + var_ft1);
        var_a0_4 += 0xCC;
        goto loop_18;
    }
    var_a3_7 = 0;
    var_v1_2 = &D_80093870;
loop_21:
    var_a3_7 += 1;
    if (D_80095B04 >= var_a3_7) {
        M2C_FIELD(var_v1_2, s32 *, 0x9C) = 1;
        M2C_FIELD(var_v1_2, f32 *, 0x7C) = (f32) ((f64) M2C_FIELD(var_v1_2, f32 *, 0x7C) + var_ft1);
        var_v1_2 += 0xCC;
        goto loop_21;
    }
    var_t0 = &D_800955EC;
    temp_a2 = &D_80094530 + 0xCC;
    M2C_FIELD(&D_80094530, s32 *, 0x9C) = 1;
    M2C_FIELD(temp_a2, s32 *, 0x9C) = 1;
    M2C_FIELD(&D_800952BC, s32 *, 0x9C) = 1;
    M2C_FIELD(&D_80095388, s32 *, 0x9C) = 1;
    var_a3_8 = 0;
    M2C_FIELD(&D_80094530, f32 *, 0x7C) = (f32) ((f64) M2C_FIELD(&D_80094530, f32 *, 0x7C) + var_ft1);
    M2C_FIELD(temp_a2, f32 *, 0x7C) = (f32) ((f64) M2C_FIELD(temp_a2, f32 *, 0x7C) + var_ft1);
    M2C_FIELD(&D_800952BC, f32 *, 0x7C) = (f32) ((f64) M2C_FIELD(&D_800952BC, f32 *, 0x7C) + var_ft1);
    M2C_FIELD(&D_80095388, f32 *, 0x7C) = (f32) ((f64) M2C_FIELD(&D_80095388, f32 *, 0x7C) + var_ft1);
loop_24:
    var_a3_8 += 1;
    if (var_a3_8 < D_80095B08) {
        M2C_FIELD(var_t0, s32 *, 0x9C) = 1;
        M2C_FIELD(var_t0, f32 *, 0x7C) = (f32) ((f64) M2C_FIELD(var_t0, f32 *, 0x7C) + var_ft1);
        var_t0 += 0xCC;
        goto loop_24;
    }
    var_a3_9 = 0;
    var_v1_3 = &D_80093C6C;
loop_27:
    var_a3_9 += 1;
    if (D_80095B04 >= var_a3_9) {
        M2C_FIELD(var_v1_3, s32 *, 0x9C) = 1;
        M2C_FIELD(var_v1_3, f32 *, 0x7C) = (f32) ((f64) M2C_FIELD(var_v1_3, f32 *, 0x7C) + var_ft1);
        var_v1_3 += 0xCC;
        goto loop_27;
    }
    var_a3_10 = 0;
    var_v1_4 = &D_80094AC4;
loop_30:
    var_a3_10 += 1;
    if (var_a3_10 < 3) {
        M2C_FIELD(var_v1_4, s32 *, 0x9C) = 1;
        M2C_FIELD(var_v1_4, f32 *, 0x7C) = (f32) ((f64) M2C_FIELD(var_v1_4, f32 *, 0x7C) + var_ft1);
        var_v1_4 += 0xCC;
        goto loop_30;
    }
    var_a3_11 = 0;
    var_v1_5 = &D_80094860;
loop_33:
    var_a3_11 += 1;
    if (var_a3_11 < 3) {
        M2C_FIELD(var_v1_5, s32 *, 0x9C) = 1;
        M2C_FIELD(var_v1_5, f32 *, 0x7C) = (f32) ((f64) M2C_FIELD(var_v1_5, f32 *, 0x7C) + var_ft1);
        var_v1_5 += 0xCC;
        goto loop_33;
    }
    var_a3_12 = 0;
    var_v1_6 = &D_80094D28;
loop_36:
    var_a3_12 += 1;
    if (var_a3_12 < D_80095B04) {
        M2C_FIELD(var_v1_6, s32 *, 0x9C) = 1;
        M2C_FIELD(var_v1_6, f32 *, 0x7C) = (f32) ((f64) M2C_FIELD(var_v1_6, f32 *, 0x7C) + var_ft1);
        var_v1_6 += 0xCC;
        goto loop_36;
    }
    M2C_FIELD(&D_80095058, s32 *, 0x9C) = 1;
    M2C_FIELD(&D_80095058, f32 *, 0x7C) = (f32) ((f64) M2C_FIELD(&D_80095058, f32 *, 0x7C) + var_ft1);
}

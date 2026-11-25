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

extern double D_8007C458;
extern double D_8007C468;
extern double D_8007C470;
extern double D_8007C478;
extern double D_8007C480;
extern double D_8007C460;
extern int D_8007C4E8;
s32 func_8000436C();
s32 func_8001092C();
f64 func_80057DC0();
extern f64 D_80071BF0;
extern f64 D_80071BF8;
extern f64 D_80071C00;
extern f64 D_80071C08;
extern f64 D_80071C10;
extern f64 D_80071C18;
extern f64 D_80071C20;
extern f64 D_80071C28;
extern f64 D_80071C30;
extern f64 D_80071C38;
extern f64 D_80071C40;
extern f64 D_80071C48;
extern f64 D_80071C50;
extern f64 D_80071C58;
extern f64 D_80071C60;
extern f64 D_80071C68;
extern f64 D_80071C70;
extern f64 D_80071C78;
extern f64 D_80071C80;
extern f64 D_80071C88;
extern f64 D_80071C90;
extern f64 D_80071C98;
extern f64 D_80071CA0;
extern f64 D_80071CA8;
extern f64 D_80071CB0;
extern f64 D_80071CB8;
extern f64 D_80071CC0;
extern f64 D_80071CC8;
extern f64 D_80071CD0;
extern f64 D_80071CD8;
extern f64 D_80071CE0;
extern f64 D_80071CE8;
extern f64 D_80071CF0;
extern f64 D_80071CF8;
extern f64 D_80071D00;
extern f64 D_80071D08;
extern f64 D_80071D10;
extern f64 D_80071D18;
extern f64 D_80071D20;
extern f64 D_80071D28;
extern f64 D_80071D30;
extern f64 D_80071D38;
extern f64 D_80071D40;
extern f64 D_80071D48;
extern f64 D_80071D50;
extern f64 D_80071D58;
extern f64 D_80071D60;
extern f64 D_80071D68;
extern f64 D_80071D70;
extern f64 D_80071D78;
extern f64 D_80071D80;
extern s32 D_8007B210;
extern char D_8007C404[];
extern char D_8007C4F0[];
extern s32 D_8007CCD8;
extern char D_8007CD00[];
extern char D_8007CF00[];

void func_8000359C(s32 arg0) {
    f64 sp28;
    f64 sp30;
    f64 sp38;
    f64 sp40;
    f64 sp48;
    f64 sp50;
    f64 sp58;
    f64 sp60;
    f64 sp68;
    f64 sp70;
    f64 sp78;
    f64 sp80;
    f64 sp88;
    f64 sp90;
    f64 sp98;
    f64 spA0;
    f64 spA8;
    f64 spB0;
    f64 spB8;
    f64 spC0;
    f64 spC8;
    f64 spD0;
    f64 spD8;
    f64 spE0;
    f64 spE8;
    f64 spF0;
    f64 spF8;
    f64 temp_fa0;
    f64 temp_fa0_10;
    f64 temp_fa0_11;
    f64 temp_fa0_12;
    f64 temp_fa0_13;
    f64 temp_fa0_14;
    f64 temp_fa0_15;
    f64 temp_fa0_2;
    f64 temp_fa0_3;
    f64 temp_fa0_4;
    f64 temp_fa0_5;
    f64 temp_fa0_6;
    f64 temp_fa0_7;
    f64 temp_fa0_8;
    f64 temp_fa0_9;
    f64 temp_fa1;
    f64 temp_fs1;
    f64 temp_fs2;
    f64 temp_fs3;
    f64 temp_fs3_2;
    f64 temp_fs3_3;
    f64 temp_fs4;
    f64 temp_fs4_2;
    f64 temp_fs4_3;
    f64 temp_fs4_4;
    f64 temp_fs4_5;
    f64 temp_fs5;
    f64 temp_fs5_2;
    f64 temp_fs5_3;
    f64 temp_fs5_4;
    f64 temp_fs5_5;
    f64 temp_fs5_6;
    f64 temp_fs5_7;
    f64 temp_ft0;
    f64 temp_ft0_2;
    f64 temp_ft0_3;
    f64 temp_ft0_4;
    f64 temp_ft0_5;
    f64 temp_ft1;
    f64 temp_ft1_2;
    f64 temp_ft1_3;
    f64 temp_ft1_4;
    f64 temp_ft1_5;
    f64 temp_ft1_6;
    f64 temp_ft2;
    f64 temp_ft3;
    f64 temp_ft4;
    f64 temp_ft5;
    f64 temp_fv0;
    f64 temp_fv0_2;
    f64 temp_fv0_3;
    f64 temp_fv0_4;
    f64 temp_fv0_5;
    f64 temp_fv0_6;
    f64 temp_fv0_7;
    f64 temp_fv0_8;
    f64 temp_fv0_9;
    f64 temp_fv1;
    f64 temp_fv1_2;
    f64 temp_fv1_3;
    f64 temp_fv1_4;
    f64 temp_fv1_5;
    f64 temp_fv1_6;
    f64 temp_fv1_7;
    f64 var_fs0;
    f64 var_fs0_2;
    f64 var_fs0_3;
    f64 var_fs0_4;
    f64 var_fs0_5;
    f64 var_fs0_6;
    f64 var_fs0_7;
    f64 var_fs0_8;
    f64 var_fs3;
    f64 var_fs3_2;
    f64 var_fs4;
    f64 var_fs4_2;
    f64 var_fv0;
    f64 var_fv0_2;
    f64 var_fv0_3;
    f64 var_fv0_4;
    f64 var_fv1;
    f64 var_fv1_2;
    f64 var_fv1_3;
    f64 var_fv1_4;
    s32 temp_a2;
    void *temp_a1;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_v0;
    void *temp_v0_2;

    temp_s0 = (arg0 * 0xC8) + D_8007C4F0;
    if (M2C_FIELD(temp_s0, s32 *, 0x48) == 1) {
        if ((D_8007C458 >= 0.0) && (D_8007C458 <= D_80071BF0)) {
            temp_fa0 = M2C_FIELD(temp_s0, f64 *, 0) - D_8007C458;
            sp28 = temp_fa0;
            temp_fv0 = func_80057DC0(temp_fa0);
            temp_fs3 = D_80071BF8;
            if (!(temp_fs3 < temp_fv0)) {
                temp_fa0_2 = M2C_FIELD(temp_s0, f64 *, 0x10) - D_8007C468;
                sp38 = temp_fa0_2;
                temp_fv0_2 = func_80057DC0(temp_fa0_2);
                if (temp_fv0 < temp_fv0_2) {
                    temp_fs5 = D_80071C00;
                    var_fs4 = D_80071C08;
                    var_fs0 = (temp_fv0_2 * temp_fs5) + (temp_fv0 * var_fs4);
                    if (!(temp_fs3 < var_fs0)) {
                        sp30 = D_80071C10;
                        var_fv0 = func_80057DC0(D_80071C10);
                        if (!(var_fv0 <= temp_fv0_2)) {
                            var_fv1 = (var_fv0 * temp_fs5) - (temp_fv0_2 * D_80071C18);
                            goto block_12;
                        }
                        goto block_10;
                        goto block_13;
                    }
                } else {
                    temp_fs5_2 = D_80071C20;
                    var_fs4 = D_80071C28;
                    var_fs0 = (temp_fv0 * temp_fs5_2) + (temp_fv0_2 * var_fs4);
                    if (!(temp_fs3 < var_fs0)) {
                        sp30 = D_80071C30;
                        var_fv0 = func_80057DC0(D_80071C30);
                        if (var_fv0 <= temp_fv0) {
block_10:
                            var_fs0_2 = var_fs0 + (var_fv0 * var_fs4);
                        } else {
                            var_fv1 = (var_fv0 * temp_fs5_2) - (temp_fv0 * D_80071C38);
block_12:
                            var_fs0_2 = var_fs0 + var_fv1;
                        }
block_13:
                        if (var_fs0_2 <= D_80071C40) {
                            temp_fs4 = sp28 / var_fs0_2;
                            spC0 = D_8007C470;
                            temp_fs5_3 = sp30 / var_fs0_2;
                            spC8 = D_8007C478;
                            temp_fv0_3 = sp38 / var_fs0_2;
                            spD0 = D_8007C480;
                            spB8 = temp_fv0_3;
                            sp28 = temp_fs4;
                            sp30 = temp_fs5_3;
                            sp38 = temp_fv0_3;
                            sp40 = D_8007C470;
                            temp_fs1 = (D_8007C470 * temp_fs4) + (D_8007C478 * temp_fs5_3) + (D_8007C480 * temp_fv0_3);
                            sp48 = D_8007C478;
                            sp50 = D_8007C480;
                            if (D_80071C48 < temp_fs1) {
                                temp_fv1 = D_80071C40 - var_fs0_2;
                                spD8 = D_80071C50;
                                if (!((2.0 * temp_fs1) <= temp_fv1)) {
                                    spD8 = temp_fv1 / temp_fs1;
                                }
                                temp_ft5 = spB8 * D_80071C58;
                                spF8 = temp_fs4 * D_80071C58;
                                spF0 = temp_ft5;
                                temp_fa1 = (spB8 * D_80071C60) - (temp_ft5 * temp_fs5_3);
                                temp_fa0_3 = (temp_ft5 * temp_fs4) - (spF8 * spB8);
                                temp_ft3 = (spF8 * temp_fs5_3) - (temp_fs4 * D_80071C60);
                                temp_ft1 = (temp_fs1 * D_80071C70) / ((((temp_fa1 * temp_fa1) + (temp_fa0_3 * temp_fa0_3) + (temp_ft3 * temp_ft3)) * D_80071C68) + D_80071C78);
                                temp_fv1_2 = temp_ft1 * D_80071C80;
                                temp_fs2 = temp_fv1_2 * temp_fs4;
                                temp_ft4 = temp_fv1_2 * temp_fs5_3;
                                temp_fs3_2 = temp_fv1_2 * spB8;
                                temp_fv1_3 = temp_ft1 * D_80071C88;
                                spE0 = temp_ft4;
                                spE8 = temp_fv1_3 * spB8;
                                spA0 = spF8;
                                spA8 = temp_fs5_3 * D_80071C58;
                                spB0 = spF0;
                                spA8 = D_80071C60;
                                D_8007C458 = (f64) (D_8007C458 - (spD8 * spC0));
                                D_8007C468 = (f64) (D_8007C468 - (spD8 * spD0));
                                D_8007C460 = (f64) (D_8007C460 - (spD8 * spC8));
                                sp88 = temp_fa1;
                                sp90 = temp_fa0_3;
                                sp98 = temp_ft3;
                                sp58 = temp_fs2;
                                sp68 = temp_fs3_2;
                                sp60 = temp_ft4;
                                D_8007C470 = (f64) (spC0 + temp_fs2);
                                D_8007C480 = (f64) (spD0 + temp_fs3_2);
                                sp58 = temp_fv1_3 * temp_fs4;
                                sp60 = temp_fv1_3 * temp_fs5_3;
                                sp68 = spE8;
                                func_8001092C(temp_fa0_3, temp_fa1, arg0, &spA0, &sp58);
                                temp_a1 = (arg0 * 0xC8) + D_8007C4F0;
                                D_8007C458 = (f64) (D_8007C458 + (spD8 * D_8007C470));
                                D_8007C460 = (f64) (D_8007C460 + (spD8 * D_8007C478));
                                D_8007C468 = (f64) (D_8007C468 + (spD8 * D_8007C480));
                                temp_ft2 = (M2C_FIELD(temp_a1, f64 *, 0x70) * M2C_FIELD(temp_a1, f64 *, 0x28)) - (M2C_FIELD(temp_a1, f64 *, 0x78) * M2C_FIELD(temp_a1, f64 *, 0x20));
                                M2C_FIELD(temp_a1, f64 *, 0) += (spD8 * M2C_FIELD(temp_a1, f64 *, 0x50));
                                M2C_FIELD(temp_a1, f64 *, 0x10) += (spD8 * M2C_FIELD(temp_a1, f64 *, 0x60));
                                M2C_FIELD(temp_a1, f64 *, 8) += (spD8 * M2C_FIELD(temp_a1, f64 *, 0x58));
                                sp70 = temp_ft2;
                                sp78 = (M2C_FIELD(temp_a1, f64 *, 0x78) * M2C_FIELD(temp_a1, f64 *, 0x18)) - (M2C_FIELD(temp_a1, f64 *, 0x68) * M2C_FIELD(temp_a1, f64 *, 0x28));
                                temp_ft0 = (M2C_FIELD(temp_a1, f64 *, 0x68) * M2C_FIELD(temp_a1, f64 *, 0x20)) - (M2C_FIELD(temp_a1, f64 *, 0x70) * M2C_FIELD(temp_a1, f64 *, 0x18));
                                sp80 = temp_ft0;
                                M2C_FIELD(temp_a1, f64 *, 0x18) += (spD8 * temp_ft2);
                                M2C_FIELD(temp_a1, f64 *, 0x20) += (spD8 * sp78);
                                temp_ft1_2 = (M2C_FIELD(temp_a1, f64 *, 0x70) * M2C_FIELD(temp_a1, f64 *, 0x40)) - (M2C_FIELD(temp_a1, f64 *, 0x78) * M2C_FIELD(temp_a1, f64 *, 0x38));
                                M2C_FIELD(temp_a1, f64 *, 0x28) += (spD8 * temp_ft0);
                                sp70 = temp_ft1_2;
                                sp78 = (M2C_FIELD(temp_a1, f64 *, 0x78) * M2C_FIELD(temp_a1, f64 *, 0x30)) - (M2C_FIELD(temp_a1, f64 *, 0x68) * M2C_FIELD(temp_a1, f64 *, 0x40));
                                sp80 = (M2C_FIELD(temp_a1, f64 *, 0x68) * M2C_FIELD(temp_a1, f64 *, 0x38)) - (M2C_FIELD(temp_a1, f64 *, 0x70) * M2C_FIELD(temp_a1, f64 *, 0x30));
                                M2C_FIELD(temp_a1, f64 *, 0x30) += (spD8 * temp_ft1_2);
                                M2C_FIELD(temp_a1, f64 *, 0x38) += (spD8 * sp78);
                                M2C_FIELD(temp_a1, f64 *, 0x80) = (f64) (M2C_FIELD(temp_a1, f64 *, 0) + (M2C_FIELD(temp_a1, f64 *, 0x18) * D_80071C90));
                                M2C_FIELD(temp_a1, f64 *, 0x40) += (spD8 * sp80);
                                M2C_FIELD(temp_a1, f64 *, 0x88) = (f64) (M2C_FIELD(temp_a1, f64 *, 8) + (M2C_FIELD(temp_a1, f64 *, 0x20) * D_80071C90));
                                spF8 = M2C_FIELD(temp_a1, f64 *, 0x28) * D_80071C98;
                                M2C_FIELD(temp_a1, f64 *, 0xB0) = (f64) (M2C_FIELD(temp_a1, f64 *, 0) + M2C_FIELD(temp_a1, f64 *, 0x18));
                                M2C_FIELD(temp_a1, f64 *, 0x90) = (f64) (M2C_FIELD(temp_a1, f64 *, 0x10) + (M2C_FIELD(temp_a1, f64 *, 0x28) * D_80071C90));
                                M2C_FIELD(temp_a1, f64 *, 0xB8) = (f64) (M2C_FIELD(temp_a1, f64 *, 8) + M2C_FIELD(temp_a1, f64 *, 0x20));
                                M2C_FIELD(temp_a1, f64 *, 0xC0) = (f64) (M2C_FIELD(temp_a1, f64 *, 0x10) + M2C_FIELD(temp_a1, f64 *, 0x28));
                                temp_a2 = M2C_FIELD(temp_a1, s32 *, 0x48);
                                M2C_FIELD(temp_a1, f64 *, 0x98) = (f64) (M2C_FIELD(temp_a1, f64 *, 0) + (M2C_FIELD(temp_a1, f64 *, 0x18) * D_80071C98));
                                M2C_FIELD(temp_a1, f64 *, 0xA0) = (f64) (M2C_FIELD(temp_a1, f64 *, 8) + (M2C_FIELD(temp_a1, f64 *, 0x20) * D_80071C98));
                                M2C_FIELD(temp_a1, f64 *, 0xA8) = (f64) (M2C_FIELD(temp_a1, f64 *, 0x10) + spF8);
                                if (temp_a2 != 1) {
                                    D_8007C4E8 = 1;
                                    return;
                                }
                                D_8007CCD8 |= temp_a2 << (0x1E - arg0);
                                *((arg0 * 4) + D_8007C404) = D_8007B210;
                                M2C_FIELD(temp_a1, s32 *, 0x48) = 2;
                                D_8007C4E8 = 1;
                            }
                        }
                    }
                }
            }
        } else {
            goto block_22;
        }
    } else {
block_22:
        temp_s0_2 = (arg0 * 0xC8) + D_8007C4F0;
        temp_fa0_4 = M2C_FIELD(temp_s0_2, f64 *, 0) - D_8007C458;
        sp28 = temp_fa0_4;
        temp_fv0_4 = func_80057DC0(temp_fa0_4);
        temp_fs3_3 = D_80071CA0;
        if (!(temp_fs3_3 < temp_fv0_4)) {
            temp_fa0_5 = M2C_FIELD(temp_s0_2, f64 *, 0x10) - D_8007C468;
            sp38 = temp_fa0_5;
            temp_fv0_5 = func_80057DC0(temp_fa0_5);
            if (temp_fv0_4 < temp_fv0_5) {
                temp_fs5_4 = D_80071CA8;
                var_fs4_2 = D_80071CB0;
                var_fs0_3 = (temp_fv0_5 * temp_fs5_4) + (temp_fv0_4 * var_fs4_2);
                if (!(temp_fs3_3 < var_fs0_3)) {
                    temp_fa0_6 = M2C_FIELD(temp_s0_2, f64 *, 8) - D_8007C460;
                    sp30 = temp_fa0_6;
                    var_fv0_2 = func_80057DC0(temp_fa0_6);
                    if (!(var_fv0_2 <= temp_fv0_5)) {
                        var_fv1_2 = (var_fv0_2 * temp_fs5_4) - (temp_fv0_5 * D_80071CB8);
                        goto block_31;
                    }
                    goto block_29;
                    goto block_32;
                }
            } else {
                temp_fs5_5 = D_80071CC0;
                var_fs4_2 = D_80071CC8;
                var_fs0_3 = (temp_fv0_4 * temp_fs5_5) + (temp_fv0_5 * var_fs4_2);
                if (!(temp_fs3_3 < var_fs0_3)) {
                    temp_fa0_7 = M2C_FIELD(temp_s0_2, f64 *, 8) - D_8007C460;
                    sp30 = temp_fa0_7;
                    var_fv0_2 = func_80057DC0(temp_fa0_7);
                    if (var_fv0_2 <= temp_fv0_4) {
block_29:
                        var_fs0_4 = var_fs0_3 + (var_fv0_2 * var_fs4_2);
                    } else {
                        var_fv1_2 = (var_fv0_2 * temp_fs5_5) - (temp_fv0_4 * D_80071CD0);
block_31:
                        var_fs0_4 = var_fs0_3 + var_fv1_2;
                    }
block_32:
                    if (var_fs0_4 <= D_80071CD8) {
                        if (var_fs0_4 <= D_80071CE0) {
                            if (var_fs0_4 <= D_80071CE8) {
                                sp40 = sp28 * D_80071CF0;
                                sp48 = sp30 * D_80071CF0;
                                sp50 = sp38 * D_80071CF0;
                                func_8000436C(arg0, D_80071CE8, &sp28, &sp40, D_8007CF00);
                            }
                            temp_s0_3 = (arg0 * 0xC8) + D_8007C4F0;
                            temp_fa0_8 = M2C_FIELD(temp_s0_3, f64 *, 0x80) - D_8007C458;
                            sp28 = temp_fa0_8;
                            temp_fv0_6 = func_80057DC0(temp_fa0_8);
                            temp_fs5_6 = D_80071CF8;
                            if (!(temp_fs5_6 < temp_fv0_6)) {
                                temp_fa0_9 = M2C_FIELD(temp_s0_3, f64 *, 0x90) - D_8007C468;
                                sp38 = temp_fa0_9;
                                temp_fv0_7 = func_80057DC0(temp_fa0_9);
                                if (temp_fv0_6 < temp_fv0_7) {
                                    temp_fs4_2 = D_80071D00;
                                    var_fs3 = D_80071D08;
                                    var_fs0_5 = (temp_fv0_7 * temp_fs4_2) + (temp_fv0_6 * var_fs3);
                                    if (!(temp_fs5_6 < var_fs0_5)) {
                                        temp_fa0_10 = M2C_FIELD(temp_s0_3, f64 *, 0x88) - D_8007C460;
                                        sp30 = temp_fa0_10;
                                        var_fv0_3 = func_80057DC0(temp_fa0_10);
                                        if (!(var_fv0_3 <= temp_fv0_7)) {
                                            var_fv1_3 = (var_fv0_3 * temp_fs4_2) - (temp_fv0_7 * D_80071D10);
                                            goto block_45;
                                        }
                                        goto block_43;
                                        goto block_46;
                                    }
                                } else {
                                    temp_fs4_3 = D_80071D18;
                                    var_fs3 = D_80071D20;
                                    var_fs0_5 = (temp_fv0_6 * temp_fs4_3) + (temp_fv0_7 * var_fs3);
                                    if (!(temp_fs5_6 < var_fs0_5)) {
                                        temp_fa0_11 = M2C_FIELD(temp_s0_3, f64 *, 0x88) - D_8007C460;
                                        sp30 = temp_fa0_11;
                                        var_fv0_3 = func_80057DC0(temp_fa0_11);
                                        if (var_fv0_3 <= temp_fv0_6) {
block_43:
                                            var_fs0_6 = var_fs0_5 + (var_fv0_3 * var_fs3);
                                        } else {
                                            var_fv1_3 = (var_fv0_3 * temp_fs4_3) - (temp_fv0_6 * D_80071D28);
block_45:
                                            var_fs0_6 = var_fs0_5 + var_fv1_3;
                                        }
block_46:
                                        if (var_fs0_6 <= D_80071D30) {
                                            temp_fv1_4 = sp28 * D_80071D38;
                                            temp_ft0_2 = sp30 * D_80071D38;
                                            temp_ft1_3 = sp38 * D_80071D38;
                                            temp_v0 = (arg0 * 0xC8) + D_8007C4F0;
                                            sp40 = temp_fv1_4;
                                            sp48 = temp_ft0_2;
                                            sp50 = temp_ft1_3;
                                            temp_fv1_5 = temp_fv1_4 + M2C_FIELD(temp_v0, f64 *, 0x80);
                                            sp40 = temp_fv1_5;
                                            temp_ft0_3 = temp_ft0_2 + M2C_FIELD(temp_v0, f64 *, 0x88);
                                            sp48 = temp_ft0_3;
                                            temp_ft1_4 = temp_ft1_3 + M2C_FIELD(temp_v0, f64 *, 0x90);
                                            sp50 = temp_ft1_4;
                                            sp40 = temp_fv1_5 - M2C_FIELD(temp_v0, f64 *, 0);
                                            sp48 = temp_ft0_3 - M2C_FIELD(temp_v0, f64 *, 8);
                                            sp50 = temp_ft1_4 - M2C_FIELD(temp_v0, f64 *, 0x10);
                                            func_8000436C(arg0, D_80071D30, &sp28, &sp40, D_8007CD00);
                                        }
                                    }
                                }
                            }
                        }
                        temp_s0_4 = (arg0 * 0xC8) + D_8007C4F0;
                        temp_fa0_12 = M2C_FIELD(temp_s0_4, f64 *, 0x98) - D_8007C458;
                        sp28 = temp_fa0_12;
                        temp_fv0_8 = func_80057DC0(temp_fa0_12);
                        temp_fs5_7 = D_80071D40;
                        if (!(temp_fs5_7 < temp_fv0_8)) {
                            temp_fa0_13 = M2C_FIELD(temp_s0_4, f64 *, 0xA8) - D_8007C468;
                            sp38 = temp_fa0_13;
                            temp_fv0_9 = func_80057DC0(temp_fa0_13);
                            if (temp_fv0_8 < temp_fv0_9) {
                                temp_fs4_4 = D_80071D48;
                                var_fs3_2 = D_80071D50;
                                var_fs0_7 = (temp_fv0_9 * temp_fs4_4) + (temp_fv0_8 * var_fs3_2);
                                if (!(temp_fs5_7 < var_fs0_7)) {
                                    temp_fa0_14 = M2C_FIELD(temp_s0_4, f64 *, 0xA0) - D_8007C460;
                                    sp30 = temp_fa0_14;
                                    var_fv0_4 = func_80057DC0(temp_fa0_14);
                                    if (!(var_fv0_4 <= temp_fv0_9)) {
                                        var_fv1_4 = (var_fv0_4 * temp_fs4_4) - (temp_fv0_9 * D_80071D58);
                                        goto block_58;
                                    }
                                    goto block_56;
                                    goto block_59;
                                }
                            } else {
                                temp_fs4_5 = D_80071D60;
                                var_fs3_2 = D_80071D68;
                                var_fs0_7 = (temp_fv0_8 * temp_fs4_5) + (temp_fv0_9 * var_fs3_2);
                                if (!(temp_fs5_7 < var_fs0_7)) {
                                    temp_fa0_15 = M2C_FIELD(temp_s0_4, f64 *, 0xA0) - D_8007C460;
                                    sp30 = temp_fa0_15;
                                    var_fv0_4 = func_80057DC0(temp_fa0_15);
                                    if (var_fv0_4 <= temp_fv0_8) {
block_56:
                                        var_fs0_8 = var_fs0_7 + (var_fv0_4 * var_fs3_2);
                                    } else {
                                        var_fv1_4 = (var_fv0_4 * temp_fs4_5) - (temp_fv0_8 * D_80071D70);
block_58:
                                        var_fs0_8 = var_fs0_7 + var_fv1_4;
                                    }
block_59:
                                    if (var_fs0_8 <= D_80071D78) {
                                        temp_fv1_6 = sp28 * D_80071D80;
                                        temp_ft0_4 = sp30 * D_80071D80;
                                        temp_ft1_5 = sp38 * D_80071D80;
                                        temp_v0_2 = (arg0 * 0xC8) + D_8007C4F0;
                                        sp40 = temp_fv1_6;
                                        sp48 = temp_ft0_4;
                                        sp50 = temp_ft1_5;
                                        temp_fv1_7 = temp_fv1_6 + M2C_FIELD(temp_v0_2, f64 *, 0x98);
                                        sp40 = temp_fv1_7;
                                        temp_ft0_5 = temp_ft0_4 + M2C_FIELD(temp_v0_2, f64 *, 0xA0);
                                        sp48 = temp_ft0_5;
                                        temp_ft1_6 = temp_ft1_5 + M2C_FIELD(temp_v0_2, f64 *, 0xA8);
                                        sp50 = temp_ft1_6;
                                        sp40 = temp_fv1_7 - M2C_FIELD(temp_v0_2, f64 *, 0);
                                        sp48 = temp_ft0_5 - M2C_FIELD(temp_v0_2, f64 *, 8);
                                        sp50 = temp_ft1_6 - M2C_FIELD(temp_v0_2, f64 *, 0x10);
                                        func_8000436C(arg0, D_80071D78, &sp28, &sp40, D_8007CF00);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

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

extern int D_8007C4E8;
extern double D_8007C458;
extern double D_8007C468;
extern double D_8007C470;
extern double D_8007C480;
extern double D_8007C4B8;
extern double D_8007C4D0;
extern double D_8007C4C0;
extern double D_8007C4D8;
extern double D_8007C4C8;
extern double D_8007C4E0;
s32 func_8000F784();
s32 func_8000F968();
s32 func_8000FD5C();
s32 func_800100C8();
s32 func_80010274();
s32 func_80010BCC();
extern f64 D_80073288;
extern f64 D_80073290;
extern f64 D_80073298;
extern f64 D_800732A0;
extern f64 D_800732A8;
extern f64 D_800732B0;
extern f64 D_800732B8;
extern f64 D_800732C0;
extern f64 D_800732C8;
extern f64 D_800732D0;
extern f64 D_800732D8;
extern f64 D_800732E0;
extern f64 D_800732E8;
extern f64 D_800732F0;
extern f64 D_800732F8;
extern f64 D_80073300;
extern f64 D_80073308;
extern f64 D_80073310;
extern f64 D_80073318;
extern f64 D_80073320;
extern f64 D_80073328;
extern f64 D_80073330;
extern s32 D_8007C3F8;
extern f64 D_8007CCC8;
extern s32 D_8007CCD0;
extern s32 D_8007CCD4;
extern s32 D_8007CCD8;
extern s32 D_8007CCDC;
extern u16 D_80099130;
extern u16 D_80099132;
extern u16 D_80099134;
extern s32 D_80099138;

void func_8000F198(void) {
    f64 temp_fa0;
    f64 temp_fa1;
    f64 temp_fa1_2;
    f64 temp_fs1;
    f64 temp_ft0;
    f64 temp_fv1;
    f64 var_fa0;
    s32 temp_ft5;
    s32 temp_ft5_2;
    s32 temp_ft5_3;
    s32 temp_ft5_4;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_s4;
    s32 var_v0;
    u16 *temp_a0_2;
    u16 *temp_a0_3;
    u16 temp_a0;

    var_s4 = 0;
    D_8007CCD8 = 0;
    func_8000F784();
    temp_fs1 = D_80073288;
loop_1:
    if ((var_s4 == 0) && (D_8007CCDC == 0)) {
        if ((D_8007C4E8 != 0) && (((D_8007C458 >= 0.0) && (D_8007C458 < temp_fs1)) || (D_8007C3F8 != 0))) {
            if ((D_8007C468 < D_80073290) && (D_8007C3F8 == 0)) {
                temp_ft5 = (s32) (D_8007C458 / D_800732A0);
                temp_ft5_2 = (s32) (D_8007C468 * D_80073298);
                if (D_8007CCD4 == 1) {
                    var_fa0 = D_800732B0;
                    if (D_8007C468 < D_800732A8) {

                    } else {
                        goto block_22;
                    }
                } else {
                    temp_a0 = *(u16 *)((temp_ft5 * 2) + ((temp_ft5_2 << 5) + D_8007CCD0));
                    var_v0 = temp_a0 & 0xFFFF;
                    if ((u16) D_80099132 < (u16) D_80099130) {
                        var_v0 = (temp_a0 + ((s32) (D_80099130 - D_80099132) / 8)) & 0xFFFF;
                    }
                    temp_fv1 = (f64) var_v0 * D_800732B8;
                    if (temp_fv1 > 0.0) {
                        if (temp_fv1 < D_800732C0) {
                            var_fa0 = D_800732D0 - (temp_fv1 * D_800732C8);
                        } else {
                            var_fa0 = D_800732E0 - (temp_fv1 * D_800732D8);
                        }
                        if (D_8007CCC8 < var_fa0) {
                            var_fa0 = D_8007CCC8;
                        }
                    } else {
block_22:
                        var_fa0 = D_8007CCC8;
                    }
                }
                if (D_8007CCD4 != 0) {
                    var_a2 = (s32) *(s32 *)((temp_ft5 * 2) + ((temp_ft5_2 << 5) + D_8007CCD0)) / (s32) (1 << (0xA - D_80099138));
                    if ((u16) D_80099132 < (u16) D_80099130) {
                        var_a2 -= (s32) (D_80099130 - D_80099132) / 8;
                    }
                    temp_a0_2 = (temp_ft5 * 2) + ((temp_ft5_2 << 5) + D_8007CCD0);
                    D_80099130 += var_a2;
                    *temp_a0_2 -= var_a2;
                }
                if ((u16) D_80099134 < (u16) D_80099130) {
                    D_80099130 -= D_80099134;
                } else {
                    D_80099130 = 0;
                }
            } else {
                var_fa0 = D_8007CCC8;
            }
            func_800100C8(var_fa0, D_800732E8);
        } else if ((D_8007C458 >= 0.0) && (D_8007C458 <= temp_fs1) && (D_8007CCD4 != 0) && (D_8007C468 < D_800732F0)) {
            temp_ft5_3 = (s32) (D_8007C458 / D_80073300);
            temp_ft5_4 = (s32) (D_8007C468 * D_800732F8);
            var_a2_2 = (s32) *(s32 *)((temp_ft5_3 * 2) + ((temp_ft5_4 << 5) + D_8007CCD0)) / (s32) (1 << (0xA - D_80099138));
            if ((u16) D_80099132 < (u16) D_80099130) {
                var_a2_2 -= (s32) (D_80099130 - D_80099132) / 8;
            }
            temp_a0_3 = (temp_ft5_3 * 2) + ((temp_ft5_4 << 5) + D_8007CCD0);
            D_80099130 += var_a2_2;
            *temp_a0_3 -= var_a2_2;
        }
        D_8007C458 = (f64) (D_8007C458 + D_8007C470);
        D_8007C468 = (f64) (D_8007C468 + D_8007C480);
        func_80010274();
        func_80010BCC(D_8007C458 + 0x60);
        temp_fa1 = (D_8007C4B8 * D_8007C4D0) + (D_8007C4C0 * D_8007C4D8) + (D_8007C4C8 * D_8007C4E0);
        temp_fa0 = D_8007C4D8 - (temp_fa1 * D_8007C4C0);
        D_8007C4D0 = (f64) (D_8007C4D0 - (temp_fa1 * D_8007C4B8));
        D_8007C4D8 = temp_fa0;
        D_8007C4E0 = (f64) (D_8007C4E0 - (temp_fa1 * D_8007C4C8));
        func_80010BCC(*(void **)&temp_fa0, temp_fa1, D_8007C458 + 0x78);
        temp_ft0 = D_8007C468 + D_8007C480;
        if (D_80073308 < temp_ft0) {
            temp_fa1_2 = (D_8007C458 + D_8007C470) * D_80073310;
            if ((D_80073318 <= (temp_fa1_2 + temp_ft0)) && ((temp_fa1_2 - temp_ft0) <= D_80073320)) {
                var_s4 = 1;
            }
        }
        if ((D_8007C458 < 0.0) || (temp_fs1 < D_8007C458)) {
            if (D_80073328 < (D_8007C468 + D_8007C480)) {
                var_s4 = 1;
            } else {
                func_8000FD5C(D_80073330);
            }
        }
        func_8000F968();
        func_8000F784();
        goto loop_1;
    }
}

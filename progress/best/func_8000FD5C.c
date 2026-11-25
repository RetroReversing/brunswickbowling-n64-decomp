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

extern f64 D_80073340;
extern f64 D_80073348;
extern f64 D_80073350;
extern f64 D_80073358;
extern f64 D_80073360;
extern f64 D_80073368;
extern f64 D_80073370;
extern f64 D_80073378;
extern f64 D_80073380;
extern f64 D_80073388;
extern f64 D_80073390;
extern f64 D_80073398;
extern f64 D_800733A0;
extern f64 D_800733A8;
extern f64 D_800733B0;
extern f64 D_800733B8;
extern f64 D_800733C0;
extern f64 D_800733C8;
extern f64 D_800733D0;
extern f64 D_800733D8;
extern f64 D_800733E0;
extern f64 D_800733E8;
extern f64 D_800733F0;
extern f64 D_800733F8;
extern s32 D_8007B210;
extern s32 D_8007C3F8;
extern M2C_UNK D_8007C458;

void func_8000FD5C(f64 arg0) {
    f64 temp_ft1;
    f64 temp_ft2;
    f64 temp_ft2_2;
    f64 temp_ft2_3;
    f64 temp_ft2_4;
    f64 temp_ft3;
    f64 temp_fv0;
    f64 temp_fv0_2;
    f64 temp_fv0_3;
    f64 var_ft0;
    f64 var_ft1;
    f64 var_ft1_2;
    f64 var_ft3;
    f64 var_fv0;
    f64 var_fv1;
    f64 var_fv1_2;
    f64 var_fv1_3;
    s32 var_condition_bit;
    s32 var_condition_bit_2;

    if (D_80073340 < M2C_FIELD(&D_8007C458, f64 *, 8)) {
        M2C_FIELD(&D_8007C458, f64 *, 8) = (f64) D_80073340;
        M2C_FIELD(&D_8007C458, s32 *, 0x20) = 0;
        M2C_FIELD(&D_8007C458, s32 *, 0x24) = 0;
        D_8007C3F8 = D_8007B210;
    }
    if (D_8007C3F8 != 0) {
        if (M2C_FIELD(&D_8007C458, f64 *, 0) < 0.0) {
            var_ft1 = D_80073348;
            if (M2C_FIELD(&D_8007C458, f64 *, 0) <= var_ft1) {
                /* Duplicate return node #5. Try simplifying control flow for better match */
                M2C_FIELD(&D_8007C458, f64 *, 0) = var_ft1;
                M2C_FIELD(&D_8007C458, f64 *, 0x18) = 0.0;
                M2C_FIELD(&D_8007C458, f64 *, 0x30) = (f64) (M2C_FIELD(&D_8007C458, f64 *, 0x30) * D_80073350);
                M2C_FIELD(&D_8007C458, f64 *, 0x58) = (f64) (M2C_FIELD(&D_8007C458, f64 *, 0x58) * D_80073350);
                return;
            }
            if (((arg0 / D_80073358) * D_80073360) < M2C_FIELD(&D_8007C458, f64 *, 0x18)) {
                M2C_FIELD(&D_8007C458, f64 *, 0x18) = (f64) (M2C_FIELD(&D_8007C458, f64 *, 0x18) - (arg0 * D_80073368));
            }
            var_condition_bit = M2C_FIELD(&D_8007C458, f64 *, 0x30) < 0.0;
            goto block_9;
        }
        var_ft1 = D_80073378;
        if (!(var_ft1 <= M2C_FIELD(&D_8007C458, f64 *, 0))) {
            if (M2C_FIELD(&D_8007C458, f64 *, 0x18) < ((arg0 / D_80073380) * D_80073388)) {
                M2C_FIELD(&D_8007C458, f64 *, 0x18) = (f64) (M2C_FIELD(&D_8007C458, f64 *, 0x18) + (arg0 * D_80073390));
            }
            var_condition_bit = M2C_FIELD(&D_8007C458, f64 *, 0x30) > 0.0;
block_9:
            if (var_condition_bit) {
                M2C_FIELD(&D_8007C458, f64 *, 0x30) = (f64) (M2C_FIELD(&D_8007C458, f64 *, 0x30) * D_80073370);
                M2C_FIELD(&D_8007C458, f64 *, 0x58) = (f64) (M2C_FIELD(&D_8007C458, f64 *, 0x58) * D_80073370);
            }
        } else {
            M2C_FIELD(&D_8007C458, f64 *, 0) = var_ft1;
            M2C_FIELD(&D_8007C458, f64 *, 0x18) = 0.0;
            M2C_FIELD(&D_8007C458, f64 *, 0x30) = (f64) (M2C_FIELD(&D_8007C458, f64 *, 0x30) * D_80073350);
            M2C_FIELD(&D_8007C458, f64 *, 0x58) = (f64) (M2C_FIELD(&D_8007C458, f64 *, 0x58) * D_80073350);
        }
    } else {
        temp_fv0 = M2C_BITWISE(f64, M2C_FIELD(&D_8007C458, s32 *, 0x20)) + arg0;
        temp_ft1 = M2C_FIELD(&D_8007C458, f64 *, 8) + temp_fv0;
        M2C_FIELD(&D_8007C458, s32 *, 0x20) = temp_fv0;
        M2C_FIELD(&D_8007C458, f64 *, 8) = temp_ft1;
        temp_ft3 = -temp_ft1;
        if (M2C_FIELD(&D_8007C458, f64 *, 0) < 0.0) {
            temp_ft2 = -M2C_FIELD(&D_8007C458, f64 *, 0);
            if (temp_ft3 < temp_ft2) {
                var_fv1 = (temp_ft2 * D_80073398) + (temp_ft3 * D_800733A0);
            } else {
                var_fv1 = (temp_ft3 * D_800733A8) + (temp_ft2 * D_800733B0);
            }
            if (var_fv1 < D_800733B8) {
                temp_fv0_2 = (D_800733B8 - var_fv1) / var_fv1;
                temp_ft2_2 = temp_ft2 * temp_fv0_2;
                var_ft3 = temp_ft3 * temp_fv0_2;
                var_ft0 = M2C_FIELD(&D_8007C458, f64 *, 0) - temp_ft2_2;
                var_ft1_2 = M2C_FIELD(&D_8007C458, f64 *, 8) - var_ft3;
                var_fv0 = M2C_FIELD(&D_8007C458, f64 *, 0x18) - temp_ft2_2;
                /* Duplicate return node #21. Try simplifying control flow for better match */
                M2C_FIELD(&D_8007C458, f64 *, 0) = var_ft0;
                M2C_FIELD(&D_8007C458, f64 *, 8) = var_ft1_2;
                M2C_FIELD(&D_8007C458, f64 *, 0x18) = var_fv0;
                M2C_FIELD(&D_8007C458, s32 *, 0x20) = (f64) (M2C_BITWISE(f64, M2C_FIELD(&D_8007C458, s32 *, 0x20)) - var_ft3);
                return;
            }
            var_fv1_2 = D_800733C0;
            var_condition_bit_2 = M2C_FIELD(&D_8007C458, f64 *, 0) <= var_fv1_2;
            goto block_29;
        }
        temp_ft2_3 = M2C_FIELD(&D_8007C458, f64 *, 0) - D_800733C8;
        if (temp_ft3 < temp_ft2_3) {
            var_fv1_3 = (temp_ft2_3 * D_800733D0) + (temp_ft3 * D_800733D8);
        } else {
            var_fv1_3 = (temp_ft3 * D_800733E0) + (temp_ft2_3 * D_800733E8);
        }
        if (var_fv1_3 < D_800733F0) {
            temp_fv0_3 = (D_800733F0 - var_fv1_3) / var_fv1_3;
            temp_ft2_4 = temp_ft2_3 * temp_fv0_3;
            var_ft3 = temp_ft3 * temp_fv0_3;
            var_ft0 = M2C_FIELD(&D_8007C458, f64 *, 0) + temp_ft2_4;
            var_ft1_2 = M2C_FIELD(&D_8007C458, f64 *, 8) - var_ft3;
            var_fv0 = M2C_FIELD(&D_8007C458, f64 *, 0x18) + temp_ft2_4;
            M2C_FIELD(&D_8007C458, f64 *, 0) = var_ft0;
            M2C_FIELD(&D_8007C458, f64 *, 8) = var_ft1_2;
            M2C_FIELD(&D_8007C458, f64 *, 0x18) = var_fv0;
            M2C_FIELD(&D_8007C458, s32 *, 0x20) = (f64) (M2C_BITWISE(f64, M2C_FIELD(&D_8007C458, s32 *, 0x20)) - var_ft3);
            return;
        }
        var_fv1_2 = D_800733F8;
        var_condition_bit_2 = var_fv1_2 <= M2C_FIELD(&D_8007C458, f64 *, 0);
block_29:
        if (var_condition_bit_2) {
            M2C_FIELD(&D_8007C458, f64 *, 0) = var_fv1_2;
            M2C_FIELD(&D_8007C458, f64 *, 0x18) = 0;
            M2C_FIELD(&D_8007C458, s32 *, 0x1C) = 0;
        }
    }
}

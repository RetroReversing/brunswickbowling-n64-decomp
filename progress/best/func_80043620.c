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

extern f64 D_80079820;
extern f64 D_80079828;
extern f64 D_80079830;
extern f64 D_80079838;
extern f64 D_80079840;
extern f64 D_80079848;
extern f64 D_80079850;
extern f64 D_80079858;

s32 func_80043620(void *arg0, void *arg1) {
    f64 sp0;
    f64 sp8;
    f64 sp10;
    f64 sp18;
    f64 sp20;
    f64 sp28;
    f64 sp30;
    f64 sp38;
    f64 sp40;
    f64 temp_fa0;
    f64 temp_ft1;
    f64 temp_ft2;
    f64 temp_ft2_2;
    f64 temp_ft3;
    f64 temp_fv0;
    f64 temp_fv1;
    s32 var_condition_bit;
    s32 var_v0;

    var_v0 = 0;
    if (!(M2C_FIELD(arg0, f64 *, 0x30) < M2C_FIELD(arg0, f64 *, 0x18))) {
        temp_ft1 = M2C_FIELD(M2C_FIELD(arg1, void **, 0xB0), f64 *, 0);
        sp30 = temp_ft1;
        temp_ft2 = M2C_FIELD(M2C_FIELD(arg1, void **, 0xB0), f64 *, 8);
        sp38 = temp_ft2;
        temp_fv1 = M2C_FIELD(M2C_FIELD(arg1, void **, 0xB0), f64 *, 0x10) - D_80079820;
        sp0 = temp_ft1;
        sp8 = temp_ft2;
        sp40 = temp_fv1;
        sp10 = temp_fv1;
        temp_ft3 = temp_ft1 + (M2C_FIELD(M2C_FIELD(arg1, void **, 0xB0), f64 *, 0x18) * D_80079828);
        sp0 = temp_ft3;
        temp_fa0 = temp_ft2 + (M2C_FIELD(M2C_FIELD(arg1, void **, 0xB0), f64 *, 0x20) * D_80079828);
        sp8 = temp_fa0;
        sp18 = temp_ft1;
        sp20 = temp_ft2;
        sp28 = temp_fv1;
        sp10 = temp_fv1 + (M2C_FIELD(M2C_FIELD(arg1, void **, 0xB0), f64 *, 0x28) * D_80079828);
        sp18 = temp_ft1 + (M2C_FIELD(M2C_FIELD(arg1, void **, 0xB0), f64 *, 0x18) * D_80079830);
        temp_ft2_2 = temp_ft2 + (M2C_FIELD(M2C_FIELD(arg1, void **, 0xB0), f64 *, 0x20) * D_80079830);
        sp20 = temp_ft2_2;
        sp28 = temp_fv1 + (M2C_FIELD(M2C_FIELD(arg1, void **, 0xB0), f64 *, 0x28) * D_80079830);
        if ((temp_ft3 < 0.0) || (D_80079838 < temp_ft3)) {
            temp_fv0 = temp_fa0 + D_80079840;
            sp8 = temp_fv0;
            if (D_80079840 < temp_fv0) {
                var_condition_bit = D_80079840 < temp_ft2_2;
                goto block_7;
            }
            goto block_8;
        }
        if (D_80079848 < temp_fa0) {
            var_condition_bit = D_80079848 < temp_ft2_2;
block_7:
            var_v0 = 1;
            if (!var_condition_bit) {
                goto block_8;
            }
        } else {
block_8:
            if ((sp18 < 0.0) || (var_v0 = 0, (D_80079850 < sp18))) {
                sp20 += D_80079858;
                var_v0 = 0;
            }
        }
    }
    return var_v0;
}

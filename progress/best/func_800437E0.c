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

extern f64 D_80079860;
extern f64 D_80079868;
extern f64 D_80079870;
extern f64 D_80079878;
extern f64 D_80079880;
extern f64 D_80079888;
extern f64 D_80079890;
extern f64 D_80079898;

s32 func_800437E0(void *arg0, void *arg1) {
    f64 sp0;
    f64 sp8;
    f64 sp10;
    f64 sp18;
    f64 sp20;
    f64 sp28;
    f64 sp30;
    f64 sp38;
    f64 sp40;
    f64 sp48;
    f64 sp50;
    f64 sp58;
    f64 temp_fa0;
    f64 temp_ft0;
    f64 temp_ft0_2;
    f64 temp_ft1;
    f64 temp_ft2;
    f64 temp_ft2_2;
    f64 temp_ft3;
    f64 temp_ft3_2;
    f64 temp_ft4;
    f64 temp_fv1;
    f64 temp_fv1_2;
    f64 temp_fv1_3;
    s32 var_v0;

    temp_ft2 = M2C_FIELD(M2C_FIELD(arg1, void **, 0xB0), f64 *, 0x18);
    sp48 = temp_ft2;
    temp_fa0 = M2C_FIELD(M2C_FIELD(arg1, void **, 0xB0), f64 *, 0x20);
    sp50 = temp_fa0;
    temp_ft4 = M2C_FIELD(M2C_FIELD(arg1, void **, 0xB0), f64 *, 0x28);
    sp58 = temp_ft4;
    temp_ft1 = M2C_FIELD(M2C_FIELD(arg1, void **, 0xB0), f64 *, 0);
    sp30 = temp_ft1;
    temp_fv1 = M2C_FIELD(M2C_FIELD(arg1, void **, 0xB0), f64 *, 8);
    sp38 = temp_fv1;
    temp_ft3 = temp_fv1 + (temp_fa0 * D_80079860);
    sp8 = temp_fv1;
    sp20 = temp_fv1;
    temp_fv1_2 = temp_fv1 + (temp_fa0 * D_80079868);
    sp0 = temp_ft1;
    sp18 = temp_ft1;
    temp_ft0 = M2C_FIELD(M2C_FIELD(arg1, void **, 0xB0), f64 *, 0x10) - D_80079870;
    sp8 = temp_ft3;
    temp_ft3_2 = temp_ft3 - D_80079878;
    sp20 = temp_fv1_2;
    temp_fv1_3 = temp_fv1_2 - D_80079878;
    sp18 = temp_ft1 + (temp_ft2 * D_80079868);
    temp_ft2_2 = temp_ft0 + (temp_ft4 * D_80079860);
    sp40 = temp_ft0;
    sp10 = temp_ft0;
    sp28 = temp_ft0;
    temp_ft0_2 = temp_ft0 + (temp_ft4 * D_80079868);
    sp0 = temp_ft1 + (temp_ft2 * D_80079860);
    sp8 = temp_ft3_2;
    sp20 = temp_fv1_3;
    sp10 = temp_ft2_2;
    sp28 = temp_ft0_2;
    if (temp_ft3_2 > 0.0) {
        return 0;
    }
    if (temp_fv1_3 > 0.0) {
        return 0;
    }
    if (!(temp_ft2_2 > 0.0) || (var_v0 = 0, !(temp_ft0_2 > 0.0))) {
        var_v0 = 0;
        if (!(-M2C_FIELD(arg0, f64 *, 0x18) < -M2C_FIELD(arg0, f64 *, 0x30)) && (!(D_80079880 < sp8) || (!(sp0 < 0.0) && !(D_80079888 < sp0))) && (!(D_80079890 < sp20) || ((var_v0 = 0, !(sp18 < 0.0)) && !(D_80079898 < sp18)))) {
            var_v0 = 1;
        }
    }
    return var_v0;
}

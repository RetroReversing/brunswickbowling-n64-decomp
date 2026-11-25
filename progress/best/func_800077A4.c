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

s32 func_8001092C();
extern f64 D_80072690;
extern f64 D_80072698;
extern f64 D_800726A0;
extern f64 D_800726A8;
extern f64 D_800726B0;
extern f64 D_800726B8;
extern char D_8007C4F0[];

void func_800077A4(s32 arg0, s32 arg1, s32 arg2, f64 arg3, f64 arg4, s32 arg5, f64 arg6, s32 arg7, void *arg8, void *arg9) {
    f64 sp28;
    f64 sp30;
    f64 sp38;
    f64 sp40;
    f64 sp48;
    f64 sp50;
    f64 sp58;
    f64 sp60;
    f64 sp68;
    f64 temp_fa0;
    f64 temp_fa0_2;
    f64 temp_fa1;
    f64 temp_ft0;
    f64 temp_ft0_2;
    f64 temp_ft0_3;
    f64 temp_ft1;
    f64 temp_ft1_2;
    f64 temp_ft1_3;
    f64 temp_ft2;
    f64 temp_ft2_2;
    f64 temp_ft2_3;
    f64 temp_ft2_4;
    f64 temp_fv1;
    f64 temp_fv1_2;
    f64 var_fs0;
    void *temp_s0;

    temp_s0 = (arg0 * 0xC8) + D_8007C4F0;
    temp_fa1 = ((((M2C_FIELD(temp_s0, f64 *, 0x70) * M2C_FIELD(arg9, f64 *, 0x10)) - (M2C_FIELD(temp_s0, f64 *, 0x78) * M2C_FIELD(arg9, f64 *, 8))) + M2C_FIELD(temp_s0, f64 *, 0x50)) * M2C_FIELD(arg8, f64 *, 0)) + ((((M2C_FIELD(temp_s0, f64 *, 0x78) * M2C_FIELD(arg9, f64 *, 0)) - (M2C_FIELD(temp_s0, f64 *, 0x68) * M2C_FIELD(arg9, f64 *, 0x10))) + M2C_FIELD(temp_s0, f64 *, 0x58)) * M2C_FIELD(arg8, f64 *, 8)) + ((((M2C_FIELD(temp_s0, f64 *, 0x68) * M2C_FIELD(arg9, f64 *, 8)) - (M2C_FIELD(temp_s0, f64 *, 0x70) * M2C_FIELD(arg9, f64 *, 0))) + M2C_FIELD(temp_s0, f64 *, 0x60)) * M2C_FIELD(arg8, f64 *, 0x10));
    if (D_80072690 < temp_fa1) {
        temp_fv1 = arg4 - arg3;
        var_fs0 = D_80072698;
        if (!((2.0 * temp_fa1) <= temp_fv1)) {
            var_fs0 = temp_fv1 / temp_fa1;
        }
        temp_fa0 = var_fs0 * M2C_FIELD(temp_s0, f64 *, 0x60);
        temp_ft2 = (M2C_FIELD(temp_s0, f64 *, 0x70) * M2C_FIELD(temp_s0, f64 *, 0x28)) - (M2C_FIELD(temp_s0, f64 *, 0x78) * M2C_FIELD(temp_s0, f64 *, 0x20));
        M2C_FIELD(temp_s0, f64 *, 0) -= (var_fs0 * M2C_FIELD(temp_s0, f64 *, 0x50));
        M2C_FIELD(temp_s0, f64 *, 0x10) -= temp_fa0;
        M2C_FIELD(temp_s0, f64 *, 8) -= (var_fs0 * M2C_FIELD(temp_s0, f64 *, 0x58));
        sp40 = temp_ft2;
        sp48 = (M2C_FIELD(temp_s0, f64 *, 0x78) * M2C_FIELD(temp_s0, f64 *, 0x18)) - (M2C_FIELD(temp_s0, f64 *, 0x68) * M2C_FIELD(temp_s0, f64 *, 0x28));
        temp_ft0 = (M2C_FIELD(temp_s0, f64 *, 0x68) * M2C_FIELD(temp_s0, f64 *, 0x20)) - (M2C_FIELD(temp_s0, f64 *, 0x70) * M2C_FIELD(temp_s0, f64 *, 0x18));
        sp50 = temp_ft0;
        M2C_FIELD(temp_s0, f64 *, 0x18) -= (var_fs0 * temp_ft2);
        M2C_FIELD(temp_s0, f64 *, 0x20) -= (var_fs0 * sp48);
        temp_ft1 = (M2C_FIELD(temp_s0, f64 *, 0x70) * M2C_FIELD(temp_s0, f64 *, 0x40)) - (M2C_FIELD(temp_s0, f64 *, 0x78) * M2C_FIELD(temp_s0, f64 *, 0x38));
        M2C_FIELD(temp_s0, f64 *, 0x28) -= (var_fs0 * temp_ft0);
        sp40 = temp_ft1;
        sp48 = (M2C_FIELD(temp_s0, f64 *, 0x78) * M2C_FIELD(temp_s0, f64 *, 0x30)) - (M2C_FIELD(temp_s0, f64 *, 0x68) * M2C_FIELD(temp_s0, f64 *, 0x40));
        sp50 = (M2C_FIELD(temp_s0, f64 *, 0x68) * M2C_FIELD(temp_s0, f64 *, 0x38)) - (M2C_FIELD(temp_s0, f64 *, 0x70) * M2C_FIELD(temp_s0, f64 *, 0x30));
        M2C_FIELD(temp_s0, f64 *, 0x30) -= (var_fs0 * temp_ft1);
        M2C_FIELD(temp_s0, f64 *, 0x38) -= (var_fs0 * sp48);
        M2C_FIELD(temp_s0, f64 *, 0x40) -= (var_fs0 * sp50);
        temp_ft1_2 = (M2C_FIELD(arg9, f64 *, 8) * M2C_FIELD(arg8, f64 *, 0x10)) - (M2C_FIELD(arg9, f64 *, 0x10) * M2C_FIELD(arg8, f64 *, 8));
        sp58 = temp_ft1_2;
        temp_ft0_2 = (M2C_FIELD(arg9, f64 *, 0x10) * M2C_FIELD(arg8, f64 *, 0)) - (M2C_FIELD(arg9, f64 *, 0) * M2C_FIELD(arg8, f64 *, 0x10));
        sp60 = temp_ft0_2;
        temp_ft2_2 = (M2C_FIELD(arg9, f64 *, 0) * M2C_FIELD(arg8, f64 *, 8)) - (M2C_FIELD(arg9, f64 *, 8) * M2C_FIELD(arg8, f64 *, 0));
        sp68 = temp_ft2_2;
        temp_fv1_2 = -(((arg6 + D_800726A8) * temp_fa1) / ((((temp_ft1_2 * temp_ft1_2) + (temp_ft0_2 * temp_ft0_2) + (temp_ft2_2 * temp_ft2_2)) * D_800726A0) + D_800726A8));
        sp28 = temp_fv1_2 * M2C_FIELD(arg8, f64 *, 0);
        sp30 = temp_fv1_2 * M2C_FIELD(arg8, f64 *, 8);
        sp38 = temp_fv1_2 * M2C_FIELD(arg8, f64 *, 0x10);
        func_8001092C(temp_fa0, temp_fa1, arg9, &sp28);
        temp_ft2_3 = (M2C_FIELD(temp_s0, f64 *, 0x70) * M2C_FIELD(temp_s0, f64 *, 0x28)) - (M2C_FIELD(temp_s0, f64 *, 0x78) * M2C_FIELD(temp_s0, f64 *, 0x20));
        M2C_FIELD(temp_s0, f64 *, 0) += (var_fs0 * M2C_FIELD(temp_s0, f64 *, 0x50));
        M2C_FIELD(temp_s0, f64 *, 0x10) += (var_fs0 * M2C_FIELD(temp_s0, f64 *, 0x60));
        M2C_FIELD(temp_s0, f64 *, 8) += (var_fs0 * M2C_FIELD(temp_s0, f64 *, 0x58));
        sp40 = temp_ft2_3;
        sp48 = (M2C_FIELD(temp_s0, f64 *, 0x78) * M2C_FIELD(temp_s0, f64 *, 0x18)) - (M2C_FIELD(temp_s0, f64 *, 0x68) * M2C_FIELD(temp_s0, f64 *, 0x28));
        temp_ft0_3 = (M2C_FIELD(temp_s0, f64 *, 0x68) * M2C_FIELD(temp_s0, f64 *, 0x20)) - (M2C_FIELD(temp_s0, f64 *, 0x70) * M2C_FIELD(temp_s0, f64 *, 0x18));
        sp50 = temp_ft0_3;
        M2C_FIELD(temp_s0, f64 *, 0x18) += (var_fs0 * temp_ft2_3);
        M2C_FIELD(temp_s0, f64 *, 0x20) += (var_fs0 * sp48);
        temp_ft1_3 = (M2C_FIELD(temp_s0, f64 *, 0x70) * M2C_FIELD(temp_s0, f64 *, 0x40)) - (M2C_FIELD(temp_s0, f64 *, 0x78) * M2C_FIELD(temp_s0, f64 *, 0x38));
        M2C_FIELD(temp_s0, f64 *, 0x28) += (var_fs0 * temp_ft0_3);
        sp40 = temp_ft1_3;
        sp48 = (M2C_FIELD(temp_s0, f64 *, 0x78) * M2C_FIELD(temp_s0, f64 *, 0x30)) - (M2C_FIELD(temp_s0, f64 *, 0x68) * M2C_FIELD(temp_s0, f64 *, 0x40));
        sp50 = (M2C_FIELD(temp_s0, f64 *, 0x68) * M2C_FIELD(temp_s0, f64 *, 0x38)) - (M2C_FIELD(temp_s0, f64 *, 0x70) * M2C_FIELD(temp_s0, f64 *, 0x30));
        M2C_FIELD(temp_s0, f64 *, 0x30) += (var_fs0 * temp_ft1_3);
        M2C_FIELD(temp_s0, f64 *, 0x38) += (var_fs0 * sp48);
        temp_fa0_2 = M2C_FIELD(temp_s0, f64 *, 0x28);
        temp_ft2_4 = M2C_FIELD(temp_s0, f64 *, 0x20);
        M2C_FIELD(temp_s0, f64 *, 0x88) = (f64) (M2C_FIELD(temp_s0, f64 *, 8) + (M2C_FIELD(temp_s0, f64 *, 0x20) * D_800726B0));
        M2C_FIELD(temp_s0, f64 *, 0x80) = (f64) (M2C_FIELD(temp_s0, f64 *, 0) + (M2C_FIELD(temp_s0, f64 *, 0x18) * D_800726B0));
        M2C_FIELD(temp_s0, f64 *, 0x90) = (f64) (M2C_FIELD(temp_s0, f64 *, 0x10) + (M2C_FIELD(temp_s0, f64 *, 0x28) * D_800726B0));
        M2C_FIELD(temp_s0, f64 *, 0xB0) = (f64) (M2C_FIELD(temp_s0, f64 *, 0) + M2C_FIELD(temp_s0, f64 *, 0x18));
        M2C_FIELD(temp_s0, f64 *, 0xB8) = (f64) (M2C_FIELD(temp_s0, f64 *, 8) + temp_ft2_4);
        M2C_FIELD(temp_s0, f64 *, 0x40) += (var_fs0 * sp50);
        M2C_FIELD(temp_s0, f64 *, 0xC0) = (f64) (M2C_FIELD(temp_s0, f64 *, 0x10) + temp_fa0_2);
        M2C_FIELD(temp_s0, f64 *, 0x98) = (f64) (M2C_FIELD(temp_s0, f64 *, 0) + (M2C_FIELD(temp_s0, f64 *, 0x18) * D_800726B8));
        M2C_FIELD(temp_s0, f64 *, 0xA8) = (f64) (M2C_FIELD(temp_s0, f64 *, 0x10) + (temp_fa0_2 * D_800726B8));
        M2C_FIELD(temp_s0, f64 *, 0xA0) = (f64) (M2C_FIELD(temp_s0, f64 *, 8) + (temp_ft2_4 * D_800726B8));
    }
}

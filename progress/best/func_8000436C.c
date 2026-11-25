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

M2C_UNK func_8001092C(f64, f64, s32, void *, f64 *); /* extern */
M2C_UNK func_80010C70(void *);                      /* extern */
extern f64 D_80071D88;
extern f64 D_80071D90;
extern f64 D_80071D98;
extern f64 D_80071DA0;
extern f64 D_80071DA8;
extern f64 D_80071DB0;
extern f64 D_80071DB8;
extern f64 D_80071DC0;
extern f64 D_80071DC8;
extern f64 D_80071DD0;
extern f64 D_80071DD8;
extern f64 D_80071DE0;
extern s32 D_8007B210;
extern M2C_UNK D_8007C404;
extern M2C_UNK D_8007C458;
extern M2C_UNK D_8007C4F0;
extern s32 D_8007CCD8;

void func_8000436C(s32 arg0, M2C_UNK arg2, f64 arg3, f64 arg4, void *arg6, void *arg7, s32 arg8) {
    f64 sp28;
    f64 sp30;
    f64 sp38;
    f64 sp40;
    f64 sp48;
    f64 sp50;
    f64 sp58;
    f64 sp60;
    f64 sp68;
    f64 *temp_a0;
    f64 temp_fa0;
    f64 temp_fa1;
    f64 temp_ft0;
    f64 temp_ft0_2;
    f64 temp_ft0_3;
    f64 temp_ft0_4;
    f64 temp_ft1;
    f64 temp_ft1_2;
    f64 temp_ft1_3;
    f64 temp_ft1_4;
    f64 temp_ft1_5;
    f64 temp_ft2;
    f64 temp_ft2_2;
    f64 temp_ft2_3;
    f64 temp_ft3;
    f64 temp_fv1;
    f64 temp_fv1_2;
    f64 var_fs0;
    s32 temp_a1;
    s32 temp_ft5;
    s32 var_a0;
    s32 var_a0_2;
    void *temp_s0;
    void *temp_v0;

    temp_v0 = (arg0 * 0xC8) + &D_8007C4F0;
    temp_ft5 = (s32) ((((M2C_FIELD(arg7, f64 *, 0) * M2C_FIELD(temp_v0, f64 *, 0x18)) + (M2C_FIELD(arg7, f64 *, 8) * M2C_FIELD(temp_v0, f64 *, 0x20)) + (M2C_FIELD(arg7, f64 *, 0x10) * M2C_FIELD(temp_v0, f64 *, 0x28)) + D_80071D88 + D_80071D90) - D_80071D88) * D_80071D98);
    var_a0 = 0;
    if (temp_ft5 >= 0) {
        if (temp_ft5 >= 0x40) {
            var_a0 = 0x3F;
            goto block_5;
        }
        var_a0_2 = temp_ft5 * 8;
    } else {
block_5:
        var_a0_2 = var_a0 * 8;
    }
    temp_a0 = var_a0_2 + arg8;
    temp_s0 = (arg0 * 0xC8) + &D_8007C4F0;
    M2C_FIELD(arg6, f64 *, 0) = (f64) (M2C_FIELD(arg6, f64 *, 0) + (*temp_a0 * M2C_FIELD(temp_s0, f64 *, 0x18)));
    M2C_FIELD(arg6, f64 *, 8) = (f64) (M2C_FIELD(arg6, f64 *, 8) + (*temp_a0 * M2C_FIELD(temp_s0, f64 *, 0x20)));
    M2C_FIELD(arg6, f64 *, 0x10) = (f64) (M2C_FIELD(arg6, f64 *, 0x10) + (*temp_a0 * M2C_FIELD(temp_s0, f64 *, 0x28)));
    func_80010C70(arg6);
    temp_fa1 = (((((M2C_FIELD(arg7, f64 *, 8) * M2C_FIELD(temp_s0, f64 *, 0x78)) - (M2C_FIELD(arg7, f64 *, 0x10) * M2C_FIELD(temp_s0, f64 *, 0x70))) + M2C_FIELD(&D_8007C458, f64 *, 0x18)) - M2C_FIELD(temp_s0, f64 *, 0x50)) * M2C_FIELD(arg6, f64 *, 0)) + (((((M2C_FIELD(arg7, f64 *, 0x10) * M2C_FIELD(temp_s0, f64 *, 0x68)) - (M2C_FIELD(arg7, f64 *, 0) * M2C_FIELD(temp_s0, f64 *, 0x78))) + M2C_FIELD(&D_8007C458, f64 *, 0x20)) - M2C_FIELD(temp_s0, f64 *, 0x58)) * M2C_FIELD(arg6, f64 *, 8)) + (((((M2C_FIELD(arg7, f64 *, 0) * M2C_FIELD(temp_s0, f64 *, 0x70)) - (M2C_FIELD(arg7, f64 *, 8) * M2C_FIELD(temp_s0, f64 *, 0x68))) + M2C_FIELD(&D_8007C458, f64 *, 0x28)) - M2C_FIELD(temp_s0, f64 *, 0x60)) * M2C_FIELD(arg6, f64 *, 0x10));
    if (D_80071DA0 < temp_fa1) {
        temp_fv1 = arg4 - arg3;
        var_fs0 = D_80071DA8;
        if (!((2.0 * temp_fa1) <= temp_fv1)) {
            var_fs0 = temp_fv1 / temp_fa1;
        }
        M2C_FIELD(&D_8007C458, f64 *, 0) = (f64) (M2C_FIELD(&D_8007C458, f64 *, 0) - (var_fs0 * M2C_FIELD(&D_8007C458, f64 *, 0x18)));
        M2C_FIELD(&D_8007C458, f64 *, 8) = (f64) (M2C_FIELD(&D_8007C458, f64 *, 8) - (var_fs0 * M2C_FIELD(&D_8007C458, f64 *, 0x20)));
        M2C_FIELD(&D_8007C458, f64 *, 0x10) = (f64) (M2C_FIELD(&D_8007C458, f64 *, 0x10) - (var_fs0 * M2C_FIELD(&D_8007C458, f64 *, 0x28)));
        temp_fa0 = var_fs0 * M2C_FIELD(temp_s0, f64 *, 0x60);
        temp_ft2 = (M2C_FIELD(temp_s0, f64 *, 0x70) * M2C_FIELD(temp_s0, f64 *, 0x28)) - (M2C_FIELD(temp_s0, f64 *, 0x78) * M2C_FIELD(temp_s0, f64 *, 0x20));
        M2C_FIELD(temp_s0, f64 *, 0) = (f64) (M2C_FIELD(temp_s0, f64 *, 0) - (var_fs0 * M2C_FIELD(temp_s0, f64 *, 0x50)));
        M2C_FIELD(temp_s0, f64 *, 0x10) = (f64) (M2C_FIELD(temp_s0, f64 *, 0x10) - temp_fa0);
        M2C_FIELD(temp_s0, f64 *, 8) = (f64) (M2C_FIELD(temp_s0, f64 *, 8) - (var_fs0 * M2C_FIELD(temp_s0, f64 *, 0x58)));
        sp40 = temp_ft2;
        sp48 = (M2C_FIELD(temp_s0, f64 *, 0x78) * M2C_FIELD(temp_s0, f64 *, 0x18)) - (M2C_FIELD(temp_s0, f64 *, 0x68) * M2C_FIELD(temp_s0, f64 *, 0x28));
        temp_ft0 = (M2C_FIELD(temp_s0, f64 *, 0x68) * M2C_FIELD(temp_s0, f64 *, 0x20)) - (M2C_FIELD(temp_s0, f64 *, 0x70) * M2C_FIELD(temp_s0, f64 *, 0x18));
        sp50 = temp_ft0;
        M2C_FIELD(temp_s0, f64 *, 0x18) = (f64) (M2C_FIELD(temp_s0, f64 *, 0x18) - (var_fs0 * temp_ft2));
        M2C_FIELD(temp_s0, f64 *, 0x20) = (f64) (M2C_FIELD(temp_s0, f64 *, 0x20) - (var_fs0 * sp48));
        temp_ft1 = (M2C_FIELD(temp_s0, f64 *, 0x70) * M2C_FIELD(temp_s0, f64 *, 0x40)) - (M2C_FIELD(temp_s0, f64 *, 0x78) * M2C_FIELD(temp_s0, f64 *, 0x38));
        M2C_FIELD(temp_s0, f64 *, 0x28) = (f64) (M2C_FIELD(temp_s0, f64 *, 0x28) - (var_fs0 * temp_ft0));
        sp40 = temp_ft1;
        sp48 = (M2C_FIELD(temp_s0, f64 *, 0x78) * M2C_FIELD(temp_s0, f64 *, 0x30)) - (M2C_FIELD(temp_s0, f64 *, 0x68) * M2C_FIELD(temp_s0, f64 *, 0x40));
        sp50 = (M2C_FIELD(temp_s0, f64 *, 0x68) * M2C_FIELD(temp_s0, f64 *, 0x38)) - (M2C_FIELD(temp_s0, f64 *, 0x70) * M2C_FIELD(temp_s0, f64 *, 0x30));
        M2C_FIELD(temp_s0, f64 *, 0x30) = (f64) (M2C_FIELD(temp_s0, f64 *, 0x30) - (var_fs0 * temp_ft1));
        M2C_FIELD(temp_s0, f64 *, 0x38) = (f64) (M2C_FIELD(temp_s0, f64 *, 0x38) - (var_fs0 * sp48));
        M2C_FIELD(temp_s0, f64 *, 0x40) = (f64) (M2C_FIELD(temp_s0, f64 *, 0x40) - (var_fs0 * sp50));
        temp_ft1_2 = (M2C_FIELD(arg7, f64 *, 8) * M2C_FIELD(arg6, f64 *, 0x10)) - (M2C_FIELD(arg7, f64 *, 0x10) * M2C_FIELD(arg6, f64 *, 8));
        sp58 = temp_ft1_2;
        temp_ft0_2 = (M2C_FIELD(arg7, f64 *, 0x10) * M2C_FIELD(arg6, f64 *, 0)) - (M2C_FIELD(arg7, f64 *, 0) * M2C_FIELD(arg6, f64 *, 0x10));
        sp60 = temp_ft0_2;
        temp_ft2_2 = (M2C_FIELD(arg7, f64 *, 0) * M2C_FIELD(arg6, f64 *, 8)) - (M2C_FIELD(arg7, f64 *, 8) * M2C_FIELD(arg6, f64 *, 0));
        temp_ft3 = (temp_fa1 * D_80071DB0) / ((((temp_ft1_2 * temp_ft1_2) + (temp_ft0_2 * temp_ft0_2) + (temp_ft2_2 * temp_ft2_2)) * D_80071DB8) + D_80071DC0);
        temp_ft1_3 = temp_ft3 * D_80071DC8;
        sp68 = temp_ft2_2;
        temp_fv1_2 = temp_ft1_3 * M2C_FIELD(arg6, f64 *, 0);
        sp28 = temp_fv1_2;
        sp30 = temp_ft1_3 * M2C_FIELD(arg6, f64 *, 8);
        temp_ft0_3 = temp_ft1_3 * M2C_FIELD(arg6, f64 *, 0x10);
        temp_ft1_4 = temp_ft3 * D_80071DD0;
        M2C_FIELD(&D_8007C458, f64 *, 0x18) = (f64) (M2C_FIELD(&D_8007C458, f64 *, 0x18) + temp_fv1_2);
        sp38 = temp_ft0_3;
        M2C_FIELD(&D_8007C458, f64 *, 0x28) = (f64) (M2C_FIELD(&D_8007C458, f64 *, 0x28) + temp_ft0_3);
        sp28 = temp_ft1_4 * M2C_FIELD(arg6, f64 *, 0);
        sp30 = temp_ft1_4 * M2C_FIELD(arg6, f64 *, 8);
        sp38 = temp_ft1_4 * M2C_FIELD(arg6, f64 *, 0x10);
        func_8001092C(temp_fa0, temp_fa1, arg0, arg7, &sp28);
        M2C_FIELD(&D_8007C458, f64 *, 0) = (f64) (M2C_FIELD(&D_8007C458, f64 *, 0) + (var_fs0 * M2C_FIELD(&D_8007C458, f64 *, 0x18)));
        M2C_FIELD(&D_8007C458, f64 *, 8) = (f64) (M2C_FIELD(&D_8007C458, f64 *, 8) + (var_fs0 * M2C_FIELD(&D_8007C458, f64 *, 0x20)));
        M2C_FIELD(&D_8007C458, f64 *, 0x10) = (f64) (M2C_FIELD(&D_8007C458, f64 *, 0x10) + (var_fs0 * M2C_FIELD(&D_8007C458, f64 *, 0x28)));
        temp_ft2_3 = (M2C_FIELD(temp_s0, f64 *, 0x70) * M2C_FIELD(temp_s0, f64 *, 0x28)) - (M2C_FIELD(temp_s0, f64 *, 0x78) * M2C_FIELD(temp_s0, f64 *, 0x20));
        M2C_FIELD(temp_s0, f64 *, 0) = (f64) (M2C_FIELD(temp_s0, f64 *, 0) + (var_fs0 * M2C_FIELD(temp_s0, f64 *, 0x50)));
        M2C_FIELD(temp_s0, f64 *, 0x10) = (f64) (M2C_FIELD(temp_s0, f64 *, 0x10) + (var_fs0 * M2C_FIELD(temp_s0, f64 *, 0x60)));
        M2C_FIELD(temp_s0, f64 *, 8) = (f64) (M2C_FIELD(temp_s0, f64 *, 8) + (var_fs0 * M2C_FIELD(temp_s0, f64 *, 0x58)));
        sp40 = temp_ft2_3;
        sp48 = (M2C_FIELD(temp_s0, f64 *, 0x78) * M2C_FIELD(temp_s0, f64 *, 0x18)) - (M2C_FIELD(temp_s0, f64 *, 0x68) * M2C_FIELD(temp_s0, f64 *, 0x28));
        temp_ft0_4 = (M2C_FIELD(temp_s0, f64 *, 0x68) * M2C_FIELD(temp_s0, f64 *, 0x20)) - (M2C_FIELD(temp_s0, f64 *, 0x70) * M2C_FIELD(temp_s0, f64 *, 0x18));
        sp50 = temp_ft0_4;
        M2C_FIELD(temp_s0, f64 *, 0x18) = (f64) (M2C_FIELD(temp_s0, f64 *, 0x18) + (var_fs0 * temp_ft2_3));
        M2C_FIELD(temp_s0, f64 *, 0x20) = (f64) (M2C_FIELD(temp_s0, f64 *, 0x20) + (var_fs0 * sp48));
        temp_ft1_5 = (M2C_FIELD(temp_s0, f64 *, 0x70) * M2C_FIELD(temp_s0, f64 *, 0x40)) - (M2C_FIELD(temp_s0, f64 *, 0x78) * M2C_FIELD(temp_s0, f64 *, 0x38));
        M2C_FIELD(temp_s0, f64 *, 0x28) = (f64) (M2C_FIELD(temp_s0, f64 *, 0x28) + (var_fs0 * temp_ft0_4));
        sp40 = temp_ft1_5;
        sp48 = (M2C_FIELD(temp_s0, f64 *, 0x78) * M2C_FIELD(temp_s0, f64 *, 0x30)) - (M2C_FIELD(temp_s0, f64 *, 0x68) * M2C_FIELD(temp_s0, f64 *, 0x40));
        sp50 = (M2C_FIELD(temp_s0, f64 *, 0x68) * M2C_FIELD(temp_s0, f64 *, 0x38)) - (M2C_FIELD(temp_s0, f64 *, 0x70) * M2C_FIELD(temp_s0, f64 *, 0x30));
        M2C_FIELD(temp_s0, f64 *, 0x30) = (f64) (M2C_FIELD(temp_s0, f64 *, 0x30) + (var_fs0 * temp_ft1_5));
        M2C_FIELD(temp_s0, f64 *, 0x38) = (f64) (M2C_FIELD(temp_s0, f64 *, 0x38) + (var_fs0 * sp48));
        M2C_FIELD(temp_s0, f64 *, 0x80) = (f64) (M2C_FIELD(temp_s0, f64 *, 0) + (M2C_FIELD(temp_s0, f64 *, 0x18) * D_80071DD8));
        M2C_FIELD(temp_s0, f64 *, 0x40) = (f64) (M2C_FIELD(temp_s0, f64 *, 0x40) + (var_fs0 * sp50));
        M2C_FIELD(temp_s0, f64 *, 0x88) = (f64) (M2C_FIELD(temp_s0, f64 *, 8) + (M2C_FIELD(temp_s0, f64 *, 0x20) * D_80071DD8));
        M2C_FIELD(temp_s0, f64 *, 0xB0) = (f64) (M2C_FIELD(temp_s0, f64 *, 0) + M2C_FIELD(temp_s0, f64 *, 0x18));
        M2C_FIELD(temp_s0, f64 *, 0xB8) = (f64) (M2C_FIELD(temp_s0, f64 *, 8) + M2C_FIELD(temp_s0, f64 *, 0x20));
        M2C_FIELD(temp_s0, f64 *, 0x90) = (f64) (M2C_FIELD(temp_s0, f64 *, 0x10) + (M2C_FIELD(temp_s0, f64 *, 0x28) * D_80071DD8));
        M2C_FIELD(temp_s0, f64 *, 0x98) = (f64) (M2C_FIELD(temp_s0, f64 *, 0) + (M2C_FIELD(temp_s0, f64 *, 0x18) * D_80071DE0));
        M2C_FIELD(temp_s0, f64 *, 0xC0) = (f64) (M2C_FIELD(temp_s0, f64 *, 0x10) + M2C_FIELD(temp_s0, f64 *, 0x28));
        M2C_FIELD(temp_s0, f64 *, 0xA0) = (f64) (M2C_FIELD(temp_s0, f64 *, 8) + (M2C_FIELD(temp_s0, f64 *, 0x20) * D_80071DE0));
        M2C_FIELD(temp_s0, f64 *, 0xA8) = (f64) (M2C_FIELD(temp_s0, f64 *, 0x10) + (M2C_FIELD(temp_s0, f64 *, 0x28) * D_80071DE0));
        M2C_FIELD(&D_8007C458, s32 *, 0x90) = 1;
        temp_a1 = M2C_FIELD(temp_s0, s32 *, 0x48);
        if (temp_a1 == 1) {
            D_8007CCD8 |= temp_a1 << (0x1E - arg0);
            (&D_8007C404)[arg0] = D_8007B210;
            M2C_FIELD(temp_s0, s32 *, 0x48) = 2;
        }
    }
}

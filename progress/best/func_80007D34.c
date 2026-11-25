/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O1, tried by autopilot */
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

s32 func_8001092C(f64, f64, s32, void *, s32 *); /* extern */
s32 func_80010A28();
f64 func_80057DC0();
extern f64 D_800726C0;
extern f64 D_800726C8;
extern f64 D_800726D0;
extern f64 D_800726D8;
extern f64 D_800726E0;
extern f64 D_800726E8;
extern f64 D_800726F0;
extern f64 D_800726F8;
extern f64 D_80072700;
extern f64 D_80072708;
extern f64 D_80072710;
extern f64 D_80072718;
extern char D_8007C4F0[];

void func_80007D34(s32 arg0, s32 arg1, s32 arg2, f64 arg3, f64 arg4, s32 arg5, f64 arg6, s32 arg7, f64 arg8, s32 arg9, f64 arg10, s32 arg11, void *arg12) {
    f64 sp10;
    f64 sp18;
    f64 sp20;
    s32 sp28;                                       /* compiler-managed */
    s32 sp2C;
    f64 sp30;
    s32 sp38;                                       /* compiler-managed */
    s32 sp3C;
    f64 sp40;
    f64 sp48;
    f64 sp50;
    f64 sp58;
    s32 sp60;
    s32 sp64;
    f64 sp68;
    f64 temp_fa0;
    f64 temp_fs0;
    f64 temp_fs1;
    f64 temp_ft0;
    f64 temp_ft0_2;
    f64 temp_ft0_3;
    f64 temp_ft0_4;
    f64 temp_ft0_5;
    f64 temp_ft0_6;
    f64 temp_ft1;
    f64 temp_ft1_2;
    f64 temp_ft1_3;
    f64 temp_ft2;
    f64 temp_ft2_2;
    f64 temp_ft2_3;
    f64 temp_ft2_4;
    f64 temp_ft2_5;
    f64 temp_ft2_6;
    f64 temp_ft4;
    f64 temp_fv0;
    f64 temp_fv0_2;
    f64 temp_fv0_3;
    f64 temp_fv0_4;
    f64 temp_fv1;
    f64 var_fs2;
    f64 var_ft3;
    f64 var_fv0;
    f64 var_fv0_2;
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = (arg0 * 0xC8) + D_8007C4F0;
    temp_ft1 = (M2C_FIELD(temp_v0, f64 *, 0x70) * M2C_FIELD(arg12, f64 *, 0x10)) - (M2C_FIELD(temp_v0, f64 *, 0x78) * M2C_FIELD(arg12, f64 *, 8));
    sp10 = temp_ft1;
    temp_ft2 = (M2C_FIELD(temp_v0, f64 *, 0x78) * M2C_FIELD(arg12, f64 *, 0)) - (M2C_FIELD(temp_v0, f64 *, 0x68) * M2C_FIELD(arg12, f64 *, 0x10));
    sp18 = temp_ft2;
    temp_ft0 = (M2C_FIELD(temp_v0, f64 *, 0x68) * M2C_FIELD(arg12, f64 *, 8)) - (M2C_FIELD(temp_v0, f64 *, 0x70) * M2C_FIELD(arg12, f64 *, 0));
    sp20 = temp_ft0;
    sp10 = temp_ft1 + M2C_FIELD(temp_v0, f64 *, 0x50);
    temp_ft2_2 = temp_ft2 + M2C_FIELD(temp_v0, f64 *, 0x58);
    sp18 = temp_ft2_2;
    sp20 = temp_ft0 + M2C_FIELD(temp_v0, f64 *, 0x60);
    if (!(D_800726C0 < temp_ft2_2)) {
        if (((arg3 - arg4) < temp_ft2_2) && (-temp_ft2_2 < D_80072718)) {
            temp_ft2_3 = temp_ft2_2 + D_80072718;
            temp_fv0 = arg4 - arg3;
            sp28 = 0;
            sp2C = 0;
            if (!(temp_fv0 < temp_ft2_3)) {
                var_fv0 = -temp_ft2_3;
            } else {
                var_fv0 = -temp_fv0;
            }
            sp30 = var_fv0;
            sp38 = 0;
            sp3C = 0;
            func_8001092C(arg4, temp_ft2_2, arg0, arg12, &sp28);
        }
        return;
    }
    temp_ft4 = arg4 - arg3;
    var_fs2 = D_800726C8;
    if (!((2.0 * temp_ft2_2) <= temp_ft4)) {
        var_fs2 = temp_ft4 / temp_ft2_2;
    }
    temp_ft2_4 = (M2C_FIELD(temp_v0, f64 *, 0x70) * M2C_FIELD(temp_v0, f64 *, 0x28)) - (M2C_FIELD(temp_v0, f64 *, 0x78) * M2C_FIELD(temp_v0, f64 *, 0x20));
    M2C_FIELD(temp_v0, f64 *, 0) -= (var_fs2 * M2C_FIELD(temp_v0, f64 *, 0x50));
    M2C_FIELD(temp_v0, f64 *, 0x10) -= (var_fs2 * M2C_FIELD(temp_v0, f64 *, 0x60));
    M2C_FIELD(temp_v0, f64 *, 8) -= (var_fs2 * M2C_FIELD(temp_v0, f64 *, 0x58));
    sp40 = temp_ft2_4;
    sp48 = (M2C_FIELD(temp_v0, f64 *, 0x78) * M2C_FIELD(temp_v0, f64 *, 0x18)) - (M2C_FIELD(temp_v0, f64 *, 0x68) * M2C_FIELD(temp_v0, f64 *, 0x28));
    temp_ft0_2 = (M2C_FIELD(temp_v0, f64 *, 0x68) * M2C_FIELD(temp_v0, f64 *, 0x20)) - (M2C_FIELD(temp_v0, f64 *, 0x70) * M2C_FIELD(temp_v0, f64 *, 0x18));
    sp50 = temp_ft0_2;
    M2C_FIELD(temp_v0, f64 *, 0x18) -= (var_fs2 * temp_ft2_4);
    M2C_FIELD(temp_v0, f64 *, 0x20) -= (var_fs2 * sp48);
    temp_ft1_2 = (M2C_FIELD(temp_v0, f64 *, 0x70) * M2C_FIELD(temp_v0, f64 *, 0x40)) - (M2C_FIELD(temp_v0, f64 *, 0x78) * M2C_FIELD(temp_v0, f64 *, 0x38));
    M2C_FIELD(temp_v0, f64 *, 0x28) -= (var_fs2 * temp_ft0_2);
    sp40 = temp_ft1_2;
    sp48 = (M2C_FIELD(temp_v0, f64 *, 0x78) * M2C_FIELD(temp_v0, f64 *, 0x30)) - (M2C_FIELD(temp_v0, f64 *, 0x68) * M2C_FIELD(temp_v0, f64 *, 0x40));
    sp50 = (M2C_FIELD(temp_v0, f64 *, 0x68) * M2C_FIELD(temp_v0, f64 *, 0x38)) - (M2C_FIELD(temp_v0, f64 *, 0x70) * M2C_FIELD(temp_v0, f64 *, 0x30));
    M2C_FIELD(temp_v0, f64 *, 0x30) -= (var_fs2 * temp_ft1_2);
    M2C_FIELD(temp_v0, f64 *, 0x38) -= (var_fs2 * sp48);
    M2C_FIELD(temp_v0, f64 *, 0x40) -= (var_fs2 * sp50);
    temp_fv0_2 = -M2C_FIELD(arg12, f64 *, 0x10);
    sp60 = 0;
    sp64 = 0;
    sp58 = temp_fv0_2;
    temp_ft0_3 = M2C_FIELD(arg12, f64 *, 0);
    sp68 = temp_ft0_3;
    temp_fs1 = ((arg6 + D_800726D0) * temp_ft2_2) / ((((temp_fv0_2 * temp_fv0_2) + 0.0 + (temp_ft0_3 * temp_ft0_3)) * D_800726D8) + D_800726D0);
    if (!(temp_fs1 < D_800726E0)) {
        var_fv0_2 = -temp_fs1;
    } else {
        temp_fv1 = M2C_FIELD(arg12, f64 *, 0);
        temp_fv0_3 = M2C_FIELD(arg12, f64 *, 0x10);
        temp_ft0_4 = temp_ft4 / ((((temp_fv1 * temp_fv1) + (temp_fv0_3 * temp_fv0_3)) * D_800726D8) + D_800726D0);
        if (temp_ft0_4 < temp_fs1) {
            var_fv0_2 = -temp_fs1;
        } else {
            var_fv0_2 = -temp_ft0_4;
        }
    }
    sp30 = var_fv0_2;
    temp_fs0 = func_80057DC0(sp10, temp_ft2_2);
    temp_fv0_4 = func_80057DC0(sp20);
    if (temp_fv0_4 < temp_fs0) {
        var_ft3 = (temp_fs0 * D_800726E8) + (temp_fv0_4 * D_800726F0);
    } else {
        var_ft3 = (temp_fv0_4 * D_800726F8) + (temp_fs0 * D_80072700);
    }
    if (var_ft3 < (temp_fs1 * arg8)) {
        sp28 = -sp10;
        sp38 = -sp20;
    } else {
        temp_ft0_5 = (temp_fs1 * arg10) / var_ft3;
        sp28 = -(sp10 * temp_ft0_5);
        sp38 = -(sp20 * temp_ft0_5);
    }
    func_80010A28(arg0, arg12, &sp28);
    temp_v0_2 = (arg0 * 0xC8) + D_8007C4F0;
    temp_ft2_5 = (M2C_FIELD(temp_v0_2, f64 *, 0x70) * M2C_FIELD(temp_v0_2, f64 *, 0x28)) - (M2C_FIELD(temp_v0_2, f64 *, 0x78) * M2C_FIELD(temp_v0_2, f64 *, 0x20));
    M2C_FIELD(temp_v0_2, f64 *, 0) += (var_fs2 * M2C_FIELD(temp_v0_2, f64 *, 0x50));
    M2C_FIELD(temp_v0_2, f64 *, 0x10) += (var_fs2 * M2C_FIELD(temp_v0_2, f64 *, 0x60));
    M2C_FIELD(temp_v0_2, f64 *, 8) += (var_fs2 * M2C_FIELD(temp_v0_2, f64 *, 0x58));
    sp40 = temp_ft2_5;
    sp48 = (M2C_FIELD(temp_v0_2, f64 *, 0x78) * M2C_FIELD(temp_v0_2, f64 *, 0x18)) - (M2C_FIELD(temp_v0_2, f64 *, 0x68) * M2C_FIELD(temp_v0_2, f64 *, 0x28));
    temp_ft0_6 = (M2C_FIELD(temp_v0_2, f64 *, 0x68) * M2C_FIELD(temp_v0_2, f64 *, 0x20)) - (M2C_FIELD(temp_v0_2, f64 *, 0x70) * M2C_FIELD(temp_v0_2, f64 *, 0x18));
    sp50 = temp_ft0_6;
    M2C_FIELD(temp_v0_2, f64 *, 0x18) += (var_fs2 * temp_ft2_5);
    M2C_FIELD(temp_v0_2, f64 *, 0x20) += (var_fs2 * sp48);
    temp_ft1_3 = (M2C_FIELD(temp_v0_2, f64 *, 0x70) * M2C_FIELD(temp_v0_2, f64 *, 0x40)) - (M2C_FIELD(temp_v0_2, f64 *, 0x78) * M2C_FIELD(temp_v0_2, f64 *, 0x38));
    M2C_FIELD(temp_v0_2, f64 *, 0x28) += (var_fs2 * temp_ft0_6);
    sp40 = temp_ft1_3;
    sp48 = (M2C_FIELD(temp_v0_2, f64 *, 0x78) * M2C_FIELD(temp_v0_2, f64 *, 0x30)) - (M2C_FIELD(temp_v0_2, f64 *, 0x68) * M2C_FIELD(temp_v0_2, f64 *, 0x40));
    sp50 = (M2C_FIELD(temp_v0_2, f64 *, 0x68) * M2C_FIELD(temp_v0_2, f64 *, 0x38)) - (M2C_FIELD(temp_v0_2, f64 *, 0x70) * M2C_FIELD(temp_v0_2, f64 *, 0x30));
    M2C_FIELD(temp_v0_2, f64 *, 0x30) += (var_fs2 * temp_ft1_3);
    M2C_FIELD(temp_v0_2, f64 *, 0x38) += (var_fs2 * sp48);
    temp_fa0 = M2C_FIELD(temp_v0_2, f64 *, 0x28);
    temp_ft2_6 = M2C_FIELD(temp_v0_2, f64 *, 0x20);
    M2C_FIELD(temp_v0_2, f64 *, 0x88) = (f64) (M2C_FIELD(temp_v0_2, f64 *, 8) + (M2C_FIELD(temp_v0_2, f64 *, 0x20) * D_80072708));
    M2C_FIELD(temp_v0_2, f64 *, 0x80) = (f64) (M2C_FIELD(temp_v0_2, f64 *, 0) + (M2C_FIELD(temp_v0_2, f64 *, 0x18) * D_80072708));
    M2C_FIELD(temp_v0_2, f64 *, 0x90) = (f64) (M2C_FIELD(temp_v0_2, f64 *, 0x10) + (M2C_FIELD(temp_v0_2, f64 *, 0x28) * D_80072708));
    M2C_FIELD(temp_v0_2, f64 *, 0xB0) = (f64) (M2C_FIELD(temp_v0_2, f64 *, 0) + M2C_FIELD(temp_v0_2, f64 *, 0x18));
    M2C_FIELD(temp_v0_2, f64 *, 0xB8) = (f64) (M2C_FIELD(temp_v0_2, f64 *, 8) + temp_ft2_6);
    M2C_FIELD(temp_v0_2, f64 *, 0x40) += (var_fs2 * sp50);
    M2C_FIELD(temp_v0_2, f64 *, 0xC0) = (f64) (M2C_FIELD(temp_v0_2, f64 *, 0x10) + temp_fa0);
    M2C_FIELD(temp_v0_2, f64 *, 0x98) = (f64) (M2C_FIELD(temp_v0_2, f64 *, 0) + (M2C_FIELD(temp_v0_2, f64 *, 0x18) * D_80072710));
    M2C_FIELD(temp_v0_2, f64 *, 0xA8) = (f64) (M2C_FIELD(temp_v0_2, f64 *, 0x10) + (temp_fa0 * D_80072710));
    M2C_FIELD(temp_v0_2, f64 *, 0xA0) = (f64) (M2C_FIELD(temp_v0_2, f64 *, 8) + (temp_ft2_6 * D_80072710));
}

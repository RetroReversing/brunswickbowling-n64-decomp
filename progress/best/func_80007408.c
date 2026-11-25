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

M2C_UNK func_80004B64(f64, f64, s32, M2C_UNK *);    /* extern */
M2C_UNK func_80010A28(s32, f64 *, f64 *);           /* extern */
f64 func_80057DC0();         /* extern */
extern f64 D_80072618;
extern f64 D_80072620;
extern f64 D_80072628;
extern f64 D_80072630;
extern f64 D_80072638;
extern f64 D_80072640;
extern f64 D_80072648;
extern f64 D_80072650;
extern f64 D_80072658;
extern f64 D_80072660;
extern f64 D_80072668;
extern f64 D_80072670;
extern f64 D_80072678;
extern f64 D_80072680;
extern f64 D_80072688;
extern s32 D_8007B210;
extern M2C_UNK D_8007C42C;
extern M2C_UNK D_8007C4F0;
extern M2C_UNK D_8007D508;
extern M2C_UNK D_8007D5E0;

void func_80007408(f64 arg0, f64 arg1) {
    f64 sp10;
    f64 sp18;
    f64 sp20;
    f64 sp28;
    f64 sp30;
    f64 sp38;
    f64 sp40;
    f64 sp48;
    f64 sp50;
    f64 *temp_a1_2;
    f64 *temp_v1_2;
    f64 temp_fs0;
    f64 temp_fs1;
    f64 temp_fs2;
    f64 temp_fs3;
    f64 temp_ft0;
    f64 temp_ft0_2;
    f64 temp_ft0_3;
    f64 temp_ft1;
    f64 temp_ft2;
    f64 temp_ft3;
    f64 temp_fv0;
    f64 temp_fv0_2;
    f64 temp_fv1;
    f64 temp_fv1_2;
    f64 var_fa0;
    f64 var_fa1;
    f64 var_fv0;
    f64 var_fv1;
    s32 temp_a1;
    s32 var_a1;
    void *temp_a0;
    void *temp_v0;
    void *temp_v1;

    var_fa0 = arg0;
    var_fa1 = arg1;
    temp_v1 = (s32)(arg0 * 0xC8) + (s32)&D_8007C4F0;
    temp_fv1 = M2C_FIELD(temp_v1, f64 *, 0x20);
    if (D_80072618 <= temp_fv1) {
        M2C_FIELD(temp_v1, s32 *, 0x48) = 3;
        goto block_9;
    }
    var_a1 = 0;
    if (!(temp_fv1 <= D_80072620)) {
        var_a1 = (s32) ((temp_fv1 + D_80072628) * D_80072630);
    }
    temp_a1 = var_a1 * 8;
    temp_v1_2 = temp_a1 + &D_8007D508;
    temp_a0 = (s32)(arg0 * 0xC8) + (s32)&D_8007C4F0;
    var_fa0 = *temp_v1_2 * M2C_FIELD(temp_a0, f64 *, 0x18);
    sp28 = var_fa0;
    temp_ft0 = *temp_v1_2 * M2C_FIELD(temp_a0, f64 *, 0x20);
    sp30 = temp_ft0;
    temp_ft1 = *temp_v1_2 * M2C_FIELD(temp_a0, f64 *, 0x28);
    temp_a1_2 = temp_a1 + &D_8007D5E0;
    sp38 = temp_ft1;
    temp_ft2 = temp_ft0 + *temp_a1_2;
    sp30 = temp_ft2;
    temp_fv1_2 = M2C_FIELD(temp_a0, f64 *, 0) + var_fa0;
    sp40 = temp_fv1_2;
    temp_ft0_2 = M2C_FIELD(temp_a0, f64 *, 8) + temp_ft2;
    sp48 = temp_ft0_2;
    temp_ft3 = M2C_FIELD(temp_a0, f64 *, 0x10) + temp_ft1;
    sp50 = temp_ft3;
    if ((temp_ft0_2 < D_80072638) || (var_fa1 = 0.0, (temp_fv1_2 < 0.0)) || (D_80072640 < temp_fv1_2) || (D_80072648 < temp_ft3)) {
        M2C_FIELD(((s32)(arg0 * 0xC8) + (s32)&D_8007C4F0), s32 *, 0x48) = 3;
block_9:
        *(s32 *)((s32)(arg0 * 4) + (s32)&D_8007C42C) = D_8007B210;
        func_80004B64(var_fa0, var_fa1, arg0, &D_8007C42C);
        return;
    }
    if (temp_ft0_2 > 0.0) {
        temp_fs3 = temp_ft0_2 / ((((var_fa0 * var_fa0) + (temp_ft1 * temp_ft1)) * D_80072650) + D_80072658);
        sp18 = -temp_fs3;
        temp_ft0_3 = M2C_FIELD(temp_a0, f64 *, 0x70);
        temp_fs1 = M2C_FIELD(temp_a0, f64 *, 0x50) + ((temp_ft0_3 * temp_ft1) - (M2C_FIELD(temp_a0, f64 *, 0x78) * temp_ft2));
        temp_fs2 = M2C_FIELD(temp_a0, f64 *, 0x60) + ((M2C_FIELD(temp_a0, f64 *, 0x68) * temp_ft2) - (temp_ft0_3 * var_fa0));
        temp_fs0 = func_80057DC0(temp_fs1, 0.0f, temp_a0, temp_a1_2);
        temp_fv0 = func_80057DC0(temp_fs2);
        if (temp_fv0 < temp_fs0) {
            var_fv1 = (temp_fs0 * D_80072660) + (temp_fv0 * D_80072668);
        } else {
            var_fv1 = (temp_fv0 * D_80072670) + (temp_fs0 * D_80072678);
        }
        if (var_fv1 != 0.0) {
            if (var_fv1 < (temp_fs3 * D_80072680)) {
                sp10 = -temp_fs1;
                var_fv0 = -temp_fs2;
            } else {
                temp_fv0_2 = -((temp_fs3 * D_80072688) / var_fv1);
                var_fv0 = temp_fv0_2 * temp_fs2;
                sp10 = temp_fv0_2 * temp_fs1;
            }
            sp20 = var_fv0;
            func_80010A28(arg0, &sp28, &sp10);
        }
        temp_v0 = (s32)(arg0 * 0xC8) + (s32)&D_8007C4F0;
        M2C_FIELD(temp_v0, f64 *, 8) = (f64) (M2C_FIELD(temp_v0, f64 *, 8) - sp48);
    }
}

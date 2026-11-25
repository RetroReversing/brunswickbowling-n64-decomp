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

s32 func_80058348(s8 *, s32, s32);                  /* extern */
f64 func_80059E30(f64, f64 *);                      /* extern */
extern M2C_UNK D_80079F90;
extern M2C_UNK D_80079F94;
extern f64 D_80079F98;
extern f64 D_80079FA0;
extern f64 D_80079FA8;
extern f64 D_80079FB0;
extern f64 D_80079FB8;
extern f64 D_80079FC0;
extern f64 D_80079FC8;
extern M2C_UNK D_80097478;
extern M2C_UNK D_800974C0;
extern s8 D_800A58F8;

s8 *func_8005852C(f64 arg0, f32 arg1, s32 arg2, s32 *arg3, s32 *arg4) {
    f64 sp10;
    f64 sp18;
    f64 temp_fs0;
    f64 var_fa0;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_v0;
    s32 var_a2;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    s8 *var_s0;
    s8 *var_s0_2;

    var_fa0 = arg0;
    var_s3 = arg2;
    var_s1 = 0;
    var_a2 = 0x100;
    *arg4 = 0;
    var_s2 = var_s3;
    if (var_s3 >= 0x14) {
        var_s3 = 0x14;
        var_s2 = 0x13;
    }
    temp_v0 = M2C_BITWISE(s32, arg1) & 0x7FF00000;
    switch (temp_v0) {                              /* irregular */
    case 0x0:
        var_s0 = &D_800A58F8;
        var_v1 = 0;
        if (var_s3 > 0) {
            do {
                *var_s0 = 0x30;
                var_v1 += 1;
                var_s0 += 1;
            } while (var_v1 < var_s3);
        }
        var_v0 = 1;
block_36:
        *arg3 = var_v0;
        return &D_800A58F8;
    case 0x7FF00000:
        *arg3 = 0x7FFFFFFF;
        if ((M2C_BITWISE(s32, arg1) & 0xFFFFF) || (M2C_BITWISE(s32, var_fa0) != 0)) {
            D_800A58F8 = M2C_UNALIGNED32(D_80079F90);
            *arg4 = 0;
            return &D_800A58F8;
        }
        D_800A58F8 = M2C_UNALIGNED32(D_80079F94);
        return &D_800A58F8;
    default:
        if (var_fa0 < 0.0) {
            var_fa0 = -var_fa0;
            *arg4 = 1;
        }
        var_v1_2 = 8;
        if (D_80079F98 <= var_fa0) {
            do {
                temp_a0 = var_v1_2 * 8;
                if (*(temp_a0 + &D_80097478) <= var_fa0) {
                    var_fa0 *= *(temp_a0 + &D_800974C0);
                    var_s1 += var_a2;
                }
                var_v1_2 -= 1;
                var_a2 = var_a2 >> 1;
            } while (var_v1_2 >= 0);
        } else {
            do {
                temp_a0_2 = var_v1_2 * 8;
                if (var_fa0 < *(temp_a0_2 + &D_800974C0)) {
                    var_fa0 *= *(temp_a0_2 + &D_80097478);
                    var_s1 -= var_a2;
                }
                var_v1_2 -= 1;
                var_a2 = var_a2 >> 1;
            } while (var_v1_2 >= 0);
            var_fa0 *= D_80079FA0;
            var_s1 -= 1;
        }
        sp10 = var_fa0;
loop_27:
        if (D_80079FA8 <= sp10) {
            sp10 *= D_80079FB0;
            var_s1 += 1;
            goto loop_27;
        }
        if (sp10 < D_80079FB8) {
            sp10 *= D_80079FC0;
            var_s1 -= 1;
            goto loop_27;
        }
        var_s0_2 = &D_800A58F8;
        temp_fs0 = D_80079FC8;
        do {
            sp10 = func_80059E30(sp10, &sp18) * temp_fs0;
            *var_s0_2 = (s32) sp18 + 0x30;
            var_s2 -= 1;
            var_s0_2 += 1;
        } while (var_s2 >= 0);
        if (var_s3 >= 0x14) {
            var_v0 = var_s1 + 1;
        } else {
            var_v0 = func_80058348(&D_800A58F8, var_s1, var_s3) + 1;
        }
        goto block_36;
    }
}

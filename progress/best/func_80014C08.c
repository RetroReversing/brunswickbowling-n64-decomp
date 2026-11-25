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

extern f32 D_80073E70;

void func_80014C08(void *arg0, f64 arg2, M2C_UNK arg3, f64 arg4, f64 arg6, f64 arg8, f64 arg10, f64 arg12, f64 arg14, f64 arg16, f64 arg18) {
    f64 sp0;
    f64 sp8;
    f64 sp10;
    f64 sp18;
    f64 sp20;
    f64 sp28;
    f64 sp30;
    f64 sp38;
    f64 sp40;
    f32 temp_ft1_2;
    f32 var_ft2;
    f64 temp_fa0;
    f64 temp_ft0;
    f64 temp_ft1;
    f64 temp_ft2;
    f64 temp_ft3;
    f64 temp_fv0;
    f64 temp_fv1;
    s32 var_a1;
    s32 var_a2;
    s32 var_v1;

    temp_ft2 = arg8 - arg2;
    sp0 = temp_ft2;
    temp_ft1 = arg10 - arg4;
    sp8 = temp_ft1;
    temp_fv1 = arg12 - arg6;
    sp10 = temp_fv1;
    temp_fa0 = arg14 - arg2;
    sp18 = temp_fa0;
    temp_fv0 = arg16 - arg4;
    sp20 = temp_fv0;
    temp_ft0 = arg18 - arg6;
    temp_ft3 = (temp_ft1 * temp_ft0) - (temp_fv1 * temp_fv0);
    sp28 = temp_ft0;
    sp30 = temp_ft3;
    sp40 = (temp_ft2 * temp_fv0) - (temp_ft1 * temp_fa0);
    sp38 = (temp_fv1 * temp_fa0) - (temp_ft2 * temp_ft0);
    M2C_FIELD(arg0, f32 *, 0) = (f32) temp_ft3;
    M2C_FIELD(arg0, f32 *, 4) = (f32) sp38;
    M2C_FIELD(arg0, f32 *, 8) = (f32) sp40;
    var_a2 = 0;
    var_ft2 = D_80073E70;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) ((sp30 * arg2) + (sp38 * arg4) + (sp40 * arg6));
loop_1:
    var_a1 = 0;
    if (var_a2 < 2) {
loop_2:
        var_v1 = 0;
        if (var_a1 < 2) {
loop_3:
            if (var_v1 < 2) {
                temp_ft1_2 = ((f32) var_a2 * M2C_FIELD(arg0, f32 *, 0)) + ((f32) var_a1 * M2C_FIELD(arg0, f32 *, 4)) + ((f32) var_v1 * M2C_FIELD(arg0, f32 *, 8));
                if (!(temp_ft1_2 < var_ft2)) {
                    var_v1 += 1;
                } else {
                    var_ft2 = temp_ft1_2;
                    M2C_FIELD(arg0, s32 *, 0x10) = var_a2;
                    M2C_FIELD(arg0, s32 *, 0x14) = var_a1;
                    M2C_FIELD(arg0, s32 *, 0x18) = var_v1;
                    var_v1 += 1;
                }
                goto loop_3;
            }
            var_a1 += 1;
            goto loop_2;
        }
        var_a2 += 1;
        goto loop_1;
    }
}

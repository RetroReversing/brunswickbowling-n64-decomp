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

f32 func_80065690(f32);                             /* extern */

void func_80010C70(void *arg0) {
    f32 temp_fa0;
    f32 var_fv1;
    f64 temp_ft0;
    f64 temp_ft0_2;
    f64 temp_fv0;
    f64 temp_fv1;

    temp_fv0 = M2C_FIELD(arg0, f64 *, 0);
    temp_ft0 = M2C_FIELD(arg0, f64 *, 8);
    temp_fv1 = M2C_FIELD(arg0, f64 *, 0x10);
    temp_fa0 = (f32) ((temp_fv0 * temp_fv0) + (temp_ft0 * temp_ft0) + (temp_fv1 * temp_fv1));
    var_fv1 = sqrtf(temp_fa0);
    if (var_fv1 != var_fv1) {
        var_fv1 = func_80065690(temp_fa0);
    }
    temp_ft0_2 = (f64) var_fv1;
    if (temp_ft0_2 != 0.0) {
        M2C_FIELD(arg0, f64 *, 0) = (f64) (M2C_FIELD(arg0, f64 *, 0) / temp_ft0_2);
        M2C_FIELD(arg0, f64 *, 0x10) = (f64) (M2C_FIELD(arg0, f64 *, 0x10) / temp_ft0_2);
        M2C_FIELD(arg0, f64 *, 8) = (f64) (M2C_FIELD(arg0, f64 *, 8) / temp_ft0_2);
    }
}

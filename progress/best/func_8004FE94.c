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

f64 func_8005A340(f64);                             /* extern */
f64 func_8005A420(f64);                             /* extern */

void func_8004FE94(void *arg0, f32 arg1) {
    f32 temp_fa0;
    f32 temp_fs0_2;
    f32 temp_ft0;
    f32 temp_ft1;
    f32 temp_ft2;
    f32 temp_ft4;
    f32 temp_fv0;
    f32 temp_fv1;
    f64 temp_fs0;

    temp_fs0 = (f64) arg1;
    temp_fs0_2 = (f32) func_8005A420(temp_fs0);
    temp_ft1 = M2C_FIELD(arg0, f32 *, 0);
    temp_ft2 = M2C_FIELD(arg0, f32 *, 0x20);
    temp_fv0 = (f32) func_8005A340(temp_fs0);
    temp_ft0 = M2C_FIELD(arg0, f32 *, 4);
    temp_fv1 = M2C_FIELD(arg0, f32 *, 0x24);
    temp_ft4 = M2C_FIELD(arg0, f32 *, 8);
    temp_fa0 = M2C_FIELD(arg0, f32 *, 0x28);
    M2C_FIELD(arg0, f32 *, 0) = (f32) ((temp_fs0_2 * temp_ft1) - (temp_fv0 * temp_ft2));
    M2C_FIELD(arg0, f32 *, 4) = (f32) ((temp_fs0_2 * temp_ft0) - (temp_fv0 * temp_fv1));
    M2C_FIELD(arg0, f32 *, 8) = (f32) ((temp_fs0_2 * temp_ft4) - (temp_fv0 * temp_fa0));
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) ((temp_fv0 * temp_ft1) + (temp_fs0_2 * temp_ft2));
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) ((temp_fv0 * temp_ft0) + (temp_fs0_2 * temp_fv1));
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) ((temp_fv0 * temp_ft4) + (temp_fs0_2 * temp_fa0));
}

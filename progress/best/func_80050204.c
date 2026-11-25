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
f64 func_8005A420();                        /* extern */
extern f32 D_80079C54;

void func_80050204(void *arg0, f32 arg1, f32 arg2, f32 arg3) {
    f32 temp_fa1;
    f32 temp_fs0_2;
    f32 temp_fs2_2;
    f32 temp_fs3;
    f32 temp_fs4;
    f32 temp_fs5;
    f32 temp_ft0;
    f32 temp_ft0_2;
    f32 temp_ft3;
    f32 temp_fv0;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f64 temp_fs0;
    f64 temp_fs1;
    f64 temp_fs2;

    temp_fs2 = (f64) arg1;
    temp_fs5 = (f32) func_8005A420(temp_fs2, arg1);
    temp_fs0 = (f64) arg2;
    temp_fs4 = (f32) func_8005A340(temp_fs2);
    temp_fs3 = (f32) func_8005A420(temp_fs0);
    temp_fs1 = (f64) arg3;
    temp_fs2_2 = (f32) func_8005A340(temp_fs0);
    temp_fs0_2 = (f32) func_8005A420(temp_fs1);
    temp_fv1 = temp_fs4 * temp_fs2_2;
    temp_fv0 = (f32) func_8005A340(temp_fs1);
    temp_ft3 = temp_fs3 * temp_fv0;
    temp_ft0 = temp_fs5 * temp_fs2_2;
    temp_fa1 = temp_fs4 * temp_fv0;
    temp_fv1_2 = temp_fv1 * temp_fv0;
    temp_ft0_2 = temp_ft0 * temp_fv0;
    M2C_FIELD(arg0, f32 *, 8) = (f32) -temp_fs2_2;
    M2C_FIELD(arg0, f32 *, 0) = (f32) (temp_fs3 * temp_fs0_2);
    M2C_FIELD(arg0, f32 *, 4) = (f32) -temp_ft3;
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) -(temp_fs4 * temp_fs3);
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) (temp_fs5 * temp_fs3);
    M2C_FIELD(arg0, f32 *, 0x2C) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x1C) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0xC) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x38) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x34) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x30) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) D_80079C54;
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) (temp_fv1 * temp_fs0_2);
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) (-temp_fv1_2 + (temp_fs5 * temp_fs0_2));
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) (-(temp_ft0 * temp_fs0_2) + temp_fa1);
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) (temp_ft0_2 + (temp_fs4 * temp_fs0_2));
}

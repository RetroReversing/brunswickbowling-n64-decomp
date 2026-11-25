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

s32 func_8002AB14(M2C_UNK);                         /* extern */
extern f64 D_80077808;
extern f64 D_80077810;
extern f32 D_80077818;
extern f64 D_80077820;
extern f32 D_80077828;
extern f64 D_80077830;
extern f64 D_80077838;
extern f32 D_80077840;
extern f64 D_80077848;
extern f64 D_80077850;
extern s32 D_8008F09C;

void func_80032374(void *arg0, void *arg1) {
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs0_3;
    f32 var_fv0;
    f64 temp_fs1;
    f64 temp_ft0;
    f64 temp_fv0;
    f64 temp_fv1;
    f64 var_ft0;
    f64 var_fv0_2;
    s32 temp_s0;
    s32 temp_v0;
    s32 var_s1;
    s32 var_s3;

    temp_v0 = M2C_FIELD(arg1, s16 *, 2) - 0x80;
    temp_s0 = -temp_v0;
    if (temp_s0 < 0) {
        var_s1 = temp_v0;
        var_s3 = -1;
    } else {
        var_s1 = temp_s0;
        var_s3 = 1;
    }
    temp_fs1 = D_80077810;
    temp_ft0 = M2C_FIELD(arg0, f64 *, 0x348);
    temp_fv0 = (f64) (f32) (((f64) (f32) func_8002AB14(0x2710) * D_80077808) / temp_fs1);
    temp_fv1 = M2C_FIELD(arg0, f64 *, 0x340);
    M2C_FIELD(arg0, f64 *, 0x348) = (f64) (temp_ft0 - (temp_ft0 * temp_fv0));
    M2C_FIELD(arg0, f64 *, 0x340) = (f64) (temp_fv1 + (temp_fv1 * temp_fv0));
    if (var_s1 < 5) {
        temp_fs0 = (f32) temp_s0 * D_80077818;
        var_fv0 = (f32) (((f64) ((f32) func_8002AB14(0x2710) * temp_fs0) * D_80077820) / temp_fs1);
    } else {
        if (var_s1 < 0x11) {
            temp_fs0_2 = (f32) temp_s0 * D_80077828;
            var_fv0_2 = (f64) ((f32) func_8002AB14(0x2710) * temp_fs0_2) * D_80077830;
            var_ft0 = D_80077838;
        } else {
            temp_fs0_3 = (f32) temp_s0 * D_80077840;
            var_fv0_2 = (f64) ((f32) func_8002AB14(0x2710) * temp_fs0_3) * D_80077848;
            var_ft0 = D_80077850;
        }
        var_fv0 = (f32) (var_fv0_2 / temp_fs1) + (f32) ((f64) var_s3 * var_ft0);
    }
    M2C_FIELD(arg0, s32 *, 0x360) = 0;
    M2C_FIELD(arg0, f64 *, 0x340) = (f64) (M2C_FIELD(arg0, f64 *, 0x340) + (M2C_FIELD(arg0, f64 *, 0x348) * (f64) var_fv0));
    M2C_FIELD(arg0, s32 *, 0x364) = (s32) D_8008F09C;
}

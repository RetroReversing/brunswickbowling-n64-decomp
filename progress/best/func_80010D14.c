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

f64 func_80057DC0(f64);                             /* extern */
extern f64 D_800734B0;
extern f64 D_800734B8;

f64 func_80010D14(void *arg0) {
    f64 temp_fv0;
    f64 var_fs0;
    f64 var_fs1;
    f64 var_ft0;

    var_fs1 = func_80057DC0(M2C_FIELD(arg0, f64 *, 0));
    var_fs0 = func_80057DC0(M2C_FIELD(arg0, f64 *, 8));
    temp_fv0 = func_80057DC0(M2C_FIELD(arg0, f64 *, 0x10));
    if (var_fs1 <= temp_fv0) {
        var_ft0 = temp_fv0;
        if (!(var_fs0 <= temp_fv0)) {
            var_ft0 = var_fs0;
            goto block_4;
        }
    } else {
        var_ft0 = var_fs0;
        if (var_fs1 < var_fs0) {
block_4:
            var_fs0 = temp_fv0;
        } else {
            var_ft0 = var_fs1;
            var_fs1 = temp_fv0;
        }
    }
    return (var_ft0 * D_800734B0) + ((var_fs1 + var_fs0) * D_800734B8);
}

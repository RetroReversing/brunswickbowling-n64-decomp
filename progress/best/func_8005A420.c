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

M2C_UNK cordicSinCos(f64, M2C_UNK *, f64 *);       /* extern */
extern f64 D_8007A130;
extern f64 D_8007A138;
extern f64 D_8007A140;
extern f64 D_8007A148;

f64 func_8005A420(f64 arg0) {
    M2C_UNK sp10;
    f64 sp18;
    f64 var_fv0;
    f64 var_fv0_2;
    s32 temp_fv1;

    var_fv0_2 = D_8007A138;
    if (arg0 >= 0.0) {
        var_fv0_2 = D_8007A140;
    }
    temp_fv1 = (s32) ((arg0 / D_8007A130) + var_fv0_2);
    cordicSinCos(arg0 - ((f64) temp_fv1 * D_8007A148), &sp10, &sp18);
    var_fv0 = sp18;
    if (temp_fv1 & 1) {
        var_fv0 = -var_fv0;
    }
    return var_fv0;
}

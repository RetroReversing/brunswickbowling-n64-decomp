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

M2C_UNK cordicSinCos(f64, f64 *, f64 *);           /* extern */
extern f64 D_8007A150;
extern f64 D_8007A158;
extern f64 D_8007A160;
extern f64 D_8007A168;
extern f64 D_8007A170;
extern f64 D_8007A178;

f64 func_8005A4B8(f64 arg0) {
    f64 sp10;
    f64 sp18;
    f64 temp_fa0;
    f64 var_fv0;
    s32 var_v0;
    s32 var_v1;

    var_fv0 = D_8007A158;
    if (arg0 >= 0.0) {
        var_fv0 = D_8007A160;
    }
    temp_fa0 = arg0 - ((f64) (s32) ((arg0 / D_8007A150) + var_fv0) * D_8007A168);
    var_v0 = 1;
    if (!(temp_fa0 < D_8007A170)) {
        var_v0 = 0;
    }
    var_v1 = 1;
    if (!(D_8007A178 < temp_fa0)) {
        var_v1 = 0;
    }
    if (var_v0 & var_v1) {
        return temp_fa0;
    }
    cordicSinCos(temp_fa0, &sp10, &sp18);
    return sp10 / sp18;
}

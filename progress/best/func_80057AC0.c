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

f64 func_80057AC0(s32 arg0, s32 arg1) {
    s32 var_a1;
    s32 var_a2;
    s32 var_a3;

    var_a2 = arg0;
    var_a3 = arg1;
    var_a1 = 0;
    if (var_a2 < 0) {
        var_a3 = -var_a3;
        var_a2 = -var_a2 - (var_a3 != 0);
        var_a1 = 1;
    }
    if ((var_a2 >> 0) < 0) {

    }
    if (var_a3 < 0) {

    }
    if (var_a1 != 0) {

    }
    return M2C_BITWISE(f64, (var_a2 >> 0x1F));
}

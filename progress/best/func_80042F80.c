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

f32 func_80042F80(s64 arg0, M2C_UNK arg1, f64 arg2, M2C_UNK arg3, f64 arg4, f64 arg6, f64 arg8, f64 arg10) {
    return (f32) ((M2C_BITWISE(f64, arg0) * arg6) + (arg2 * arg8) + (arg4 * arg10));
}

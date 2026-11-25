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

s32 func_8004CAD8(s32);                             /* extern */
M2C_UNK func_8004CF34(s32, s32);                    /* extern */

s32 func_8004CB18(s32 arg0, s32 arg1) {
    s32 temp_lo;
    s32 temp_v0;

    temp_lo = arg0 * arg1;
    temp_v0 = func_8004CAD8(temp_lo);
    if (temp_v0 != 0) {
        func_8004CF34(temp_v0, temp_lo);
    }
    return temp_v0;
}

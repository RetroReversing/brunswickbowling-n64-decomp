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

s32 func_8004FC64(s32);                             /* extern */

s32 func_8004011C(s32 arg0, s32 arg1, s32 *arg2) {
    s32 sp10;
    s32 *var_s0;
    s32 temp_v0;

    var_s0 = arg2;
    if (var_s0 == NULL) {
        var_s0 = &sp10;
    }
    temp_v0 = func_8004FC64(arg1);
    *var_s0 = temp_v0;
    if (temp_v0 == 0) {
        return 1;
    }
    M2C_FIELD((arg0 + ((arg1 << 2))), s32 *, 0x6C) = -1;
    return 0;
    return 1;
}

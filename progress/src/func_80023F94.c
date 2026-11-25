/* identical to func_800239C4 (matched), with its names changed by decompdecomp */
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

s32 func_80022250();

s32 func_80023F94(void *arg0, s32 arg1) {
    s32 var_v0;

    if (M2C_FIELD(arg0, s32 *, 0x18) != 0) { var_v0 = 0; } else { var_v0 = func_80022250(arg0, arg1 & 0xFF); }
    return var_v0;
}

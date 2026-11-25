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

s32 func_80039BC4(s32, s32);                        /* extern */
s32 func_8005AAD0(s32);                             /* extern */

void func_80015E60(s32 arg0, s32 arg1, s32 arg2) {
loop_1:
    if (arg2 < func_80039BC4(arg0, arg1)) {
        M2C_FIELD((func_8005AAD0(arg1) + arg1), s8 *, -1) = 0;
        goto loop_1;
    }
}

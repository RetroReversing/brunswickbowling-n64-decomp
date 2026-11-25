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

M2C_UNK func_80037C2C(s32, s16);                    /* extern */
s32 func_8005B998(s32);                        /* extern */

s32 func_80037BC8(s32 arg0, s16 arg1) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD((arg0 + (arg1 + (arg1 * 3))), s32 *, 0x140);
    if (temp_a0 != 0) {
        if (func_8005B998(temp_a0) == 0) {
            do { func_80037C2C(arg0, arg1); } while (0);
            return 1;
        }
    }
    return 0;
}

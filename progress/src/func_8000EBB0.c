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
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern char D_8007C4F0[];

s16 func_8000EBB0(void) {
    s32 *var_a0;
    s16 var_a1;
    s32 var_v1;

    var_a1 = 0;
    var_v1 = 0;
    var_a0 = D_8007C4F0;
    do {
        if ((u32) (M2C_FIELD(var_a0, s32 *, var_v1 * 0xC8 + 0x48) - 1) < 2U) {
            var_a1 |= 1 << (0xE - var_v1);
        }
        var_v1 += 1;
    } while (var_v1 < 0xA);
    return var_a1;
}

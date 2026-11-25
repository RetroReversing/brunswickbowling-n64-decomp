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

s32 func_8001BDE4();
s32 func_800375C0();
extern char D_8008C87C[];
extern char D_8008C894[];
extern char D_8008C8C4[];
extern char D_8008C8DC[];

s32 func_8001B680(void *arg0, s32 arg1, s32 arg2) {
    s32 *var_a0;

    switch (arg2) {
    case 0x209:
        if (M2C_FIELD(arg0, s32 *, 0x30) != 0) {
            func_8001BDE4(arg0, 0);
            var_a0 = D_8008C894;
block_8:
            func_800375C0(var_a0, 1);
            return 0;
        }
        return 1;
    case 0x211:
        var_a0 = D_8008C8C4;
        goto block_8;
    case 0x212:
        var_a0 = D_8008C87C;
        goto block_8;
    case 0x213:
        var_a0 = D_8008C894;
        goto block_8;
    case 0x214:
        var_a0 = D_8008C8DC;
        goto block_8;
    default:
        /* Duplicate return node #10. Try simplifying control flow for better match */
        return 1;
    }
}

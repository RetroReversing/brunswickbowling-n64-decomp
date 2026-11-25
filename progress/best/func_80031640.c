/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O1, tried by autopilot */
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

extern char D_800897EC[];

s32 func_80031640(void *arg0, s32 arg1) {
    s32 var_a2;
    s32 var_a3;
    char *var_t0;

    var_a3 = 0;
    var_a2 = 0;
    var_t0 = *((M2C_FIELD(arg0, s32 *, 0x78) * 4) + D_800897EC);
loop_1:
    var_a2 += 1;
    if (var_a2 >= var_a3) {
        var_a3 += 1;
        var_a2 = 0;
    }
    if (*(u8 *)var_t0 != (M2C_FIELD(arg0, u8 *, 0x49) - 1)) {
        var_t0 += 1;
        goto loop_1;
    }
    if (arg1 != var_a3) {
        var_t0 += 1;
        if (arg1 == var_a2) {
            return var_a3;
        }
        goto loop_1;
    }
    return var_a2;
}

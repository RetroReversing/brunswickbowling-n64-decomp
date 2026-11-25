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

extern s32 D_80079630;

s32 *func_80041730(void *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_a1;
    s32 var_v0;

    var_a1 = arg1;
    var_v0 = var_a1 * 2;
    if (var_a1 == -1) {
        s32 temp;
        temp = *(s32 *)((s8 *)arg0 + 0x8C);
        temp_v0 = temp;
        do { var_a1 = temp_v0; } while (0);
        if (temp_v0 == var_a1) {
            return &D_80079630;
        }
        var_v0 = var_a1 * 2;
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return arg0 + (((var_v0 + var_a1) * 8) + 0xC);
    }
    return arg0 + (((var_v0 + var_a1) * 8) + 0xC);
}

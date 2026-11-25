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

s32 func_8004011C();                                /* extern */
s32 func_80040188(s32, s32, s32);                   /* extern */

s32 func_800403FC(s32 arg0, s32 arg1, s32 *arg2, void *arg3) {
    u8 sp10;
    s32 temp_a2;
    s32 var_a1;
    s32 var_v0;
    s32 var_v0_2;
    void *temp_s0;

    temp_s0 = arg0 + (arg1 * 4);
    if ((u32) (M2C_FIELD(temp_s0, s32 *, 0x6C) + 2) >= 2U) {
        if (func_8004011C() != 0) {
            return M2C_FIELD(temp_s0, s32 *, 0x6C);
        }
        goto block_4;
    }
block_4:
    var_v0_2 = arg1 * 4;
    if (func_80040188(arg0, arg1, *arg2) == 0) {
        if (*arg2 == 0) {
            *arg2 = 9;
        }
        func_80040188(arg0, arg1, *arg2);
        var_v0_2 = arg1 * 4;
        if (arg3 != NULL) {
            temp_a2 = *arg2;
            if (temp_a2 != 0) {
                func_80040188(arg0, arg1, temp_a2);
                return 0;
            }
            var_a1 = 0;
            if (sp10 == M2C_FIELD(arg3, u8 *, 0)) {
                var_a1 = M2C_FIELD(&sp10, u8 *, 1) == M2C_FIELD(arg3, u8 *, 1);
            }
            var_v0 = 0;
            if (var_a1 == 0) {
                var_v0_2 = arg1 * 4;
                goto block_14;
            }
            /* Duplicate return node #15. Try simplifying control flow for better match */
            return var_v0;
        }
        goto block_14;
    }
block_14:
    var_v0 = M2C_FIELD((arg0 + var_v0_2), s32 *, 0x6C) == 4;
    return var_v0;
}

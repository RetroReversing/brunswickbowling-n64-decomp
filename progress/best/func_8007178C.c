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

s32 *func_8007178C(s32 *arg0, s32 arg1) {
    s32 *temp_t0_2;
    s32 *temp_t0_3;
    s32 *var_a0;
    s32 temp_t0;

    var_a0 = arg0;
    temp_t0 = *var_a0;
    if (temp_t0 != arg1) {
        if (temp_t0 >= arg1) {
loop_2:
            temp_t0_2 = M2C_FIELD(var_a0, s32 **, 4);
            if (temp_t0_2 != NULL) {
                var_a0 = temp_t0_2;
                if (arg1 >= M2C_FIELD(var_a0, s32 *, 0)) {
                    return M2C_FIELD(var_a0, s32 **, 8);
                }
                goto loop_2;
            }
            /* Duplicate return node #7. Try simplifying control flow for better match */
            return var_a0;
        }
loop_5:
        temp_t0_3 = M2C_FIELD(var_a0, s32 **, 8);
        if (temp_t0_3 != arg1) {
            var_a0 = temp_t0_3;
            if (*var_a0 < arg1) {
                goto loop_5;
            }
        }
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return var_a0;
    }
    return var_a0;
}

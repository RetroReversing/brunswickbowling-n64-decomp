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

M2C_UNK func_800160A4(void *, s32);                 /* extern */
s32 func_80039BC4(s32, void *);                     /* extern */
s32 func_8005AAD0(s32);                             /* extern */

s32 func_800160D8(void *arg0, s8 arg1, s32 arg2) {
    s32 temp_s1;
    s32 var_a0;
    s32 var_v0;
    u8 temp_v0;
    void *var_v0_2;
    void *var_v1;

    temp_s1 = arg0 + 8;
    var_v0 = 0;
    if (func_8005AAD0(temp_s1) < (M2C_FIELD(arg0, u16 *, 0x10A) - 1)) {
        do { do { var_a0 = func_8005AAD0(temp_s1); } while (0); } while (0);
        do { var_v0_2 = arg0 + arg2; } while (0);
        if (var_a0 >= arg2) {
            var_v1 = (void *) ((var_a0) + (s32) arg0);
            __repair_rows: {
                temp_v0 = M2C_FIELD((arg0 + var_a0), u8 *, 8);
                var_a0 -= 1;
                M2C_FIELD(var_v1, u8 *, 9) = temp_v0;
                var_v1 = (void *) ((var_a0) + (s32) arg0);
            }
if (var_a0 >= arg2) goto __repair_rows;
            do { do { var_v0_2 = arg0 + arg2; } while (0); } while (0);
        }
        do { M2C_FIELD(var_v0_2, s8 *, 8) = arg1; } while (0);
        if (func_80039BC4(M2C_FIELD(arg0, s32 *, 4), arg0 + 8) > (s32) M2C_FIELD(arg0, u16 *, 0x108)) {
            func_800160A4(arg0, arg2);
            return 0;
        }
        var_v0 = 1;
        /* Duplicate return node #8. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}

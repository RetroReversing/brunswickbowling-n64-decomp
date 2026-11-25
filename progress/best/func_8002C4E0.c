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

extern M2C_UNK D_8008AB10;

s32 func_8002C4E0(void *arg0) {
    s32 var_a0;
    s32 var_a2;
    u8 temp_v1;
    u8 temp_v1_2;

    if (M2C_FIELD(&D_8008AB10, s32 *, 0) != 0) {
        temp_v1 = M2C_FIELD(arg0, u8 *, 0xD);
        switch (temp_v1) {                          /* irregular */
        case 0:
            return 0;
        case 1:
            var_a0 = 0;
            if ((M2C_FIELD(&D_8008AB10, s32 *, 8) != 0) || (M2C_FIELD(arg0, u8 *, 6) != 2)) {
                goto block_7;
            }
            /* Duplicate return node #8. Try simplifying control flow for better match */
            return var_a0;
        default:
            return 1;
        }
    } else {
        if ((M2C_FIELD(arg0, u8 *, 0x12) ^ 9) == 0) {
            temp_v1_2 = M2C_FIELD(arg0, u8 *, 0xD);
            var_a0 = 0;
            if (temp_v1_2 != 3) {
                if ((temp_v1_2 == 2) && ((M2C_FIELD(arg0, u8 *, 0xF) + M2C_FIELD(arg0, u8 *, 0x10)) < 0xA)) {
                    var_a0 = 1;
                }
            } else {
block_7:
                var_a0 = 1;
            }
            return var_a0;
        }
        var_a2 = 0;
        if (((u8) M2C_FIELD(arg0, u8 *, 0xD) >= 2U) || ((M2C_FIELD(arg0, s32 *, 0xC) & 0xFF00FF) == 0x1000A)) {
            var_a2 = 1;
        }
        return var_a2;
    }
}

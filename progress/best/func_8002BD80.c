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

extern M2C_UNK D_80076B40;

s32 func_8002BD80(s16 arg0) {
    s16 var_t1;
    s16 var_v1;
    s32 temp_a0;
    s32 temp_v0;
    s32 var_a1;
    s32 var_a2;
    s32 var_a3;
    s32 var_t0;
    s32 var_t0_2;
    s32 var_v0;

    var_t1 = 0;
    if (!(arg0 & 0x4000)) {
        var_t0 = 0;
        do {
            var_v1 = var_t1;
            if ((arg0 >> (0xE - var_t0)) & 1) {
                var_v1 |= *(var_t0 + &D_80076B40);
            }
            var_t0 += 1;
            var_t1 = var_v1;
        } while (var_t0 < 0xA);
        var_t0_2 = 0;
        var_v0 = 2;
loop_6:
        temp_v0 = (1 << var_v0) + 1;
        var_a2 = temp_v0;
        temp_a0 = 5 - var_t0_2;
        var_a3 = temp_v0 ^ (0xFF >> temp_a0);
        var_a1 = 0;
        if (temp_a0 > 0) {
loop_8:
            var_a2 *= 2;
            if (((var_t1 & var_a2) << 0x10) == (var_a2 << 0x10)) {
                var_a1 += 1;
                if (((var_t1 & var_a3) << 0x10) == 0) {
                    return 1;
                }
                goto block_12;
            }
            var_a1 += 1;
block_12:
            var_a3 *= 2;
            if (var_a1 >= (5 - var_t0_2)) {
                goto block_13;
            }
            goto loop_8;
        }
block_13:
        var_t0_2 += 1;
        var_v0 = var_t0_2 + 2;
        if (var_t0_2 >= 5) {
            /* Duplicate return node #14. Try simplifying control flow for better match */
            return 0;
        }
        goto loop_6;
    }
    return 0;
}

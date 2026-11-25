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

s32 func_80057E60(u8 *arg0, u8 *arg1, u32 arg2) {
    s32 temp_v1;
    s32 var_a2_2;
    s32 var_a2_3;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    s32 var_v1_2;
    u32 var_a2;
    u32 var_a3;
    u8 *var_a0;
    u8 *var_a1;

    var_a0 = arg0;
    var_a1 = arg1;
    var_a2 = arg2;
    if (var_a2 != 0) {
        if ((var_a0 - var_a1) & 3) {
            var_a2_2 = var_a2 - 1;
            if (var_a2_2 != -1) {
loop_3:
                var_v1 = *var_a0 - *var_a1;
                var_a1 += 1;
                var_a0 += 1;
                if (var_v1 == 0) {
                    var_a2_2 -= 1;
                    if (var_a2_2 == -1) {
                        goto block_5;
                    }
                    goto loop_3;
                }
                goto block_19;
            }
            goto block_5;
        }
        var_v0_2 = var_a2 < 2U;
        if ((s32) var_a0 & 1) {
            var_v1 = *var_a0 - *var_a1;
            var_a1 += 1;
            var_a0 += 1;
            if (var_v1 == 0) {
                var_a2 -= 1;
                var_v0_2 = var_a2 < 2U;
                goto block_9;
            }
            goto block_19;
        }
block_9:
        var_a3 = var_a2;
        if ((var_v0_2 == 0) && ((s32) var_a0 & 2)) {
            var_v1 = *var_a0 - *var_a1;
            var_a1 += 2;
            var_a0 += 2;
            if (var_v1 == 0) {
                var_a3 = var_a2 - 2;
                goto block_13;
            }
            goto block_19;
        }
block_13:
        var_a2_3 = (var_a3 >> 2) - 1;
        var_v0_3 = var_a3 & 2;
        if (var_a2_3 != -1) {
loop_15:
            var_v1 = *var_a0 - *var_a1;
            var_a1 += 4;
            var_a0 += 4;
            if (var_v1 == 0) {
                var_a2_3 -= 1;
                var_v0_3 = var_a3 & 2;
                if (var_a2_3 == -1) {
                    goto block_17;
                }
                goto loop_15;
            }
            goto block_19;
        }
block_17:
        var_v1_2 = var_a3 & 1;
        if (var_v0_3 != 0) {
            var_v1 = *var_a0 - *var_a1;
            var_a1 += 2;
            var_a0 += 2;
            if (var_v1 != 0) {
block_19:
                return var_v1;
            }
            var_v1_2 = var_a3 & 1;
            goto block_21;
        }
block_21:
        var_v0 = 0;
        if (var_v1_2 != 0) {
            temp_v1 = *var_a0 - *var_a1;
            var_v0 = -(temp_v1 != 0) & temp_v1;
        }
        return var_v0;
    }
block_5:
    return 0;
}

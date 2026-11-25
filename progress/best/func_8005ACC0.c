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

s32 func_8005ACC0(u8 *arg0, u8 *arg1, u32 arg2) {
    s32 var_a2_2;
    s32 var_t0_2;
    u32 temp_v1;
    u32 var_a2;
    u32 var_t0;
    u8 *var_a1;
    u8 *var_a3;
    u8 temp_v0;
    u8 temp_v0_2;

    var_a1 = arg1;
    var_a2 = arg2;
    var_a3 = arg0;
    if ((var_a1 - arg0) & 3) {
        goto block_1;
    }
    var_t0 = var_a2 >> 2;
    if ((s32) var_a3 & 3) {
loop_7:
        var_a2 -= 1;
        if (var_a2 != -1U) {
            temp_v0 = *var_a1;
            *var_a3 = temp_v0;
            var_a1 += 1;
            var_a3 += 1;
            if (temp_v0 != 0) {
                if (!((s32) var_a3 & 3)) {
                    var_t0 = var_a2 >> 2;
                    goto block_11;
                }
                goto loop_7;
            }
        }
    } else {
block_11:
        var_t0_2 = var_t0 - 1;
        if (var_t0_2 != -1) {
loop_13:
            temp_v1 = *var_a1;
            var_a1 += 4;
            if (temp_v1 & 0xFF000000) {
                if (temp_v1 & 0xFF0000) {
                    if (temp_v1 & 0xFF00) {
                        M2C_FIELD(var_a3, u32 *, 0) = temp_v1;
                        var_a3 += 4;
                        if (temp_v1 & 0xFF) {
                            var_t0_2 -= 1;
                            if (var_t0_2 == -1) {
                                goto block_18;
                            }
                            goto loop_13;
                        }
                    } else {
                        M2C_FIELD(var_a3, u32 *, 0) = (s16) (temp_v1 >> 0x10);
                        M2C_FIELD(var_a3, s8 *, 2) = 0;
                    }
                } else {
                    M2C_FIELD(var_a3, u32 *, 0) = (s16) (temp_v1 >> 0x10);
                }
            } else {
                M2C_FIELD(var_a3, u8 *, 0) = 0;
            }
        } else {
block_18:
            var_a2 &= 3;
block_1:
            var_a2_2 = var_a2 - 1;
            if (var_a2_2 != -1) {
loop_2:
                temp_v0_2 = *var_a1;
                *var_a3 = temp_v0_2;
                var_a1 += 1;
                var_a3 += 1;
                if (temp_v0_2 != 0) {
                    var_a2_2 -= 1;
                    if (var_a2_2 != -1) {
                        goto loop_2;
                    }
                }
            }
        }
    }
    return (s32) arg0;
}

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

s32 func_8002BFC8(void *arg0, s32 arg1) {
    s16 temp_a1;
    s16 var_a0_2;
    s16 var_v0_2;
    s32 var_a0;
    s32 var_v0;
    u8 temp_v1;
    void *temp_a0;

    if (M2C_FIELD(arg0, u8 *, 9) != 0) {
        var_v0 = M2C_FIELD(arg0, u16 *, 4) << 0x10;
    } else {
        temp_a0 = M2C_FIELD(arg0, void **, 0);
        if (temp_a0 == NULL) {
            var_a0 = 0;
        } else {
            var_a0 = func_8002BFC8(temp_a0, arg1);
        }
        temp_v1 = M2C_FIELD(arg0, u8 *, 0xD);
        if (temp_v1 != 1) {
            if ((s32) temp_v1 >= 2) {
                var_v0 = var_a0 << 0x10;
                if (temp_v1 != 2) {

                } else {
                    temp_a1 = var_a0 + M2C_FIELD(arg0, u8 *, 0xF);
                    var_a0_2 = temp_a1;
                    if (M2C_FIELD(arg0, u8 *, 0x10) == 0xA) {
                        var_a0_2 = temp_a1 + 0xA;
                    }
                    var_v0_2 = var_a0_2;
                    if (arg1 != 0) {
                        var_v0_2 += 0xA;
                    }
                    goto block_26;
                }
            } else {
                var_v0 = var_a0 << 0x10;
                if (temp_v1 != 0) {

                } else {
                    var_v0_2 = (s16) var_a0;
                    if (arg1 != 0) {
                        goto block_15;
                    }
                    goto block_26;
                }
            }
        } else {
            if (M2C_FIELD(arg0, u8 *, 0xF) == 0xA) {
                if (arg1 == 0) {
                    var_v0_2 = (s16) var_a0 + 0xA;
                } else {
block_15:
                    var_v0_2 = (s16) var_a0 + 0x1E;
                }
            } else if (arg1 == 0) {
                var_v0_2 = (s16) var_a0 + M2C_FIELD(arg0, u8 *, 0xF);
            } else {
                var_v0_2 = (s16) var_a0 + 0x14;
            }
block_26:
            var_v0 = var_v0_2 << 0x10;
        }
    }
    return var_v0 >> 0x10;
}

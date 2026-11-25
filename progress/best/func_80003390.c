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

M2C_UNK func_8000359C(s32);                         /* extern */
M2C_UNK func_80004B64(s32);                         /* extern */
M2C_UNK func_80007408(s32);                         /* extern */
M2C_UNK func_80008408(s32, s32);                    /* extern */
extern s32 D_8007C4EC;
extern M2C_UNK D_8007C4F0;

void func_80003390(void) {
    M2C_UNK *var_s0_3;
    M2C_UNK *var_s0_4;
    M2C_UNK *var_s4;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s2;
    s32 var_s2_2;
    void *var_s1;
    void *var_s1_2;

    var_s2 = 0;
    var_s4 = &D_8007C4F0;
    do {
        temp_v1 = M2C_FIELD(var_s4, s32 *, 0x48);
        var_s0 = var_s2 + 1;
        if ((u32) (temp_v1 - 2) < 2U) {
            if (var_s0 < 0xA) {
                var_s1 = (var_s0 * 0xC8) + &D_8007C4F0;
                do {
                    if (M2C_FIELD(var_s1, s32 *, 0x48) != 0) {
                        func_80008408(var_s2, var_s0);
                    }
                    var_s0 += 1;
                    var_s1 += 0xC8;
                } while (var_s0 < 0xA);
                var_s4 += 0xC8;
            } else {
                goto block_16;
            }
        } else {
            if (temp_v1 != 0) {
                var_s0_2 = var_s2 + 1;
                if (var_s0_2 < 0xA) {
                    var_s1_2 = (var_s0_2 * 0xC8) + &D_8007C4F0;
                    do {
                        if (M2C_FIELD(var_s1_2, s32 *, 0x48) != 3) {
                            if (M2C_FIELD(var_s4, s32 *, 0x48) == 2) {
                                goto block_14;
                            }
                        } else {
block_14:
                            func_80008408(var_s2, var_s0_2);
                        }
                        var_s0_2 += 1;
                        var_s1_2 += 0xC8;
                    } while (var_s0_2 < 0xA);
                }
            }
block_16:
            var_s4 += 0xC8;
        }
        var_s2 += 1;
    } while (var_s2 < 9);
    var_s2_2 = 0;
    if (D_8007C4EC != 0) {
        var_s0_3 = &D_8007C4F0;
loop_20:
        if (M2C_FIELD(var_s0_3, s32 *, 0x48) != 0) {
            func_8000359C(var_s2_2);
            temp_v0 = M2C_FIELD(var_s0_3, s32 *, 0x48);
            if (temp_v0 == 3) {
                func_80004B64(var_s2_2);
                var_s0_3 += 50;
            } else {
                if (temp_v0 == 2) {
                    func_80007408(var_s2_2);
                }
                goto block_25;
            }
        } else {
block_25:
            var_s0_3 += 0xC8;
        }
        var_s2_2 += 1;
        if (var_s2_2 < 0xA) {
            goto loop_20;
        }
    } else {
        var_s0_4 = &D_8007C4F0;
        do {
            temp_v0_2 = M2C_FIELD(var_s0_4, s32 *, 0x48);
            if (temp_v0_2 == 3) {
                func_80004B64(var_s2_2);
                var_s0_4 += 0xC8;
            } else {
                if (temp_v0_2 == 2) {
                    func_80007408(var_s2_2);
                }
                var_s0_4 += 0xC8;
            }
            var_s2_2 += 1;
        } while (var_s2_2 < 0xA);
    }
}

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

extern f32 D_80073D74;
extern f64 D_80073D78;
extern f64 D_80073D80;
extern f64 D_80073D88;
extern f64 D_80073D90;
extern f64 D_80073D98;
extern f64 D_80073DA0;
extern M2C_UNK D_80081FE8;
extern u16 D_8009CBD0;
extern u16 D_8009CBE4;
extern void *D_8009CC60;

void func_80013E40(void *arg0) {
    s16 temp_s0;
    s16 temp_t9;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v1_2;
    s32 temp_a3;
    s32 temp_ft2;
    s32 temp_ft2_2;
    s32 temp_lo;
    s32 temp_t0;
    s32 temp_v0_5;
    s32 temp_v1;
    s32 var_a0;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v1_2;
    s32 var_v1_3;
    void *temp_t7;
    void *temp_t7_10;
    void *temp_t7_11;
    void *temp_t7_12;
    void *temp_t7_13;
    void *temp_t7_14;
    void *temp_t7_15;
    void *temp_t7_16;
    void *temp_t7_17;
    void *temp_t7_18;
    void *temp_t7_19;
    void *temp_t7_2;
    void *temp_t7_3;
    void *temp_t7_4;
    void *temp_t7_5;
    void *temp_t7_6;
    void *temp_t7_7;
    void *temp_t7_8;
    void *temp_t7_9;
    void *var_a0_2;
    void *var_a1;
    void *var_t7;
    void *var_t7_2;
    void *var_t7_3;
    void *var_v1;

    temp_t7 = D_8009CC60 + 8;
    M2C_FIELD(D_8009CC60, s32 *, 0) = 0x06000000;
    M2C_FIELD(D_8009CC60, M2C_UNK **, 4) = &D_80081FE8;
    M2C_FIELD(D_8009CC60, s32 *, 8) = 0xE7000000;
    M2C_FIELD(temp_t7, s32 *, 4) = 0;
    temp_v1 = ((u32) M2C_FIELD(arg0, u32 *, 0) >> 0x1C) & 3;
    temp_t7_2 = temp_t7 + 8;
    if (temp_v1 != 1) {
        if (temp_v1 < 2) {
            var_v1 = temp_t7_2;
            if (temp_v1 != 0) {
                var_t7 = temp_t7_2 + 8;
            } else {
                goto block_7;
            }
        } else {
            var_v1 = temp_t7_2;
            if (temp_v1 != 2) {
                var_t7 = temp_t7_2 + 8;
            } else {
block_7:
                temp_t7_3 = temp_t7_2 + 8;
                var_a1 = temp_t7_3;
                var_t7_2 = temp_t7_3 + 8;
                M2C_FIELD(temp_t7, s32 *, 8) = 0xFA000000;
                M2C_FIELD(temp_t7_2, s32 *, 4) = 0x80;
                goto block_8;
            }
        }
    } else {
        temp_t7_4 = temp_t7_2 + 8;
        var_a1 = temp_t7_4;
        var_t7_2 = temp_t7_4 + 8;
        M2C_FIELD(temp_t7, s32 *, 8) = 0xFA000000;
        M2C_FIELD(temp_t7_2, s32 *, 4) = -0x80;
block_8:
        M2C_FIELD(var_a1, s32 *, 0) = 0xFC119623;
        M2C_FIELD(var_a1, s32 *, 4) = 0xFF2FFFFF;
        var_v1 = var_t7_2;
        var_t7 = var_t7_2 + 8;
    }
    temp_t7_5 = var_t7 + 8;
    temp_t7_6 = temp_t7_5 + 8;
    temp_t7_7 = temp_t7_6 + 8;
    temp_t7_8 = temp_t7_7 + 8;
    temp_t7_9 = temp_t7_8 + 8;
    temp_t7_10 = temp_t7_9 + 8;
    temp_s0 = M2C_FIELD(arg0, s16 *, 4);
    temp_t9 = M2C_FIELD(arg0, s16 *, 6);
    M2C_FIELD(var_v1, s32 *, 0) = 0xFD100000;
    temp_t7_11 = temp_t7_10 + 8;
    M2C_FIELD(var_v1, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
    M2C_FIELD(var_t7, s32 *, 0) = 0xE8000000;
    M2C_FIELD(var_t7, s32 *, 4) = 0;
    M2C_FIELD(var_t7, s32 *, 8) = 0xF5000100;
    M2C_FIELD(temp_t7_5, s32 *, 4) = 0x07000000;
    M2C_FIELD(temp_t7_5, s32 *, 8) = 0xE6000000;
    M2C_FIELD(temp_t7_6, s32 *, 4) = 0;
    M2C_FIELD(temp_t7_7, s32 *, 4) = 0x073FC000;
    temp_t7_12 = temp_t7_11 + 8;
    M2C_FIELD(temp_t7_6, s32 *, 8) = 0xF0000000;
    temp_t7_13 = temp_t7_12 + 8;
    M2C_FIELD(temp_t7_7, s32 *, 8) = 0xE7000000;
    M2C_FIELD(temp_t7_8, s32 *, 4) = 0;
    temp_t7_14 = temp_t7_13 + 8;
    M2C_FIELD(temp_t7_8, s32 *, 8) = (s32) (((M2C_FIELD(arg0, u16 *, 0xA) - 1) & 0xFFF) | 0xFD480000);
    M2C_FIELD(temp_t7_9, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0x10);
    M2C_FIELD(temp_t7_10, s32 *, 4) = 0x07000000;
    M2C_FIELD(temp_t7_9, s32 *, 8) = (s32) (((((s32) (M2C_FIELD(arg0, u16 *, 0xA) + 7) >> 3) & 0x1FF) << 9) | 0xF5480000);
    M2C_FIELD(temp_t7_10, s32 *, 8) = 0xE6000000;
    M2C_FIELD(temp_t7_11, s32 *, 4) = 0;
    temp_t7_15 = temp_t7_14 + 8;
    M2C_FIELD(temp_t7_11, s32 *, 8) = 0xF4000000;
    temp_t7_16 = temp_t7_15 + 8;
    M2C_FIELD(temp_t7_12, s32 *, 4) = (s32) (((((M2C_FIELD(arg0, u16 *, 0xA) - 1) * 4) & 0xFFF) << 0xC) | ((((M2C_FIELD(arg0, u16 *, 0xC) - 1) * 4) & 0xFFF) | 0x07000000));
    M2C_FIELD(temp_t7_12, s32 *, 8) = 0xE7000000;
    M2C_FIELD(temp_t7_13, s32 *, 4) = 0;
    M2C_FIELD(temp_t7_14, s32 *, 4) = 0;
    M2C_FIELD(temp_t7_13, s32 *, 8) = (s32) (((((s32) (M2C_FIELD(arg0, u16 *, 0xA) + 7) >> 3) & 0x1FF) << 9) | 0xF5480000);
    M2C_FIELD(temp_t7_14, s32 *, 8) = 0xF2000000;
    temp_a3 = temp_s0 + (s32) (((f32) M2C_FIELD(arg0, u16 *, 0xA) * M2C_FIELD(arg0, f32 *, 0x20)) - D_80073D74);
    temp_t0 = temp_t9 + (s32) (((f32) M2C_FIELD(arg0, u16 *, 0xC) * M2C_FIELD(arg0, f32 *, 0x24)) - D_80073D74);
    M2C_FIELD(temp_t7_15, s32 *, 4) = (s32) (((((M2C_FIELD(arg0, u16 *, 0xA) - 1) * 4) & 0xFFF) << 0xC) | (((M2C_FIELD(arg0, u16 *, 0xC) - 1) * 4) & 0xFFF));
    if ((temp_s0 < 0) || (temp_t9 < 0) || (temp_a3 < 0) || (temp_t0 < 0)) {
        var_s1 = 1;
    }
    if (((s32) D_8009CBD0 < temp_s0) || ((s32) D_8009CBE4 < temp_t9) || ((s32) D_8009CBD0 < temp_a3) || ((s32) D_8009CBE4 < temp_t0)) {
        var_s1 = 1;
    }
    if (var_s1 != 0) {
        temp_v0 = temp_a3 * 4;
        temp_t7_17 = temp_t7_16 + 8;
        if (temp_v0 > 0) {
            var_v0 = ((temp_v0 & 0xFFF) << 0xC) | 0xE4000000;
        } else {
            var_v0 = 0xE4000000;
        }
        var_v1_2 = var_v0;
        temp_v0_2 = temp_t0 * 4;
        if (temp_v0_2 > 0) {
            var_v1_2 |= temp_v0_2 & 0xFFF;
        }
        temp_v0_3 = temp_s0 * 4;
        M2C_FIELD(temp_t7_15, s32 *, 8) = var_v1_2;
        if (temp_v0_3 > 0) {
            var_v0_2 = (temp_v0_3 & 0xFFF) << 0xC;
        } else {
            var_v0_2 = 0;
        }
        var_v1_3 = var_v0_2;
        temp_v0_4 = temp_t9 * 4;
        if (temp_v0_4 > 0) {
            var_v1_3 |= temp_v0_4 & 0xFFF;
        }
        M2C_FIELD(temp_t7_16, s32 *, 4) = var_v1_3;
        M2C_FIELD(temp_t7_16, s32 *, 8) = 0xB4000000;
        temp_v1_2 = temp_s0 * 4;
        var_t7_3 = temp_t7_17 + 8;
        if (temp_v1_2 < 0) {
            temp_ft2 = (s32) ((D_80073D78 / (f64) M2C_FIELD(arg0, f32 *, 0x20)) * D_80073D80);
            temp_lo = temp_v1_2 * (s16) temp_ft2;
            if ((s16) temp_ft2 < 0) {
                temp_v0_5 = temp_lo >> 7;
                var_v0_3 = -temp_v0_5;
                if (temp_v0_5 < 0) {
                    var_v0_4 = 0;
                    goto block_36;
                }
            } else {
                var_v0_4 = temp_lo >> 7;
                if (var_v0_4 > 0) {
                    var_v0_4 = 0;
                }
block_36:
                var_v0_3 = -var_v0_4;
            }
            var_a0 = var_v0_3 << 0x10;
        } else {
            var_a0 = 0;
        }
        var_v0_5 = var_a0;
        if (temp_t9 & 0x20000000) {
            temp_ft2_2 = (s32) ((D_80073D88 / (f64) M2C_FIELD(arg0, f32 *, 0x24)) * D_80073D90);
            if ((s16) temp_ft2_2 < 0) {
                var_v0_6 = (s32) ((s16) (temp_t9 * 4) * (s16) temp_ft2_2) >> 7;
                if (var_v0_6 < 0) {
                    var_v0_6 = 0;
                }
            } else {
                var_v0_6 = (s32) ((s16) (temp_t9 * 4) * (s16) temp_ft2_2) >> 7;
                if (var_v0_6 > 0) {
                    var_v0_6 = 0;
                }
            }
            var_v0_5 = var_a0 | (-var_v0_6 & 0xFFFF);
        }
        var_a0_2 = var_t7_3;
        M2C_FIELD(temp_t7_17, s32 *, 4) = var_v0_5;
    } else {
        temp_t7_18 = temp_t7_16 + 8;
        var_t7_3 = temp_t7_18 + 8;
        M2C_FIELD(temp_t7_15, s32 *, 8) = (s32) ((((temp_a3 * 4) & 0xFFF) << 0xC) | (((temp_t0 * 4) & 0xFFF) | 0xE4000000));
        M2C_FIELD(temp_t7_16, s32 *, 4) = (s32) ((((temp_s0 * 4) & 0xFFF) << 0xC) | ((temp_t9 * 4) & 0xFFF));
        var_a0_2 = var_t7_3;
        M2C_FIELD(temp_t7_16, s32 *, 8) = 0xB4000000;
        M2C_FIELD(temp_t7_18, s32 *, 4) = 0;
    }
    M2C_FIELD(var_a0_2, s32 *, 0) = 0xB3000000;
    temp_t7_19 = var_t7_3 + 8;
    M2C_FIELD(var_a0_2, s32 *, 4) = (s32) (((s32) ((D_80073D98 / (f64) M2C_FIELD(arg0, f32 *, 0x20)) * D_80073DA0) << 0x10) | ((s32) ((D_80073D98 / (f64) M2C_FIELD(arg0, f32 *, 0x24)) * D_80073DA0) & 0xFFFF));
    M2C_FIELD(var_t7_3, s32 *, 8) = 0xE7000000;
    M2C_FIELD(temp_t7_19, s32 *, 4) = 0;
    D_8009CC60 = temp_t7_19 + 8;
}

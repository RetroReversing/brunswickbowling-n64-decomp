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

extern void *D_8009CC60;

void *func_800514B0(void *arg0, void *arg1) {
    s16 temp_t0;
    s16 temp_t1;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 temp_a1_2;
    s32 temp_a3;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    u32 temp_a1;
    u32 temp_t4;
    u32 temp_t4_2;
    void *temp_t3;
    void *temp_t3_10;
    void *temp_t3_11;
    void *temp_t3_12;
    void *temp_t3_13;
    void *temp_t3_2;
    void *temp_t3_3;
    void *temp_t3_4;
    void *temp_t3_5;
    void *temp_t3_6;
    void *temp_t3_7;
    void *temp_t3_8;
    void *temp_t3_9;
    void *var_a1;
    void *var_a1_2;
    void *var_t3;
    void *var_t3_2;
    void *var_t3_3;

    temp_a1 = M2C_FIELD(arg0, u32 *, 0);
    temp_t0 = M2C_FIELD(arg0, s16 *, 4);
    temp_t1 = M2C_FIELD(arg0, s16 *, 6);
    if (temp_a1 & 0x40000000) {
        if (!((temp_a1 >> 0x1C) & 3)) {
            temp_t3 = arg1 + 8;
            M2C_FIELD(arg1, s32 *, 0) = 0xBA001402;
            M2C_FIELD(arg1, s32 *, 4) = 0;
            temp_t4 = M2C_FIELD(arg0, u8 *, 0x1C) | ((M2C_FIELD(arg0, u8 *, 0x1D) << 8) | 0x80000000) | (M2C_FIELD(arg0, u8 *, 0x1E) << 0x10);
            if (M2C_FIELD(arg0, u32 *, 0) & 4) {
                temp_t3_2 = temp_t3 + 8;
                temp_t3_3 = temp_t3_2 + 8;
                M2C_FIELD(arg1, s32 *, 8) = 0xB900031D;
                M2C_FIELD(temp_t3, s32 *, 4) = 0x504A50;
                M2C_FIELD(temp_t3, s32 *, 8) = 0xB9000201;
                M2C_FIELD(temp_t3_2, s32 *, 4) = 4;
                M2C_FIELD(temp_t3_2, s32 *, 8) = 0xEE000000;
                var_t3 = temp_t3_3 + 8;
                M2C_FIELD(temp_t3_3, s32 *, 4) = (s32) (M2C_FIELD(arg0, u16 *, 8) << 0x10);
            } else {
                var_t3 = temp_t3 + 8;
                M2C_FIELD(arg1, s32 *, 8) = 0xB900031D;
                M2C_FIELD(temp_t3, s32 *, 4) = 0x504240;
            }
            temp_t3_4 = var_t3 + 8;
            temp_t3_5 = temp_t3_4 + 8;
            M2C_FIELD(var_t3, s32 *, 4) = 0xFFFDF6FB;
            M2C_FIELD(var_t3, s32 *, 0) = 0xFCFFFFFF;
            M2C_FIELD(var_t3, s32 *, 8) = 0xFA000000;
            M2C_FIELD(temp_t3_4, s32 *, 4) = (s32) ((temp_t4 << 0x18) | (((temp_t4 >> 8) & 0xFF) << 0x10) | ((temp_t4 >> 8) & 0xFF00) | (temp_t4 >> 0x18));
            if ((temp_t0 < 0) || (var_a1 = temp_t3_5, (temp_t1 < 0))) {
                var_a1_2 = temp_t3_5;
                var_a0 = M2C_FIELD(arg0, s16 *, 4) + M2C_FIELD(arg0, u16 *, 0xA);
                var_t3_2 = temp_t3_5 + 8;
                if (var_a0 < 0) {
                    var_a0 = 0;
                }
                var_v1 = M2C_FIELD(arg0, s16 *, 6) + M2C_FIELD(arg0, u16 *, 0xC);
                if (var_v1 < 0) {
                    var_v1 = 0;
                }
                M2C_FIELD(temp_t3_4, s32 *, 8) = (s32) (((var_a0 & 0x3FF) << 0xE) | (((var_v1 & 0x3FF) * 4) | 0xF6000000));
                temp_v0 = M2C_FIELD(arg0, s16 *, 4);
                var_v0 = temp_v0 & 0x3FF;
                if (temp_v0 <= 0) {
                    var_v1_2 = 0;
                } else {
                    goto block_26;
                }
                goto block_28;
            }
            var_t3_2 = temp_t3_5 + 8;
            goto block_32;
            goto block_33;
        }
    } else {
        temp_a3 = (((u8) M2C_FIELD(arg0, u8 *, 0x1E) >> 2) & 0x3E) | (((M2C_FIELD(arg0, u8 *, 0x1C) << 8) & 0xF800) | ((M2C_FIELD(arg0, u8 *, 0x1D) * 8) & 0x7C0)) | 1;
        if (temp_a1 & 4) {
            temp_t3_6 = arg1 + 8;
            temp_t3_7 = temp_t3_6 + 8;
            M2C_FIELD(arg1, s32 *, 0) = 0xB900031D;
            M2C_FIELD(arg1, s32 *, 4) = 0x552230;
            M2C_FIELD(arg1, s32 *, 8) = 0xB9000201;
            M2C_FIELD(temp_t3_6, s32 *, 4) = 4;
            M2C_FIELD(temp_t3_6, s32 *, 8) = 0xEE000000;
            var_t3_3 = temp_t3_7 + 8;
            M2C_FIELD(temp_t3_7, s32 *, 4) = (s32) (M2C_FIELD(arg0, u16 *, 8) << 0x10);
        } else {
            var_t3_3 = arg1 + 8;
            M2C_FIELD(arg1, s32 *, 0) = 0xB900031D;
            M2C_FIELD(arg1, s32 *, 4) = 0x0F0A4000;
        }
        temp_t3_8 = var_t3_3 + 8;
        temp_a1_2 = (temp_a3 << 0x10) | temp_a3;
        M2C_FIELD(var_t3_3, s32 *, 0) = 0xF7000000;
        M2C_FIELD(var_t3_3, s32 *, 4) = temp_a1_2;
        if (temp_t0 >= 0) {
            if (temp_t1 >= 0) {
                if (M2C_FIELD(arg0, u32 *, 0) & 4) {
                    goto block_20;
                }
                temp_t3_9 = temp_t3_8 + 8;
                temp_t3_10 = temp_t3_9 + 8;
                M2C_FIELD(var_t3_3, s32 *, 8) = 0xF7000000;
                M2C_FIELD(temp_t3_8, s32 *, 4) = temp_a1_2;
                M2C_FIELD(temp_t3_8, s32 *, 8) = 0xBA001402;
                var_a1 = temp_t3_10;
                var_t3_2 = temp_t3_10 + 8;
                M2C_FIELD(temp_t3_9, s32 *, 4) = 0x300000;
block_32:
                M2C_FIELD(var_a1, s32 *, 0) = (s32) ((((M2C_FIELD(arg0, s16 *, 4) + M2C_FIELD(arg0, u16 *, 0xA)) & 0x3FF) << 0xE) | ((((M2C_FIELD(arg0, s16 *, 6) + M2C_FIELD(arg0, u16 *, 0xC)) & 0x3FF) * 4) | 0xF6000000));
                M2C_FIELD(var_a1, s32 *, 4) = (s32) ((((u16) M2C_FIELD(arg0, s16 *, 4) & 0x3FF) << 0xE) | (((u16) M2C_FIELD(arg0, s16 *, 6) & 0x3FF) * 4));
            } else {
                goto block_21;
            }
        } else {
block_20:
block_21:
            temp_t3_11 = temp_t3_8 + 8;
            temp_t3_12 = temp_t3_11 + 8;
            temp_t3_13 = temp_t3_12 + 8;
            M2C_FIELD(temp_t3_8, s32 *, 0) = 0xBA001402;
            M2C_FIELD(temp_t3_8, s32 *, 4) = 0;
            M2C_FIELD(temp_t3_8, s32 *, 8) = 0xFA000000;
            temp_t4_2 = M2C_FIELD(arg0, u8 *, 0x1C) | ((M2C_FIELD(arg0, u8 *, 0x1D) << 8) | 0xFF000000) | (M2C_FIELD(arg0, u8 *, 0x1E) << 0x10);
            var_a1_2 = temp_t3_13;
            M2C_FIELD(temp_t3_11, s32 *, 4) = (s32) ((temp_t4_2 << 0x18) | (((temp_t4_2 >> 8) & 0xFF) << 0x10) | ((temp_t4_2 >> 8) & 0xFF00) | (temp_t4_2 >> 0x18));
            M2C_FIELD(temp_t3_11, s32 *, 8) = 0xFCFFFFFF;
            M2C_FIELD(temp_t3_12, s32 *, 4) = 0xFFFDF6FB;
            var_a0_2 = M2C_FIELD(arg0, s16 *, 4) + M2C_FIELD(arg0, u16 *, 0xA);
            var_t3_2 = temp_t3_13 + 8;
            if (var_a0_2 < 0) {
                var_a0_2 = 0;
            }
            var_v1_3 = M2C_FIELD(arg0, s16 *, 6) + M2C_FIELD(arg0, u16 *, 0xC);
            if (var_v1_3 < 0) {
                var_v1_3 = 0;
            }
            M2C_FIELD(temp_t3_12, s32 *, 8) = (s32) (((var_a0_2 & 0x3FF) << 0xE) | (((var_v1_3 & 0x3FF) * 4) | 0xF6000000));
            temp_v0_2 = M2C_FIELD(arg0, s16 *, 4);
            var_v0 = temp_v0_2 & 0x3FF;
            if (temp_v0_2 > 0) {
block_26:
                var_v1_2 = var_v0 << 0xE;
            } else {
                var_v1_2 = 0;
            }
block_28:
            temp_v0_3 = M2C_FIELD(arg0, s16 *, 6);
            if (temp_v0_3 > 0) {
                var_v1_2 |= (temp_v0_3 & 0x3FF) * 4;
            }
            M2C_FIELD(var_a1_2, s32 *, 4) = var_v1_2;
        }
block_33:
        M2C_FIELD(var_t3_2, s32 *, 0) = 0xE7000000;
        M2C_FIELD(var_t3_2, s32 *, 4) = 0;
        D_8009CC60 = var_t3_2 + 8;
    }
    return D_8009CC60;
}

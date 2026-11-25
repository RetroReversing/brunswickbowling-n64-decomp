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

u32 func_80052C50();
s32 func_80053330();
u32 func_80053338();
s32 func_80054644();
extern char D_80097058[];
extern char D_800970A4[];
extern char D_800970E4[];
extern char D_80097124[];
extern char D_80097160[];
extern char D_8009719C[];
extern s32 D_800A3350;
extern u8 *D_800A3850;
extern s32 D_800A3860;
extern s32 D_800A3864;
extern s32 D_800A3870;
extern s32 D_800A3874;
extern u32 D_800A3880;
extern u32 D_800A3884;

u32 func_80053D90(void) {
    void *sp20;
    u32 sp24;
    void *sp28;
    u32 sp2C;
    s32 sp30;
    u32 sp34;
    u32 sp38;
    char *var_s4;
    char *var_v0_2;
    char *var_v0_5;
    char *var_v0_6;
    char *var_v1;
    s32 temp_s0_3;
    s32 temp_v1_10;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_4;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v1_2;
    s32 var_v1_3;
    u16 temp_s0_2;
    u16 var_s5;
    u32 temp_fp;
    u32 temp_s3;
    u32 temp_s5;
    u32 var_s0;
    u32 var_s1;
    u32 var_s1_2;
    u32 var_s1_3;
    u32 var_s1_4;
    u32 var_s2;
    u32 var_s2_2;
    u32 var_s2_3;
    u32 var_s2_4;
    u32 var_s3;
    u32 var_v0;
    u8 temp_s0;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 temp_v1_3;
    u8 temp_v1_4;
    u8 temp_v1_5;
    u8 temp_v1_7;
    u8 temp_v1_8;
    u8 temp_v1_9;
    void *temp_v1_6;

    var_s1 = D_800A3884;
    var_s2 = D_800A3880;
    if (var_s1 < 5U) {
        do {
            if ((D_800A3864 != 0) || (D_800A3860 -= 1, (D_800A3860 > 0))) {
                temp_v1 = *D_800A3850;
                D_800A3850 += 1;
                var_s2 |= temp_v1 << var_s1;
            } else {
                var_s2 |= (func_80054644() & 0xFF) << var_s1;
            }
            var_s1 += 8;
        } while (var_s1 < 5U);
    }
    sp34 = (var_s2 & 0x1F) + 0x101;
    var_s1_2 = var_s1 - 5;
    var_s2_2 = var_s2 >> 5;
    if (var_s1_2 < 5U) {
        do {
            if ((D_800A3864 != 0) || (D_800A3860 -= 1, (D_800A3860 > 0))) {
                temp_v1_2 = *D_800A3850;
                D_800A3850 += 1;
                var_s2_2 |= temp_v1_2 << var_s1_2;
            } else {
                var_s2_2 |= (func_80054644() & 0xFF) << var_s1_2;
            }
            var_s1_2 += 8;
        } while (var_s1_2 < 5U);
    }
    sp38 = (var_s2_2 & 0x1F) + 1;
    var_s1_3 = var_s1_2 - 5;
    var_s2_3 = var_s2_2 >> 5;
    if (var_s1_3 < 4U) {
        do {
            if ((D_800A3864 != 0) || (D_800A3860 -= 1, (D_800A3860 > 0))) {
                temp_v1_3 = *D_800A3850;
                D_800A3850 += 1;
                var_s2_3 |= temp_v1_3 << var_s1_3;
            } else {
                var_s2_3 |= (func_80054644() & 0xFF) << var_s1_3;
            }
            var_s1_3 += 8;
        } while (var_s1_3 < 4U);
    }
    temp_s5 = (var_s2_3 & 0xF) + 4;
    var_s2_4 = var_s2_3 >> 4;
    var_s1_4 = var_s1_3 - 4;
    if ((sp34 >= 0x121U) || (sp38 >= 0x21U)) {
        return 4U;
    }
    var_s0 = 0;
    if (temp_s5 != 0) {
        do {
loop_31:
            if (var_s1_4 < 3U) {
                if ((D_800A3864 != 0) || (D_800A3860 -= 1, (D_800A3860 > 0))) {
                    temp_v1_4 = *D_800A3850;
                    D_800A3850 += 1;
                    var_s2_4 |= temp_v1_4 << var_s1_4;
                } else {
                    var_s2_4 |= (func_80054644() & 0xFF) << var_s1_4;
                }
                var_s1_4 += 8;
                goto loop_31;
            }
            (&D_800A3350)[*((var_s0 * 4) + D_80097058)] = var_s2_4 & 7;
            var_s2_4 = var_s2_4 >> 3;
            var_s0 += 1;
            var_s1_4 -= 3;
        } while (var_s0 < temp_s5);
    }
    if (var_s0 < 0x13U) {
        var_v1 = (var_s0 * 4) + D_80097058;
        do {
            var_s0 += 1;
            (&D_800A3350)[*(s32 *)var_v1] = 0;
            var_v1 += 4;
        } while (var_s0 < 0x13U);
    }
    sp24 = 7;
    var_s3 = func_80052C50(&D_800A3350, 0x13U, 0x13, NULL, NULL, &sp20, &sp24);
    if (var_s3 == 0) {
        var_s5 = 0;
        temp_fp = sp34 + sp38;
        sp30 = (s32) *((sp24 * 2) + D_8009719C);
        if (var_s3 < temp_fp) {
            var_s4 = &D_800A3350;
loop_39:
            if (var_s1_4 < sp24) {
                do {
                    if ((D_800A3864 != 0) || (D_800A3860 -= 1, (D_800A3860 > 0))) {
                        temp_v1_5 = *D_800A3850;
                        D_800A3850 += 1;
                        var_s2_4 |= temp_v1_5 << var_s1_4;
                    } else {
                        var_s2_4 |= (func_80054644() & 0xFF) << var_s1_4;
                    }
                    var_s1_4 += 8;
                } while (var_s1_4 < sp24);
            }
            temp_v1_6 = sp20 + ((var_s2_4 & sp30) * 8);
            sp28 = temp_v1_6;
            temp_s0 = M2C_FIELD(temp_v1_6, u8 *, 1);
            var_s2_4 = var_s2_4 >> temp_s0;
            var_s1_4 -= temp_s0;
            temp_s0_2 = M2C_FIELD(temp_v1_6, u16 *, 4);
            if (temp_s0_2 < 0x10U) {
                var_s5 = temp_s0_2;
                *(s32 *)var_s4 = (s32) temp_s0_2;
                var_s4 += 4;
                var_s3 += 1;
                goto block_86;
            }
            if (temp_s0_2 == 0x10) {
                var_v1_2 = var_s2_4 & 3;
                if (var_s1_4 < 2U) {
                    do {
                        if ((D_800A3864 != 0) || (D_800A3860 -= 1, (D_800A3860 > 0))) {
                            temp_v1_7 = *D_800A3850;
                            D_800A3850 += 1;
                            var_s2_4 |= temp_v1_7 << var_s1_4;
                        } else {
                            var_s2_4 |= (func_80054644() & 0xFF) << var_s1_4;
                        }
                        var_s1_4 += 8;
                    } while (var_s1_4 < 2U);
                    var_v1_2 = var_s2_4 & 3;
                }
                var_s2_4 = var_s2_4 >> 2;
                var_s1_4 -= 2;
                if (temp_fp >= (u32) (var_s3 + (var_v1_2 + 3))) {
                    var_s0_2 = var_v1_2 + 2;
                    if (var_s0_2 != -1) {
                        var_v0_2 = &(&D_800A3350)[var_s3];
                        do {
                            *(s32 *)var_v0_2 = (s32) var_s5;
                            var_v0_2 += 4;
                            var_s4 += 4;
                            var_s0_2 -= 1;
                            var_s3 += 1;
                        } while (var_s0_2 != -1);
                        var_v0_3 = var_s3 < temp_fp;
                    } else {
                        goto block_86;
                    }
                    goto block_87;
                }
                goto block_91;
            }
            var_v0_4 = var_s1_4 < 7U;
            if (temp_s0_2 == 0x11) {
                var_v1_3 = var_s2_4 & 7;
                if (var_s1_4 < 3U) {
                    do {
                        if ((D_800A3864 != 0) || (D_800A3860 -= 1, (D_800A3860 > 0))) {
                            temp_v1_8 = *D_800A3850;
                            D_800A3850 += 1;
                            var_s2_4 |= temp_v1_8 << var_s1_4;
                        } else {
                            var_s2_4 |= (func_80054644() & 0xFF) << var_s1_4;
                        }
                        var_s1_4 += 8;
                    } while (var_s1_4 < 3U);
                    var_v1_3 = var_s2_4 & 7;
                }
                var_s2_4 = var_s2_4 >> 3;
                var_s1_4 -= 3;
                if (temp_fp >= (u32) (var_s3 + (var_v1_3 + 3))) {
                    var_s0_3 = var_v1_3 + 2;
                    if (var_s0_3 != -1) {
                        var_v0_5 = &(&D_800A3350)[var_s3];
                        do {
                            *(s32 *)var_v0_5 = 0;
                            var_v0_5 += 4;
                            var_s4 += 4;
                            var_s0_3 -= 1;
                            var_s3 += 1;
                        } while (var_s0_3 != -1);
                        var_s5 = 0;
                    } else {
                        goto block_85;
                    }
                    goto block_86;
                }
                goto block_91;
            }
loop_80:
            if (var_v0_4 != 0) {
                if ((D_800A3864 != 0) || (D_800A3860 -= 1, (D_800A3860 > 0))) {
                    temp_v1_9 = *D_800A3850;
                    D_800A3850 += 1;
                    var_s2_4 |= temp_v1_9 << var_s1_4;
                } else {
                    var_s2_4 |= (func_80054644() & 0xFF) << var_s1_4;
                }
                var_s1_4 += 8;
                var_v0_4 = var_s1_4 < 7U;
                goto loop_80;
            }
            temp_v1_10 = var_s2_4 & 0x7F;
            temp_s0_3 = temp_v1_10 + 0xB;
            var_s2_4 = var_s2_4 >> 7;
            var_s1_4 -= 7;
            if (temp_fp >= (u32) (var_s3 + temp_s0_3)) {
                var_s0_4 = temp_v1_10 + 0xA;
                if (var_s0_4 != -1) {
                    var_v0_6 = &(&D_800A3350)[var_s3];
                    do {
                        *(s32 *)var_v0_6 = 0;
                        var_v0_6 += 4;
                        var_s4 += 4;
                        var_s0_4 -= 1;
                        var_s3 += 1;
                    } while (var_s0_4 != -1);
                }
block_85:
                var_s5 = 0;
block_86:
                var_v0_3 = var_s3 < temp_fp;
block_87:
                if (var_v0_3 == 0) {
                    goto block_88;
                }
                goto loop_39;
            }
block_91:
            return 8U;
        }
block_88:
        func_80053330(sp20);
        D_800A3880 = var_s2_4;
        D_800A3884 = var_s1_4;
        sp24 = 9;
        var_s3 = func_80052C50(&D_800A3350, sp34, 0x101, D_800970A4, D_800970E4, &sp20, &sp24);
        if (var_s3 != 0) {
            goto block_89;
        }
        sp2C = 6;
        func_80052C50(&(&D_800A3350)[sp34], sp38, 0, D_80097124, D_80097160, &sp28, &sp2C);
        temp_s3 = func_80053338(sp20, sp28, sp24, sp2C);
        func_80053330(sp20);
        func_80053330(sp28);
        var_v0 = temp_s3;
        D_800A3874 = D_800A3870;
        /* Duplicate return node #93. Try simplifying control flow for better match */
        return var_v0;
    }
block_89:
    var_v0 = var_s3;
    if (var_s3 == 2) {
        func_80053330(sp20);
        return var_s3;
    }
    return var_v0;
}

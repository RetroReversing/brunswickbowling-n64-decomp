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

extern int D_800A2E84;
extern int D_800A2E80;
extern unsigned int D_800A2974;
s32 func_80053330();
void *func_80054624();
extern s32 D_800A2920;
extern s32 D_800A29C0;
extern char D_800A2A00[];

s32 func_80052C50(s32 *arg0, u32 arg1, u32 arg2, s32 arg3, s32 arg4, u32 *arg5, u32 *arg6) {
    u8 sp10;
    u8 sp11;
    u32 sp14;                                       /* compiler-managed */
    s32 sp18;
    s32 sp20;
    s32 sp24;
    s32 *sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    u32 sp3C;
    s32 *sp4C;
    s32 sp50;
    u32 sp54;
    s32 *var_s6_4;
    s32 *temp_a0;
    s32 *temp_a2;
    s32 *temp_t1;
    s32 *temp_v1_2;
    char *var_a0_4;
    char *var_a1;
    char *var_a1_3;
    char *var_s6;
    char *var_s6_2;
    char *var_s6_3;
    char *var_t1;
    char *var_v1_2;
    char *var_v1_3;
    char *var_v1_4;
    char *var_v1_5;
    s32 temp_a0_4;
    s32 temp_s0;
    s32 temp_t0;
    s32 temp_t3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_9;
    s32 temp_v1;
    s32 temp_v1_3;
    s32 var_a0_2;
    s32 var_a3;
    s32 var_fp;
    s32 var_s0_2;
    s32 var_s3_4;
    s32 var_s7;
    s32 var_t0;
    s32 var_t3;
    s32 var_t3_2;
    s32 var_t4;
    s32 var_v1;
    u16 var_v0_2;
    char *var_a1_2;
    char *var_s4;
    u32 temp_a0_2;
    u32 temp_a0_3;
    u32 temp_v0_5;
    u32 temp_v0_7;
    u32 temp_v1_4;
    u32 temp_v1_5;
    u32 temp_v1_6;
    u32 var_a0;
    u32 var_a2;
    u32 var_s0;
    u32 var_s0_3;
    u32 var_s0_4;
    u32 var_s0_5;
    u32 var_s2;
    u32 var_s3;
    u32 var_s3_2;
    u32 var_s3_3;
    u32 var_s3_5;
    u32 var_s3_6;
    u32 var_s5;
    u32 var_t2;
    u32 var_t6;
    u32 var_v0;
    u8 var_a0_3;
    void *temp_v0_6;
    void *temp_v0_8;
    void *var_v1_6;

    var_t6 = 0x10;
    if (arg1 >= 0x101U) {
        var_t6 = M2C_FIELD(arg0, u32 *, 0x400);
    }
    var_s3 = 0;
    var_v1_2 = &D_800A2920;
    do {
        *(s32 *)var_v1_2 = 0;
        var_s3 += 1;
        var_v1_2 += 4;
    } while (var_s3 < 0x11U);
    var_s6 = arg0;
    var_s3_2 = arg1;
    do {
        temp_v1 = *(s32 *)var_s6;
        var_s6 += 4;
        temp_v1_2 = &(&D_800A2920)[temp_v1];
        var_s3_2 -= 1;
        *temp_v1_2 += 1;
    } while (var_s3_2 != 0);
    var_s0 = 1;
    if (D_800A2920 == arg1) {
        *arg5 = 0;
        *arg6 = 0;
        return 0;
    }
    var_v1_3 = D_800A2920 + 4;
loop_9:
    if (*(s32 *)var_v1_3 == 0) {
        var_s0 += 1;
        var_v1_3 += 4;
        if (var_s0 < 0x11U) {
            goto loop_9;
        }
    }
    var_t2 = var_s0;
    if ((u32) *arg6 < var_t2) {
        *arg6 = var_t2;
    }
    var_s3_3 = 0x10;
    var_v1_4 = D_800A2920 + 0x40;
loop_14:
    if (*(s32 *)var_v1_4 == 0) {
        var_s3_3 -= 1;
        var_v1_4 -= 4;
        if (var_s3_3 != 0) {
            goto loop_14;
        }
    }
    sp54 = var_s3_3;
    if (var_s3_3 < (u32) *arg6) {
        *arg6 = var_s3_3;
    }
    var_t3 = 1 << var_s0;
    if (var_s0 < sp54) {
        var_v1_5 = &(&D_800A2920)[var_s0];
loop_20:
        temp_t3 = var_t3 - *(s32 *)var_v1_5;
        var_v1_5 += 4;
        if (temp_t3 >= 0) {
            var_s0 += 1;
            var_t3 = temp_t3 * 2;
            if (var_s0 >= var_s3_3) {
                goto block_22;
            }
            goto loop_20;
        }
        goto block_23;
    }
block_22:
    temp_a2 = &(&D_800A2920)[var_s3_3];
    temp_v0 = *temp_a2;
    var_t3_2 = var_t3 - temp_v0;
    var_s0_2 = 0;
    if (var_t3_2 < 0) {
block_23:
        return 6;
    }
    var_s6_2 = D_800A2920 + 4;
    var_a1 = D_800A2E80 + 8;
    var_s3_4 = var_s3_3 - 1;
    *temp_a2 = temp_v0 + var_t3_2;
    D_800A2E84 = 0;
    if (var_s3_4 != 0) {
        do {
            temp_v0_2 = *(s32 *)var_s6_2;
            var_s6_2 += 4;
            var_s3_4 -= 1;
            var_s0_2 += temp_v0_2;
            *(s32 *)var_a1 = var_s0_2;
            var_a1 += 4;
        } while (var_s3_4 != 0);
    }
    var_s6_3 = arg0;
    var_s3_5 = 0;
    do {
        temp_s0 = *(s32 *)var_s6_3;
        var_s6_3 += 4;
        if (temp_s0 != 0) {
            temp_a0 = (temp_s0 * 4) + &D_800A2E80;
            temp_v1_3 = *temp_a0;
            *((temp_v1_3 * 4) + D_800A2A00) = var_s3_5;
            *temp_a0 = temp_v1_3 + 1;
        }
        var_s3_5 += 1;
    } while (var_s3_5 < arg1);
    var_s3_6 = 0;
    var_s6_4 = D_800A2A00;
    var_s7 = -1;
    var_s2 = 0;
    var_a2 = 0;
    var_s5 = 0;
    D_800A2E80 = 0;
    M2C_FIELD(&D_800A2974, s32 *, -4) = 0;
    D_800A29C0 = 0;
    if ((s32) sp54 >= (s32) var_t2) {
        var_t4 = 1;
        sp50 = var_t2 * 4;
        sp4C = &(&D_800A2920)[var_t2];
loop_32:
        var_a3 = *sp4C - 1;
        if (var_a3 != -1) {
            temp_v0_3 = var_s7 * 4;
            var_t1 = temp_v0_3 + &D_800A2974;
            var_fp = temp_v0_3;
            sp18 = sp50;
loop_34:
            temp_v0_4 = var_s7 * 4;
            if ((var_s2 + *(s32 *)var_t1) < (s32) var_t2) {
                var_t0 = temp_v0_4 - 4;
                var_s4 = temp_v0_4 + &D_800A2974;
loop_36:
                temp_t0 = var_t0 + 4;
                temp_v0_5 = *(u32 *)var_s4;
                var_s4 += 4;
                temp_t1 = var_t1 + 4;
                var_fp += 4;
                var_s2 += temp_v0_5;
                temp_v1_4 = *arg6;
                var_a0 = sp54 - var_s2;
                var_s7 += 1;
                if (temp_v1_4 < var_a0) {
                    var_a0 = temp_v1_4;
                }
                var_s0_3 = var_t2 - var_s2;
                temp_a0_2 = var_t4 << var_s0_3;
                if (((u32) (var_a3 + 1) < temp_a0_2) && (var_a0_2 = (temp_a0_2 - 1) - var_a3, var_s0_3 += 1, var_a1_2 = sp18 + &D_800A2920, ((var_s0_3 < var_a0) != 0))) {
loop_40:
                    var_a1_2 += 4;
                    temp_v1_5 = *(u32 *)var_a1_2;
                    temp_a0_3 = var_a0_2 * 2;
                    var_v0 = var_s2 + var_s0_3;
                    if (temp_v1_5 < temp_a0_3) {
                        var_s0_3 += 1;
                        var_a0_2 = temp_a0_3 - temp_v1_5;
                        if (var_s0_3 >= var_a0) {
                            goto block_42;
                        }
                        goto loop_40;
                    }
                } else {
block_42:
                    var_v0 = var_s2 + var_s0_3;
                }
                if ((var_t6 < var_v0) && (var_s2 < var_t6)) {
                    var_s0_3 = var_t6 - var_s2;
                }
                var_s5 = var_t4 << var_s0_3;
                M2C_FIELD(var_s4, u32 *, 0) = var_s0_3;
                sp20 = var_a3;
                sp24 = temp_t0;
                sp28 = temp_t1;
                sp2C = (s32) var_t2;
                sp30 = var_t3_2;
                sp34 = var_t4;
                sp3C = var_t6;
                temp_v0_6 = func_80054624((var_s5 + 1) * 8);
                var_t0 = temp_t0;
                var_t1 = temp_t1;
                temp_v0_7 = temp_v0_6 + 8;
                if (temp_v0_6 == NULL) {
                    if (var_s7 != 0) {
                        func_80053330(D_800A29C0);
                    }
                    return 1;
                }
                *arg5 = temp_v0_7;
                arg5 = temp_v0_6 + 4;
                M2C_FIELD(temp_v0_6, s32 *, 4) = 0;
                var_a2 = temp_v0_7;
                *(var_fp + &D_800A29C0) = var_a2;
                if (var_s7 != 0) {
                    *(var_fp + &D_800A2E80) = var_s3_6;
                    sp10 = var_s0_3 + 0x10;
                    sp14 = var_a2;
                    sp11 = M2C_FIELD(var_s4, u8 *, -1);
                    temp_v0_8 = (((u32) (var_s3_6 & ((var_t4 << var_s2) - 1)) >> (var_s2 - M2C_FIELD(var_s4, s32 *, -4))) * 8) + *(var_t0 + &D_800A29C0);
                    M2C_FIELD(temp_v0_8, s32 *, 0) = (s32) sp10;
                    M2C_FIELD(temp_v0_8, u32 *, 4) = sp14;
                }
                if ((var_s2 + M2C_FIELD(var_s4, u32 *, 0)) >= (s32) var_t2) {
                    goto block_53;
                }
                goto loop_36;
            }
block_53:
            sp11 = var_t2 - var_s2;
            if ((u32) var_s6_4 >= (u32) ((arg1 * 4) + D_800A2A00)) {
                sp10 = 0x63;
            } else {
                var_t6 = M2C_FIELD(var_s6_4, u32 *, 0);
                if (var_t6 < arg2) {
                    var_a0_3 = 0xF;
                    if (var_t6 < 0x100U) {
                        var_a0_3 = 0x10;
                    }
                    sp10 = var_a0_3;
                    var_v0_2 = M2C_FIELD(var_s6_4, u16 *, 2);
                    var_s6_4 += 4;
                } else {
                    sp10 = M2C_FIELD((((var_t6 - arg2) * 2) + arg4), u8 *, 1);
                    var_v0_2 = *(u16 *)(((M2C_FIELD(var_s6_4, u32 *, 0) - arg2) * 2) + arg3);
                    var_s6_4 += 4;
                }
                sp14 = var_v0_2;
            }
            temp_a0_4 = var_t4 << (var_t2 - var_s2);
            var_s0_4 = var_s3_6 >> var_s2;
            if (var_s0_4 < var_s5) {
                var_v1_6 = (var_s0_4 * 8) + var_a2;
                do {
                    M2C_FIELD(var_v1_6, s32 *, 0) = (s32) sp10;
                    M2C_FIELD(var_v1_6, s32 *, 4) = (s32) sp14;
                    var_v1_6 += temp_a0_4 * 8;
                    var_s0_4 += temp_a0_4;
                } while (var_s0_4 < var_s5);
            }
            var_s0_5 = var_t4 << (var_t2 - 1);
            var_s3_6 ^= var_s0_5;
            if (var_s3_6 & var_s0_5) {
                do {
                    var_s0_5 = var_s0_5 >> 1;
                    var_s3_6 ^= var_s0_5;
                } while (var_s3_6 & var_s0_5);
            }
            if ((var_s3_6 & ((var_t4 << var_s2) - 1)) != *(var_fp + &D_800A2E80)) {
                temp_v0_9 = var_s7 * 4;
                var_a1_3 = temp_v0_9 + &D_800A2E80;
                var_a0_4 = temp_v0_9 + &D_800A2974;
                do {
                    var_a1_3 -= 4;
                    var_a0_4 -= 4;
                    var_t1 -= 4;
                    var_fp -= 4;
                    var_s2 -= *(s32 *)var_a0_4;
                    var_s7 -= 1;
                } while ((var_s3_6 & ((1 << var_s2) - 1)) != *(s32 *)var_a1_3);
            }
            var_a3 -= 1;
            if (var_a3 == -1) {
                goto block_70;
            }
            goto loop_34;
        }
block_70:
        var_t2 += 1;
        sp50 += 4;
        sp4C += 4;
        if ((s32) sp54 < (s32) var_t2) {
            goto block_71;
        }
        goto loop_32;
    }
block_71:
    var_v1 = 0;
    *arg6 = D_800A2974;
    if (var_t3_2 != 0) {
        var_v1 = ((u32) (sp54 ^ 1) > 0U) * 2;
    }
    return var_v1;
}

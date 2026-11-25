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

M2C_UNK func_80057FA0(u8 *, s32, s32);              /* extern */
M2C_UNK func_80058170(s8);                          /* extern */
u8 *func_80058234(s16, s32);                        /* extern */
u8 *func_80058278(s32, s32, s32);                   /* extern */
M2C_UNK func_800583CC(s32, s32, s32, u8 *);         /* extern */
s32 func_8005852C(f64, s32, s32 *, s32 *);          /* extern */
s32 func_80058844(f64, s32, s32 *, s32 *);          /* extern */
u8 *func_800588F0(f64, s32, u8 *);                  /* extern */
M2C_UNK func_8005A970(u8 *, s32);                   /* extern */
s32 func_8005AAD0(u8 *);                            /* extern */
extern u8 D_80079FD0;
extern M2C_UNK D_80097450;
extern M2C_UNK D_80097464;
extern u8 D_80097476;
extern M2C_UNK D_80097510;
extern s32 D_800A58E0;
extern u8 *D_800A58E8;
extern M2C_UNK *D_800A58F0;
extern s8 D_800A58F4;
extern u8 D_800A5920;
extern u8 D_800A5921;
extern M2C_UNK D_800A5A20;

s32 func_80058AF0(u8 *arg1, void *arg2) {
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 sp2C;
    s32 sp34;
    s32 sp3C;
    s32 sp44;
    f64 var_fa0;
    f64 var_fs0;
    s32 temp_a1;
    s32 temp_t0;
    s32 temp_t0_2;
    s32 temp_v0_10;
    s32 temp_v0_11;
    s32 temp_v0_12;
    s32 temp_v0_13;
    s32 temp_v0_14;
    s32 temp_v0_3;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v0_8;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a1;
    s32 var_a2;
    s32 var_fp;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s4;
    s32 var_s5;
    s32 var_s7;
    s32 var_s7_2;
    s32 var_t1;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s8 temp_a0;
    s8 temp_v0;
    s8 temp_v0_2;
    s8 temp_v1;
    u8 *temp_s0;
    u8 *temp_v0_4;
    u8 *temp_v0_9;
    u8 *temp_v1_2;
    u8 *temp_v1_3;
    u8 *temp_v1_4;
    u8 *temp_v1_5;
    u8 *temp_v1_6;
    u8 *temp_v1_7;
    u8 *var_a3;
    u8 *var_s0_4;
    u8 *var_s0_5;
    u8 *var_s0_6;
    u8 *var_s0_7;
    u8 *var_s2;
    u8 *var_s6;
    u8 *var_v0_2;
    u8 var_s0;
    void *var_s3;

    var_s6 = arg1;
    var_s3 = arg2;
    sp44 = 0;
loop_1:
    var_s0 = *var_s6;
    temp_v1 = (s8) *var_s6;
    var_s6 += 1;
    if (temp_v1 == 0x25) {
        var_s4 = 0;
        D_800A58F4 = 0;
loop_12:
        var_s0 = *var_s6;
        temp_v0 = var_s0 - 0x20;
        var_s6 += 1;
        switch (temp_v0) {                          /* switch 1 */
        case 13:                                    /* switch 1 */
            var_s4 |= 1;
            goto loop_12;
        case 11:                                    /* switch 1 */
            var_s4 |= 2;
            goto loop_12;
        case 16:                                    /* switch 1 */
            var_s4 |= 4;
            goto loop_12;
        case 0:                                     /* switch 1 */
            var_s4 |= 8;
            goto loop_12;
        case 3:                                     /* switch 1 */
            D_800A58F4 = 1;
            goto loop_12;
        }
        var_s7 = 0;
        if ((s8) var_s0 == 0x2A) {
            var_s3 = ((s32)(var_s3 + 3) & (s32)~3) + 4;
            var_s7 = M2C_FIELD(var_s3, s32 *, -4);
            if (var_s7 < 0) {
                var_s4 |= 1;
                var_s7 = -var_s7;
            }
            var_s0 = *var_s6;
            var_s6 += 1;
        } else {
loop_24:
            if (*(&D_80097510 + (var_s0 & 0xFF)) & 8) {
                var_s7 = (var_s7 * 0xA) - 0x30 + (s8) var_s0;
                var_s0 = *var_s6;
                var_s6 += 1;
                goto loop_24;
            }
        }
        var_s1 = 0;
        var_s5 = 6;
        if ((s8) var_s0 == 0x2E) {
            var_s0 = *var_s6;
            var_s6 += 1;
            if ((s8) *var_s6 == 0x2A) {
                var_s3 = ((s32) (var_s3 + 3) & ~3) + 4;
                var_s1 = M2C_FIELD(var_s3, s32 *, -4);
                var_s5 = var_s1;
            } else {
loop_29:
                if (*(&D_80097510 + (var_s0 & 0xFF)) & 8) {
                    var_s1 = (var_s1 * 0xA) - 0x30 + (s8) var_s0;
                    var_s0 = *var_s6;
                    var_s6 += 1;
                    goto loop_29;
                }
                var_s5 = var_s1;
            }
        }
        sp3C = 0;
        sp2C = 0;
        D_800A58F0 = &D_80097450;
        sp34 = 0xA;
loop_32:
        temp_v0_2 = var_s0 - 0x45;
        switch (temp_v0_2) {                        /* switch 2 */
        case 0x1F:                                  /* switch 2 */
        case 0x24:                                  /* switch 2 */
            sp2C = 1;
        case 0x30:                                  /* switch 2 */
block_112:
            if (var_s1 != 0) {
                var_s4 &= ~4;
            }
            if (var_s4 & 0x20) {
                var_s3 = ((s32) (var_s3 + 7) & ~7) + 8;
                var_a0 = M2C_FIELD(var_s3, s32 *, -8);
                var_a1 = M2C_FIELD(var_s3, s32 *, -4);
                if ((sp2C != 0) && (var_a0 < 0)) {
                    var_a1 = -var_a1;
                    var_a0 = -var_a0 - (var_a1 != 0);
                    var_s4 |= 0x100;
                }
                var_s2 = func_80058278(var_a0, var_a1, sp34);
            } else {
                var_s3 = ((s32) (var_s3 + 3) & ~3) + 4;
                var_a0_2 = M2C_FIELD(var_s3, s32 *, -4);
                if (var_s4 & 0x40) {
                    if (sp2C != 0) {
                        var_a0_2 = (s32) (s16) var_a0_2;
                    } else {
                        var_a0_2 &= 0xFFFF;
                    }
                }
                if ((sp2C != 0) && (var_a0_2 < 0)) {
                    var_a0_2 = -var_a0_2;
                    var_s4 |= 0x100;
                }
                var_s2 = func_80058234((s16) var_a0_2, sp34);
            }
            var_s0_2 = (s32)&D_800A5A20 - (s32)var_s2;
block_129:
            var_fp = 0;
            if (((D_800A58F4 != 0) & (sp34 != 0xA)) && (sp2C == 0) && ((s8) *var_s2 != 0x30)) {
                var_fp = 1;
                if (sp34 == 0x10) {
                    var_fp = 2;
                }
            }
            if ((var_s4 & 5) == 4) {
                var_s1 = var_s7;
            }
            if (var_s1 != 0) {
                if (var_s4 & 0x10A) {
                    var_s1 -= 1;
                    if (sp3C != 0) {
                        var_s7 -= 1;
                        sp44 += 1;
                        if (var_s4 & 0x100) {
                            temp_v0_3 = D_800A58E0 - 1;
                            D_800A58E0 = temp_v0_3;
                            if (temp_v0_3 == 0) {
                                func_80058170(0x2D);
                            } else {
                                temp_v0_4 = D_800A58E8;
                                D_800A58E8 = temp_v0_4 + 1;
                                *temp_v0_4 = 0x2D;
                            }
                        } else {
                            temp_v0_5 = D_800A58E0 - 1;
                            D_800A58E0 = temp_v0_5;
                            if (temp_v0_5 == 0) {
                                func_80058170((-((var_s4 & 2) != 0) & 0x2B) | 0x20);
                            } else {
                                temp_v1_2 = D_800A58E8;
                                D_800A58E8 = temp_v1_2 + 1;
                                if (var_s4 & 2) {
                                    *temp_v1_2 = 0x2B;
                                } else {
                                    *temp_v1_2 = 0x20;
                                }
                            }
                        }
                        var_s4 &= ~0x10A;
                    }
                }
                var_s1_2 = var_s1 - var_fp;
                if (var_s0_2 < var_s1_2) {
                    do {
                        if (sp3C == 0) {
                            var_s2 -= 1;
                            *var_s2 = 0x30;
                            var_s0_2 += 1;
                        } else {
                            temp_v0_6 = D_800A58E0 - 1;
                            D_800A58E0 = temp_v0_6;
                            if (temp_v0_6 == 0) {
                                func_80058170(0x30);
                                var_s7 -= 1;
                            } else {
                                var_s7 -= 1;
                                temp_v1_3 = D_800A58E8;
                                D_800A58E8 = temp_v1_3 + 1;
                                *temp_v1_3 = 0x30;
                            }
                            sp44 += 1;
                            var_s1_2 -= 1;
                        }
                    } while (var_s0_2 < var_s1_2);
                }
            }
            if (var_fp != 0) {
                var_s2 -= 1;
                if (var_fp == 2) {
                    *var_s2 = M2C_FIELD(D_800A58F0, u8 *, 0x10);
                    var_s2 -= 1;
                }
                *var_s2 = 0x30;
                var_s0_2 += var_fp;
            }
            if (var_s4 & 0x10A) {
                var_s0_2 += 1;
                var_s2 -= 1;
                if (var_s4 & 0x100) {
                    *var_s2 = 0x2D;
                } else if (var_s4 & 2) {
                    *var_s2 = 0x2B;
                } else {
                    *var_s2 = 0x20;
                }
            }
block_173:
            var_v0 = var_s4 & 1;
block_174:
            if ((var_v0 == 0) && (var_s0_2 < var_s7)) {
                do {
                    temp_v0_7 = D_800A58E0 - 1;
                    D_800A58E0 = temp_v0_7;
                    if (temp_v0_7 == 0) {
                        func_80058170(0x20);
                        var_s7 -= 1;
                    } else {
                        temp_v1_4 = D_800A58E8;
                        D_800A58E8 = temp_v1_4 + 1;
                        *temp_v1_4 = 0x20;
                        var_s7 -= 1;
                    }
                    sp44 += 1;
                } while (var_s0_2 < var_s7);
            }
            var_s7_2 = var_s7 - var_s0_2;
            var_s0_3 = var_s0_2 - 1;
            sp44 += var_s0_2;
            if (var_s0_3 != -1) {
                do {
                    temp_v0_8 = D_800A58E0 - 1;
                    D_800A58E0 = temp_v0_8;
                    if (temp_v0_8 == 0) {
                        temp_a0 = (s8) *var_s2;
                        var_s2 += 1;
                        func_80058170(temp_a0);
                        var_s0_3 -= 1;
                    } else {
                        var_s0_3 -= 1;
                        temp_v0_9 = D_800A58E8;
                        D_800A58E8 = temp_v0_9 + 1;
                        *temp_v0_9 = *var_s2;
                        var_s2 += 1;
                    }
                } while (var_s0_3 != -1);
            }
            if (var_s7_2 > 0) {
                do {
                    temp_v0_10 = D_800A58E0 - 1;
                    D_800A58E0 = temp_v0_10;
                    if (temp_v0_10 == 0) {
                        func_80058170(0x20);
                        var_s7_2 -= 1;
                    } else {
                        temp_v1_5 = D_800A58E8;
                        D_800A58E8 = temp_v1_5 + 1;
                        *temp_v1_5 = 0x20;
                        var_s7_2 -= 1;
                    }
                    sp44 += 1;
                } while (var_s7_2 > 0);
            }
            break;
        case 0x2A:                                  /* switch 2 */
            var_t1 = 8;
block_38:
            sp34 = var_t1;
            var_s4 &= ~0xA;
            goto block_112;
        case 0x13:                                  /* switch 2 */
            D_800A58F0 = &D_80097464;
            /* fallthrough */
        case 0x33:                                  /* switch 2 */
            var_t1 = 0x10;
            goto block_38;
        case 0x1E:                                  /* switch 2 */
            var_s2 = &D_800A5920;
            var_s3 = ((s32) (var_s3 + 3) & ~3) + 4;
            D_800A5920 = M2C_FIELD(var_s3, u8 *, -1);
            var_s0_2 = 1;
            goto block_173;
        case 0x2E:                                  /* switch 2 */
            var_s3 = ((s32) (var_s3 + 3) & ~3) + 4;
            var_s2 = M2C_FIELD(var_s3, u8 **, -4);
            if (var_s2 == NULL) {
                var_s2 = &D_80079FD0;
            }
            var_s0_2 = func_8005AAD0(var_s2);
            if ((var_s1 != 0) & (var_s1 < var_s0_2)) {
                var_s0_2 = var_s1;
                goto block_173;
            }
            var_v0 = var_s4 & 1;
            goto block_174;
        case 0x21:                                  /* switch 2 */
            var_s3 = ((s32) (var_s3 + 7) & ~7) + 8;
            var_fs0 = M2C_FIELD(var_s3, f64 *, -8);
            var_s1_3 = func_80058844(var_fs0, var_s5, &sp18, &sp1C);
            if (sp1C != 0) {
                var_s4 |= 0x100;
            }
            var_s2 = &D_800A5921;
            if (sp18 == 0x7FFFFFFF) {
                func_8005A970(&D_800A5921, var_s1_3);
            } else if (sp18 <= 0) {
                M2C_FIELD(&D_800A5921, u8 *, 0) = 0x30;
                M2C_FIELD(&D_800A5921, s8 *, 1) = 0x2E;
                var_s0_4 = &D_800A5921 + 1 + 1;
                var_v1 = 0;
                if (sp18 != 0) {
loop_53:
                    *var_s0_4 = 0x30;
                    var_s0_4 += 1;
                    temp_v0_11 = sp18 + 1;
                    var_v1 += 1;
                    sp18 = temp_v0_11;
                    if (var_v1 != var_s5) {
                        if (temp_v0_11 == 0) {
                            goto block_55;
                        }
                        goto loop_53;
                    }
                    goto block_88;
                }
block_55:
                if (var_v1 == var_s5) {
                    *var_s0_4 = 0;
                } else {
                    do {
                        *(s32 *)var_s0_4 = *(s32 *)var_s1_3;
                        var_s1_3 += 1;
                        var_v1 += 1;
                        var_s0_4 += 1;
                    } while (var_v1 != var_s5);
                    *var_s0_4 = 0;
                }
            } else if ((var_s5 + sp18) < 0x28) {
                func_80057FA0(&D_800A5921, var_s1_3, sp18);
                var_s0_5 = &(&D_800A5921)[sp18];
                if (var_s5 != 0) {
                    *var_s0_5 = 0x2E;
                    temp_s0 = var_s0_5 + 1;
                    func_80057FA0(temp_s0, var_s1_3 + sp18, var_s5);
                    var_v0_2 = &temp_s0[var_s5];
                } else {
                    if (D_800A58F4 != 0) {
                        *var_s0_5 = 0x2E;
                        var_s0_5 += 1;
                    }
                    var_v0_2 = &var_s0_5[var_s5];
                }
                *var_v0_2 = 0;
            } else {
                var_a2 = var_s1_3;
                if ((var_s5 + sp18) < 0xFF) {
                    var_a3 = &D_800A5921;
                    if ((var_a2 | (s32) &D_800A5921) & 3) {
                        temp_t0 = var_a2 + 0x20;
                        do {
                            M2C_FIELD(var_a3, u8 *, 0) = M2C_UNALIGNED32(M2C_FIELD(var_a2, M2C_UNK *, 0));
                            M2C_FIELD(var_a3, M2C_UNK *, 4) = M2C_UNALIGNED32(M2C_FIELD(var_a2, M2C_UNK *, 4));
                            M2C_FIELD(var_a3, M2C_UNK *, 8) = M2C_UNALIGNED32(M2C_FIELD(var_a2, M2C_UNK *, 8));
                            M2C_FIELD(var_a3, M2C_UNK *, 0xC) = M2C_UNALIGNED32(M2C_FIELD(var_a2, M2C_UNK *, 0xC));
                            var_a2 += 0x10;
                            var_a3 += 0x10;
                        } while (var_a2 != temp_t0);
                    } else {
                        temp_t0_2 = var_a2 + 0x20;
                        do {
                            M2C_FIELD(var_a3, s32 *, 0) = (s32) M2C_FIELD(var_a2, s32 *, 0);
                            M2C_FIELD(var_a3, s32 *, 4) = (s32) M2C_FIELD(var_a2, s32 *, 4);
                            M2C_FIELD(var_a3, s32 *, 8) = (s32) M2C_FIELD(var_a2, s32 *, 8);
                            M2C_FIELD(var_a3, s32 *, 0xC) = (s32) M2C_FIELD(var_a2, s32 *, 0xC);
                            var_a2 += 0x10;
                            var_a3 += 0x10;
                        } while (var_a2 != temp_t0_2);
                    }
                    M2C_FIELD(var_a3, u8 *, 0) = M2C_UNALIGNED32(M2C_FIELD(var_a2, M2C_UNK *, 0));
                    M2C_FIELD(var_a3, M2C_UNK *, 4) = M2C_UNALIGNED32(M2C_FIELD(var_a2, M2C_UNK *, 4));
                    if (sp18 >= 0x29) {
                        var_s0_6 = &D_800A5921 + 0x28;
                        var_v1_2 = sp18 - 0x28;
                        do {
                            *var_s0_6 = 0x30;
                            var_v1_2 -= 1;
                            var_s0_6 += 1;
                        } while (var_v1_2 != 0);
                    } else {
                        var_s0_6 = &(&D_800A5921)[sp18];
                    }
                    if (var_s5 != 0) {
                        *var_s0_6 = 0x2E;
                        var_s0_7 = var_s0_6 + 1;
                        var_v1_3 = var_s5;
                        do {
                            *var_s0_7 = 0x30;
                            var_v1_3 -= 1;
                            var_s0_7 += 1;
                        } while (var_v1_3 != 0);
                        *var_s0_7 = 0;
                    } else if (D_800A58F4 == 0) {
                        *var_s0_6 = 0;
                    } else {
                        *var_s0_6 = 0x2E;
                        var_s0_4 = var_s0_6 + 1;
block_88:
                        *var_s0_4 = 0;
                    }
                } else {
                    var_s5 = 0x14;
                    var_s0 = 0x65;
block_91:
                    temp_a1 = func_8005852C(var_fs0, var_s5, &sp20, &sp24);
                    var_s2 = &D_800A5921;
                    if (sp24 != 0) {
                        var_s4 |= 0x100;
                    }
                    if (sp20 == 0x7FFFFFFF) {
                        func_8005A970(&D_800A5921, temp_a1);
                    } else {
                        D_80097476 = var_s0;
                        func_800583CC(temp_a1, var_s5, sp20 - 1, &D_800A5921);
block_99:
                        D_80097476 = 0x65;
                    }
                }
            }
            var_s0_2 = func_8005AAD0(var_s2);
            var_s1 = 0;
            sp3C = 1;
            goto block_129;
        case 0x0:                                   /* switch 2 */
        case 0x20:                                  /* switch 2 */
            var_s3 = ((s32) (var_s3 + 7) & ~7) + 8;
            var_fs0 = M2C_FIELD(var_s3, f64 *, -8);
            goto block_91;
        case 0x2:                                   /* switch 2 */
        case 0x22:                                  /* switch 2 */
            var_s3 = ((s32) (var_s3 + 7) & ~7) + 8;
            var_fa0 = M2C_FIELD(var_s3, f64 *, -8);
            if (var_fa0 < 0.0) {
                var_fa0 = -var_fa0;
                var_s4 |= 0x100;
            }
            D_80097476 = var_s0 - 2;
            var_s2 = func_800588F0(var_fa0, var_s5, &D_800A5921);
            goto block_99;
        case 0x29:                                  /* switch 2 */
            var_s3 = ((s32) (var_s3 + 3) & ~3) + 4;
            *M2C_FIELD(var_s3, s32 **, -4) = sp44;
            break;
        case 0x2B:                                  /* switch 2 */
            var_s4 = 0;
            var_s1 = 8;
            D_800A58F0 = &D_80097464;
            sp34 = 0x10;
            goto block_112;
        case 0x23:                                  /* switch 2 */
            var_s4 |= 0x40;
block_107:
            var_s0 = *var_s6;
            var_s6 += 1;
            goto loop_32;
        case 0x27:                                  /* switch 2 */
            var_s0 = *var_s6;
            var_s6 += 1;
            if ((s8) *var_s6 == 0x6C) {
                var_s4 |= 0x20;
                goto block_107;
            }
            goto loop_32;
        case 0x7:                                   /* switch 2 */
            var_s4 |= 0x80;
            goto block_107;
        default:                                    /* switch 2 */
            temp_v0_12 = D_800A58E0 - 1;
            D_800A58E0 = temp_v0_12;
            var_a0_3 = var_s0 << 0x18;
            if (temp_v0_12 == 0) {
block_109:
                func_80058170((s8) (var_a0_3 >> 0x18));
            } else {
block_110:
                temp_v1_6 = D_800A58E8;
                D_800A58E8 = temp_v1_6 + 1;
                *temp_v1_6 = var_s0;
            }
block_111:
            sp44 += 1;
            break;
        }
        goto loop_1;
    }
    if (temp_v1 != 0) {
        if (*(&D_80097510 + (var_s0 & 0xFF)) & 0x80) {
            temp_v0_13 = D_800A58E0 - 1;
            D_800A58E0 = temp_v0_13;
            if (temp_v0_13 == 0) {
                func_80058170((s8) var_s0);
            } else {
                temp_v1_7 = D_800A58E8;
                D_800A58E8 = temp_v1_7 + 1;
                *temp_v1_7 = var_s0;
            }
            sp44 += 1;
            var_s0 = *var_s6;
            var_s6 += 1;
        }
        temp_v0_14 = D_800A58E0 - 1;
        D_800A58E0 = temp_v0_14;
        var_a0_3 = var_s0 << 0x18;
        if (temp_v0_14 != 0) {
            goto block_110;
        }
        goto block_109;
        goto block_111;
    }
    D_800A58F4 = 0;
    return sp44;
}

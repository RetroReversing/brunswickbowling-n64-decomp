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

extern int D_8008AB10;
extern int D_8008AB14;
extern int D_8008AB18;
extern int D_8008AB40;
s32 func_80024EE0();
s32 func_80024FDC();
s32 func_80025084();
u32 func_8002AB14();
s32 func_8002DC00();
s32 func_8005978C();
extern u8 D_80073FE4;
extern u8 D_80073FEC;
extern u8 D_80073FF4;
extern char D_80074004[];
extern char D_80074010[];
extern char D_80074018[];
extern char D_80074024[];
extern char D_80074028[];
extern char D_8007402C[];
extern char D_80074044[];
extern char D_80074054[];
extern char D_80074060[];
extern char D_80074074[];
extern char D_80074088[];
extern char D_800740A8[];
extern char D_800740AC[];
extern char D_800740B0[];
extern char D_800740C8[];
extern char D_800740DC[];
extern char D_800740F8[];
extern char D_80074114[];
extern char D_80074128[];
extern char D_80074144[];
extern char D_8007415C[];
extern char D_80074174[];
extern u8 D_80074188;
extern u8 D_80074190;
extern u8 D_8007419C;
extern char D_800741A8[];
extern char D_800741C0[];
extern char D_800741D0[];
extern char D_800741E4[];
extern char D_800741F8[];
extern char D_8007420C[];
extern char D_8007421C[];
extern char D_8007422C[];
extern char D_8007423C[];
extern char D_80074250[];
extern char D_8007426C[];
extern char D_80074284[];
extern char D_80074294[];
extern s32 D_8007E4E0;
extern char D_80081AD0[];
extern u32 D_80082E58;
extern u8 D_8008AAC8;
extern s32 D_8008AB28;
extern s32 D_8008AB2C;
extern char D_8008ABF0[];
extern s32 D_8008B3E8;

void func_80016F8C(void) {
    u8 sp18;
    s32 *temp_a0;
    s32 *var_a1;
    s32 *var_a1_2;
    s32 *var_a1_3;
    s32 *var_a1_4;
    s32 *var_a3_2;
    s32 *var_v0;
    s32 var_s3;
    s32 temp_v0_8;
    s32 var_v1;
    s32 var_v1_2;
    u16 temp_a2;
    u16 temp_a2_2;
    u16 temp_a2_3;
    u16 var_a3;
    u32 temp_v0_12;
    u32 temp_v0_2;
    u32 temp_v0_3;
    u8 *temp_a0_3;
    u8 *var_a0;
    u8 *var_a0_2;
    u8 *var_a2;
    u8 *var_a2_3;
    u8 *var_s1;
    u8 temp_a0_2;
    u8 temp_v0_4;
    u8 temp_v0_5;
    u8 temp_v0_6;
    u8 temp_v0_7;
    u8 var_a2_2;
    u8 var_a3_3;
    void *temp_s0;
    void *temp_v0;
    void *temp_v0_10;
    void *temp_v0_11;
    void *temp_v0_9;
    void *var_s0;
    void *var_s0_2;

    temp_a0 = *((D_8007E4E0 * 4) + D_80081AD0);
    temp_v0 = M2C_FIELD(temp_a0, void **, 0x50);
    var_s0 = NULL;
    if (temp_v0 != NULL) {
        var_s0 = temp_v0;
    }
    if (D_8008AB10 != 0) {
        var_v1 = 0;
        if ((D_8008AB14 != 0) || (D_8008AB18 != 0)) {
            var_v1 = 1;
        }
        if (var_v1 != 0) {
            if (D_8008AB40 == 1) {
                var_s1 = &D_80073FE4;
            } else if (func_8002DC00(&D_8008AB10, D_8007E4E0) != 0) {
                var_s1 = &D_80073FEC;
            } else {
                var_s1 = &D_80073FF4;
            }
            if (func_8002AB14(2) != 0) {
                var_a3 = 0;
                if (D_8008AB28 >= 2) {
                    var_a3 = 0x73;
                }
                func_8005978C(&sp18, D_80074004, D_8008AB28, var_a3);
            } else {
                func_80024EE0(D_8008AB2C, &sp18);
            }
            var_a0 = &D_8008AAC8;
            var_a1 = D_80074010;
            goto block_102;
        }
        temp_v0_2 = func_8002AB14(2, &D_8008AB10);
        switch (temp_v0_2) {                        /* switch 1; irregular */
        case 0:                                     /* switch 1 */
            func_80024EE0(D_8008AB2C, &sp18);
            var_a1_2 = D_80074018;
            var_a2 = &sp18;
            goto block_116;
        case 1:                                     /* switch 1 */
            if (D_8008AB28 >= 2) {
                var_a3_2 = D_80074024;
            } else {
                var_a3_2 = D_80074028;
            }
            func_8005978C(&D_8008AAC8, D_8007402C, D_8008AB28, (u16) var_a3_2);
            return;
        }
    } else {
        temp_a0_2 = M2C_FIELD(temp_a0, u8 *, 0x19);
        var_v1_2 = 0;
        if (temp_a0_2 < 7U) {
            var_v1_2 = M2C_FIELD(temp_a0, u8 *, 0x18) == 2;
        }
        if (var_v1_2 != 0) {
            temp_s0 = (temp_a0_2 * 0x28) + D_8008ABF0;
            D_8008AAC8 = 0;
            do {
                temp_v0_3 = func_8002AB14(0xD);
                switch (temp_v0_3) {                /* switch 2 */
                case 0:                             /* switch 2 */
                    func_8005978C(&D_8008AAC8, D_80074044, M2C_FIELD(temp_s0, s32 *, 0));
                    break;
                case 1:                             /* switch 2 */
                    func_8005978C(&D_8008AAC8 - 0x5538, D_80074054, M2C_FIELD(temp_s0, s32 *, 4));
                    break;
                case 2:                             /* switch 2 */
                    temp_a0_3 = &D_8008AAC8 - 0x5538;
                    if (M2C_FIELD(temp_s0, u8 *, 8) == 0) {
                        func_8005978C(temp_a0_3, D_80074060);
                    } else {
                        func_8005978C(temp_a0_3, D_80074074, (s32) M2C_FIELD(temp_s0, u8 *, 8));
                    }
                    break;
                case 3:                             /* switch 2 */
                    temp_v0_4 = M2C_FIELD(temp_s0, u8 *, 9);
                    var_a2_2 = temp_v0_4;
                    if (temp_v0_4 != 0) {
                        var_a3_3 = 0x800740A8;
                        if (var_a2_2 == 1) {
                            var_a3_3 = 0x800740AC;
                        }
                        var_a1_3 = D_80074088;
                        var_a0_2 = &D_8008AAC8;
block_67:
                        func_8005978C(var_a0_2, var_a1_3, (s32) var_a2_2, (u16) var_a3_3);
                    }
                    break;
                case 4:                             /* switch 2 */
                    temp_v0_5 = M2C_FIELD(temp_s0, u8 *, 0xA);
                    var_a2_2 = temp_v0_5;
                    if (temp_v0_5 != 0) {
                        var_a3_3 = 0x800740A8;
                        if (var_a2_2 == 1) {
                            var_a3_3 = 0x800740AC;
                        }
                        var_a1_3 = D_800740B0;
                        var_a0_2 = &D_8008AAC8;
                        goto block_67;
                    }
                    break;
                case 5:                             /* switch 2 */
                    if (M2C_FIELD(temp_s0, u8 *, 8) != 0) {
                        func_8005978C(&D_8008AAC8 - 0x5538, D_800740C8, M2C_FIELD(temp_s0, s32 *, 0xC));
                    }
                    break;
                case 6:                             /* switch 2 */
                    temp_v0_6 = M2C_FIELD(temp_s0, u8 *, 0x10);
                    var_a2_2 = temp_v0_6;
                    if (temp_v0_6 != 0) {
                        var_a3_3 = 0x800740A8;
                        if (var_a2_2 == 1) {
                            var_a3_3 = 0x800740AC;
                        }
                        var_a0_2 = &D_8008AAC8;
                        var_a1_3 = D_800740DC;
                        goto block_67;
                    }
                    break;
                case 7:                             /* switch 2 */
                    var_a0_2 = &D_8008AAC8 - 0x5538;
                    if (M2C_FIELD(temp_s0, u16 *, 0x14) != 0) {
                        var_a2_2 = M2C_FIELD(temp_s0, u8 *, 0x11);
                        var_a3_3 = M2C_FIELD(temp_s0, u8 *, 0x12);
                        var_a1_3 = D_800740F8;
                        goto block_67;
                    }
                    break;
                case 8:                             /* switch 2 */
                    if (M2C_FIELD(temp_s0, u16 *, 0x14) != 0) {
                        func_80024FDC(&sp18, M2C_FIELD(temp_s0, u16 *, 0x14), M2C_FIELD(temp_s0, u8 *, 0x11) + M2C_FIELD(temp_s0, u8 *, 0x12));
                        func_8005978C(&D_8008AAC8 - 0x5538, D_80074114, (s32) &sp18);
                    }
                    break;
                case 9:                             /* switch 2 */
                    temp_v0_7 = M2C_FIELD(temp_s0, u8 *, 0x1C);
                    var_a2_2 = temp_v0_7;
                    if (temp_v0_7 != 0) {
                        var_a3_3 = 0x800740A8;
                        if (var_a2_2 == 1) {
                            var_a3_3 = 0x800740AC;
                        }
                        var_a0_2 = &D_8008AAC8;
                        var_a1_3 = D_80074128;
                        goto block_67;
                    }
                    break;
                case 10:                            /* switch 2 */
                    var_a0_2 = &D_8008AAC8 - 0x5538;
                    if ((s32) M2C_FIELD(temp_s0, u8 *, 0x1C) & 0xFFFF00) {
                        var_a2_2 = M2C_FIELD(temp_s0, u8 *, 0x1D);
                        var_a3_3 = M2C_FIELD(temp_s0, u8 *, 0x1E);
                        var_a1_3 = D_80074144;
                        goto block_67;
                    }
                    break;
                case 11:                            /* switch 2 */
                    if (M2C_FIELD(temp_s0, u8 *, 8) != 0) {
                        func_8005978C(&D_8008AAC8 - 0x5538, D_8007415C, M2C_FIELD(temp_s0, s32 *, 0x20));
                    }
                    break;
                case 12:                            /* switch 2 */
                    temp_v0_8 = M2C_FIELD(temp_s0, s32 *, 0x24);
                    if (temp_v0_8 != 0) {
                        var_a3_3 = 0x800740A8;
                        if (temp_v0_8 == 1) {
                            var_a3_3 = 0x800740AC;
                        }
                        var_a0_2 = &D_8008AAC8;
                        var_a2_2 = (u8) M2C_FIELD(temp_s0, s32 *, 0x24);
                        var_a1_3 = D_80074174;
                        goto block_67;
                    }
                    break;
                }
            } while (D_8008AAC8 == 0);
            return;
        }
        if ((var_s0 == NULL) || (M2C_FIELD(var_s0, u16 *, 8) == 0)) {
            func_8005978C(&D_8008AAC8, D_800740AC);
            return;
        }
        var_s0_2 = NULL;
        if (func_8002AB14(3, temp_a0) == 2) {
            temp_v0_9 = M2C_FIELD(*((D_8007E4E0 * 4) + D_80081AD0), void **, 0x4C);
            if (temp_v0_9 != NULL) {
                var_s0_2 = temp_v0_9;
            }
            var_s3 = 9;
            var_s1 = &D_80074188;
        }
        if (var_s0_2 == NULL) {
            if (func_8002AB14(2) == 1) {
                temp_v0_10 = M2C_FIELD(*((D_8007E4E0 * 4) + D_80081AD0), void **, 0x48);
                if (temp_v0_10 != NULL) {
                    var_s0_2 = temp_v0_10;
                }
                if (var_s0_2 != NULL) {
                    var_s3 = 6;
                    if (M2C_FIELD(var_s0_2, u16 *, 0x18) == 0) {
                        var_s3 = 4;
                    }
                    var_s1 = &D_80074190;
                    goto block_85;
                }
                goto block_87;
            }
block_85:
            if (var_s0_2 == NULL) {
block_87:
                temp_v0_11 = M2C_FIELD(*((D_8007E4E0 * 4) + D_80081AD0), void **, 0x50);
                var_s0_2 = NULL;
                if (temp_v0_11 != NULL) {
                    var_s0_2 = temp_v0_11;
                }
                var_s3 = 9;
                var_s1 = &D_8007419C;
            }
        }
        do {
            temp_v0_12 = func_8002AB14(var_s3);
        } while (temp_v0_12 == D_80082E58);
        D_80082E58 = temp_v0_12;
        switch (temp_v0_12) {                       /* switch 3 */
        case 0:                                     /* switch 3 */
            if (M2C_FIELD(var_s0_2, u16 *, 8) == 0) {
                var_a1_2 = D_800741A8;
                var_a2 = var_s1;
block_116:
                func_8005978C(&D_8008AAC8, var_a1_2, (s32) var_a2);
                return;
            }
            func_80024FDC(&sp18, (u16) M2C_FIELD(var_s0_2, s32 *, 4), M2C_FIELD(var_s0_2, u16 *, 8));
            var_a0 = &D_8008AAC8;
            var_a1 = D_800741C0;
block_102:
            func_8005978C(var_a0, var_a1, (s32) var_s1, (u16) &sp18);
            return;
        case 1:                                     /* switch 3 */
            func_8005978C(&D_8008AAC8, D_800741D0, (s32) var_s1, M2C_FIELD(var_s0_2, u16 *, 0x10), (s32 *) M2C_FIELD(var_s0_2, u16 *, 0x12), (s32) M2C_FIELD(var_s0_2, u16 *, 0x14));
            return;
        case 2:                                     /* switch 3 */
            temp_a2 = M2C_FIELD(var_s0_2, u16 *, 0x1E);
            func_80024FDC(&sp18, temp_a2 * 0x64, temp_a2 + M2C_FIELD(var_s0_2, u16 *, 0x20));
            var_a1_4 = D_800741E4;
            var_a2_3 = &sp18;
block_114:
            func_8005978C(&D_8008AAC8, var_a1_4, (s32) var_a2_3, (u16) var_s1);
            return;
        case 3:                                     /* switch 3 */
            temp_a2_2 = M2C_FIELD(var_s0_2, u16 *, 0x22);
            func_80024FDC(&sp18, temp_a2_2 * 0x64, temp_a2_2 + M2C_FIELD(var_s0_2, u16 *, 0x24));
            var_a1_4 = D_800741F8;
            var_a2_3 = &sp18;
            goto block_114;
        case 4:                                     /* switch 3 */
            var_a2_3 = (u8 *) M2C_FIELD(var_s0_2, u16 *, 0x16);
            var_a1_4 = D_8007420C;
            goto block_114;
        case 5:                                     /* switch 3 */
            var_a2_3 = (u8 *) M2C_FIELD(var_s0_2, u16 *, 0x1A);
            var_a1_4 = D_8007421C;
            goto block_114;
        case 6:                                     /* switch 3 */
            func_80024EE0(M2C_FIELD(var_s0_2, s32 *, 0), &sp18);
            var_a0 = &D_8008AAC8;
            var_a1 = D_8007422C;
            goto block_102;
        case 7:                                     /* switch 3 */
            if (D_8008B3E8 >= 6) {
                func_80025084(&sp18, M2C_FIELD(var_s0_2, u16 *, 0xE) + 1);
                var_a1_4 = D_8007423C;
                var_a2_3 = &sp18;
                goto block_114;
            }
            if (M2C_FIELD(var_s0_2, u16 *, 0xE) == 0) {
                func_8005978C(&D_8008AAC8, D_80074250);
                return;
            }
            temp_a2_3 = M2C_FIELD(var_s0_2, u16 *, 0xE);
            if (temp_a2_3 < 2U) {
                var_v0 = D_800740AC;
            } else {
                var_v0 = D_800740A8;
            }
            func_8005978C(&D_8008AAC8, D_8007426C, (s32) temp_a2_3, (u16) var_s1, var_v0);
            return;
        case 8:                                     /* switch 3 */
            var_a1_4 = D_80074284;
            var_a2_3 = (u8 *) M2C_FIELD(var_s0_2, u16 *, 0xC);
            goto block_114;
        default:                                    /* switch 3 */
            var_a1_2 = D_80074294;
            var_a2 = func_8002AB14(0x32) + 0xA;
            goto block_116;
        }
    }
}

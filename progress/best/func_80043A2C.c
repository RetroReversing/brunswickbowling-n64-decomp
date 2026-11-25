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

M2C_UNK func_8004217C();                 /* extern */
M2C_UNK func_800421A8(void *, s32);                 /* extern */
s32 func_80043620(void *, M2C_UNK *);               /* extern */
s32 func_800437E0(void *, M2C_UNK *);               /* extern */
M2C_UNK func_80047370(M2C_UNK *);                   /* extern */
M2C_UNK func_80048478(M2C_UNK);                     /* extern */
M2C_UNK func_80048484(M2C_UNK);                     /* extern */
extern f64 D_800798A0;
extern f64 D_800798A8;
extern f64 D_800798B0;
extern f64 D_800798B8;
extern void *D_80082040;
extern s32 D_80082688;
extern s32 D_80082D60;
extern s32 D_8008B3DC;
extern s32 D_8008ED34;
extern s32 D_8008ED38;
extern s32 D_8008ED3C;
extern s32 D_8008ED44;
extern s32 D_8008ED48;
extern s32 D_8008ED4C;
extern s32 D_8008ED50;
extern s32 D_8008ED54;
extern s32 D_8008ED58;
extern s32 D_8008ED5C;
extern s32 D_8008ED60;
extern s32 D_8008ED64;
extern s32 D_8008ED68;
extern s32 D_8008ED6C;
extern s32 D_8008ED70;
extern s32 D_8008ED74;
extern s32 D_8008ED78;
extern s32 D_8008F2C4;
extern M2C_UNK D_800904A4;
extern M2C_UNK D_80090C9C;
extern M2C_UNK D_80091494;
extern M2C_UNK D_80091C8C;
extern M2C_UNK D_80092484;
extern void *D_80092534;
extern M2C_UNK D_80092550;
extern M2C_UNK D_8009261C;
extern M2C_UNK D_800926E8;
extern M2C_UNK D_80093078;
extern M2C_UNK D_80093144;
extern M2C_UNK D_800933A8;
extern M2C_UNK D_80093540;
extern M2C_UNK D_80093870;
extern M2C_UNK D_80093C6C;
extern M2C_UNK D_80094068;
extern M2C_UNK D_800942CC;
extern M2C_UNK D_80094530;
extern M2C_UNK D_800946C8;
extern M2C_UNK D_80094860;
extern M2C_UNK D_80094C5C;
extern M2C_UNK D_80094D28;
extern M2C_UNK D_80095058;
extern M2C_UNK D_80095124;
extern M2C_UNK D_800951F0;
extern M2C_UNK D_800952BC;
extern M2C_UNK D_80095388;
extern M2C_UNK D_80095454;
extern M2C_UNK D_800955EC;
extern M2C_UNK D_80095784;
extern M2C_UNK D_8009591C;
extern s32 D_80095B04;
extern s32 D_80095B08;
extern s32 D_80095B0C;
extern s32 D_80095B20;

void func_80043A2C(void *arg0) {
    s32 sp10;
    M2C_UNK *var_a0;
    M2C_UNK *var_a0_2;
    M2C_UNK *var_a0_3;
    M2C_UNK *var_s0_28;
    M2C_UNK *var_s1_26;
    M2C_UNK *var_s2;
    M2C_UNK *var_s2_2;
    M2C_UNK *var_s2_3;
    M2C_UNK *var_s2_4;
    M2C_UNK *var_s2_5;
    f64 temp_fv1;
    s32 *var_s0_26;
    s32 *var_s1_13;
    s32 *var_s1_16;
    s32 *var_s1_25;
    s32 *var_s1_28;
    s32 *var_s1_3;
    s32 *var_s2_6;
    s32 *var_s3_2;
    s32 temp_s5;
    s32 var_a1;
    s32 var_s0;
    s32 var_s0_10;
    s32 var_s0_11;
    s32 var_s0_12;
    s32 var_s0_13;
    s32 var_s0_14;
    s32 var_s0_15;
    s32 var_s0_16;
    s32 var_s0_17;
    s32 var_s0_18;
    s32 var_s0_19;
    s32 var_s0_20;
    s32 var_s0_21;
    s32 var_s0_22;
    s32 var_s0_23;
    s32 var_s0_24;
    s32 var_s0_25;
    s32 var_s0_27;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_4;
    s32 var_s0_5;
    s32 var_s0_6;
    s32 var_s0_7;
    s32 var_s0_8;
    s32 var_s0_9;
    s32 var_s3;
    s32 var_s3_3;
    s32 var_s4;
    s32 var_v0;

    if (D_80082D60 == 0) {
        D_80095B20 = 1;
        func_8004217C(NULL);
        var_s3 = 0;
        if (D_8008B3DC < 0xF) {
            var_s3 = D_8008B3DC >= 5;
        }
        temp_s5 = D_8008B3DC == 0xE;
        if (!(((u8) M2C_FIELD(D_80082040, u8 *, 0x38) >> 6) & 1)) {
            if (var_s3 != 0) {
                func_80048478(0x20);
                if (D_8008ED5C != 0) {
                    var_s0 = 0;
                    if (D_80095B04 > 0) {
                        do {
                            func_80047370(((M2C_UNK *)((u8 *)&D_80093078 + var_s0 * 204)));
                            var_s0 += 1;
                        } while (var_s0 < D_80095B04);
                    }
                }
                if (D_8008ED60 != 0) {
                    var_s0_2 = 0;
                    if (D_80095B0C > 0) {
                        do {
                            func_80047370(((M2C_UNK *)((u8 *)&D_80095784 + var_s0_2 * 204)));
                            var_s0_2 += 1;
                        } while (var_s0_2 < D_80095B0C);
                    }
                }
                func_80048478(0x40);
                var_s0_3 = 9;
                var_s2 = &D_80091C8C + 0x72C;
                var_s1_3 = &D_8008F2C4 + 0x24;
                do {
                    if (temp_s5 != 0) {
                        func_8004217C(arg0, *var_s1_3);
                    }
                    func_80047370(var_s2);
                    var_s2 -= 0xCC;
                    var_s0_3 -= 1;
                    var_s1_3 -= 4;
                } while (var_s0_3 >= 0);
                if (temp_s5 != 0) {
                    func_8004217C(arg0, 0);
                }
                var_s0_4 = 0;
                if ((D_80095B04 - 1) > 0) {
                    do {
                        func_80047370(((M2C_UNK *)((u8 *)&D_800942CC + var_s0_4 * 204)));
                        var_s0_4 += 1;
                    } while (var_s0_4 < (D_80095B04 - 1));
                }
                func_80047370(&D_80095454);
                func_80047370(&D_80092550);
                func_80048478(0x30);
                var_s0_5 = 0;
                if (D_80095B04 > 0) {
                    do {
                        func_80047370(((M2C_UNK *)((u8 *)&D_80093540 + var_s0_5 * 204)));
                        var_s0_5 += 1;
                    } while (var_s0_5 < D_80095B04);
                }
                func_80048478(0x10);
                if (D_8008ED6C != 0) {
                    var_s0_6 = 0;
                    if (D_80095B04 >= 0) {
                        do {
                            func_80047370(((M2C_UNK *)((u8 *)&D_80093870 + var_s0_6 * 204)));
                            var_s0_6 += 1;
                        } while (D_80095B04 >= var_s0_6);
                    }
                }
                func_80048478(0x20);
                if (D_8008ED68 != 0) {
                    var_s0_7 = 0;
                    if (D_80095B0C > 0) {
                        do {
                            func_80047370(((M2C_UNK *)((u8 *)&D_8009591C + var_s0_7 * 204)));
                            var_s0_7 += 1;
                        } while (var_s0_7 < D_80095B0C);
                    }
                }
                if (var_s3 != 0) {
                    if (D_8008ED3C != 0) {
                        func_80047370(&D_80095124);
                    }
                }
                if (D_8008ED54 != 0) {
                    func_80047370(&D_80094C5C);
                }
                if (D_8008ED38 != 0) {
                    func_80047370(&D_800951F0);
                }
                if (D_8008ED50 != 0) {
                    var_s0_8 = 0;
                    if (D_80095B04 >= 0) {
                        do {
                            func_80047370(((M2C_UNK *)((u8 *)&D_80093C6C + var_s0_8 * 204)));
                            var_s0_8 += 1;
                        } while (D_80095B04 >= var_s0_8);
                    }
                }
                func_80048484(0);
                func_80048478(0x10);
                if (D_8008ED58 != 0) {
                    var_s0_9 = 0;
                    do {
                        func_80047370(((M2C_UNK *)((u8 *)&D_80094860 + var_s0_9 * 204)));
                        var_s0_9 += 1;
                    } while (var_s0_9 < 3);
                }
                if (D_8008ED64 != 0) {
                    var_s0_10 = 0;
                    if ((D_80095B04 - 1) > 0) {
                        do {
                            func_80047370(((M2C_UNK *)((u8 *)&D_80094068 + var_s0_10 * 204)));
                            var_s0_10 += 1;
                        } while (var_s0_10 < (D_80095B04 - 1));
                    }
                }
                func_80048478(0x20);
                func_80048484(0xFF);
                if (D_8008ED44 != 0) {
                    func_80047370(&D_800946C8);
                }
                if (D_8008ED70 != 0) {
                    func_80047370(&D_80094530);
                    func_80047370(&D_80094530 + 0xCC);
                }
                func_80048478(0x30);
                func_80048484(0);
                var_s0_11 = 0;
                if (D_80095B04 > 0) {
                    do {
                        func_80047370(((M2C_UNK *)((u8 *)&D_80094D28 + var_s0_11 * 204)));
                        var_s0_11 += 1;
                    } while (var_s0_11 < D_80095B04);
                }
                func_80048484(0xFF);
                func_80048478(0x10);
                if (D_8008ED4C != 0) {
                    func_80047370(&D_80095058);
                }
                func_80048484(0);
                if (D_8008ED78 != 0) {
                    var_s0_12 = 0;
                    if (D_80095B08 > 0) {
                        do {
                            func_80047370(((M2C_UNK *)((u8 *)&D_800955EC + var_s0_12 * 204)));
                            var_s0_12 += 1;
                        } while (var_s0_12 < D_80095B08);
                    }
                }
                func_80048484(0xFF);
                var_s0_13 = 9;
                var_s2_2 = &D_80091494 + 0x72C;
                var_s1_13 = &D_8008F2C4 + 0x24;
                do {
                    if (temp_s5 != 0) {
                        func_8004217C(arg0, *var_s1_13);
                    }
                    func_80047370(var_s2_2);
                    var_s2_2 -= 0xCC;
                    var_s0_13 -= 1;
                    var_s1_13 -= 4;
                } while (var_s0_13 >= 0);
                if (temp_s5 != 0) {
                    func_8004217C(arg0, 0);
                }
                if (D_8008ED74 != 0) {
                    func_80047370(&D_800952BC);
                    if (D_80082688 == 0) {
                        func_80047370(&D_80095388);
                    }
                }
                func_80048484(0);
                if (D_8008ED34 != 0) {
                    func_80047370(&D_800926E8);
                }
                func_80048484(0xFF);
                if (D_8008ED48 == 0) {
                    var_a0 = &D_80092484;
                } else {
                    func_80047370(&D_8009261C);
                    var_a0 = (M2C_UNK *)0x80090000;
                }
                var_a0_2 = var_a0;
            } else {
                func_80048478(0x10);
                func_80048484(0);
                if (D_8008ED38 != 0) {
                    func_80047370(&D_800951F0);
                }
                if (D_8008ED54 != 0) {
                    func_80047370(&D_80094C5C);
                }
                if (D_8008ED58 != 0) {
                    var_s0_14 = 0;
                    do {
                        func_80047370(((M2C_UNK *)((u8 *)&D_80094860 + var_s0_14 * 204)));
                        var_s0_14 += 1;
                    } while (var_s0_14 < 3);
                }
                func_80048484(0xFF);
                func_80048478(0x20);
                if (D_8008ED5C != 0) {
                    var_s0_15 = 0;
                    if (D_80095B04 > 0) {
                        do {
                            func_80047370(((M2C_UNK *)((u8 *)&D_80093078 + var_s0_15 * 204)));
                            var_s0_15 += 1;
                        } while (var_s0_15 < D_80095B04);
                    }
                }
                func_80048478(0x40);
                var_s0_16 = 9;
                var_s2_3 = &D_80091C8C + 0x72C;
                var_s1_16 = &D_8008F2C4 + 0x24;
                do {
                    if (temp_s5 != 0) {
                        func_8004217C(arg0, *var_s1_16);
                    }
                    func_80047370(var_s2_3);
                    var_s2_3 -= 0xCC;
                    var_s0_16 -= 1;
                    var_s1_16 -= 4;
                } while (var_s0_16 >= 0);
                if (temp_s5 != 0) {
                    func_8004217C(arg0, 0);
                }
                var_s0_17 = 0;
                if ((D_80095B04 - 1) > 0) {
                    do {
                        func_80047370(((M2C_UNK *)((u8 *)&D_800942CC + var_s0_17 * 204)));
                        var_s0_17 += 1;
                    } while (var_s0_17 < (D_80095B04 - 1));
                }
                func_80047370(&D_80095454);
                func_80047370(&D_80092550);
                func_80048478(0x30);
                var_s0_18 = 0;
                if (D_80095B04 > 0) {
                    do {
                        func_80047370(((M2C_UNK *)((u8 *)&D_80093540 + var_s0_18 * 204)));
                        var_s0_18 += 1;
                    } while (var_s0_18 < D_80095B04);
                }
                func_80048478(0x10);
                if (D_8008ED6C != 0) {
                    var_s0_19 = 0;
                    if (D_80095B04 >= 0) {
                        do {
                            func_80047370(((M2C_UNK *)((u8 *)&D_80093870 + var_s0_19 * 204)));
                            var_s0_19 += 1;
                        } while (D_80095B04 >= var_s0_19);
                    }
                }
                func_80048478(0x20);
                if (D_8008ED68 != 0) {
                    var_s0_20 = 0;
                    if (D_80095B0C > 0) {
                        do {
                            func_80047370(((M2C_UNK *)((u8 *)&D_8009591C + var_s0_20 * 204)));
                            var_s0_20 += 1;
                        } while (var_s0_20 < D_80095B0C);
                    }
                }
                if (var_s3 != 0) {
                    if (D_8008ED3C != 0) {
                        func_80047370(&D_80095124);
                    }
                }
                if (D_8008ED50 != 0) {
                    var_s0_21 = 0;
                    if (D_80095B04 >= 0) {
                        do {
                            func_80047370(((M2C_UNK *)((u8 *)&D_80093C6C + var_s0_21 * 204)));
                            var_s0_21 += 1;
                        } while (D_80095B04 >= var_s0_21);
                    }
                }
                func_80048484(0);
                func_80048478(0x10);
                if (D_8008ED64 != 0) {
                    var_s0_22 = 0;
                    if ((D_80095B04 - 1) > 0) {
                        do {
                            func_80047370(((M2C_UNK *)((u8 *)&D_80094068 + var_s0_22 * 204)));
                            var_s0_22 += 1;
                        } while (var_s0_22 < (D_80095B04 - 1));
                    }
                }
                func_80048478(0x20);
                func_80048484(0xFF);
                if (D_8008ED44 != 0) {
                    func_80047370(&D_800946C8);
                }
                func_80048478(0x30);
                func_80048484(0);
                var_s0_23 = 0;
                if (D_80095B04 > 0) {
                    do {
                        func_80047370(((M2C_UNK *)((u8 *)&D_80094D28 + var_s0_23 * 204)));
                        var_s0_23 += 1;
                    } while (var_s0_23 < D_80095B04);
                }
                func_80048484(0xFF);
                func_80048478(0x10);
                if (D_8008ED4C != 0) {
                    func_80047370(&D_80095058);
                }
                func_80048484(0);
                if (D_8008ED78 != 0) {
                    var_s0_24 = 0;
                    if (D_80095B08 > 0) {
                        do {
                            func_80047370(((M2C_UNK *)((u8 *)&D_800955EC + var_s0_24 * 204)));
                            var_s0_24 += 1;
                        } while (var_s0_24 < D_80095B08);
                    }
                }
                func_80048484(0xFF);
                var_s0_25 = 9;
                var_s2_4 = &D_80091494 + 0x72C;
                var_s1_25 = &D_8008F2C4 + 0x24;
                do {
                    if (temp_s5 != 0) {
                        func_8004217C(arg0, *var_s1_25);
                    }
                    func_80047370(var_s2_4);
                    var_s2_4 -= 0xCC;
                    var_s0_25 -= 1;
                    var_s1_25 -= 4;
                } while (var_s0_25 >= 0);
                if (temp_s5 != 0) {
                    func_8004217C(arg0, 0);
                }
                if (D_8008ED74 != 0) {
                    func_80047370(&D_800952BC);
                    if (D_80082688 == 0) {
                        func_80047370(&D_80095388);
                    }
                }
                func_80048484(0);
                if (D_8008ED34 != 0) {
                    func_80047370(&D_800926E8);
                }
                func_80048484(0xFF);
                if (D_8008ED48 == 0) {
                    var_a0_3 = &D_80092484;
                } else {
                    func_80047370(&D_8009261C);
                    var_a0_3 = (M2C_UNK *)0x80090000;
                }
                var_a0_2 = var_a0_3;
            }
            goto block_191;
        }
        func_80048478(0x10);
        func_80048484(0);
        func_80047370(&D_800933A8);
        func_80047370(&D_800933A8 + 0xCC);
        func_80048484(0xFF);
        var_s4 = 0;
        var_s3_2 = &D_8008F2C4;
        var_s0_26 = &sp10;
        var_s2_5 = &D_80090C9C;
        var_s1_26 = &D_800904A4;
loop_152:
        if (var_s4 < 0xA) {
            var_v0 = 1;
            if (!(D_800798A0 <= M2C_FIELD(M2C_FIELD(var_s1_26, void **, 0xB0), f64 *, 8))) {
                var_v0 = func_80043620(arg0, var_s1_26);
            }
            *var_s0_26 = var_v0;
            if (*var_s0_26 != 0) {
                var_s3_2 += 4;
            } else if (func_800437E0(arg0, var_s2_5) == 0) {
                var_s3_2 += 4;
            } else {
                if (temp_s5 != 0) {
                    var_a1 = *var_s3_2;
                } else {
                    var_a1 = 0;
                }
                var_s3_2 += 4;
                func_800421A8(arg0, var_a1);
                func_80047370(var_s2_5);
            }
            var_s0_26 += 4;
            var_s2_5 += 0xCC;
            var_s1_26 += 0xCC;
            var_s4 += 1;
            goto loop_152;
        }
        if (((M2C_FIELD(D_80092534, f64 *, 0x10) - D_800798A8) < 0.0) && (-M2C_FIELD(arg0, f64 *, 0x30) < -M2C_FIELD(arg0, f64 *, 0x18))) {
            temp_fv1 = M2C_FIELD(D_80092534, f64 *, 0);
            if ((temp_fv1 >= 0.0) && (temp_fv1 < D_800798B0)) {
                func_800421A8(arg0, 0);
                func_80047370(&D_80092550);
            }
        }
        func_80048478(0x50);
        func_8004217C(arg0, 0);
        if (D_8008ED5C != 0) {
            func_80047370(&D_80093144);
            func_80047370(&D_80093144 + 0xCC);
        }
        func_80048478(0x30);
        if (D_8008ED6C != 0) {
            func_80048484(0);
            func_80047370(&D_80093870);
            func_80047370(&D_80093870 + 0xCC);
            func_80047370(&D_80093870 + 0x198);
            func_80047370(&D_80093870 + 0x264);
            func_80048484(0xFF);
        }
        func_80048478(0x10);
        if (D_8008ED50 != 0) {
            var_s0_27 = 0;
            if (D_80095B04 >= 0) {
                do {
                    func_80047370(((M2C_UNK *)((u8 *)&D_80093C6C + var_s0_27 * 204)));
                    var_s0_27 += 1;
                } while (D_80095B04 >= var_s0_27);
            }
        }
        func_80048478(0x10);
        var_s3_3 = 0;
        if (D_8008ED74 != 0) {
            func_80047370(&D_800952BC);
            func_80047370(&D_80095388);
            var_s3_3 = 0;
        }
        var_s2_6 = &D_8008F2C4;
        var_s1_28 = &sp10;
        var_s0_28 = &D_800904A4;
loop_182:
        if (var_s3_3 < 0xA) {
            if (*var_s1_28 == 0) {
                if (temp_s5 != 0) {
                    func_8004217C(arg0, *var_s2_6);
                }
                func_80047370(var_s0_28);
            }
            var_s2_6 += 4;
            var_s1_28 += 4;
            var_s0_28 += 51;
            var_s3_3 += 1;
            goto loop_182;
        }
        if (temp_s5 != 0) {
            func_8004217C(arg0, 0);
        }
        var_a0_2 = &D_80092484;
        if (M2C_FIELD(M2C_FIELD(&D_80092484, void **, 0xB0), f64 *, 8) < D_800798B8) {
block_191:
            func_80047370(var_a0_2);
        }
    }
}

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

M2C_UNK appendString(s32 *, s32 *);                 /* extern */
s32 func_8002AB14(M2C_UNK);                         /* extern */
s32 func_80034BD8(s32, M2C_UNK);                    /* extern */
M2C_UNK func_80039738(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32 *); /* extern */
M2C_UNK func_80042A1C(M2C_UNK *);                   /* extern */
M2C_UNK func_80045278(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_8004684C(s32);                         /* extern */
M2C_UNK func_8004EA00(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_800580A0(s32 *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_8005978C(s32 *, M2C_UNK *, u32);       /* extern */
s32 func_8005AAD0();          /* extern */
s32 func_8006F030(void *, M2C_UNK *, s32 *);        /* extern */
s32 osPfsDeleteFile(void *, u16, s32, void *, void *); /* extern */
s32 osPfsFileState(void *, s32, M2C_UNK *);         /* extern */
s32 osPfsFreeBlocks(void *, s32 *);                 /* extern */
extern M2C_UNK D_80077910;
extern s32 D_80077C1C;
extern s32 D_80077C34;
extern s32 D_80077C44;
extern M2C_UNK D_80077C50;
extern M2C_UNK D_80077C58;
extern s32 D_80077C64;
extern s32 D_80077C68;
extern s32 D_80077C7C;
extern s32 D_80077C90;
extern s32 D_80077CA4;
extern s32 D_80077CB0;
extern s32 D_80077CB8;
extern s32 D_80077CD0;
extern s32 D_80077CEC;
extern s32 D_80077CF4;
extern s32 D_80077CFC;
extern s32 D_80077D14;
extern M2C_UNK D_8008BB34;
extern M2C_UNK D_8008CEB0;
extern M2C_UNK D_8008CEEC;
extern M2C_UNK D_8008CF28;
extern M2C_UNK D_8008ED80;
extern M2C_UNK D_8009CE10;
extern u16 D_8009D5B0;
extern M2C_UNK D_8009D630;

s32 func_800353F8(s32 arg0) {
    M2C_UNK sp18;
    s32 sp218;
    s32 sp258;
    s32 sp25C;
    s16 sp260;
    s32 sp298;
    M2C_UNK sp2A0;
    s32 sp2A4;
    s32 sp2A8;
    s32 sp2AC;
    s32 sp2B0;
    s32 sp2B4;
    s32 sp2B8;
    s32 sp2BC;
    s32 *sp2C0;
    s32 sp2C4;
    M2C_UNK *sp2C8;
    M2C_UNK *var_a3;
    M2C_UNK *var_s1_2;
    M2C_UNK *var_s2;
    M2C_UNK *var_s7;
    M2C_UNK var_s3_2;
    s32 *temp_v0_2;
    s32 *var_a1;
    s32 *var_s0;
    s32 *var_s5;
    s32 temp_s0;
    s32 temp_s3;
    s32 temp_v0;
    s32 temp_v0_4;
    s32 temp_v0_6;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_fp;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_4;
    s32 var_s1;
    s32 var_s1_3;
    s32 var_s3;
    s32 var_s4;
    s32 var_s4_2;
    s32 var_s6;
    s8 *temp_v1_3;
    s8 *temp_v1_5;
    s8 *temp_v1_7;
    u32 temp_a2;
    u8 *temp_v0_3;
    u8 *temp_v0_5;
    u8 *var_v0;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 temp_v1_4;
    u8 temp_v1_6;
    u8 var_v1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_s1;
    void *temp_v0_7;

loop_1:
    sp2AC = func_80034BD8(arg0, 1);
    if (sp2AC == 1) {
        sp2BC = arg0 * 0x68;
        sp2C8 = &sp18;
        sp2C0 = &sp218;
        var_fp = 0;
loop_3:
        var_s3 = 1;
        sp2B0 = 0;
        sp2B8 = 1;
        if (func_8006F030(sp2BC + &D_8009D630, &sp2A0, &sp2A4) == 0) {
            var_s1 = 0;
            var_s0 = sp2C0;
            var_s2 = sp2C8;
            sp2A4 = 0x10;
            sp2B4 = 0;
loop_5:
            temp_v0 = osPfsFileState(sp2BC + &D_8009D630, var_s1, var_s2);
            if (temp_v0 != 0) {
                *var_s0 = 0;
                if (temp_v0 == 5) {
                    var_s0 += 4;
                    goto block_9;
                }
                goto loop_1;
            }
            *var_s0 = 1;
            sp2B4 += 1;
            var_s0 += 4;
block_9:
            var_s1 += 1;
            var_s2 += 0x20;
            if (var_s1 >= sp2A4) {
                if (osPfsFreeBlocks(sp2BC + &D_8009D630, &sp2A8) == 0) {
loop_12:
                    func_8004EA00(&D_8009CE10, 0, 0, 0, 1);
                    if (var_s3 == 1) {
                        func_80045278(&D_8008ED80, 0);
                    }
                    sp2C4 = 0;
loop_15:
                    if (sp2C4 < 2) {
                        func_80039738(&D_8008CEEC, 7, 1, 0x140, 0xA, &D_80077C1C);
                        func_80039738(&D_8008CEB0, 7, 0, 0x57, 0x19, &D_80077C34);
                        func_80039738(&D_8008CEB0, 7, 2, 0x253, 0x19, &D_80077C44);
                        var_s4 = 0;
                        var_s7 = NULL;
                        var_s6 = 0x220000;
                        var_s1_2 = sp2C8;
                        var_s5 = sp2C0;
loop_17:
                        if (var_s4 < sp2A4) {
                            var_s3_2 = 7;
                            if (var_fp == var_s4) {
                                var_s3_2 = 5;
                            }
                            func_8005978C(&sp258, &D_80077C50, var_s4 + 1);
                            func_80039738(&D_8008CEEC, var_s3_2, 2, 0x55, var_s6 >> 0x10, &sp258);
                            func_800580A0(&sp258, 0, 0x40);
                            func_800580A0(&sp298, 0, 8);
                            var_a2 = 0;
                            var_a3 = var_s1_2;
                            var_a1 = &sp258;
                            do {
                                if (*var_s5 != 0) {
                                    temp_a0 = (s32)sp2C8 + (s32)(var_a2 + var_s7);
                                    temp_v1 = M2C_FIELD(temp_a0, u8 *, 0xE);
                                    if (temp_v1 >= 0x42U) {
                                        *var_a1 = 0x2AU;
                                    } else if (temp_v1 == 0) {
                                        *var_a1 = (u8) M2C_FIELD(&D_8008BB34, u8 *, 0xF);
                                    } else {
                                        *var_a1 = (u8) *(M2C_FIELD(temp_a0, u8 *, 0xE) + &D_8008BB34);
                                    }
                                    M2C_FIELD((var_a2 + &sp258), s8 *, 1) = 0;
                                } else {
                                    sp258 = M2C_FIELD(&D_80077C58, s32 *, 0);
                                    sp25C = M2C_FIELD(&D_80077C58, s32 *, 4);
                                    sp260 = M2C_FIELD(&D_80077C58, s16 *, 8);
                                    M2C_FIELD(var_a3, u32 *, 0) = 0U;
                                }
                                var_a2 += 1;
                                var_a1 += 1;
                            } while (var_a2 < 0x10);
                            if (*var_s5 != 0) {
                                var_a1 = NULL;
                                if ((M2C_FIELD(var_s1_2, u8 *, 0xA) == 0) && (M2C_FIELD(var_s1_2, u8 *, 0xB) == 0)) {
                                    var_a3 = var_s7;
                                    if (M2C_FIELD(var_s1_2, u8 *, 0xC) == 0) {
                                        if (M2C_FIELD(var_s1_2, u8 *, 0xD) != 0) {
                                            goto block_35;
                                        }
                                    } else {
                                        goto block_36;
                                    }
                                } else {
block_35:
                                    var_a3 = var_s7;
block_36:
                                    var_a2 = (s32) &sp298;
                                    do {
                                        temp_a0_2 = (s32)sp2C8 + (s32)((s32)var_a1 + (s32)var_a3);
                                        temp_v1_2 = M2C_FIELD(temp_a0_2, u8 *, 0xA);
                                        if (temp_v1_2 >= 0x42U) {
                                            *(var_a2 + var_a1) = 0x2A;
                                        } else {
                                            if (temp_v1_2 == 0) {
                                                var_v1 = M2C_FIELD(&D_8008BB34, u8 *, 0xF);
                                                var_v0 = var_a2 + var_a1;
                                            } else {
                                                var_v1 = *(M2C_FIELD(temp_a0_2, u8 *, 0xA) + &D_8008BB34);
                                                var_v0 = var_a2 + var_a1;
                                            }
                                            *var_v0 = var_v1;
                                        }
                                        temp_v0_2 = var_a1 + 1;
                                        temp_v1_3 = var_a2 + temp_v0_2;
                                        var_a1 = temp_v0_2;
                                        *temp_v1_3 = 0;
                                    } while ((s32) var_a1 < 4);
                                }
                            }
                            if (func_8005AAD0(&sp298, (s32) var_a1, (s32 *) var_a2, (s32) var_a3) != 0) {
                                appendString(&sp258, &D_80077C64);
                                appendString(&sp258, &sp298);
                            }
                            temp_s0 = var_s6 >> 0x10;
                            func_80039738(&D_8008CEEC, var_s3_2, 0, 0x57, temp_s0, &sp258);
                            temp_a2 = M2C_FIELD(var_s1_2, u32 *, 0);
                            var_s1_2 += 0x20;
                            var_s7 += 0x20;
                            var_s5 += 4;
                            var_s4 += 1;
                            func_8005978C(&sp258, &D_80077910, temp_a2 >> 8);
                            func_80039738(&D_8008CEEC, var_s3_2, 2, 0x253, temp_s0, &sp258);
                            var_s6 += 0xA0000;
                            goto loop_17;
                        }
                        func_80039738(&D_8008CF28, 7, 0, 0x2D, 0xCB, &D_80077C68);
                        var_a2_2 = sp2A8;
                        if (var_a2_2 < 0) {
                            var_a2_2 += 0xFF;
                        }
                        func_8005978C(&sp258, &D_80077910, (u32) (var_a2_2 >> 8));
                        func_80039738(&D_8008CF28, 5, 0, 0xB4, 0xCB, &sp258);
                        func_8005978C(&sp258, &D_80077910, 1U);
                        func_80039738(&D_8008CF28, 7, 1, 0x140, 0xCB, &D_80077C7C);
                        func_80039738(&D_8008CF28, 5, 1, 0x18C, 0xCB, &sp258);
                        func_8005978C(&sp258, &D_80077910, 0x3EU);
                        func_80039738(&D_8008CF28, 7, 2, 0x24B, 0xCB, &D_80077C90);
                        func_80039738(&D_8008CF28, 5, 2, 0x256, 0xCB, &sp258);
                        if (sp2B4 > 0) {
                            func_80039738(&D_8008CEEC, 7, 0, 0x2D, 0xD4, &D_80077CA4);
                        }
                        func_80039738(&D_8008CEEC, 7, 2, 0x253, 0xD4, &D_80077CB0);
                        func_80042A1C(&D_8008ED80);
                        sp2C4 += 1;
                        goto loop_15;
                    }
                    var_s3 = 1;
                    var_s0_2 = 0;
loop_54:
                    if (D_8009D5B0 & 0x800) {
                        var_fp -= 1;
                        if (var_fp < 0) {
                            var_fp = 0;
                        }
                        var_s0_2 = 1;
                        var_s3 = 0;
                        sp2B8 = 1;
                    }
                    if (D_8009D5B0 & 0x400) {
                        var_fp += 1;
                        if (var_fp == sp2A4) {
                            var_fp -= 1;
                        }
                        var_s0_2 = 1;
                        var_s3 = 0;
                        sp2B8 = 1;
                    }
                    if (D_8009D5B0 & 0x8000) {
                        var_s0_2 = 1;
                        sp2B0 = 1;
                        sp2B8 = 0;
                    }
                    if ((D_8009D5B0 & 0x4000) && (sp2C0[var_fp] != 0) && (sp2A4 > 0)) {
                        func_800580A0(&sp258, 0, 0x40);
                        func_800580A0(&sp298, 0, 8);
                        func_8004EA00(&D_8009CE10, 0, 0, 0, 1);
                        func_80045278(&D_8008ED80, 0);
                        var_s4_2 = 0;
                        temp_s3 = var_fp << 5;
                        temp_s1 = sp2C8 + temp_s3;
loop_68:
                        var_a1_2 = 0;
                        if (var_s4_2 < 2) {
                            do {
                                temp_a0_3 = sp2C8 + (var_a1_2 + temp_s3);
                                temp_v1_4 = M2C_FIELD(temp_a0_3, u8 *, 0xE);
                                temp_v0_3 = &sp258 + var_a1_2;
                                if (temp_v1_4 >= 0x42U) {
                                    *temp_v0_3 = 0x2A;
                                } else if (temp_v1_4 == 0) {
                                    *temp_v0_3 = M2C_FIELD(&D_8008BB34, u8 *, 0xF);
                                } else {
                                    *(&sp258 + var_a1_2) = *(M2C_FIELD(temp_a0_3, u8 *, 0xE) + &D_8008BB34);
                                }
                                temp_v0_4 = var_a1_2 + 1;
                                temp_v1_5 = &sp258 + temp_v0_4;
                                var_a1_2 = temp_v0_4;
                                *temp_v1_5 = 0;
                            } while (var_a1_2 < 0x10);
                            var_a1_3 = 0;
                            if ((M2C_FIELD(temp_s1, u8 *, 0xA) == 0) && (M2C_FIELD(temp_s1, u8 *, 0xB) == 0)) {
                                if (M2C_FIELD(temp_s1, u8 *, 0xC) == 0) {
                                    if (M2C_FIELD(temp_s1, u8 *, 0xD) != 0) {
                                        goto block_79;
                                    }
                                } else {
                                    goto loop_80;
                                }
                            } else {
block_79:
                                do {
loop_80:
                                    temp_a0_4 = sp2C8 + (var_a1_3 + temp_s3);
                                    temp_v1_6 = M2C_FIELD(temp_a0_4, u8 *, 0xA);
                                    temp_v0_5 = &sp298 + var_a1_3;
                                    if (temp_v1_6 >= 0x42U) {
                                        *temp_v0_5 = 0x2A;
                                    } else if (temp_v1_6 == 0) {
                                        *temp_v0_5 = M2C_FIELD(&D_8008BB34, u8 *, 0xF);
                                    } else {
                                        *(&sp298 + var_a1_3) = *(M2C_FIELD(temp_a0_4, u8 *, 0xA) + &D_8008BB34);
                                    }
                                    temp_v0_6 = var_a1_3 + 1;
                                    temp_v1_7 = &sp298 + temp_v0_6;
                                    var_a1_3 = temp_v0_6;
                                    *temp_v1_7 = 0;
                                } while (var_a1_3 < 4);
                            }
                            if (func_8005AAD0(&sp298, var_a1_3, &sp298) != 0) {
                                appendString(&sp258, &D_80077C64);
                                appendString(&sp258, &sp298);
                            }
                            func_80039738(&D_8008CEEC, 7, 1, 0x140, 0x50, &sp258);
                            func_80039738(&D_8008CEEC, 7, 1, 0x140, 0x64, &D_80077CB8);
                            func_80039738(&D_8008CEEC, 7, 1, 0x140, 0x73, &D_80077CD0);
                            func_80039738(&D_8008CEEC, 5, 0, 0x64, 0x87, &D_80077CEC);
                            func_80039738(&D_8008CEEC, 5, 0, 0x64, 0xA0, &D_80077CF4);
                            func_80042A1C(&D_8008ED80);
                            var_s4_2 += 1;
                            goto loop_68;
                        }
                        var_s1_3 = 0;
                        var_s0_3 = 0;
                        do {
                            if (D_8009D5B0 & 0x8000) {
                                var_s1_3 = 1;
                                var_s0_3 = 1;
                            }
                            if (D_8009D5B0 & 0x4000) {
                                var_s1_3 = 1;
                                var_s0_3 = 0;
                            }
                            func_8004684C(1);
                        } while (var_s1_3 == 0);
                        var_s0_2 = 1;
                        if (var_s0_3 == 1) {
                            func_8004EA00(&D_8009CE10, 0, 0, 0, 1);
                            func_80045278(&D_8008ED80, 0);
                            var_s0_4 = 0;
                            do {
                                func_80039738(&D_8008CEEC, 7, 1, 0x140, 0x64, &D_80077CFC);
                                func_80039738(&D_8008CEB0, 7, 1, 0x140, 0x73, &D_80077D14);
                                func_80042A1C(&D_8008ED80);
                                var_s0_4 += 1;
                            } while (var_s0_4 < 2);
                            temp_v0_7 = sp2C8 + (var_fp << 5);
                            if (osPfsDeleteFile(sp2BC + &D_8009D630, M2C_FIELD(temp_v0_7, u16 *, 8), M2C_FIELD(temp_v0_7, s32 *, 4), temp_v0_7 + 0xE, temp_v0_7 + 0xA) == 0) {
                                func_8004684C(func_8002AB14(0x14) + 0x41);
                            }
                            goto loop_1;
                        }
                        var_s3 = 1;
                        sp2B8 = 1;
                        sp2B0 = 0;
                        goto block_102;
                    }
block_102:
                    func_8004684C(1);
                    if (var_s0_2 != 0) {
                        func_8004684C(1);
                        if (sp2B8 != 1) {
                            func_8004684C(1);
                            var_fp = 0;
                            if (sp2B0 == 0) {
                                goto loop_3;
                            }
                        } else {
                            goto loop_12;
                        }
                    } else {
                        goto loop_54;
                    }
                } else {
                    goto loop_1;
                }
            } else {
                goto loop_5;
            }
        } else {
            goto loop_1;
        }
    }
    return sp2AC;
}

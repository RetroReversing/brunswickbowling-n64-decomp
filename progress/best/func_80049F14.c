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

s32 func_800482C4(f32, f32);                        /* extern */
M2C_UNK func_80048C3C(void *, u16, M2C_UNK, s32, s32, s32, f32, s32); /* extern */
M2C_UNK func_80049C50(M2C_UNK, void *, f32 *, f32 *, M2C_UNK *, f32 *, f32 *, f32 *); /* extern */
M2C_UNK func_800580A0(s16 *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_80066040(s32, s32);                    /* extern */
extern M2C_UNK D_80095B68;
extern M2C_UNK D_80095BA0;
extern M2C_UNK D_80095BD0;
extern M2C_UNK D_80095C08;
extern M2C_UNK D_80095C40;
extern M2C_UNK D_80095C70;
extern s32 D_8009C640;
extern s16 D_8009C730;
extern M2C_UNK D_8009C770;
extern u8 D_8009C772;
extern void *D_8009CC60;
extern s32 D_8009CD80;

#define sp60 (*(u16 *)(sp + 0x60))
#define sp62 (*(u16 *)(sp + 0x62))
#define sp64 (*(u16 *)(sp + 0x64))
#define sp68 (*(u16 *)(sp + 0x68))
#define sp6A (*(s32 *)(sp + 0x6A))
#define sp6C (*(s32 *)(sp + 0x6C))
#define spD8 (*(f32 *)(sp + 0xD8))
#define spDC (*(f32 *)(sp + 0xDC))
#define spE0 (*(s32 *)(sp + 0xE0))
#define spE4 (*(f32 *)(sp + 0xE4))
#define spE8 (*(f32 *)(sp + 0xE8))
#define spEC (*(f32 *)(sp + 0xEC))
#define spF0 (*(s32 *)(sp + 0xF0))
#define spF4 (*(s32 *)(sp + 0xF4))
#define spFE (*(u16 *)(sp + 0xFE))
#define sp100 (*(s32 *)(sp + 0x100))
#define sp104 (*(s32 *)(sp + 0x104))
#define sp108 (*(u16 * *)(sp + 0x108))
void func_80049F14(void *arg0, M2C_UNK arg1, s32 arg2, s32 arg3, s32 arg4, f32 arg5, s32 arg6, s32 arg7) {
    u8 sp[320];
    s16 *var_a0;
    s16 *var_a0_2;
    s16 temp_v0_7;
    s16 temp_v0_8;
    s16 temp_v0_9;
    s16 temp_v1_17;
    s16 temp_v1_18;
    s16 temp_v1_8;
    s32 temp_a0;
    s32 temp_a0_11;
    s32 temp_a0_12;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_a0_7;
    s32 temp_a0_8;
    s32 temp_a0_9;
    s32 temp_a1;
    s32 temp_a1_10;
    s32 temp_a1_11;
    s32 temp_a1_12;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a1_4;
    s32 temp_a1_5;
    s32 temp_a1_6;
    s32 temp_a1_7;
    s32 temp_a1_8;
    s32 temp_a1_9;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a2_3;
    s32 temp_a2_4;
    s32 temp_a2_5;
    s32 temp_a2_6;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_a3_3;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_t0;
    s32 temp_t9;
    s32 temp_v0;
    s32 temp_v1_12;
    s32 temp_v1_13;
    s32 temp_v1_14;
    s32 temp_v1_15;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a2_3;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s2;
    s32 var_s3;
    s32 var_s7;
    s32 var_t4;
    s32 var_v1;
    u16 *var_a3;
    u16 *var_t2;
    u16 temp_a0_13;
    u16 temp_s2;
    u16 temp_t4;
    u16 temp_t5_2;
    u16 temp_t7;
    u16 temp_v0_3;
    u16 temp_v0_5;
    u16 temp_v1_11;
    u16 temp_v1_9;
    u32 var_s5;
    u32 var_s5_2;
    u32 var_s5_3;
    u32 var_s5_4;
    u8 temp_v0_2;
    u8 temp_v0_6;
    void *temp_a0_10;
    void *temp_a2_7;
    void *temp_s0_10;
    void *temp_s0_11;
    void *temp_s0_12;
    void *temp_s0_13;
    void *temp_s0_14;
    void *temp_s0_15;
    void *temp_s0_16;
    void *temp_s0_17;
    void *temp_s0_18;
    void *temp_s0_19;
    void *temp_s0_20;
    void *temp_s0_21;
    void *temp_s0_22;
    void *temp_s0_23;
    void *temp_s0_24;
    void *temp_s0_25;
    void *temp_s0_26;
    void *temp_s0_27;
    void *temp_s0_28;
    void *temp_s0_29;
    void *temp_s0_30;
    void *temp_s0_31;
    void *temp_s0_32;
    void *temp_s0_33;
    void *temp_s0_34;
    void *temp_s0_35;
    void *temp_s0_36;
    void *temp_s0_37;
    void *temp_s0_38;
    void *temp_s0_39;
    void *temp_s0_3;
    void *temp_s0_40;
    void *temp_s0_41;
    void *temp_s0_42;
    void *temp_s0_43;
    void *temp_s0_44;
    void *temp_s0_45;
    void *temp_s0_46;
    void *temp_s0_47;
    void *temp_s0_48;
    void *temp_s0_49;
    void *temp_s0_4;
    void *temp_s0_50;
    void *temp_s0_51;
    void *temp_s0_52;
    void *temp_s0_53;
    void *temp_s0_54;
    void *temp_s0_55;
    void *temp_s0_56;
    void *temp_s0_57;
    void *temp_s0_5;
    void *temp_s0_6;
    void *temp_s0_7;
    void *temp_s0_8;
    void *temp_s0_9;
    void *temp_t0_2;
    void *temp_t0_3;
    void *temp_t1;
    void *temp_t2;
    void *temp_t3;
    void *temp_t4_2;
    void *temp_t5;
    void *temp_v0_4;
    void *temp_v1;
    void *temp_v1_10;
    void *temp_v1_16;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_6;
    void *temp_v1_7;
    void *var_s0;
    void *var_s0_2;
    void *var_s0_3;
    void *var_s0_4;
    void *var_s0_5;
    void *var_t0;
    void *var_t1;
    void *var_t3;

    spF4 = 0xA;
    func_80049C50(arg1, arg0, &spD8, &spDC, &spE0, &spE4, &spE8, &spEC);
    if (!(arg7 & 0x8000)) {
        var_s1 = arg7 & 0x7FFF;
        goto block_10;
    }
    if (!(spEC < 0.0f)) {
        temp_v0 = func_800482C4(spD8, spDC);
        if (temp_v0 == 0) {
            var_s1 = arg7 & 0x7FFF;
            goto block_10;
        }
        temp_s0 = temp_v0 & func_800482C4(spE4, spDC);
        var_s1 = arg7 & 0x7FFF;
        if ((temp_s0 == 0) || (temp_s0_2 = temp_s0 & func_800482C4(spE4, spE8), (temp_s0_2 == 0)) || !(temp_s0_2 & func_800482C4(spD8, spE8))) {
block_10:
            func_800580A0(&D_8009C730, -1, 0x40);
            spF0 = D_8009CD80;
            var_s0 = D_8009CC60;
            M2C_FIELD(&D_8009C770, s16 *, 0) = 0;
            temp_v0_2 = var_s1 & 0x7FF0;
            if ((var_s1 & 0xF0) != D_8009C772) {
                D_8009C772 = temp_v0_2;
                temp_a0 = temp_v0_2 & 0xFF;
                if (temp_a0 != 0x30) {
                    if (temp_a0 < 0x31) {
                        if (temp_a0 != 0x10) {
                            temp_v1 = var_s0;
                            if (temp_a0 != 0x20) {

                            } else {
                                var_s0 += 8;
                                M2C_FIELD(temp_v1, s32 *, 0) = 0x06000000;
                                M2C_FIELD(temp_v1, M2C_UNK **, 4) = &D_80095BD0;
                            }
                        } else {
                            temp_v1_2 = var_s0;
                            var_s0 += 8;
                            M2C_FIELD(temp_v1_2, s32 *, 0) = 0x06000000;
                            M2C_FIELD(temp_v1_2, M2C_UNK **, 4) = &D_80095B68;
                        }
                    } else if (temp_a0 != 0x50) {
                        if (temp_a0 < 0x51) {
                            temp_v1_3 = var_s0;
                            if (temp_a0 != 0x40) {

                            } else {
                                var_s0 += 8;
                                M2C_FIELD(temp_v1_3, s32 *, 0) = 0x06000000;
                                M2C_FIELD(temp_v1_3, M2C_UNK **, 4) = &D_80095C40;
                            }
                        } else {
                            temp_v1_4 = var_s0;
                            if (temp_a0 != 0x60) {

                            } else {
                                var_s0 += 8;
                                M2C_FIELD(temp_v1_4, s32 *, 0) = 0x06000000;
                                M2C_FIELD(temp_v1_4, M2C_UNK **, 4) = &D_80095C08;
                                D_8009C772 = (u8) temp_a0;
                            }
                        }
                    } else {
                        temp_v1_5 = var_s0;
                        var_s0 += 8;
                        M2C_FIELD(temp_v1_5, s32 *, 0) = 0x06000000;
                        M2C_FIELD(temp_v1_5, M2C_UNK **, 4) = &D_80095C70;
                        D_8009C772 = 0x40;
                    }
                } else {
                    temp_v1_6 = var_s0;
                    var_s0 += 8;
                    M2C_FIELD(temp_v1_6, s32 *, 0) = 0x06000000;
                    M2C_FIELD(temp_v1_6, M2C_UNK **, 4) = &D_80095BA0;
                }
            }
            var_s5 = 0;
            if (M2C_FIELD(arg0, u32 *, 0x14) != 0) {
                var_v1 = 0;
                do {
                    var_s5 += 1;
                    M2C_FIELD((var_v1 + M2C_FIELD(arg0, s32 *, 0x18)), s32 *, 0x4C) = 1;
                    var_v1 += 0xA0;
                } while (var_s5 < (u32) M2C_FIELD(arg0, u32 *, 0x14));
            }
            var_s5_2 = 0;
            if (M2C_FIELD(arg0, u32 *, 8) != 0) {
                var_s1_2 = 0;
                do {
                    temp_t4 = *(s32 *)(var_s1_2 + M2C_FIELD(arg0, s32 *, 0x28));
                    if (M2C_FIELD(((temp_t4 * 0xA0) + M2C_FIELD(arg0, s32 *, 0x18)), s32 *, 0x4C) != 0) {
                        func_80048C3C(arg0, temp_t4, arg1, arg2, arg3, arg4, arg5, arg6);
                    }
                    var_s5_2 += 1;
                    var_s1_2 += 0xC;
                } while (var_s5_2 < (u32) M2C_FIELD(arg0, u32 *, 8));
            }
            var_s5_3 = 0;
            if (M2C_FIELD(arg0, u32 *, 0x14) != 0) {
                var_s2 = spF0;
                var_s1_3 = 0x50;
                do {
                    temp_a1 = var_s2;
                    var_s2 += 0x40;
                    var_s5_3 += 1;
                    func_80066040(M2C_FIELD(arg0, s32 *, 0x18) + var_s1_3, temp_a1);
                    var_s1_3 += 0xA0;
                } while (var_s5_3 < (u32) M2C_FIELD(arg0, u32 *, 0x14));
            }
            spFE = 0xFFFF;
            var_s5_4 = 0;
            if (M2C_FIELD(arg0, u32 *, 8) != 0) {
                sp100 = 0;
                sp104 = 0;
                do {
                    temp_v0_3 = *(s32 *)(sp100 + M2C_FIELD(arg0, s32 *, 0x28));
                    temp_a1_2 = temp_v0_3 & 0xFFFF;
                    temp_v1_7 = var_s0;
                    if (temp_a1_2 != spFE) {
                        var_s0 += 8;
                        spFE = temp_v0_3;
                        var_a2 = 0;
                        var_a0 = &D_8009C730;
                        M2C_FIELD(temp_v1_7, s32 *, 0) = 0x01020040;
                        M2C_FIELD(&D_8009C770, s16 *, 0) = 0;
                        M2C_FIELD(temp_v1_7, s32 *, 4) = (s32) (spF0 + (temp_a1_2 << 6));
                        do {
                            temp_v1_8 = *var_a0;
                            var_a2 += 1;
                            if (temp_v1_8 != -1) {
                                *(s32 *)(D_8009C640 + temp_v1_8) = 0xFF;
                                *var_a0 = -1;
                            }
                            var_a0 += 2;
                        } while (var_a2 < 0x20);
                    }
                    temp_v1_9 = M2C_FIELD((sp100 + M2C_FIELD(arg0, s32 *, 0x28)), u16 *, 8);
                    if (temp_v1_9 < (u32) M2C_FIELD(arg0, u32 *, 0x10)) {
                        if (spF4 != 1) {
                            temp_s0_3 = var_s0 + 8;
                            temp_s0_4 = temp_s0_3 + 8;
                            spF4 = 1;
                            M2C_FIELD(var_s0, s32 *, 0) = 0xE7000000;
                            M2C_FIELD(var_s0, s32 *, 4) = 0;
                            M2C_FIELD(temp_s0_3, s32 *, 4) = 0x80008000;
                            M2C_FIELD(var_s0, s32 *, 8) = (s32) (0xBB000000 | 1);
                            if (D_8009C772 != 0x40) {
                                if ((s32) D_8009C772 < 0x41) {
                                    if (D_8009C772 != 0x30) {
                                        var_s0_2 = temp_s0_4 + 8;
                                        goto block_56;
                                    }
                                    goto block_54;
                                }
                                if (D_8009C772 != 0x50) {
                                    var_s0_2 = temp_s0_4 + 8;
block_56:
                                    var_s0 = var_s0_2 + 8;
                                    M2C_FIELD(temp_s0_4, s32 *, 0) = 0xFC127E24;
                                    M2C_FIELD(temp_s0_4, s32 *, 4) = -0xC07;
                                    M2C_FIELD(var_s0_2, s32 *, 0) = 0xB7000000;
                                    M2C_FIELD(var_s0_2, s32 *, 4) = 0x21205;
                                } else {
                                    var_s0 = temp_s0_4 + 8;
                                    M2C_FIELD(temp_s0_3, s32 *, 8) = 0xB7000000;
                                    M2C_FIELD(temp_s0_4, s32 *, 4) = 0x21205;
                                }
                            } else {
block_54:
                                var_s0 = temp_s0_4 + 8;
                                M2C_FIELD(temp_s0_3, s32 *, 8) = 0xB6000000;
                                M2C_FIELD(temp_s0_4, s32 *, 4) = 1;
                            }
                        }
                        temp_v1_10 = (temp_v1_9 << 5) + M2C_FIELD(arg0, s32 *, 0x30);
                        temp_s2 = M2C_FIELD(temp_v1_10, u16 *, 0x1A);
                        temp_t7 = M2C_FIELD(temp_v1_10, u16 *, 0x18);
                        switch (temp_s2) {          /* switch 1; irregular */
                        case 0x4:                   /* switch 1 */
                            var_s7 = 2;
                            break;
                        case 0x10:                  /* switch 1 */
                            var_s7 = 4;
                            break;
                        case 0x40:                  /* switch 1 */
                            var_s7 = 6;
                            break;
                        case 0x100:                 /* switch 1 */
                            var_s7 = 8;
                            break;
                        case 0x8:                   /* switch 1 */
                            var_s7 = 3;
                            break;
                        case 0x20:                  /* switch 1 */
                            var_s7 = 5;
                            break;
                        case 0x80:                  /* switch 1 */
                            var_s7 = 7;
                            break;
                        }
                        temp_v1_11 = M2C_FIELD(((temp_v1_9 << 5) + M2C_FIELD(arg0, s32 *, 0x30)), u16 *, 0x1C);
                        switch (temp_v1_11) {       /* switch 2; irregular */
                        case 0x10:                  /* switch 2 */
                            if (temp_t7 != 0x20) {
                                if ((s32) temp_t7 < 0x21) {
                                    if (temp_t7 != 8) {
                                        if ((s32) temp_t7 < 9) {
                                            if (temp_t7 != 4) {
                                                var_s0_3 = var_s0 + 8;
                                            } else {
                                                var_s3 = 4;
                                                goto block_106;
                                            }
                                        } else if (temp_t7 != 0x10) {
                                            var_s0_3 = var_s0 + 8;
                                        } else {
                                            var_s3 = 6;
                                            goto block_106;
                                        }
                                    } else {
                                        var_s3 = 5;
                                        goto block_106;
                                    }
                                } else if (temp_t7 != 0x80) {
                                    if ((s32) temp_t7 < 0x81) {
                                        if (temp_t7 != 0x40) {
                                            var_s0_3 = var_s0 + 8;
                                        } else {
                                            var_s3 = 8;
                                            goto block_106;
                                        }
                                    } else if (temp_t7 != 0x100) {
                                        var_s0_3 = var_s0 + 8;
                                    } else {
                                        var_s3 = 0xA;
                                        goto block_106;
                                    }
                                } else {
                                    var_s3 = 9;
                                    goto block_106;
                                }
                            } else {
                                var_s3 = 7;
block_106:
                                var_s0_3 = var_s0 + 8;
                            }
                            temp_s0_5 = var_s0_3 + 8;
                            temp_s0_6 = temp_s0_5 + 8;
                            temp_s0_7 = temp_s0_6 + 8;
                            temp_s0_8 = temp_s0_7 + 8;
                            temp_s0_9 = temp_s0_8 + 8;
                            M2C_FIELD(var_s0, s32 *, 0) = 0xBA000E02;
                            M2C_FIELD(var_s0, s32 *, 4) = 0x8000;
                            M2C_FIELD(var_s0_3, s32 *, 0) = 0xFD100000;
                            temp_s1 = temp_v1_9 << 5;
                            M2C_FIELD(var_s0_3, s32 *, 4) = (s32) M2C_FIELD((temp_s1 + M2C_FIELD(arg0, s32 *, 0x30)), s32 *, 0x14);
                            M2C_FIELD(var_s0_3, s32 *, 8) = 0xE8000000;
                            M2C_FIELD(temp_s0_5, s32 *, 4) = 0;
                            M2C_FIELD(temp_s0_5, s32 *, 8) = 0xF5000100;
                            M2C_FIELD(temp_s0_6, s32 *, 4) = 0x07000000;
                            M2C_FIELD(temp_s0_6, s32 *, 8) = 0xE6000000;
                            M2C_FIELD(temp_s0_7, s32 *, 4) = 0;
                            M2C_FIELD(temp_s0_7, s32 *, 8) = 0xF0000000;
                            M2C_FIELD(temp_s0_8, s32 *, 4) = 0x0703C000;
                            M2C_FIELD(temp_s0_8, s32 *, 8) = 0xE7000000;
                            M2C_FIELD(temp_s0_9, s32 *, 4) = 0;
                            temp_s0_10 = temp_s0_9 + 8;
                            if (M2C_FIELD(arg0, s32 *, 0) == 0) {
                                temp_s0_11 = temp_s0_10 + 8;
                                temp_s0_12 = temp_s0_11 + 8;
                                temp_s0_13 = temp_s0_12 + 8;
                                temp_s0_14 = temp_s0_13 + 8;
                                temp_s0_15 = temp_s0_14 + 8;
                                temp_a2 = temp_t7 * 4;
                                temp_a0_2 = temp_a2 >> 1;
                                temp_s0_16 = temp_s0_15 + 8;
                                var_s0 = temp_s0_16 + 8;
                                temp_a0_3 = (((s32) (temp_a0_2 + 7) >> 3) & 0x1FF) << 9;
                                temp_a3 = (var_s7 & 0xF) << 0xE;
                                M2C_FIELD(temp_s0_9, s32 *, 8) = (s32) (((temp_a0_2 - 1) & 0xFFF) | 0xFD480000);
                                temp_t0 = (var_s3 & 0xF) * 0x10;
                                temp_a2_2 = temp_a2 - 1;
                                M2C_FIELD(temp_s0_10, s32 *, 4) = (s32) M2C_FIELD((temp_s1 + M2C_FIELD(arg0, s32 *, 0x30)), s32 *, 0x10);
                                M2C_FIELD(temp_s0_10, s32 *, 8) = (s32) (temp_a0_3 | 0xF5480000);
                                M2C_FIELD(temp_s0_11, s32 *, 4) = (s32) (temp_a3 | (temp_t0 | 0x07000000));
                                M2C_FIELD(temp_s0_11, s32 *, 8) = 0xE6000000;
                                M2C_FIELD(temp_s0_12, s32 *, 4) = 0;
                                M2C_FIELD(temp_s0_12, s32 *, 8) = 0xF4000000;
                                temp_a1_3 = ((temp_s2 - 1) * 4) & 0xFFF;
                                M2C_FIELD(temp_s0_13, s32 *, 4) = (s32) ((((temp_a2_2 * 2) & 0xFFF) << 0xC) | (temp_a1_3 | 0x07000000));
                                M2C_FIELD(temp_s0_13, s32 *, 8) = 0xE7000000;
                                M2C_FIELD(temp_s0_14, s32 *, 4) = 0;
                                M2C_FIELD(temp_s0_14, s32 *, 8) = (s32) (temp_a0_3 | 0xF5400000);
                                M2C_FIELD(temp_s0_15, s32 *, 4) = (s32) (temp_a3 | temp_t0);
                                M2C_FIELD(temp_s0_15, s32 *, 8) = 0xF2000000;
                                M2C_FIELD(temp_s0_16, s32 *, 4) = (s32) ((((temp_a2_2 * 4) & 0xFFF) << 0xC) | temp_a1_3);
                            } else {
                                temp_s0_17 = temp_s0_10 + 8;
                                temp_s0_18 = temp_s0_17 + 8;
                                temp_s0_19 = temp_s0_18 + 8;
                                temp_s0_20 = temp_s0_19 + 8;
                                temp_s0_21 = temp_s0_20 + 8;
                                temp_s0_22 = temp_s0_21 + 8;
                                temp_a2_3 = temp_t7 * 4;
                                temp_a0_4 = temp_a2_3 >> 1;
                                var_s0 = temp_s0_22 + 8;
                                M2C_FIELD(temp_s0_9, s32 *, 8) = (s32) (((temp_a0_4 - 1) & 0xFFF) | 0xFD480000);
                                temp_a0_5 = (((s32) (temp_a0_4 + 7) >> 3) & 0x1FF) << 9;
                                temp_a2_4 = temp_a2_3 - 1;
                                M2C_FIELD(temp_s0_10, s32 *, 4) = (s32) M2C_FIELD((temp_s1 + M2C_FIELD(arg0, s32 *, 0x30)), s32 *, 0x10);
                                M2C_FIELD(temp_s0_10, s32 *, 8) = (s32) (temp_a0_5 | 0xF5480000);
                                M2C_FIELD(temp_s0_17, s32 *, 4) = 0x07080200;
                                M2C_FIELD(temp_s0_17, s32 *, 8) = 0xE6000000;
                                M2C_FIELD(temp_s0_18, s32 *, 4) = 0;
                                M2C_FIELD(temp_s0_18, s32 *, 8) = 0xF4000000;
                                temp_a1_4 = ((temp_s2 - 1) * 4) & 0xFFF;
                                M2C_FIELD(temp_s0_19, s32 *, 4) = (s32) ((((temp_a2_4 * 2) & 0xFFF) << 0xC) | (temp_a1_4 | 0x07000000));
                                M2C_FIELD(temp_s0_19, s32 *, 8) = 0xE7000000;
                                M2C_FIELD(temp_s0_20, s32 *, 4) = 0;
                                M2C_FIELD(temp_s0_20, s32 *, 8) = (s32) (temp_a0_5 | 0xF5400000);
                                M2C_FIELD(temp_s0_21, s32 *, 4) = 0x80200;
                                M2C_FIELD(temp_s0_21, s32 *, 8) = 0xF2000000;
                                M2C_FIELD(temp_s0_22, s32 *, 4) = (s32) ((((temp_a2_4 * 4) & 0xFFF) << 0xC) | temp_a1_4);
                            }
                            break;
                        case 0x100:                 /* switch 2 */
                            if (temp_t7 != 0x20) {
                                if ((s32) temp_t7 < 0x21) {
                                    if (temp_t7 != 8) {
                                        if ((s32) temp_t7 < 9) {
                                            if (temp_t7 != 4) {
                                                var_s0_4 = var_s0 + 8;
                                            } else {
                                                var_s3 = 3;
                                                goto block_131;
                                            }
                                        } else if (temp_t7 != 0x10) {
                                            var_s0_4 = var_s0 + 8;
                                        } else {
                                            var_s3 = 5;
                                            goto block_131;
                                        }
                                    } else {
                                        var_s3 = 4;
                                        goto block_131;
                                    }
                                } else if (temp_t7 != 0x80) {
                                    if ((s32) temp_t7 < 0x81) {
                                        if (temp_t7 != 0x40) {
                                            var_s0_4 = var_s0 + 8;
                                        } else {
                                            var_s3 = 7;
                                            goto block_131;
                                        }
                                    } else if (temp_t7 != temp_v1_11) {
                                        var_s0_4 = var_s0 + 8;
                                    } else {
                                        var_s3 = 9;
                                        goto block_131;
                                    }
                                } else {
                                    var_s3 = 8;
                                    goto block_131;
                                }
                            } else {
                                var_s3 = 6;
block_131:
                                var_s0_4 = var_s0 + 8;
                            }
                            temp_s0_23 = var_s0_4 + 8;
                            temp_s0_24 = temp_s0_23 + 8;
                            temp_s0_25 = temp_s0_24 + 8;
                            temp_s0_26 = temp_s0_25 + 8;
                            temp_s0_27 = temp_s0_26 + 8;
                            M2C_FIELD(var_s0, s32 *, 0) = 0xBA000E02;
                            M2C_FIELD(var_s0, s32 *, 4) = 0x8000;
                            M2C_FIELD(var_s0_4, s32 *, 0) = 0xFD100000;
                            temp_s1_2 = temp_v1_9 << 5;
                            M2C_FIELD(var_s0_4, s32 *, 4) = (s32) M2C_FIELD((temp_s1_2 + M2C_FIELD(arg0, s32 *, 0x30)), s32 *, 0x14);
                            M2C_FIELD(var_s0_4, s32 *, 8) = 0xE8000000;
                            M2C_FIELD(temp_s0_23, s32 *, 4) = 0;
                            M2C_FIELD(temp_s0_23, s32 *, 8) = 0xF5000100;
                            M2C_FIELD(temp_s0_24, s32 *, 4) = 0x07000000;
                            M2C_FIELD(temp_s0_24, s32 *, 8) = 0xE6000000;
                            M2C_FIELD(temp_s0_25, s32 *, 4) = 0;
                            M2C_FIELD(temp_s0_25, s32 *, 8) = 0xF0000000;
                            M2C_FIELD(temp_s0_26, s32 *, 4) = 0x073FC000;
                            M2C_FIELD(temp_s0_26, s32 *, 8) = 0xE7000000;
                            M2C_FIELD(temp_s0_27, s32 *, 4) = 0;
                            temp_s0_28 = temp_s0_27 + 8;
                            if (M2C_FIELD(arg0, s32 *, 0) == 0) {
                                temp_s0_29 = temp_s0_28 + 8;
                                temp_s0_30 = temp_s0_29 + 8;
                                temp_s0_31 = temp_s0_30 + 8;
                                temp_s0_32 = temp_s0_31 + 8;
                                temp_s0_33 = temp_s0_32 + 8;
                                temp_a0_6 = temp_t7 * 2;
                                temp_a1_5 = temp_a0_6 - 1;
                                temp_s0_34 = temp_s0_33 + 8;
                                var_s0 = temp_s0_34 + 8;
                                temp_a3_2 = (var_s3 & 0xF) * 0x10;
                                temp_a1_6 = ((temp_a1_5 * 4) & 0xFFF) << 0xC;
                                M2C_FIELD(temp_s0_27, s32 *, 8) = (s32) ((temp_a1_5 & 0xFFF) | 0xFD480000);
                                temp_v1_12 = ((temp_s2 - 1) * 4) & 0xFFF;
                                M2C_FIELD(temp_s0_28, s32 *, 4) = (s32) M2C_FIELD((temp_s1_2 + M2C_FIELD(arg0, s32 *, 0x30)), s32 *, 0x10);
                                temp_a0_7 = ((((s32) (temp_a0_6 + 7) >> 3) & 0x1FF) << 9) | 0xF5480000;
                                temp_a2_5 = (var_s7 & 0xF) << 0xE;
                                M2C_FIELD(temp_s0_28, s32 *, 8) = temp_a0_7;
                                M2C_FIELD(temp_s0_29, s32 *, 4) = (s32) (temp_a2_5 | (temp_a3_2 | 0x07000000));
                                M2C_FIELD(temp_s0_29, s32 *, 8) = 0xE6000000;
                                M2C_FIELD(temp_s0_30, s32 *, 4) = 0;
                                M2C_FIELD(temp_s0_30, s32 *, 8) = 0xF4000000;
                                M2C_FIELD(temp_s0_31, s32 *, 4) = (s32) (temp_a1_6 | (temp_v1_12 | 0x07000000));
                                M2C_FIELD(temp_s0_31, s32 *, 8) = 0xE7000000;
                                M2C_FIELD(temp_s0_32, s32 *, 4) = 0;
                                M2C_FIELD(temp_s0_32, s32 *, 8) = temp_a0_7;
                                M2C_FIELD(temp_s0_33, s32 *, 4) = (s32) (temp_a2_5 | temp_a3_2);
                                M2C_FIELD(temp_s0_33, s32 *, 8) = 0xF2000000;
                                M2C_FIELD(temp_s0_34, s32 *, 4) = (s32) (temp_a1_6 | temp_v1_12);
                            } else {
                                temp_s0_35 = temp_s0_28 + 8;
                                temp_s0_36 = temp_s0_35 + 8;
                                temp_s0_37 = temp_s0_36 + 8;
                                temp_s0_38 = temp_s0_37 + 8;
                                temp_s0_39 = temp_s0_38 + 8;
                                temp_s0_40 = temp_s0_39 + 8;
                                temp_a0_8 = temp_t7 * 2;
                                temp_a1_7 = temp_a0_8 - 1;
                                var_s0 = temp_s0_40 + 8;
                                temp_a1_8 = ((temp_a1_7 * 4) & 0xFFF) << 0xC;
                                M2C_FIELD(temp_s0_27, s32 *, 8) = (s32) ((temp_a1_7 & 0xFFF) | 0xFD480000);
                                temp_v1_13 = ((temp_s2 - 1) * 4) & 0xFFF;
                                M2C_FIELD(temp_s0_28, s32 *, 4) = (s32) M2C_FIELD((temp_s1_2 + M2C_FIELD(arg0, s32 *, 0x30)), s32 *, 0x10);
                                temp_a0_9 = ((((s32) (temp_a0_8 + 7) >> 3) & 0x1FF) << 9) | 0xF5480000;
                                M2C_FIELD(temp_s0_28, s32 *, 8) = temp_a0_9;
                                M2C_FIELD(temp_s0_35, s32 *, 4) = 0x07080200;
                                M2C_FIELD(temp_s0_35, s32 *, 8) = 0xE6000000;
                                M2C_FIELD(temp_s0_36, s32 *, 4) = 0;
                                M2C_FIELD(temp_s0_36, s32 *, 8) = 0xF4000000;
                                M2C_FIELD(temp_s0_37, s32 *, 4) = (s32) (temp_a1_8 | (temp_v1_13 | 0x07000000));
                                M2C_FIELD(temp_s0_37, s32 *, 8) = 0xE7000000;
                                M2C_FIELD(temp_s0_38, s32 *, 4) = 0;
                                M2C_FIELD(temp_s0_38, s32 *, 8) = temp_a0_9;
                                M2C_FIELD(temp_s0_39, s32 *, 4) = 0x80200;
                                M2C_FIELD(temp_s0_39, s32 *, 8) = 0xF2000000;
                                M2C_FIELD(temp_s0_40, s32 *, 4) = (s32) (temp_a1_8 | temp_v1_13);
                            }
                            break;
                        default:                    /* switch 2 */
                            switch (temp_t7) {      /* switch 3; irregular */
                            case 0x4:               /* switch 3 */
                                var_s3 = 2;
                                break;
                            case 0x8:               /* switch 3 */
                                var_s3 = 3;
                                break;
                            case 0x10:              /* switch 3 */
                                var_s3 = 4;
                                break;
                            case 0x20:              /* switch 3 */
                                var_s3 = 5;
                                break;
                            case 0x40:              /* switch 3 */
                                var_s3 = 6;
                                break;
                            case 0x80:              /* switch 3 */
                                var_s3 = 7;
                                break;
                            case 0x100:             /* switch 3 */
                                var_s3 = 8;
                                break;
                            }
                            M2C_FIELD(var_s0, s32 *, 0) = 0xBA000E02;
                            M2C_FIELD(var_s0, s32 *, 4) = 0;
                            temp_s0_41 = var_s0 + 8;
                            if (M2C_FIELD(arg0, s32 *, 0) == 0) {
                                temp_a0_10 = temp_s0_41;
                                temp_s0_42 = temp_s0_41 + 8;
                                temp_t0_2 = temp_s0_42;
                                temp_s0_43 = temp_s0_42 + 8;
                                temp_t1 = temp_s0_43;
                                temp_s0_44 = temp_s0_43 + 8;
                                temp_t3 = temp_s0_44;
                                temp_s0_45 = temp_s0_44 + 8;
                                temp_t4_2 = temp_s0_45;
                                temp_s0_46 = temp_s0_45 + 8;
                                temp_t5 = temp_s0_46;
                                temp_s0_47 = temp_s0_46 + 8;
                                temp_a1_9 = temp_t7 - 1;
                                M2C_FIELD(var_s0, s32 *, 8) = (s32) ((temp_a1_9 & 0xFFF) | 0xFD500000);
                                temp_t2 = temp_s0_47;
                                var_s0 = temp_s0_47 + 8;
                                temp_a2_6 = (var_s7 & 0xF) << 0xE;
                                temp_a3_3 = (var_s3 & 0xF) * 0x10;
                                temp_a1_10 = ((temp_a1_9 * 4) & 0xFFF) << 0xC;
                                M2C_FIELD(temp_a0_10, s32 *, 4) = (s32) M2C_FIELD(((temp_v1_9 << 5) + M2C_FIELD(arg0, s32 *, 0x30)), s32 *, 0x10);
                                temp_v1_14 = ((((s32) ((temp_t7 * 2) + 7) >> 3) & 0x1FF) << 9) | 0xF5500000;
                                M2C_FIELD(temp_t0_2, s32 *, 0) = temp_v1_14;
                                M2C_FIELD(temp_t0_2, s32 *, 4) = (s32) (temp_a2_6 | (temp_a3_3 | 0x07000000));
                                temp_a0_11 = ((temp_s2 - 1) * 4) & 0xFFF;
                                M2C_FIELD(temp_t1, s32 *, 0) = 0xE6000000;
                                M2C_FIELD(temp_t1, s32 *, 4) = 0;
                                M2C_FIELD(temp_t3, s32 *, 0) = 0xF4000000;
                                M2C_FIELD(temp_t3, s32 *, 4) = (s32) (temp_a1_10 | (temp_a0_11 | 0x07000000));
                                M2C_FIELD(temp_t4_2, s32 *, 0) = 0xE7000000;
                                M2C_FIELD(temp_t4_2, s32 *, 4) = 0;
                                M2C_FIELD(temp_t5, s32 *, 0) = temp_v1_14;
                                M2C_FIELD(temp_t5, s32 *, 4) = (s32) (temp_a2_6 | temp_a3_3);
                                M2C_FIELD(temp_t2, s32 *, 0) = 0xF2000000;
                                M2C_FIELD(temp_t2, s32 *, 4) = (s32) (temp_a1_10 | temp_a0_11);
                            } else {
                                temp_s0_48 = temp_s0_41 + 8;
                                temp_s0_49 = temp_s0_48 + 8;
                                temp_s0_50 = temp_s0_49 + 8;
                                temp_s0_51 = temp_s0_50 + 8;
                                temp_s0_52 = temp_s0_51 + 8;
                                temp_s0_53 = temp_s0_52 + 8;
                                temp_a1_11 = temp_t7 - 1;
                                M2C_FIELD(var_s0, s32 *, 8) = (s32) ((temp_a1_11 & 0xFFF) | 0xFD500000);
                                var_s0 = temp_s0_53 + 8;
                                temp_a1_12 = ((temp_a1_11 * 4) & 0xFFF) << 0xC;
                                M2C_FIELD(temp_s0_41, s32 *, 4) = (s32) M2C_FIELD(((temp_v1_9 << 5) + M2C_FIELD(arg0, s32 *, 0x30)), s32 *, 0x10);
                                temp_v1_15 = ((((s32) ((temp_t7 * 2) + 7) >> 3) & 0x1FF) << 9) | 0xF5500000;
                                M2C_FIELD(temp_s0_41, s32 *, 8) = temp_v1_15;
                                M2C_FIELD(temp_s0_48, s32 *, 4) = 0x07080200;
                                temp_a0_12 = ((temp_s2 - 1) * 4) & 0xFFF;
                                M2C_FIELD(temp_s0_48, s32 *, 8) = 0xE6000000;
                                M2C_FIELD(temp_s0_49, s32 *, 4) = 0;
                                M2C_FIELD(temp_s0_49, s32 *, 8) = 0xF4000000;
                                M2C_FIELD(temp_s0_50, s32 *, 4) = (s32) (temp_a1_12 | (temp_a0_12 | 0x07000000));
                                M2C_FIELD(temp_s0_50, s32 *, 8) = 0xE7000000;
                                M2C_FIELD(temp_s0_51, s32 *, 4) = 0;
                                M2C_FIELD(temp_s0_51, s32 *, 8) = temp_v1_15;
                                M2C_FIELD(temp_s0_52, s32 *, 4) = 0x80200;
                                M2C_FIELD(temp_s0_52, s32 *, 8) = 0xF2000000;
                                M2C_FIELD(temp_s0_53, s32 *, 4) = (s32) (temp_a1_12 | temp_a0_12);
                            }
                            break;
                        }
                    } else {
                        if (spF4 != 0) {
                            temp_s0_54 = var_s0 + 8;
                            spF4 = 0;
                            M2C_FIELD(var_s0, s32 *, 0) = 0xE7000000;
                            M2C_FIELD(var_s0, s32 *, 4) = 0;
                            M2C_FIELD(var_s0, s32 *, 8) = 0xBB000000;
                            M2C_FIELD(temp_s0_54, s32 *, 4) = 0;
                            temp_s0_55 = temp_s0_54 + 8;
                            if (D_8009C772 != 0x40) {
                                if ((s32) D_8009C772 < 0x41) {
                                    if (D_8009C772 != 0x30) {
                                        var_s0_5 = temp_s0_55 + 8;
                                        goto block_168;
                                    }
                                    goto block_166;
                                }
                                if (D_8009C772 == 0x50) {
                                    goto block_166;
                                }
                                var_s0_5 = temp_s0_55 + 8;
block_168:
                                temp_s0_56 = var_s0_5 + 8;
                                var_s0 = temp_s0_56 + 8;
                                M2C_FIELD(temp_s0_55, s32 *, 0) = 0xFC323864;
                                M2C_FIELD(temp_s0_55, s32 *, 4) = 0xFF73FFFF;
                                M2C_FIELD(var_s0_5, s32 *, 0) = 0xB7000000;
                                M2C_FIELD(var_s0_5, s32 *, 4) = 0x21205;
                                M2C_FIELD(var_s0_5, s32 *, 8) = 0xE7000000;
                                M2C_FIELD(temp_s0_56, s32 *, 4) = 0;
                            } else {
block_166:
                                temp_s0_57 = temp_s0_55 + 8;
                                var_s0 = temp_s0_57 + 8;
                                M2C_FIELD(temp_s0_54, s32 *, 8) = 0xB6000000;
                                M2C_FIELD(temp_s0_55, s32 *, 4) = 1;
                                M2C_FIELD(temp_s0_55, s32 *, 8) = 0xB7000000;
                                M2C_FIELD(temp_s0_57, s32 *, 4) = 0x21204;
                            }
                        }
                        if (D_8009C772 != 0x40) {
                            temp_a2_7 = var_s0;
                            if (D_8009C772 != 0x50) {
                                var_s0 += 8;
                                temp_v0_4 = (M2C_FIELD((sp100 + M2C_FIELD(arg0, s32 *, 0x28)), u16 *, 6) * 0x14) + M2C_FIELD(arg0, s32 *, 0x60);
                                M2C_FIELD(temp_a2_7, s32 *, 0) = 0xFA000000;
                                M2C_FIELD(temp_a2_7, s32 *, 4) = (s32) ((M2C_FIELD(temp_v0_4, u8 *, 0xC) << 0x18) | ((M2C_FIELD(temp_v0_4, u8 *, 0xD) & 0xFF) << 0x10) | ((M2C_FIELD(temp_v0_4, u8 *, 0xE) & 0xFF) << 8) | 0xFF);
                            }
                        }
                    }
                    var_t4 = 0;
                    temp_v1_16 = sp100 + M2C_FIELD(arg0, s32 *, 0x28);
                    temp_t5_2 = *(s32 *)(sp104 + M2C_FIELD(arg0, s32 *, 0x58));
                    temp_s1_3 = (M2C_FIELD(temp_v1_16, u16 *, 2) / 3) & 0xFFFF;
                    var_t0 = M2C_FIELD(arg0, s32 *, 0x2C) + (M2C_FIELD(temp_v1_16, u16 *, 4) * 2);
                    if (temp_s1_3 != 0) {
                        sp108 = &sp60;
                        var_t3 = var_s0 - 4;
                        do {
                            temp_t0_3 = var_t0 + 2;
                            var_a2_2 = 0;
                            var_t2 = &sp68;
                            var_a3 = sp108;
                            var_t1 = var_s0 - 4;
                            sp60 = M2C_FIELD(var_t0, u16 *, 0);
                            sp62 = M2C_FIELD(var_t0, u16 *, 2);
                            temp_v0_5 = M2C_FIELD(temp_t0_3, u16 *, 2);
                            var_t0 = temp_t0_3 + 2 + 2;
                            sp64 = temp_v0_5;
loop_175:
                            temp_v0_6 = *(s32 *)(D_8009C640 + (*var_a3 + temp_t5_2));
                            if (temp_v0_6 == 0xFF) {
                                switch (var_a2_2) { /* switch 4; irregular */
                                case 1:             /* switch 4 */
                                    if (M2C_FIELD(&D_8009C770, s16 *, 0) == sp68) {
                                        M2C_FIELD(&D_8009C770, s16 *, 0) = (s16) (((u16) M2C_FIELD(&D_8009C770, s16 *, 0) + 1) & 0x1F);
                                    }
                                    break;
                                case 2:             /* switch 4 */
                                    if ((M2C_FIELD(&D_8009C770, s16 *, 0) == sp68) || (M2C_FIELD(&D_8009C770, s16 *, 0) == sp6A)) {
                                        do {
loop_187:
                                            temp_v0_7 = ((u16) M2C_FIELD(&D_8009C770, s16 *, 0) + 1) & 0x1F;
                                            M2C_FIELD(&D_8009C770, s16 *, 0) = temp_v0_7;
                                            if (temp_v0_7 == sp68) {
                                                goto loop_187;
                                            }
                                        } while (temp_v0_7 == sp6A);
                                    }
                                    break;
                                }
                                temp_v1_17 = (&D_8009C730)[M2C_FIELD(&D_8009C770, s16 *, 0)];
                                if (temp_v1_17 != -1) {
                                    *(s32 *)(D_8009C640 + temp_v1_17) = 0xFF;
                                }
                                var_t1 += 8;
                                var_t3 += 8;
                                var_s0 += 8;
                                temp_v0_8 = *var_a3 + temp_t5_2;
                                (&D_8009C730)[M2C_FIELD(&D_8009C770, s16 *, 0)] = temp_v0_8;
                                *(s32 *)(D_8009C640 + temp_v0_8) = M2C_FIELD(&D_8009C770, u8 *, 1);
                                temp_a0_13 = (u16) M2C_FIELD(&D_8009C770, s16 *, 0);
                                M2C_FIELD(var_t1, s32 *, -4) = (s32) ((((M2C_FIELD(&D_8009C770, s16 *, 0) * 2) & 0xFF) << 0x10) | 0x0400040F);
                                temp_v0_9 = temp_a0_13 + 1;
                                M2C_FIELD(&D_8009C770, s16 *, 0) = temp_v0_9;
                                M2C_FIELD(&D_8009C770, s16 *, 0) = (s16) (temp_v0_9 & 0x1F);
                                M2C_FIELD(var_t1, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) + (temp_t5_2 * 0x10) + (*var_a3 * 0x10));
                                *var_t2 = temp_a0_13;
                            } else {
                                *var_t2 = (u16) temp_v0_6;
                            }
                            var_t2 += 2;
                            var_a2_2 += 1;
                            var_a3 += 2;
                            if (var_a2_2 < 3) {
                                goto loop_175;
                            }
                            var_t3 += 8;
                            var_s0 += 8;
                            var_t4 += 1;
                            M2C_FIELD(var_t3, s32 *, -4) = 0xBF000000;
                            M2C_FIELD(var_t3, s32 *, 0) = (s32) ((((sp68 * 2) & 0xFF) << 0x10) | ((sp6A << 9) & 0xFE00) | ((sp6C * 2) & 0xFF));
                        } while (var_t4 < temp_s1_3);
                    }
                    sp100 += 0xC;
                    sp104 += 2;
                    var_s5_4 += 1;
                } while (var_s5_4 < (u32) M2C_FIELD(arg0, u32 *, 8));
            }
            var_a2_3 = 0;
            var_a0_2 = &D_8009C730;
            do {
                temp_v1_18 = *var_a0_2;
                var_a2_3 += 1;
                if (temp_v1_18 != -1) {
                    *(s32 *)(D_8009C640 + temp_v1_18) = 0xFF;
                }
                var_a0_2 += 2;
            } while (var_a2_3 < 0x20);
            D_8009CC60 = var_s0;
            temp_t9 = spF0 + (M2C_FIELD(arg0, u32 *, 0x14) << 6);
            spF0 = temp_t9;
            D_8009CD80 = temp_t9;
        }
    }
}

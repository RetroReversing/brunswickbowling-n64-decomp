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
extern int D_8008AB28;
extern int D_8008AB2C;
extern int D_8008AB40;
extern int D_8008AB3C;
extern int D_8008B3BC;
extern int D_8008B3E8;
u16 func_8002BE9C();
s16 func_8002BFC8();
s16 func_8002C8E8();
s32 func_8002DC00();
extern s32 D_8007DA44;
extern s32 D_8007E4E0;
extern void *D_80081AD0;
extern s16 D_80082D52;
extern s32 D_80089944;
extern void *D_8008ABD4;
extern char D_8008B3A4[];

void func_80019ACC(void *arg0) {
    u16 sp16;
    s16 temp_s0_2;
    s16 temp_s7;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_6;
    s16 var_s5;
    s16 var_s6;
    s32 temp_s0;
    s32 var_a0;
    s32 var_s1;
    s32 var_s2;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v1;
    u16 temp_a0;
    u16 temp_a0_2;
    u16 temp_a0_3;
    u16 temp_a0_4;
    u16 temp_v1;
    u16 temp_v1_3;
    u16 var_v0;
    u16 var_v0_4;
    void **temp_s4;
    void **var_s1_2;
    void *temp_a1;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v1_2;

    M2C_FIELD(arg0, u16 *, 0x14) = 0U;
    var_v0 = -1U;
    if (D_80089944 == 0) {
        if (D_8008AB10 != 0) {
            temp_a1 = M2C_FIELD((&D_80081AD0)[D_8007E4E0], void **, 0x44);
            var_a0 = 0;
            if ((D_8008AB14 != 0) || (D_8008AB18 != 0)) {
                var_a0 = 1;
            }
            if (var_a0 == 0) {
                var_v0_2 = M2C_FIELD(temp_a1, s32 *, 0x10C);
                if (var_v0_2 < 0) {
                    var_v0_2 += 3;
                }
                temp_a0 = M2C_FIELD(arg0, u16 *, 0x14) + (var_v0_2 >> 2);
                M2C_FIELD(arg0, u16 *, 0x14) = temp_a0;
                M2C_FIELD(arg0, u16 *, 0x14) = (u16) (temp_a0 + ((s32) M2C_FIELD(temp_a1, s32 *, 0x110) / (s32) (M2C_FIELD(D_8008ABD4, s32 *, 0x10) / 3)));
                return;
            }
            var_v0_3 = D_8008AB28;
            if (var_v0_3 < 0) {
                var_v0_3 += 3;
            }
            temp_a0_2 = M2C_FIELD(arg0, u16 *, 0x14) + (var_v0_3 >> 2);
            M2C_FIELD(arg0, u16 *, 0x14) = temp_a0_2;
            temp_v1 = temp_a0_2 + ((s32) D_8008AB2C / (s32) (M2C_FIELD(*(s32 *)(void * *)(D_8008AB10 + 0xC4), s32 *, 0x10) / 3));
            M2C_FIELD(arg0, u16 *, 0x14) = temp_v1;
            var_s1 = 0;
            if (D_8008AB18 != 0) {
                M2C_FIELD(arg0, u16 *, 0x14) = (u16) (temp_v1 + 1);
                if (func_8002DC00(&D_8008AB10, D_8007E4E0, &D_8008AB10) != 0) {
                    var_s1 = (u32) (D_8008AB40 ^ 1) > 0U;
                }
                if (var_s1 != 0) {
                    var_v1 = D_8008AB3C - 0xC;
                    if (var_v1 < 0) {
                        var_v1 = D_8008AB3C - 9;
                    }
                    var_v0 = M2C_FIELD(arg0, u16 *, 0x14) - (var_v1 >> 2);
                    goto block_61;
                }
            }
        } else {
            var_s5 = 0;
            var_s6 = 0x12C;
            var_s1_2 = &D_80081AD0;
            var_s2 = 0;
            temp_s4 = M2C_FIELD((&D_80081AD0)[D_8007E4E0], void ***, 0x44);
            temp_s0 = temp_s4 + 0xB8;
            temp_s7 = func_8002BFC8(temp_s0, 1, &D_8008AB10);
            temp_v1_2 = *temp_s4;
            temp_s0_2 = func_8002BFC8(temp_s0, 0);
            sp16 = func_8002BE9C(M2C_FIELD(temp_v1_2, s32 (**)(void *, s32), 0x44)(temp_s4 + M2C_FIELD(temp_v1_2, s16 *, 0x40), -1), D_80082D52, 0);
loop_19:
            if (var_s2 < D_8007DA44) {
                if (var_s2 != D_8007E4E0) {
                    temp_v0 = func_8002BFC8(M2C_FIELD(*var_s1_2, s32 *, 0x44) + 0xB8, 1);
                    if (var_s5 < temp_v0) {
                        var_s5 = temp_v0;
                    }
                    temp_v0_2 = func_8002BFC8(M2C_FIELD(*var_s1_2, s32 *, 0x44) + 0xB8, 0);
                    if (temp_v0_2 < var_s6) {
                        var_s6 = temp_v0_2;
                    }
                }
                var_s1_2 += 4;
                var_s2 += 1;
                goto loop_19;
            }
            if (D_8008B3BC != 0) {
                if (D_8008B3E8 >= 4) {
                    M2C_FIELD(arg0, u16 *, 0x14) += 1;
                }
                if (D_8008B3E8 >= 6) {
                    M2C_FIELD(arg0, u16 *, 0x14) += 1;
                }
            }
            temp_v0_3 = *temp_s4;
            if (M2C_FIELD(temp_v0_3, s32 (**)(void *), 0x3C)(temp_s4 + M2C_FIELD(temp_v0_3, s16 *, 0x38)) == 8) {
                temp_a0_3 = M2C_FIELD(arg0, u16 *, 0x14);
                M2C_FIELD(arg0, u16 *, 0x14) = (u16) (temp_a0_3 + 1);
                if (temp_s7 >= 0x118) {
                    M2C_FIELD(arg0, u16 *, 0x14) = (u16) (temp_a0_3 + 2);
                    if (temp_s7 == 0x12C) {
                        var_v0_4 = temp_a0_3 + 3;
                        goto block_52;
                    }
                } else if (temp_s7 < 0xA0) {
                    M2C_FIELD(arg0, u16 *, 0x14) = temp_a0_3;
                }
            } else {
                temp_v0_4 = *temp_s4;
                if (M2C_FIELD(temp_v0_4, s32 (**)(void *), 0x3C)(temp_s4 + M2C_FIELD(temp_v0_4, s16 *, 0x38)) == 9) {
                    var_v0_5 = temp_s7 < 0xA0;
                    if (temp_s7 >= 0x104) {
                        temp_v1_3 = M2C_FIELD(arg0, u16 *, 0x14);
                        M2C_FIELD(arg0, u16 *, 0x14) = (u16) (temp_v1_3 + 1);
                        if (temp_s7 >= 0x118) {
                            M2C_FIELD(arg0, u16 *, 0x14) = (u16) (temp_v1_3 + 2);
                            if (temp_s7 == 0x12C) {
                                var_v0_4 = temp_v1_3 + 3;
                                goto block_52;
                            }
                        }
                    } else {
                        goto block_50;
                    }
                } else {
                    temp_v0_5 = *temp_s4;
                    if (M2C_FIELD(temp_v0_5, s32 (**)(void *), 0x3C)(temp_s4 + M2C_FIELD(temp_v0_5, s16 *, 0x38)) == 0xA) {
                        var_v0_5 = temp_s7 < 0xA0;
                        if (temp_s7 >= 0xF0) {
                            temp_a0_4 = M2C_FIELD(arg0, u16 *, 0x14);
                            M2C_FIELD(arg0, u16 *, 0x14) = (u16) (temp_a0_4 + 1);
                            if ((temp_s7 >= 0x104) && (temp_s7 >= 0x118)) {
                                M2C_FIELD(arg0, u16 *, 0x14) = (u16) (temp_a0_4 + 2);
                                if (temp_s7 == 0x12C) {
                                    var_v0_4 = temp_a0_4 + 3;
                                    goto block_52;
                                }
                            }
                        } else {
block_50:
                            if (var_v0_5 != 0) {
                                var_v0_4 = M2C_FIELD(arg0, u16 *, 0x14) - 1;
block_52:
                                M2C_FIELD(arg0, u16 *, 0x14) = var_v0_4;
                            }
                        }
                    }
                }
            }
            temp_v0_6 = var_s5 - temp_s0_2;
            if ((D_8007DA44 >= 2) && (temp_v0_6 > 0)) {
                var_v0_6 = temp_s7 << 0x10;
                if (temp_v0_6 < 0x1E) {
                    var_v0_6 = temp_s7 << 0x10;
                    if (temp_v0_6 < (func_8002C8E8(temp_s4) * (s16) sp16)) {
                        M2C_FIELD(arg0, u16 *, 0x14) += 1;
                        var_v0_6 = temp_s7 << 0x10;
                    }
                }
                if (var_v0_6 < (var_s6 << 0x10)) {
                    var_v0 = M2C_FIELD(arg0, u16 *, 0x14) - 2;
                    goto block_61;
                }
            }
        }
    } else {
block_61:
        M2C_FIELD(arg0, u16 *, 0x14) = var_v0;
    }
}

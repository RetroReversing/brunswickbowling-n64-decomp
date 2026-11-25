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

extern int D_80092784;
extern float D_80092764;
extern unsigned short D_800827CA;
extern short D_800827CC;
extern short D_800827C8;
extern short D_800827CE;
extern short D_800827D0;
s32 func_80011C10();
s32 func_80016550();
s32 func_80016604();
s32 func_80016EF0();
s32 func_8001A318();
s32 func_80023254();
s32 func_8002D7E0();
s32 func_8002E4A8();
s32 func_8002E54C();
s32 func_80032558();
s32 func_8003FD68();
s32 func_800479A0(s32 *, f32);              /* extern */
s32 func_80047A68();
s32 func_80047B44();
s32 func_80057660();
extern f64 D_800744C8;
extern f64 D_800744D0;
extern f64 D_800744D8;
extern s32 D_8007E4E0;
extern char D_80081AD0[];
extern char D_800827A4[];
extern char D_80082DE0[];
extern s32 D_80082E60;
extern char D_80082E90[];
extern char D_80082ED0[];
extern s32 D_8008923C;
extern char D_800892F0[];
extern s32 D_80089308;
extern char D_8008AAA0[];
extern s32 D_8008AAB4;
extern s32 D_8008ABE0;
extern char D_8008B470[];
extern char D_8008E9B0[];
extern s32 D_8008E9E0;
extern s32 D_8008F09C;
extern char D_8009261C[];
extern char D_800926E8[];

s32 func_800185BC(void *arg0) {
    f64 sp10;
    f64 sp18;
    f64 temp_fv0;
    f64 temp_fv1;
    f64 temp_fv1_2;
    f64 temp_fv1_3;
    f64 temp_fv1_4;
    f64 var_fv0;
    f64 var_fv0_2;
    s16 temp_a0;
    s16 temp_v1;
    s16 var_v0;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s2;
    s32 var_s6;
    s32 var_v1;
    void **temp_v0;
    void **temp_v1_2;

    if (M2C_FIELD(arg0, s32 *, 0x40) != 0) {
        M2C_FIELD(arg0, s32 *, 0x40) = 0;
        func_8001A318(D_80082ED0);
    }
    var_s6 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x44) != 0) {
        if (M2C_FIELD(arg0, s32 *, 0x48) != 0) {
            if (D_8008AAB4 == 0) {
                M2C_FIELD(arg0, s32 *, 0x48) = 0;
                func_80023254(D_800892F0);
                return 1;
            }
            /* Duplicate return node #93. Try simplifying control flow for better match */
            return 1;
        }
        if (D_80089308 == 0) {
            func_80016550(D_800827A4, D_80082E90);
            return 2;
        }
        /* Duplicate return node #93. Try simplifying control flow for better match */
        return 1;
    }
    if (M2C_FIELD(arg0, s32 *, 0x48) != 0) {
        if (D_80089308 == 0) {
            M2C_FIELD(arg0, s32 *, 0x48) = 0;
            func_8002D7E0(D_8008AAA0);
        }
    }
    temp_s2 = func_8003FD68(D_8008E9B0, M2C_FIELD(*((D_8007E4E0 * 4) + D_80081AD0), u8 *, 0x2C), 0x202);
    temp_s1 = func_8003FD68(D_8008E9B0, M2C_FIELD(*((D_8007E4E0 * 4) + D_80081AD0), u8 *, 0x2C), 0x203);
    var_s0 = func_80016EF0(temp_s2, arg0 + 0x14, arg0 + 0x24);
    if (var_s0 != func_80016EF0(temp_s1, arg0 + 0x18, arg0 + 0x28)) {
        if (temp_s2 != temp_s1) {
            if ((u32) (D_8008E9E0 - D_80082E60) >= 0x1FU) {
                var_v1 = 0;
                D_80082E60 = D_8008E9E0;
                if (D_8008923C == 0) {
                    var_v1 = (u32) M2C_FIELD(*((D_8007E4E0 * 4) + D_80081AD0), u32 *, 0x24) > 0U;
                }
                if (var_v1 != 0) {
                    var_s0 = var_s0 == 0;
                }
                if (var_s0 != 0) {
                    func_8002E4A8(&D_8008ABE0, &D_80082E60);
                } else {
                    func_8002E54C(&D_8008ABE0, &D_80082E60);
                }
                M2C_FIELD(arg0, s32 *, 0x3C) = 1;
            }
        }
    }
    func_80011C10(*((D_8007E4E0 * 4) + D_80081AD0), D_8008F09C == 0, &sp10, &sp18);
    var_s2 = func_8003FD68(D_8008E9B0, M2C_FIELD(*((D_8007E4E0 * 4) + D_80081AD0), u8 *, 0x2C), 0x200);
    var_s0_2 = func_8003FD68(D_8008E9B0, M2C_FIELD(*((D_8007E4E0 * 4) + D_80081AD0), u8 *, 0x2C), 0x201);
    if (M2C_FIELD(arg0, s32 *, 0x34) != 0) {
        M2C_FIELD(arg0, s32 *, 0x34) = 0;
        var_s0_2 = 0;
        var_s2 = 1;
    } else if (M2C_FIELD(arg0, s32 *, 0x38) != 0) {
        M2C_FIELD(arg0, s32 *, 0x38) = 0;
        var_s2 = 0;
        var_s0_2 = 1;
    }
    if (M2C_FIELD(arg0, s32 *, 0x4C) == 0) {
        if (var_s2 != var_s0_2) {
            M2C_FIELD(arg0, s32 *, 0x50) = 0;
            if (M2C_FIELD(arg0, s16 *, 0x54) == 0) {
                func_80047A68(D_800926E8);
                M2C_FIELD(arg0, s16 *, 0x56) = 1;
            }
            if ((var_s2 != 0) && (sp10 <= M2C_FIELD(arg0, f64 *, 0x58))) {
                if (M2C_FIELD(arg0, s16 *, 0x54) <= 0) {
                    goto block_43;
                }
                goto block_47;
            }
            if ((var_s0_2 != 0) && (M2C_FIELD(arg0, f64 *, 0x58) <= sp18)) {
                if (M2C_FIELD(arg0, s16 *, 0x54) >= 0) {
                    M2C_FIELD(arg0, s16 *, 0x54) = 1;
                } else {
                    goto block_47;
                }
            } else {
                goto block_46;
            }
        } else if (M2C_FIELD(arg0, s32 *, 0x50) != 0) {
            if (M2C_FIELD(arg0, s16 *, 0x54) == 0) {
                temp_fv1 = M2C_FIELD(arg0, f64 *, 0x60);
                temp_fv0 = M2C_FIELD(arg0, f64 *, 0x58);
                if (temp_fv1 < temp_fv0) {
block_43:
                    M2C_FIELD(arg0, s16 *, 0x54) = -1;
                } else if (temp_fv0 < temp_fv1) {
                    M2C_FIELD(arg0, s16 *, 0x54) = 1;
                }
            }
        } else {
block_46:
            if (M2C_FIELD(arg0, s16 *, 0x54) != 0) {
block_47:
                var_s6 = 1;
            }
        }
    }
    if (M2C_FIELD(arg0, s16 *, 0x56) >= 0xE) {
        M2C_FIELD(arg0, s32 *, 0x4C) = 1;
    }
    if (var_s6 != 0) {
        temp_s1_2 = ((0xE - M2C_FIELD(arg0, s16 *, 0x56)) * 2) + 1;
        var_s0_3 = 0;
        if (temp_s1_2 > 0) {
            do {
                var_s0_3 += 1;
                M2C_FIELD(arg0, s16 *, 0x56) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x56) + 1);
                func_80047B44(D_800926E8);
            } while (var_s0_3 < temp_s1_2);
        }
        M2C_FIELD(arg0, s32 *, 0x4C) = 1;
    }
    if (M2C_FIELD(arg0, s16 *, 0x54) != 0) {
        func_80047B44(D_800926E8);
        temp_fv1_2 = *(((0xE - func_80057660(M2C_FIELD(arg0, s16 *, 0x56) - 0xE)) * 8) + D_80082DE0);
        if (M2C_FIELD(arg0, s16 *, 0x54) > 0) {
            M2C_FIELD(arg0, f64 *, 0x58) += temp_fv1_2;
            if ((M2C_FIELD(arg0, s32 *, 0x4C) == 0) && (M2C_FIELD(arg0, s32 *, 0x50) == 0)) {
                var_fv0 = M2C_FIELD(arg0, f64 *, 0x60) + (2.0 * temp_fv1_2);
                goto block_63;
            }
        } else {
            M2C_FIELD(arg0, f64 *, 0x58) -= temp_fv1_2;
            if ((M2C_FIELD(arg0, s32 *, 0x4C) == 0) && (M2C_FIELD(arg0, s32 *, 0x50) == 0)) {
                var_fv0 = M2C_FIELD(arg0, f64 *, 0x60) - (2.0 * temp_fv1_2);
block_63:
                M2C_FIELD(arg0, f64 *, 0x60) = var_fv0;
            }
        }
        temp_v1 = M2C_FIELD(arg0, s16 *, 0x54);
        M2C_FIELD(arg0, s16 *, 0x56) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x56) + 1);
        if ((temp_v1 != 0) && (M2C_FIELD(arg0, s32 *, 0x50) != 0)) {
            if ((temp_v1 >= 0) || !(M2C_FIELD(arg0, f64 *, 0x58) < M2C_FIELD(arg0, f64 *, 0x60))) {
                if (temp_v1 > 0) {
                    if (M2C_FIELD(arg0, f64 *, 0x60) < M2C_FIELD(arg0, f64 *, 0x58)) {
                        goto block_70;
                    }
                }
            } else {
block_70:
                temp_fv1_3 = M2C_FIELD(arg0, f64 *, 0x58);
                var_fv0_2 = sp10;
                M2C_FIELD(arg0, s32 *, 0x50) = 0;
                if ((temp_fv1_3 < var_fv0_2) || (var_fv0_2 = sp18, (var_fv0_2 < temp_fv1_3))) {
                    M2C_FIELD(arg0, f64 *, 0x58) = var_fv0_2;
                }
                M2C_FIELD(arg0, f64 *, 0x60) = (f64) M2C_FIELD(arg0, f64 *, 0x58);
            }
        }
        D_80092784 = 1;
        D_80092764 = (f32) (M2C_FIELD(arg0, f64 *, 0x58) * D_800744C8);
        D_800827CA = (u16) (s32) ((M2C_FIELD(arg0, f64 *, 0x60) * D_800744C8 * D_800744D0) + D_800744D8);
        M2C_FIELD(arg0, s32 *, 0x3C) = 1;
        if (M2C_FIELD(arg0, s16 *, 0x56) >= 0x1C) {
            M2C_FIELD(arg0, s32 *, 0x4C) = 0;
            M2C_FIELD(arg0, s16 *, 0x54) = 0;
            M2C_FIELD(arg0, s16 *, 0x56) = 0;
            if (M2C_FIELD(arg0, s32 *, 0x50) == 0) {
                temp_fv1_4 = M2C_FIELD(arg0, f64 *, 0x58);
                M2C_FIELD(arg0, f64 *, 0x60) = temp_fv1_4;
                D_800827CA = (u16) (s32) ((temp_fv1_4 * D_800744C8 * D_800744D0) + D_800744D8);
                M2C_FIELD(arg0, s32 *, 0x3C) = 1;
            }
            func_80047A68(D_800926E8, D_800827A4);
        }
    }
    temp_s2_2 = func_8003FD68(D_8008E9B0, M2C_FIELD(*((D_8007E4E0 * 4) + D_80081AD0), u8 *, 0x2C), 0x204);
    temp_s1_3 = func_8003FD68(D_8008E9B0, M2C_FIELD(*((D_8007E4E0 * 4) + D_80081AD0), u8 *, 0x2C), 0x205);
    temp_s0 = func_80016EF0(temp_s2_2, arg0 + 0x1C, arg0 + 0x2C);
    if ((temp_s0 != func_80016EF0(temp_s1_3, arg0 + 0x20, arg0 + 0x30)) && (temp_s2_2 != temp_s1_3)) {
        if (temp_s0 != 0) {
            if ((D_800827CC - 5) >= 2) {
                var_v0 = (u16) D_800827CC - 5;
                goto block_85;
            }
        } else {
            var_v0 = (u16) D_800827CC + 5;
            if ((D_800827CC + 5) < 0x19D) {
block_85:
                D_800827CC = var_v0;
            }
        }
        func_800479A0(D_8009261C, (f32) D_800827CC);
        M2C_FIELD(arg0, s32 *, 0x3C) = 1;
    }
    if (M2C_FIELD(arg0, s32 *, 0x3C) != 0) {
        temp_a0 = (D_8008ABE0 * 0x3E8) / 34;
        D_800827C8 = temp_a0;
        temp_v1_2 = (D_8007E4E0 * 4) + D_80081AD0;
        if (M2C_FIELD(*temp_v1_2, s32 *, 0x24) == 0) {
            D_800827C8 = (s16) -temp_a0;
        }
        D_800827CE = (s16) M2C_FIELD(*temp_v1_2, u8 *, 0x20);
        D_800827D0 = (s16) M2C_FIELD(*temp_v1_2, u8 *, 0x1F);
        func_80032558(D_8008B470, D_800827A4 + 0x20, 0);
        M2C_FIELD(arg0, s32 *, 0x3C) = 0;
        func_80016604(D_800827A4);
        temp_v0 = (D_8007E4E0 * 4) + D_80081AD0;
        M2C_FIELD(*temp_v0, s16 *, 0x58) = (s16) D_8008ABE0;
        M2C_FIELD(*temp_v0, u16 *, 0x54) = (u16) D_800827CA;
        M2C_FIELD(*temp_v0, u16 *, 0x56) = (u16) D_800827CC;
    }
    return 1;
}

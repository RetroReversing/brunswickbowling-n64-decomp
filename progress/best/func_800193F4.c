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

extern short D_80083978;
extern short D_8008397A;
extern int D_8008397C;
extern int D_8008AAB4;
extern signed char D_800827C2;
s32 func_80016550();
s32 func_80019090();
s32 func_8001A318();
s32 func_8001FBC0();
s32 func_8001FBDC();
s32 func_8001FC78();
s32 func_8002D814();
s32 func_80036980();
s32 func_80047A68();
s32 func_80047B44();
extern s32 D_8007E4E0;
extern char D_80081AD0[];
extern char D_800827A4[];
extern s8 D_80082D58;
extern s32 D_80082D60;
extern s32 D_80082EB8;
extern s32 D_80082EC0;
extern char D_80082ED0[];
extern char D_80082F00[];
extern char D_80083950[];
extern char D_8008AAA0[];
extern u32 D_8008E9E0;
extern char D_800926E8[];

s32 func_800193F4(void *arg0) {
    s16 temp_a0_2;
    s16 temp_a1_2;
    s16 temp_v0_3;
    s16 temp_v1;
    s16 var_v0;
    s32 temp_v0;
    s32 var_s2;
    u16 temp_v0_2;
    u32 temp_a1;
    void *temp_a0;
    void *temp_v1_2;

    if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        if ((M2C_FIELD(*((D_8007E4E0 * 4) + D_80081AD0), u8 *, 0x18) ^ 1) != 0) {
            func_8001A318(D_80082ED0);
        }
    } else if ((M2C_FIELD(*((D_8007E4E0 * 4) + D_80081AD0), u8 *, 0x18) ^ 1) == 0) {
        temp_v0 = D_80082EC0 - 1;
        if (D_80082EC0 != 0) {
            D_80082EC0 = temp_v0;
            if (temp_v0 == 0) {
                func_80036980();
                D_80082D60 = 1;
            }
        }
    }
    if ((M2C_FIELD(*((D_8007E4E0 * 4) + D_80081AD0), u8 *, 0x18) ^ 1) == 0) {
        if (D_80083978 != D_8008397A) {
            D_80082D60 = 0;
            D_80082D58 = 1;
            if (D_80082EB8 != 0) {
                func_80047A68(D_800926E8);
                D_80082EB8 = 0;
            } else {
                var_s2 = func_80047B44(D_800926E8);
            }
        } else {
            D_80082EB8 = 1;
            var_s2 = 0;
        }
        if (D_8008397C == 0) {
            if (M2C_FIELD(arg0, s16 *, 0x20) >= 2) {
                if (var_s2 != 0) {
                    goto block_38;
                }
                goto block_39;
            }
            temp_v0_2 = M2C_FIELD(arg0, u16 *, 0x22) + 4;
            M2C_FIELD(arg0, u16 *, 0x22) = temp_v0_2;
            if ((s16) temp_v0_2 >= 0xA0) {
                M2C_FIELD(arg0, u16 *, 0x22) = 0x9FU;
            }
            func_8001FBDC(D_80083950, M2C_FIELD(arg0, s16 *, 0x20), (s16) M2C_FIELD(arg0, u16 *, 0x22));
            temp_v1 = M2C_FIELD(arg0, s16 *, 0x20);
            temp_a1 = M2C_FIELD((arg0 + (temp_v1 * 4)), u32 *, 0x14);
            if (temp_a1 != 0) {
                temp_a0 = arg0 + (temp_v1 * 2);
                if (M2C_FIELD(temp_a0, s16 *, 0x24) == -1) {
                    if (temp_a1 < (u32) D_8008E9E0) {
                        var_v0 = M2C_FIELD(arg0, u16 *, 0x22) - 3;
                    } else {
                        var_v0 = M2C_FIELD(arg0, u16 *, 0x22) - 1;
                    }
                    M2C_FIELD(temp_a0, s16 *, 0x24) = var_v0;
                    temp_a1_2 = M2C_FIELD(arg0, s16 *, 0x20);
                    func_8001FC78(D_80083950, temp_a1_2, M2C_FIELD((arg0 + (temp_a1_2 * 2)), s16 *, 0x24));
                }
            }
            temp_a0_2 = (s16) M2C_FIELD(arg0, u16 *, 0x22);
            if (temp_a0_2 == 0x9F) {
                temp_v1_2 = arg0 + (M2C_FIELD(arg0, s16 *, 0x20) * 2);
                if (M2C_FIELD(temp_v1_2, s16 *, 0x24) < 0) {
                    M2C_FIELD(temp_v1_2, s16 *, 0x24) = temp_a0_2;
                }
                temp_v0_3 = (u16) M2C_FIELD(arg0, s16 *, 0x20) + 1;
                M2C_FIELD(arg0, s16 *, 0x20) = temp_v0_3;
                if (temp_v0_3 < 2) {
                    M2C_FIELD(arg0, u16 *, 0x22) = 0U;
                } else {
                    func_8001FBC0(D_80083950);
                    func_80019090();
                    M2C_FIELD(arg0, u16 *, 0x22) = 0U;
                }
block_39:
            }
            /* Duplicate return node #40. Try simplifying control flow for better match */
            return 1;
        }
        /* Duplicate return node #40. Try simplifying control flow for better match */
        return 1;
    }
    if (D_8008AAB4 == 0) {
        if (D_80082EB8 != 0) {
            D_80082EB8 = 0;
            func_80047A68(D_800926E8);
        }
        if (func_80047B44(D_800926E8) != 0) {
            func_8002D814(D_8008AAA0);
block_38:
            D_800827C2 = 0;
            func_80016550(D_800827A4, D_80082F00);
            return 2;
        }
        /* Duplicate return node #40. Try simplifying control flow for better match */
        return 1;
    }
    return 1;
}

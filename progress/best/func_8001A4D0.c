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
extern int D_8008AB40;
extern int D_8008AB34;
extern int D_8008AB30;
extern int D_8008AB14;
extern int D_8008AB18;
s32 func_800149E4();
s32 func_80016868();
s32 func_80019750();
s32 func_8001A028();
s32 func_8002AB14();
s32 func_8002DC80();
s32 func_80038924();
s32 func_80047A68();
s32 func_80047D74();
extern s32 D_8007E4E0;
extern char D_80081AD0[];
extern s32 D_80082044;
extern char D_800823A8[];
extern char D_800824F8[];
extern char D_800827A4[];
extern s16 D_80082D52;
extern s32 D_80082EF0;
extern s32 D_80089944;
extern s32 D_8008AA60;
extern char D_8008CB50[];
extern char D_800926E8[];
extern s32 D_80092788;

void func_8001A4D0(void *arg0) {
    u8 sp10;
    u8 sp11;
    s16 temp_v0;
    s16 temp_v0_3;
    s16 temp_v1;
    s16 var_v1_3;
    s16 var_v1_4;
    s32 temp_s2;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_s0;
    s32 var_s2;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    void **temp_v1_2;
    void *temp_s0;
    void *temp_v0_2;

    temp_s2 = func_8002AB14(2);
    func_8001A028(arg0, D_80082D52);
    if (D_8008AB10 != 0) {
        func_80019750();
    }
    D_80092788 = 0;
    M2C_FIELD(arg0, s16 *, 0x1A) = 0;
    if (D_8008AB10 != 0) {
        var_s2 = 0;
        temp_s0 = M2C_FIELD(*((D_8007E4E0 * 4) + D_80081AD0), void **, 0x44);
        if ((func_8002DC80(&D_8008AB10, D_8007E4E0) != 0) || (D_8008AB40 == 2)) {
            var_s2 = 1;
        }
        if (var_s2 != 0) {
            if (M2C_FIELD(temp_s0, s32 *, 0x118) != 0) {
                var_a1 = 0;
                if ((D_8008AB34 > 0x124F8) || (D_8008AB30 >= 7)) {
                    var_a1 = 1;
                }
                if (var_a1 != 0) {
                    M2C_FIELD(arg0, s16 *, 0x1A) = (s16) (func_8002AB14(2, var_a1) + 2);
                } else {
                    goto block_19;
                }
            } else {
                goto block_54;
            }
        } else if (M2C_FIELD(temp_s0, s32 *, 0x118) != 0) {
            var_v1 = 0;
            if ((D_8008AB14 != 0) || (D_8008AB18 != 0)) {
                var_v1 = 1;
            }
            if (var_v1 == 0) {
                M2C_FIELD(arg0, s16 *, 0x1A) = (s16) (func_8002AB14(3) >= 2);
            } else {
block_19:
                M2C_FIELD(arg0, s16 *, 0x1A) = 1;
            }
        } else {
            var_v1_2 = 0;
            if ((D_8008AB14 != 0) || (D_8008AB18 != 0)) {
                var_v1_2 = 1;
            }
            if (var_v1_2 == 0) {
                var_v1_3 = 0;
                if (func_8002AB14(3) >= 2) {
                    var_v1_3 = -1;
                }
                goto block_47;
            }
            goto block_55;
        }
    } else if (D_80089944 == 0) {
        temp_v1 = M2C_FIELD(arg0, s16 *, 0x18);
        if (temp_v1 > 0) {
            temp_v0 = M2C_FIELD(arg0, s16 *, 0x14);
            var_v0 = temp_v0 < 2;
            if (temp_v0 < 0) {
                if (M2C_FIELD(arg0, s16 *, 0x16) == 0) {
                    M2C_FIELD(arg0, s16 *, 0x1A) = 0;
                } else {
                    var_v0 = M2C_FIELD(arg0, s16 *, 0x14) < 2;
                    goto block_32;
                }
            } else {
block_32:
                if ((var_v0 != 0) && (M2C_FIELD(arg0, s16 *, 0x16) == 0)) {
                    if ((temp_s2 != 0) && (D_8008AA60 != 0)) {
                        M2C_FIELD(arg0, s16 *, 0x1A) = 1;
                    }
                } else if (((M2C_FIELD(arg0, s16 *, 0x14) < 3) && (var_v1_4 = M2C_FIELD(arg0, s16 *, 0x16), (var_v1_4 == 1))) || (var_v1_4 = 2, (M2C_FIELD(arg0, s16 *, 0x16) == 2)) || (M2C_FIELD(arg0, s16 *, 0x14) >= 3)) {
                    M2C_FIELD(arg0, s16 *, 0x1A) = var_v1_4;
                }
            }
            if (M2C_FIELD(arg0, s16 *, 0x1A) < 3) {
                temp_v1_2 = M2C_FIELD(*((D_8007E4E0 * 4) + D_80081AD0), void ***, 0x44);
                temp_v0_2 = *temp_v1_2;
                if (M2C_FIELD(M2C_FIELD(temp_v0_2, void *(**)(void *, s32), 0x44)(temp_v1_2 + M2C_FIELD(temp_v0_2, s16 *, 0x40), -1), s16 *, 4) == 0x12C) {
                    M2C_FIELD(arg0, s16 *, 0x1A) = 3;
                }
                if (M2C_FIELD(arg0, s16 *, 0x1A) < 3) {
                    var_v1_3 = M2C_FIELD(arg0, s16 *, 0x16);
                    if (var_v1_3 == 3) {
block_47:
                        M2C_FIELD(arg0, s16 *, 0x1A) = var_v1_3;
                    }
                }
            }
        } else if (temp_v1 != -2) {
            M2C_FIELD(arg0, s16 *, 0x1A) = (s16) (u16) M2C_FIELD(arg0, s16 *, 0x18);
        } else if (M2C_FIELD(arg0, s16 *, 0x16) != 0) {
            M2C_FIELD(arg0, s16 *, 0x1A) = temp_v1;
        } else {
block_54:
block_55:
            M2C_FIELD(arg0, s16 *, 0x1A) = -1;
        }
    }
    temp_v0_3 = (u16) M2C_FIELD(arg0, s16 *, 0x1A) + 2;
    if (M2C_FIELD(arg0, s16 *, 0x1A) != 0) {
        switch (temp_v0_3) {
        case 3:
            var_s0 = func_8002AB14(5);
            if (var_s0 == D_80082EF0) {
                var_s0 = (var_s0 + 1) % 5;
            }
            func_80038924(D_8008CB50, var_s0 + 3);
            D_80082EF0 = var_s0;
            break;
        case 4:
            var_a1_2 = 8;
block_66:
            func_80038924(D_8008CB50, var_a1_2);
            break;
        case 5:
            var_a1_2 = 9;
            goto block_66;
        case 1:
            var_a1_2 = func_8002AB14(2) + 0xA;
            goto block_66;
        case 0:
            var_a1_2 = 0xC;
            goto block_66;
        }
        func_80047A68(D_800926E8);
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
        if (M2C_FIELD(arg0, s16 *, 0x1A) != 0) {
            func_80047D74(D_800926E8, &sp10, &sp11);
            if (sp10 != 0) {
                D_80082044 = (s32) sp11;
                func_800149E4(D_800823A8);
                return;
            }
            func_800149E4(D_800824F8);
            return;
        }
        goto block_71;
    }
block_71:
    func_80016868(D_800827A4);
}

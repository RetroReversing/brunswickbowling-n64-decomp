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

extern int D_80089944;
s32 func_80016550();
s32 func_80029FE4();
s32 func_8002DB14();
s32 func_80038754();
s32 func_8003875C();
s32 func_8003FD68();
extern char D_800827A4[];
extern char D_80082D70[];
extern char D_80089930[];
extern s32 D_8008AB10;
extern char D_8008CB50[];
extern char D_8008E9B0[];
extern s32 D_8008E9E0;

s32 func_80018F44(void *arg0) {
    s32 temp_v0;
    s32 var_s1;
    s32 var_v0;

    var_s1 = 0;
    if (func_8003FD68(D_8008E9B0, 0xFF, 0x20A) != 0) {
        var_s1 = M2C_FIELD(arg0, s32 *, 0x14) < 1;
    }
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x14) - 1;
    M2C_FIELD(arg0, s32 *, 0x14) = temp_v0;
    if (temp_v0 == 0) {
        func_80038754(D_8008CB50);
        func_8003875C(D_8008CB50, 0);
        return 1;
    }
    var_v0 = 1;
    if (temp_v0 < 0) {
        if (var_s1 == 0) {
            var_v0 = 1;
            if ((u32) (D_8008E9E0 - M2C_FIELD(arg0, s32 *, 0x18)) >= 0xBB9U) {
                goto block_8;
            }
        } else {
block_8:
            if (D_8008AB10 != 0) {
                func_8002DB14(&D_8008AB10);
            }
            func_80016550(D_800827A4, D_80082D70);
            if (D_80089944 != 0) {
                func_80029FE4(D_80089930, D_800827A4, 0);
            }
            var_v0 = 2;
        }
    }
    return var_v0;
}

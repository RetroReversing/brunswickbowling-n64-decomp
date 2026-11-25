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

extern int D_8008B3E8;
extern int D_80089028;
extern int D_8008B3BC;
s32 func_8002110C();
s32 func_80021324();
s32 func_80021378();
s32 func_80022B18();
s32 func_8002FFC0();
s32 func_80030EF8();
s32 func_80031350();
s32 func_800315E0();
s32 func_8003FD68();
s32 func_80043108();
s32 func_80043290();
extern char D_80083BA8[];
extern char D_800891B0[];
extern char D_8008B0D0[];
extern char D_8008B3A4[];
extern s32 D_8008B3DC;
extern char D_8008E9B0[];
extern s32 D_8008E9E0;
extern char D_8008ED80[];

s32 func_8002F2B8(void *arg0) {
    s16 temp_v0;
    s32 var_s0;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_v0;
    s32 var_v1;

    var_s1 = 0;
    if (func_8003FD68(D_8008E9B0, 0xFF, 0x20A) != 0) {
        var_s1 = M2C_FIELD(arg0, s16 *, 0x18) < 1;
    }
    temp_v0 = (u16) M2C_FIELD(arg0, s16 *, 0x18) - 1;
    M2C_FIELD(arg0, s16 *, 0x18) = temp_v0;
    if (temp_v0 == 0) {
        func_80043290(D_8008ED80);
        func_80043108(D_8008ED80, D_8008B3DC);
        func_80022B18(D_800891B0);
        return 1;
    }
    var_v0 = 1;
    if (temp_v0 < 0) {
        if (var_s1 == 0) {
            var_v0 = 1;
            if ((u32) (D_8008E9E0 - M2C_FIELD(arg0, s32 *, 0x14)) >= 0x2329U) {
                goto block_8;
            }
            /* Duplicate return node #27. Try simplifying control flow for better match */
            return var_v0;
        }
block_8:
        var_s1_2 = 0;
        if (D_80089028 != 0) {
            var_s0 = 0;
            if (D_8008B3E8 != 0) {
                var_v1 = 0;
                if (D_8008B3E8 == 9) {
                    var_v1 = func_800315E0(D_8008B3A4, D_8008B3E8) != 0;
                }
                if (var_v1 != 0) {
                    goto block_13;
                }
            } else {
block_13:
                var_s0 = 1;
            }
            if (var_s0 == 0) {
                var_s1_2 = 1;
            }
        }
        if (var_s1_2 != 0) {
            func_80031350(D_8008B3A4, D_8008B0D0);
            return 2;
        }
        if (D_80089028 != 0) {
            func_8002110C(D_80083BA8);
            goto block_22;
        }
        if (D_8008B3BC != 0) {
            func_80021324(D_80083BA8);
block_22:
            func_80021378(D_80083BA8);
        }
        if ((D_8008B3BC != 0) && (func_800315E0(D_8008B3A4) != 0)) {
            func_8002FFC0(D_8008B3A4);
        }
        func_80030EF8(D_8008B3A4);
        var_v0 = 2;
        /* Duplicate return node #27. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}

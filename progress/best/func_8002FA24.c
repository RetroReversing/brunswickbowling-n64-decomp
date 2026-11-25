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

extern int D_8008B3C4;
extern int D_8008B3E8;
extern int D_8008B3DC;
extern int D_8008B3CC;
extern int D_8008903C;
extern int D_80083BB0;
s32 func_80015E04();
s32 func_80020178();
s32 func_8002FF50();
s32 func_8002FFC0();
s32 func_80030018();
s32 func_80030EF8();
s32 func_800315E0();
s32 func_800316AC();
s32 func_80031F58();
s32 func_800343AC();
s32 func_800375C0();
extern s32 D_8007E4E0;
extern char D_8007F618[];
extern char D_80081AD0[];
extern s32 D_80082760;
extern char D_80083110[];
extern char D_80083BA8[];
extern s32 D_80084E60;
extern char D_8008B3A4[];
extern char D_8008BA90[];
extern char D_8008C864[];
extern s32 D_8008F068;
extern s32 D_800994E0;
extern s32 D_800994E4;

void func_8002FA24(void *arg0) {
    s32 *var_a1_2;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a2;
    s32 var_s2;
    void **var_a1;
    void *var_a0_3;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x14);
    var_s2 = 1;
    switch (temp_v1) {                              /* irregular */
    case 0:
loop_10:
        if (func_800315E0(D_8008B3A4) != 0) {
            func_8002FFC0(D_8008B3A4);
            if (D_8008B3C4 == 0) {
                goto loop_10;
            }
        }
        if (D_8008B3C4 != 0) {
            if (func_800316AC(D_8008B3A4) != 0) {
                func_80031F58(D_8008B3A4);
                goto block_18;
            }
            if (D_8008B3E8 < 6) {
                M2C_FIELD(arg0, s32 *, 0x14) = 2;
            } else {
                goto block_18;
            }
        } else if (D_8008B3E8 >= 6) {
block_18:
            M2C_FIELD(arg0, s32 *, 0x14) = 1;
        } else {
            func_80030EF8(D_8008B3A4);
        }
        if ((M2C_FIELD(arg0, s32 *, 0x14) == 1) && (func_800316AC(D_8008B3A4) == 0)) {
            func_8002FF50(D_8008B3A4);
            if (D_8008B3DC != D_8008F068) {
                M2C_FIELD(arg0, s32 *, 0x18) = 2;
            }
        }
        break;
    case 1:
        var_a0 = 0;
        if (D_8008B3E8 == 9) {
            var_a0 = func_800315E0(D_8008B3A4) != 0;
        }
        if (var_a0 == 0) {
            if (D_8008B3C4 != 0) {
                if (func_800316AC(D_8008B3A4) != 0) {
                    func_80031F58(D_8008B3A4);
                }
                goto block_30;
            }
block_44:
            func_80030EF8(D_8008B3A4);
        } else {
block_30:
            M2C_FIELD(arg0, s32 *, 0x14) = 2;
        }
        break;
    case 2:
        if (func_800316AC(D_8008B3A4) != 0) {
            func_80031F58(D_8008B3A4);
        }
        var_a0_2 = 0;
        if (D_8008B3E8 == 9) {
            var_a0_2 = func_800315E0(D_8008B3A4) != 0;
        }
        if (var_a0_2 != 0) {
            M2C_FIELD(arg0, s32 *, 0x14) = 3;
            var_a2 = 5;
            if (D_80082760 != 0) {
                var_a1 = D_80081AD0 + 0x14;
                var_a0_3 = D_8007F618 + 0x1CC;
                D_800994E0 = D_8008B3CC;
                D_800994E4 = D_8008B3DC;
                do {
                    *var_a1 = var_a0_3;
                    var_a1 -= 4;
                    var_a2 -= 1;
                    var_a0_3 -= 0x5C;
                } while (var_a2 >= 0);
                D_8007E4E0 = 0;
                func_80015E04(&D_80082760, var_a1, var_a2);
            }
            D_8008903C = 0;
            D_80083BB0 = 1;
            func_80020178(D_80083BA8);
        } else {
            func_80030018(D_8008B3A4);
loop_42:
            if (func_800315E0(D_8008B3A4) != 0) {
                func_8002FFC0(D_8008B3A4);
                goto loop_42;
            }
            goto block_44;
        }
        break;
    case 3:
        var_s2 = 0;
        if (D_80082760 != 0) {
            var_a1_2 = NULL;
            if (D_80084E60 == 0) {
                var_a1_2 = D_80083110;
            }
        } else {
            var_a1_2 = NULL;
        }
        func_800343AC(D_8008BA90, var_a1_2);
        break;
    }
    if (var_s2 != 0) {
        func_800375C0(D_8008C864, 0);
    }
}

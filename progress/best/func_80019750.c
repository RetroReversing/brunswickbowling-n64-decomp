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

extern int D_8008AB40;
extern int D_8008AB2C;
extern int D_8008AB18;
extern int D_8008AB28;
extern int D_8008AB3C;
extern int D_8008AB38;
extern int D_8008AB34;
extern int D_8008AB20;
extern int D_8008AB30;
s32 func_80024EE0();
s32 func_8002A890();
s32 func_8002DC80();
s32 func_8005978C();
extern char D_80074624[];
extern char D_8007463C[];
extern char D_80074640[];
extern char D_80074644[];
extern char D_80074658[];
extern char D_80074678[];
extern char D_8007468C[];
extern char D_80074694[];
extern char D_800746A8[];
extern char D_800746BC[];
extern char D_800746D4[];
extern char D_800746F4[];
extern s32 D_8007E4E0;
extern char D_8007F618[];
extern char D_800827A4[];
extern char D_80089B40[];
extern char D_8008AB10[];

void func_80019750(void) {
    s32 sp20;
    s32 sp40;
    s32 sp80;
    s32 spC0;
    s32 sp100;
    s32 *var_a0;
    s32 *var_a1;
    s32 *var_a3;
    s32 *var_a3_2;
    s32 *var_a3_3;
    s32 *var_a3_4;
    s32 var_s1;
    s32 var_v1;

    var_s1 = 0;
    if ((func_8002DC80(D_8008AB10, D_8007E4E0) != 0) || (D_8008AB40 == 2)) {
        var_s1 = 1;
    }
    if (var_s1 != 0) {
        if (D_8008AB40 != 1) {
            if (D_8008AB40 < 2) {
                if (D_8008AB40 != 0) {
                    var_a0 = D_80089B40;
                } else {
                    func_80024EE0(D_8008AB2C, &sp20);
                    if (D_8008AB18 != 0) {
                        func_8005978C(&sp40, D_80074624);
                        func_8005978C(&sp80, D_8007463C);
                        var_a3 = D_8007463C;
                        if (D_8008AB28 >= 2) {
                            var_a3 = D_80074640;
                        }
                        func_8005978C(&spC0, D_80074644, D_8008AB28, var_a3, &sp20);
                        var_a1 = D_80074658;
                    } else {
                        func_8005978C(&sp40, D_800746F4, D_8008AB3C + 1);
                        func_8005978C(&sp80, D_8007463C);
                        var_a3_2 = D_8007463C;
                        if (D_8008AB28 >= 2) {
                            goto block_26;
                        }
                        goto block_27;
                    }
                    goto block_29;
                }
            } else if (D_8008AB40 != 2) {
                var_a0 = D_80089B40;
            } else {
                func_80024EE0(D_8008AB2C, &sp20);
                func_8005978C(&sp40, D_800746A8, (s32) ((D_8007E4E0 * 0x5C) + D_8007F618));
                func_8005978C(&sp80, D_8007463C);
                var_a3_2 = D_8007463C;
                if (D_8008AB28 < 2) {

                } else {
block_26:
                    var_a3_2 = D_80074640;
block_27:
                }
                func_8005978C(&spC0, D_800746BC, D_8008AB28, var_a3_2, &sp20);
                var_a1 = D_800746D4;
                goto block_29;
            }
        } else {
            var_v1 = 0;
            if (D_8008AB18 != 0) {
                var_v1 = D_8008AB38 != 1;
            }
            if (var_v1 != 0) {
                func_80024EE0(D_8008AB2C, &sp20);
                func_8005978C(&sp40, D_80074624);
                func_8005978C(&sp80, D_8007463C);
                var_a3_3 = D_8007463C;
                if (D_8008AB28 >= 2) {
                    var_a3_3 = D_80074640;
                }
                func_8005978C(&spC0, D_80074644, D_8008AB28, var_a3_3, &sp20);
                var_a1 = D_80074658;
block_29:
                func_8005978C(&sp100, var_a1);
            } else {
                func_80024EE0(D_8008AB34, &sp20);
                func_8005978C(&sp40, D_80074678, (s32) ((D_8008AB20 * 0x5C) + D_8007F618));
                func_8005978C(&sp80, D_8007463C);
                func_8005978C(&spC0, D_8007468C, (s32) ((D_8008AB20 * 0x5C) + D_8007F618));
                var_a3_4 = D_8007463C;
                if (D_8008AB30 >= 2) {
                    var_a3_4 = D_80074640;
                }
                func_8005978C(&sp100, D_80074694, D_8008AB30, var_a3_4, &sp20);
            }
            var_a0 = D_80089B40;
        }
        func_8002A890(var_a0, D_800827A4, 0x1388, &sp40, &sp80, &spC0, &sp100, 0);
    }
}

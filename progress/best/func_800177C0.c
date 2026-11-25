/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O1, tried by autopilot */
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

M2C_UNK func_80024EE0(s32, M2C_UNK *);              /* extern */
M2C_UNK func_8002A890(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *, s32); /* extern */
s32 func_8002DC00(M2C_UNK *, s32);                  /* extern */
M2C_UNK func_8005978C(); /* extern */
extern M2C_UNK D_80074024;
extern M2C_UNK D_80074028;
extern M2C_UNK D_8007430C;
extern M2C_UNK D_80074330;
extern M2C_UNK D_80074348;
extern M2C_UNK D_80074364;
extern M2C_UNK D_8007437C;
extern M2C_UNK D_8007438C;
extern M2C_UNK D_800743A4;
extern M2C_UNK D_800743B4;
extern M2C_UNK D_800743D0;
extern M2C_UNK D_800743E8;
extern M2C_UNK D_800743FC;
extern M2C_UNK D_80074410;
extern M2C_UNK D_80074420;
extern M2C_UNK D_80074430;
extern M2C_UNK D_80074440;
extern s32 D_8007E4E0;
extern M2C_UNK D_80081AD0;
extern M2C_UNK D_800827A4;
extern M2C_UNK D_80089B40;
extern M2C_UNK D_8008AB10;

void func_800177C0(void) {
    M2C_UNK sp20;
    M2C_UNK sp40;
    M2C_UNK sp80;
    M2C_UNK spC0;
    M2C_UNK sp100;
    M2C_UNK *var_a1;
    M2C_UNK *var_a3;
    M2C_UNK *var_a3_2;
    M2C_UNK *var_a3_3;
    s32 var_s1;

    var_s1 = 0;
    if (M2C_FIELD(&D_8008AB10, s32 *, 0) != 0) {
        func_80024EE0(M2C_FIELD(&D_8008AB10, s32 *, 0x1C), &sp20);
        if (M2C_FIELD(&D_8008AB10, s32 *, 8) != 0) {
            if (M2C_FIELD(&D_8008AB10, s32 *, 0xC) == D_8007E4E0) {
                func_8005978C(&sp40, &D_8007430C, M2C_FIELD(&D_8008AB10, s32 *, 0x2C) - 0xB);
                func_8005978C(&sp80, &D_80074028);
                func_8005978C(&spC0, &D_80074330, (&D_80081AD0)[D_8007E4E0]);
                var_a3 = &D_80074028;
                if (M2C_FIELD(&D_8008AB10, s32 *, 0x18) >= 2) {
                    var_a3 = &D_80074024;
                }
                func_8005978C(&sp100, &D_80074348, M2C_FIELD(&D_8008AB10, s32 *, 0x18), var_a3, &sp20);
                var_s1 = 1;
            } else if (M2C_FIELD(&D_8008AB10, s32 *, 0x30) == 1) {
                var_s1 = 1;
                func_8005978C(&sp40, &D_80074364, M2C_FIELD(&D_8008AB10, s32 *, 0x2C) - 0xB);
                func_8005978C(&sp80, &D_80074028);
                func_8005978C(&spC0, &D_8007437C, *((D_8007E4E0 * 4) + &D_80081AD0));
                func_8005978C(&sp100, &D_8007438C);
            } else if (func_8002DC00(&D_8008AB10, D_8007E4E0) != 0) {
                func_8005978C(&sp40, &D_80074364, M2C_FIELD(&D_8008AB10, s32 *, 0x2C) - 0xB);
                func_8005978C(&sp80, &D_80074028);
                func_8005978C(&spC0, &D_800743A4, *((D_8007E4E0 * 4) + &D_80081AD0));
                var_a3_2 = &D_80074028;
                if (M2C_FIELD(&D_8008AB10, s32 *, 0x18) >= 2) {
                    var_a3_2 = &D_80074024;
                }
                func_8005978C(&sp100, &D_800743B4, M2C_FIELD(&D_8008AB10, s32 *, 0x18), var_a3_2, &sp20);
                var_s1 = 1;
            }
        } else if (M2C_FIELD(&D_8008AB10, s32 *, 4) != 0) {
            if (M2C_FIELD(&D_8008AB10, s32 *, 0x30) != 1) {
                if (func_8002DC00(&D_8008AB10, D_8007E4E0) != 0) {
                    func_8005978C(&sp40, &D_80074420, (s32) &sp20);
                    func_8005978C(&sp80, &D_80074028);
                    func_8005978C(&spC0, &D_80074430, *((D_8007E4E0 * 4) + &D_80081AD0));
                    var_a3_3 = &D_80074028;
                    if (M2C_FIELD(&D_8008AB10, s32 *, 0x18) >= 2) {
                        var_a3_3 = &D_80074024;
                    }
                    var_a1 = &D_80074440;
                    goto block_27;
                }
            } else {
                if (func_8002DC00(&D_8008AB10, D_8007E4E0) != 0) {
                    func_8005978C(&sp40, &D_800743D0, (s32) &sp20);
                    func_8005978C(&sp80, &D_80074028);
                    func_8005978C(&spC0, &D_8007437C, *((D_8007E4E0 * 4) + &D_80081AD0));
                    var_a3_3 = NULL;
                    if (M2C_FIELD(&D_8008AB10, s32 *, 0x18) >= 2) {
                        var_a3_3 = (M2C_UNK *)0x73;
                    }
                    var_a1 = &D_800743E8;
                } else {
                    func_8005978C(&sp40, &D_800743FC, (s32) &sp20);
                    func_8005978C(&sp80, &D_80074028);
                    func_8005978C(&spC0, &D_800743A4, *((D_8007E4E0 * 4) + &D_80081AD0));
                    var_a3_3 = NULL;
                    if (M2C_FIELD(&D_8008AB10, s32 *, 0x18) >= 2) {
                        var_a3_3 = (M2C_UNK *)0x73;
                    }
                    var_a1 = &D_80074410;
                }
block_27:
                var_s1 = 1;
                func_8005978C(&sp100, var_a1, M2C_FIELD(&D_8008AB10, s32 *, 0x18), var_a3_3);
            }
        }
    }
    if (var_s1 != 0) {
        func_8002A890(&D_80089B40, &D_800827A4, 0x1388, &sp40, &sp80, &spC0, &sp100, 1);
    }
}

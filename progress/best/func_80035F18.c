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

M2C_UNK func_80020540(M2C_UNK *);                   /* extern */
M2C_UNK func_80020578(M2C_UNK *);                   /* extern */
M2C_UNK func_80020D48(M2C_UNK *);                   /* extern */
s32 func_8002AB14(M2C_UNK);                         /* extern */
s32 func_80034BD8(s32, s32);                        /* extern */
s32 func_800353F8(M2C_UNK);                         /* extern */
M2C_UNK func_80037310(M2C_UNK *);                   /* extern */
M2C_UNK func_80039738(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32 *); /* extern */
s32 func_8003FF90(M2C_UNK *, s32);                  /* extern */
s32 func_8003FFFC(M2C_UNK *, s32);                  /* extern */
s32 func_80040650(M2C_UNK *, s32);                  /* extern */
M2C_UNK func_800407F0(M2C_UNK *, s32);              /* extern */
s32 func_80040858(M2C_UNK *, s32);                  /* extern */
M2C_UNK func_80042A1C(M2C_UNK *);                   /* extern */
M2C_UNK func_80045278(M2C_UNK *, M2C_UNK);          /* extern */
s32 func_8004684C(s32);                             /* extern */
M2C_UNK func_8004EA00(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_80051240(s32 *, M2C_UNK);              /* extern */
M2C_UNK func_8005978C(s32 *, M2C_UNK *, s32);       /* extern */
extern s32 D_8007797C;
extern s32 D_800779A4;
extern s32 D_800779BC;
extern s32 D_80077D14;
extern s32 D_80077D34;
extern M2C_UNK D_80077D4C;
extern M2C_UNK D_80077D68;
extern s32 D_80077D7C;
extern s32 D_80077D9C;
extern s32 D_80077DBC;
extern s32 D_80077DD8;
extern s32 D_80077DF0;
extern s32 D_80077E0C;
extern s32 D_80077E2C;
extern M2C_UNK D_80077E48;
extern M2C_UNK D_80077E64;
extern s32 D_80077E78;
extern s32 D_80077E88;
extern s32 D_80077EAC;
extern M2C_UNK D_80083AF0;
extern s32 D_80083BA0;
extern s32 D_80083BA4;
extern M2C_UNK D_80083BA8;
extern s32 D_8008906C;
extern s32 D_80089070;
extern s32 D_8008BB30;
extern M2C_UNK D_8008CEB0;
extern M2C_UNK D_8008CEEC;
extern M2C_UNK D_8008E860;
extern M2C_UNK D_8008E8A0;
extern M2C_UNK D_8008E920;
extern M2C_UNK D_8008E9E4;
extern M2C_UNK D_8008EB34;
extern M2C_UNK D_8008ED80;
extern s32 D_8009C090;
extern M2C_UNK D_8009CE10;
extern u16 D_8009D5B0;
extern s32 D_8009D618;

s32 func_80035F18(s32 arg0, s32 arg1, s32 arg2) {
int *__repair_home0 = &arg0;

    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp58;
    s32 sp5C;
    s32 sp60;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_4;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s2;
    s32 var_s3;
    s32 var_s7;
    s32 var_v0;

    var_s3 = 0;
    var_s7 = 5;
    sp58 = 1;
    sp5C = D_80083BA0;
loop_1:
    if (D_8009D618 == 0) {
        func_8004EA00(&D_8009CE10, 0, 0, 0, 1);
        func_80045278(&D_8008ED80, 0);
        var_s0 = 0;
        do {
            func_80039738(&D_8008CEEC, 7, 1, 0x140, 0x64, &D_80077D34);
            var_s0 += 1;
            func_8005978C(&sp18, &D_80077D4C, *(((*__repair_home0) * 4) + &D_8008E9E4));
            func_80039738(&D_8008CEEC, 7, 1, 0x140, 0x73, &sp18);
            func_80042A1C(&D_8008ED80);
        } while (var_s0 < 2);
loop_4:
        goto loop_4;
    }
    if (D_8009C090 == 1) {
        var_s1 = 0;
        temp_v0_2 = func_8002AB14(0x14);
        sp18 = M2C_FIELD(&D_80077D68, s32 *, 0);
        sp1C = M2C_FIELD(&D_80077D68, s32 *, 4);
        sp20 = M2C_FIELD(&D_80077D68, s32 *, 8);
        sp24 = M2C_FIELD(&D_80077D68, s32 *, 0xC);
        sp28 = M2C_FIELD(&D_80077D68, s32 *, 0x10);
        sp60 = temp_v0_2 + 0x64;
        func_80045278(&D_8008ED80, 0);
        var_s2 = 0;
loop_7:
        if (var_s2 < sp60) {
            M2C_FIELD(&D_8008E8A0, s16 *, 0x10) = 0x104;
            M2C_FIELD(&D_8008E8A0, s16 *, 0x12) = 0xA0;
            func_80037310(&D_8008E8A0);
            M2C_FIELD(&D_8008E860, s16 *, 0x10) = 0x150;
            M2C_FIELD(&D_8008E860, s16 *, 0x12) = 0xA0;
            func_80037310(&D_8008E860);
            func_80051240(&sp18, 0);
            if (var_s1 >= 0xB) {
                M2C_FIELD(&D_8008E920, s16 *, 0x10) = 0x128;
                M2C_FIELD(&D_8008E920, s16 *, 0x12) = 0xA4;
                func_80037310(&D_8008E920);
                if (var_s1 >= 0x15) {
                    M2C_FIELD(&D_8008E920, s16 *, 0x10) = 0x134;
                    M2C_FIELD(&D_8008E920, s16 *, 0x12) = 0xA4;
                    func_80037310(&D_8008E920);
                    if (var_s1 >= 0x1F) {
                        M2C_FIELD(&D_8008E920, s16 *, 0x10) = 0x140;
                        M2C_FIELD(&D_8008E920, s16 *, 0x12) = 0xA4;
                        func_80037310(&D_8008E920);
                    }
                }
            }
            var_s1 += 1;
            if (var_s1 >= 0x29) {
                var_s1 = 0;
            }
            func_80039738(&D_8008CEEC, 7, 1, 0x140, 0x55, &D_80077D7C);
            func_80039738(&D_8008CEEC, 7, 1, 0x140, 0x64, &D_80077D9C);
            func_80039738(&D_8008CEEC, 7, 1, 0x140, 0x73, &D_80077DBC);
            func_80039738(&D_8008CEB0, 7, 1, 0x140, 0x82, &D_80077D14);
            func_80042A1C(&D_8008ED80);
            var_s2 += 1;
            goto loop_7;
        }
    }
loop_17:
    var_s7 -= 1;
    if (var_s7 != 1) {
        if (var_s7 == 0) {
            D_8008BB30 = 0;
            return 0;
        }
        goto block_21;
    }
    D_80083BA4 = 0xA;
    D_80083BA0 = 1;
block_21:
    if (func_80034BD8((*__repair_home0), arg1) == 1) {
        temp_v0_3 = func_8003FF90(&D_8008EB34, (*__repair_home0));
        if (temp_v0_3 == 0) {
            var_s3 = 1;
            if (func_8003FFFC(&D_8008EB34, (*__repair_home0)) == 0) {
                func_8004EA00(&D_8009CE10, 0, 0, 0, 1);
                func_80045278(&D_8008ED80, 0);
                var_s0_2 = 0;
                do {
                    func_80039738(&D_8008CEEC, 7, 1, 0x140, 0x64, &D_80077DD8);
                    func_80039738(&D_8008CEB0, 7, 1, 0x140, 0x73, &D_80077D14);
                    func_80042A1C(&D_8008ED80);
                    var_s0_2 += 1;
                } while (var_s0_2 < 2);
                func_8004684C(func_8002AB14(0x14) + 0x41);
                temp_s0 = func_80040858(&D_8008EB34, (*__repair_home0));
                func_80020540(&D_80083BA8);
                func_800407F0(&D_8008EB34, (*__repair_home0));
                var_s3 = 1;
                if (temp_s0 == 0) {
                    D_8008BB30 = 1;
                    D_80089070 = 0;
                    return 1;
                }
                goto block_56;
            }
            goto block_56;
        }
        if (temp_v0_3 != 5) {
            var_s3 = 1;
            goto block_56;
        }
        if (arg2 != 0) {
            temp_v0_4 = func_80040650(&D_8008EB34, (*__repair_home0));
            if (temp_v0_4 == 0) {
                func_8004EA00(&D_8009CE10, 0, 0, 0, 1);
                func_80045278(&D_8008ED80, 0);
                var_s0_3 = 0;
                do {
                    func_80039738(&D_8008CEEC, 7, 1, 0x140, 0x64, &D_80077DF0);
                    func_80039738(&D_8008CEB0, 7, 1, 0x140, 0x73, &D_80077D14);
                    func_80042A1C(&D_8008ED80);
                    var_s0_3 += 1;
                } while (var_s0_3 < 2);
                func_8004684C(func_8002AB14(0x14) + 0x41);
                M2C_FIELD(&D_80083AF0, s32 *, 0xA0) = 0;
                func_80020578(&D_80083BA8);
                func_80020D48(&D_80083BA8);
                M2C_FIELD(&D_80083AF0, s32 *, 0xA0) = 1;
                D_80089070 = 0;
                D_8008BB30 = 1;
                return 1;
            }
            if ((u32) (temp_v0_4 - 7) < 2U) {
                func_8004EA00(&D_8009CE10, 0, 0, 0, 1);
                func_80045278(&D_8008ED80, 0);
                var_s1_2 = 0;
                do {
                    func_80039738(&D_8008CEEC, 7, 1, 0x140, 0x37, &D_80077E0C);
                    func_80039738(&D_8008CEEC, 7, 1, 0x140, 0x46, &D_80077E2C);
                    var_s1_2 += 1;
                    func_8005978C(&sp18, &D_80077E48, *(((*__repair_home0) * 4) + &D_8008E9E4));
                    func_80039738(&D_8008CEEC, 7, 1, 0x140, 0x55, &sp18);
                    func_8005978C(&sp18, &D_80077E64, 0x3E);
                    func_80039738(&D_8008CEEC, 7, 1, 0x140, 0x64, &sp18);
                    func_80039738(&D_8008CEEC, 7, 1, 0x140, 0x73, &D_80077E78);
                    func_80039738(&D_8008CEEC, 5, 0, 0x64, 0x87, &D_800779A4);
                    func_80039738(&D_8008CEB0, 7, 0, 0xA0, 0x94, &D_80077E88);
                    func_80039738(&D_8008CEEC, 5, 0, 0x64, 0xA3, &D_8007797C);
                    func_80039738(&D_8008CEB0, 7, 0, 0xA0, 0xB0, &D_800779BC);
                    func_80039738(&D_8008CEEC, 5, 0, 0x64, 0xBF, &D_80077EAC);
                    func_80042A1C(&D_8008ED80);
                } while (var_s1_2 < 2);
                var_s0_4 = 0;
loop_40:
                if (D_8009D5B0 & 0x8000) {
                    var_s0_4 = 1;
                    var_s3 = 1;
                    var_s7 = 5;
                }
                if (D_8009D5B0 & 0x4000) {
                    func_80020578(&D_80083BA8);
                    D_8008BB30 = 0;
                    D_80089070 = 1;
                    return 0;
                }
                if (D_8009D5B0 & 4) {
                    temp_v0_5 = func_800353F8(0);
                    sp58 = temp_v0_5;
                    var_s3 = temp_v0_5;
                    var_s7 = 5;
                    var_s0_4 = 1;
                }
                func_8004684C(1);
                if (var_s0_4 != 0) {
                    goto block_56;
                }
                goto loop_40;
            }
            var_s3 = 1;
block_56:
            func_8004684C(1);
            if (var_s3 != 1) {
                temp_v0 = func_8004684C(1);
                if (sp58 != 1) {
                    return temp_v0;
                }
                goto loop_1;
            }
            goto loop_17;
        }
        D_8008BB30 = 0;
        D_80089070 = 2;
        return 0;
    }
    if ((D_80083BA4 == 5) && (D_8008906C == 0) && (sp5C != 0)) {
        var_v0 = 2;
    } else {
        var_v0 = 3;
    }
    D_80089070 = var_v0;
    return 0;
}

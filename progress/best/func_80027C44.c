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
extern int D_8008ED84;
extern short D_8008C1E0;
extern short D_8008C1E2;
extern short D_8008C220;
extern short D_8008C222;
extern short D_8008C1A2;
extern short D_8008C1A0;
s32 func_80024EE0();
s32 func_80025438();
s32 func_80030B14();
s32 func_800315E0();
s32 func_80037310();
s32 func_80039738();
s32 func_80045050();
s32 func_80045200();
s32 func_8005978C();
extern char D_80076030[];
extern char D_8007635C[];
extern char D_80076364[];
extern char D_8007F618[];
extern u8 D_80081A08;
extern char D_80089900[];
extern char D_8008990C[];
extern char D_8008B3A4[];
extern char D_8008C190[];
extern char D_8008C1D0[];
extern char D_8008C210[];
extern char D_8008CEB0[];
extern char D_8008CF28[];
extern s32 D_8008D8E8;
extern char D_8008ED80[];

void func_80027C44(void) {
    s32 sp30;
    s32 sp40;
    s32 sp44;
    s32 sp48;
    s32 sp4A;
    s32 sp4C;
    s32 sp4E;
    s32 sp50;
    s32 sp52;
    s32 sp54;
    s32 sp58;
    s32 sp5C;
    s32 sp60;
    s32 sp64;
    s32 sp66;
    s32 sp68;
    s32 sp6A;
    s32 sp6C;
    s32 sp6E;
    s32 sp70;
    s32 sp74;
    s32 sp78;
    s32 sp7C;
    s32 sp80;
    s32 sp84;
    s32 *sp88;
    u8 *sp8C;
    s32 sp90;
    s32 sp94;
    s32 sp98;
    s32 *var_s7;
    s32 *var_v0;
    s32 *var_v0_2;
    s32 var_a3;
    s16 temp_s1;
    s16 temp_s2;
    s16 var_s3;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_s4;
    s32 temp_s5;
    s32 temp_s6;
    s32 var_fp;
    s32 var_v1;
    u8 var_s1;
    u8 var_s2;
    void *temp_s0;
    void *temp_s0_5;
    void *temp_v0;

    var_s3 = 0x48;
    var_v1 = 0;
    sp78 = 0;
    sp84 = D_8008B3E8;
    sp7C = D_8008D8E8;
    sp80 = D_8008ED84;
    if (sp84 == 9) {
        var_v1 = func_800315E0(D_8008B3A4) != 0;
    }
    if (var_v1 != 0) {
        sp84 = 0xA;
    }
    func_80045200(D_8008ED80, 1);
    D_8008ED84 = 2;
    func_80045050(D_8008ED80, 0x32, 0, 0, 0x3E, 0xF0, 8, 0, 0x60, 2, 0);
    var_fp = 0;
    var_s7 = D_8008990C;
    sp88 = &sp30;
    sp8C = &D_80081A08;
    sp90 = 0;
    sp94 = 0x490000;
    sp98 = 0x540000;
    D_8008D8E8 = 1;
loop_5:
    if (var_fp < 4) {
        D_8008ED84 = 2;
        temp_s0 = sp90 + D_80089900;
        func_80045050(D_8008ED80, 0, var_s3, 0, 0x32, 0x1A, (s32) M2C_FIELD(temp_s0, u8 *, 0), (s32) M2C_FIELD(temp_s0, u8 *, 1), (s32) M2C_FIELD(temp_s0, u8 *, 2), 0, 0);
        func_80045050(D_8008ED80, 0x32, var_s3, 0, 0x3E, 0x1A, (s32) M2C_FIELD(var_s7, u8 *, 0), (s32) M2C_FIELD(var_s7, u8 *, 1), (s32) M2C_FIELD(var_s7, u8 *, 2), 0, 0);
        func_80045050(D_8008ED80, 0x70, var_s3, 0, 0xC, 0x1A, (s32) M2C_FIELD(temp_s0, u8 *, 0), (s32) M2C_FIELD(temp_s0, u8 *, 1), (s32) M2C_FIELD(temp_s0, u8 *, 2), 0, 0);
        func_80045050(D_8008ED80, 0, var_s3 + 2, 0, 0x7C, 1, 0, 0, 0, 0, 0);
        func_80045050(D_8008ED80, 0, var_s3 + 0x17, 0, 0x7C, 1, 0, 0, 0, 0, 0);
        if (var_fp == 0) {
            var_v0 = D_8007635C;
        } else {
            var_v0 = D_80076364;
        }
        func_80039738(D_8008CF28, 4, 1, 0x51, (s32) var_v0);
        func_8005978C(&sp30, D_80076030, 4 - var_fp);
        if (var_fp != 0) {
            var_v0_2 = &sp30;
        } else {
            var_v0_2 = D_80076364;
        }
        func_80039738(D_8008CF28, 4, 1, 0x51, (s32) var_v0_2);
        func_80045050(D_8008ED80, 0x7C, var_s3, 0, 4, 0x1A, 0xF6, 0xAE, 0, 0, 0);
        temp_s0_2 = 0x1E6 - sp78;
        func_80045050(D_8008ED80, 0x7C, var_s3, 0, temp_s0_2, 2, 0xFF, 0xE0, 0x94, 0, 0);
        temp_s2 = var_s3 + 0x18;
        func_80045050(D_8008ED80, 0x7C, temp_s2, 0, temp_s0_2, 2, 0x78, 0x55, 0, 0, 0);
        temp_s1 = var_s3 + 2;
        temp_s0_3 = 0x1E2 - sp78;
        func_80045050(D_8008ED80, 0x80, temp_s1, 0, temp_s0_3, 0x16, 0xC8, 0x90, 0, 0, 0);
        func_80045050(D_8008ED80, 0x80, temp_s1, 0, temp_s0_3, 0xB, (s32) M2C_FIELD(var_s7, u8 *, 0), (s32) M2C_FIELD(var_s7, u8 *, 1), (s32) M2C_FIELD(var_s7, u8 *, 2), 0, 0);
        D_8008C1E0 = 0x7C;
        D_8008C1E2 = var_s3;
        func_80037310(D_8008C1D0);
        D_8008C220 = 0x7C;
        D_8008C222 = temp_s2;
        func_80037310(D_8008C210);
        D_8008C1A2 = var_s3;
        D_8008C1A0 = (s16) (0x262 - sp78);
        func_80037310(D_8008C190);
        temp_s5 = 9 - var_fp;
        if (sp84 >= temp_s5) {
            temp_s0_4 = temp_s5 - 6;
            temp_v0 = (temp_s0_4 * 2) + D_8008B3A4;
            var_s2 = M2C_FIELD(temp_v0, u8 *, 0x5C);
            var_s1 = M2C_FIELD(temp_v0, u8 *, 0x5D);
            if (sp84 == temp_s5) {
                var_s1 = M2C_FIELD(&(&D_80081A08)[var_fp], u8 *, 1);
                var_s2 = *sp8C;
            }
            temp_s6 = sp94 >> 0x10;
            func_80039738(D_8008CEB0, 4, 0, 0x88, temp_s6, (var_s2 * 0x5C) + D_8007F618);
            temp_s4 = sp98 >> 0x10;
            func_80039738(D_8008CEB0, 4, 0, 0x88, temp_s4, (var_s1 * 0x5C) + D_8007F618);
            if (sp84 != temp_s5) {
                temp_s0_5 = (temp_s0_4 * 4) + D_8008B3A4;
                func_8005978C(&sp30, D_80076030, M2C_FIELD(temp_s0_5, s16 *, 0x4C));
                func_80039738(D_8008CEB0, 4, 2, 0x19E, temp_s6, sp88);
                func_8005978C(sp88, D_80076030, M2C_FIELD(temp_s0_5, s16 *, 0x4E));
                func_80039738(D_8008CEB0, 4, 2, 0x19E, temp_s4, sp88);
                func_80030B14(D_8008B3A4, var_s1, &sp40, &sp44, &sp48, &sp4A, &sp4C, &sp4E, &sp50, &sp52, &sp54, &sp58);
                func_80024EE0(sp54, sp88);
                func_80039738(D_8008CEB0, 4, 0, 0x1CA, temp_s4, sp88);
                if (temp_s5 == 9) {
                    func_80030B14(D_8008B3A4, var_s2, &sp5C, &sp60, &sp64, &sp66, &sp68, &sp6A, &sp6C, &sp6E, &sp70, &sp74);
                    func_80024EE0(sp70, sp88);
                    var_a3 = 0x1CA;
                    goto block_19;
                }
            }
        } else {
            var_a3 = 0x88;
block_19:
            func_80039738(D_8008CEB0, 4, 0, var_a3);
        }
        var_s3 += 0x21;
        var_s7 += 3;
        var_fp += 1;
        sp94 = sp94 + 0x1A0000 + 0x70000;
        sp98 = sp98 + 0x1A0000 + 0x70000;
        sp78 += 0x16;
        sp8C += 1;
        sp90 += 3;
        goto loop_5;
    }
    D_8008ED84 = sp80;
    D_8008D8E8 = sp7C;
    func_80025438();
}

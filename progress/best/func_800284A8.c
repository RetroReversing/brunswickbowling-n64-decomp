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

M2C_UNK func_80024EE0(s32, M2C_UNK *);              /* extern */
M2C_UNK func_80024FDC(M2C_UNK *, s16, s16);         /* extern */
M2C_UNK func_8002529C(M2C_UNK, s32, s8 *, M2C_UNK *); /* extern */
M2C_UNK func_80030940(M2C_UNK *, s32 *, M2C_UNK *); /* extern */
M2C_UNK func_80030B14(M2C_UNK *, u8, s16 *, M2C_UNK **, s16 *, s16 *, s16 *, s16 *, s16 *, s16 *, s32 *, s32 *); /* extern */
M2C_UNK func_80030EBC(M2C_UNK *, s32 *, s8 *, M2C_UNK *); /* extern */
s32 func_800315E0(M2C_UNK *);                       /* extern */
M2C_UNK func_80039738(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK *); /* extern */
M2C_UNK func_80045050(); /* extern */
M2C_UNK func_80045200(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_8005978C(); /* extern */
extern M2C_UNK D_80076030;
extern M2C_UNK D_8007636C;
extern M2C_UNK D_80076374;
extern M2C_UNK D_8007637C;
extern M2C_UNK D_80076384;
extern M2C_UNK D_80076390;
extern M2C_UNK D_80076398;
extern M2C_UNK D_8007639C;
extern M2C_UNK D_800763A4;
extern M2C_UNK D_800763B0;
extern M2C_UNK D_800763CC;
extern M2C_UNK D_8008B3A4;
extern M2C_UNK D_8008CF28;
extern s32 D_8008D8E8;
extern M2C_UNK D_8008ED80;
extern s32 D_8008ED84;

#define sp30 (*(s32 *)(sp + 0x30))
#define sp40 (*(s32 *)(sp + 0x40))
#define sp50 (*(s8 *)(sp + 0x50))
#define spA0 (*(s32 *)(sp + 0xA0))
#define spF0 (*(s32 *)(sp + 0xF0))
#define spF4 (*(s16 *)(sp + 0xF4))
#define spF8 (*(M2C_UNK * *)(sp + 0xF8))
#define spFC (*(s16 *)(sp + 0xFC))
#define spFE (*(s16 *)(sp + 0xFE))
#define sp100 (*(s16 *)(sp + 0x100))
#define sp102 (*(s16 *)(sp + 0x102))
#define sp104 (*(s16 *)(sp + 0x104))
#define sp106 (*(s16 *)(sp + 0x106))
#define sp108 (*(s32 *)(sp + 0x108))
#define sp10C (*(s32 *)(sp + 0x10C))
#define sp110 (*(s32 *)(sp + 0x110))
#define sp114 (*(s32 *)(sp + 0x114))
#define sp118 (*(s32 *)(sp + 0x118))
void func_800284A8(s32 arg0) {
int *__repair_home0 = &arg0;

    u8 sp[328];
    M2C_UNK *var_a3;
    M2C_UNK *var_v0;
    M2C_UNK var_s0;
    s32 temp_s1;
    s32 var_s3;
    s32 var_s5;
    s32 var_s6;
    s32 var_v1;
    s32 var_v1_2;

    spF0 = 0xE;
    sp114 = D_8008D8E8;
    sp118 = M2C_FIELD(&D_8008ED80, s32 *, 4);
    func_80030940(&D_8008B3A4, &spF0, &sp30);
    func_80045200(&D_8008ED80, 1);
    M2C_FIELD(&D_8008ED80, s32 *, 4) = 2;
    func_80045050(&D_8008ED80, 0, 0x42, 0, 0x280, 1, 8, 8, 8, 0, 0);
    func_80045050(&D_8008ED80, 0, 0x4D, 0, 0x280, 1, 8, 8, 8, 0, 0);
    func_80045050(&D_8008ED80, 0, 0xCC, 0, 0x280, 1, 8, 8, 8, 0, 0);
    func_80045050(&D_8008ED80, 0, 0x43, 0, 0x280, 1, 0x7F, 0x93, 0x86, 0, 0);
    func_80045050(&D_8008ED80, 0, 0x44, 0, 0x280, 8, 0x59, 0x63, 0x5C, 0, 0);
    func_80045050(&D_8008ED80, 0, 0x4C, 0, 0x280, 1, 0x2E, 0x35, 0x3B, 0, 0);
    D_8008D8E8 = 1;
    func_80039738(&D_8008CF28, 0, 0, 0x66, 0x43, &D_8007636C);
    if ((*__repair_home0) != 0) {
        func_80039738(&D_8008CF28, 0, 1, 0x134, 0x43, &D_80076374);
        func_80039738(&D_8008CF28, 0, 1, 0x19E, 0x43, &D_8007637C);
        var_v0 = &D_80076384;
    } else {
        func_80039738(&D_8008CF28, 0, 1, 0x134, 0x43, &D_80076390);
        func_80039738(&D_8008CF28, 0, 1, 0x19E, 0x43, &D_80076398);
        var_v0 = &D_8007639C;
    }
    func_80039738(&D_8008CF28, 0, 1, 0x208, 0x43, var_v0);
    var_s3 = 0;
    var_s6 = 0x4E0000;
    var_s5 = 0x4E;
loop_4:
    if (var_s3 < 0xE) {
        if (var_s3 & 1) {

        }
        func_80045050(&D_8008ED80, 0, var_s5, 0, 1, 0);
        if (var_s3 < spF0) {
            func_80030B14(&D_8008B3A4, M2C_FIELD((sp + var_s3), u8 *, 0x30), &spF4, &spF8, &spFC, &spFE, &sp100, &sp102, &sp104, &sp106, &sp108, &sp10C);
            var_s0 = 4;
            if (sp10C != 0) {
                var_s0 = 6;
            }
            func_8005978C(&sp40, &D_80076030, spF4 + 1);
            temp_s1 = var_s6 >> 0x10;
            func_80039738(&D_8008CF28, var_s0, 1, 0x50, temp_s1, &sp40);
            func_80039738(&D_8008CF28, var_s0, 0, 0x66, temp_s1, spF8);
            if ((*__repair_home0) != 0) {
                func_8005978C(&sp40, &D_80076030, sp106);
                func_80039738(&D_8008CF28, var_s0, 1, 0x134, temp_s1, &sp40);
                func_8005978C(&sp40, &D_80076030, sp106 + spFE);
                func_80039738(&D_8008CF28, var_s0, 1, 0x19E, temp_s1, &sp40);
                func_80024EE0(sp108, &sp40);
            } else {
                func_8005978C(&sp40, &D_80076030, spFE);
                func_80039738(&D_8008CF28, var_s0, 1, 0x134, temp_s1, &sp40);
                func_80024FDC(&sp40, spFE, spFC);
                func_80039738(&D_8008CF28, var_s0, 1, 0x19E, temp_s1, &sp40);
                func_8005978C(&sp40, &D_800763A4, sp100, sp102, (s32) sp104);
            }
            func_80039738(&D_8008CF28, var_s0, 1, 0x208, temp_s1, &sp40);
        }
        var_s6 += 0x90000;
        var_s5 += 9;
        var_s3 += 1;
        goto loop_4;
    }
    func_80045050(&D_8008ED80, 0x5E, 0x43, 0, 2, 0x89, 8, 8, 8, 0, 0);
    func_80045050(&D_8008ED80, 0xFE, 0x43, 0, 2, 0x89, 8, 8, 8, 0, 0);
    func_80045050(&D_8008ED80, 0x168, 0x43, 0, 2, 0x89, 8, 8, 8, 0, 0);
    func_80045050(&D_8008ED80, 0x1D2, 0x43, 0, 2, 0x89, 8, 8, 8, 0, 0);
    func_80030EBC(&D_8008B3A4, &sp110, &sp50, &spA0);
    var_v1 = 0;
    if (M2C_FIELD(&D_8008B3A4, s32 *, 0x44) == 9) {
        var_v1 = func_800315E0(&D_8008B3A4) != 0;
    }
    if (var_v1 != 0) {
        sp50 = 0;
    }
    var_v1_2 = 0;
    if (M2C_FIELD(&D_8008B3A4, s32 *, 0x44) == 9) {
        var_v1_2 = func_800315E0(&D_8008B3A4) != 0;
    }
    if (var_v1_2 != 0) {
        var_a3 = &D_800763B0;
    } else {
        var_a3 = &D_800763CC;
    }
    func_8002529C(1, sp110, &sp50, var_a3);
    D_8008ED84 = sp118;
    D_8008D8E8 = sp114;
}

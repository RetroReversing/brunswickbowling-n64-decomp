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

M2C_UNK func_80013B4C(M2C_UNK *, s32, void *, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_800162E0(M2C_UNK *, M2C_UNK **, M2C_UNK); /* extern */
M2C_UNK func_8001C210();       /* extern */
extern M2C_UNK *D_80081CE8;
extern M2C_UNK D_80082780;
extern M2C_UNK D_800891B0;
extern s32 D_80089D20;
extern s32 D_80089D2C;
extern s32 D_80089D30;
extern s32 D_80089DC4;
extern M2C_UNK *D_8008BA98;
extern M2C_UNK func_800136C0;
extern M2C_UNK func_800136FC;
extern M2C_UNK func_80013758;

void func_80022D08(M2C_UNK *arg0) {
    M2C_UNK *sp20;
    M2C_UNK *sp28;
    M2C_UNK *sp30;
    M2C_UNK *sp38;
    M2C_UNK *sp40;
    M2C_UNK *var_s2;
    s16 temp_v0;
    s32 var_s3;
    s32 var_s5;

    var_s5 = 0;
    var_s3 = 0;
    sp20 = arg0;
    sp38 = arg0;
    sp30 = arg0;
    sp40 = D_8008BA98;
    func_8001C210(&sp40);
    sp28 = sp30;
    var_s2 = &D_80081CE8;
    M2C_FIELD(&D_800891B0, s32 *, 0) = M2C_FIELD(M2C_FIELD(&D_800891B0, void **, 4), s32 (**)(void *, M2C_UNK *, M2C_UNK, M2C_UNK *), 0xC)(M2C_FIELD(M2C_FIELD(&D_800891B0, void **, 4), s16 *, 8) + &D_800891B0, &D_800891B0, 0, sp20);
    func_80013B4C(&D_80081CE8, D_80089D20, &D_800891B0 + 8, -1, &func_80013758);
    func_80013B4C(&D_80081CE8 + 0x40, D_80089D2C, &D_800891B0 + 0x28, -1, &func_800136FC);
    func_80013B4C(&D_80081CE8 + 0x80, D_80089D30, &D_800891B0 + 0x48, -1, &func_800136C0);
    func_80013B4C(&D_80081CE8 + 0xC0, D_80089DC4, &D_800891B0 + 0x78, -1, NULL);
    M2C_FIELD(arg0, s16 *, 0x14) = 0x5E;
    M2C_FIELD(arg0, s16 *, 0x16) = 0x49;
loop_1:
    if (var_s5 < 4) {
        sp20 = var_s2;
        sp38 = var_s2;
        sp30 = var_s2;
        sp40 = arg0 + 8;
        func_8001C210(var_s2, &sp40);
        sp28 = sp30;
        var_s5 += 1;
        M2C_FIELD(var_s2, s16 *, 0x18) = 0xA4;
        M2C_FIELD(var_s2, s16 *, 0x3A) = 0x138;
        temp_v0 = var_s3 + M2C_FIELD(arg0, s16 *, 0x16) + 0x18;
        var_s3 += 0xA;
        M2C_FIELD(var_s2, s16 *, 0x1A) = temp_v0;
        var_s2 += 16;
        goto loop_1;
    }
    func_800162E0(&D_80082780, &D_80081CE8, 0);
}

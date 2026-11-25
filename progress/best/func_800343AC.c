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

M2C_UNK func_800149E4(M2C_UNK *);                   /* extern */
M2C_UNK func_8001AD28(M2C_UNK *);                   /* extern */
M2C_UNK func_8001BDE4(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_8001C210(M2C_UNK *, void **);          /* extern */
M2C_UNK func_80021480(M2C_UNK *);                   /* extern */
M2C_UNK func_80022560(M2C_UNK *);                   /* extern */
M2C_UNK func_80022B18(M2C_UNK *);                   /* extern */
M2C_UNK func_80036B64(M2C_UNK);                     /* extern */
M2C_UNK func_800375C0(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_8003ED40(M2C_UNK *);                   /* extern */
M2C_UNK func_8003F2F0(M2C_UNK *);                   /* extern */
M2C_UNK func_8003F6FC(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_8004217C(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_800431D4(M2C_UNK *);                   /* extern */
M2C_UNK func_800431F4(M2C_UNK *);                   /* extern */
M2C_UNK func_800432AC(M2C_UNK *);                   /* extern */
M2C_UNK func_80046188(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_80046730(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80048718();                            /* extern */
M2C_UNK func_8004DAF8();                            /* extern */
M2C_UNK func_8004EA00(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_800527A0(M2C_UNK);                     /* extern */
extern M2C_UNK D_80077924;
extern M2C_UNK D_80077934;
extern s32 D_8007D704;
extern M2C_UNK D_8007F618;
extern M2C_UNK D_80081AD0;
extern M2C_UNK D_800825D8;
extern M2C_UNK D_800827A4;
extern M2C_UNK D_80082F00;
extern M2C_UNK D_80082F78;
extern M2C_UNK D_800833B0;
extern M2C_UNK D_80083AF0;
extern M2C_UNK D_80083BA8;
extern M2C_UNK D_800890E8;
extern M2C_UNK D_800891B0;
extern M2C_UNK D_8008B3A4;
extern M2C_UNK D_8008C8F4;
extern s32 D_8008CBAC;
extern M2C_UNK D_8008ED80;
extern M2C_UNK D_8008F2F0;
extern s32 D_800927B0;
extern s32 D_80095CF0;
extern s32 D_8009CC40;
extern M2C_UNK D_8009CE10;

void func_800343AC(void *arg0, M2C_UNK *arg1) {
    M2C_UNK *sp18;
    M2C_UNK *sp20;
    M2C_UNK *sp28;
    M2C_UNK *sp30;
    M2C_UNK *sp38;
    M2C_UNK *sp40;
    M2C_UNK *sp48;
    void *sp50;
    M2C_UNK *temp_a0;
    M2C_UNK *temp_a0_2;
    M2C_UNK *var_a1;
    M2C_UNK *var_s4;
    M2C_UNK *var_v0_2;
    M2C_UNK *var_v0_4;
    s32 var_a0;
    s32 var_v0_3;
    s32 var_v0_5;
    void **var_v1;
    void *var_v0;

    var_s4 = arg1;
    func_800527A0(0);
    func_80048718();
    if (D_8007D704 != 0) {
        var_a1 = &D_80077924;
    } else {
        var_a1 = &D_80077934;
    }
    func_8003F6FC(&D_80083AF0, var_a1);
    func_80036B64(0x78);
    var_a0 = 5;
    var_v1 = &D_80081AD0 + 0x14;
    var_v0 = &D_8007F618 + 0x1CC;
    do {
        *var_v1 = var_v0;
        var_v1 -= 4;
        var_a0 -= 1;
        var_v0 -= 0x5C;
    } while (var_a0 >= 0);
    var_v0_2 = M2C_FIELD(arg0, M2C_UNK **, 8);
    temp_a0 = arg0 + 8;
loop_6:
    sp18 = var_v0_2;
    sp20 = temp_a0;
    if (sp18 != temp_a0) {
        var_v0_3 = 1;
        if (sp18 != &D_800827A4) {
            var_v0_2 = *sp18;
            sp20 = sp18;
            goto loop_6;
        }
    } else {
        var_v0_3 = 0;
    }
    if (var_v0_3 != 0) {
        M2C_FIELD(M2C_FIELD(&D_800827A4, void **, 0), void ***, 4) = (void **) M2C_FIELD(&D_800827A4, void ***, 4);
        *M2C_FIELD(&D_800827A4, void ***, 4) = M2C_FIELD(&D_800827A4, void **, 0);
    }
    var_v0_4 = M2C_FIELD(arg0, M2C_UNK **, 8);
    temp_a0_2 = arg0 + 8;
loop_13:
    sp18 = var_v0_4;
    sp20 = temp_a0_2;
    if (sp18 != temp_a0_2) {
        var_v0_5 = 1;
        if (sp18 != &D_8008B3A4) {
            var_v0_4 = *sp18;
            sp20 = sp18;
            goto loop_13;
        }
    } else {
        var_v0_5 = 0;
    }
    if (var_v0_5 != 0) {
        M2C_FIELD(M2C_FIELD(&D_8008B3A4, void **, 0), void ***, 4) = (void **) M2C_FIELD(&D_8008B3A4, void ***, 4);
        *M2C_FIELD(&D_8008B3A4, void ***, 4) = M2C_FIELD(&D_8008B3A4, void **, 0);
    }
    func_80046188(&D_8008F2F0, &D_8008B3A4);
    func_8001AD28(&D_80082F00);
    func_800431D4(&D_8008ED80);
    func_8004DAF8();
    D_8009CC40 = 1;
    func_80046730(5, 2, 0x5000, 0x10);
    func_8004EA00(&D_8009CE10, 0, 0, 0, 1);
    D_80095CF0 = 0;
    M2C_FIELD(&D_8009CE10, u16 *, 0x70) = (u16) (M2C_FIELD(&D_8009CE10, u16 *, 0x70) & 0xBFFF);
    func_800432AC(&D_8008ED80);
    func_800431F4(&D_8008ED80);
    func_80022B18(&D_800891B0);
    func_8003ED40(&D_80083AF0);
    func_800149E4(&D_800825D8);
    D_8008CBAC = 0;
    D_800927B0 = 0;
    func_80021480(&D_80083BA8);
    func_8003F2F0(&D_80083AF0);
    if (M2C_FIELD(&D_800890E8, s32 *, 0x14) != 0) {
        func_80022560(&D_800890E8);
        return;
    }
    if (var_s4 == NULL) {
        var_s4 = &D_800833B0;
    }
    sp30 = &D_80082F78;
    sp50 = arg0 + 8;
    sp48 = &D_80082F78;
    sp40 = &D_80082F78;
    func_8001C210(&D_80082F78, &sp50);
    sp38 = sp40;
    sp28 = sp30;
    func_8001BDE4(&D_80082F78, var_s4);
    func_8004217C(&D_8008ED80, 5);
    func_800375C0(&D_8008C8F4, 0);
    M2C_FIELD(&D_80083AF0, s32 *, 0xA0) = 1;
}

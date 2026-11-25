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

M2C_UNK func_8001C210(M2C_UNK *, M2C_UNK **);       /* extern */
M2C_UNK func_80030464(M2C_UNK *);                   /* extern */
M2C_UNK func_80037744(M2C_UNK *);                   /* extern */
M2C_UNK func_8003F198(M2C_UNK *);                   /* extern */
M2C_UNK func_8003F2B8(M2C_UNK *);                   /* extern */
M2C_UNK func_800432AC(M2C_UNK *);                   /* extern */
M2C_UNK func_80046730(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80048718();                            /* extern */
M2C_UNK func_8004DAF8();                            /* extern */
M2C_UNK func_8004EA00(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK D_80082F78;
extern M2C_UNK D_80083AF0;
extern s32 D_80083B90;
extern M2C_UNK D_8008B3A4;
extern M2C_UNK D_8008C8F4;
extern s32 D_8008CBAC;
extern M2C_UNK D_8008ED80;
extern s32 D_800927B0;
extern s32 D_80095CF0;
extern M2C_UNK D_8009CE10;

void func_80034244(void *arg0) {
    M2C_UNK *sp18;
    M2C_UNK *sp20;
    M2C_UNK *sp28;
    M2C_UNK *sp30;
    M2C_UNK *sp38;
    M2C_UNK *sp40;
    M2C_UNK *temp_s0;
    M2C_UNK *var_v0;
    s32 var_a0;

    func_80048718();
    func_80037744(&D_8008C8F4);
    func_8003F2B8(&D_80083AF0);
    func_8004DAF8();
    func_80046730(5, 2, 0x5000, 0x10);
    func_8004EA00(&D_8009CE10, 0, 0, 0, 1);
    D_80095CF0 = 0;
    M2C_FIELD(&D_8009CE10, u16 *, 0x70) = (u16) (M2C_FIELD(&D_8009CE10, u16 *, 0x70) & 0xBFFF);
    func_800432AC(&D_8008ED80);
    func_8003F198(&D_80083AF0);
    func_80030464(&D_8008B3A4);
    temp_s0 = arg0 + 8;
    sp20 = &D_8008B3A4;
    sp38 = &D_8008B3A4;
    sp30 = &D_8008B3A4;
    sp40 = temp_s0;
    func_8001C210(&D_8008B3A4, &sp40);
    sp28 = sp30;
    sp18 = sp20;
    var_v0 = M2C_FIELD(arg0, M2C_UNK **, 8);
    var_a0 = 1;
loop_1:
    sp18 = var_v0;
    sp20 = temp_s0;
    if (sp18 != temp_s0) {
        if (sp18 != &D_80082F78) {
            var_v0 = *sp18;
            sp20 = sp18;
            goto loop_1;
        }
    } else {
        var_a0 = 0;
    }
    if (var_a0 != 0) {
        M2C_FIELD(M2C_FIELD(&D_80082F78, void **, 0), void ***, 4) = (void **) M2C_FIELD(&D_80082F78, void ***, 4);
        *M2C_FIELD(&D_80082F78, void ***, 4) = M2C_FIELD(&D_80082F78, void **, 0);
    }
    D_8008CBAC = 0;
    D_800927B0 = 0;
    D_80083B90 = 0;
}

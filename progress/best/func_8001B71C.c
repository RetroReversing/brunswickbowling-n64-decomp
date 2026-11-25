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
M2C_UNK func_8001BDE4(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_8001C210(M2C_UNK *, M2C_UNK **);       /* extern */
M2C_UNK func_8002E428(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_8004217C(M2C_UNK *, M2C_UNK);          /* extern */
extern s32 D_80082040;
extern M2C_UNK D_800825D8;
extern M2C_UNK D_8008ABE0;
extern M2C_UNK D_8008BA98;
extern s32 D_8008E9CC;
extern M2C_UNK D_8008ED80;

void func_8001B71C(M2C_UNK *arg0, M2C_UNK arg1) {
    M2C_UNK *sp10;
    M2C_UNK *sp18;
    M2C_UNK *sp20;
    M2C_UNK *sp28;
    M2C_UNK *sp30;
    M2C_UNK *sp38;
    M2C_UNK *sp40;
    M2C_UNK *sp48;
    M2C_UNK *sp50;
    M2C_UNK *sp58;
    M2C_UNK *sp60;
    M2C_UNK *sp68;
    M2C_UNK *sp70;

    M2C_FIELD(arg0, s16 *, 0x2C) = (s16) M2C_FIELD(&D_8008ED80, s16 *, 0x318);
    M2C_FIELD(&D_8008ED80, s16 *, 0x318) = -0xA0;
    func_8002E428(&D_8008ABE0, -0xA0);
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) D_80082040;
    func_800149E4(&D_800825D8);
    D_8008E9CC = 0;
    func_8004217C(&D_8008ED80, 5);
loop_1:
    sp18 = &D_8008BA98;
    sp10 = D_8008BA98;
    if (D_8008BA98 != &D_8008BA98) {
        M2C_FIELD(M2C_FIELD(D_8008BA98, void **, 0), void ***, 4) = (void **) M2C_FIELD(D_8008BA98, void ***, 4);
        *M2C_FIELD(D_8008BA98, void ***, 4) = M2C_FIELD(D_8008BA98, void **, 0);
        sp40 = arg0 + 0x34;
        sp20 = sp10;
        sp38 = sp10;
        sp30 = sp10;
        func_8001C210(sp10, &sp40);
        sp28 = sp30;
        sp18 = sp20;
        goto loop_1;
    }
    sp50 = arg0;
    sp68 = arg0;
    sp60 = arg0;
    sp70 = &D_8008BA98;
    func_8001C210(arg0, &sp70);
    sp58 = sp60;
    sp48 = sp50;
    M2C_FIELD(arg0, s32 *, 0x30) = 1;
    func_8001BDE4(arg0, arg1);
}

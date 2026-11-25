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

M2C_UNK func_800149E4(s32);                         /* extern */
M2C_UNK func_80016604(M2C_UNK *);                   /* extern */
M2C_UNK func_8001C210(void *, M2C_UNK **);          /* extern */
M2C_UNK func_80024834(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_8002E428(M2C_UNK *, s16);              /* extern */
M2C_UNK func_8003E500(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_8003FEDC(M2C_UNK *);                   /* extern */
extern M2C_UNK D_800827A4;
extern M2C_UNK D_80083AF0;
extern M2C_UNK D_80089830;
extern M2C_UNK D_8008ABE0;
extern M2C_UNK D_8008BA98;
extern M2C_UNK D_8008E9B0;
extern s16 D_8008F098;

void func_8001B858(void *arg0) {
    void *sp10;
    void *sp18;
    void *sp20;
    void *sp28;
    void *sp30;
    void *sp38;
    void *sp40;
    M2C_UNK *sp48;
    s16 temp_a1;
    void *temp_a0;
    void *temp_s0;

    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    if (M2C_FIELD(&D_80089830, s32 *, 0x34) != 0) {
        func_80024834(&D_80089830, 0);
    }
    temp_a1 = M2C_FIELD(arg0, s16 *, 0x2C);
    D_8008F098 = temp_a1;
    func_8002E428(&D_8008ABE0, temp_a1);
    temp_s0 = arg0 + 0x34;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), void ***, 4) = (void **) M2C_FIELD(arg0, void ***, 4);
    *M2C_FIELD(arg0, void ***, 4) = M2C_FIELD(arg0, void **, 0);
loop_3:
    temp_a0 = M2C_FIELD(arg0, void **, 0x34);
    sp18 = temp_s0;
    sp10 = temp_a0;
    if (temp_a0 != temp_s0) {
        M2C_FIELD(M2C_FIELD(temp_a0, void **, 0), void ***, 4) = (void **) M2C_FIELD(temp_a0, void ***, 4);
        *M2C_FIELD(temp_a0, void ***, 4) = M2C_FIELD(temp_a0, void **, 0);
        sp48 = &D_8008BA98;
        sp28 = sp10;
        sp40 = sp10;
        sp38 = sp10;
        func_8001C210(sp10, &sp48);
        sp30 = sp38;
        sp20 = sp28;
        goto loop_3;
    }
    func_80016604(&D_800827A4);
    func_8003E500(&D_80083AF0, -1);
    func_800149E4(M2C_FIELD(arg0, s32 *, 0x28));
    func_8003FEDC(&D_8008E9B0);
    M2C_FIELD(&D_8008E9B0, s32 *, 0x1C) = 1;
}

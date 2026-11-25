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

M2C_UNK func_8000EC00(s16, M2C_UNK);                /* extern */
M2C_UNK func_8000FB40();                            /* extern */
s32 func_8000FCD0();                                /* extern */
M2C_UNK func_8001C210(void **);                     /* extern */
M2C_UNK func_8002AAC0(s16);                         /* extern */
M2C_UNK func_8002E428(M2C_UNK *, M2C_UNK, M2C_UNK *, void *); /* extern */
M2C_UNK func_800322E0(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_80032744(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_80032870(void *);                      /* extern */
M2C_UNK func_80032B14(void *, M2C_UNK);             /* extern */
M2C_UNK func_80037264(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_8003AEBC(s16);                         /* extern */
M2C_UNK func_800452EC(M2C_UNK *);                   /* extern */
extern s32 D_80082040;
extern M2C_UNK D_8008ABE0;
extern M2C_UNK D_8008BA60;
extern M2C_UNK D_8008BA90;
extern M2C_UNK D_8008ED80;
extern M2C_UNK D_80092484;
extern s32 D_800925F0;
extern M2C_UNK D_8009261C;
extern M2C_UNK D_800926E8;

void func_80032EC8(void *arg0, void *arg1) {
    void *sp20;
    void *sp28;
    void *sp30;
    void *sp38;
    void *sp40;

    M2C_FIELD(M2C_FIELD(arg1, void **, 0), void ***, 4) = (void **) M2C_FIELD(arg1, void ***, 4);
    *M2C_FIELD(arg1, void ***, 4) = M2C_FIELD(arg1, void **, 0);
    sp20 = arg0;
    sp38 = arg0;
    sp30 = arg0;
    sp40 = &D_8008BA90 + 8;
    func_8001C210(&sp40);
    sp28 = sp30;
    M2C_FIELD(arg0, void **, 0x14) = arg1;
    M2C_FIELD(arg0, s32 *, 0x320) = (s32) M2C_FIELD(&D_80092484, s32 *, 0xA0);
    M2C_FIELD(arg0, s32 *, 0x324) = (s32) M2C_FIELD(&D_800926E8, s32 *, 0xA0);
    M2C_FIELD(arg0, s32 *, 0x328) = (s32) M2C_FIELD(&D_8009261C, s32 *, 0xA0);
    M2C_FIELD(&D_8009261C, s32 *, 0xA0) = 1;
    M2C_FIELD(&D_800926E8, s32 *, 0xA0) = 1;
    M2C_FIELD(&D_80092484, s32 *, 0xA0) = 0;
    D_800925F0 = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) D_80082040;
    M2C_FIELD(arg0, s16 *, 0x2F8) = (s16) M2C_FIELD(&D_8008ED80, s16 *, 0x318);
    M2C_FIELD(&D_8008ED80, s16 *, 0x318) = -0xA0;
    func_8002E428(&D_8008ABE0, -0xA0, &D_80092484, sp20);
    func_8003AEBC(M2C_FIELD(arg0, s16 *, 0x38A));
    func_8002AAC0(M2C_FIELD(arg0, s16 *, 0x38C));
    func_8000EC00(M2C_FIELD(arg0, s16 *, 0x38E), 1);
    func_8000EC00(M2C_FIELD(arg0, s16 *, 0x330), 0);
    func_80032870(arg0);
    func_80032744(arg0, 1, 1);
    func_8000FB40();
    do {

    } while (func_8000FCD0() != 0);
    M2C_FIELD(arg0, s16 *, 0x2FA) = 0;
    func_80032B14(arg0, 1);
    M2C_FIELD(arg0, s32 *, 0x30C) = 0x216;
    func_80037264(M2C_FIELD(&D_8008BA60, s32 *, 0), 0, 5, 0, (s32) M2C_FIELD(&D_8008BA60, u8 *, 5), 4);
    M2C_FIELD(arg0, s32 *, 0x2F4) = 0;
    M2C_FIELD(arg0, s32 *, 0x2EC) = 0;
    M2C_FIELD(arg0, s32 *, 0x2F0) = 0;
    if (M2C_FIELD(arg0, s32 *, 0x394) == M2C_FIELD(&D_8008ED80, s32 *, 0x31C)) {
        M2C_FIELD(arg0, s32 *, 0x32C) = 0;
    } else {
        func_800452EC(&D_8008ED80);
        M2C_FIELD(arg0, s32 *, 0x32C) = 1;
    }
    func_800322E0(arg0 + 0x302, 2, 2);
}

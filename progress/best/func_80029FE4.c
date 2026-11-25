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
M2C_UNK func_800149E4(M2C_UNK *);                   /* extern */
M2C_UNK func_8001C210(void **);                     /* extern */
M2C_UNK func_80029B70(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_80029C2C(void *);                      /* extern */
M2C_UNK func_8002E428(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_80032870(M2C_UNK *);                   /* extern */
M2C_UNK func_80037264(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_80047948(M2C_UNK *, f32, f32, f32);    /* extern */
extern u16 D_8007B214;
extern s32 D_80082040;
extern M2C_UNK D_80082648;
extern M2C_UNK D_80089974;
extern M2C_UNK D_80089B14;
extern M2C_UNK D_80089B1C;
extern M2C_UNK D_80089B2C;
extern s32 D_80089B34;
extern s32 D_80089B38;
extern s32 D_80089B3C;
extern M2C_UNK D_8008ABE0;
extern M2C_UNK D_8008B470;
extern M2C_UNK D_8008BA90;
extern M2C_UNK D_8008ED80;
extern M2C_UNK D_800904A4;
extern M2C_UNK D_80092484;
extern s32 D_800925F0;
extern M2C_UNK D_8009261C;
extern M2C_UNK D_800926E8;
extern s32 D_80092854;
extern M2C_UNK D_80092880;

void func_80029FE4(void *arg0, void *arg1, s32 arg2) {
    void *sp20;
    void *sp28;
    void *sp30;
    void *sp38;
    void *sp40;
    M2C_UNK *var_s0;
    M2C_UNK *var_s1;
    M2C_UNK *var_s2;
    s32 var_s4;

    M2C_FIELD(M2C_FIELD(arg1, void **, 0), void ***, 4) = (void **) M2C_FIELD(arg1, void ***, 4);
    *M2C_FIELD(arg1, void ***, 4) = M2C_FIELD(arg1, void **, 0);
    sp20 = arg0;
    sp38 = arg0;
    sp30 = arg0;
    sp40 = &D_8008BA90 + 8;
    func_8001C210(&sp40);
    sp28 = sp30;
    M2C_FIELD(arg0, void **, 0x20) = arg1;
    if (arg2 != 0) {
        M2C_FIELD(arg0, u16 *, 0x1A) = (u16) M2C_FIELD(arg0, u16 *, 0x18);
    } else {
        M2C_FIELD(arg0, u16 *, 0x1A) = -1U;
    }
    var_s4 = 0;
    M2C_FIELD(arg0, u16 *, 0x1C) = (u16) D_8007B214;
    func_8000EC00(0x7FE0, 1);
    func_80032870(&D_8008B470);
    func_8000EC00((s16) M2C_FIELD(arg0, u16 *, 0x18), 1);
    func_80032870(&D_8008B470);
    var_s2 = &D_800904A4;
    var_s1 = &D_80089974;
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) M2C_FIELD(&D_80092484, s32 *, 0xA0);
    var_s0 = &D_80092880;
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(&D_800926E8, s32 *, 0xA0);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(&D_8009261C, s32 *, 0xA0);
    M2C_FIELD(&D_8009261C, s32 *, 0xA0) = 1;
    M2C_FIELD(&D_800926E8, s32 *, 0xA0) = 1;
    M2C_FIELD(&D_80092484, s32 *, 0xA0) = 1;
    D_800925F0 = 1;
loop_4:
    if (var_s4 < 0xA) {
        func_80047948(var_s0, (f32) M2C_FIELD(var_s1, s32 *, 0), (f32) M2C_FIELD(var_s1, s32 *, 4), (f32) M2C_FIELD(var_s1, s32 *, 8));
        if (M2C_FIELD(var_s2, s32 *, 0xA0) == 0) {
            M2C_FIELD(var_s0, s32 *, 0xA0) = 1;
        } else {
            M2C_FIELD(var_s0, s32 *, 0xA0) = 0;
        }
        var_s2 += 0xCC;
        var_s1 += 0xC;
        var_s0 += 51;
        var_s4 += 1;
        goto loop_4;
    }
    func_80029B70(arg0, 0, 1);
    func_80029C2C(arg0);
    D_80092854 = 0;
    func_80037264(M2C_FIELD(&D_80089B14, s32 *, 0), 0, 1, 0, (s32) M2C_FIELD(&D_80089B14, u8 *, 5), 4);
    func_80037264(M2C_FIELD(&D_80089B1C, s32 *, 0), 0, 1, 0, (s32) M2C_FIELD(&D_80089B1C, u8 *, 5), 4);
    func_80037264(M2C_FIELD(&D_80089B2C, s32 *, 0), 0, 1, 0, (s32) M2C_FIELD(&D_80089B2C, u8 *, 5), 4);
    D_80089B34 = 0;
    D_80089B38 = 0;
    D_80089B3C = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) D_80082040;
    func_800149E4(&D_80082648);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(&D_8008ED80, s16 *, 0x318);
    M2C_FIELD(&D_8008ED80, s16 *, 0x318) = -0xA0;
    func_8002E428(&D_8008ABE0, -0xA0);
}

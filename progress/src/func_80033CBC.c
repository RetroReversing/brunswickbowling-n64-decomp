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

M2C_UNK func_80037310(s32);                         /* extern */
M2C_UNK func_80043A2C(M2C_UNK *);                   /* extern */
M2C_UNK func_80045050(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32, s32, s32); /* extern */
extern s32 D_8007B210;
extern s32 D_8008BA48;
extern s32 D_8008BA50;
extern s32 D_8008BA58;
extern s32 D_8008BA60;
extern s32 D_8008BA68;
extern s32 D_8008BA70;
extern s32 D_8008BA78;
extern s32 D_8008BA80;
extern s32 D_8008BA88;
extern M2C_UNK D_8008ED80;

void func_80033CBC(void *arg0) {
    s32 temp_s0;

    func_80043A2C(&D_8008ED80);
    temp_s0 = (s32) (M2C_FIELD(arg0, s16 *, 0x2FA) * 0xCC) / (s32) D_8007B210;
    func_80037310(D_8008BA48);
    func_80037310(D_8008BA50);
    func_80037310(D_8008BA58);
    func_80037310(D_8008BA60);
    func_80037310(D_8008BA68);
    func_80037310(D_8008BA70);
    func_80037310(D_8008BA78);
    func_80037310(D_8008BA80);
    func_80037310(D_8008BA88);
    func_80045050(&D_8008ED80, 0xD0, 0xDE, 0, 0xD0, 5, 0x60, 0x60, 0x50, 0, 0);
    func_80045050(&D_8008ED80, 0xD2, 0xDF, 0, temp_s0, 3, 0, 0xFF, 0, 0, 0);
}

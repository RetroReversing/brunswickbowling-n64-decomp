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

M2C_UNK func_8002AAC0(M2C_UNK);                     /* extern */
M2C_UNK func_800341B0(M2C_UNK *);                   /* extern */
M2C_UNK func_800346A0(M2C_UNK *);                   /* extern */
s32 func_800353F8(M2C_UNK);                         /* extern */
M2C_UNK func_80035F18(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_80036924();                            /* extern */
M2C_UNK func_80036CA8();                            /* extern */
M2C_UNK func_8003F328(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK func_800432AC(M2C_UNK *);                   /* extern */
M2C_UNK func_800466B0(M2C_UNK);                     /* extern */
M2C_UNK func_8004F8E8();                            /* extern */
extern s32 D_80000300;
extern M2C_UNK D_80083AF0;
extern M2C_UNK D_8008BA90;
extern M2C_UNK D_8008ED80;
extern s32 D_8009C090;
extern u16 D_8009D5F8;

void func_80036830(void) {
    s32 temp_s0;
    s32 var_v0;

    temp_s0 = D_80000300;
    func_800466B0(0);
    func_80036924();
    func_8004F8E8();
    if (temp_s0 == 0) {
        func_80036CA8();
    }
    func_8002AAC0(-1);
    func_800341B0(&D_8008BA90);
    M2C_FIELD(&D_80083AF0, s32 *, 0x9C) = 0;
    M2C_FIELD(&D_80083AF0, s32 *, 0xA0) = 0;
    func_800432AC(&D_8008ED80);
    func_8003F328(&D_80083AF0, 0x10A, 0x3C, 0, 0, 0, 0);
    M2C_FIELD(&D_80083AF0, s32 *, 0xA0) = 1;
    M2C_FIELD(&D_80083AF0, s32 *, 0x9C) = 1;
    if (D_8009D5F8 & 0x1000) {
        var_v0 = func_800353F8(0);
    } else {
        var_v0 = 1;
    }
    if (var_v0 != 0) {
        D_8009C090 = 1;
        func_80035F18(0, 1, 1);
        D_8009C090 = 0;
    }
    func_800346A0(&D_8008BA90);
loop_8:
    goto loop_8;
}

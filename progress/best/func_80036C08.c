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
M2C_UNK func_8003F328(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK func_800432AC(M2C_UNK *);                   /* extern */
extern M2C_UNK D_80083AF0;
extern M2C_UNK D_8008BA90;
extern M2C_UNK D_8008ED80;

void func_80036C08(void) {
    func_8002AAC0(-1);
    func_800341B0(&D_8008BA90);
    M2C_FIELD(&D_80083AF0, s32 *, 0x9C) = 0;
    M2C_FIELD(&D_80083AF0, s32 *, 0xA0) = 0;
    func_800432AC(&D_8008ED80);
    func_8003F328(&D_80083AF0, 0x10A, 0x3C, 0, 0, 0, 0);
    M2C_FIELD(&D_80083AF0, s32 *, 0xA0) = 1;
    M2C_FIELD(&D_80083AF0, s32 *, 0x9C) = 1;
}

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

M2C_UNK func_80036F08(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_8003E740();                            /* extern */
extern M2C_UNK D_80078EF8;
extern M2C_UNK D_80078F00;
extern M2C_UNK D_80078F08;
extern M2C_UNK D_80078F10;
extern M2C_UNK D_80078F18;
extern M2C_UNK D_80078F20;
extern M2C_UNK D_80078F28;
extern M2C_UNK D_80078F30;
extern M2C_UNK D_8008BC10;

void func_8003E7FC(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0) != 1) {
        func_8003E740();
        M2C_FIELD(arg0, void **, 4) = (void *) (arg0 + 0xC);
        M2C_FIELD(arg0, M2C_UNK **, 0xC) = &D_80078F00;
        M2C_FIELD(arg0, M2C_UNK **, 0x10) = &D_80078F08;
        M2C_FIELD(arg0, M2C_UNK **, 0x14) = &D_80078F10;
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &D_80078F18;
        M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &D_80078F20;
        M2C_FIELD(arg0, M2C_UNK **, 0x20) = &D_80078F28;
        M2C_FIELD(arg0, s32 *, 0) = 1;
        M2C_FIELD(arg0, M2C_UNK **, 0x24) = &D_80078F30;
        func_80036F08(&D_8008BC10, M2C_FIELD(arg0, M2C_UNK **, 0xC), &D_80078EF8, 0);
        M2C_FIELD(&D_8008BC10, s16 *, 0x10) = (s16) (0x1E0 - ((u16) M2C_FIELD(&D_8008BC10, u16 *, 0x16) >> 1));
        M2C_FIELD(&D_8008BC10, s16 *, 0x12) = (s16) (0x82 - ((u16) M2C_FIELD(&D_8008BC10, u16 *, 0x18) >> 1));
    }
}

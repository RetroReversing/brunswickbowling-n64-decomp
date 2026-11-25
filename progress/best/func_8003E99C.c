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
extern M2C_UNK D_80078F5C;
extern M2C_UNK D_80078F64;
extern M2C_UNK D_80078F6C;
extern M2C_UNK D_80078F74;
extern M2C_UNK D_80078F7C;
extern M2C_UNK D_80078F84;
extern M2C_UNK D_80078F8C;
extern M2C_UNK D_80078F94;
extern M2C_UNK D_80078F9C;
extern M2C_UNK D_8008BCD0;
extern M2C_UNK D_8008C250;

void func_8003E99C(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0) != 2) {
        func_8003E740();
        M2C_FIELD(arg0, M2C_UNK **, 0x34) = &D_80078F5C;
        M2C_FIELD(arg0, void **, 4) = (void *) (arg0 + 0x34);
        M2C_FIELD(arg0, M2C_UNK **, 0x38) = &D_80078F64;
        M2C_FIELD(arg0, M2C_UNK **, 0x3C) = &D_80078F6C;
        M2C_FIELD(arg0, M2C_UNK **, 0x40) = &D_80078F74;
        M2C_FIELD(arg0, M2C_UNK **, 0x44) = &D_80078F7C;
        M2C_FIELD(arg0, M2C_UNK **, 0x48) = &D_80078F84;
        M2C_FIELD(arg0, M2C_UNK **, 0x4C) = &D_80078F8C;
        M2C_FIELD(arg0, M2C_UNK **, 0x50) = &D_80078F94;
        M2C_FIELD(arg0, s32 *, 0) = 2;
        M2C_FIELD(arg0, M2C_UNK **, 0x54) = &D_80078F9C;
        func_80036F08(&D_8008C250, &D_80078F5C, &D_80078EF8, 0);
        func_80036F08(&D_8008BCD0, M2C_FIELD(arg0, M2C_UNK **, 0x34), &D_80078EF8, 0);
        M2C_FIELD(&D_8008BCD0, s16 *, 0x10) = (s16) (0x19F - ((u16) M2C_FIELD(&D_8008BCD0, u16 *, 0x16) >> 1));
        M2C_FIELD(&D_8008BCD0, s16 *, 0x12) = (s16) (0x64 - ((u16) M2C_FIELD(&D_8008BCD0, u16 *, 0x18) >> 1));
    }
}

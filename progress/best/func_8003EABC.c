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
extern M2C_UNK D_80078FA4;
extern M2C_UNK D_80078FB0;
extern M2C_UNK D_80078FBC;
extern M2C_UNK D_80078FC8;
extern M2C_UNK D_80078FD4;
extern M2C_UNK D_8008BC50;
extern M2C_UNK D_8008BC90;

void func_8003EABC(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0) != 3) {
        func_8003E740();
        M2C_FIELD(arg0, void **, 4) = (void *) (arg0 + 0x58);
        M2C_FIELD(arg0, M2C_UNK **, 0x58) = &D_80078FA4;
        M2C_FIELD(arg0, M2C_UNK **, 0x5C) = &D_80078FB0;
        M2C_FIELD(arg0, M2C_UNK **, 0x60) = &D_80078FBC;
        M2C_FIELD(arg0, M2C_UNK **, 0x64) = &D_80078FC8;
        M2C_FIELD(arg0, s32 *, 0) = 3;
        M2C_FIELD(arg0, M2C_UNK **, 0x68) = &D_80078FD4;
        func_80036F08(&D_8008BC50, M2C_FIELD(arg0, M2C_UNK **, 0x58), &D_80078EF8, 0);
        M2C_FIELD(&D_8008BC50, s16 *, 0x10) = 0xF9;
        M2C_FIELD(&D_8008BC50, s16 *, 0x12) = 0x5A;
        M2C_FIELD(&D_8008BC90, s16 *, 0x10) = 0x1F9;
        M2C_FIELD(&D_8008BC90, s16 *, 0x12) = 0x5A;
    }
}

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

M2C_UNK func_8002FE38(M2C_UNK *, s32, s32, s32);    /* extern */
extern M2C_UNK D_8008B130;
extern M2C_UNK D_8008B334;
extern M2C_UNK D_8008B3A4;

void func_80032238(void) {
    M2C_FIELD(&D_8008B334, s32 *, 0) = (s32) M2C_FIELD(&D_8008B130, s32 *, 0);
    M2C_FIELD(&D_8008B334, s32 *, 8) = (s32) M2C_FIELD(&D_8008B130, s32 *, 0x38);
    M2C_FIELD(&D_8008B334, s32 *, 0xC) = (s32) M2C_FIELD(&D_8008B130, s32 *, 0x54);
    M2C_FIELD(&D_8008B334, s32 *, 0x10) = (s32) M2C_FIELD(&D_8008B130, s32 *, 0x70);
    M2C_FIELD(&D_8008B334, s32 *, 0x14) = (s32) M2C_FIELD(&D_8008B130, s32 *, 0x8C);
    M2C_FIELD(&D_8008B334, s32 *, 0x18) = (s32) M2C_FIELD(&D_8008B130, s32 *, 0xA8);
    M2C_FIELD(&D_8008B334, s32 *, 0x1C) = (s32) M2C_FIELD(&D_8008B130, s32 *, 0xC4);
    M2C_FIELD(&D_8008B334, s32 *, 4) = (s32) M2C_FIELD(&D_8008B130, s32 *, 0x1C);
    M2C_FIELD(&D_8008B334, s32 *, 0x20) = (s32) M2C_FIELD(&D_8008B130, s32 *, 0xE0);
    func_8002FE38(&D_8008B3A4, M2C_FIELD(&D_8008B130, s32 *, 0x38), M2C_FIELD(&D_8008B130, s32 *, 0x54), M2C_FIELD(&D_8008B130, s32 *, 0x70));
}

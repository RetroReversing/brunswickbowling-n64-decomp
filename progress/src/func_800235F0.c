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

extern M2C_UNK D_8008BDD0;
extern M2C_UNK D_8008BE50;

void func_800235F0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x18) = 1;
    M2C_FIELD(arg0, s16 *, 0x20) = 0x1A;
    M2C_FIELD(arg0, M2C_UNK **, 0x3C) = &D_8008BDD0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s16 *, 0x4A) = 0;
    M2C_FIELD(arg0, s16 *, 0x4C) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x40) = &D_8008BE50;
}

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

extern s16 D_80089304;

void func_8002D7E0(void *arg0) {
  s32 wide_sum;
    M2C_FIELD(arg0, s32 *, 0x14) = 1;
    M2C_FIELD(arg0, s16 *, 0x1C) = 0xC3;
    M2C_FIELD(arg0, s16 *, 0x24) = 0xF0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    wide_sum = D_80089304 + 0xA0;
    M2C_FIELD(arg0, s16 *, 0x26) = (s16) wide_sum;
}

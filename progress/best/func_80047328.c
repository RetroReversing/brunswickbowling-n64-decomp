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

M2C_UNK func_800474F0();                            /* extern */

void func_80047328(void *arg0, void *arg1, s32 arg2) {
  f32 lit_0p0;
    M2C_FIELD(arg0, s32 *, 0xA4) = arg2;
    do { M2C_FIELD(arg0, s32 *, 0xC8) = (s32) M2C_FIELD(arg1, s32 *, 0xC8); } while (0);
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) M2C_FIELD(arg1, s32 *, 0x44);
    func_800474F0();
    lit_0p0 = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x84) = lit_0p0;
    M2C_FIELD(arg0, f32 *, 0x80) = lit_0p0;
    M2C_FIELD(arg0, f32 *, 0x7C) = lit_0p0;
}

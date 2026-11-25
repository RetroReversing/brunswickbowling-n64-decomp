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

#define sp0 (*(f64 *)(sp + 0x0))
#define unksp4 (*(s32 *)(sp + 0x4))
#define sp8 (*(f64 *)(sp + 0x8))
#define unkspC (*(s32 *)(sp + 0xC))
#define sp10 (*(f64 *)(sp + 0x10))
#define unksp14 (*(s32 *)(sp + 0x14))
void func_80042EE8(void *arg0, f64 arg2, M2C_UNK arg3, f64 arg4, f64 arg6, f64 arg8, f64 arg10, f64 arg12) {
    u8 sp[24];
    sp0 = (arg4 * arg12) - (arg6 * arg10);
    sp8 = (arg6 * arg8) - (arg2 * arg12);
    sp10 = (arg2 * arg10) - (arg4 * arg8);
    M2C_FIELD(arg0, s32 *, 0) = M2C_BITWISE(s32, sp0);
    M2C_FIELD(arg0, s32 *, 4) = unksp4;
    M2C_FIELD(arg0, s32 *, 8) = M2C_BITWISE(s32, sp8);
    M2C_FIELD(arg0, s32 *, 0xC) = unkspC;
    M2C_FIELD(arg0, s32 *, 0x10) = M2C_BITWISE(s32, sp10);
    M2C_FIELD(arg0, s32 *, 0x14) = unksp14;
}

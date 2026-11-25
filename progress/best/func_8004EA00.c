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

void func_8004EA00(void *arg0, s32 arg1, s32 arg2, u32 arg3, s32 arg4) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = ((arg4 & 1) | (((arg3 >> 2) & 0x3E) | (((s16) (arg1 << 8) & ~0x7FF) | ((arg2 * 8) & 0x7C0)))) & 0xFFFF;
    temp_v0 = (temp_v1 << 0x10) | temp_v1;
    M2C_FIELD(arg0, s32 *, 0x98) = (s32) (temp_v0 >> 0x1F);
    M2C_FIELD(arg0, s32 *, 0x9C) = temp_v0;
}

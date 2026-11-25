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

extern s32 D_800A5D60;
extern s32 D_800A5D64;
extern s32 D_800A5D6C;

s32 func_8005FA00(s32 arg0, s32 arg1, u32 arg2, s32 arg3) {
    s32 temp_v0;
    u32 temp;
    s32 temp2;

    do {
    temp = (((u32) ((u32) (((arg0 * arg1) + arg2) - 1) / arg2) >> 4) + 1) * 0x10;
    D_800A5D60 = temp;
    D_800A5D64 = temp - 0x10;
    temp_v0 = (temp * arg3) / 100;
    D_800A5D6C = temp_v0;
    } while (0);
    temp2 = temp_v0 + 0x10;
    return ((((u32) ((u32) (((arg0 * arg1) + arg2) - 1) / arg2) >> 4) + 1) * 0x10) + temp2;
}

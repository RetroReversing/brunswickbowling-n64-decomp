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

M2C_UNK func_80030018(void *);                      /* extern */
M2C_UNK func_800301F8();                            /* extern */

void func_8002FFC0(void *arg0) {
    u8 temp_v0;

    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    temp_v0 = M2C_FIELD(arg0, u8 *, 0x49) - 1;
    M2C_FIELD(arg0, u8 *, 0x49) = temp_v0;
    if (!(temp_v0 & 0xFF)) {
        func_800301F8();
    }
    if (M2C_FIELD(arg0, s32 *, 0x20) == 0) {
        func_80030018(arg0);
    }
}

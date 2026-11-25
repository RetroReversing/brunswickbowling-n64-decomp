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

void func_8002EB74(s32 arg0, s32 arg1, u16 *arg2, u16 *arg3, u16 *arg4, u16 *arg5, u16 *arg6, u16 *arg7) {
    void *temp_a0;
    void *temp_v1;

    temp_v1 = arg0 + (arg1 * 4);
    *arg2 = M2C_FIELD(temp_v1, u16 *, 0x24);
    *arg3 = M2C_FIELD(temp_v1, u16 *, 0x26);
    *arg4 = M2C_FIELD(temp_v1, u16 *, 0x3C);
    temp_a0 = arg0 + (arg1 * 2);
    *arg5 = M2C_FIELD(temp_v1, u16 *, 0x3E);
    *arg6 = M2C_FIELD(temp_a0, u16 *, 0x54);
    *arg7 = M2C_FIELD(temp_a0, u16 *, 0x60);
}

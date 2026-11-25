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

s32 func_8006E42C(void *arg0, s32 arg1, s32 arg2, s32 arg3, u16 *arg4) {
    s32 temp_a2;
    u16 temp_v1;
    u16 var_v0;

    var_v0 = (arg3 << 8) | (arg2 & 0xFF);
loop_1:
    temp_v1 = *(s32 *)(((var_v0 & 0xFF) * 2) + arg1);
    *(s32 *)(arg1 + ((var_v0 & 0xFF) * 2)) = 3;
    temp_a2 = temp_v1 & 0xFFFF;
    if (temp_a2 >= M2C_FIELD(arg0, s32 *, 0x60)) {
        var_v0 = temp_v1;
        if (((u32) temp_a2 >> 8) == (arg3 & 0xFF)) {
            goto loop_1;
        }
    }
    *arg4 = temp_v1;
    return 0;
}

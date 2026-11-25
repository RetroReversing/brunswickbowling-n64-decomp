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

M2C_UNK func_8002BE68(void *);                      /* extern */
M2C_UNK func_8002C0DC(void *, s16, s16, M2C_UNK);   /* extern */

void func_8002D1A8(void *arg0, s16 arg1, s16 arg2, M2C_UNK arg3) {
    s32 temp_v1;
    void *temp_s0;
    void *var_a0;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x108);
    if (temp_v1 < 0xC) {
        var_a0 = arg0 + ((temp_v1 * 0x14) + 4);
    } else {
        temp_s0 = arg0 + 0xF4;
        func_8002BE68(temp_s0);
        var_a0 = temp_s0;
    }
    func_8002C0DC(var_a0, arg1, arg2, arg3);
    M2C_FIELD(arg0, s32 *, 0x118) = (s32) ((arg2 << 0x10) == 0);
}

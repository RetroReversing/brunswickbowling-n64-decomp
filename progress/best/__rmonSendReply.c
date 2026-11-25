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

s32 func_8005FEB0(u32 *, s32, M2C_UNK);             /* extern */
M2C_UNK func_8006833C(u32 *);                       /* extern */

void __rmonSendReply(u32 *arg0, u32 arg1, s8 arg2) {
    s32 var_s0;
    u32 *var_a0;
    u32 var_s0_2;

    var_s0 = 0;
    M2C_FIELD(arg0, u32 *, 0) = arg1;
    var_a0 = &arg1;
    do {
        var_s0 += func_8005FEB0(var_a0, 4 - var_s0, 8);
        var_a0 = &arg1 + var_s0;
    } while (var_s0 < 4);
    var_s0_2 = 0;
    M2C_FIELD(arg0, s8 *, 8) = 2;
    M2C_FIELD(arg0, s8 *, 5) = arg2;
    if (arg1 != 0) {
        var_a0 = arg0;
        do {
            var_s0_2 += func_8005FEB0(var_a0, arg1 - var_s0_2, 8);
            var_a0 = arg0 + var_s0_2;
        } while (var_s0_2 < arg1);
    }
    func_8006833C(var_a0);
}

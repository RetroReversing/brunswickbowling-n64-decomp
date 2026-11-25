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

s32 func_8005FEB0(void *, s32, M2C_UNK);            /* extern */

void __rmonSendHeader(void *arg0_in, u32 arg1, s8 arg2) {
  void * arg0;
    volatile u64 scratch;
    u32 var_s0;
    void *var_a0;
    u32 temp;
  arg0 = arg0_in;

    var_s0 = 0;
    M2C_FIELD(arg0, s8 *, 8) = 2;
    M2C_FIELD(arg0, s8 *, 5) = arg2;
    if (arg1 != 0) {
        var_a0 = arg0;
        do {
            do { temp = arg1 - var_s0; } while (0);
            var_s0 += func_8005FEB0(var_a0, temp, 8);
            var_a0 = arg0 + var_s0;
        } while (var_s0 < arg1);
    }
}

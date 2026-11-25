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

void func_800379D0(void *arg0) {
    s32 var_v0;
    void *temp_v1;
    void *var_a0;

    var_a0 = arg0;
    if (M2C_FIELD(var_a0, s32 *, 0x138) == 0) {
        do { temp_v1 = var_a0 + 0x30; } while (0);
        if (M2C_FIELD(var_a0, s32 *, 0x44) != 0) {
            var_v0 = (s32) var_a0 < (s32) temp_v1;
loop_3:
            if (var_v0 != 0) {
                M2C_FIELD(var_a0, s32 *, 0x44) = 0;
                var_a0 += 4;
                var_v0 = (s32) var_a0 < (s32) temp_v1;
                if (M2C_FIELD(var_a0, s32 *, 0x44) != 0) {
                    goto loop_3;
                }
            }
        }
    }
}

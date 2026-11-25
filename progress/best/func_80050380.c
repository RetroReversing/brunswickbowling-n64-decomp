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

void func_80050380(void *arg0, void *arg1, s32 arg2) {
    f32 *temp_v0;
    f32 temp_ft0;
    f32 temp_ft0_2;
    s32 var_a3;
    s32 var_t0;
    s32 var_t1;
    void *var_a1;
    void *var_v1;

    var_a1 = arg1;
    var_t1 = 0;
    do {
        var_t0 = 0;
        var_v1 = arg0;
        var_a3 = var_t1 * 0x10;
loop_2:
        temp_ft0 = M2C_FIELD(var_a1, f32 *, 0) * M2C_FIELD(var_v1, f32 *, 0);
        temp_v0 = arg2 + var_a3;
        *temp_v0 = temp_ft0;
        temp_ft0_2 = temp_ft0 + (M2C_FIELD(var_a1, f32 *, 4) * M2C_FIELD(var_v1, f32 *, 0x10));
        *temp_v0 = temp_ft0_2;
        var_a3 += 4;
        var_t0 += 1;
        *temp_v0 = temp_ft0_2 + (M2C_FIELD(var_a1, f32 *, 8) * M2C_FIELD(var_v1, f32 *, 0x20));
        var_v1 += 4;
        if (var_t0 < 3) {
            goto loop_2;
        }
        var_t1 += 1;
        var_a1 += 0x10;
    } while (var_t1 < 3);
}

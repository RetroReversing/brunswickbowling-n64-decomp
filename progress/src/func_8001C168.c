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

s32 func_8001C168(void *arg0) {
    s32 var_a0;
    s32 var_a1;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0x1C);
    var_a1 = 0;
    if (temp_v1 != NULL) {
        var_a0 = 0;
        if (M2C_FIELD(temp_v1, s32 *, 0x18) != 0) {
            var_a0 = M2C_FIELD(temp_v1, s32 *, 0x1C) == 0;
        }
        if (var_a0 != 0) {
            var_a1 = 1;
        }
    }
    return var_a1;
}

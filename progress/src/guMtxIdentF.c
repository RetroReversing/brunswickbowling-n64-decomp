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

void guMtxIdentF(M2C_UNK32 *arg0) {
    M2C_UNK32 *var_a1;
    M2C_UNK32 *var_a3;
    s32 var_a2;
    s32 var_v1;
    f32 __repair_matrix_one;

    var_a2 = 0;
    __repair_matrix_one = 1.0f;
    var_a3 = arg0;
    do {
        var_v1 = 0;
        var_a1 = arg0;
        do {
            if (var_a2 == var_v1) {
                *(f32 *)var_a3 = __repair_matrix_one;
            } else {
                *var_a1 = 0;
            }
            var_v1++;
            var_a1++;
        } while (var_v1 < 4);
        var_a3 += 5;
        var_a2++;
        arg0 += 4;
    } while (var_a2 < 4);
}

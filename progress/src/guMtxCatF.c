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

void guMtxCatF(f32 *arg0, s32 arg1, f32 *arg2) {
    f32 (*__m2c_large_stack_left)[4] = (f32 (*)[4])arg0;
    f32 (*__m2c_large_stack_right)[4] = (f32 (*)[4])arg1;
    f32 (*__m2c_large_stack_out)[4] = (f32 (*)[4])arg2;
    int __m2c_large_stack_i, __m2c_large_stack_j, __m2c_large_stack_k;
    f32 __m2c_large_stack_result[4][4];

    for (__m2c_large_stack_i = 0; __m2c_large_stack_i < 4; __m2c_large_stack_i++) {
        for (__m2c_large_stack_j = 0; __m2c_large_stack_j < 4; __m2c_large_stack_j++) {
            __m2c_large_stack_result[__m2c_large_stack_i][__m2c_large_stack_j] = 0.0f;
            for (__m2c_large_stack_k = 0; __m2c_large_stack_k < 4; __m2c_large_stack_k++) {
                __m2c_large_stack_result[__m2c_large_stack_i][__m2c_large_stack_j] += __m2c_large_stack_left[__m2c_large_stack_i][__m2c_large_stack_k] * __m2c_large_stack_right[__m2c_large_stack_k][__m2c_large_stack_j];
            }
        }
    }
    for (__m2c_large_stack_i = 0; __m2c_large_stack_i < 4; __m2c_large_stack_i++) {
        for (__m2c_large_stack_j = 0; __m2c_large_stack_j < 4; __m2c_large_stack_j++) {
            __m2c_large_stack_out[__m2c_large_stack_i][__m2c_large_stack_j] = __m2c_large_stack_result[__m2c_large_stack_i][__m2c_large_stack_j];
        }
    }
}

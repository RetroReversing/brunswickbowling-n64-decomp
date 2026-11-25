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

void guMtxF2L(void *arg0, s32 *arg1) {
    float (*__repair_matrix_rows)[4] = (float (*)[4])arg0;
    int __repair_matrix_row, __repair_matrix_pair;
    int __repair_matrix_first, __repair_matrix_second;
    int *__repair_matrix_integer, *__repair_matrix_fraction;

    __repair_matrix_integer = (int *)arg1;
    __repair_matrix_fraction = (int *)((u8 *)arg1 + 0x20);

    for (__repair_matrix_row = 0; __repair_matrix_row < 4; __repair_matrix_row++)
    for (__repair_matrix_pair = 0; __repair_matrix_pair < 2; __repair_matrix_pair++) {
        __repair_matrix_first = (long)(__repair_matrix_rows[__repair_matrix_row][__repair_matrix_pair * 2] * (float)0x10000);
        __repair_matrix_second = (long)(__repair_matrix_rows[__repair_matrix_row][__repair_matrix_pair * 2 + 1] * (float)0x10000);
        *(__repair_matrix_integer++) = (__repair_matrix_first & 0xffff0000) | ((u32)__repair_matrix_second >> 16);
        *(__repair_matrix_fraction++) = (((u32)__repair_matrix_first << 16) & 0xffff0000) | (__repair_matrix_second & 0xffff);
    }
}

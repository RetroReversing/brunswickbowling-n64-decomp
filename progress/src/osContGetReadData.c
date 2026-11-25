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

extern u8 D_800A771C;
extern M2C_UNK D_800A7720;

struct __m2c_unaligned_output { u16 __m2c_unaligned_half0; u8 __m2c_unaligned_byte2; u8 __m2c_unaligned_byte3; u8 __m2c_unaligned_byte4; };
void osContGetReadData(u16 *arg0) {
    struct __m2c_unaligned_output *__m2c_unaligned_out = (struct __m2c_unaligned_output *)arg0;
    u8 *__m2c_unaligned_src = (u8 *)&D_800A7720;
    struct __m2c_unaligned_input {
        u8 __m2c_unaligned_padding[2];
        u8 __m2c_unaligned_byte2;
        u8 __m2c_unaligned_byte3;
        u16 __m2c_unaligned_half4;
        u8 __m2c_unaligned_byte6;
        u8 __m2c_unaligned_byte7;
    } __m2c_unaligned_row;
    int __m2c_unaligned_index;

    for (__m2c_unaligned_index = 0; __m2c_unaligned_index < D_800A771C; __m2c_unaligned_index++, __m2c_unaligned_src += 8, __m2c_unaligned_out++) {
        __m2c_unaligned_row = *(struct __m2c_unaligned_input *)__m2c_unaligned_src;
        __m2c_unaligned_out->__m2c_unaligned_byte4 = (__m2c_unaligned_row.__m2c_unaligned_byte2 & 0xC0) >> 4;
        if (__m2c_unaligned_out->__m2c_unaligned_byte4 == 0) {
            __m2c_unaligned_out->__m2c_unaligned_half0 = __m2c_unaligned_row.__m2c_unaligned_half4;
            __m2c_unaligned_out->__m2c_unaligned_byte2 = __m2c_unaligned_row.__m2c_unaligned_byte6;
            __m2c_unaligned_out->__m2c_unaligned_byte3 = __m2c_unaligned_row.__m2c_unaligned_byte7;
        }
    }
}

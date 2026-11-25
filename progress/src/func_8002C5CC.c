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

M2C_UNK func_8002BEE0(void *);                      /* extern */
M2C_UNK func_8002C478(s32, u8);                     /* extern */

void func_8002C5CC(void *arg0) {
    s32 temp_a0;
    s32 var_s1;

    var_s1 = 0;
    M2C_FIELD(arg0, u8 *, 0xD) = 0U;
    M2C_FIELD(arg0, s8 *, 9) = 0;
    M2C_FIELD(arg0, s16 *, 4) = 0;
    if (M2C_FIELD(arg0, u8 *, 0xE) != 0) {
        do {
            temp_a0 = M2C_FIELD(arg0, s32 *, 0);
            M2C_FIELD(arg0, u8 *, 0xD) = (u8) (M2C_FIELD(arg0, u8 *, 0xD) + 1);
            if (temp_a0 != 0) {
                func_8002C478(temp_a0, M2C_FIELD((arg0 + var_s1), u8 *, 0xF));
            }
            func_8002BEE0(arg0);
            var_s1 += 1;
        } while (var_s1 < (s32) M2C_FIELD(arg0, u8 *, 0xE));
    }
}

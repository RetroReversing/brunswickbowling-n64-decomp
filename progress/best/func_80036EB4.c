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

void func_80036EB4(s32 arg0, u16 *arg1, s32 arg2) {
    s32 var_t0;
    char *var_a3;
    u16 temp_a1;
    u32 temp_v1;

    var_a3 = arg1;
    var_t0 = 0;
    if (arg2 > 0) {
        do {
            temp_a1 = *(u16 *)var_a3;
            var_t0 += 1;
            temp_v1 = temp_a1 & 0xFFFF;
            *(u16 *)var_a3 = ((temp_v1 << 0xA) & 0xF800) | (temp_v1 & 0x7C0) | ((temp_v1 >> 0xB) * 2) | (temp_a1 & 1);
            var_a3 += 2;
        } while (var_t0 < arg2);
    }
}

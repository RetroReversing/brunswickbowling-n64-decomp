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

extern char D_8007F3E0[];

void func_80011C10(void *arg0, s32 arg1, f64 *arg2, f64 *arg3) {
    s32 temp_a0;
    s32 temp_t1;
    s32 temp_v0;
    s32 var_t0_2;
    u8 var_t0;
    void *temp_v1;

    var_t0 = M2C_FIELD(arg0, u8 *, 0x19);
    if (var_t0 >= 7U) {
        temp_v0 = var_t0 - 7;
        temp_t1 = M2C_FIELD(arg0, s32 *, 0x24);
        var_t0_2 = temp_v0;
        if (temp_t1 != 0) {
            var_t0_2 = temp_v0 - 0xF;
        }
        temp_a0 = (var_t0_2 & 0xFF) % 3;
        var_t0 = temp_a0 + 7;
        if (temp_t1 != 0) {
            var_t0 = temp_a0 + 0xA;
        }
    }
    temp_v1 = (arg1 * 0x10) + ((var_t0 & 0xFF) << 5) + D_8007F3E0;
    *arg2 = M2C_FIELD(temp_v1, f64 *, 0);
    *arg3 = M2C_FIELD(temp_v1, f64 *, 8);
}

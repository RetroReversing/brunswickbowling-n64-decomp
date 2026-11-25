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

extern M2C_UNK (*D_800A5A90)(s32, u8);

void *func_8005E7D4(void *arg0, void *arg1) {
    void *var_s0;

    var_s0 = arg1 + 1 + 1;
    if (M2C_FIELD(arg1, u8 *, 1) & 0x80) {
        var_s0 += 1;
    }
    if ((M2C_FIELD(arg0, s32 *, 0) & 3) == 2) {
        if (D_800A5A90 != NULL) {
            D_800A5A90(M2C_FIELD(arg0, s32 *, 0x44), M2C_FIELD(arg1, u8 *, 0));
        }
    }
    return var_s0;
}

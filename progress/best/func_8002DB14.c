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

s32 func_8002DB9C();
extern s32 D_8007DA44;

void func_8002DB14(void *arg0) {
    s32 var_a1;
    void *var_a0;

    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 1;
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) D_8007DA44;
    var_a1 = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = func_8002DB9C(arg0, 0);
    if (D_8007DA44 > 0) {
        var_a0 = arg0;
        do {
            M2C_FIELD(var_a0, s8 *, 0x34) = 0;
            var_a1 += 1;
            var_a0 += 0x18;
        } while (var_a1 < D_8007DA44);
    }
}

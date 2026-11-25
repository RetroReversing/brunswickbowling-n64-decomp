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

void func_8002E978(void *arg0) {
    s32 var_a1;
    void *var_a0;
    void *var_v1;
int __repair_constant;

    var_a0 = arg0;
    var_a1 = 0;
__repair_constant = -1;
    var_v1 = var_a0;
    M2C_FIELD(var_a0, s32 *, 0x14) = 1;
    M2C_FIELD(var_a0, s32 *, 0x18) = 0;
    M2C_FIELD(var_a0, s32 *, 0x1C) = 0;
    M2C_FIELD(var_a0, s32 *, 0x20) = 0;
    do {
        M2C_FIELD(var_a0, s16 *, 0x54) = __repair_constant;
        M2C_FIELD(var_v1, s16 *, 0x3E) = __repair_constant;
        M2C_FIELD(var_v1, s16 *, 0x3C) = __repair_constant;
        var_v1 += 4;
        var_a1 += 1;
        var_a0 += 2;
    } while (var_a1 < 6);
}

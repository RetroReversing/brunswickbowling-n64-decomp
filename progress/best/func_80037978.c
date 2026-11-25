/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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

void func_80037978(void *arg0) {
    s32 var_a1;
    s32 var_v1_2;
    void *var_v0;
    void *var_v1;

    var_a1 = 0;
    var_v1 = arg0;
    __repair_rows: {
        M2C_FIELD(var_v1, s32 *, 4) = 0;
        M2C_FIELD(var_v1, s32 *, 0xB4) = 0;
        M2C_FIELD(var_v1, s32 *, 0x140) = 0;
        var_a1 += 1;
        var_v1 += 4;
    }
if (var_a1 < 0x10) goto __repair_rows;
    var_v1_2 = 0xB;
    var_v0 = arg0 + 0x2C;
    do {
        M2C_FIELD(var_v0, s32 *, 0x44) = 0;
        var_v1_2 -= 1;
        var_v0 -= 4;
    } while (var_v1_2 >= 0);
    M2C_FIELD(arg0, s16 *, 0) = -1;
    M2C_FIELD(arg0, s16 *, 2) = -1;
    M2C_FIELD(arg0, s32 *, 0x138) = 0;
    M2C_FIELD(arg0, s32 *, 0x13C) = 1;
}

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

extern M2C_UNK D_80079138;
extern M2C_UNK D_8008E9E4;

M2C_UNK *func_8003FE3C(s32 arg1) {
    s32 var_a0;
    u32 temp_v1;
    u32 var_v0;

    var_a0 = 0;
    if (!(arg1 & 1)) {
        var_v0 = arg1 & 0xFF;
loop_2:
        temp_v1 = var_v0 >> 1;
        var_a0 += 1;
        if (var_a0 >= 5) {
            return &D_80079138;
        }
        var_v0 = temp_v1 & 0xFF;
        if (temp_v1 & 1) {
            /* Duplicate return node #5. Try simplifying control flow for better match */
            return (&D_8008E9E4)[var_a0];
        }
        goto loop_2;
    }
    return *((var_a0 * 4) + &D_8008E9E4);
}

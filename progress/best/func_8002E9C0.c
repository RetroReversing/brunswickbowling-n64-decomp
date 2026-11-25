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

s32 func_8002EAC0();
extern s32 D_8007DA40;
extern char D_8008B0F0[];

void func_8002E9C0(void *arg0) {
    s16 var_a0;
    s32 temp_v1;
    s32 var_a1;
    s32 var_v1;

    func_8002EAC0(arg0, D_8008B0F0);
    var_v1 = 6;
    if (D_8007DA40 < 4) {
        var_v1 = 4;
    }
    M2C_FIELD(arg0, s32 *, 0x20) = var_v1;
    var_a0 = 0;
loop_3:
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x20);
    if (var_a0 < temp_v1) {
        var_a1 = 0;
        if ((temp_v1 ^ 4) == 0) {
            var_a1 = 3;
        }
        M2C_FIELD((arg0 + (((var_a0 & 1) * 2) + ((var_a1 + (var_a0 / 2)) * 4))), s16 *, 0x3C) = var_a0;
        var_a0 += 1;
        goto loop_3;
    }
}

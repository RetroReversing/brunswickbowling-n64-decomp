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

extern M2C_UNK D_8009C220;
extern M2C_UNK D_8009C240;
extern M2C_UNK D_8009C430;
extern s16 D_8009C528;
extern s16 D_8009C52A;

void func_8003FD9C(void) {
    s32 *var_v1;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a1;
    s32 var_a2;
    s32 var_v1_2;
    s32 var_v1_3;
    s8 *var_v0;

    var_a0 = 0x3D;
    var_v1 = &D_8009C430 + 0xF4;
    D_8009C528 = 0;
    D_8009C52A = 0;
    do {
        *var_v1 = 1;
        var_a0 -= 1;
        var_v1 -= 4;
    } while (var_a0 >= 0);
    var_a2 = 0;
    var_a1 = 0;
loop_3:
    var_a0_2 = 0;
    if (var_a2 < 4) {
        var_v1_2 = var_a1;
        __repair_rows: {
            *(var_v1_2 + &D_8009C240) = 0;
            var_a0_2 += 1;
            var_v1_2 += 2;
        }
if (var_a0_2 < 0x3E) goto __repair_rows;
        var_a1 += 0x7C;
        var_a2 += 1;
        goto loop_3;
    }
    var_v1_3 = 0x16;
    var_v0 = &D_8009C220 + 0x16;
    do {
        *var_v0 = 0;
        var_v1_3 -= 1;
        var_v0 -= 1;
    } while (var_v1_3 >= 0);
}

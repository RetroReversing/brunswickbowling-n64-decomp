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

extern unsigned char D_8008B3B8;
void *func_800205F8();
extern char D_8008B3A4[];

s32 func_80020658(s32 arg0) {
    s32 var_s0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    u8 temp_a1;
    void *temp_v0;

    var_s0 = 0;
loop_1:
    if (var_s0 < 6) {
        temp_v0 = func_800205F8(arg0, var_s0);
        temp_a1 = M2C_FIELD(temp_v0, u8 *, 0);
        var_v1 = 0;
        if (D_8008B3B8 == temp_a1) {
            var_v1 = M2C_FIELD((D_8008B3A4 + 0x14), u8 *, 1) == M2C_FIELD(temp_v0, u8 *, 1);
        }
        var_v0 = 1;
        if (var_v1 == 0) {
            var_v0_2 = 0;
            if (temp_a1 == 0) {
                var_v0_2 = M2C_FIELD(temp_v0, u8 *, 1) == 0;
            }
            var_v0 = 1;
            if (var_v0_2 == 0) {
                var_s0 += 1;
                goto loop_1;
            }
        }
    } else {
        var_v0 = 0;
    }
    return var_v0;
}

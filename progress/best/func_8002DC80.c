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

extern s32 D_8007DA44;
extern char D_80081AD0[];

s32 func_8002DC80(void *arg0, s32 arg1) {
    s32 var_a1;
    s32 var_a3;
    s32 var_t0;
    s32 var_v0;
    void *temp_a2;

    var_t0 = 0;
    var_a1 = arg1 + 1;
loop_1:
    if (var_a1 >= D_8007DA44) {
        var_a1 = 0;
    }
    var_v0 = var_a1 * 4;
    if (var_a1 == M2C_FIELD(arg0, s32 *, 0xC)) {
        if ((M2C_FIELD(arg0, s32 *, 4) != 0) || (var_t0 = 1, (var_t0 != 0))) {
            return 1;
        }
        var_v0 = var_a1 * 4;
        goto block_8;
    }
block_8:
    temp_a2 = M2C_FIELD(*(var_v0 + D_80081AD0), void **, 0x44);
    var_a3 = 0;
    if (((M2C_FIELD(arg0, s32 *, 4) != 0) && (M2C_FIELD(temp_a2, s32 *, 0x118) == 0) && (M2C_FIELD(arg0, s32 *, 8) == 0)) || (M2C_FIELD(temp_a2, s32 *, 0x114) != 0) || ((var_t0 != 0) && (M2C_FIELD(temp_a2, s32 *, 0x118) == 0))) {
        var_a3 = 1;
    }
    var_a1 += 1;
    if (var_a3 == 0) {
        return 0;
    }
    goto loop_1;
}

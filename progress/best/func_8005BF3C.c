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

extern s32 D_800A5A54;
extern s32 D_800A5A5C;

s32 func_8005BF3C(s32 arg0) {
    s32 var_a1;
    void *temp_v0;
    void *var_v1;

    if (arg0 == 0) {
        return 0;
    }
    var_a1 = 0;
    if (D_800A5A54 > 0) {
        var_v1 = D_800A5A5C + 0x78;
loop_5:
        if (M2C_FIELD(var_v1, s32 *, -0x34) != arg0) {
            var_a1 += 1;
            var_v1 += 0x13C;
            if (var_a1 >= D_800A5A54) {
                goto block_11;
            }
            goto loop_5;
        }
        temp_v0 = M2C_FIELD(var_v1, void **, -4);
        if (temp_v0 == NULL) {
            return M2C_FIELD(M2C_FIELD(var_v1, void **, 0), s32 *, 0x14);
        }
        return M2C_FIELD(temp_v0, s32 *, 0x20);
    }
block_11:
    return 0;
}

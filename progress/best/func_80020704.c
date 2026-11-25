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

void *func_800205E0();
extern s32 D_8007DA40;
extern char D_8007DA48[];

s32 func_80020704(s32 arg0, s32 arg1, s32 *arg2, s32 arg3) {
    s32 *var_a2;
    s32 var_a0;
    s32 var_a3;
    s32 var_s0;
    s32 var_t2;
    s32 var_v1;
    void *temp_v0;

    var_a2 = arg2;
    var_a3 = arg3;
    var_s0 = 0;
loop_1:
    if (var_s0 < 0xF) {
        temp_v0 = func_800205E0(arg0, var_s0, var_a2, var_a3);
        var_v1 = 0;
        if (M2C_FIELD(temp_v0, u8 *, 0) == 0) {
            var_v1 = M2C_FIELD(temp_v0, u8 *, 1) == 0;
        }
        var_t2 = 0;
        if (var_v1 == 0) {
            var_a3 = 0;
            var_a2 = D_8007DA48;
loop_6:
            var_a0 = 0;
            if (var_a3 < D_8007DA40) {
                if (M2C_FIELD(temp_v0, u8 *, 0) == M2C_FIELD(var_a2, u8 *, 8)) {
                    var_a0 = M2C_FIELD(temp_v0, u8 *, 1) == M2C_FIELD((var_a2 + 8), u8 *, 1);
                }
                if (var_a0 != 0) {
                    var_t2 = 1;
                } else {
                    var_a2 += 0x1C4;
                    var_a3 += 1;
                    goto loop_6;
                }
            }
            var_s0 += 1;
            if (var_t2 == 0) {
                return 0;
            }
            goto loop_1;
        }
        goto block_15;
    }
block_15:
    return 1;
}

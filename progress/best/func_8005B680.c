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

s32 func_8005D954(s32, void *, s32, M2C_UNK, s32, s32); /* extern */
s32 func_8005DA04(void *, s32, M2C_UNK, s32, s32);  /* extern */
extern s32 D_800A5A54;
extern s32 D_800A5A60;
extern s32 D_800A5A78;
extern void *D_800A5A88;
extern void *D_800A5A8C;

s32 func_8005B680(s32 arg0, M2C_UNK arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 var_a0;
    s32 var_a2;
    s32 var_t0;
    s32 var_v0;
    void *var_a1;
    void *var_v1;

    var_t0 = arg4;
    if (D_800A5A8C == NULL) {
        var_a1 = D_800A5A88;
        if (var_a1 == NULL) {
            D_800A5A78 = 0;
            return 0;
        }
        goto block_4;
    }
    var_a1 = D_800A5A8C;
    D_800A5A8C = NULL;
block_4:
    if (D_800A5A78 == 0) {
        D_800A5A78 = M2C_FIELD(var_a1, s32 *, 0x10);
    }
    var_a2 = 4;
    if ((arg3 != 0) && (var_a0 = D_800A5A60, ((D_800A5A54 > 4) != 0))) {
        var_v1 = var_a0 + 0x78;
loop_9:
        if (M2C_FIELD(var_v1, u16 *, 0x2E) != arg0) {
            var_a2 += 1;
            goto block_18;
        }
        if (M2C_FIELD(var_v1, s32 *, 0) != var_a1) {
            var_a2 += 1;
block_18:
            var_v1 += 0x13C;
            var_a0 += 0x13C;
            if (var_a2 >= D_800A5A54) {
                goto block_19;
            }
            goto loop_9;
        }
        if (var_t0 == -1) {
            var_t0 = M2C_FIELD((var_a1 + (arg0 * 8)), s32 *, 0x1C);
        }
        var_v0 = func_8005D954(var_a0, var_a1, arg0, arg1, arg2, var_t0);
    } else {
block_19:
        var_v0 = func_8005DA04(var_a1, arg0, arg1, arg2, var_t0);
    }
    D_800A5A78 = 0;
    return var_v0;
}

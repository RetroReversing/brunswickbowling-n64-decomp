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

s32 func_8005DA04(void *, s32, M2C_UNK, M2C_UNK, s32); /* extern */
extern s32 D_800A5A78;
extern void *D_800A5A88;
extern void *D_800A5A8C;

s32 func_8005B600(s32 arg0) {
    s32 temp_v0;
    void *var_a0;

    var_a0 = D_800A5A8C;
    if (var_a0 == NULL) {
        var_a0 = D_800A5A88;
        if (var_a0 == NULL) {
            D_800A5A78 = 0;
            return 0;
        }
        goto block_4;
    }
    D_800A5A8C = NULL;
block_4:
    if (D_800A5A78 == 0) {
        D_800A5A78 = M2C_FIELD(var_a0, s32 *, 0x10);
    }
    temp_v0 = func_8005DA04(var_a0, arg0, 0x80, 0x80, -1);
    D_800A5A78 = 0;
    return temp_v0;
}

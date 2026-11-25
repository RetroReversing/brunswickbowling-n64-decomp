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

extern s32 D_8007F218;

s32 *func_800118B8(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 sp0;
    char *var_a1;
    s32 *var_a2;
    char *var_v1;
    s32 temp_a0;

    var_a1 = arg1;
    var_a2 = arg2;
    if (var_a2 == NULL) {
        var_a2 = &D_8007F218;
    }
    var_v1 = var_a2;
    temp_a0 = var_a1 + 0x1C0;
    sp0 = M2C_FIELD(var_a2, s32 *, 4);
    do {
        M2C_FIELD(var_v1, s32 *, 0) = M2C_FIELD(var_a1, s32 *, 0);
        M2C_FIELD(var_v1, s32 *, 4) = (s32) M2C_FIELD(var_a1, s32 *, 4);
        M2C_FIELD(var_v1, s32 *, 8) = (s32) M2C_FIELD(var_a1, s32 *, 8);
        M2C_FIELD(var_v1, s32 *, 0xC) = (s32) M2C_FIELD(var_a1, s32 *, 0xC);
        var_a1 += 0x10;
        var_v1 += 0x10;
    } while (var_a1 != temp_a0);
    *(s32 *)var_v1 = *(s32 *)var_a1;
    M2C_FIELD(var_a2, s32 *, 4) = sp0;
    return var_a2;
}

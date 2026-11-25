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

s32 *func_8004C9A8(s32, s32, M2C_UNK);              /* extern */
void *func_80050774();                              /* extern */
M2C_UNK func_80050AE8(s32, s32, s32, s32, s32, void *); /* extern */
extern s32 D_8009C898;

s32 *func_80050988(void) {
    s32 *var_s1;
    s32 *var_v0;
    void *temp_v0;

    temp_v0 = func_80050774();
    do { var_v0 = NULL; } while (0);
    if (temp_v0 != NULL) {
      s32 *temp_v0_2;
        temp_v0_2 = M2C_FIELD(temp_v0, s32 **, 0x1C);
        var_s1 = temp_v0_2;
        if (temp_v0_2 == NULL) {
            var_s1 = func_8004C9A8(D_8009C898, M2C_FIELD(temp_v0, s32 *, 0x18), 0x10);
            M2C_FIELD(temp_v0, s32 **, 0x1C) = var_s1;
            if (var_s1 != NULL) {
                func_80050AE8(M2C_FIELD(temp_v0, s32 *, 0x14), M2C_FIELD(temp_v0, s32 *, 0x24), *var_s1, M2C_FIELD(temp_v0, s32 *, 0x18), M2C_FIELD(temp_v0, s32 *, 0x20), temp_v0 + 0x10);
            }
        }
        var_v0 = var_s1;
    }
    return var_v0;
}

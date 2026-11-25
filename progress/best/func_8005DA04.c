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

M2C_UNK func_8005D618(void *, s32, s32);            /* extern */
extern s32 D_800A5A54;
extern void *D_800A5A60;
extern s32 D_800A5A70;

s32 func_8005DA04(void *arg0, s16 arg1, s16 arg2, s16 arg3, s32 arg4) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 var_a1;
    s32 var_a2;
    s32 var_s2;
    s32 var_v0;
    void *var_a0;
    void *var_s0;
    void *var_s1;

    var_s2 = arg4;
    if (var_s2 == -1) {
        var_s2 = M2C_FIELD((arg0 + (arg1 * 8)), s32 *, 0x1C);
    }
    var_a1 = 4;
    var_a0 = D_800A5A60;
    var_a2 = var_s2 + 1;
    if (D_800A5A54 > 4) {
        var_s0 = var_a0;
loop_4:
        if (M2C_FIELD(var_s0, s32 *, 4) == 0) {
            func_8005D618(var_a0, var_a1, var_a2);
            M2C_FIELD(var_s0, s16 *, 0xA6) = arg1;
            M2C_FIELD(var_s0, void **, 0x78) = arg0;
            M2C_FIELD(var_s0, s16 *, 0x9E) = arg2;
            M2C_FIELD(var_s0, s16 *, 0xB0) = arg3;
            M2C_FIELD(var_s0, s32 *, 0x48) = var_s2;
            M2C_FIELD(var_s0, s32 *, 0x44) = (s32) D_800A5A70;
            temp_v1 = M2C_FIELD(arg0, s32 *, 0x10);
            D_800A5A70 += 1;
            if (temp_v1 != 0) {
                M2C_FIELD(var_s0, s32 *, 0x7C) = temp_v1;
            }
            temp_v1_2 = M2C_FIELD((arg0 + (arg1 * 8)), s32 *, 0x18);
            M2C_FIELD(var_s0, s32 *, 0x80) = temp_v1_2;
            M2C_FIELD(var_s0, s32 *, 4) = temp_v1_2;
            return M2C_FIELD(var_s0, s32 *, 0x44);
        }
        var_a1 += 1;
        if (M2C_FIELD(var_s0, void **, 0x78) != NULL) {
            temp_v1_3 = M2C_FIELD(var_s0, s32 *, 0x48);
            if (temp_v1_3 < var_a2) {
                var_a2 = temp_v1_3;
                var_s1 = var_s0;
            }
        }
        var_s0 += 0x13C;
        var_a0 += 0x13C;
        if (var_a1 >= D_800A5A54) {
            goto block_12;
        }
        goto loop_4;
    }
block_12:
    var_v0 = 0;
    if (var_a2 < var_s2) {
        func_8005D618(var_s1, var_a1, var_a2);
        M2C_FIELD(var_s1, s16 *, 0xA6) = arg1;
        M2C_FIELD(var_s1, void **, 0x78) = arg0;
        M2C_FIELD(var_s1, s16 *, 0x9E) = arg2;
        M2C_FIELD(var_s1, s16 *, 0xB0) = arg3;
        M2C_FIELD(var_s1, s32 *, 0x48) = var_s2;
        M2C_FIELD(var_s1, s32 *, 0x44) = (s32) D_800A5A70;
        temp_v1_4 = M2C_FIELD(arg0, s32 *, 0x10);
        D_800A5A70 += 1;
        if (temp_v1_4 != 0) {
            M2C_FIELD(var_s1, s32 *, 0x7C) = temp_v1_4;
        }
        temp_v1_5 = M2C_FIELD((arg0 + (arg1 * 8)), s32 *, 0x18);
        var_v0 = M2C_FIELD(var_s1, s32 *, 0x44);
        M2C_FIELD(var_s1, s32 *, 0x80) = temp_v1_5;
        M2C_FIELD(var_s1, s32 *, 4) = temp_v1_5;
    }
    return var_v0;
}

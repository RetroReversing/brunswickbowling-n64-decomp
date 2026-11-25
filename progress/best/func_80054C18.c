/* Partial candidate from function #85899348518 in project #20; rechecked locally. */
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

u8 func_800549E4(s32);                              /* extern */
s8 func_80054BA0(s32);                              /* extern */

void func_80054C18(s32 arg0, s8 *arg1, u32 arg2) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 var_s2;
    s32 var_v0;
    s8 *var_s0;
    u32 var_s1;
    u8 temp_v0;
    void *temp_s0;
    void *temp_s0_2;

    /* Flowgraph is not reducible, falling back to gotos-only mode. */
    var_s2 = arg0;
    var_s0 = arg1;
    var_s1 = arg2;
    if (var_s1 == 0) {
        goto block_5;
    }
loop_1:
    var_v0 = var_s1 < 4U;
    if (!(var_s2 & 3)) {
        goto block_6;
    }
    temp_a0 = var_s2;
    var_s2 += 1;
    *var_s0 = func_80054BA0(temp_a0);
    var_s1 -= 1;
    var_s0 += 1;
    if (var_s1 != 0) {
        goto loop_1;
    }
    var_v0 = var_s1 < 4U;
    goto block_6;
block_4:
    temp_v0 = func_800549E4(var_s2);
    M2C_FIELD(var_s0, s8 *, 0) = (s8) (temp_v0 >> 0x18);
    temp_s0 = var_s0 + 1;
    M2C_FIELD(var_s0, s8 *, 1) = (s8) (temp_v0 >> 0x10);
    temp_s0_2 = temp_s0 + 1;
    M2C_FIELD(temp_s0_2, u8 *, 1) = temp_v0;
    var_s0 = (void *)(temp_s0_2);
    do { M2C_FIELD(temp_s0, s8 *, 1) = (s8) (temp_v0 >> 8); } while (0); var_s0 = (void *)((char *)var_s0 + (s32)(1 + 1));
    var_s2 += 4;
    var_s1 -= 4;
block_5:
    var_v0 = var_s1 < 4U;
block_6:
    if (var_v0 == 0) {
        goto block_4;
    }
    if (var_s1 == 0) {
        goto block_9;
    }
loop_8:
    temp_a0_2 = var_s2;
    var_s2 += 1;
    *var_s0 = func_80054BA0(temp_a0_2);
    var_s1 -= 1;
    var_s0 += 1;
    if (var_s1 != 0) {
        goto loop_8;
    }
block_9:
    return;
}

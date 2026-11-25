/* Partial candidate from function #137438953700 in project #32; rechecked locally. */
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

u32 func_800549E4(s32);                             /* extern */
s32 func_80054BA0(s32);                             /* extern */
M2C_UNK func_80054E68(s32, u32);                    /* extern */

void func_80054EA4(s32 arg0, s32 arg1, u32 arg2) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 var_a0;
    s32 var_s1;
    s32 var_s3;
    s32 var_v0;
    s32 var_v0_2;
    u32 temp_v0;
    u32 var_s2;

    /* Flowgraph is not reducible, falling back to gotos-only mode. */
    var_s3 = arg0;
    var_s1 = arg1;
    var_s2 = arg2;
    if (var_s2 == 0) {
        goto block_6;
    }
    var_v0 = var_s3 & 3;
do {
    temp_a0 = var_s3;
    if (var_v0 == 0) {
        goto block_6;
    }
    var_s3 += 1;
    temp_a0_2 = var_s1;
    var_s1 += 1;
    func_80054E68(temp_a0_2, func_80054BA0(temp_a0) & 0xFF);
    var_s2 -= 1;
    var_v0 = var_s3 & 3;
    } while (var_s2 != 0);
    var_v0_2 = var_s2 < 4U;
    goto block_7;
block_5:
    temp_v0 = func_800549E4(var_s3);
    temp_s1 = var_s1 + 1;
    func_80054E68(var_s1, temp_v0 >> 0x18);
    temp_s1_2 = temp_s1 + 1;
    func_80054E68(temp_s1, (temp_v0 >> 0x10) & 0xFF);
    temp_s1_3 = temp_s1_2 + 1;
    func_80054E68(temp_s1_2, (temp_v0 >> 8) & 0xFF);
    var_s1 = temp_s1_3 + 1;
    func_80054E68(temp_s1_3, temp_v0 & 0xFF);
    var_s3 += 4;
    var_s2 -= 4;
block_6:
    var_v0_2 = var_s2 < 4U;
block_7:
    if (var_v0_2 == 0) {
        goto block_5;
    }
    var_a0 = var_s3;
    if (var_s2 == 0) {
        goto block_10;
    }
loop_9:
    var_s3 += 1;
    temp_a0_3 = var_s1;
    var_s1 += 1;
    func_80054E68(temp_a0_3, func_80054BA0(var_a0) & 0xFF);
    var_s2 -= 1;
    var_a0 = var_s3;
    if (var_s2 != 0) {
        goto loop_9;
    }
block_10:
    return;
}

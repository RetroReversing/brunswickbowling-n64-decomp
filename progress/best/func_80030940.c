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

s32 func_800315E0();
extern char D_8007F618[];
extern char D_80081A08[];

void func_80030940(void *arg0, s32 *arg1, s32 arg2) {
    s32 sp10;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a1;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_s0;
    s32 var_s1;
    char *var_a1_2;
    u8 *var_v0;
    u8 *var_v1;
    u8 temp_a0;

    var_s1 = 0;
    var_s0 = 0x64;
    var_a0 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x44) == 9) {
        var_a0 = func_800315E0(arg0) != 0;
    }
    var_a2 = 0;
    if (var_a0 == 0) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x44);
        switch (temp_v0) {
        case 4:
        case 5:
            var_s1 = (M2C_FIELD(arg0, s32 *, 0x78) * 2) + 6;
            var_s0 = 0x64 - var_s1;
block_9:
            var_a2 = 0;
            break;
        case 6:
            var_s0 = (M2C_FIELD(arg0, s32 *, 0x78) * 2) + 1;
            var_s1 = 5;
            if (var_s0 < *arg1) {
                *arg1 = var_s0;
            }
            goto block_9;
        case 7:
        case 8:
        case 9:
            var_s0 = 1;
            *arg1 = 1;
            var_s1 = 0xB - M2C_FIELD(arg0, s32 *, 0x44);
            goto block_9;
        }
    }
    var_a1 = var_s1;
    temp_v1 = var_a1 + var_s0;
loop_11:
    if (var_a1 < temp_v1) {
        temp_a0 = *(var_a1 + D_80081A08);
        var_v0 = &sp10 + var_a2;
        if ((M2C_FIELD(((temp_a0 * 0x5C) + D_8007F618), s32 *, 0x28) != 0) || (var_v0 = &sp10 + var_a2, ((var_a1 < (var_s1 + *arg1)) != 0))) {
            *var_v0 = temp_a0;
            var_a2 += 1;
        }
        var_a1 += 1;
        goto loop_11;
    }
    var_a2_2 = var_a2 - 1;
    var_a1_2 = var_a2_2 + &sp10;
    var_a0_2 = *arg1 - 1;
loop_17:
    if (var_a2_2 >= 0) {
        var_v1 = arg2 + var_a0_2;
        if ((var_a0_2 == var_a2_2) || (var_v1 = arg2 + var_a0_2, (M2C_FIELD(((*(u8 *)var_a1_2 * 0x5C) + D_8007F618), s32 *, 0x28) != 0))) {
            var_a0_2 -= 1;
            *var_v1 = *(u8 *)var_a1_2;
        }
        var_a1_2 -= 1;
        var_a2_2 -= 1;
        goto loop_17;
    }
}

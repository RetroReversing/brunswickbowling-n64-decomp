/* Partial candidate from function #85899348526 in project #20; rechecked locally. */
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

M2C_UNK func_800549B0(s32, s32);                    /* extern */
M2C_UNK func_80054FB4(s32, s32);                    /* extern */

void func_80055314(s32 arg0, s8 arg1_in, u32 arg2) {
  s8 arg1;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 var_a0;
    s32 var_s1;
    s32 var_v0;
    u32 var_s0;

    var_s1 = arg0;
  arg1 = arg1_in;
  arg1_in = 0;
    var_s0 = arg2;
    if (var_s0 != 0) {
        var_v0 = var_s1 & 3;
loop_2:
        temp_a0 = var_s1;
        if (var_v0 != 0) {
            var_s1 += 1;
            func_80054FB4(temp_a0, arg1 & 0xFF);
            var_s0 -= 1;
            var_v0 = var_s1 & 3;
            if (var_s0 != 0) {
                goto loop_2;
            }
        }
    }
    temp_a0_2 = arg1 & 0xFF;
    if (var_s0 >= 4U) {
        __repair_rows: {
            func_800549B0(var_s1, (temp_a0_2 << 0x18) | (temp_a0_2 << 0x10) | (temp_a0_2 << 8) | temp_a0_2);
            var_s0 -= 4;
            var_s1 += 4;
        }
if (var_s0 >= 4U) goto __repair_rows;
    }
    var_a0 = var_s1;
    if (var_s0 != 0) {
        do {
            var_s1 += 1;
            func_80054FB4(var_a0, arg1 & 0xFF);
            var_s0 -= 1;
            var_a0 = var_s1;
        } while (var_s0 != 0);
    }
}

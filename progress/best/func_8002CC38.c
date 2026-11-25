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

s32 func_8002C4E0(void *);                          /* extern */
s32 func_8002CB54(void *, s32, s32, M2C_UNK);       /* extern */

s16 func_8002CC38(void *arg0, s32 arg1) {
    M2C_UNK var_a3;
    s32 temp_a1;
    s32 temp_v0;
    s32 var_s1;
    s32 var_s3;
    s32 var_s6;
    s32 var_v0;
    s32 var_v0_2;
    u16 var_s0;
    u16 var_s2;
    u8 temp_v1;
    void *temp_v0_2;
    void *var_s4;

    temp_a1 = M2C_FIELD(arg0, s32 *, 0xD0);
    if (temp_a1 >= arg1) {
        return M2C_FIELD(((arg1 * 0x14) + arg0), s16 *, 8);
    }
    var_s2 = M2C_FIELD(((temp_a1 * 0x14) + arg0), u16 *, 8);
    var_s3 = temp_a1 + 1;
    temp_v0 = var_s3 * 0x14;
    var_s4 = temp_v0 + arg0;
    var_s6 = temp_v0;
loop_3:
    var_v0 = var_s2 << 0x10;
    if (arg1 >= var_s3) {
        if (func_8002C4E0(arg0 + ((arg1 * 0x14) + 4)) == 0) {
            var_v0 = (var_s2 + 0xA) << 0x10;
        } else {
            var_s1 = 0;
            if (M2C_FIELD(var_s4, u8 *, 0x12) != 0) {
                var_v0_2 = var_s6;
                do {
                    temp_v0_2 = arg0 + var_v0_2;
                    var_s0 = var_s2 + M2C_FIELD(temp_v0_2, u8 *, 0x13);
                    temp_v1 = M2C_FIELD(temp_v0_2, u8 *, 0xA);
                    var_s2 = var_s0;
                    if (temp_v1 & 2) {
                        var_a3 = 2;
                        var_s0 += func_8002CB54(arg0, var_s3, var_s1, 1);
                        goto block_13;
                    }
                    if (temp_v1 & 4) {
                        var_a3 = 1;
block_13:
                        var_s2 = var_s0 + func_8002CB54(arg0, var_s3, var_s1, var_a3);
                    }
                    var_s1 += 1;
                    var_v0_2 = var_s1 + var_s6;
                } while (var_s1 < (s32) M2C_FIELD(var_s4, u8 *, 0x12));
            }
            var_s4 += 0x14;
            var_s6 += 0x14;
            var_s3 += 1;
            goto loop_3;
        }
    }
    return (s16) (var_v0 >> 0x10);
}

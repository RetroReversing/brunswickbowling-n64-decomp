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

s32 stringCompare();

void func_80046F80(void *arg0, s32 arg1, s32 arg2, s32 arg3, u16 arg4) {
    s32 temp_a2_2;
    s32 var_a3;
    s32 var_s0;
    s32 var_s1;
    s32 var_s3;
    char *var_t0;
    u16 temp_a0;
    u16 temp_a1_2;
    u16 temp_v0;
    u32 var_s2;
    void *temp_a0_2;
    void *temp_a1;
    void *temp_a2;
    void *temp_v1;
    void *temp_v1_2;

    var_s3 = 0;
loop_1:
    var_s2 = 0;
    if (var_s3 < 2) {
        var_s0 = 0;
        var_s1 = 0;
loop_3:
        temp_v1 = M2C_FIELD(arg0, void **, 0xC8);
        if (var_s2 < (u32) M2C_FIELD(temp_v1, u32 *, 8)) {
            temp_a0 = M2C_FIELD((var_s0 + M2C_FIELD(temp_v1, s32 *, 0x28)), u16 *, 8);
            if ((temp_a0 < (u32) M2C_FIELD(temp_v1, u32 *, 0x10)) && (stringCompare(M2C_FIELD(temp_v1, s32 *, 0x30) + (temp_a0 << 5), arg1) == 0)) {
                temp_a2 = M2C_FIELD(arg0, void **, 0xC8);
                var_a3 = 0;
                temp_a1 = var_s0 + M2C_FIELD(temp_a2, s32 *, 0x28);
                var_t0 = M2C_FIELD(temp_a2, s32 *, 0x2C) + (M2C_FIELD(temp_a1, u16 *, 4) * 2);
                temp_a2_2 = M2C_FIELD(temp_a2, s32 *, 0x20) + (*(s32 *)(var_s1 + M2C_FIELD(temp_a2, s32 *, 0x58)) * 0x10);
                if (M2C_FIELD(temp_a1, u16 *, 2) != 0) {
                    do {
                        temp_v0 = *(u16 *)var_t0;
                        var_t0 += 2;
                        if (var_s3 == 0) {
                            temp_a0_2 = (temp_v0 * 0x10) + temp_a2_2;
                            temp_a1_2 = M2C_FIELD(temp_a0_2, u16 *, 6);
                            if (!(temp_a1_2 & 8)) {
                                M2C_FIELD(temp_a0_2, u16 *, 6) = (u16) (temp_a1_2 | 8);
                                M2C_FIELD(temp_a0_2, u16 *, 0) += arg2;
                                M2C_FIELD(temp_a0_2, u16 *, 2) += arg3;
                                M2C_FIELD(temp_a0_2, u16 *, 4) += arg4;
                            }
                        } else {
                            temp_v1_2 = (temp_v0 * 0x10) + temp_a2_2;
                            M2C_FIELD(temp_v1_2, u16 *, 6) &= 0xFFF7;
                        }
                        var_a3 += 1;
                    } while (var_a3 < (s32) M2C_FIELD((var_s0 + M2C_FIELD(M2C_FIELD(arg0, void **, 0xC8), s32 *, 0x28)), u16 *, 2));
                }
            }
            var_s0 += 0xC;
            var_s1 += 2;
            var_s2 += 1;
            goto loop_3;
        }
        var_s3 += 1;
        goto loop_1;
    }
}

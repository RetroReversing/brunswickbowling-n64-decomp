/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O1, tried by autopilot */
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

void *func_800205E0(s32, s32);                      /* extern */
extern s32 D_8007DA40;
extern M2C_UNK D_8007DA48;

void func_80020BA8(s32 arg0) {
    M2C_UNK *var_s3;
    s32 temp_fp;
    s32 temp_s2;
    s32 var_a0;
    s32 var_s0;
    s32 var_s1;
    s32 var_s4;
    s32 var_s6;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    u8 temp_a1;
    void *temp_v0;

    var_s6 = 0;
    var_s4 = arg0;
    temp_fp = D_8007DA40;
    var_s3 = &D_8007DA48;
loop_1:
    var_s0 = 0;
    if (var_s6 < temp_fp) {
        temp_s2 = var_s4 + 0x130C;
        var_s1 = arg0;
loop_3:
        if (var_s0 < 0xF) {
            temp_v0 = func_800205E0(arg0, var_s0);
            temp_a1 = M2C_FIELD(temp_v0, u8 *, 0);
            var_v0 = 0;
            if (temp_a1 == 0) {
                var_v0 = M2C_FIELD(temp_v0, u8 *, 1) == 0;
            }
            if (var_v0 == 0) {
                var_v1 = 0;
                if (temp_a1 == M2C_FIELD(var_s3, u8 *, 8)) {
                    var_v1 = M2C_FIELD(temp_v0, u8 *, 1) == M2C_FIELD((var_s3 + 8), u8 *, 1);
                }
                var_a0 = var_s1 + 0x168A;
                if (var_v1 != 0) {
                    var_v1_2 = var_s4 + 0x12BC;
                    if ((var_v1_2 | var_a0) & 3) {
                        do {
                            M2C_FIELD(var_a0, M2C_UNK *, 0) = M2C_UNALIGNED32(M2C_FIELD(var_v1_2, M2C_UNK *, 0));
                            M2C_FIELD(var_a0, M2C_UNK *, 4) = M2C_UNALIGNED32(M2C_FIELD(var_v1_2, M2C_UNK *, 4));
                            M2C_FIELD(var_a0, M2C_UNK *, 8) = M2C_UNALIGNED32(M2C_FIELD(var_v1_2, M2C_UNK *, 8));
                            M2C_FIELD(var_a0, M2C_UNK *, 0xC) = M2C_UNALIGNED32(M2C_FIELD(var_v1_2, M2C_UNK *, 0xC));
                            var_v1_2 += 0x10;
                            var_a0 += 0x10;
                        } while (var_v1_2 != temp_s2);
                        var_s4 += 0x50;
                    } else {
                        do {
                            M2C_FIELD(var_a0, s32 *, 0) = (s32) M2C_FIELD(var_v1_2, s32 *, 0);
                            M2C_FIELD(var_a0, s32 *, 4) = (s32) M2C_FIELD(var_v1_2, s32 *, 4);
                            M2C_FIELD(var_a0, s32 *, 8) = (s32) M2C_FIELD(var_v1_2, s32 *, 8);
                            M2C_FIELD(var_a0, s32 *, 0xC) = (s32) M2C_FIELD(var_v1_2, s32 *, 0xC);
                            var_v1_2 += 0x10;
                            var_a0 += 0x10;
                        } while (var_v1_2 != temp_s2);
                        var_s4 += 0x50;
                    }
                } else {
                    var_s1 += 0x50;
                    var_s0 += 1;
                    goto loop_3;
                }
            } else {
                goto block_16;
            }
        } else {
block_16:
            var_s4 += 0x50;
        }
        var_s3 += 113;
        var_s6 += 1;
        goto loop_1;
    }
}

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

s16 func_8002CC38();
s32 func_8005978C();
extern char D_80073F54[];
extern char D_80073F5C[];
extern s32 D_8007DA44;
extern s32 D_8007E4E0;
extern void *D_80081AD0;

#define sp10 ((s32 *)(sp + 0x10))
void func_80016610(void) {
    u8 sp[72];
    s32 var_a2;
    s16 var_a3_2;
    s32 temp_a0;
    s32 var_a0;
    s32 var_a1;
    s32 var_a3;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s3;
    s32 var_s4;
    s32 var_s5;
    s32 var_t0;
    u16 *temp_s6;
    char *var_s1;
    char *var_s2_2;
    u16 temp_v0_2;
    void **temp_v1;
    void **var_s1_2;
    void **var_s2;
    void **var_v1;
    void *temp_v0;

    temp_v1 = M2C_FIELD((&D_80081AD0)[D_8007E4E0], void ***, 0x44);
    temp_v0 = *temp_v1;
    if (M2C_FIELD(temp_v0, s32 (**)(void *), 0x3C)(temp_v1 + M2C_FIELD(temp_v0, s16 *, 0x38)) >= 4) {
        var_t0 = 0;
        if (D_8007DA44 >= 2) {
            var_a1 = 0xA;
            var_s4 = 0;
            var_a3 = 0;
            var_v1 = &D_80081AD0;
loop_3:
            var_s3 = var_a1;
            if (var_a3 < D_8007DA44) {
                temp_a0 = M2C_FIELD(M2C_FIELD(*var_v1, void **, 0x44), s32 *, 0xD0);
                if (temp_a0 < var_a1) {
                    var_a1 = temp_a0;
                }
                if (var_t0 < temp_a0) {
                    var_t0 = temp_a0;
                }
                var_v1 += 4;
                var_a3 += 1;
                goto loop_3;
            }
            if (var_s3 < var_t0) {
                var_s3 += 1;
            }
            var_s0 = 0;
            if (var_s3 >= 0) {
                var_s1 = &sp10[0];
                temp_s6 = var_s1;
                var_s2 = &D_80081AD0;
loop_13:
                if (var_s0 < D_8007DA44) {
                    temp_v0_2 = func_8002CC38(M2C_FIELD(*var_s2, s32 *, 0x44), var_s3);
                    *(u16 *)var_s1 = temp_v0_2;
                    if ((s16) temp_v0_2 >= (s16) temp_s6[var_s4]) {
                        var_s5 = var_s4;
                        var_s4 = var_s0;
                    } else if (var_s5 == var_s4) {
                        var_s5 = var_s0;
                    }
                    var_s1 += 2;
                    var_s2 += 4;
                    var_s0 += 1;
                    goto loop_13;
                }
                var_s0_2 = 0;
                var_s2_2 = &sp10[0];
                var_s1_2 = &D_80081AD0;
loop_22:
                if (var_s0_2 < D_8007DA44) {
                    if (var_s0_2 == var_s4) {
                        var_a3_2 = *(u16 *)var_s2_2 - (&sp10[0])[var_s5];
                        var_a0 = M2C_FIELD(*var_s1_2, s32 *, 0x44);
                        var_a2 = 0x20;
                        if (var_a3_2 != 0) {
                            goto block_28;
                        }
                        goto block_27;
                    }
                    var_a3_2 = *(u16 *)var_s2_2 - (&sp10[0])[var_s4];
                    var_a0 = M2C_FIELD(*var_s1_2, s32 *, 0x44);
                    var_a2 = 0x20;
                    if (var_a3_2 == 0) {
block_27:
                        func_8005978C(var_a0 + 0xD6, D_80073F54, 0x20, var_a3_2);
                        var_s2_2 += 2;
                    } else {
block_28:
                        if (var_a3_2 > 0) {
                            var_a2 = 0x2B;
                        }
                        func_8005978C(var_a0 + 0xD6, D_80073F5C, var_a2, var_a3_2);
                        var_s2_2 += 2;
                    }
                    var_s1_2 += 4;
                    var_s0_2 += 1;
                    goto loop_22;
                }
            }
        }
    }
}

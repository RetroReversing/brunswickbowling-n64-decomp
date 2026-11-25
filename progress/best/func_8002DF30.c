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

M2C_UNK func_8002D2D0(void *, s32, s32);            /* extern */
s32 func_8002DC00(void *, s32);                     /* extern */
M2C_UNK func_8005978C(); /* extern */
extern M2C_UNK D_80076C14;
extern M2C_UNK D_80076C20;
extern M2C_UNK D_80076C30;
extern s32 D_8007DA44;
extern s32 D_8007E4E0;
extern M2C_UNK D_80081AD0;

void func_8002DF30(void *arg0) {
    M2C_UNK var_a3;
    M2C_UNK var_a3_2;
    M2C_UNK var_a3_3;
    M2C_UNK var_a3_4;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a2_3;
    s32 temp_a2_4;
    s32 temp_s1;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_a2;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_v1;
    void *temp_s0;
    void *temp_s0_2;
    void *var_a0;
    void *var_s0;

    var_s0 = M2C_FIELD((&D_80081AD0)[D_8007E4E0], void **, 0x44);
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        if (M2C_FIELD(arg0, s32 *, 8) != 0) {
            temp_a0 = M2C_FIELD(arg0, s32 *, 0xC);
            if (D_8007E4E0 == temp_a0) {
                if (M2C_FIELD(var_s0, s32 *, 0x118) != 0) {
                    M2C_FIELD(arg0, s32 *, 0x30) = 1;
                } else {
                    M2C_FIELD(arg0, s32 *, 0x30) = 0;
                }
                M2C_FIELD(arg0, s32 *, 0x10) = (s32) D_8007E4E0;
            } else if (M2C_FIELD(var_s0, s32 *, 0x118) != 0) {
                if (M2C_FIELD(arg0, s32 *, 0x30) == 0) {
                    var_s1 = temp_a0;
loop_10:
                    if (var_s1 != D_8007E4E0) {
                        temp_s0 = M2C_FIELD(*((var_s1 * 4) + &D_80081AD0), void **, 0x44);
                        var_v1 = 0;
                        if (M2C_FIELD(temp_s0, s32 *, 0x114) == 0) {
                            var_v1 = M2C_FIELD(temp_s0, s32 *, 0x118) == 0;
                        }
                        if (var_v1 != 0) {
                            func_8005978C(arg0 + ((var_s1 * 0x18) + 0x34), &D_80076C14);
                            M2C_FIELD(temp_s0, s32 *, 0x114) = 1;
                            M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) - 1);
                        }
                        var_s1 = (s32) (var_s1 + 1) % (s32) D_8007DA44;
                        goto loop_10;
                    }
                    M2C_FIELD(arg0, s32 *, 0x30) = 1;
                }
                M2C_FIELD(arg0, s32 *, 0x10) = (s32) D_8007E4E0;
                M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg0, s32 *, 0x2C);
            } else {
                temp_s1 = M2C_FIELD(arg0, s32 *, 0x30);
                if (temp_s1 == 1) {
                    func_8005978C(arg0 + ((D_8007E4E0 * 0x18) + 0x34), &D_80076C14);
                    M2C_FIELD(var_s0, s32 *, 0x114) = temp_s1;
                    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) - 1);
                }
            }
            if (M2C_FIELD(arg0, s32 *, 0x28) == 1) {
                temp_v1 = M2C_FIELD(arg0, s32 *, 0x10);
                temp_a2 = M2C_FIELD(arg0, s32 *, 0x18);
                temp_s0_2 = M2C_FIELD(*((temp_v1 * 4) + &D_80081AD0), void **, 0x44);
                var_a3 = 0;
                if (temp_a2 >= 2) {
                    var_a3 = 0x73;
                }
                func_8005978C(arg0 + ((temp_v1 * 0x18) + 0x34), &D_80076C20, temp_a2, var_a3);
                temp_a1 = M2C_FIELD(arg0, s32 *, 0x18);
                M2C_FIELD(arg0, s32 *, 0x20) = temp_a1;
                func_8002D2D0(temp_s0_2, temp_a1, M2C_FIELD(arg0, s32 *, 0x14));
                temp_v1_2 = M2C_FIELD(arg0, s32 *, 0x1C);
                M2C_FIELD(arg0, s32 *, 0x24) = temp_v1_2;
                M2C_FIELD(temp_s0_2, s32 *, 0x110) = (s32) (M2C_FIELD(temp_s0_2, s32 *, 0x110) + temp_v1_2);
                M2C_FIELD(arg0, s32 *, 0x18) = 0;
                M2C_FIELD(arg0, s32 *, 0x1C) = 0;
            }
        } else {
            var_s1_2 = 1;
            if (M2C_FIELD(var_s0, s32 *, 0x118) != 0) {
                if (M2C_FIELD(arg0, s32 *, 0x30) == 1) {
                    temp_a2_2 = M2C_FIELD(arg0, s32 *, 0x18);
                    var_a3_2 = 0;
                    if (temp_a2_2 >= 2) {
                        var_a3_2 = 0x73;
                    }
                    func_8005978C(arg0 + ((D_8007E4E0 * 0x18) + 0x34), &D_80076C30, temp_a2_2, var_a3_2);
                    M2C_FIELD(arg0, s32 *, 0x30) = 2;
                    return;
                }
                var_a3_3 = 0;
                if (func_8002DC00(arg0, D_8007E4E0) != 0) {
                    temp_a2_3 = M2C_FIELD(arg0, s32 *, 0x18);
                    M2C_FIELD(arg0, s32 *, 0x30) = 1;
                    M2C_FIELD(arg0, s32 *, 0x10) = (s32) D_8007E4E0;
                    if (temp_a2_3 >= 2) {
                        var_a3_3 = 0x73;
                    }
                    func_8005978C(arg0 + ((D_8007E4E0 * 0x18) + 0x34), &D_80076C20, temp_a2_3, var_a3_3);
                    var_a2 = M2C_FIELD(arg0, s32 *, 0x2C);
                    var_a0 = var_s0;
                    M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
                    goto block_39;
                }
                M2C_FIELD(arg0, s32 *, 0x30) = 1;
                M2C_FIELD(arg0, s32 *, 0x10) = (s32) D_8007E4E0;
                M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg0, s32 *, 0x2C);
                return;
            }
            var_s1_2 = M2C_FIELD(arg0, s32 *, 0x30);
            if ((var_s1_2 == 1) && (func_8002DC00(arg0, D_8007E4E0) != 0)) {
                temp_a2_4 = M2C_FIELD(arg0, s32 *, 0x18);
                var_a3_4 = 0;
                if (temp_a2_4 >= 2) {
                    var_a3_4 = 0x73;
                }
                func_8005978C(arg0 + ((M2C_FIELD(arg0, s32 *, 0x10) * 0x18) + 0x34), &D_80076C20, temp_a2_4, var_a3_4);
                var_a2 = M2C_FIELD(arg0, s32 *, 0x14);
                var_s0 = M2C_FIELD(*((M2C_FIELD(arg0, s32 *, 0x10) * 4) + &D_80081AD0), void **, 0x44);
                M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
                var_a0 = var_s0;
block_39:
                func_8002D2D0(var_a0, M2C_FIELD(arg0, s32 *, 0x18), var_a2);
                temp_v1_3 = M2C_FIELD(arg0, s32 *, 0x1C);
                M2C_FIELD(arg0, s32 *, 0x24) = temp_v1_3;
                M2C_FIELD(var_s0, s32 *, 0x110) = (s32) (M2C_FIELD(var_s0, s32 *, 0x110) + temp_v1_3);
                M2C_FIELD(arg0, s32 *, 0x18) = 0;
                M2C_FIELD(arg0, s32 *, 0x1C) = 0;
                if (M2C_FIELD(arg0, s32 *, 0x2C) == 0xB) {
                    M2C_FIELD(arg0, s32 *, 0x28) = var_s1_2;
                }
            }
        }
    }
}

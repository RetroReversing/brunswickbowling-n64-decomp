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

M2C_UNK func_80012B50(void *, void *, s32, s32);    /* extern */
M2C_UNK func_80016C40(M2C_UNK *);                   /* extern */
M2C_UNK func_8001C210(M2C_UNK *, void **, M2C_UNK *); /* extern */
s32 func_8002AB14(M2C_UNK);                         /* extern */
M2C_UNK func_8002EA58(M2C_UNK *, s32 *);            /* extern */
M2C_UNK func_8003051C(void *, s32, s32, M2C_UNK);   /* extern */
s32 func_80031640(void *, s32, M2C_UNK *);          /* extern */
extern s32 D_8007DA40;
extern s32 D_8007DA44;
extern M2C_UNK D_8007E4E4;
extern M2C_UNK D_8007F618;
extern M2C_UNK D_80081A08;
extern M2C_UNK D_80081A6C;
extern M2C_UNK D_800827A4;
extern s32 D_8008AB10;
extern M2C_UNK D_8008B060;
extern M2C_UNK D_8008B3A4;
extern M2C_UNK D_8008BA90;

void func_80030EF8(void *arg0) {
    M2C_UNK *sp18;
    M2C_UNK *sp20;
    M2C_UNK *sp28;
    M2C_UNK *sp30;
    void *sp38;
    M2C_UNK *var_a1;
    M2C_UNK *var_s0;
    M2C_UNK *var_s1_2;
    s32 temp_a2;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a2;
    s32 var_a3;
    s32 var_s0_3;
    s32 var_s0_4;
    s32 var_s0_5;
    s32 var_s0_6;
    s32 var_s1;
    s32 var_s2;
    s32 var_t0;
    s32 var_v1;
    u8 *temp_s2;
    u8 temp_a1;
    u8 var_a1_2;
    void *temp_a0;
    void *temp_v1;
    void *var_s0_2;

    D_8007DA44 = 0;
    if (M2C_FIELD(&D_8008B060, s32 *, 0x14) != 0) {
        func_8002EA58(&D_8008B060, &D_8007DA44);
        var_s0 = &D_800827A4;
    } else {
        if (M2C_FIELD(arg0, s32 *, 0x18) == 0) {
            if (D_8008AB10 != 0) {
                if (D_8007DA40 != 1) {
                    goto block_17;
                }
                D_8007DA44 = D_8007DA40;
                var_s1 = 1;
                var_s0_2 = &D_8007F618 + 0x5C;
loop_8:
                if (var_s1 < 4) {
                    var_a0 = func_8002AB14(7) + 1;
                    do {
                        var_t0 = 0;
                        var_a3 = 0;
                        var_a1 = &D_8007F618;
                        temp_a2 = var_a0 % 7;
loop_11:
                        if (var_a3 < D_8007DA44) {
                            var_a1 += 0x5C;
                            if (M2C_FIELD(var_a1, u8 *, 0x19) != (M2C_FIELD(((temp_a2 * 0x18) + &D_8007E4E4), u8 *, 4) - 1)) {
                                var_a3 += 1;
                                goto loop_11;
                            }
                            var_t0 = 1;
                        }
                        var_a0 = temp_a2 + 1;
                    } while (var_t0 != 0);
                    func_80012B50(var_s0_2, (temp_a2 * 0x18) + &D_8007E4E4, temp_a2, var_a3);
                    M2C_FIELD(var_s0_2, s32 *, 0x50) = 0;
                    M2C_FIELD(var_s0_2, s32 *, 0x4C) = 0;
                    M2C_FIELD(var_s0_2, s32 *, 0x48) = 0;
                    var_s0_2 += 0x5C;
                    var_s1 += 1;
                    D_8007DA44 += 1;
                    goto loop_8;
                }
            } else {
block_17:
                D_8007DA44 = D_8007DA40;
            }
            var_s0_3 = 0;
            if (D_8007DA44 > 0) {
                do {
                    func_8003051C(arg0, var_s0_3, var_s0_3, 1);
                    var_s0_3 += 1;
                } while (var_s0_3 < D_8007DA44);
            }
        } else {
            temp_v0 = M2C_FIELD(arg0, s32 *, 0x44);
            switch (temp_v0) {
            case 1:
            case 2:
            case 3:
                var_s2 = 0;
                var_s0_4 = 0;
                var_s1_2 = &D_8007F618;
                D_8007DA44 = D_8007DA40;
loop_27:
                if (var_s0_4 < 0x64) {
                    if (M2C_FIELD(var_s1_2, s32 *, 0x28) != 0) {
                        func_8003051C(arg0, var_s0_4, var_s2, 1);
                        var_s2 += 1;
                    }
                    var_s1_2 += 0x5C;
                    var_s0_4 += 1;
                    goto loop_27;
                }
                break;
            case 4:
                var_s0_5 = 0;
loop_32:
                temp_s2 = var_s0_5 + &D_80081A6C;
                if (var_s0_5 < (s32) M2C_FIELD(arg0, u8 *, 0x48)) {
                    temp_v1 = (*temp_s2 * 0x5C) + &D_8007F618;
                    var_a0_2 = 0;
                    if (M2C_FIELD(temp_v1, s32 *, 0x28) != 0) {
                        var_a0_2 = M2C_FIELD(arg0, u8 *, 0x49) == M2C_FIELD(temp_v1, u8 *, 0x42);
                    }
                    if (var_a0_2 == 0) {
                        var_s0_5 += 1;
                        goto loop_32;
                    }
                    temp_v0_2 = func_80031640(arg0, var_s0_5, &D_8007F618);
                    temp_s0 = (temp_v0_2 + var_s0_5) & 1;
                    func_8003051C(arg0, (s32) *temp_s2, temp_s0, 1);
                    var_a1_2 = *(temp_v0_2 + &D_80081A6C);
                    var_a2 = temp_s0 ^ 1;
block_44:
                    func_8003051C(arg0, (s32) var_a1_2, var_a2, 1);
                    D_8007DA44 = 2;
                }
                break;
            case 5:
                var_s0_6 = 0;
loop_38:
                if (var_s0_6 < (s32) M2C_FIELD(arg0, u8 *, 0x48)) {
                    temp_a1 = *(var_s0_6 + &D_80081A08);
                    temp_a0 = (temp_a1 * 0x5C) + &D_8007F618;
                    var_v1 = 0;
                    if (M2C_FIELD(temp_a0, s32 *, 0x28) != 0) {
                        var_v1 = M2C_FIELD(arg0, u8 *, 0x49) == M2C_FIELD(temp_a0, u8 *, 0x42);
                    }
                    if (var_v1 == 0) {
                        var_s0_6 += 1;
                        goto loop_38;
                    }
                    func_8003051C(arg0, (s32) temp_a1, 0, 1);
                    var_a2 = 1;
                    var_a1_2 = *((var_s0_6 ^ 1) + &D_80081A08);
                    goto block_44;
                }
                break;
            case 6:
            case 7:
            case 8:
            case 9:
                func_8003051C(arg0, (s32) M2C_FIELD((M2C_FIELD(arg0, u8 *, 0x48) + &D_80081A08), u8 *, -2), 0, 1);
                var_a2 = 1;
                var_a1_2 = M2C_FIELD((M2C_FIELD(arg0, u8 *, 0x48) + &D_80081A08), u8 *, -1);
                goto block_44;
            }
        }
        var_s0 = &D_800827A4;
    }
    func_80016C40(var_s0);
    M2C_FIELD(M2C_FIELD(&D_8008B3A4, void **, 0), void ***, 4) = (void **) M2C_FIELD(&D_8008B3A4, void ***, 4);
    *M2C_FIELD(&D_8008B3A4, void ***, 4) = M2C_FIELD(&D_8008B3A4, void **, 0);
    sp18 = var_s0;
    sp30 = var_s0;
    sp28 = var_s0;
    sp38 = &D_8008BA90 + 8;
    func_8001C210(var_s0, &sp38, &D_8008B3A4);
    sp20 = sp28;
}

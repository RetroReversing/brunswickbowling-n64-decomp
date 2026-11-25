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

M2C_UNK func_80024EE0(s32, M2C_UNK *);              /* extern */
M2C_UNK func_8002C64C(s32, s32, s32, s32);          /* extern */
M2C_UNK func_8002CF84(void *, M2C_UNK **, M2C_UNK **, M2C_UNK **); /* extern */
M2C_UNK func_80039738(); /* extern */
s32 func_80039BC4(M2C_UNK *, M2C_UNK *);            /* extern */
M2C_UNK func_80045050(); /* extern */
M2C_UNK func_8005978C(); /* extern */
extern M2C_UNK D_80076030;
extern M2C_UNK D_80076098;
extern M2C_UNK D_800760A4;
extern M2C_UNK D_800760AC;
extern M2C_UNK D_800760B0;
extern s32 D_8007DA44;
extern M2C_UNK D_80081AD0;
extern s32 D_80089944;
extern M2C_UNK D_8008A328;
extern s32 D_8008AB10;
extern M2C_UNK D_8008CEB0;
extern M2C_UNK D_8008CF28;
extern s32 D_8008D8E8;
extern M2C_UNK D_8008ED80;
extern s32 D_8008ED84;

void func_800256F0(s32 arg0, s16 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, M2C_UNK *arg7, s32 arg8) {
    M2C_UNK sp30;
    M2C_UNK *sp40;
    M2C_UNK *sp44;
    s32 sp48;
    s32 sp4C;
    void **sp50;
    M2C_UNK **temp_s0;
    M2C_UNK *var_v0;
    M2C_UNK var_a2_2;
    M2C_UNK var_a3;
    M2C_UNK var_s0_2;
    s16 temp_s2;
    s16 temp_s3_2;
    s16 temp_s4;
    s16 temp_s6;
    s16 temp_v0_2;
    s16 temp_v0_4;
    s16 var_a2;
    s16 var_a3_2;
    s16 var_s2;
    s16 var_s6;
    s32 temp_a1;
    s32 temp_s0_3;
    s32 temp_s1;
    s32 temp_s3;
    s32 temp_s5;
    s32 temp_s7;
    s32 temp_v1_2;
    s32 temp_v1_5;
    s32 var_s0;
    s32 var_s1;
    s32 var_s3;
    s32 var_s7;
    s32 var_v1;
    void **temp_v1;
    void **temp_v1_3;
    void **temp_v1_4;
    void *temp_s0_2;
    void *temp_v0;
    void *temp_v0_3;

    sp48 = D_8008D8E8;
    sp4C = M2C_FIELD(&D_8008ED80, s32 *, 4);
    M2C_FIELD(&D_8008ED80, s32 *, 4) = 3;
    var_s6 = arg1;
    D_8008D8E8 = 3;
    if (arg8 != 0) {
        var_s6 += 0xA;
    }
    if (M2C_FIELD(&D_8008AB10, s32 *, 0) != 0) {
        arg2 -= 0x64;
    }
    temp_s2 = var_s6 + 2;
    func_80045050(&D_8008ED80, arg0, temp_s2, 0, arg2, 9, 0x58, 0, 0x80, 2, 0);
    func_80045050(&D_8008ED80, arg0, var_s6 + 0xB, 0, arg2, 9, 0x68, 0, 0, 2, 0);
    var_s7 = arg0 + arg2;
    var_s1 = arg5;
    var_s0 = var_s7 + 2;
    sp50 = (arg6 * 4) + &D_80081AD0;
loop_5:
    if (var_s1 < (arg5 + arg4)) {
        func_80045050(&D_8008ED80, var_s7, temp_s2, 0, 2, 0x12, 8, 8, 8, 0, 0);
        if ((arg5 + var_s1) & 1) {
            func_80045050(&D_8008ED80, var_s0, temp_s2, 0, 0x1E, 8, 0x58, 0, 0x80, 2, 0);
            var_a2 = var_s6 + 0xB;
        } else {
            func_80045050(&D_8008ED80, var_s0, temp_s2, 0, 0x1E, 8, 0x98, 0x50, 0xC0, 2, 0);
            var_a2 = var_s6 + 0xB;
        }
        func_80045050(&D_8008ED80, var_s0, var_a2, 0, 2, 0);
        temp_a1 = var_s1 - 1;
        temp_v1 = M2C_FIELD(*sp50, void ***, 0x44);
        var_s0 += 0x20;
        temp_v0 = *temp_v1;
        var_s1 += 1;
        func_8002C64C(M2C_FIELD(temp_v0, s32 (**)(void *, s32), 0x44)(temp_v1 + M2C_FIELD(temp_v0, s16 *, 0x40), temp_a1), var_s7 + 0x12, var_s6 + 1, var_s6 + 0xB);
        var_s7 += 0x20;
        goto loop_5;
    }
    if (arg4 != 0) {
        temp_v1_2 = arg0 + arg2;
        func_80045050(&D_8008ED80, temp_v1_2 + 2, var_s6 + 0xA, 0, (var_s7 - 2) - temp_v1_2, 1, 8, 8, 8, 0, 0);
    }
    if (M2C_FIELD(&D_8008AB10, s32 *, 0) != 0) {
        temp_s4 = var_s6 + 2;
        func_80045050(&D_8008ED80, var_s7, temp_s4, 0, 0x64, 9, 0x58, 0, 0x80, 2, 0);
        func_80045050(&D_8008ED80, var_s7, var_s6 + 0xB, 0, 0x64, 9, 0x68, 0, 0, 2, 0);
        func_80045050(&D_8008ED80, var_s7, temp_s4, 0, 2, 0x12, 8, 8, 8, 0, 0);
        var_s7 += 0x64;
    }
    temp_s3 = var_s7 - arg0;
    func_80045050(&D_8008ED80, arg0, var_s6, 0, temp_s3, 2, 8, 8, 8, 0, 0);
    func_80045050(&D_8008ED80, arg0, var_s6 + 0x14, 0, temp_s3, 2, 8, 8, 8, 0, 0);
    func_80045050(&D_8008ED80, var_s7, var_s6, 0, 4, 0x16, 8, 8, 8, 0, 0);
    temp_s0 = (arg6 * 4) + &D_80081AD0;
    temp_v0_2 = var_s6 + 1;
    func_80039738(&D_8008CF28, 0, 0, (s16) (arg0 + arg3), (M2C_UNK *) temp_v0_2, *temp_s0);
    var_v1 = 0;
    if (D_80089944 == 0) {
        var_v1 = M2C_FIELD(&D_8008AB10, s32 *, 0) == 0;
    }
    if (var_v1 != 0) {
        temp_v1_3 = M2C_FIELD(*temp_s0, void ***, 0x44);
        temp_v0_3 = *temp_v1_3;
        if ((M2C_FIELD(temp_v0_3, s32 (**)(void *), 0x3C)(temp_v1_3 + M2C_FIELD(temp_v0_3, s16 *, 0x38)) >= 3) && (D_8007DA44 >= 2) && ((temp_v1_4 = M2C_FIELD(*temp_s0, void ***, 0x44), (arg7 != NULL)) || (M2C_FIELD(temp_v1_4, u8 *, 0xD6) == 0x20))) {
            func_80039738(&D_8008CF28, 5, 2, (s16) ((arg0 + arg2) - 0xA), (M2C_UNK *) temp_v0_2, (s8 *) temp_v1_4 + 0xD6);
        }
    }
    if (D_80089944 != 0) {
        func_8002CF84((arg6 * 0x18) + &D_8008A328, &arg7, &sp40, &sp44);
        func_80039738(&D_8008CF28, 5, 0, 0x172, (M2C_UNK *) (s16) (var_s6 + 1), sp40);
        func_80039738(&D_8008CF28, 5, 0, 0x172, (M2C_UNK *) (s16) (var_s6 + 0xA), sp44);
    }
    if (arg7 != NULL) {
        if (arg2 >= (func_80039BC4(&D_8008CF28, arg7) + arg3)) {
            func_80039738(&D_8008CF28, 5, 0, (s16) (arg0 + arg3), (M2C_UNK *) (s16) (var_s6 + 0xA), arg7);
        }
    }
    if (M2C_FIELD(&D_8008AB10, s32 *, 0) != 0) {
        temp_s0_2 = M2C_FIELD(*((arg6 * 4) + &D_80081AD0), void **, 0x44);
        func_80024EE0(M2C_FIELD(temp_s0_2, s32 *, 0x110), &sp30);
        temp_v0_4 = var_s7 - 5;
        func_80039738(&D_8008CF28, 6, 2, temp_v0_4, (M2C_UNK *) (s16) (var_s6 + 1), &sp30);
        var_a3 = 0;
        temp_v1_5 = M2C_FIELD(temp_s0_2, s32 *, 0x10C);
        if (temp_v1_5 != 1) {
            var_a3 = 0x73;
        }
        func_8005978C(&sp30, &D_80076098, temp_v1_5, var_a3);
        func_80039738(&D_8008CF28, 6, 2, temp_v0_4, (M2C_UNK *) (s16) (var_s6 + 0xB), &sp30);
    }
    temp_s6 = var_s6 - 0xA;
    if (arg8 != 0) {
        temp_s7 = var_s7 + 2;
        temp_s0_3 = temp_s7 - arg0;
        temp_s5 = temp_s0_3 + 2;
        func_80045050(&D_8008ED80, arg0, temp_s6, 0, temp_s5, 1, 0x80, 0x90, 0x92, 0, 0);
        temp_s3_2 = temp_s6 + 1;
        func_80045050(&D_8008ED80, arg0, temp_s3_2, 0, temp_s0_3, 8, 0x58, 0x60, 0x60, 0, 0);
        func_80045050(&D_8008ED80, arg0, temp_s6 + 9, 0, temp_s5, 1, 0x30, 0x38, 0x30, 0, 0);
        func_80045050(&D_8008ED80, temp_s7, temp_s3_2, 0, 2, 8, 0x30, 0x38, 0x30, 0, 0);
        if (D_80089944 != 0) {
            var_a2_2 = 0;
            var_a3_2 = 0x172;
            var_v0 = &D_800760A4;
            goto block_46;
        }
        var_s3 = 0;
        var_s2 = arg0 + arg2 + 0x10;
loop_36:
        if (var_s3 < arg4) {
            temp_s1 = arg5 + var_s3;
            func_8005978C(&sp30, &D_80076030, temp_s1);
            var_s0_2 = 0;
            if (M2C_FIELD(&D_8008AB10, s32 *, 0) != 0) {
                var_s0_2 = 7;
                if ((M2C_FIELD(&D_8008AB10, s32 *, 0x2C) + 1) == temp_s1) {
                    var_s0_2 = 5;
                }
                if (temp_s1 >= 0xD) {
                    var_s0_2 = 5;
                    func_8005978C(&sp30, &D_800760AC);
                }
            }
            func_80039738(&D_8008CEB0, var_s0_2, 1, var_s2, (M2C_UNK *) (s16) (temp_s6 - 2), &sp30);
            var_s2 += 0x20;
            var_s3 += 1;
            goto loop_36;
        }
        if (M2C_FIELD(&D_8008AB10, s32 *, 0) != 0) {
            var_a2_2 = 1;
            var_a3_2 = var_s2 + 0x22;
            var_v0 = &D_800760B0;
block_46:
            func_80039738(&D_8008CF28, 0, var_a2_2, var_a3_2, var_v0);
        }
    }
    D_8008ED84 = sp4C;
    D_8008D8E8 = sp48;
}

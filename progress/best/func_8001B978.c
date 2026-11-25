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

M2C_UNK func_80039738(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32, u8 *); /* extern */
s32 func_80039BC4(M2C_UNK *, u8 *);                 /* extern */
M2C_UNK func_8004217C(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_80044FB0(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_8005978C();       /* extern */
extern M2C_UNK D_80074878;
extern M2C_UNK D_800748B0;
extern M2C_UNK D_800748BC;
extern M2C_UNK D_800748C8;
extern M2C_UNK D_800748D4;
extern M2C_UNK D_800748E0;
extern M2C_UNK D_800748EC;
extern M2C_UNK D_800748F4;
extern M2C_UNK D_80074908;
extern void *D_80082780;
extern s32 D_80083200;
extern M2C_UNK D_800833B0;
extern M2C_UNK D_8008CEEC;
extern M2C_UNK D_8008CF28;
extern s32 D_8008D8E8;
extern u8 D_8008E6D0;
extern M2C_UNK D_8008ED80;

#define sp18 (*(u8 *)(sp + 0x18))
#define sp58 (*(u8 *)(sp + 0x58))
void func_8001B978(void *arg0) {
    u8 sp[184];
    M2C_UNK *var_a1_2;
    s16 var_s3;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a1;
    s32 var_a1_3;
    s32 var_s1;
    u8 *temp_v1_5;
    u8 *var_a0_3;
    u8 *var_s0;
    u8 *var_s2;
    u8 *var_v1;
    u8 *var_v1_2;
    u8 temp_v0_2;
    u8 var_s4;
    void **temp_v1_3;
    void *temp_s0;
    void *temp_s2;
    void *temp_v0;
    void *temp_v1_2;
    void *temp_v1_4;
    void *var_s0_2;
    void *var_v0;

    func_8004217C(&D_8008ED80, 5);
    func_80044FB0(&D_8008ED80, 1);
    var_v0 = M2C_FIELD(arg0, void **, 0x1C);
    var_s2 = NULL;
    if ((var_v0 != NULL) || (var_v0 = M2C_FIELD(arg0, void **, 0x14), (var_v0 != NULL))) {
        var_s2 = M2C_FIELD(var_v0, u8 **, 0x30);
    }
    var_s1 = 0;
    if (var_s2 != NULL) {
        var_a0 = 1;
        var_v1 = var_s2;
        if (*var_s2 != 0) {
            do {
                if (var_a0 != 0) {
                    if ((u8) *var_v1 >= 0xEU) {
                        var_s1 += 1;
                        var_a0 = 0;
                    }
                } else if ((u8) *var_v1 < 0xEU) {
                    var_a0 = 1;
                }
                var_v1 += 1;
            } while (*var_v1 != 0);
        }
        temp_v1 = ((s32) (var_s1 - 1) >> 1) * 0xD;
        var_s3 = temp_v1 + 0x1B;
        if (!(var_s1 & 1)) {
            var_s3 = temp_v1 + 0x14;
        }
loop_14:
        if (var_s1 != 0) {
            var_s0 = NULL;
            if (var_s1 >= 2) {
                var_s0 = var_s2;
                if ((u8) *var_s2 >= 0xEU) {
                    do {
                        var_s0 += 1;
                    } while ((u8) *var_s0 >= 0xEU);
                }
                var_s4 = *var_s0;
                *var_s0 = 0;
            }
            func_80039738(&D_8008CEEC, 0, 1, 0x140, (s32) var_s3, var_s2);
            if (var_s0 != NULL) {
                *var_s0 = var_s4;
                if ((u32) (var_s4 & 0xFF) < 0xEU) {
                    do {
                        var_s0 += 1;
                    } while ((u8) *var_s0 < 0xEU);
                }
                var_s2 = var_s0;
            }
            var_s3 += 0xD;
            var_s1 -= 1;
            goto loop_14;
        }
    }
    var_s0_2 = NULL;
    if (M2C_FIELD(arg0, void **, 0x1C) != NULL) {
        func_8005978C(&sp18, &D_800748B0);
        func_80039738(&D_8008CF28, 0, 0, 0x2D, 0xD4, &sp18);
        temp_v1_2 = M2C_FIELD(arg0, void **, 0x1C);
        var_a1 = 0;
        M2C_FIELD(arg0, s32 *, 0x3C) = func_80039BC4(&D_8008CF28, &sp18);
        if (temp_v1_2 != NULL) {
            var_a0_2 = 0;
            if (M2C_FIELD(temp_v1_2, s32 *, 0x18) != 0) {
                var_a0_2 = (u32) M2C_FIELD(temp_v1_2, u32 *, 0x1C) > 0U;
            }
            if (var_a0_2 != 0) {
                var_a1 = 1;
            }
        }
        if (var_a1 == 0) {
            temp_s0 = D_80082780;
            temp_v1_3 = M2C_FIELD(temp_s0, void ***, 0x34);
            temp_v0 = *temp_v1_3;
            if (M2C_FIELD(temp_v0, s32 (**)(void *, s32), 0xC)(temp_v1_3 + M2C_FIELD(temp_v0, s16 *, 8), var_a1) != 0) {
                var_a1_2 = &D_800748BC;
            } else {
                var_a1_2 = &D_800748C8;
            }
            func_8005978C(&sp18, var_a1_2, M2C_FIELD(temp_s0, u8 **, 0x14));
            func_80039738(&D_8008CF28, 0, 1, 0x140, 0xD4, &sp18);
        }
        func_8005978C(&sp18, &D_800748D4);
        func_80039738(&D_8008CF28, 0, 2, 0x253, 0xD4, &sp18);
        return;
    }
    temp_v1_4 = M2C_FIELD(arg0, void **, 0x14);
    temp_s2 = D_80082780;
    if (temp_v1_4 != NULL) {
        var_s0_2 = M2C_FIELD(temp_v1_4, void **, 0x34);
    }
    if (var_s0_2 == NULL) {
        if (M2C_FIELD(arg0, s32 *, 0x30) != 0) {
            func_8005978C(&sp18, &D_800748F4);
            goto block_55;
        }
    } else {
        temp_v1_5 = M2C_FIELD(var_s0_2, u8 **, 0x30);
        var_a1_3 = 0;
        if (temp_v1_5 != NULL) {
            if (*temp_v1_5 != 0) {
                var_a0_3 = temp_v1_5;
                var_v1_2 = &sp58;
                do {
                    temp_v0_2 = *var_a0_3;
                    if (temp_v0_2 != 0xA) {
                        *var_v1_2 = temp_v0_2;
                    } else {
                        *var_v1_2 = 0x20;
                    }
                    var_a0_3 += 1;
                    var_v1_2 += 1;
                    var_a1_3 += 1;
                } while (*var_a0_3 != 0);
            }
            M2C_FIELD((sp + var_a1_3), s8 *, 0x58) = 0;
        } else {
            func_8005978C(&sp58, &D_80074878);
        }
        if (var_s0_2 == &D_800833B0) {
            func_8005978C(&sp58, &D_800748E0);
        }
        func_8005978C(&sp18, &D_800748EC, &sp58);
block_55:
        if (D_80083200 != 0) {
            D_8008D8E8 = 1;
        }
        func_80039738(&D_8008CF28, 0, 0, 0x2D, 0xD4, &sp18);
        M2C_FIELD(arg0, s32 *, 0x3C) = func_80039BC4(&D_8008CF28, &sp18);
    }
    if (temp_s2 != NULL) {
        if (D_8008E6D0 == 0) {
            func_8005978C(&sp18, &D_80074908, M2C_FIELD(temp_s2, u8 **, 0x14));
            func_80039738(&D_8008CF28, 0, 2, 0x253, 0xD4, &sp18);
        }
        D_8008E6D0 = 0;
    }
}

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

M2C_UNK func_80029704(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80037310(M2C_UNK *);                   /* extern */
M2C_UNK func_80039738(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK *); /* extern */
M2C_UNK func_80045050(M2C_UNK *, s32, s32, M2C_UNK, s32, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_8005978C(M2C_UNK *, M2C_UNK *, s32);   /* extern */
extern M2C_UNK D_800790C4;
extern M2C_UNK D_800790DC;
extern s32 D_80082FB4;
extern M2C_UNK D_8008CEB0;
extern M2C_UNK D_8008CF28;
extern s32 D_8008D8E8;
extern M2C_UNK D_8008E860;
extern M2C_UNK D_8008E8A0;
extern M2C_UNK D_8008E8E0;
extern M2C_UNK D_8008E920;
extern M2C_UNK D_8008E960;
extern s32 D_8008E9A4;
extern M2C_UNK D_8008E9E4;
extern s32 D_8008EBC0;
extern M2C_UNK D_8008ED80;

s32 func_8003F358(void *arg0, s32 arg1) {
    M2C_UNK sp30;
    M2C_UNK *var_s3;
    M2C_UNK *var_s4;
    s32 temp_s5;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v0;
    s32 var_v1;

    switch (arg1) {                                 /* irregular */
    case 0:
        var_s4 = &D_8008E8A0;
        var_v1 = M2C_FIELD(arg0, s32 *, 0xA0);
block_14:
        var_s3 = &D_8008E860;
block_15:
        var_v0 = 0;
        if (var_v1 != 0) {
        default:
            if (M2C_FIELD(arg0, s32 *, 0xA4) != 0) {
                temp_v0 = D_80082FB4 + 2;
                M2C_FIELD(arg0, s32 *, 0x98) = temp_v0;
                if (temp_v0 < 0x5C) {
                    M2C_FIELD(arg0, s32 *, 0x98) = 0x5C;
                }
            } else {
                M2C_FIELD(arg0, s32 *, 0x98) = 0x5C;
                if (M2C_FIELD(arg0, s32 *, 0xA8) != 0) {
                    if (arg1 == 1) {
                        temp_s5 = M2C_FIELD(&D_8008ED80, s32 *, 4);
                        M2C_FIELD(&D_8008ED80, s32 *, 4) = 0;
                        func_80029704(0x140, 0x50, 0, 0);
                        D_8008D8E8 = 0;
                        M2C_FIELD(&D_8008ED80, s32 *, 4) = temp_s5;
                        M2C_FIELD(arg0, s32 *, 0x84) = 0x6B;
                        if (M2C_FIELD(arg0, M2C_UNK **, 0x78) != NULL) {
                            func_80039738(&D_8008CEB0, 0, 1, 0x140, 0x58, M2C_FIELD(arg0, M2C_UNK **, 0x78));
                        }
                        func_80039738(&D_8008CF28, 7, 1, 0x140, 0x83, &D_800790C4);
                        func_8005978C(&sp30, &D_800790DC, (&D_8008E9E4)[D_8008EBC0]);
                        func_80039738(&D_8008CF28, 7, 1, 0x140, 0x8D, &sp30);
                        M2C_FIELD(&D_8008ED80, s32 *, 4) = temp_s5;
                    } else {
                        func_80029704(0x12C, 0x3C, 0, 0);
                        M2C_FIELD(arg0, s32 *, 0x84) = 0x78;
                        D_8008D8E8 = 0;
                        if (M2C_FIELD(arg0, M2C_UNK **, 0x78) != NULL) {
                            func_80039738(&D_8008CEB0, 0, 1, 0x140, 0x64, M2C_FIELD(arg0, M2C_UNK **, 0x78));
                        }
                    }
                }
            }
            func_80045050(&D_8008ED80, M2C_FIELD(arg0, s32 *, 0x80) + M2C_FIELD(arg0, s32 *, 0x94), M2C_FIELD(arg0, s32 *, 0x84), 0, M2C_FIELD(arg0, s32 *, 0x98) + 0x1E, 0x15, (s32) M2C_FIELD(arg0, u8 *, 0x8B), (s32) M2C_FIELD(arg0, u8 *, 0x8F), (s32) M2C_FIELD(arg0, u8 *, 0x93), 0, 0);
            M2C_FIELD(var_s4, u16 *, 0x10) = (u16) M2C_FIELD(arg0, u16 *, 0x82);
            M2C_FIELD(var_s4, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x86) + 3);
            func_80037310(var_s4);
            M2C_FIELD(var_s3, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x82) + 0x4C);
            M2C_FIELD(var_s3, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x86) + 3);
            func_80037310(var_s3);
            if (D_8008E9A4 >= 0xB) {
                M2C_FIELD(&D_8008E920, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x82) + 0x24);
                M2C_FIELD(&D_8008E920, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x86) + 7);
                func_80037310(&D_8008E920);
                if (D_8008E9A4 >= 0x15) {
                    M2C_FIELD(&D_8008E920, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x82) + 0x30);
                    M2C_FIELD(&D_8008E920, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x86) + 7);
                    func_80037310(&D_8008E920);
                    if (D_8008E9A4 >= 0x1F) {
                        M2C_FIELD(&D_8008E920, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x82) + 0x3C);
                        M2C_FIELD(&D_8008E920, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x86) + 7);
                        func_80037310(&D_8008E920);
                    }
                }
            }
            temp_v0_2 = D_8008E9A4 + 1;
            D_8008E9A4 = temp_v0_2;
            if (temp_v0_2 >= 0x29) {
                D_8008E9A4 = 0;
            }
            var_v0 = 1;
        }
        break;
    case 1:
        var_s4 = &D_8008E860;
        var_v1 = M2C_FIELD(arg0, s32 *, 0xA0);
        var_s3 = &D_8008E8A0;
        goto block_15;
    case 2:
        var_s4 = &D_8008E8E0;
block_13:
        var_v1 = M2C_FIELD(arg0, s32 *, 0x9C);
        goto block_14;
    case 3:
        var_s4 = &D_8008E960;
        goto block_13;
    }
    return var_v0;
}

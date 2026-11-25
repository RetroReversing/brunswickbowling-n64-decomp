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

s32 func_80035F18(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
s32 func_80040780(M2C_UNK *, M2C_UNK);              /* extern */
s32 func_800407F0(M2C_UNK *, M2C_UNK);              /* extern */
u8 func_8004FC3C();                                 /* extern */
M2C_UNK func_8005978C(M2C_UNK *, M2C_UNK *, s32);   /* extern */
extern M2C_UNK D_8001E3D0;
extern M2C_UNK D_800754A4;
extern M2C_UNK D_800754B8;
extern M2C_UNK D_80083060;
extern M2C_UNK D_80083430;
extern M2C_UNK D_80083744;
extern u8 D_80083798;
extern s32 D_80083BA0;
extern s32 D_80083BA4;
extern s32 D_80089070;
extern s32 D_8008BB30;
extern s32 D_8008E9E4;
extern M2C_UNK D_8008EB34;
extern M2C_UNK D_80099230;
extern M2C_UNK D_80099260;
extern s32 D_800992C0;
extern M2C_UNK func_8001E3D8;
extern M2C_UNK func_8001E3E0;
extern M2C_UNK func_8001E4B8;

s32 func_8001E4C0(s32 arg0) {
    M2C_UNK *var_a0;
    M2C_UNK *var_v0;
    M2C_UNK *var_v0_2;
    M2C_UNK *var_v0_3;
    M2C_UNK *var_v0_5;
    M2C_UNK *var_v0_6;
    s32 temp_a0;
    s32 temp_s1;
    s32 temp_v0_2;
    s32 var_s0;
    s32 var_s1;
    s32 var_v0_4;
    s32 var_v1;
    s32 var_v1_3;
    s32 var_v1_4;
    u8 temp_v0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *var_v1_2;

    var_s0 = 0;
    temp_v0 = func_8004FC3C();
    if (temp_v0 & 1) {
        temp_v0_2 = func_800407F0(&D_8008EB34, 0);
        D_80083BA4 = temp_v0_2;
        var_s1 = 0;
        if ((temp_v0_2 != 0) || (func_80040780(&D_8008EB34, 0) == 0)) {
            var_s1 = 1;
        }
        if (var_s1 != 0) {
            temp_s1 = temp_v0 & 0xFF;
            if (temp_s1 == D_80083798) {
                D_80083BA0 = 1;
            }
            temp_a0 = func_80035F18(0, 0, 1);
            if (temp_s1 != D_80083798) {
                D_800992C0 = D_80089070;
            }
            if (temp_a0 != 1) {
                func_8005978C(&D_80099260, &D_800754A4, D_8008E9E4);
                var_v1 = 0 * 0x10;
                temp_a0_2 = var_v1 + &D_80099230;
                if (arg0 != &D_80083744) {
                    var_v0 = &D_80083060;
                    var_v1 = 0 * 0x10;
                } else {
                    var_v0 = &D_80083430;
                }
                var_s0 = 1;
                M2C_FIELD(temp_a0_2, M2C_UNK **, 4) = var_v0;
                var_v1_2 = var_v1 + &D_80099230;
                var_v0_2 = &func_8001E3D8;
                goto block_37;
            }
            if (D_8008BB30 == temp_a0) {
                func_8005978C(&D_80099260, &D_800754A4, D_8008E9E4);
                var_v1_3 = 0 * 0x10;
                temp_a0_3 = var_v1_3 + &D_80099230;
                if (arg0 != &D_80083744) {
                    var_v0_3 = &D_80083060;
                    var_v1_3 = 0 * 0x10;
                } else {
                    var_v0_3 = &D_80083430;
                }
                var_s0 = 1;
                M2C_FIELD(temp_a0_3, M2C_UNK **, 4) = var_v0_3;
                var_v1_2 = var_v1_3 + &D_80099230;
                M2C_FIELD(var_v1_2, M2C_UNK **, 8) = &func_8001E3E0;
                var_v0_4 = 0xB;
                goto block_38;
            }
        } else {
            func_8005978C(&D_80099260, &D_800754A4, D_8008E9E4);
            var_v1_4 = 0 * 0x10;
            temp_a0_4 = var_v1_4 + &D_80099230;
            if (arg0 != &D_80083744) {
                var_v0_5 = &D_80083060;
                var_v1_4 = 0 * 0x10;
            } else {
                var_v0_5 = &D_80083430;
            }
            var_s0 = 1;
            M2C_FIELD(temp_a0_4, M2C_UNK **, 4) = var_v0_5;
            var_v1_2 = var_v1_4 + &D_80099230;
            M2C_FIELD(var_v1_2, M2C_UNK **, 8) = &func_8001E3E0;
            var_v0_4 = 0xB;
            goto block_38;
        }
    } else {
        func_8005978C(&D_80099260, &D_800754A4, D_8008E9E4);
        if (arg0 != &D_80083744) {
            var_v0_6 = &D_80083060;
        } else {
            var_v0_6 = &D_80083430;
        }
        var_s0 = 1;
        M2C_FIELD(&D_80099230, M2C_UNK **, 4) = var_v0_6;
        var_v1_2 = (0 * 0x10) + &D_80099230;
        var_v0_2 = &D_8001E3D0;
block_37:
        M2C_FIELD(var_v1_2, M2C_UNK **, 8) = var_v0_2;
        var_v0_4 = 0xC;
block_38:
        M2C_FIELD(var_v1_2, s32 *, 0xC) = var_v0_4;
        M2C_FIELD(var_v1_2, M2C_UNK **, 0) = &D_80099260;
    }
    if (arg0 == &D_80083744) {
        var_a0 = &D_80083430;
    } else {
        var_a0 = &D_80083060;
    }
    M2C_FIELD(((var_s0 * 0x10) + &D_80099230), M2C_UNK **, 4) = var_a0;
    temp_a0_5 = (var_s0 * 0x10) + &D_80099230;
    M2C_FIELD(temp_a0_5, M2C_UNK **, 8) = &func_8001E4B8;
    M2C_FIELD(temp_a0_5, s32 *, 0xC) = 0xC;
    M2C_FIELD(temp_a0_5, M2C_UNK **, 0) = &D_800754B8;
    D_80083798 = temp_v0;
    return var_s0 + 1;
}

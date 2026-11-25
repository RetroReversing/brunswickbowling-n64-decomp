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

M2C_UNK func_8001C210(s32, s32 *);                  /* extern */
M2C_UNK func_800204F8(void *);                      /* extern */
s32 func_800207E0(void *);                          /* extern */
s32 func_8002113C(void *, void *);                  /* extern */
s32 func_800218BC(void *);                          /* extern */
M2C_UNK func_80021DD0(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_80021EBC(M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
s32 func_800315E0(M2C_UNK *);                       /* extern */
s32 func_80035F18(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_8003F2F0(M2C_UNK *);                   /* extern */
M2C_UNK func_8003F6FC(M2C_UNK *, M2C_UNK *);        /* extern */
s32 func_80040780(M2C_UNK *, M2C_UNK);              /* extern */
s32 func_800407F0(M2C_UNK *, M2C_UNK, s32);         /* extern */
extern M2C_UNK D_8001FFF0;
extern M2C_UNK D_800758B4;
extern M2C_UNK D_80075950;
extern M2C_UNK D_80075958;
extern s32 D_80082760;
extern M2C_UNK D_80083AF0;
extern s32 D_80083B90;
extern s32 D_80083BA0;
extern s32 D_80083BA4;
extern M2C_UNK D_80089044;
extern M2C_UNK D_80089054;
extern M2C_UNK D_80089064;
extern M2C_UNK D_80089080;
extern M2C_UNK D_8008B3A4;
extern s32 D_8008BA98;
extern s32 D_8008E84C;
extern M2C_UNK D_8008EB34;
extern s32 D_8008EBC0;
extern M2C_UNK func_80020080;
extern M2C_UNK func_80020090;
extern M2C_UNK func_800200EC;

void func_80020178(void *arg0) {
    s32 sp18;
    s32 sp20;
    s32 sp28;
    s32 sp30;
    s32 sp38;
    M2C_UNK *var_a1;
    s32 temp_a0;
    s32 temp_v0;
    s32 var_a0;
    s32 var_s0;
    s32 var_s1;
    u32 var_v1;

    temp_a0 = arg0 + 0xC;
    var_s0 = 0;
    sp18 = temp_a0;
    sp30 = temp_a0;
    sp28 = temp_a0;
    sp38 = D_8008BA98;
    func_8001C210(temp_a0, &sp38);
    sp20 = sp28;
    M2C_FIELD(arg0, s32 *, 0x548C) = 0;
    M2C_FIELD(arg0, s32 *, 0x5488) = 0;
    M2C_FIELD(arg0, s32 *, 0x5490) = 0;
    D_80083B90 = 1;
    temp_v0 = func_800407F0(&D_8008EB34, 0, sp18);
    D_80083BA4 = temp_v0;
    if ((temp_v0 != 0) || (func_80040780(&D_8008EB34, 0) == 0)) {
        var_s0 = 1;
    }
    if (var_s0 != 0) {
        D_80083BA0 = 1;
        if (func_80035F18(0, 1, 1) == 0) {
            D_8008E84C = 1;
            return;
        }
        goto block_7;
    }
block_7:
    if (M2C_FIELD(&D_8008B3A4, s32 *, 0x18) != 0) {
        var_a0 = 0;
        if (M2C_FIELD(&D_8008B3A4, s32 *, 0x44) == 9) {
            var_a0 = func_800315E0(&D_8008B3A4) != 0;
        }
        var_s1 = 0;
        if (var_a0 != 0) {
            if (((func_800207E0(arg0) != 0) || (func_8002113C(arg0, &D_8008B3A4 + 0x14) >= 0)) && (D_8008EBC0 >= 0)) {
                var_s1 = 1;
            }
            if (var_s1 != 0) {
                if (D_80082760 != 0) {
                    var_a1 = &D_80089054;
                } else {
                    var_a1 = &D_80089044;
                }
                func_80021DD0(&D_80089080, var_a1);
                func_80021EBC(&D_80089080, 0x20A, &D_80075950, &D_8001FFF0);
                func_80021EBC(&D_80089080, 0x20B, &D_80075958, &func_80020080);
                return;
            }
            goto block_26;
        }
        var_v1 = 0;
        if (D_8008EBC0 >= 0) {
            var_v1 = (u32) ~func_8002113C(arg0, &D_8008B3A4 + 0x14) >> 0x1F;
        }
        if (var_v1 != 0) {
            func_8003F6FC(&D_80083AF0, &D_800758B4);
            M2C_FIELD(arg0, s32 *, 0x5490) = 1;
            M2C_FIELD(arg0, s32 *, 0x5498) = func_800218BC(arg0);
            func_8003F2F0(&D_80083AF0);
        }
    } else {
        if (func_800207E0(arg0) != 0) {
            func_80021DD0(&D_80089080, &D_80089064);
            func_80021EBC(&D_80089080, 0x20A, &D_80075950, &func_80020090);
            func_80021EBC(&D_80089080, 0x20B, &D_80075958, &func_800200EC);
            return;
        }
block_26:
        func_800204F8(arg0);
    }
}

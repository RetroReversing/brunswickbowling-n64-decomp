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

M2C_UNK func_800137B0(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s16 func_8001E4C0(s32);                             /* extern */
void *func_800205E0(M2C_UNK *, M2C_UNK);            /* extern */
s32 func_800208B0(M2C_UNK *, void *);               /* extern */
M2C_UNK func_800233FC(void *, s16);                 /* extern */
M2C_UNK func_80023B50(void *);                      /* extern */
s32 func_8004FC3C();                                /* extern */
extern M2C_UNK D_8001E3D0;
extern M2C_UNK D_8007DA48;
extern s32 D_8007E4E0;
extern M2C_UNK D_80081B20;
extern void *D_80082780;
extern M2C_UNK D_800836F0;
extern M2C_UNK D_80083BA8;
extern M2C_UNK D_8008AFB0;
extern M2C_UNK D_8008AFCC;
extern M2C_UNK D_8008AFDC;
extern M2C_UNK D_8008AFEC;
extern M2C_UNK D_8008B050;
extern s32 D_8008EBC0;
extern M2C_UNK D_80099230;
extern s32 D_800992C0;
extern M2C_UNK func_8001E3D8;
extern M2C_UNK func_8001E3E0;

void func_8001E8CC(void *arg0) {
    M2C_UNK *var_a1;
    M2C_UNK *var_a1_2;
    M2C_UNK *var_s0;
    M2C_UNK *var_s3;
    M2C_UNK *var_s4;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s6;
    s32 var_v1;
    void *temp_v0;
    void *temp_v0_2;

    if (M2C_FIELD(arg0, s32 *, 0x18) == 0) {
        M2C_FIELD(arg0, s16 *, 0x4A) = func_8001E4C0(D_8008EBC0);
        func_800233FC(arg0, M2C_FIELD(arg0, s16 *, 0x20));
        temp_v0 = M2C_FIELD(D_80082780, void **, 0x10);
        M2C_FIELD(temp_v0, M2C_UNK (**)(void *, M2C_UNK), 0x44)(D_80082780 + M2C_FIELD(temp_v0, s16 *, 0x40), 1);
    }
    var_s6 = 0;
    if (arg0 == &D_800836F0) {
        var_s0 = &D_80081B20;
        var_s4 = &D_80099230;
loop_4:
        if (var_s6 < M2C_FIELD(arg0, s16 *, 0x4A)) {
            var_s3 = NULL;
            if (M2C_FIELD(var_s4, s32 *, 8) == &func_8001E3E0) {
                var_s1 = 0;
                temp_v0_2 = func_800205E0(&D_80083BA8, 0xE);
                var_v1 = 0;
                if (M2C_FIELD(temp_v0_2, u8 *, 0) == 0) {
                    var_v1 = M2C_FIELD(temp_v0_2, u8 *, 1) == 0;
                }
                if ((var_v1 == 0) && (func_800208B0(&D_80083BA8, (D_8007E4E0 * 0x1C4) + &D_8007DA48 + 8) == 0)) {
                    var_s1 = 1;
                }
                if (var_s1 != 0) {
                    var_s3 = &D_8008B050;
                }
                var_a1 = var_s3;
                goto block_24;
            }
            temp_a0 = func_8004FC3C();
            temp_v1 = M2C_FIELD(var_s4, s32 *, 8);
            if (temp_v1 == &func_8001E3D8) {
                if (temp_a0 & 1) {
                    if (D_800992C0 == 1) {
                        var_a1 = &D_8008AFEC;
                    } else if (D_800992C0 == 3) {
                        var_a1 = &D_8008AFB0;
                    } else {
                        var_a1 = &D_8008AFDC;
                    }
                } else {
                    goto block_23;
                }
                goto block_24;
            }
            if ((temp_v1 == &D_8001E3D0) && !(temp_a0 & 0xFF)) {
block_23:
                var_a1 = &D_8008AFCC;
block_24:
                func_800137B0(var_s0, var_a1, -1, -1);
            }
            var_s0 += 19;
            var_s4 += 0x10;
            var_s6 += 1;
            goto loop_4;
        }
    } else {
        var_s1_2 = 0;
        temp_a0 = func_8004FC3C();
        if (M2C_FIELD(arg0, s16 *, 0x4A) > 0) {
            do {
                temp_v0_3 = M2C_FIELD(((M2C_UNK *)((u8 *)&D_80099230 + var_s1_2 * 64)), s32 *, 8);
                if ((temp_v0_3 == &func_8001E3D8) || (temp_v0_3 == &D_8001E3D0)) {
                    if (temp_a0 & 1) {
                        if (D_800992C0 == 1) {
                            var_a1_2 = &D_8008AFEC;
                        } else if (D_800992C0 == 3) {
                            var_a1_2 = &D_8008AFB0;
                        } else {
                            var_a1_2 = &D_8008AFDC;
                        }
                    } else {
                        var_a1_2 = &D_8008AFCC;
                    }
                    func_800137B0(((M2C_UNK *)((u8 *)&D_80081B20 + var_s1_2 * 76)), var_a1_2, -1, -1);
                }
                var_s1_2 += 1;
            } while (var_s1_2 < M2C_FIELD(arg0, s16 *, 0x4A));
        }
    }
    func_80023B50(arg0);
}

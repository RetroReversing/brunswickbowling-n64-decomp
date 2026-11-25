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

M2C_UNK func_80025438();                            /* extern */
M2C_UNK func_80026C78(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_800580A0(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_8005978C(); /* extern */
extern M2C_UNK D_80076178;
extern M2C_UNK D_80076180;
extern M2C_UNK D_80076188;
extern M2C_UNK D_80076190;
extern M2C_UNK D_8007619C;
extern M2C_UNK D_80076210;
extern M2C_UNK D_8007621C;
extern M2C_UNK D_8007622C;
extern M2C_UNK D_80076244;
extern M2C_UNK D_80076250;
extern M2C_UNK D_80076264;
extern M2C_UNK D_80076278;
extern M2C_UNK D_80076298;
extern M2C_UNK D_800762A0;
extern s32 D_8007DA44;
extern M2C_UNK D_80081AD0;
extern s32 D_800898F0;
extern s32 D_800898F4;
extern s32 D_80089944;
extern M2C_UNK D_8008AB10;
extern M2C_UNK D_8008B3A4;
extern s32 D_8008B3E8;

void func_80026EC4(void) {
    M2C_UNK sp18;
    M2C_UNK sp98;
    M2C_UNK sp118;
    M2C_UNK sp198;
    M2C_UNK *var_a0;
    M2C_UNK *var_a0_2;
    M2C_UNK *var_a1;
    M2C_UNK *var_a3_2;
    s32 var_a2;
    s32 var_a3;

    func_800580A0(&sp18, 0, 0x80);
    func_800580A0(&sp98, 0, 0x80);
    func_800580A0(&sp118, 0, 0x80);
    func_800580A0(&sp198, 0, 0x80);
    func_80025438();
    if ((u32) (D_8007DA44 - 1) < 6U) {
        switch (D_8007DA44) {                       /* switch 1 */
case 7: goto switch_1_7;
case 8: goto switch_1_8;
case 9: goto switch_1_9;
case 10: goto switch_1_10;
case 11: goto switch_1_11;
case 12: goto switch_1_12;
case 13: goto switch_1_13;
case 14: goto switch_1_14;
case 15: goto switch_1_15;
        case 1:                                     /* switch 1 */
            func_8005978C(&sp18, &D_80076178, M2C_FIELD(&D_80081AD0, s32 *, 0));
            goto block_10;
        case 2:                                     /* switch 1 */
            var_a0 = &sp18;
            var_a2 = M2C_FIELD(&D_80081AD0, s32 *, 0);
            var_a3 = M2C_FIELD(&D_80081AD0, s32 *, 4);
block_7:
            func_8005978C(var_a0, &D_80076190, var_a2, var_a3);
            goto block_10;
        case 3:                                     /* switch 1 */
            func_8005978C(&sp18, &D_80076180, M2C_FIELD(&D_80081AD0, s32 *, 0), M2C_FIELD(&D_80081AD0, s32 *, 4));
            func_8005978C(&sp98, &D_8007619C, M2C_FIELD(&D_80081AD0, s32 *, 8));
            goto block_10;
        case 4:                                     /* switch 1 */
            func_8005978C(&sp18, &D_80076188, M2C_FIELD(&D_80081AD0, s32 *, 0), M2C_FIELD(&D_80081AD0, s32 *, 4));
            var_a0 = &sp98;
            var_a2 = M2C_FIELD(&D_80081AD0, s32 *, 8);
            var_a3 = M2C_FIELD(&D_80081AD0, s32 *, 0xC);
            goto block_7;
        case 5:                                     /* switch 1 */
            func_8005978C(&sp18, &D_80076210, M2C_FIELD(&D_80081AD0, s32 *, 0), M2C_FIELD(&D_80081AD0, s32 *, 4), M2C_FIELD(&D_80081AD0, s32 *, 8));
            var_a0 = &sp98;
            var_a2 = M2C_FIELD(&D_80081AD0, s32 *, 0xC);
            var_a3 = M2C_FIELD(&D_80081AD0, s32 *, 0x10);
            goto block_7;
        case 6:                                     /* switch 1 */
            func_8005978C(&sp18, &D_80076210, M2C_FIELD(&D_80081AD0, s32 *, 0), M2C_FIELD(&D_80081AD0, s32 *, 4), M2C_FIELD(&D_80081AD0, s32 *, 8));
            func_8005978C(&sp98, &D_8007621C, M2C_FIELD(&D_80081AD0, s32 *, 0xC), M2C_FIELD(&D_80081AD0, s32 *, 0x10), M2C_FIELD(&D_80081AD0, s32 *, 0x14));
            goto block_9;
        }
    } else {
block_9:
block_10:
        if (M2C_FIELD(&D_8008B3A4, s32 *, 0x18) != 0) {
            switch (M2C_FIELD(&D_8008B3A4, s32 *, 0x44)) { /* switch 2 */
default: goto switch_2_default;
            case 1:                                 /* switch 2 */
            case 2:                                 /* switch 2 */
            case 3:                                 /* switch 2 */
switch_1_7:
switch_1_8:
switch_1_9:
                var_a0_2 = &sp118;
                var_a1 = &D_8007622C;
                goto block_24;
            case 4:                                 /* switch 2 */
switch_1_10:
                var_a0_2 = &sp118;
                var_a1 = &D_80076244;
                goto block_24;
            case 5:                                 /* switch 2 */
switch_1_11:
                var_a0_2 = &sp118;
                var_a1 = &D_80076250;
                goto block_24;
            case 6:                                 /* switch 2 */
            case 7:                                 /* switch 2 */
            case 8:                                 /* switch 2 */
switch_1_12:
switch_1_13:
switch_1_14:
                func_8005978C(&sp118, &D_80076264, D_8008B3E8 - 5);
                break;
            case 9:                                 /* switch 2 */
switch_1_15:
                var_a0_2 = &sp118;
                var_a1 = &D_80076278;
                goto block_24;
            }
        } else if (D_80089944 != 0) {
            func_8005978C(&sp118, &D_80076178, D_800898F4);
        } else {
            if (M2C_FIELD(&D_8008AB10, s32 *, 0) != 0) {
                func_8005978C(&sp118, &D_80076298, M2C_FIELD(M2C_FIELD(&D_8008AB10, void **, 0xC4), s32 *, 4), M2C_FIELD(M2C_FIELD(&D_8008AB10, void **, 0xC4), s32 *, 8));
                var_a0_2 = &sp198;
            } else {
                func_8005978C(&sp118, &D_80076178, D_800898F0);
                var_a0_2 = &sp198;
            }
            var_a1 = &D_800762A0;
block_24:
            func_8005978C(var_a0_2, var_a1);
switch_2_default:
        }
    }
    if (D_8007DA44 < 3) {
        var_a3_2 = NULL;
    } else {
        var_a3_2 = &sp98;
    }
    func_80026C78(&sp118, &sp198, &sp18, var_a3_2);
}

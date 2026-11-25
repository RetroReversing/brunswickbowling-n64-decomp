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

M2C_UNK func_800149E4(s32);                         /* extern */
M2C_UNK func_800322E0(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_80032A74(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_80032AB0(void *, s16);                 /* extern */
M2C_UNK func_80032B14(void *, s32);                 /* extern */
M2C_UNK func_80037264(); /* extern */
M2C_UNK func_800473DC(M2C_UNK *, M2C_UNK *);        /* extern */
extern f64 D_800778B8;
extern f64 D_800778C0;
extern M2C_UNK D_80082198;
extern M2C_UNK D_80082368;
extern s32 D_8008BA48;
extern M2C_UNK D_8008BA50;
extern s32 D_8008BA58;
extern M2C_UNK D_8008BA60;
extern s32 D_8008BA68;
extern M2C_UNK D_8008BA70;
extern s32 D_8008BA78;
extern M2C_UNK D_8008BA80;
extern s32 D_8008BA88;
extern s32 D_8008E9E0;
extern M2C_UNK D_80092484;

#define sp18 (*(s32 *)(sp + 0x18))
#define sp28 (*(s32 *)(sp + 0x28))
s32 func_800333B8(void *arg0, s32 arg1, s32 arg2) {
    u8 sp[88];
    M2C_UNK var_a3;
    s16 temp_a0;
    s16 temp_a0_2;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_v0;

    if ((arg1 & 0xFF) == M2C_FIELD(arg0, u8 *, 0x31A)) {
        switch (arg2) {                             /* switch 1 */
default: goto switch_1_default;
        case 0x212:                                 /* switch 1 */
            func_800473DC(&D_80092484, &sp18);
            if (D_800778B8 < sp28) {
                temp_a0 = (M2C_FIELD(arg0, s16 *, 0x300) + 2) % 3;
                M2C_FIELD(arg0, s16 *, 0x300) = temp_a0;
                var_a0 = *(((s32) (temp_a0 << 0x10) >> 0xE) + &D_80082198);
            } else {
                M2C_FIELD(arg0, u16 *, 0x302) = (u16) (M2C_FIELD(arg0, u16 *, 0x302) - 1);
                func_800322E0(arg0 + 0x302, 2, 2);
                var_a0 = *(((s16) M2C_FIELD(arg0, u16 *, 0x302) * 4) + &D_80082368);
            }
            func_800149E4(var_a0);
            var_a3 = 0;
            M2C_FIELD(arg0, s32 *, 0x2F0) = (s32) D_8008E9E0;
            var_a0_2 = M2C_FIELD(&D_8008BA80, s32 *, 0);
block_38:
block_39:
block_40:
            func_80037264(var_a0_2, 0, 5, var_a3);
            return 0;
        case 0x211:                                 /* switch 1 */
            func_800473DC(&D_80092484, &sp18);
            if (D_800778C0 < sp28) {
                temp_a0_2 = (M2C_FIELD(arg0, s16 *, 0x300) + 1) % 3;
                M2C_FIELD(arg0, s16 *, 0x300) = temp_a0_2;
                var_a0_3 = *(((s32) (temp_a0_2 << 0x10) >> 0xE) + &D_80082198);
            } else {
                M2C_FIELD(arg0, u16 *, 0x302) = (u16) (M2C_FIELD(arg0, u16 *, 0x302) + 1);
                func_800322E0(arg0 + 0x302, 2, 2);
                var_a0_3 = *(((s16) M2C_FIELD(arg0, u16 *, 0x302) * 4) + &D_80082368);
            }
            func_800149E4(var_a0_3);
            M2C_FIELD(arg0, s32 *, 0x2EC) = (s32) D_8008E9E0;
            var_a0_2 = M2C_FIELD(&D_8008BA80, s32 *, 0);
            var_a3 = 0;
            goto block_39;
        case 0x20D:                                 /* switch 1 */
        case 0x20E:                                 /* switch 1 */
        case 0x213:                                 /* switch 1 */
        case 0x214:                                 /* switch 1 */
            var_v0 = 0;
            if (M2C_FIELD(arg0, s32 *, 0x308) == 0) {
                M2C_FIELD(arg0, s32 *, 0x308) = arg2;
                M2C_FIELD(arg0, s32 *, 0x2E8) = (s32) D_8008E9E0;
                if (arg2 != 0x20E) {
                    if (arg2 < 0x20F) {
                        if (arg2 != 0x20D) {
                            return 0;
                        }
                        func_80032B14(arg0, (M2C_FIELD(arg0, u16 *, 0x2FA) + 1) & 0xFFFF);
                        var_a3 = 0;
                        M2C_FIELD(arg0, s16 *, 0x304) = 0xFA;
                        M2C_FIELD(arg0, s32 *, 0x31C) = 0;
                        var_a0_2 = D_8008BA68;
                        goto block_38;
                    }
                    switch (arg2) {                 /* switch 2; irregular */
                    case 0x213:                     /* switch 2 */
                        func_80032A74(arg0, -2, 1);
                        func_80032AB0(arg0, (s16) M2C_FIELD(arg0, u16 *, 0x2FA));
                        var_a3 = 0;
                        M2C_FIELD(arg0, s32 *, 0x31C) = 1;
                        M2C_FIELD(arg0, s16 *, 0x304) = 0;
                        var_a0_2 = D_8008BA48;
                        goto block_38;
                    case 0x214:                     /* switch 2 */
                        func_80032A74(arg0, 2, 1);
                        func_80032AB0(arg0, (s16) M2C_FIELD(arg0, u16 *, 0x2FA));
                        var_a3 = 0;
                        M2C_FIELD(arg0, s32 *, 0x31C) = 1;
                        M2C_FIELD(arg0, s16 *, 0x304) = 0;
                        var_a0_2 = D_8008BA78;
                        goto block_38;
                    default:                        /* switch 2 */
                        return 0;
                    }
                } else {
                    func_80032B14(arg0, (M2C_FIELD(arg0, u16 *, 0x2FA) - 1) & 0xFFFF);
                    var_a3 = 0;
                    M2C_FIELD(arg0, s16 *, 0x304) = 0xFA;
                    M2C_FIELD(arg0, s32 *, 0x31C) = 0;
                    var_a0_2 = D_8008BA58;
                    goto block_38;
                }
            } else {
                /* Duplicate return node #42. Try simplifying control flow for better match */
                return var_v0;
            }
            break;
        case 0x20A:                                 /* switch 1 */
        case 0x215:                                 /* switch 1 */
        case 0x216:                                 /* switch 1 */
            func_80037264(M2C_FIELD(&D_8008BA70, s32 *, 0), 0, 1, 0, (s32) M2C_FIELD(&D_8008BA70, u8 *, 5), 4);
            func_80037264(M2C_FIELD(&D_8008BA60, s32 *, 0), 0, 1, 0, (s32) M2C_FIELD(&D_8008BA60, u8 *, 5), 4);
            func_80037264(M2C_FIELD(&D_8008BA50, s32 *, 0), 0, 1, 0, (s32) M2C_FIELD(&D_8008BA50, u8 *, 5), 4);
            M2C_FIELD(arg0, s32 *, 0x30C) = arg2;
            if (arg2 != 0x215) {
                if (arg2 < 0x216) {
                    if (arg2 != 0x20A) {
                        return 0;
                    }
                    if (M2C_FIELD(arg0, s32 *, 0x308) == 0) {
                        func_80032A74(arg0, -1, 1);
                        func_80032AB0(arg0, (s16) M2C_FIELD(arg0, u16 *, 0x2FA));
                    }
                    var_a0_2 = M2C_FIELD(&D_8008BA50, s32 *, 0);
                    goto block_36;
                }
                if (arg2 != 0x216) {
                    return 0;
                }
                var_a0_2 = M2C_FIELD(&D_8008BA60, s32 *, 0);
                goto block_36;
            }
            if (M2C_FIELD(arg0, s32 *, 0x308) == 0) {
                func_80032A74(arg0, 1, 1);
                func_80032AB0(arg0, (s16) M2C_FIELD(arg0, u16 *, 0x2FA));
            }
            var_a0_2 = M2C_FIELD(&D_8008BA70, s32 *, 0);
block_36:
            var_a3 = 0;
            goto block_40;
        case 0x209:                                 /* switch 1 */
        case 0x20B:                                 /* switch 1 */
            var_a3 = 0;
            M2C_FIELD(arg0, s32 *, 0x2F4) = (s32) D_8008E9E0;
            var_a0_2 = D_8008BA88;
            goto block_38;
        }
    } else {
switch_1_default:
        var_v0 = 1;
        return var_v0;
    }
}

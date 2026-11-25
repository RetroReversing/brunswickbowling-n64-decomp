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

M2C_UNK func_800549B0(s32, s32);                    /* extern */
s32 func_800549E4(s32);                             /* extern */
M2C_UNK func_80054A1C(M2C_UNK);                     /* extern */
M2C_UNK func_8005544C(M2C_UNK);                     /* extern */
M2C_UNK func_80055668();                            /* extern */
s32 func_80056764();                                /* extern */
M2C_UNK func_80056770(s32);                         /* extern */
extern M2C_UNK D_800A5062;

void func_800558C4(void) {
    s32 temp_v0;
    s32 var_s2;

    var_s2 = 1;
loop_1:
    do {
loop_2:
        temp_v0 = func_800549E4(0xB1FFFFF0);
        if (temp_v0 == 0) {
            func_80054A1C(0x3E8);
            goto loop_2;
        }
        if (temp_v0 == 2) {
            func_800549B0(0xB1FFFFFC, 0);
            func_80054A1C(0x3E8);
        } else {
            func_800549B0(0xB1FFFFFC, 0x101);
loop_7:
            if (func_800549E4(0xB1FFFFF0) == temp_v0) {
                func_80054A1C(0x1F4);
                goto loop_7;
            }
            if (func_800549E4(0xB1FFFFF0) == 2) {
                func_800549B0(0xB1FFFFFC, 0);
            } else {
                switch (temp_v0) {
                case 17:
                    var_s2 = 0;
                default:
                    break;
                case 18:
                    *(u8 *)0x800A5060 = 0;
                    M2C_FIELD(&D_800A5062, u8 *, 0x5062) = 0U;
                    *(s32 *)0x800A4EB8 &= ~1;
                    func_80056770(func_80056764() & ~1);
                    break;
                case 19:
                    M2C_FIELD(&D_800A5062, u8 *, 0x5062) = 0U;
                    *(u8 *)0x800A5060 = 0;
                    break;
                case 20:
                    M2C_FIELD(&D_800A5062, u8 *, 0x5062) = 0xFFU;
                    break;
                case 21:
                    M2C_FIELD(&D_800A5062, u8 *, 0x5062) = 0U;
                    break;
                case 22:
                    func_800549B0(0xB1FE0000, (M2C_FIELD(&D_800A5062, u8 *, 0x5062) << 0x18) | (*(u8 *)0x800A5060 << 0x10));
                    break;
                case 23:
                    func_8005544C(2);
                    break;
                case 24:
                    func_8005544C(1);
                    break;
                case 25:
                    func_80055668();
                    break;
                }
                func_800549B0(0xB1FFFFFC, 0);
loop_24:
                if (func_800549E4(0xB1FFFFF0) == 1) {
                    func_80054A1C(0x1F4);
                    goto loop_24;
                }
            }
        }
        var_s2 = 1;
        if (var_s2 != 0) {
            goto loop_1;
        }
    } while (M2C_FIELD(&D_800A5062, u8 *, 0) == 0);
    func_800549B0(0xB1FFFFF0, 0);
}

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

s32 func_800538D0();                                /* extern */
s32 func_80053B4C();                                /* extern */
M2C_UNK func_80053D48();                            /* extern */
s32 func_80053D90();                                /* extern */
s32 func_80054574(M2C_UNK, M2C_UNK, s32);           /* extern */
s32 func_80054644();                                /* extern */
M2C_UNK func_80057FA0(s32, s32, s32);               /* extern */
extern u8 *D_800A3850;
extern s32 D_800A3854;
extern s32 D_800A3860;
extern s32 D_800A3864;
extern s32 D_800A3868;
extern s32 D_800A386C;
extern u32 D_800A3880;
extern s32 D_800A3884;

s32 func_800546B8(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_v1_3;
    s32 var_s0;
    s32 var_s2;
    s32 var_s5;
    s32 var_v0;
    u32 var_s0_2;
    u32 var_s1;
    u32 var_s1_2;
    u8 temp_v1;
    u8 temp_v1_2;

    D_800A3854 = arg0;
    var_v0 = func_80054574(arg1, arg2, D_800A3864);
    if (var_v0 == 0) {
        D_800A386C = 0;
        D_800A3884 = 0;
        D_800A3880 = 0;
loop_2:
        var_s0 = D_800A3884;
        var_s1 = D_800A3880;
        var_s5 = var_s1 & 1;
        if (var_s0 == 0) {
            do {
                if ((D_800A3864 != 0) || (D_800A3860 -= 1, (D_800A3860 > 0))) {
                    temp_v1 = *D_800A3850;
                    D_800A3850 += 1;
                    var_s1 |= temp_v1 << var_s0;
                } else {
                    var_s1 |= (func_80054644() & 0xFF) << var_s0;
                }
                var_s0 += 8;
                var_s5 = var_s1 & 1;
            } while (var_s0 == 0);
        }
        var_s0_2 = var_s0 - 1;
        var_s1_2 = var_s1 >> 1;
        if (var_s0_2 < 2U) {
            do {
                if ((D_800A3864 != 0) || (D_800A3860 -= 1, (D_800A3860 > 0))) {
                    temp_v1_2 = *D_800A3850;
                    D_800A3850 += 1;
                    var_s1_2 |= temp_v1_2 << var_s0_2;
                } else {
                    var_s1_2 |= (func_80054644() & 0xFF) << var_s0_2;
                }
                var_s0_2 += 8;
            } while (var_s0_2 < 2U);
        }
        temp_v1_3 = var_s1_2 & 3;
        D_800A3880 = var_s1_2 >> 2;
        D_800A3884 = var_s0_2 - 2;
        if (temp_v1_3 == 2) {
            var_s2 = func_80053D90();
        } else if (temp_v1_3 == 0) {
            var_s2 = func_800538D0();
        } else {
            var_s2 = 5;
            if (temp_v1_3 == 1) {
                var_s2 = func_80053B4C();
            }
        }
        if ((var_s2 == 0) && (var_s5 == 0)) {
            goto loop_2;
        }
        func_80057FA0(D_800A3854, D_800A3868, D_800A386C);
        D_800A3854 += D_800A386C;
        func_80053D48();
        var_v0 = var_s2;
    }
    return var_v0;
}

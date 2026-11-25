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

s32 func_80054644();                                /* extern */
M2C_UNK func_80057FA0(s32, s32, M2C_UNK);           /* extern */
extern u8 *D_800A3850;
extern s32 D_800A3854;
extern s32 D_800A3860;
extern s32 D_800A3864;
extern s32 D_800A3868;
extern s32 D_800A386C;
extern u32 D_800A3880;
extern u32 D_800A3884;

s32 func_800538D0(void) {
    s32 temp_s2;
    s32 temp_s2_2;
    s32 var_s2;
    s32 var_s3;
    s32 var_v0;
    s8 *temp_v0;
    u32 var_s0;
    u32 var_s0_2;
    u32 var_s0_3;
    u32 var_s1;
    u32 var_s1_2;
    u32 var_s1_3;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 temp_v1_3;

    var_s3 = D_800A386C;
    temp_s2 = D_800A3884 & 7;
    var_s0 = D_800A3884 - temp_s2;
    var_s1 = (u32) D_800A3880 >> temp_s2;
    if (var_s0 < 0x10U) {
        do {
            if ((D_800A3864 != 0) || (D_800A3860 -= 1, (D_800A3860 > 0))) {
                temp_v1 = *D_800A3850;
                D_800A3850 += 1;
                var_s1 |= temp_v1 << var_s0;
            } else {
                var_s1 |= (func_80054644() & 0xFF) << var_s0;
            }
            var_s0 += 8;
        } while (var_s0 < 0x10U);
    }
    temp_s2_2 = var_s1 & 0xFFFF;
    var_s0_2 = var_s0 - 0x10;
    var_s1_2 = var_s1 >> 0x10;
    if (var_s0_2 < 0x10U) {
        do {
            if ((D_800A3864 != 0) || (D_800A3860 -= 1, (D_800A3860 > 0))) {
                temp_v1_2 = *D_800A3850;
                D_800A3850 += 1;
                var_s1_2 |= temp_v1_2 << var_s0_2;
            } else {
                var_s1_2 |= (func_80054644() & 0xFF) << var_s0_2;
            }
            var_s0_2 += 8;
        } while (var_s0_2 < 0x10U);
    }
    var_v0 = 3;
    if (temp_s2_2 == (~var_s1_2 & 0xFFFF)) {
        var_s1_3 = var_s1_2 >> 0x10;
        var_s2 = temp_s2_2 - 1;
        var_s0_3 = var_s0_2 - 0x10;
        if (var_s2 != -1) {
            do {
loop_22:
                if (var_s0_3 < 8U) {
                    if ((D_800A3864 != 0) || (D_800A3860 -= 1, (D_800A3860 > 0))) {
                        temp_v1_3 = *D_800A3850;
                        D_800A3850 += 1;
                        var_s1_3 |= temp_v1_3 << var_s0_3;
                    } else {
                        var_s1_3 |= (func_80054644() & 0xFF) << var_s0_3;
                    }
                    var_s0_3 += 8;
                    goto loop_22;
                }
                temp_v0 = D_800A3868 + var_s3;
                var_s3 += 1;
                *temp_v0 = (s8) var_s1_3;
                if (var_s3 == 0x8000) {
                    func_80057FA0(D_800A3854, D_800A3868, 0x8000);
                    D_800A3854 += var_s3;
                    var_s3 = 0;
                }
                var_s1_3 = var_s1_3 >> 8;
                var_s2 -= 1;
                var_s0_3 -= 8;
            } while (var_s2 != -1);
        }
        var_v0 = 0;
        D_800A386C = var_s3;
        D_800A3880 = var_s1_3;
        D_800A3884 = var_s0_3;
    }
    return var_v0;
}

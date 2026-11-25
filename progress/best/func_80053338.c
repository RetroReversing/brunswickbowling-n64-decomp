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

s32 func_80054644();
s32 func_80057FA0();
extern char D_8009719C[];
extern u8 *D_800A3850;
extern s32 D_800A3854;
extern s32 D_800A3860;
extern s32 D_800A3864;
extern s32 D_800A3868;
extern u32 D_800A386C;
extern u32 D_800A3880;
extern u32 D_800A3884;

s32 func_80053338(s32 arg0, s32 arg1, u32 arg2, u32 arg3) {
    s32 sp10;
    s32 sp14;
    s32 var_v0;
    u32 temp_s0_3;
    u32 temp_s0_4;
    u32 var_s0;
    u32 var_s1;
    u32 var_s1_2;
    u32 var_s1_3;
    u32 var_s2;
    u32 var_s2_2;
    u32 var_s2_3;
    u32 var_s3_3;
    u32 var_s4;
    u32 var_s5;
    u32 var_v1;
    u8 *temp_v0_2;
    u8 *temp_v0_4;
    u8 *temp_v1_5;
    u8 temp_s0;
    u8 temp_s0_2;
    u8 temp_v0;
    u8 temp_v0_3;
    u8 temp_v0_5;
    u8 temp_v0_6;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 temp_v1_3;
    u8 temp_v1_4;
    u8 temp_v1_6;
    u8 temp_v1_7;
    void *var_s3;
    void *var_s3_2;

    var_s2 = D_800A3880;
    var_s1 = D_800A3884;
    var_s4 = D_800A386C;
    sp10 = (s32) *((arg2 * 2) + D_8009719C);
    sp14 = (s32) *((arg3 * 2) + D_8009719C);
loop_1:
    if (var_s1 < arg2) {
        do {
            if ((D_800A3864 != 0) || (D_800A3860 -= 1, (D_800A3860 > 0))) {
                temp_v1 = *D_800A3850;
                D_800A3850 += 1;
                var_s2 |= temp_v1 << var_s1;
            } else {
                var_s2 |= (func_80054644() & 0xFF) << var_s1;
            }
            var_s1 += 8;
        } while (var_s1 < arg2);
    }
    var_s3 = arg0 + ((var_s2 & sp10) * 8);
loop_18:
    temp_s0 = M2C_FIELD(var_s3, u8 *, 0);
    if (temp_s0 < 0x11U) {
        temp_v0 = M2C_FIELD(var_s3, u8 *, 1);
        var_s2 = var_s2 >> temp_v0;
        var_s1 -= temp_v0;
        if (temp_s0 == 0x10) {
            temp_v0_2 = D_800A3868 + var_s4;
            var_s4 += 1;
            *temp_v0_2 = M2C_FIELD(var_s3, u8 *, 5);
            if (var_s4 == 0x8000) {
                func_80057FA0(D_800A3854, D_800A3868, 0x8000);
                D_800A3854 += var_s4;
                var_s4 = 0;
            }
            goto loop_1;
        }
        if (temp_s0 != 0xF) {
            if (var_s1 < temp_s0) {
                do {
                    if ((D_800A3864 != 0) || (D_800A3860 -= 1, (D_800A3860 > 0))) {
                        temp_v1_2 = *D_800A3850;
                        D_800A3850 += 1;
                        var_s2 |= temp_v1_2 << var_s1;
                    } else {
                        var_s2 |= (func_80054644() & 0xFF) << var_s1;
                    }
                    var_s1 += 8;
                } while (var_s1 < temp_s0);
            }
            var_s5 = (u16) M2C_FIELD(var_s3, s32 *, 4) + (var_s2 & *((temp_s0 * 2) + D_8009719C));
            var_s1_2 = var_s1 - temp_s0;
            var_s2_2 = var_s2 >> temp_s0;
            if (var_s1_2 < arg3) {
                do {
                    if ((D_800A3864 != 0) || (D_800A3860 -= 1, (D_800A3860 > 0))) {
                        temp_v1_3 = *D_800A3850;
                        D_800A3850 += 1;
                        var_s2_2 |= temp_v1_3 << var_s1_2;
                    } else {
                        var_s2_2 |= (func_80054644() & 0xFF) << var_s1_2;
                    }
                    var_s1_2 += 8;
                } while (var_s1_2 < arg3);
            }
            var_s3_2 = arg1 + ((var_s2_2 & sp14) * 8);
loop_49:
            temp_s0_2 = M2C_FIELD(var_s3_2, u8 *, 0);
            if (temp_s0_2 < 0x11U) {
                temp_v0_3 = M2C_FIELD(var_s3_2, u8 *, 1);
                var_s2_3 = var_s2_2 >> temp_v0_3;
                var_s1_3 = var_s1_2 - temp_v0_3;
                if (var_s1_3 < temp_s0_2) {
                    do {
                        if ((D_800A3864 != 0) || (D_800A3860 -= 1, (D_800A3860 > 0))) {
                            temp_v1_4 = *D_800A3850;
                            D_800A3850 += 1;
                            var_s2_3 |= temp_v1_4 << var_s1_3;
                        } else {
                            var_s2_3 |= (func_80054644() & 0xFF) << var_s1_3;
                        }
                        var_s1_3 += 8;
                    } while (var_s1_3 < temp_s0_2);
                }
                var_s2 = var_s2_3 >> temp_s0_2;
                var_s1 = var_s1_3 - temp_s0_2;
                var_s3_3 = ((var_s4 - (u16) M2C_FIELD(var_s3_2, s32 *, 4)) - (var_s2_3 & *((temp_s0_2 * 2) + D_8009719C))) & 0x7FFF;
                do {
                    var_v1 = var_s4;
                    if (var_s4 < var_s3_3) {
                        var_v1 = var_s3_3;
                    }
                    var_s0 = 0x8000 - var_v1;
                    if (var_s5 < var_s0) {
                        var_s0 = var_s5;
                    }
                    var_s5 -= var_s0;
loop_64:
                    var_s0 -= 1;
                    temp_v1_5 = D_800A3868 + var_s3_3;
                    var_s3_3 += 1;
                    temp_v0_4 = D_800A3868 + var_s4;
                    var_s4 += 1;
                    *temp_v0_4 = *temp_v1_5;
                    if (var_s0 != 0) {
                        goto loop_64;
                    }
                    if (var_s4 == 0x8000) {
                        func_80057FA0(D_800A3854, D_800A3868, 0x8000);
                        D_800A3854 += var_s4;
                        var_s4 = 0;
                    }
                    var_s3_3 &= 0x7FFF;
                } while (var_s5 != 0);
                goto loop_1;
            }
            var_v0 = 7;
            if (temp_s0_2 != 0x63) {
                temp_v0_5 = M2C_FIELD(var_s3_2, u8 *, 1);
                var_s2_2 = var_s2_2 >> temp_v0_5;
                var_s1_2 -= temp_v0_5;
                temp_s0_3 = temp_s0_2 - 0x10;
                if (var_s1_2 < temp_s0_3) {
                    do {
                        if ((D_800A3864 != 0) || (D_800A3860 -= 1, (D_800A3860 > 0))) {
                            temp_v1_6 = *D_800A3850;
                            D_800A3850 += 1;
                            var_s2_2 |= temp_v1_6 << var_s1_2;
                        } else {
                            var_s2_2 |= (func_80054644() & 0xFF) << var_s1_2;
                        }
                        var_s1_2 += 8;
                    } while (var_s1_2 < temp_s0_3);
                }
                var_s3_2 = M2C_FIELD(var_s3_2, s32 *, 4) + ((var_s2_2 & *((temp_s0_3 * 2) + D_8009719C)) * 8);
                goto loop_49;
            }
        } else {
            var_v0 = 0;
            D_800A386C = var_s4;
            D_800A3880 = var_s2;
            D_800A3884 = var_s1;
        }
    } else {
        var_v0 = 7;
        if (temp_s0 != 0x63) {
            temp_v0_6 = M2C_FIELD(var_s3, u8 *, 1);
            var_s2 = var_s2 >> temp_v0_6;
            var_s1 -= temp_v0_6;
            temp_s0_4 = temp_s0 - 0x10;
            if (var_s1 < temp_s0_4) {
                do {
                    if ((D_800A3864 != 0) || (D_800A3860 -= 1, (D_800A3860 > 0))) {
                        temp_v1_7 = *D_800A3850;
                        D_800A3850 += 1;
                        var_s2 |= temp_v1_7 << var_s1;
                    } else {
                        var_s2 |= (func_80054644() & 0xFF) << var_s1;
                    }
                    var_s1 += 8;
                } while (var_s1 < temp_s0_4);
            }
            var_s3 = M2C_FIELD(var_s3, s32 *, 4) + ((var_s2 & *((temp_s0_4 * 2) + D_8009719C)) * 8);
            goto loop_18;
        }
    }
    return var_v0;
}

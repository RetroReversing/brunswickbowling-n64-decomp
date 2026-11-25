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

s32 func_80022250();
s32 func_8003FD9C();
extern f64 D_80079128;
extern f32 D_80079130;
extern f32 D_80079134;
extern char D_8007D700[];
extern char D_8008BA90[];
extern u32 D_8008E9E0;
extern char D_8008EAB4[];
extern char D_8009C220[];
extern char D_8009C240[];
extern char D_8009C430[];
extern u16 D_8009C528;
extern s32 D_8009DB84;

void func_8003F8BC(void *arg0, u32 *arg1, s32 arg2) {
    u32 sp10;
    s32 sp18;
    u16 *sp1C;
    s32 *sp20;
    s32 sp24;
    s32 *sp28;
    s32 sp2C;
    s32 *sp30;
    s32 *sp34;
    s32 sp38;
    s32 *var_t2;
    s32 *var_t4;
    s32 *var_t6;
    s32 *var_t7;
    s32 var_a2;
    f32 temp_fv0;
    f64 var_ft0;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_s3;
    s32 temp_v1;
    s32 temp_v1_3;
    s32 var_a0;
    s32 var_s0;
    s32 var_s5;
    s32 var_t0;
    s32 var_t3;
    s32 var_t5;
    s32 var_v1;
    s8 temp_s1;
    s8 temp_s2;
    u16 *var_t1;
    u16 temp_a0_2;
    u32 *var_a1;
    u32 *var_t8;
    u32 temp_a0;
    u32 temp_v0;
    u32 temp_v1_2;
    u8 *temp_v1_4;
    u8 *temp_v1_5;
    u8 *temp_v1_6;
    u8 *temp_v1_7;

    var_a1 = arg1;
    var_a2 = arg2;
    var_t8 = var_a1;
    var_t5 = (D_8009C528 + 0x3D) % 62;
    if ((u32) D_8008E9E0 >= (u32) M2C_FIELD(arg0, u32 *, 0x2C)) {
        var_ft0 = (f64) D_8009DB84;
        var_a1 = &D_8008E9E0;
        if (D_8009DB84 < 0) {
            var_ft0 += D_80079128;
        }
        temp_fv0 = (f32) var_ft0 * D_80079130;
        if (D_80079134 <= temp_fv0) {
            var_a0 = (s32) (temp_fv0 - D_80079134) | 0x80000000;
        } else {
            var_a0 = (s32) temp_fv0;
        }
        D_8008E9E0 += var_a0;
    }
    var_t7 = D_8009C430;
    var_t1 = &D_8009C528;
    var_t0 = 1;
    var_t2 = D_8009C240;
    var_t6 = D_8008EAB4;
    var_t4 = D_8007D700;
    sp10 = D_8008E9E0 - M2C_FIELD(arg0, u32 *, 0x28);
    M2C_FIELD(arg0, u32 *, 0x2C) = (u32) D_8008E9E0;
loop_10:
    var_s5 = 0;
    if (*((*var_t1 * 4) + var_t7) == var_t0) {
        var_t3 = (var_t5 & 0xFFFF) * 2;
loop_12:
        temp_a0 = var_s5 & 0xFFFF;
        if (temp_a0 < 4U) {
            temp_a1 = temp_a0 * 0x7C;
            temp_s2 = var_t0 << temp_a0;
            temp_v1 = *(var_t3 + temp_a1 + var_t2) ^ *((*var_t1 * 2) + temp_a1 + var_t2);
            if (temp_v1 != 0) {
                var_s0 = 0;
                temp_s1 = temp_s2;
                temp_s3 = ~temp_s1;
loop_15:
                temp_v1_2 = var_s0 & 0xFFFF;
                temp_a1_2 = var_t0 << temp_v1_2;
                if (temp_v1_2 < 0x10U) {
                    temp_v1_3 = temp_v1_2 * 4;
                    if (temp_v1 & temp_a1_2) {
                        temp_a3 = *(s32 *)(temp_v1_3 + M2C_FIELD(arg0, s32 *, 0));
                        temp_a2 = *(temp_v1_3 + var_t6);
                        if (*((*var_t1 * 2) + temp_a1 + var_t2) & temp_a1_2) {
                            if (M2C_FIELD(var_t4, s32 *, 4) == 0) {
                                var_v1 = 1;
                                M2C_FIELD(var_t4, u32 *, 0xC) = (u32) D_8008E9E0;
                            } else {
                                M2C_FIELD(var_t4, s32 *, 0) = var_t0;
                                var_v1 = M2C_FIELD(var_t4, s32 *, 8) != 0;
                            }
                            if (var_v1 == 0) {
                                var_s0 += 1;
                            } else {
                                if (temp_a3 != 0) {
                                    temp_v1_4 = temp_a3 - 0x200 + D_8009C220;
                                    *temp_v1_4 |= temp_s1;
                                }
                                if (temp_a2 != 0) {
                                    temp_v1_5 = temp_a2 - 0x200 + D_8009C220;
                                    *temp_v1_5 |= temp_s1;
                                }
                                if (var_t8 == NULL) {
                                    var_s0 += 1;
                                } else if (M2C_FIELD(arg0, u32 *, 0x24) != 0) {
                                    var_s0 += 1;
                                } else {
                                    M2C_FIELD(arg0, s8 *, 0x20) = temp_s2;
                                    sp18 = var_t0;
                                    sp1C = var_t1;
                                    sp20 = var_t2;
                                    sp24 = var_t3;
                                    sp28 = var_t4;
                                    sp2C = var_t5;
                                    sp30 = var_t6;
                                    sp34 = var_t7;
                                    sp38 = (s32) var_t8;
                                    func_80022250(D_8008BA90, temp_s2 & 0xFF, temp_a2, temp_a3);
                                    var_s0 += 1;
                                }
                            }
                        } else {
                            if (temp_a3 != 0) {
                                temp_v1_6 = temp_a3 - 0x200 + D_8009C220;
                                *temp_v1_6 &= temp_s3;
                            }
                            if (temp_a2 != 0) {
                                temp_v1_7 = temp_a2 - 0x200 + D_8009C220;
                                *temp_v1_7 &= temp_s3;
                            }
                            goto block_39;
                        }
                    } else {
block_39:
                        var_s0 += 1;
                    }
                    goto loop_15;
                }
            }
            var_s5 += 1;
            goto loop_12;
        }
        var_a2 = 0x84210843;
        temp_a1_3 = var_t5 & 0xFFFF;
        var_a1 = temp_a1_3 + 1;
        temp_a0_2 = *var_t1;
        *((temp_a0_2 * 4) + var_t7) = 0;
        var_t5 = (s32) (temp_a1_3 + 1) % 62;
        *var_t1 = (temp_a0_2 + 1) % 62;
        goto loop_10;
    }
    if ((u32) D_8008E9E0 < (u32) M2C_FIELD(arg0, u32 *, 0x28)) {
        M2C_FIELD(arg0, u32 *, 0x24) = 0U;
    }
    temp_v0 = M2C_FIELD(arg0, u32 *, 0x24);
    if (temp_v0 == 0) {
        M2C_FIELD(arg0, u32 *, 0x24) = 0U;
        return;
    }
    if (sp10 >= temp_v0) {
        M2C_FIELD(arg0, u32 *, 0x24) = 0U;
        return;
    }
    func_8003FD9C(arg0, (s32) var_a1, var_a2);
}

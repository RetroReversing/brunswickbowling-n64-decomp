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

void func_80011D9C(void *arg0) {
    s16 temp_v0_5;
    s16 temp_v0_6;
    s32 temp_a0;
    s32 temp_hi;
    s32 temp_lo;
    s32 temp_s0_6;
    s32 temp_s1_2;
    s32 temp_s2_3;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s0;
    s32 var_s0_3;
    s32 var_s0_4;
    s32 var_s1;
    s32 var_s2_2;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s3_3;
    s32 var_s3_4;
    s32 var_s3_5;
    s32 var_s3_6;
    s32 var_s5;
    s8 temp_s0;
    s8 temp_s0_2;
    s8 temp_s0_3;
    s8 temp_s0_4;
    s8 temp_s0_5;
    s8 temp_s0_7;
    s8 temp_s1;
    s8 temp_s1_3;
    s8 temp_s1_4;
    s8 temp_s2;
    s8 temp_s2_2;
    s8 temp_v0_2;
    s8 temp_v0_4;
    s8 var_a0;
    s8 var_s0_2;
    s8 var_s2;
    u16 temp_a0_3;
    u16 temp_a0_4;
    u8 temp_a0_2;
    u8 temp_v0;
    void *temp_s4;

    var_s0 = 0;
    temp_s4 = M2C_FIELD(arg0, void **, 0x50);
    var_s3 = 0;
    func_8002E700(temp_s4);
loop_1:
    if (var_s3 < func_8005AAD0(arg0)) {
        temp_v0 = *(u8 *)(arg0 + var_s3);
        var_s3 += 1;
        var_s0 += temp_v0;
        goto loop_1;
    }
    func_8002AAC0(var_s0);
    temp_v0_2 = func_8002AB14(0xC);
    M2C_FIELD(arg0, s8 *, 0x2F) = temp_v0_2;
    if (temp_v0_2 != 9) {
        if (temp_v0_2 < 0xA) {
            var_a0 = 5;
            if (temp_v0_2 != 8) {
                M2C_FIELD(temp_s4, u16 *, 0xA) = 0U;
            } else {
                goto block_12;
            }
        } else if (temp_v0_2 != 0xA) {
            var_a0 = 0x14;
            if (temp_v0_2 != 0xB) {
                M2C_FIELD(temp_s4, u16 *, 0xA) = 0U;
            } else {
                goto block_12;
            }
        } else {
            var_a0 = 0xF;
            goto block_12;
        }
    } else {
        var_a0 = 0xA;
block_12:
        M2C_FIELD(arg0, s8 *, 0x2F) = (s8) ((u8) M2C_FIELD(arg0, s8 *, 0x2F) + func_8002AB14(var_a0));
        M2C_FIELD(temp_s4, u16 *, 0xA) = 0U;
    }
    var_s3_2 = 0;
    if (M2C_FIELD(arg0, s8 *, 0x2F) > 0) {
        do {
            temp_s0 = func_8002AB14(0xA);
            M2C_FIELD(temp_s4, u16 *, 0xA) += (temp_s0 + func_8002AB14(0xA));
            var_s3_2 += 1;
        } while (var_s3_2 < M2C_FIELD(arg0, s8 *, 0x2F));
    }
    var_s3_3 = 0;
    M2C_FIELD(temp_s4, u16 *, 0xE) = 0U;
    M2C_FIELD(temp_s4, u16 *, 0xC) = 0U;
    M2C_FIELD(temp_s4, s32 *, 0) = 0;
    M2C_FIELD(temp_s4, u16 *, 0x10) = 0U;
    M2C_FIELD(temp_s4, u16 *, 0x14) = 0U;
    M2C_FIELD(temp_s4, u16 *, 0x12) = 0U;
    M2C_FIELD(temp_s4, u16 *, 8) = 0U;
    M2C_FIELD(temp_s4, u8 *, 0x28) = 0x65U;
    M2C_FIELD(temp_s4, u16 *, 0x26) = 0U;
loop_16:
    if (var_s3_3 < (s32) M2C_FIELD(temp_s4, u16 *, 0xA)) {
        var_s2 = 0;
        if (func_8002AB14(0x64) < (M2C_FIELD(arg0, u8 *, 0x2E) * 2)) {
            var_s2 = func_8002AB14(6);
            M2C_FIELD(temp_s4, u16 *, 0xE) += 1;
            if (func_8002AB14(0x64) < (M2C_FIELD(arg0, u8 *, 0x2E) * 0xA)) {
                var_s0_2 = var_s2;
                var_s1 = 1;
                M2C_FIELD(temp_s4, u16 *, 0xC) += 1;
                M2C_FIELD(temp_s4, s32 *, 0) += ((func_8002AB14(3) + 1) * 0x4650);
            } else {
                temp_s0_2 = func_8002AB14(7);
                temp_lo = (temp_s0_2 + 3) * ((func_8002AB14(3) + 1) * 0x3E8);
                M2C_FIELD(temp_s4, s32 *, 0) += temp_lo;
                var_s0_2 = func_8002AB14(var_s2, temp_lo);
                var_s1 = func_8002AB14(4) + 2;
            }
            var_s0_3 = var_s0_2 + (((func_8002AB14(0x1E) + 0x3C) * 0x18) / 100);
        } else {
            M2C_FIELD(temp_s4, s32 *, 0) += (func_8002AB14(0x258) * 0xA);
            temp_v0_3 = func_8002AB14(0x28) + 0xA;
            var_s0_3 = (temp_v0_3 * 0x18) / 100;
            var_s1 = func_8002AB14(0x60, func_8002AB14((temp_v0_3 * 0x18), 0x51EB851F)) + 5;
        }
        temp_v0_4 = func_8002AB14(3);
        M2C_FIELD(temp_s4, u16 *, 0x10) += var_s0_3;
        temp_a0 = (var_s2 - (var_s0_3 - 0x18)) - temp_v0_4;
        M2C_FIELD(temp_s4, u16 *, 0x14) += temp_v0_4;
        M2C_FIELD(temp_s4, u16 *, 0x12) += temp_a0;
        temp_a0_2 = M2C_FIELD(temp_s4, u8 *, 0x28);
        M2C_FIELD(temp_s4, u16 *, 8) += (var_s0_3 + temp_v0_4 + temp_a0);
        if (var_s1 < (s32) temp_a0_2) {
            M2C_FIELD(temp_s4, u8 *, 0x28) = (u8) var_s1;
            M2C_FIELD(temp_s4, u16 *, 0x26) = 0U;
            goto block_31;
        }
        if (var_s1 != temp_a0_2) {
            var_s3_3 += 1;
        } else {
            M2C_FIELD(temp_s4, u16 *, 0x26) += 1;
block_31:
            var_s3_3 += 1;
        }
        goto loop_16;
    }
    var_s5 = 0x7D0;
    M2C_FIELD(temp_s4, u16 *, 8) += (M2C_FIELD(temp_s4, u16 *, 0xA) * 0x18);
    var_s3_4 = 0;
    if (M2C_FIELD(arg0, u8 *, 0x2E) != 0) {
        do {
            temp_s0_3 = func_8002AB14(0x14);
            temp_s2 = func_8002AB14(0x14);
            temp_s1 = func_8002AB14(0x14);
            var_s3_4 += 1;
            var_s5 += temp_s0_3 + temp_s2 + temp_s1 + func_8002AB14(0x14);
        } while (var_s3_4 < (s32) M2C_FIELD(arg0, u8 *, 0x2E));
    }
    M2C_FIELD(temp_s4, s32 *, 4) = (s32) ((M2C_FIELD(temp_s4, u16 *, 8) * var_s5) / 10);
    temp_s1_2 = M2C_FIELD(temp_s4, u16 *, 8) * 0xB;
    temp_s0_4 = func_8002AB14(M2C_FIELD(arg0, u8 *, 0x2E) * 0x14);
    temp_s2_2 = func_8002AB14(M2C_FIELD(arg0, u8 *, 0x2E) * 0x14);
    temp_v0_5 = (temp_s1_2 * (temp_s0_4 + temp_s2_2 + func_8002AB14(M2C_FIELD(arg0, u8 *, 0x2E) * 0x14) + 0x1A9)) / 1000;
    M2C_FIELD(temp_s4, s16 *, 0x1E) = temp_v0_5;
    M2C_FIELD(temp_s4, s16 *, 0x20) = (s16) (temp_s1_2 - temp_v0_5);
    temp_s2_3 = M2C_FIELD(temp_s4, u16 *, 8) * 5;
    temp_s0_5 = func_8002AB14(M2C_FIELD(arg0, u8 *, 0x2E) * 0x14);
    temp_s1_3 = func_8002AB14(M2C_FIELD(arg0, u8 *, 0x2E) * 0x14);
    temp_s0_6 = temp_s2_3 * (temp_s0_5 + temp_s1_3 + func_8002AB14(M2C_FIELD(arg0, u8 *, 0x2E) * 0x14) + 0x307);
    temp_hi = func_8002AB14(temp_s0_6, 0x10624DD3);
    M2C_FIELD(temp_s4, u16 *, 0x16) = 0U;
    M2C_FIELD(temp_s4, u16 *, 0x18) = 0U;
    var_s3_5 = 0;
    temp_v0_6 = (temp_hi >> 6) - (temp_s0_6 >> 0x1F);
    M2C_FIELD(temp_s4, s16 *, 0x22) = temp_v0_6;
    M2C_FIELD(temp_s4, s16 *, 0x24) = (s16) (temp_s2_3 - temp_v0_6);
loop_35:
    var_s0_4 = 0;
    if (var_s3_5 < M2C_FIELD(arg0, s8 *, 0x2F)) {
loop_36:
        if (var_s0_4 < (s32) M2C_FIELD(arg0, u8 *, 0x2E)) {
            temp_a0_3 = M2C_FIELD(temp_s4, u16 *, 0x16);
            temp_v1 = func_8002AB14(0x28) + 0x104;
            if ((s32) temp_a0_3 < temp_v1) {
                M2C_FIELD(temp_s4, u16 *, 0x16) = (u16) temp_v1;
                M2C_FIELD(temp_s4, u16 *, 0x18) = 0U;
                goto block_45;
            }
            if (temp_v1 != temp_a0_3) {
                var_s0_4 += 1;
            } else {
                M2C_FIELD(temp_s4, u16 *, 0x18) += 1;
block_45:
                var_s0_4 += 1;
            }
            goto loop_36;
        }
        var_s3_5 += 1;
        goto loop_35;
    }
    var_s3_6 = 0;
    M2C_FIELD(temp_s4, u16 *, 0x1A) = 0x12CU;
    M2C_FIELD(temp_s4, u16 *, 0x1C) = 0U;
loop_47:
    var_s2_2 = 0;
    if (var_s3_6 < M2C_FIELD(arg0, s8 *, 0x2F)) {
loop_48:
        if (var_s2_2 < (6 - M2C_FIELD(arg0, u8 *, 0x2E))) {
            temp_s0_7 = func_8002AB14(0x14);
            temp_s1_4 = func_8002AB14(0x14);
            temp_a0_4 = M2C_FIELD(temp_s4, u16 *, 0x1A);
            temp_v1_2 = 0xB4 - (temp_s0_7 + temp_s1_4 + func_8002AB14(0x14));
            if (temp_v1_2 < (s32) temp_a0_4) {
                M2C_FIELD(temp_s4, u16 *, 0x1A) = (u16) temp_v1_2;
                M2C_FIELD(temp_s4, u16 *, 0x1C) = 0U;
                goto block_57;
            }
            if (temp_v1_2 != temp_a0_4) {
                var_s2_2 += 1;
            } else {
                M2C_FIELD(temp_s4, u16 *, 0x1C) += 1;
block_57:
                var_s2_2 += 1;
            }
            goto loop_48;
        }
        var_s3_6 += 1;
        goto loop_47;
    }
    func_8002AAC0(-1);
}

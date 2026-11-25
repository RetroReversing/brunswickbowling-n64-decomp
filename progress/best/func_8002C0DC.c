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

s32 func_8002BD80();
s16 func_8002BE9C();
s32 func_8002BEE0();
s32 func_8002C478();
s32 func_8002E720();
s32 func_8002E75C();
extern s32 D_8008AA60;
extern s32 D_8008AB10;

void func_8002C0DC(void *arg0, s16 arg1, s16 arg2, s32 *arg3) {
    s16 temp_v0;
    char *var_s0;
    char *var_s0_2;
    char *var_s0_3;
    char *var_s0_4;
    char *var_s0_5;
    char *var_s0_6;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_a0_7;
    s32 temp_a0_8;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s1_4;
    s32 var_s1_5;
    s32 var_s1_6;
    s32 var_v0_3;
    u8 temp_v1;
    u8 var_v0;
    u8 var_v0_2;
    u8 var_v0_4;

    temp_v0 = func_8002BE9C(arg0, arg1, arg2);
    M2C_FIELD(arg0, u8 *, 0xE) += 1;
    if (D_8008AB10 != 0) {
        if (arg2 == 0) {
            M2C_FIELD((arg0 + M2C_FIELD(arg0, u8 *, 0xD)), s8 *, 6) = 2;
            M2C_FIELD((arg0 + M2C_FIELD(arg0, u8 *, 0xD)), s8 *, 0xF) = 0xA;
        } else {
            M2C_FIELD((arg0 + M2C_FIELD(arg0, u8 *, 0xD)), s8 *, 0xF) = 0;
        }
        var_s1 = 0;
        var_s0 = arg3;
        M2C_FIELD(arg0, u8 *, 0xD) += 1;
        D_8008AA60 = 1;
        do {
            temp_a0 = *(s32 *)var_s0;
            if (temp_a0 != 0) {
                func_8002E720(temp_a0, arg2 == 0);
            }
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < 3);
        return;
    }
    temp_a0_2 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_a0_2 != 0) {
        func_8002C478(temp_a0_2, temp_v0);
    }
    M2C_FIELD((arg0 + M2C_FIELD(arg0, u8 *, 0xD)), s8 *, 0xF) = (s8) temp_v0;
    D_8008AA60 = 0;
    temp_v1 = M2C_FIELD(arg0, u8 *, 0xD);
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (arg2 != 0) {
            if (func_8002BD80(arg2) != 0) {
                var_v0 = M2C_FIELD(arg0, u8 *, 6) | 1;
                goto block_21;
            }
        } else {
            var_v0 = M2C_FIELD(arg0, u8 *, 6) | 2;
block_21:
            M2C_FIELD(arg0, u8 *, 6) = var_v0;
        }
        D_8008AA60 = 1;
        var_s1_2 = 0;
        var_s0_2 = arg3;
        do {
            temp_a0_3 = *(s32 *)var_s0_2;
            if (temp_a0_3 != 0) {
                func_8002E720(temp_a0_3, arg2 == 0);
            }
            var_s1_2 += 1;
            var_s0_2 += 4;
        } while (var_s1_2 < 3);
        break;
    case 1:
        if (M2C_FIELD(arg0, u8 *, 0xF) == 0xA) {
            if (arg2 != 0) {
                if (func_8002BD80(arg2) != 0) {
                    var_v0_2 = M2C_FIELD(arg0, u8 *, 7) | 1;
                    goto block_32;
                }
            } else {
                var_v0_2 = M2C_FIELD(arg0, u8 *, 7) | 2;
block_32:
                M2C_FIELD(arg0, u8 *, 7) = var_v0_2;
            }
            D_8008AA60 = 1;
            var_s1_3 = 0;
            var_s0_3 = arg3;
            do {
                temp_a0_4 = *(s32 *)var_s0_3;
                if (temp_a0_4 != 0) {
                    func_8002E720(temp_a0_4, arg2 == 0);
                }
                var_s1_3 += 1;
                var_s0_3 += 4;
            } while (var_s1_3 < 3);
        } else {
            var_s1_4 = 0;
            if (arg2 == 0) {
                M2C_FIELD(arg0, u8 *, 7) |= 4;
            }
            var_s0_4 = arg3;
            do {
                temp_a0_5 = *(s32 *)var_s0_4;
                if (temp_a0_5 != 0) {
                    func_8002E75C(temp_a0_5, arg2 == 0);
                }
                var_s1_4 += 1;
                var_s0_4 += 4;
            } while (var_s1_4 < 3);
        }
        break;
    case 2:
        var_v0_3 = arg2 << 0x10;
        if ((M2C_FIELD(arg0, u8 *, 0xF) == 0xA) && (var_v0_3 = arg2 << 0x10, (((u8) M2C_FIELD(arg0, u8 *, 0x10) < 0xAU) != 0))) {
            var_s1_5 = 0;
            if (arg2 == 0) {
                M2C_FIELD(arg0, u8 *, 8) |= 4;
            }
            var_s0_5 = arg3;
            do {
                temp_a0_6 = *(s32 *)var_s0_5;
                if (temp_a0_6 != 0) {
                    func_8002E75C(temp_a0_6, arg2 == 0);
                }
                var_s1_5 += 1;
                var_s0_5 += 4;
            } while (var_s1_5 < 3);
        } else {
            temp_a0_7 = var_v0_3 >> 0x10;
            if (temp_a0_7 != 0) {
                if (func_8002BD80((s16) temp_a0_7) != 0) {
                    var_v0_4 = M2C_FIELD(arg0, u8 *, 8) | 1;
                    goto block_58;
                }
            } else {
                var_v0_4 = M2C_FIELD(arg0, u8 *, 8) | 2;
block_58:
                M2C_FIELD(arg0, u8 *, 8) = var_v0_4;
            }
            D_8008AA60 = 1;
            var_s1_6 = 0;
            var_s0_6 = arg3;
            do {
                temp_a0_8 = *(s32 *)var_s0_6;
                if (temp_a0_8 != 0) {
                    func_8002E720(temp_a0_8, arg2 == 0);
                }
                var_s1_6 += 1;
                var_s0_6 += 4;
            } while (var_s1_6 < 3);
        }
        break;
    }
    M2C_FIELD(arg0, u8 *, 0xD) += 1;
    func_8002BEE0(arg0);
}

/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2 -fno-schedule-insns -fno-schedule-insns2, tried by autopilot */
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

s32 func_80012700();
s32 func_80012BD4();
s32 func_8003051C();
s32 func_80031640();
s32 func_800318E4();
extern s32 D_8007DA44;
extern char D_8007F618[];
extern char D_80081A08[];
extern char D_80081A6C[];

void func_80031B08(void *arg0) {
    s32 sp18;
    s32 temp_s2_2;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 var_a0;
    s32 var_a1;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    u8 *temp_s0;
    u8 *var_v0;
    u8 temp_s0_3;
    u8 temp_s2;
    u8 temp_s3;
    u8 temp_v0_2;
    u8 var_s0;
    void *temp_a0;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_s0_2;
    void *temp_s1;
    void *temp_s6;
    void *temp_s6_2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x44);
    switch (temp_v0) {
    case 1:
    case 2:
    case 3:
        var_s1 = 0;
loop_3:
        temp_s0 = var_s1 + D_80081A08;
        if (var_s1 < (s32) M2C_FIELD(arg0, u8 *, 0x48)) {
            temp_a1 = (*temp_s0 * 0x5C) + D_8007F618;
            var_a0 = 0;
            if (M2C_FIELD(arg0, u8 *, 0x49) == M2C_FIELD(temp_a1, u8 *, 0x42)) {
                var_a0 = M2C_FIELD(temp_a1, s32 *, 0x28) == 0;
            }
            if (var_a0 != 0) {
                D_8007DA44 = 1;
                func_8003051C(arg0, *temp_s0, 0, 0);
                temp_v0_2 = *temp_s0;
                func_80012BD4((*temp_s0 * 0x5C) + D_8007F618, M2C_FIELD(arg0, s32 *, 0x44), func_80012700((temp_v0_2 * 0x5C) + D_8007F618, arg0 + 0x14, M2C_FIELD(arg0, s32 *, 0x44), M2C_FIELD(arg0, u8 *, 0x49), (s32) temp_v0_2, 0), -1);
            }
            var_s1 += 1;
            goto loop_3;
        }
        break;
    case 4:
    case 5:
        D_8007DA44 = 2;
        var_s3 = 0;
        temp_s6 = arg0 + 0x14;
loop_10:
        if (var_s3 < (s32) M2C_FIELD(arg0, u8 *, 0x48)) {
            if (M2C_FIELD(arg0, s32 *, 0x44) != 4) {
                var_s0 = *(var_s3 + D_80081A08);
                var_v0 = (var_s3 ^ 1) + D_80081A08;
            } else {
                var_s0 = *(var_s3 + D_80081A6C);
                var_v0 = func_80031640(arg0, var_s3) + D_80081A6C;
            }
            temp_s2 = *var_v0;
            temp_a0 = (var_s0 * 0x5C) + D_8007F618;
            var_a1 = 0;
            if ((M2C_FIELD(arg0, u8 *, 0x49) == M2C_FIELD(temp_a0, u8 *, 0x42)) && ((M2C_FIELD(temp_a0, u8 *, 0x18) ^ 2) == 0)) {
                var_a1 = M2C_FIELD(((temp_s2 * 0x5C) + D_8007F618), u8 *, 0x18) == 2;
            }
            if (var_a1 != 0) {
                func_8003051C(arg0, var_s0, 0, 0);
                func_8003051C(arg0, temp_s2, 1, 0);
                temp_s1 = (var_s0 * 0x5C) + D_8007F618;
                temp_s0_2 = (temp_s2 * 0x5C) + D_8007F618;
                temp_s2_2 = func_80012700(temp_s1, temp_s6, M2C_FIELD(arg0, s32 *, 0x44), M2C_FIELD(arg0, u8 *, 0x49), (s32) var_s0, 0);
                temp_v0_3 = func_80012700(temp_s0_2, temp_s6, M2C_FIELD(arg0, s32 *, 0x44), M2C_FIELD(arg0, u8 *, 0x49), (s32) temp_s2, 0);
                func_80012BD4(temp_s1, M2C_FIELD(arg0, s32 *, 0x44), temp_s2_2, temp_v0_3);
                func_80012BD4(temp_s0_2, M2C_FIELD(arg0, s32 *, 0x44), temp_v0_3, temp_s2_2);
            }
            var_s3 += 1;
            goto loop_10;
        }
        break;
    case 6:
    case 7:
    case 8:
    case 9:
        var_s2 = 0;
        temp_a1_2 = M2C_FIELD(arg0, u8 *, 0x48) + D_80081A08;
        temp_s0_3 = M2C_FIELD(temp_a1_2, u8 *, -1);
        temp_s3 = M2C_FIELD(temp_a1_2, u8 *, -2);
        D_8007DA44 = 2;
        func_8003051C(arg0, temp_s0_3, 0, 0);
        func_8003051C(arg0, temp_s3, 1, 0);
        sp18 = temp_s0_3 * 0x5C;
        temp_s6_2 = arg0 + 0x14;
        do {
            temp_v0_4 = func_80012700(sp18 + D_8007F618, temp_s6_2, M2C_FIELD(arg0, s32 *, 0x44), 1U, (s32) temp_s0_3, var_s2);
            var_s2 += 1;
            temp_v0_5 = func_80012700((temp_s3 * 0x5C) + D_8007F618, temp_s6_2, M2C_FIELD(arg0, s32 *, 0x44), 1U, (s32) temp_s3, var_s2);
        } while (temp_v0_4 == temp_v0_5);
        func_80012BD4((temp_s0_3 * 0x5C) + D_8007F618, M2C_FIELD(arg0, s32 *, 0x44), temp_v0_4, temp_v0_5);
        func_80012BD4((temp_s3 * 0x5C) + D_8007F618, M2C_FIELD(arg0, s32 *, 0x44), temp_v0_5, temp_v0_4);
        break;
    }
    func_800318E4(arg0, M2C_FIELD(arg0, u8 *, 0x48), D_80081A08);
}

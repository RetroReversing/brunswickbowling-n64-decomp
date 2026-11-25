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

void func_80049A0C(void *arg0) {
    s32 temp_a3;
    s32 temp_t1;
    s32 temp_t5;
    s32 temp_t8;
    s32 var_a2;
    s32 var_t0;
    s32 var_t3;
    s32 var_t4;
    s32 var_t9;
    u16 *temp_a1_2;
    u16 temp_v0;
    u16 temp_v0_2;
    u16 var_v1;
    u32 temp_t6;
    u32 var_t7;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a1;
    void *temp_v1;
    void *temp_v1_2;

    var_t7 = 0;
    if (M2C_FIELD(arg0, u32 *, 8) != 0) {
        var_t9 = 0;
        do {
            temp_a1 = var_t9 + M2C_FIELD(arg0, s32 *, 0x28);
            temp_a3 = M2C_FIELD(arg0, s32 *, 0x20) + (*(s32 *)((var_t7 * 2) + M2C_FIELD(arg0, s32 *, 0x58)) * 0x10);
            temp_t8 = (M2C_FIELD(temp_a1, u16 *, 2) / 3) & 0xFFFF;
            temp_t5 = M2C_FIELD(arg0, s32 *, 0x2C) + (M2C_FIELD(temp_a1, u16 *, 4) * 2);
            var_t4 = 0;
            if (temp_t8 != 0) {
                temp_t6 = M2C_FIELD(temp_a1, u16 *, 8) & 0xFFFF;
                temp_t1 = temp_t6 << 5;
                var_t3 = 0;
                do {
                    var_t0 = 0;
                    var_a2 = var_t3;
loop_5:
                    temp_v1 = (*(s32 *)((var_a2 * 2) + temp_t5) * 0x10) + temp_a3;
                    temp_v0 = M2C_FIELD(temp_v1, u16 *, 6);
                    if (temp_v0 == 0) {
                        M2C_FIELD(temp_v1, u16 *, 6) = (u16) (temp_v0 | 1);
                        if (temp_t6 < (u32) M2C_FIELD(arg0, u32 *, 0x10)) {
                            temp_v1_2 = temp_t1 + M2C_FIELD(arg0, s32 *, 0x30);
                            temp_v0_2 = M2C_FIELD(temp_v1_2, u16 *, 0x1C);
                            switch (temp_v0_2) {    /* irregular */
                            case 0x10:
                                var_v1 = M2C_FIELD(temp_v1_2, u16 *, 0x18) * 4;
                                break;
                            case 0x100:
                                var_v1 = M2C_FIELD(temp_v1_2, u16 *, 0x18) * 2;
                                break;
                            default:
                                var_v1 = M2C_FIELD((temp_t1 + M2C_FIELD(arg0, s32 *, 0x30)), u16 *, 0x18);
                                break;
                            }
                            temp_a1_2 = (var_a2 * 2) + temp_t5;
                            temp_a0 = (*temp_a1_2 * 0x10) + temp_a3;
                            M2C_FIELD(temp_a0, s16 *, 8) = (s16) ((s32) (M2C_FIELD(temp_a0, s16 *, 8) * (s16) var_v1) / 8);
                            temp_a0_2 = (*temp_a1_2 * 0x10) + temp_a3;
                            M2C_FIELD(temp_a0_2, s16 *, 0xA) = (s16) ((s32) (M2C_FIELD(temp_a0_2, s16 *, 0xA) * (M2C_FIELD((temp_t1 + M2C_FIELD(arg0, s32 *, 0x30)), u16 *, 0x1A) - 1)) / 8);
                        }
                    }
                    var_t0 += 1;
                    var_a2 += 1;
                    if (var_t0 < 3) {
                        goto loop_5;
                    }
                    var_t4 += 1;
                    var_t3 += 3;
                } while (var_t4 < temp_t8);
            }
            var_t7 += 1;
            var_t9 += 0xC;
        } while (var_t7 < (u32) M2C_FIELD(arg0, u32 *, 8));
    }
}

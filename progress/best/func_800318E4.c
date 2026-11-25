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

extern char D_8007F618[];

void func_800318E4(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a0_2;
    s32 var_t4;
    s32 var_t5;
    s32 var_v1;
    u16 temp_a0;
    u16 temp_v1;
    u8 temp_a1;
    u8 temp_a3_2;
    u8 temp_t2;
    u8 temp_t3;
    u8 temp_v1_2;
    void *temp_a3;
    void *temp_t0;
    void *temp_t1;
    void *var_t0;

    if (M2C_FIELD(arg0, s32 *, 0x44) < 6) {
        var_t5 = 0;
        do {
            var_t4 = 1;
            var_t0 = arg2 + 1;
loop_3:
            if (var_t4 < arg1) {
                temp_t3 = M2C_FIELD(var_t0, u8 *, 0);
                temp_t2 = M2C_FIELD(var_t0, u8 *, -1);
                temp_t1 = (temp_t3 * 0x5C) + D_8007F618;
                temp_a3 = (temp_t2 * 0x5C) + D_8007F618;
                temp_a0 = M2C_FIELD(temp_t1, u16 *, 0x38);
                temp_v1 = M2C_FIELD(temp_a3, u16 *, 0x38);
                if (temp_a0 >= temp_v1) {
                    if (temp_a0 == temp_v1) {
                        temp_a0_2 = M2C_FIELD(temp_t1, u8 *, 0x18) == 2;
                        var_v1 = 0;
                        if (temp_a0_2 != 0) {
                            var_v1 = M2C_FIELD(temp_a3, u8 *, 0x18) != 2;
                        }
                        if ((var_v1 == 0) && ((temp_a0_2 != (M2C_FIELD(temp_a3, u8 *, 0x18) == 2)) || (temp_t2 >= temp_t3))) {
                            goto block_11;
                        }
                    } else {
block_11:
                        temp_v1_2 = M2C_FIELD(var_t0, u8 *, 0);
                        var_t5 = 1;
                        M2C_FIELD(var_t0, u8 *, 0) = (u8) M2C_FIELD(var_t0, u8 *, -1);
                        M2C_FIELD(var_t0, u8 *, -1) = temp_v1_2;
                    }
                }
                var_t0 += 1;
                var_t4 += 1;
                goto loop_3;
            }
            var_t5 = 0;
        } while (var_t5 != 0);
        return;
    }
    temp_t0 = M2C_FIELD(arg0, u8 *, 0x48) + arg2;
    temp_a3_2 = M2C_FIELD(temp_t0, u8 *, -1);
    temp_a1 = M2C_FIELD(temp_t0, u8 *, -2);
    if ((u16) M2C_FIELD(((temp_a1 * 0x5C) + D_8007F618), u16 *, 0x3A) < (u16) M2C_FIELD(((temp_a3_2 * 0x5C) + D_8007F618), u16 *, 0x3A)) {
        M2C_FIELD(temp_t0, u8 *, -1) = temp_a1;
        M2C_FIELD((M2C_FIELD(arg0, u8 *, 0x48) + arg2), u8 *, -2) = temp_a3_2;
    }
    M2C_FIELD((arg0 + ((M2C_FIELD(arg0, s32 *, 0x44) - 6) * 4)), u16 *, 0x4C) = (u16) M2C_FIELD(((M2C_FIELD((M2C_FIELD(arg0, u8 *, 0x48) + arg2), u8 *, -2) * 0x5C) + D_8007F618), u16 *, 0x3A);
    M2C_FIELD((arg0 + ((M2C_FIELD(arg0, s32 *, 0x44) - 6) * 4)), u16 *, 0x4E) = (u16) M2C_FIELD(((M2C_FIELD((M2C_FIELD(arg0, u8 *, 0x48) + arg2), u8 *, -1) * 0x5C) + D_8007F618), u16 *, 0x3A);
    M2C_FIELD((arg0 + ((M2C_FIELD(arg0, s32 *, 0x44) - 6) * 2)), u8 *, 0x5C) = (u8) M2C_FIELD((M2C_FIELD(arg0, u8 *, 0x48) + arg2), u8 *, -2);
    M2C_FIELD((arg0 + ((M2C_FIELD(arg0, s32 *, 0x44) - 6) * 2)), u8 *, 0x5D) = (u8) M2C_FIELD((M2C_FIELD(arg0, u8 *, 0x48) + arg2), u8 *, -1);
}

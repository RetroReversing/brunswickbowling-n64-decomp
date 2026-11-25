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

void func_8002E798(void *arg0, s32 arg1, s32 arg2) {
    s32 var_v0_2;
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;
    u16 var_v0;

    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + arg1);
    M2C_FIELD(arg0, u16 *, 8) = (u16) (M2C_FIELD(arg0, u16 *, 8) + 1);
    if (arg2 >= 0) {
        if (arg1 < arg2) {
            M2C_FIELD(arg0, u16 *, 0x12) = (u16) (M2C_FIELD(arg0, u16 *, 0x12) + 1);
        } else if (arg2 == arg1) {
            M2C_FIELD(arg0, u16 *, 0x14) = (u16) (M2C_FIELD(arg0, u16 *, 0x14) + 1);
        } else {
            M2C_FIELD(arg0, u16 *, 0x10) = (u16) (M2C_FIELD(arg0, u16 *, 0x10) + 1);
        }
    }
    temp_v0 = M2C_FIELD(arg0, u16 *, 0x16);
    if (arg1 != temp_v0) {
        var_v0 = 1;
        if ((s32) temp_v0 < arg1) {
            M2C_FIELD(arg0, u16 *, 0x16) = (u16) arg1;
            goto block_12;
        }
    } else {
        var_v0 = M2C_FIELD(arg0, u16 *, 0x18) + 1;
block_12:
        M2C_FIELD(arg0, u16 *, 0x18) = var_v0;
    }
    temp_v0_2 = M2C_FIELD(arg0, u16 *, 0x1A);
    var_v0_2 = arg1 < (s32) temp_v0_2;
    if (arg1 == temp_v0_2) {
        temp_v0_2 = M2C_FIELD(arg0, u16 *, 0x1C);
        if (temp_v0_2 != 0) {
            M2C_FIELD(arg0, u16 *, 0x1C) = (u16) (temp_v0_2 + 1);
            return;
        }
        var_v0_2 = arg1 < (s32) M2C_FIELD(arg0, u16 *, 0x1A);
        goto block_17;
    }
block_17:
    if ((var_v0_2 != 0) || (M2C_FIELD(arg0, u16 *, 0x1C) == 0)) {
        M2C_FIELD(arg0, u16 *, 0x1A) = (u16) arg1;
        M2C_FIELD(arg0, u16 *, 0x1C) = 1U;
    }
}

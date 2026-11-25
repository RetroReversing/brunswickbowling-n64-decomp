/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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

void func_8002E870(void *arg0, s32 arg1, s32 arg2) {
    s32 var_v0_2;
    u16 var_v0;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 0x28);
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + arg2);
    if (temp_v1 == arg1) {
        var_v0 = M2C_FIELD(arg0, u16 *, 0x26) + 1;
        goto block_5;
    }
    if ((temp_v1 == 0) || (arg1 < (s32) temp_v1)) {
        var_v0 = 1;
        M2C_FIELD(arg0, u8 *, 0x28) = (u8) arg1;
block_5:
        M2C_FIELD(arg0, u16 *, 0x26) = var_v0;
    }
    M2C_FIELD(arg0, u16 *, 0xA) = (u16) (M2C_FIELD(arg0, u16 *, 0xA) + 1);
    var_v0_2 = arg1 < 6;
    if (arg1 == 1) {
        M2C_FIELD(arg0, u16 *, 0xC) = (u16) (M2C_FIELD(arg0, u16 *, 0xC) + 1);
        var_v0_2 = arg1 < 6;
    }
    if (var_v0_2 != 0) {
        M2C_FIELD(arg0, u16 *, 0xE) = (u16) (M2C_FIELD(arg0, u16 *, 0xE) + 1);
    }
}

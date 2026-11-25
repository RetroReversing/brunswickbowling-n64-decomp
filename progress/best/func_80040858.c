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

s32 func_80034BD8(s32, M2C_UNK);                    /* extern */
s32 osPfsReadWriteFile(void *, s32, M2C_UNK, M2C_UNK, s32, M2C_UNK *); /* extern */
extern M2C_UNK D_80085228;
extern M2C_UNK D_8009C540;
extern M2C_UNK D_8009D630;

s32 func_80040858(s32 arg1) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = -1;
    if (func_80034BD8(arg1, 1) != 0) {
        temp_v0 = osPfsReadWriteFile((arg1 * 0x68) + &D_8009D630, (&D_8009C540)[arg1], 0, 0, 0x3E00, &D_80085228);
        switch (temp_v0) {                          /* irregular */
        case 0:
            var_s0 = 0;
            goto block_6;
        case 2:
            var_s0 = -2;
            goto block_6;
        default:
            return -1;
        }
    } else {
block_6:
        return var_s0;
    }
}

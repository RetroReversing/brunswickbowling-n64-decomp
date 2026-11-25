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

extern M2C_UNK D_8008B438;

s32 func_8002FDB0(s32 arg0, s32 arg1) {
    u16 var_v0;

    if (arg0 < 0x37) {
        if (arg0 < 0x18) {
            if (arg0 >= 7) {
                var_v0 = 0xE6 - ((arg0 - 7) * 5);
            } else {
                var_v0 = *((arg0 * 2) + &D_8008B438);
            }
        } else {
            var_v0 = 0x82 - ((arg0 - 0x19) * 4);
        }
    } else {
        var_v0 = 0;
    }
    return (var_v0 * arg1) / 10000;
}

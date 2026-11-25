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

extern int D_8008B3BC;
extern int D_8008B3CC;
extern char D_8008B130[];
extern char D_8008B3A4[];

s32 func_8001268C(void *arg0) {
    s32 temp_v0;
    u8 var_a1;

    var_a1 = M2C_FIELD(arg0, u8 *, 0x2E);
    if (D_8008B3BC != 0) {
        temp_v0 = var_a1 + M2C_FIELD(((D_8008B3CC * 0x1C) + D_8008B130), s8 *, 0x14);
        var_a1 = (u8) temp_v0;
        if (temp_v0 <= 0) {
            var_a1 = 1;
        } else if (temp_v0 >= 5) {
            var_a1 = 4;
            if ((u8) M2C_FIELD(arg0, u8 *, 0x19) < 7U) {
                var_a1 = 5;
            }
        }
    }
    return var_a1 & 0xFF;
}

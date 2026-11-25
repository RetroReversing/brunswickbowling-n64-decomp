/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O1, tried by autopilot */
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

extern unsigned char D_8008EB15;
extern unsigned char D_8008EB14;
extern unsigned char D_80085228;
s32 func_800407F0();
extern char D_80083BA8[];

s32 func_80040780(void) {
    u8 sp10;
    u8 sp11;
    s32 var_a1;
    s32 var_v0;

    var_v0 = 0;
    if (func_800407F0() == 0) {
        var_a1 = 0;
        sp11 = D_8008EB15;
        sp10 = D_8008EB14;
        if ((D_8008EB14 & 0xFF) == D_80085228) {
            var_a1 = M2C_FIELD(&sp10, u8 *, 1) == M2C_FIELD((D_80083BA8 + 0x1680), u8 *, 1);
        }
        var_v0 = var_a1;
    }
    return var_v0;
}

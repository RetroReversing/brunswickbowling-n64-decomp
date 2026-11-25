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

s32 func_8005FB0C(s32);                             /* extern */
extern s32 D_800A5A94;
extern s32 D_800A5A98;
extern s32 D_800A5A9C;
extern s32 D_800A5AA0;

void func_8005BFC0(s32 arg0) {
    s32 var_s0;

    var_s0 = arg0;
    if (var_s0 < 0x40) {
        var_s0 = 0x40;
    } else if (var_s0 >= 0x401) {
        var_s0 = 0x400;
    }
    D_800A5AA0 = func_8005FB0C(var_s0 * 8);
    D_800A5A9C = var_s0;
    D_800A5A98 = 0;
    D_800A5A94 = 0;
}

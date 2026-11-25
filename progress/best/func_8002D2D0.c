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

M2C_UNK func_8005978C(s32, M2C_UNK *, s32, s32);    /* extern */
extern M2C_UNK D_80076A20;

void func_8002D2D0(void *arg0, s32 arg1, s32 arg2) {
    s32 var_a2;

    var_a2 = arg2;
    if (var_a2 >= 0xD) {
        var_a2 = 0xC;
    }
    M2C_FIELD(arg0, s32 *, 0x10C) = (s32) (M2C_FIELD(arg0, s32 *, 0x10C) + arg1);
    func_8005978C((var_a2 * 0x14) + arg0 + 0xD, &D_80076A20, arg1, arg1);
}

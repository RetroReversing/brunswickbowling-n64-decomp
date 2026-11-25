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

M2C_UNK func_8005978C();    /* extern */
extern M2C_UNK D_80076A24;
extern M2C_UNK D_80076A2C;

void func_8002D4C0(s32 arg0, s16 arg1) {
    s16 var_a2;

    if (arg1 == 0) {
        func_8005978C(arg0 + 0xD6, &D_80076A24, arg1);
        return;
    }
    var_a2 = 0x20;
    if (arg1 > 0) {
        var_a2 = 0x2B;
    }
    func_8005978C(arg0 + 0xD6, &D_80076A2C, var_a2, arg1);
}

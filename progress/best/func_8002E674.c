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
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8001C210();
extern s32 D_8008BA98;

void func_8002E674(s32 arg0) {
    s32 sp18;
    s32 sp20;
    s32 sp28;
    s32 sp30;

    do { sp18 = arg0; } while (0);
    sp30 = arg0;
    sp28 = arg0;
    sp30 = D_8008BA98;
    func_8001C210(arg0, &sp30);
    sp20 = sp28;
}

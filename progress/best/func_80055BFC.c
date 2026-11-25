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

s32 func_800549B0();
s32 func_800549E4();
s32 func_80054A1C();

void func_80055BFC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_800549B0(0xB1FFFFE4);
    func_800549B0(0xB1FFFFE8, arg2);
    func_800549B0(0xB1FFFFEC, arg3);
    func_800549B0(0xB1FFFFE0, arg0);
    do {
        func_80054A1C(0x3E8);
        if (func_800549E4(0xB1FFFFF0) != 0) {
            M2C_BREAK(1);
        }
    } while (func_800549E4(0xB1FFFFE0) != 0);
    func_800549E4(0xB1FFFFDC);
}

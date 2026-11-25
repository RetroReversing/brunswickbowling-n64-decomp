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

extern signed char D_8008F0B4;
extern signed char D_8008F0B5;
extern signed char D_8008F0B6;
s32 func_80037310();
s32 func_8003732C();
extern s32 D_8008ED30;
extern char D_8008F0A8[];
extern char D_8008F17C[];
extern s32 D_8008F2C0;
extern s32 D_8009C77C;

void func_80045200(s32 arg0, s32 arg1) {
    if (D_8008ED30 == 0) {
        D_8008F2C0 = arg1;
        D_8008F0B4 = 0x41;
        D_8008F0B5 = 0x4E;
        D_8008F0B6 = 0x68;
        func_8003732C(D_8008F17C, 9);
        func_80037310(D_8008F17C);
        D_8009C77C = 1;
    }
}

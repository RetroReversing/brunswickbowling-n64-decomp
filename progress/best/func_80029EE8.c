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

extern int D_80089B14;
extern unsigned char D_80089B19;
s32 func_80029D3C();
s32 func_80037264();
s32 func_800375C0();
extern s32 D_80089B34;
extern char D_8008C8C4[];
extern s32 D_8008E9E0;

void func_80029EE8(void *arg0) {
    s32 var_s0;

    do { var_s0 = 0; } while (0);
    func_80037264(D_80089B14, 0, 5, 0, (s32) D_80089B19, 4);
    do { M2C_FIELD(arg0, s16 *, 0x18) = 0; } while (0);
    D_80089B34 = D_8008E9E0;
    do {
        func_80029D3C(arg0, var_s0, 0);
        do { var_s0 += 1; } while (0);
    } while (var_s0 < 0xA);
    func_800375C0(D_8008C8C4, 0);
}

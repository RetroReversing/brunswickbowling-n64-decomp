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

s32 func_80011CA4();
s32 func_8003875C();
s32 func_80038924();
extern char D_8007DA48[];
extern s32 D_8007E4E0;
extern char D_8007F618[];
extern char D_8008CB50[];

void func_80013404(void) {
    func_80011CA4((D_8007E4E0 * 0x5C) + D_8007F618, (D_8007E4E0 * 0x1C4) + D_8007DA48, 1);
    func_8003875C(D_8008CB50, 1);
    func_80038924(D_8008CB50, 0);
}

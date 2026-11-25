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

M2C_UNK func_80029600();                            /* extern */
M2C_UNK func_80037310(s32);                         /* extern */
M2C_UNK func_80044808(M2C_UNK *);                   /* extern */
extern s32 D_80089B14;
extern s32 D_80089B1C;
extern s32 D_80089B24;
extern s32 D_80089B2C;
extern M2C_UNK D_8008ED80;

void func_8002A6A4(void) {
    func_80044808(&D_8008ED80);
    func_80037310(D_80089B24);
    func_80037310(D_80089B14);
    func_80037310(D_80089B1C);
    func_80037310(D_80089B2C);
    func_80029600();
}

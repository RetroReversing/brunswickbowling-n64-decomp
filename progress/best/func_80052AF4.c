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

s32 *func_8004CDEC();
s32 func_800504D8();
s32 func_8005B0BC();
s32 func_8005B354();
s32 func_8005BD80();
extern s32 *D_80097040;
extern s32 D_80097044;
extern char D_8009DB88[];
extern s32 *D_800A2110;
extern char D_800A2118[];
extern char D_B0099200[];
extern char D_B009A704[];
extern char D_B009A800[];
extern char D_B0287900[];
extern char D_B0287C3E[];

void func_80052AF4(void) {
    s32 sp10;
    s32 sp14;
    s32 *sp18;
    s32 sp1C;
    s32 *sp20;
    s32 sp24;
    s32 *sp28;
    s32 *sp2C;
    s32 *sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    s32 sp40;
    s32 sp44;
    s32 sp48;
    s32 sp4C;

    if (D_80097040 == NULL) {
        D_80097040 = func_8004CDEC(0x29810, 0x40);
        D_800A2110 = func_8004CDEC(0x2000, 0x10);
    }
    func_800504D8(D_B0099200, D_800A2110, D_B009A704 - D_B0099200);
    func_800504D8(D_B0287900, D_800A2118, D_B0287C3E - D_B0287900);
    sp14 = 0x10;
    sp18 = D_8009DB88;
    sp1C = 0x28;
    sp34 = 0x40;
    sp24 = 0x29810;
    sp2C = D_B009A800;
    sp3C = 0x2B11;
    sp38 = 0x100;
    sp30 = D_800A2118;
    sp40 = 0x1000;
    sp48 = 0x24;
    sp10 = 0;
    sp44 = 1;
    sp4C = 0x800;
    sp20 = D_80097040;
    sp28 = D_800A2110;
    func_8005B0BC(&sp10, D_800A2110);
    func_8005B354(1, 0x3FFF);
    func_8005B354(2, 0x3FFF);
    func_8005BD80(0);
    D_80097044 = 1;
}

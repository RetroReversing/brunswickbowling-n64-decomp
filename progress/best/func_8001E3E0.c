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

extern short D_80083764;
s32 func_80020578();
s32 func_800205B4();
s32 func_8002094C();
s32 func_800233FC();
s32 func_80040A5C();
s32 func_80041690();
s32 func_800416B4();
extern char D_8007DA48[];
extern s32 D_8007E4E0;
extern char D_80081AD0[];
extern s32 D_80082F8C;
extern char D_800836F0[];
extern char D_80083744[];
extern char D_80083BA8[];
extern char D_8008EB34[];

s32 func_8001E3E0(void) {
    func_80040A5C(D_8008EB34, 0, -1);
    func_800416B4(D_8008EB34);
    if (D_80082F8C == D_800836F0) {
        func_8002094C(D_80083BA8, (D_8007E4E0 * 0x1C4) + D_8007DA48, *((D_8007E4E0 * 4) + D_80081AD0), D_8007E4E0);
    } else {
        func_800233FC(D_80083744, D_80083764);
        func_80020578(D_80083BA8);
        func_800205B4(D_80083BA8);
    }
    func_80041690(D_8008EB34);
    return 1;
}

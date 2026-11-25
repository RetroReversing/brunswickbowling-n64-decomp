/* identical to func_8003B840 in Bottom of the 9th (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800BA6D0 in ALL STAR TENNIS '99 (local match library) (matched), with its names changed by decompdecomp */
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

M2C_UNK osCreateMesgQueue(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK osSendMesg(M2C_UNK *, M2C_UNK, M2C_UNK);    /* extern */
extern s32 D_80097950;
extern M2C_UNK D_800A76B0;
extern M2C_UNK D_800A76C0;

void func_80060BB0(void) {
    D_80097950 = 1;
    osCreateMesgQueue(&D_800A76C0, &D_800A76B0, 1);
    osSendMesg(&D_800A76C0, 0, 0);
}

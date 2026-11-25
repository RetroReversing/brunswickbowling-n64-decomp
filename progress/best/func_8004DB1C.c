/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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

M2C_UNK func_8004DE88(s32 *);                       /* extern */
M2C_UNK func_800527D0();                            /* extern */
M2C_UNK osViSetMode(M2C_UNK *);                     /* extern */
extern s32 D_80097030;
extern s32 D_8009CBE0;
extern M2C_UNK D_8009CBE8;
extern M2C_UNK D_8009CC58;
extern s32 D_8009CC60;
extern s32 D_8009CD88;
extern s32 D_8009DE10;
extern M2C_UNK D_8009FE20;

void func_8004DB1C(void) {
    func_800527D0();
    if (((s32) (D_8009CC60 - (&D_8009CC58)[D_8009CBE0]) >> 3) != 0) {
        D_8009DE10 = 0;
        func_8004DE88(&D_8009CC60);
        D_80097030 += 1;
        D_8009CBE0 ^= 1;
        M2C_FIELD(&D_8009FE20, s32 *, 0x220C) = 1;
    }
    if (D_8009CD88 != 0) {
        osViSetMode(&D_8009CBE8);
    }
}

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

M2C_UNK func_80037310(M2C_UNK *);                   /* extern */
M2C_UNK func_80039738(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK *); /* extern */
extern M2C_UNK D_800734F4;
extern s32 D_8008B3BC;
extern M2C_UNK D_8008C250;
extern M2C_UNK D_8008C2D0;
extern M2C_UNK D_8008CEEC;
extern s32 D_8008E9E0;

void func_8001135C(void) {
    M2C_UNK *var_a0;

    if (D_8008B3BC != 0) {
        var_a0 = &D_8008C250;
    } else {
        var_a0 = &D_8008C2D0;
    }
    M2C_FIELD(var_a0, s16 *, 0x10) = 0x1C;
    M2C_FIELD(var_a0, s16 *, 0x12) = 0xC;
    func_80037310(var_a0);
    if ((u32) (D_8008E9E0 % 1000) < 0x1F4U) {
        func_80039738(&D_8008CEEC, 7, 0, 0x2E, 0x3E, &D_800734F4);
    }
}

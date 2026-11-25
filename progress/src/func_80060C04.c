/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O1, tried by autopilot */
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

M2C_UNK func_80066C50(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_80067FC0(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_800680F0(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern s32 D_80097950;
extern M2C_UNK D_800A76B0;
extern M2C_UNK D_800A76C0;

void func_80060C04(void) {
    M2C_UNK sp10;

    if (D_80097950 == 0) {
        D_80097950 = 1;
        func_80066C50(&D_800A76C0, &D_800A76B0, 1);
        func_800680F0(&D_800A76C0, 0, 0);
    }
    func_80067FC0(&D_800A76C0, &sp10, 1);
}

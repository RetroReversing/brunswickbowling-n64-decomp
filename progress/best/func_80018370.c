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

M2C_UNK func_800231E0(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK D_800892F0;
extern M2C_UNK D_8008AAA0;
extern s32 D_800926BC;

void func_80018370(void) {
    D_800926BC = 1;
    M2C_FIELD(&D_8008AAA0, s16 *, 0x24) = 0xF0;
    M2C_FIELD(&D_8008AAA0, s32 *, 0x14) = 0;
    func_800231E0(&D_800892F0, -0xA0);
    M2C_FIELD(&D_800892F0, s32 *, 0x18) = 0;
}

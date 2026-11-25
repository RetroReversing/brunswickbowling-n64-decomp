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

M2C_UNK func_80047128(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_80047328(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_800474A4(M2C_UNK *, f32);              /* extern */
M2C_UNK func_80047588(M2C_UNK *, s32 *);            /* extern */
M2C_UNK func_80047948(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_80078FF0;
extern M2C_UNK D_80079028;
extern M2C_UNK D_8007909C;
extern f32 D_800790C0;
extern M2C_UNK D_8008FBE0;
extern M2C_UNK D_80090174;
extern M2C_UNK D_800903D8;

void func_8003F198(void) {
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    f32 temp_fs0;

    sp18 = M2C_FIELD(&D_80078FF0, s32 *, 0);
    sp1C = M2C_FIELD(&D_80078FF0, s32 *, 4);
    sp20 = M2C_FIELD(&D_80078FF0, s32 *, 8);
    sp24 = M2C_FIELD(&D_80078FF0, s32 *, 0xC);
    sp28 = M2C_FIELD(&D_80078FF0, s32 *, 0x10);
    sp2C = M2C_FIELD(&D_80078FF0, s32 *, 0x14);
    func_80047128(&D_80090174, &D_80079028, 1, 0, 1);
    func_80047588(&D_80090174, &sp18);
    func_80047128(&D_8008FBE0, &D_8007909C, 1, 0, 0);
    temp_fs0 = D_800790C0;
    func_80047948(&D_8008FBE0, 0, 0, 0x43160000);
    func_800474A4(&D_8008FBE0, temp_fs0);
    func_80047328(&D_800903D8, &D_8008FBE0, 1);
    func_80047948(&D_800903D8, 0x41980000, 0xC1A00000, 0x42D80000);
    func_800474A4(&D_800903D8, temp_fs0);
}

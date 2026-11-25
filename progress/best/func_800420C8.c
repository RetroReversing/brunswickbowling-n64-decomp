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

s32 func_80036DA4();
s32 func_80036E8C();
s32 func_80036F08();
s32 func_80037310();
s32 func_8004684C();
extern char D_80079724[];
extern f32 D_8007972C;
extern s32 D_80095CF0;

void func_800420C8(s32 arg0, s32 arg1) {
    s32 sp10;
    s32 temp_s2;

    func_80036DA4(&sp10);
    temp_s2 = D_80095CF0;
    D_80095CF0 = 0;
    func_8004684C(2);
    func_80036F08(&sp10, arg1, D_80079724, 0);
    M2C_FIELD(&sp10, s16 *, 0x10) = 0;
    M2C_FIELD(&sp10, s16 *, 0x12) = 0;
    M2C_FIELD(&sp10, f32 *, 0x2C) = (f32) D_8007972C;
    M2C_FIELD(&sp10, f32 *, 0x30) = (f32) D_8007972C;
    func_80037310(&sp10);
    func_8004684C(1);
    func_80037310(&sp10);
    func_8004684C(1);
    func_80036E8C(&sp10);
    D_80095CF0 = temp_s2;
}

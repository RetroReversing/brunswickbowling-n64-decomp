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

s32 *func_8004C9A8(s32, s32, M2C_UNK, u16);         /* extern */
M2C_UNK func_8004D314(M2C_UNK *);                   /* extern */
void *func_8004D480(M2C_UNK *, s32, M2C_UNK);       /* extern */
M2C_UNK func_8004E304(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK guOrtho(M2C_UNK *, f32, f32, f32, f32, f32, f32, f32); /* extern */
M2C_UNK func_800715C0(s32, s32, M2C_UNK);           /* extern */
extern f32 D_80079BD0;
extern f32 D_80079BD4;
extern f32 D_80079BD8;
extern f32 D_80079BDC;
extern s32 D_8009C898;
extern s32 D_8009CBB8;
extern u16 D_8009CBD0;
extern u16 D_8009CBE4;
extern s16 D_8009CD90;
extern M2C_UNK D_8009CD98;
extern s32 D_8009CDD8;
extern M2C_UNK D_8009CDE0;
extern M2C_UNK D_8009CE10;
extern M2C_UNK func_8004E440;

void func_8004E00C(s32 arg0) {
    M2C_UNK sp20;
    M2C_UNK sp24;
    s16 sp28;
    s16 sp2A;
    u16 sp2C;
    u16 sp2E;
    f32 temp_ft0;
    f32 temp_fv0;
    s32 temp_a0;

    sp28 = 0;
    sp2A = 0;
    D_8009CD90 = 0;
    sp2C = D_8009CBD0;
    sp2E = D_8009CBE4;
    sp20 = M2C_UNALIGNED32(sp28);
    sp24 = M2C_UNALIGNED32(sp2C);
    temp_a0 = *func_8004C9A8(D_8009C898, ((arg0 - 1) * 4) + ((arg0 * 0x1A8) + 0x14), 0x10, D_8009CBE4);
    D_8009CDD8 = temp_a0;
    func_800715C0(temp_a0, arg0, 0x1A8);
    M2C_FIELD(func_8004D480(&func_8004E440, D_8009CBB8, 0), s32 *, 0x10) = 2;
    func_8004E304(&D_8009CE10, &sp20, 0x3FFF);
    func_8004D314(&D_8009CDE0);
    temp_ft0 = (f32) D_8009CBD0;
    temp_fv0 = (f32) D_8009CBE4;
    guOrtho(&D_8009CD98, -temp_ft0 * D_80079BD0, temp_ft0 * D_80079BD0, -temp_fv0 * D_80079BD0, temp_fv0 * D_80079BD0, D_80079BDC, D_80079BD4, D_80079BD8);
}

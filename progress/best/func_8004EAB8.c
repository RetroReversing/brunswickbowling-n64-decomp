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

s32 *func_8004C9A8(s32, s32, M2C_UNK, u16 *);       /* extern */
M2C_UNK func_8004E814(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_8004EA60(s16 *);                       /* extern */
s32 func_8004F05C(M2C_UNK *, M2C_UNK);              /* extern */
M2C_UNK func_800715C0(s32, s32, M2C_UNK);           /* extern */
extern s32 D_8009C898;
extern u16 D_8009CBD0;
extern u16 D_8009CBE4;
extern M2C_UNK D_8009CE10;
extern s32 D_8009CFC0;
extern s32 D_8009CFC4;
extern s32 D_8009CFC8;
extern M2C_UNK func_8004EBD0;

void func_8004EAB8(s32 arg0) {
    M2C_UNK sp10;
    M2C_UNK sp14;
    s16 sp18;
    s16 sp1A;
    u16 sp1C;
    u16 sp1E;
    s16 sp20;
    s16 sp22;
    u16 sp24;
    s16 sp26;
    s32 temp_a0;

    sp1C = D_8009CBD0;
    sp1E = D_8009CBE4;
    sp18 = 0;
    sp1A = 0;
    sp10 = M2C_UNALIGNED32(sp18);
    sp14 = M2C_UNALIGNED32(sp1C);
    sp20 = 0;
    sp22 = D_8009CBE4 - 0x50;
    sp24 = D_8009CBD0;
    sp26 = 0x50;
    sp18 = M2C_UNALIGNED32(sp20);
    sp1C = M2C_UNALIGNED32(sp24);
    temp_a0 = *func_8004C9A8(D_8009C898, ((arg0 - 1) * 4) + ((arg0 << 6) + 0x14), 0x10, &D_8009CBE4);
    D_8009CFC8 = temp_a0;
    func_800715C0(temp_a0, arg0, 0x40);
    func_8004E814(&func_8004EBD0, &D_8009CE10, 0x3FC3);
    D_8009CFC0 = 0;
    D_8009CFC4 = func_8004F05C(&sp10, 1);
    func_8004EA60(&sp18);
}

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

M2C_UNK func_8004E83C(u16 *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_8004E954(void *arg0) {
    u16 sp10;
    M2C_UNK sp14;
    M2C_UNK temp_a2;
    M2C_UNK temp_a3;

    M2C_FIELD(arg0, u16 *, 0x78) = (u16) ((s32) (M2C_FIELD(arg0, u16 *, 0x78) << 0x10) >> 0x11);
    M2C_FIELD(arg0, u16 *, 0x94) = (u16) ((s32) (M2C_FIELD(arg0, u16 *, 0x94) << 0x10) >> 0x11);
    temp_a2 = M2C_UNALIGNED32(M2C_FIELD(arg0, M2C_UNK *, 0x74));
    temp_a3 = M2C_UNALIGNED32(M2C_FIELD(arg0, u16 *, 0x78));
    sp10 = temp_a2;
    sp14 = temp_a3;
    sp10 += M2C_FIELD(arg0, u16 *, 0x78);
    func_8004E83C(&sp10, 0x3FFF, temp_a2, temp_a3);
}

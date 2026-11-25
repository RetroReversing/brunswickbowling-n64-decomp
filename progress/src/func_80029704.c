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

M2C_UNK func_80016604(M2C_UNK *);                   /* extern */
M2C_UNK func_80045050(M2C_UNK *, s32, s32, M2C_UNK, s32, s32, s32, s32, s32, s32, s32); /* extern */
extern M2C_UNK D_800827A4;
extern M2C_UNK D_8008ED80;

void func_80029704(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;

    temp_s1 = 0x140 - (arg0 >> 1);
    temp_s0 = 0x78 - (arg1 >> 1);
    func_80045050(&D_8008ED80, temp_s1, temp_s0 - 5, 0, arg0, 4, 0x70, 0x80, 0xA0, arg3, 0);
    func_80045050(&D_8008ED80, temp_s1, temp_s0 - 1, 0, arg0, 1, 0, 0, 0xFF, arg3, 0);
    func_80045050(&D_8008ED80, temp_s1, temp_s0, 0, arg0, arg1, 0x20, 0x20, 0x40, arg2, 0);
    temp_s0_2 = temp_s0 + arg1;
    func_80045050(&D_8008ED80, temp_s1, temp_s0_2, 0, arg0, 1, 0, 0, 0xFF, arg3, 0);
    func_80045050(&D_8008ED80, temp_s1, temp_s0_2 + 1, 0, arg0, 4, 0x70, 0x80, 0xA0, arg3, 0);
    func_80016604(&D_800827A4);
}

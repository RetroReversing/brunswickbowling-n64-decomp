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

M2C_UNK func_800423DC(void *, void *, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_80046730(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_8004EA00(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK D_8009CE10;

void func_800424D4(void *arg0) {
    s32 var_a0;
    void *var_v1;

    var_a0 = 9;
    var_v1 = arg0 + 0x24;
    M2C_FIELD(arg0, s32 *, 0x2E8) = -1;
    do {
        M2C_FIELD(var_v1, s32 *, 0x2EC) = 0;
        var_a0 -= 1;
        var_v1 -= 4;
    } while (var_a0 >= 0);
    M2C_FIELD(arg0, s32 *, 0x320) = 0;
    func_80046730(5, 2, 0x5000, 0x10);
    func_8004EA00(&D_8009CE10, 0x10, 0x10, 0x10, 1);
    M2C_FIELD(&D_8009CE10, u16 *, 0x70) = (u16) (M2C_FIELD(&D_8009CE10, u16 *, 0x70) & 0xBFFF);
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    func_800423DC(arg0, arg0 + 0x48, 0xD8, 0xD8, 0xD8, 0xFF, 0xFF, 0xFF, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800423DC(arg0, arg0 + 0x80, 0x15, 0x15, 0x15, 0x14, 0x14, 0x14, 0, 0x64, -0x64, 0x14, 0x14, 0x14, 0, -0x32, -0x64, 0, 0, 0, 0, 0, 0);
    func_800423DC(arg0, arg0 + 0xB8, 0x6A, 0x35, 0xD5, 0x28, 0x14, 0x50, 0, 0x64, 0x64, 0x28, 0x14, 0x50, 0, 0x64, -0x64, 0, 0, 0, 0, 0, 0);
    func_800423DC(arg0, arg0 + 0xF0, 0, 0, 0, 0xA0, 0xA0, 0xA0, 0, 0x64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800423DC(arg0, arg0 + 0x160, 0x80, 0x80, 0x80, 0xFF, 0xFF, 0xFF, 0x7F, 0x3F, 0x7F, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800423DC(arg0, arg0 + 0x198, 0xFF, 0x3F, 0x3F, 0xFF, 0x40, 0x40, 0, 0x64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800423DC(arg0, arg0 + 0x1D0, 0, 0xFF, 0, 0, 0xFF, 0, 0, 0x64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800423DC(arg0, arg0 + 0x208, 0xFF, 0x7F, 0, 0xFF, 0x80, 0, 0, 0x64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800423DC(arg0, arg0 + 0x240, 0xFF, 0, 0xFF, 0xFF, 0, 0xFF, 0, 0x64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800423DC(arg0, arg0 + 0x278, 0, 0xFF, 0xFF, 0, 0xFF, 0xFF, 0, 0x64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800423DC(arg0, arg0 + 0x2B0, 0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0x40, 0, 0x64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    M2C_FIELD(arg0, s16 *, 0x318) = -0xA0;
}

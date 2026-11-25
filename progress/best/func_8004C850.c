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

M2C_UNK func_8004C8E8(s32, s32, s32);               /* extern */
M2C_UNK func_800715C0(s32, s32, M2C_UNK);           /* extern */
extern s32 D_80071420;
extern s32 D_80071424;
extern s32 D_8009C798;
extern s32 D_8009C898;
extern s32 D_8009C89C;
extern s32 D_8009C8A0;

void func_8004C850(s32 arg0) {
    s32 temp_s0;

    temp_s0 = D_80071420 + ((arg0 * 4) + 0x10) + (arg0 * 0x18);
    D_8009C898 = D_80071420;
    func_800715C0(D_80071420, arg0, 0x18);
    func_8004C8E8(D_8009C898, temp_s0, D_80071424);
    D_8009C8A0 = 1;
    D_8009C89C = 0;
    D_8009C798 = D_8009C898;
}

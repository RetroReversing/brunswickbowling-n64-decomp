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

s32 func_80010BCC();
extern f64 D_800734A0;
extern f64 D_800734A8;
extern char D_8007C508[];

void func_80010A28(s32 arg0, void *arg1, void *arg2) {
    f64 sp10;
    f64 sp18;
    f64 sp20;
    f64 temp_ft0;
    f64 temp_ft0_2;
    f64 temp_ft1;
    f64 temp_ft1_2;
    f64 temp_ft2;
    f64 temp_ft3;
    s32 temp_s0;
    void *temp_s0_2;

    temp_s0 = arg0 * 0xC8;
    func_80010BCC(temp_s0 + D_8007C508);
    temp_ft0 = (M2C_FIELD(arg1, f64 *, 8) * M2C_FIELD(arg2, f64 *, 0x10)) - (M2C_FIELD(arg1, f64 *, 0x10) * M2C_FIELD(arg2, f64 *, 8));
    sp10 = temp_ft0;
    temp_ft2 = (M2C_FIELD(arg1, f64 *, 0x10) * M2C_FIELD(arg2, f64 *, 0)) - (M2C_FIELD(arg1, f64 *, 0) * M2C_FIELD(arg2, f64 *, 0x10));
    sp18 = temp_ft2;
    temp_ft1 = (M2C_FIELD(arg1, f64 *, 0) * M2C_FIELD(arg2, f64 *, 8)) - (M2C_FIELD(arg1, f64 *, 8) * M2C_FIELD(arg2, f64 *, 0));
    temp_s0_2 = temp_s0 + (D_8007C508 - 0x18);
    sp20 = temp_ft1;
    temp_ft3 = M2C_FIELD(temp_s0_2, f64 *, 0x18);
    temp_ft0_2 = ((temp_ft3 * temp_ft0) + (M2C_FIELD(temp_s0_2, f64 *, 0x20) * temp_ft2) + (M2C_FIELD(temp_s0_2, f64 *, 0x28) * temp_ft1)) * D_800734A0;
    temp_ft1_2 = M2C_FIELD(temp_s0_2, f64 *, 0x68) + (temp_ft0_2 * temp_ft3);
    M2C_FIELD(temp_s0_2, f64 *, 0x68) = temp_ft1_2;
    M2C_FIELD(temp_s0_2, f64 *, 0x70) += (temp_ft0_2 * M2C_FIELD(temp_s0_2, f64 *, 0x20));
    M2C_FIELD(temp_s0_2, f64 *, 0x78) += (temp_ft0_2 * M2C_FIELD(temp_s0_2, f64 *, 0x28));
    M2C_FIELD(temp_s0_2, f64 *, 0x68) = (f64) (temp_ft1_2 + (sp10 * D_800734A8));
    M2C_FIELD(temp_s0_2, f64 *, 0x70) += (sp18 * D_800734A8);
    M2C_FIELD(temp_s0_2, f64 *, 0x78) += (sp20 * D_800734A8);
    M2C_FIELD(temp_s0_2, f64 *, 0x50) += M2C_FIELD(arg2, f64 *, 0);
    M2C_FIELD(temp_s0_2, f64 *, 0x58) += M2C_FIELD(arg2, f64 *, 8);
    M2C_FIELD(temp_s0_2, f64 *, 0x60) += M2C_FIELD(arg2, f64 *, 0x10);
}

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

extern f64 D_80073498;
extern char D_8007C4F0[];

void func_8001092C(s32 arg0, void *arg1, void *arg2) {
    f64 sp0;
    f64 sp8;
    f64 sp10;
    f64 temp_ft1;
    void *temp_v0;

    temp_ft1 = (M2C_FIELD(arg1, f64 *, 8) * M2C_FIELD(arg2, f64 *, 0x10)) - (M2C_FIELD(arg1, f64 *, 0x10) * M2C_FIELD(arg2, f64 *, 8));
    sp0 = temp_ft1;
    sp8 = (M2C_FIELD(arg1, f64 *, 0x10) * M2C_FIELD(arg2, f64 *, 0)) - (M2C_FIELD(arg1, f64 *, 0) * M2C_FIELD(arg2, f64 *, 0x10));
    sp10 = (M2C_FIELD(arg1, f64 *, 0) * M2C_FIELD(arg2, f64 *, 8)) - (M2C_FIELD(arg1, f64 *, 8) * M2C_FIELD(arg2, f64 *, 0));
    temp_v0 = (arg0 * 0xC8) + D_8007C4F0;
    M2C_FIELD(temp_v0, f64 *, 0x68) += (temp_ft1 * D_80073498);
    M2C_FIELD(temp_v0, f64 *, 0x70) += (sp8 * D_80073498);
    M2C_FIELD(temp_v0, f64 *, 0x78) += (sp10 * D_80073498);
    M2C_FIELD(temp_v0, f64 *, 0x50) += M2C_FIELD(arg2, f64 *, 0);
    M2C_FIELD(temp_v0, f64 *, 0x58) += M2C_FIELD(arg2, f64 *, 8);
    M2C_FIELD(temp_v0, f64 *, 0x60) += M2C_FIELD(arg2, f64 *, 0x10);
}

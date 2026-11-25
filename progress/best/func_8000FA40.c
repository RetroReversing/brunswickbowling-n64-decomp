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

M2C_UNK func_80010BCC(void *);                      /* extern */
extern f64 D_80073338;

void func_8000FA40(void *arg0, void *arg1, void *arg2) {
    f64 temp_fv0;
    f64 temp_fv0_2;
    f64 temp_fv0_3;

    temp_fv0 = M2C_FIELD(arg0, f64 *, 0) + M2C_FIELD(arg1, f64 *, 0);
    M2C_FIELD(arg2, f64 *, 0) = temp_fv0;
    temp_fv0_2 = M2C_FIELD(arg0, f64 *, 8) + M2C_FIELD(arg1, f64 *, 8);
    M2C_FIELD(arg2, f64 *, 8) = temp_fv0_2;
    temp_fv0_3 = M2C_FIELD(arg0, f64 *, 0x10) + M2C_FIELD(arg1, f64 *, 0x10);
    M2C_FIELD(arg2, f64 *, 0x10) = temp_fv0_3;
    M2C_FIELD(arg2, f64 *, 0) = (f64) (temp_fv0 * D_80073338);
    M2C_FIELD(arg2, f64 *, 8) = (f64) (temp_fv0_2 * D_80073338);
    M2C_FIELD(arg2, f64 *, 0x10) = (f64) (temp_fv0_3 * D_80073338);
    M2C_FIELD(arg2, f64 *, 0x18) = (f64) (M2C_FIELD(arg0, f64 *, 0x18) + M2C_FIELD(arg1, f64 *, 0x18));
    M2C_FIELD(arg2, f64 *, 0x20) = (f64) (M2C_FIELD(arg0, f64 *, 0x20) + M2C_FIELD(arg1, f64 *, 0x20));
    M2C_FIELD(arg2, f64 *, 0x28) = (f64) (M2C_FIELD(arg0, f64 *, 0x28) + M2C_FIELD(arg1, f64 *, 0x28));
    func_80010BCC(arg2 + 0x18);
    M2C_FIELD(arg2, f64 *, 0x30) = (f64) (M2C_FIELD(arg0, f64 *, 0x30) + M2C_FIELD(arg1, f64 *, 0x30));
    M2C_FIELD(arg2, f64 *, 0x38) = (f64) (M2C_FIELD(arg0, f64 *, 0x38) + M2C_FIELD(arg1, f64 *, 0x38));
    M2C_FIELD(arg2, f64 *, 0x40) = (f64) (M2C_FIELD(arg0, f64 *, 0x40) + M2C_FIELD(arg1, f64 *, 0x40));
    func_80010BCC(arg2 + 0x30);
}

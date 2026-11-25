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

extern f64 D_80073428;
extern f64 D_80073430;
extern f64 D_80073438;
extern f64 D_80073440;
extern f64 D_80073448;
extern s32 D_8007B210;
extern s32 D_8007C400;
extern M2C_UNK D_8007C458;

void func_80010348(void) {
    f64 temp_ft0;

    temp_ft0 = M2C_FIELD(&D_8007C458, f64 *, 0x10) + D_80073430;
    M2C_FIELD(&D_8007C458, f64 *, 0x20) = (f64) (M2C_FIELD(&D_8007C458, f64 *, 0x20) + D_80073428);
    if (D_80073438 <= temp_ft0) {
        D_8007C400 = D_8007B210;
        M2C_FIELD(&D_8007C458, f64 *, 0x28) = (f64) -(M2C_FIELD(&D_8007C458, f64 *, 0x28) * D_80073440);
        M2C_FIELD(&D_8007C458, f64 *, 0x10) = (f64) (D_80073448 - ((temp_ft0 - D_80073438) * D_80073440));
    }
}

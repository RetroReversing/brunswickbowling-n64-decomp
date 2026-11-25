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

extern M2C_UNK D_8007C458;

void func_80010274(void) {
    f64 sp0;
    f64 sp8;
    f64 sp10;
    f64 temp_fa0;
    f64 temp_fs2;
    f64 temp_ft0;
    f64 temp_ft1;
    f64 temp_fv0;
    f64 temp_fv1;

    temp_fs2 = M2C_FIELD(&D_8007C458, f64 *, 0x48) * M2C_FIELD(&D_8007C458, f64 *, 0x68);
    temp_fv0 = M2C_FIELD(&D_8007C458, f64 *, 0x48) * M2C_FIELD(&D_8007C458, f64 *, 0x80);
    temp_fa0 = (M2C_FIELD(&D_8007C458, f64 *, 0x58) * M2C_FIELD(&D_8007C458, f64 *, 0x60)) - (M2C_FIELD(&D_8007C458, f64 *, 0x48) * M2C_FIELD(&D_8007C458, f64 *, 0x70));
    temp_ft1 = -(M2C_FIELD(&D_8007C458, f64 *, 0x58) * M2C_FIELD(&D_8007C458, f64 *, 0x68));
    temp_fv1 = (M2C_FIELD(&D_8007C458, f64 *, 0x58) * M2C_FIELD(&D_8007C458, f64 *, 0x78)) - (M2C_FIELD(&D_8007C458, f64 *, 0x48) * M2C_FIELD(&D_8007C458, f64 *, 0x88));
    sp0 = temp_ft1;
    sp10 = temp_fs2;
    temp_ft0 = -(M2C_FIELD(&D_8007C458, f64 *, 0x58) * M2C_FIELD(&D_8007C458, f64 *, 0x80));
    sp0 = temp_ft0;
    sp10 = temp_fv0;
    sp8 = temp_fa0;
    M2C_FIELD(&D_8007C458, f64 *, 0x60) = (f64) (M2C_FIELD(&D_8007C458, f64 *, 0x60) + temp_ft1);
    M2C_FIELD(&D_8007C458, f64 *, 0x70) = (f64) (M2C_FIELD(&D_8007C458, f64 *, 0x70) + temp_fs2);
    sp8 = temp_fv1;
    M2C_FIELD(&D_8007C458, f64 *, 0x78) = (f64) (M2C_FIELD(&D_8007C458, f64 *, 0x78) + temp_ft0);
    M2C_FIELD(&D_8007C458, f64 *, 0x88) = (f64) (M2C_FIELD(&D_8007C458, f64 *, 0x88) + temp_fv0);
    M2C_FIELD(&D_8007C458, f64 *, 0x68) = (f64) (M2C_FIELD(&D_8007C458, f64 *, 0x68) + temp_fa0);
    M2C_FIELD(&D_8007C458, f64 *, 0x80) = (f64) (M2C_FIELD(&D_8007C458, f64 *, 0x80) + temp_fv1);
}

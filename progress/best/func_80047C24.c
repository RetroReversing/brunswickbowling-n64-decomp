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

extern f32 D_80079AE8;
extern f32 D_80079AEC;
extern f32 D_80079AF0;
extern f32 D_80095B00;

void func_80047C24(void *arg0, s32 arg1, void *arg2, void *arg3, f64 *arg4) {
    f32 temp_fv1;
    f64 var_fv0;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    void *temp_t0;

    temp_t0 = M2C_FIELD(arg0, void **, 0xC8);
    temp_v1 = M2C_FIELD(temp_t0, s32 *, 0x3C);
    if (temp_v1 != 0) {
        temp_v0 = M2C_FIELD((temp_v1 + (arg1 & 0xFF)), u8 *, 0xE) & 0x7F;
        temp_v1_2 = temp_v0 * 0xA * 0x10;
        M2C_FIELD(arg2, f64 *, 0) = (f64) (M2C_FIELD((temp_v1_2 + M2C_FIELD(temp_t0, s32 *, 0x18)), f32 *, 0x30) * D_80079AE8);
        M2C_FIELD(arg2, f64 *, 8) = (f64) (M2C_FIELD((temp_v1_2 + M2C_FIELD(M2C_FIELD(arg0, void **, 0xC8), s32 *, 0x18)), f32 *, 0x34) * D_80079AE8);
        M2C_FIELD(arg2, f64 *, 0x10) = (f64) (M2C_FIELD((temp_v1_2 + M2C_FIELD(M2C_FIELD(arg0, void **, 0xC8), s32 *, 0x18)), f32 *, 0x38) * D_80079AE8);
        temp_fv1 = M2C_FIELD((temp_v1_2 + M2C_FIELD(M2C_FIELD(arg0, void **, 0xC8), s32 *, 0x18)), f32 *, 0x48);
        if (D_80079AEC < temp_fv1) {
            var_fv0 = (f64) temp_fv1;
        } else {
            var_fv0 = (f64) D_80095B00;
        }
        *arg4 = var_fv0;
        temp_v1_3 = (((temp_v0 * 2) + 2) & 0xFF) * 0x50;
        M2C_FIELD(arg3, f64 *, 0) = (f64) (M2C_FIELD((temp_v1_3 + M2C_FIELD(M2C_FIELD(arg0, void **, 0xC8), s32 *, 0x18)), f32 *, 0x30) * D_80079AF0);
        M2C_FIELD(arg3, f64 *, 8) = (f64) (M2C_FIELD((temp_v1_3 + M2C_FIELD(M2C_FIELD(arg0, void **, 0xC8), s32 *, 0x18)), f32 *, 0x34) * D_80079AF0);
        D_80095B00 = (f32) *arg4;
        M2C_FIELD(arg3, f64 *, 0x10) = (f64) (M2C_FIELD((temp_v1_3 + M2C_FIELD(M2C_FIELD(arg0, void **, 0xC8), s32 *, 0x18)), f32 *, 0x38) * D_80079AF0);
    }
}

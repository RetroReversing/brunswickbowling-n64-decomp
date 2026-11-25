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

extern M2C_UNK D_8007A360;
extern f64 D_8007A3A0;
extern f64 D_8007A3A8;
extern f64 D_8007A3B0;
extern f64 D_8007A3B8;
extern f64 D_8007A3C0;
extern f64 D_8007A3C8;
extern f64 D_8007A3D0;
extern f64 D_8007A3D8;
extern f64 D_8007A3E0;
extern f64 D_8007A3E8;

#define sp40 (*(s32 *)(sp + 0x40))
s16 _getRate(f64 arg0, f64 arg1, s32 arg4, s16 *arg5) {
    u8 sp[72];
    M2C_UNK *var_a2;
    f64 temp_fv1;
    f64 temp_fv1_2;
    f64 temp_fv1_3;
    f64 var_fa0;
    f64 var_fa0_2;
    f64 var_fa1;
    f64 var_fv0;
    f64 var_fv0_2;
    f64 var_fv1;
    f64 var_fv1_2;
    s32 temp_fv0;
    s32 var_a0;
    void *var_a3;

    var_fa0 = arg0;
    var_fa1 = arg1;
    if (arg4 == 0) {
        if (var_fa0 <= var_fa1) {
            *arg5 = 0xFFFF;
            return 0x7FFF;
        }
        *arg5 = 0;
        return 0;
    }
    if (var_fa1 < D_8007A3A0) {
        var_fa1 = D_8007A3A0;
    }
    if (var_fa0 <= 0.0) {
        var_fa0 = D_8007A3A0;
    }
    var_a3 = sp;
    var_a2 = &D_8007A360;
    __repair_rows: {
        M2C_FIELD(var_a3, s32 *, 0) = (s32) M2C_FIELD(var_a2, s32 *, 0);
        M2C_FIELD(var_a3, s32 *, 4) = (s32) M2C_FIELD(var_a2, s32 *, 4);
        M2C_FIELD(var_a3, s32 *, 8) = (s32) M2C_FIELD(var_a2, s32 *, 8);
        M2C_FIELD(var_a3, s32 *, 0xC) = (s32) M2C_FIELD(var_a2, s32 *, 0xC);
        var_a2 += 0x10;
        var_a3 += 0x10;
    }
if (var_a2 != (&D_8007A360 + 0x40)) goto __repair_rows;
    var_fa0_2 = var_fa1 / var_fa0;
    var_a0 = (s32) ((D_8007A3A0 / (f64) arg4) * D_8007A3A8);
    sp40 = 0;
    if (var_fa0_2 != 0.0) {
        var_fv1 = var_fa0_2;
        if (!(var_fa0_2 > 0.0)) {
            var_fv1 = -var_fa0_2;
        }
        if (D_8007A3B0 <= var_fv1) {
            do {
                var_fv1 *= D_8007A3B8;
                sp40 += 1;
            } while (D_8007A3B0 <= var_fv1);
        }
        if (var_fv1 < D_8007A3C0) {
            do {
                var_fv1 *= 2.0;
                sp40 -= 1;
            } while (var_fv1 < D_8007A3C0);
        }
        var_fv0 = var_fv1;
        if (!(var_fa0_2 > 0.0)) {
            var_fv0 = -var_fv0;
        }
        var_fa0_2 = var_fv0;
    }
    var_fv1_2 = D_8007A3E0;
    var_fv0_2 = (((M2C_FIELD((((s32) (var_fa0_2 * D_8007A3C8) * 8) + sp), f64 *, -0x40) + (f64) sp40) * D_8007A3D0) / D_8007A3D8) + var_fv1_2;
    if (var_a0 != 0) {
        do {
            if (var_a0 & 1) {
                var_fv1_2 *= var_fv0_2;
            }
            var_a0 = var_a0 >> 1;
            var_fv0_2 *= var_fv0_2;
        } while (var_a0 != 0);
    }
    temp_fv1 = var_fv1_2 * var_fv1_2;
    temp_fv1_2 = temp_fv1 * temp_fv1;
    temp_fv1_3 = temp_fv1_2 * temp_fv1_2;
    temp_fv0 = (s32) temp_fv1_3;
    *arg5 = (s16) (s32) ((temp_fv1_3 - (f64) (f32) (s16) temp_fv0) * D_8007A3E8);
    return (s16) temp_fv0;
}

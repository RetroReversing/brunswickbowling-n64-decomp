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

f64 func_80057AC0();                   /* extern */
s32 func_80057D70(u32, M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */
extern f64 D_80079E10;
extern f64 D_80079E18;
extern f64 D_80079E20;
extern f64 D_80079E28;

s32 func_80057BA0(f64 arg0) {
    f64 temp_fv0;
    f64 temp_fv0_2;
    f64 var_fs0;
    s32 temp_a2;
    s32 var_s0;
    s32 var_s1;
    s32 var_v1;
    s32 var_v1_2;
    u32 temp_s0;

    if (arg0 < 0.0) {
        return 0;
    }
    temp_fv0 = arg0 * D_80079E10;
    if (D_80079E18 <= temp_fv0) {
        var_s1 = (s32) (temp_fv0 - D_80079E18) | 0x80000000;
    } else {
        var_s1 = (s32) temp_fv0;
    }
    temp_s0 = var_s1 << 0;
    if (func_80057D70(temp_s0, 0, 0, 0) > 0) {
        var_fs0 = arg0 - func_80057AC0(temp_s0, 0);
    } else {
        temp_a2 = temp_s0 << 0x1F;
        var_fs0 = arg0 - (2.0 * func_80057AC0((temp_s0 & 0) | (temp_s0 >> 1), (0 & 1) | ((0U >> 1) | temp_a2), temp_a2));
    }
    if (var_fs0 < 0.0) {
        temp_fv0_2 = -var_fs0;
        if (D_80079E20 <= temp_fv0_2) {
            var_v1 = (s32) (temp_fv0_2 - D_80079E20) | 0x80000000;
        } else {
            var_v1 = (s32) temp_fv0_2;
        }
        var_s0 = (temp_s0 - 0) - ((u32) var_v1 > 0U);
    } else {
        if (D_80079E28 <= var_fs0) {
            var_v1_2 = (s32) (var_fs0 - D_80079E28) | 0x80000000;
        } else {
            var_v1_2 = (s32) var_fs0;
        }
        var_s0 = temp_s0 + ((u32) var_v1_2 < (u32) var_v1_2);
    }
    return var_s0;
}

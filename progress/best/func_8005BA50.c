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

extern s32 D_800A5A54;
extern s32 D_800A5A5C;

s32 func_8005BA50(s32 arg0, s16 arg1) {
    s32 var_a2;
    s32 var_a3;
    void *var_v1;

    if (arg0 == 0) {
        return 0;
    }
    var_a3 = 0;
    var_a2 = 0;
    if (D_800A5A54 > 0) {
        var_v1 = D_800A5A5C + 0xBE;
        __repair_rows: {
            if (M2C_FIELD(var_v1, s32 *, -0x7A) == arg0) {
                var_a2 += 1;
                M2C_FIELD(var_v1, s16 *, -0xE) = arg1;
                M2C_FIELD(var_v1, s8 *, 0) = 0xFF;
            }
            var_a3 += 1;
            var_v1 += 0x13C;
        }
if (var_a3 < D_800A5A54) goto __repair_rows;
    }
    return var_a2;
}

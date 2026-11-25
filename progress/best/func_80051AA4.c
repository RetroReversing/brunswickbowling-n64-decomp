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

extern s32 D_8009CC60;
extern M2C_UNK D_8009DB28;
extern u32 D_8009DB58;

void func_80051AA4(s32 arg0, s32 arg1) {
    M2C_UNK *var_s0;
    s32 temp_v1;
    u32 var_s1;

    temp_v1 = D_8009CC60;
    var_s1 = 0;
    if (D_8009DB58 != 0) {
        var_s0 = &D_8009DB28;
        __repair_rows: {
            if ((M2C_FIELD(var_s0, u16 *, 6) == arg0) && (M2C_FIELD(var_s0, u16 *, 4) == arg1)) {
                D_8009CC60 = temp_v1;
                M2C_FIELD(var_s0, M2C_UNK (**)(u32), 0)(var_s1);
            }
            var_s1 += 1;
            var_s0 += 8;
        }
if (var_s1 < (u32) D_8009DB58) goto __repair_rows;
    }
    D_8009CC60 = temp_v1;
}

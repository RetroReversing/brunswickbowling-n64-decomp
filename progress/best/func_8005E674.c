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

s32 func_8005DA04(s32, u8, s16, s16, s32);          /* extern */
extern s32 D_800A5A54;
extern s32 D_800A5A5C;

void *func_8005E674(void *arg0, void *arg1) {
    s32 temp_a1;
    s32 temp_v0;
    s32 var_a0;
    u8 var_a1;
    void *var_s1;
    void *var_v1;

    var_a1 = M2C_FIELD(arg1, u8 *, 0);
    var_s1 = arg1 + 1;
    if ((s32) var_a1 >= 0x80) {
        var_s1 += 1;
        var_a1 = ((var_a1 & 0x7F) << 8) + M2C_FIELD(arg1, u8 *, 1);
    }
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x48) + 1;
    M2C_FIELD(arg0, s32 *, 0x48) = temp_v0;
    temp_a1 = func_8005DA04(M2C_FIELD(arg0, s32 *, 0x78), var_a1, M2C_FIELD(arg0, s16 *, 0x9E), M2C_FIELD(arg0, s16 *, 0xB0), temp_v0);
    M2C_FIELD(arg0, s32 *, 0x48) = (s32) (M2C_FIELD(arg0, s32 *, 0x48) - 1);
    if (temp_a1 != 0) {
        var_a0 = 0;
        if (D_800A5A54 > 0) {
            var_v1 = D_800A5A5C + 0x7C;
            __repair_rows: {
                var_a0 += 1;
                if (M2C_FIELD(var_v1, s32 *, -0x38) == temp_a1) {
                    M2C_FIELD(var_v1, s32 *, -0x38) = (s32) M2C_FIELD(arg0, s32 *, 0x44);
                    M2C_FIELD(var_v1, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0x7C);
                }
                var_v1 += 0x13C;
            }
if (var_a0 < D_800A5A54) goto __repair_rows;
        }
    }
    return var_s1;
}

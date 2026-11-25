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

extern s32 D_800A385C;
extern s32 D_800A3860;
extern s32 D_800A3868;
extern s32 D_800A3870;
extern s32 D_800A3874;

s32 func_80054574(s32 arg0, u32 arg1, s32 arg2) {
    s32 temp_a1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_v0;

    if (arg0 != 0) {
        if (arg2 == 0) {
            if (arg1 > 0x15DBFU) {
                var_v0 = arg0 + 7;
                goto block_7;
            }
            /* Duplicate return node #5. Try simplifying control flow for better match */
            return 1;
        }
        if (arg1 <= 0xDDBFU) {
            /* Duplicate return node #5. Try simplifying control flow for better match */
            return 1;
        }
        var_v0 = arg0 + 7;
block_7:
        temp_a1 = var_v0 & ~7;
        D_800A3868 = temp_a1;
        if (arg2 != 0) {
            temp_v1 = (temp_a1 + 0x8007) & ~7;
            D_800A3870 = temp_v1;
            D_800A3874 = temp_v1;
        } else {
            temp_v0 = (temp_a1 + 0x8007) & ~7;
            D_800A385C = temp_v0;
            D_800A3860 = 0;
            temp_v0_2 = (temp_v0 + 0x8007) & ~7;
            D_800A3870 = temp_v0_2;
            D_800A3874 = temp_v0_2;
        }
        return 0;
    }
    return 1;
}

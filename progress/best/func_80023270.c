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

M2C_UNK func_800231E0(void *, s32);                 /* extern */
s32 func_80057660(s32);                             /* extern */
extern s32 D_8008E9E0;

s32 func_80023270(void *arg0) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v1;
    s32 var_s2;
    s32 var_v1;

    if (M2C_FIELD(arg0, s32 *, 0x18) != 0) {
        temp_v1 = M2C_FIELD(arg0, s32 *, 0x24);
        if (temp_v1 != 0) {
            var_s2 = (s32) (D_8008E9E0 - temp_v1) >> 2;
            if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
                var_s2 = -var_s2;
            }
            temp_s1 = M2C_FIELD(arg0, s16 *, 0x14) - M2C_FIELD(arg0, s16 *, 0x20);
            if (temp_s1 == 0) {
                M2C_FIELD(arg0, s32 *, 0x18) = 0;
            } else {
                temp_s0 = func_80057660(var_s2);
                var_v1 = var_s2;
                if (temp_s0 >= func_80057660(temp_s1)) {
                    var_v1 = -temp_s1;
                }
                func_800231E0(arg0, M2C_FIELD(arg0, s16 *, 0x14) + var_v1);
            }
        }
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) D_8008E9E0;
    }
    return 1;
}

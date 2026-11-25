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

s32 func_80057660(s32);                             /* extern */
extern s32 D_8008E9E0;

s32 func_8002D830(void *arg0) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v1;
    s32 var_a0;
    s32 var_s2;

    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        return 1;
    }
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x20);
    if (temp_v1 != 0) {
        temp_s1 = (s32) (D_8008E9E0 - temp_v1) >> 2;
        if (temp_s1 == 0) {
            var_s2 = 1;
        }
        if (M2C_FIELD(arg0, s32 *, 0x18) == 0) {
            var_s2 = -var_s2;
        }
        temp_s1 = M2C_FIELD(arg0, s16 *, 0x24) - M2C_FIELD(arg0, s16 *, 0x1C);
        if (temp_s1 != 0) {
            temp_s0 = func_80057660(var_s2);
            do { var_a0 = var_s2; } while (0);
            if (temp_s0 >= func_80057660(temp_s1)) {
                do { do { var_a0 = -temp_s1; } while (0); } while (0);
            }
            M2C_FIELD(arg0, s16 *, 0x24) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x24) + var_a0);
        } else {
            M2C_FIELD(arg0, s32 *, 0x14) = 0;
        }
    }
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) D_8008E9E0;
    return 1;
}

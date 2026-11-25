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

extern char D_8007F618[];
extern u8 D_80081A08;

void func_800307D4(void *arg0, s32 arg1, u16 *arg2, void **arg3, u16 *arg4, u16 *arg5, u16 *arg6, u16 *arg7, u16 *arg8, u16 *arg9, s32 *arg10, s32 *arg11) {
    s32 temp_v1;
    s32 var_v0;
    u16 temp_v0;
    void *temp_a0;
    void *temp_v1_2;

    *arg2 = 0;
    temp_v1 = arg1 & 0xFF;
    if (D_80081A08 != temp_v1) {
        do {
            temp_v0 = *arg2 + 1;
            *arg2 = temp_v0;
        } while ((&D_80081A08)[(s16) temp_v0] != temp_v1);
    }
    temp_v1_2 = ((arg1 & 0xFF) * 0x5C) + D_8007F618;
    *arg3 = temp_v1_2;
    *arg9 = M2C_FIELD(temp_v1_2, u16 *, 0x38);
    *arg11 = M2C_FIELD(temp_v1_2, s32 *, 0x28);
    *arg10 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x44) >= 4) {
        var_v0 = 4;
    } else {
        var_v0 = (M2C_FIELD(arg0, s32 *, 0x78) * 2) + 5;
    }
    if ((s16) *arg2 == var_v0) {
        *arg10 = 1;
    }
    *arg8 = -1U;
    *arg7 = -1U;
    *arg6 = -1U;
    *arg5 = -1U;
    temp_a0 = ((arg1 & 0xFF) * 0x5C) + D_8007F618;
    *arg4 = M2C_FIELD(temp_a0, u16 *, 0x30);
    if (M2C_FIELD(arg0, s32 *, 0x44) != 1) {
        *arg5 = M2C_FIELD(temp_a0, u16 *, 0x32);
        if (M2C_FIELD(arg0, s32 *, 0x44) != 2) {
            *arg6 = M2C_FIELD(temp_a0, u16 *, 0x34);
            if (M2C_FIELD(arg0, s32 *, 0x44) != 3) {
                *arg7 = M2C_FIELD(temp_a0, u16 *, 0x36);
                *arg8 = M2C_FIELD(temp_a0, u16 *, 0x3C);
            }
        }
    }
}

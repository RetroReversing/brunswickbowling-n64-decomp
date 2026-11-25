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

s32 func_8003707C(void *, M2C_UNK);                 /* extern */
s32 func_8004CAD8(s32);                             /* extern */
M2C_UNK func_800580A0(s32, M2C_UNK, s32);           /* extern */

s32 func_80037110(void *arg0, s16 arg1) {
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a0;

    temp_s0 = arg1 & 0xFFFF;
    M2C_FIELD(arg0, s16 *, 6) = 0;
    if (temp_s0 != 0) {
        temp_v1 = func_8003707C(arg0, 0x18) & 0xFFFF;
        switch (temp_v1) {                          /* irregular */
        case 0:
            var_a0 = temp_s0 * 4;
            M2C_FIELD(arg0, s32 *, 0x3C) = func_8004CAD8(temp_s0 << 5);
block_8:
            M2C_FIELD(arg0, s32 *, 8) = func_8004CAD8(var_a0);
            break;
        case 1:
            temp_s2 = temp_s0 << 9;
            temp_v0 = func_8004CAD8(temp_s2);
            M2C_FIELD(arg0, s32 *, 0x3C) = temp_v0;
            if (temp_v0 != 0) {
                func_800580A0(temp_v0, 0, temp_s2);
            }
            var_a0 = temp_s0 * 4;
            goto block_8;
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x3C) = 0;
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
    M2C_FIELD(arg0, s16 *, 4) = arg1;
    return M2C_FIELD(arg0, s32 *, 0x3C);
}

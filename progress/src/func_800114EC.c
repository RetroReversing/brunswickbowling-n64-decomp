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

s32 func_800114EC(void *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_a1;
    s32 var_a2;

    var_a2 = 0;
    var_a1 = arg1 - 1;
for (;;)
{
    if (var_a1 >= 0) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 4) - 1;
        M2C_FIELD(arg0, s32 *, 4) = temp_v0;
        if (temp_v0 < 0) {
            M2C_FIELD(arg0, s32 *, 4) = 7;
            M2C_FIELD(arg0, u8 **, 0) = (u8 *) (M2C_FIELD(arg0, u8 **, 0) + 1);
        }
        var_a2 |= (((s32) *M2C_FIELD(arg0, u8 **, 0) >> M2C_FIELD(arg0, s32 *, 4)) & 1) << var_a1;
        var_a1 -= 1;
        continue;
    }
break;
}
    return var_a2;
}

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

M2C_UNK func_8002FFC0(void *);                      /* extern */
s32 func_800315E0(void *);                          /* extern */
M2C_UNK func_80031B08(void *);                      /* extern */

void func_80031F58(void *arg0) {
    s32 var_v1;

for (;;)
{
    var_v1 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x44) == 9) {
        var_v1 = func_800315E0(arg0) != 0;
    }
    if (var_v1 == 0) {
        if (func_800315E0(arg0) != 0) {
            func_8002FFC0(arg0);
        } else {
            func_80031B08(arg0);
        }
        continue;
    }
break;
}
}

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
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

void func_80050C80(s32 *arg0) {
    char *var_v1;
    s32 temp_a2;
    s32 var_a1;

    temp_a2 = *arg0;
    var_a1 = 0;
    if (temp_a2 > 0) {
        var_v1 = arg0;
        do {
            s32 temp;
            temp = (s32)(*(void **)((s8 *)var_v1 + 4));
            var_a1 += 1;
            (*(void **)((s8 *)var_v1 + 4)) = (void *) (temp + (s32)arg0);
            var_v1 += 4;
        } while (var_a1 < temp_a2);
    }
}

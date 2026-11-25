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

s32 func_80050DE8();
extern char D_80078EF8[];

void func_8003E740(void *arg0) {
    s32 *temp_v1;
    char *var_s1;
    s32 temp_a0;
    s32 var_s0;
    s32 var_s2;

    temp_v1 = M2C_FIELD(arg0, s32 **, 4);
    if (temp_v1 != NULL) {
        if (temp_v1 == (arg0 + 0xC)) {
            var_s2 = 7;
        } else if (temp_v1 == (arg0 + 0x28)) {
            var_s2 = 3;
        } else if (temp_v1 == (arg0 + 0x34)) {
            var_s2 = 9;
        } else if (temp_v1 == (arg0 + 0x58)) {
            var_s2 = 5;
        }
        var_s1 = M2C_FIELD(arg0, s32 **, 4);
        var_s0 = 0;
        if (var_s2 > 0) {
            do {
                temp_a0 = *(s32 *)var_s1;
                var_s1 += 4;
                var_s0 += 1;
                func_80050DE8(temp_a0, D_80078EF8);
            } while (var_s0 < var_s2);
        }
        M2C_FIELD(arg0, s32 **, 4) = NULL;
        M2C_FIELD(arg0, s32 *, 0) = 0;
    }
}

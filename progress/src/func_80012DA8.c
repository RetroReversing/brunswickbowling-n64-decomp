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

M2C_UNK func_8002E870(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_80012DA8(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_a0;
    s32 var_s1;
    void *var_s0;

    var_s1 = 0;
    var_s0 = arg0;
    do {
        temp_a0 = M2C_FIELD(var_s0, s32 *, 0x48);
        if (temp_a0 != 0) {
            func_8002E870(temp_a0, arg1, arg2);
        }
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 3);
}

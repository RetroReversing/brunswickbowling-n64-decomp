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

s32 func_8004CDAC(const void *arg0) {
    s32 temp_a0;
    s32 temp_v1;
    s32 var_a2;
    void *var_a1;

    var_a1 = M2C_FIELD(arg0, void **, 4);
    var_a2 = 0;
    if (M2C_FIELD(var_a1, const s32 *, 4) != 0) {
        loop_0: {
            temp_v1 = M2C_FIELD(var_a1, const s32 *, 0);
            do { do { temp_a0 = M2C_FIELD(var_a1, const s32 *, 0xC); } while (0); } while (0);
            var_a1 = M2C_FIELD(var_a1, void **, 4);
            var_a2 += M2C_FIELD(var_a1, const s32 *, 0) - (temp_v1 + temp_a0);
            do { } while (0);
        } if (M2C_FIELD(var_a1, const s32 *, 4) != 0) { goto loop_0; }
    }
    return var_a2;
}

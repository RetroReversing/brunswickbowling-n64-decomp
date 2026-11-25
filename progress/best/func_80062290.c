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

void *func_80062290(void *arg0, M2C_UNK arg1, s32 arg2, M2C_UNK arg3, void *arg4) {
    s32 temp_v1;
    s32 var_s1;
    void **var_s0;
    void *temp_a0;
    void *temp_a2;
    void *temp_v0;
    void *var_a2;

    temp_a2 = arg4 + 8;
    M2C_FIELD(arg4, s32 *, 0) = 0x020006C0;
    temp_v1 = arg2 * 2;
    M2C_FIELD(arg4, s32 *, 4) = temp_v1;
    M2C_FIELD(arg4, s32 *, 8) = 0x02000800;
    M2C_FIELD(temp_a2, s32 *, 4) = temp_v1;
    var_s1 = 0;
    var_a2 = temp_a2 + 8;
    if (M2C_FIELD(arg0, s32 *, 0x14) > 0) {
        var_s0 = M2C_FIELD(arg0, void ***, 0x1C);
        do {
            temp_v0 = *var_s0;
            temp_a0 = *var_s0;
            var_s0 += 4;
            var_s1 += 1;
            var_a2 = M2C_FIELD(temp_v0, void *(**)(void *, M2C_UNK, s32, M2C_UNK, void *), 4)(temp_a0, arg1, arg2, arg3, var_a2);
        } while (var_s1 < M2C_FIELD(arg0, s32 *, 0x14));
    }
    return var_a2;
}

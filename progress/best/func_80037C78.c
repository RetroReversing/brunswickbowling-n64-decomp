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

M2C_UNK func_80037C2C(void *, s16);                 /* extern */
M2C_UNK func_8005B798(M2C_UNK, M2C_UNK);            /* extern */
extern s32 D_8008E9E0;

void func_80037C78(void *arg0) {
    s16 var_s0;
    s32 var_v1;
    void *var_s1;
    void *var_v0;

    var_s0 = 0;
    M2C_FIELD(arg0, s32 *, 0x134) = (s32) D_8008E9E0;
    func_8005B798(3, 1);
    var_s1 = arg0;
    do {
        func_80037C2C(arg0, var_s0);
        M2C_FIELD(var_s1, s32 *, 0xB4) = 0;
        var_s0 += 1;
        var_s1 += 4;
    } while (var_s0 < 0x10);
    var_v1 = 0xB;
    var_v0 = arg0 + 0x2C;
    do {
        M2C_FIELD(var_v0, s32 *, 0x44) = 0;
        var_v1 -= 1;
        var_v0 -= 4;
    } while (var_v1 >= 0);
    M2C_FIELD(arg0, s32 *, 0x138) = 0;
}

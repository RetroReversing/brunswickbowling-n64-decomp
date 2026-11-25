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

void *func_8006C950();                              /* extern */

void __rmonMaskIdleThreadInts(void) {
    s32 var_v0;
    void *var_a0;

    var_a0 = func_8006C950();
    if (M2C_FIELD(var_a0, s32 *, 4) != -1) {
        var_v0 = M2C_FIELD(var_a0, s32 *, 4);
loop_2:
        if (var_v0 == 0) {
            M2C_FIELD(var_a0, s32 *, 0x118) = (s32) ((M2C_FIELD(var_a0, s32 *, 0x118) & 0xFFFF00FE) | 0x6C01);
            return;
        }
        var_a0 = M2C_FIELD(var_a0, void **, 0xC);
        var_v0 = M2C_FIELD(var_a0, s32 *, 4);
        if (var_v0 == -1) {

        } else {
            goto loop_2;
        }
    }
}

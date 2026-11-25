/* Partial candidate from function #408021895465 in project #95; rechecked locally. */
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

void *func_8005F3EC();                              /* extern */
M2C_UNK func_80065630(s32, void *);           /* extern */

void func_8005F380(s32 arg0) {
    s32 var_a0;
    s32 var_s0;
    void *temp_v0;

    var_s0 = arg0;
    temp_v0 = func_8005F3EC();
    if (temp_v0 == NULL) {
        var_a0 = var_s0;
    } else {
        if ((var_s0 & 0xFF000000) == 0xFF000000) {
            var_s0 = (var_s0 & 0xFFFFFF); var_s0 += 0x140000;
        }
        var_a0 = (M2C_FIELD(temp_v0, s32 *, 0x10) + var_s0) - M2C_FIELD(temp_v0, s32 *, 0xC);
    }
    func_80065630(var_a0, temp_v0);
}

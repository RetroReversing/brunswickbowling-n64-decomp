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

M2C_UNK func_8005978C(M2C_UNK *, M2C_UNK *, s32);   /* extern */
s32 func_8005AAD0(M2C_UNK *);                       /* extern */
M2C_UNK func_8005ACC0(void *, M2C_UNK *, s32);      /* extern */
extern M2C_UNK D_80076030;

void func_80024EE0(s32 arg0, s8 *arg1) {
    M2C_UNK sp10;
    M2C_UNK *var_s3;
    s32 temp_s4;
    s32 temp_s5;
    s32 temp_v0;
    s32 var_s0;
    s32 var_s2;
    s8 *var_s1;
    void *var_s1_2;

    var_s1 = arg1;
    var_s3 = &sp10;
    func_8005978C(var_s3, &D_80076030, arg0);
    temp_v0 = func_8005AAD0(var_s3);
    var_s2 = 0;
    temp_s5 = ((temp_v0 - 1) / 3) + 1;
    temp_s4 = (temp_v0 - 1) % 3;
loop_1:
    if (var_s2 < temp_s5) {
        if (var_s2 != 0) {
            *var_s1 = 0x2C;
            var_s1_2 = var_s1 + 1;
            var_s0 = 3;
        } else {
            *var_s1 = 0x24;
            var_s1_2 = var_s1 + 1;
            var_s0 = temp_s4 + 1;
        }
        func_8005ACC0(var_s1_2, var_s3, var_s0);
        var_s1 = var_s1_2 + var_s0;
        var_s3 += var_s0;
        var_s2 += 1;
        goto loop_1;
    }
    *var_s1 = 0;
}

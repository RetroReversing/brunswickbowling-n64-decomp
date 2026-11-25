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

M2C_UNK func_80025484(s32 *, s16, s16, s32 *);      /* extern */
extern s32 D_80082780;

void func_800137B0(void *arg0, s32 *arg1, s16 arg2, s16 arg3, s32 *arg4) {
    s32 *var_a0;
    s32 *var_a3;

    M2C_FIELD(arg0, s32 **, 0x20) = arg1;
    M2C_FIELD(arg0, s16 *, 0x24) = arg2;
    M2C_FIELD(arg0, s16 *, 0x26) = arg3;
    M2C_FIELD(arg0, s32 **, 0x28) = arg4;
    var_a0 = arg1;
    if (D_80082780 == arg0) {
        if ((var_a0 == NULL) || (var_a3 = arg4, (*var_a0 == 0))) {
            var_a0 = NULL;
            var_a3 = NULL;
        }
        func_80025484(var_a0, M2C_FIELD(arg0, s16 *, 0x24), M2C_FIELD(arg0, s16 *, 0x26), var_a3);
    }
}

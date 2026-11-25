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

M2C_UNK func_8003E500(M2C_UNK *, s32);              /* extern */
extern s32 D_80081D04;
extern M2C_UNK D_80083AF0;

void func_80013BB0(void *arg0, s32 arg1) {
    s32 var_a1;

    if (arg1 != 0) {
        var_a1 = M2C_FIELD(arg0, s32 *, 0x1C);
        if (var_a1 == -1) {
            var_a1 = D_80081D04;
        }
        func_8003E500(&D_80083AF0, var_a1);
    }
}

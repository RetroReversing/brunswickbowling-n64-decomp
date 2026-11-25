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

extern M2C_UNK D_80083950;
extern M2C_UNK D_8008AAA0;
extern s32 D_80092788;

void func_800192F4(void *arg0) {
    M2C_UNK *sp0;
    M2C_UNK *sp8;
    M2C_UNK *temp_a1;
    M2C_UNK *var_v0;
    s32 var_a0;

    temp_a1 = arg0 + 8;
    D_80092788 = 1;
    M2C_FIELD(&D_8008AAA0, s16 *, 0x24) = 0xF0;
    M2C_FIELD(&D_8008AAA0, s32 *, 0x14) = 0;
    var_v0 = M2C_FIELD(arg0, M2C_UNK **, 8);
    var_a0 = 1;
loop_1:
    sp0 = var_v0;
    sp8 = temp_a1;
    if (sp0 != temp_a1) {
        if (sp0 != &D_80083950) {
            var_v0 = *sp0;
            sp8 = sp0;
            goto loop_1;
        }
    } else {
        var_a0 = 0;
    }
    if (var_a0 != 0) {
        M2C_FIELD(M2C_FIELD(&D_80083950, void **, 0), void ***, 4) = (void **) M2C_FIELD(&D_80083950, void ***, 4);
        *M2C_FIELD(&D_80083950, void ***, 4) = M2C_FIELD(&D_80083950, void **, 0);
    }
}

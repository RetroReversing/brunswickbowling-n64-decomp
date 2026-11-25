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

s32 func_80039BC4();
extern s32 *D_800898FC;
extern s32 D_80089918;
extern s32 D_8008991C;
extern s32 D_80089920;
extern s32 D_80089924;
extern s32 D_80089928;
extern char D_8008CEB0[];

void func_80025484(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    char *var_s0;
    s32 var_v1;

    D_800898FC = arg0;
    D_80089928 = arg1;
    D_80089924 = arg2;
    D_80089920 = 0x10;
    D_8008991C = 8;
    if (arg0 != NULL) {
        D_80089918 = arg3;
        if (*arg0 != 0) {
            var_s0 = arg0;
            do {
                D_8008991C += 0xC;
                var_v1 = D_80089920;
                if (var_v1 < (func_80039BC4(D_8008CEB0, *(s32 *)var_s0) + 0x10)) {
                    var_v1 = func_80039BC4(D_8008CEB0, *(s32 *)var_s0) + 0x10;
                }
                var_s0 += 4;
                D_80089920 = var_v1;
            } while (*(s32 *)var_s0 != 0);
        }
    }
}

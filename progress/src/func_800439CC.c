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

s32 func_8002AB14();
extern s32 D_8008B3DC;
extern s32 D_8008F2C4;

void func_800439CC(void) {
    char *var_s0;
    s32 var_s1;

    if ((D_8008B3DC ^ 0xE) == 0) {
        var_s1 = 0;
        var_s0 = &D_8008F2C4;
        do {
            *(s32 *)var_s0 = func_8002AB14(6) + 6;
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < 0xA);
    }
}

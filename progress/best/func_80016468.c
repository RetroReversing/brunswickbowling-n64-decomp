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

extern signed char D_80089860;
s32 func_800244FC();
extern u8 D_80082D58;
extern char D_80089830[];

s32 func_80016468(void *arg0, s8 arg1, s32 arg2, s32 arg3) {
    s32 var_v0;
    u8 temp_a0;

    var_v0 = 1;
    if (D_80082D58 == 1) {
        var_v0 = 1;
        if ((arg3 == 0x209) && ((temp_a0 = M2C_FIELD(arg0, u8 *, 0x1E), (temp_a0 == 0)) || (var_v0 = 1, ((arg1 & 0xFF) == temp_a0)))) {
            D_80089860 = arg1;
            func_800244FC(D_80089830, 0, arg1);
            var_v0 = 0;
        }
    }
    return var_v0;
}

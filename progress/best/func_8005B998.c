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

extern s32 D_800A5A54;
extern void *D_800A5A5C;

s32 func_8005B998(s32 arg0) {
    u8 __repair_frame[8];
    s32 var_a1;
    s32 var_a2;
    void *var_v1;

    if (arg0 == 0) {
        return 0;
    }
    var_a2 = 0;
    var_v1 = D_800A5A5C;
    var_a1 = 0;
    if (D_800A5A54 > 0) {
        do {
            var_a2 += 1;
            var_a1 += M2C_FIELD(var_v1, s32 *, 0x44) == arg0;
            var_v1 += 0x13C;
        } while (var_a2 < D_800A5A54);
    }
    return var_a1;
}

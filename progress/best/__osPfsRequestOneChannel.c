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

extern s8 D_800A7760;
extern s32 D_800ADF8C;

void __osPfsRequestOneChannel(s32 arg0, s8 arg1) {
    s8 sp0;
    s8 sp1;
    s8 sp2;
    s8 sp3;
    s8 sp4;
    s8 sp5;
    s32 *var_a2;
    s32 var_a3;

    var_a2 = &D_800ADF8C - 0x3C;
    var_a3 = 0;
    D_800A7760 = 0xFE;
    D_800ADF8C = 1;
    sp0 = 1;
    sp1 = 3;
    sp2 = arg1;
    sp3 = 0xFF;
    sp4 = -1;
    sp5 = -1;
    if (arg0 > 0) {
        do {
            *var_a2 = 0;
            var_a3 += 1;
            var_a2 += 1;
        } while (var_a3 < arg0);
    }
    M2C_FIELD(var_a2, M2C_UNK *, 0) = M2C_UNALIGNED32(sp0);
    M2C_FIELD(var_a2, s8 *, 4) = sp4;
    M2C_FIELD(var_a2, s8 *, 5) = sp5;
    M2C_FIELD(var_a2, s8 *, 6) = 0xFE;
}

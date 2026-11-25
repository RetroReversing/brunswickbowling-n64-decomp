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

extern u32 D_8009DA60;
extern void *D_8009DA70;

void func_80050E30(void) {
    u32 var_a0;
    void *var_v1;

    var_v1 = D_8009DA70;
    var_a0 = 0;
    if (D_8009DA60 != 0) {
        do {
            var_a0 += 1;
            M2C_FIELD(var_v1, s32 *, 0x1C) = 0;
            var_v1 += 0x28;
        } while (var_a0 < (u32) D_8009DA60);
    }
}

/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O1, tried by autopilot */
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

extern s32 D_8007DA44;
extern void *D_80081AD0;

void func_8002E330(void *arg0) {
    s32 var_a1;
    void **var_v1;
    void *var_a0;

    var_a0 = arg0;
    var_a1 = 0;
    var_v1 = &D_80081AD0;
loop_1:
    if (var_a1 < D_8007DA44) {
        if (M2C_FIELD(M2C_FIELD(*var_v1, void **, 0x44), s32 *, 0x114) == 0) {
            M2C_FIELD(var_a0, s8 *, 0x34) = 0;
        }
        var_a0 += 0x18;
        var_v1 += 1;
        var_a1 += 1;
        goto loop_1;
    }
}

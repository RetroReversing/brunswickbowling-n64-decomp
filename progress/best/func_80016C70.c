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

s32 func_80016C70(void) {
    s32 var_s1;
    s32 var_s1_copy;
    void **temp_v1;
    void **var_s0;
    void *temp_v0;

    var_s1 = 0;
    var_s1_copy = var_s1;
    loop_goto_1:
    {
 var_s0 = &D_80081AD0;
    }
    if (0)
    {
        goto loop_goto_1;
    }
loop_1:
    if (var_s1_copy < D_8007DA44) {
        temp_v1 = M2C_FIELD(*var_s0, void ***, 0x44);
        temp_v0 = *temp_v1;
        do { var_s0 += 1; } while (0);
        if (M2C_FIELD(temp_v0, s32 (**)(void *), 0x24)(temp_v1 + M2C_FIELD(temp_v0, s16 *, 0x20)) == 0) {
            return 0;
        }
        var_s1 += 1;
        goto loop_1;
    }
    return 1;
}

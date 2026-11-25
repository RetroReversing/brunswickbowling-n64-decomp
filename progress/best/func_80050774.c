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

s32 func_800504D8();
s32 func_8005AB60();
extern u32 D_8009DA60;
extern s32 D_8009DA68;
extern s32 D_8009DA70;
extern s32 D_8009DA74;
extern char D_B0287D00[];

s32 func_80050774(s32 arg0, s32 *arg1) {
    s32 var_s1;
    u32 var_s2;
    void *var_s0;

    var_s1 = D_8009DA70;
    var_s2 = 0;
    if (D_8009DA60 != 0) {
        var_s0 = var_s1 + 0x18;
loop_2:
        if (M2C_FIELD(var_s0, s32 *, -8) != *arg1) {
            var_s2 += 1;
            goto block_9;
        }
        var_s2 += 1;
        if (func_8005AB60(arg0, var_s1, 0x10) == 0) {
            D_8009DA74 = var_s1;
            if (M2C_FIELD(var_s0, s32 *, 8) & 7) {
                func_800504D8(M2C_FIELD(var_s0, s32 *, -4) + D_B0287D00, &D_8009DA68, 4);
                M2C_FIELD(var_s0, s32 *, 0) = (s32) D_8009DA68;
            }
            return var_s1;
        }
block_9:
        var_s0 += 0x28;
        var_s1 += 0x28;
        if (var_s2 >= (u32) D_8009DA60) {
            goto block_10;
        }
        goto loop_2;
    }
block_10:
    return 0;
}

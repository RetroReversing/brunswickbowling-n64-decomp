/* Partial candidate from function #408021895380 in project #95; rechecked locally. */
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

extern s32 D_800FD884;
extern s8 D_800FD88C;

s32 func_8005BED8(s32 arg0) {
    u8 __repair_frame[8];
    s32 var_a1;
    void *var_v0;
    void *var_v1;

    if (arg0 != 0) {
        var_a1 = 0;
        if (D_800FD884 > 0) {
            var_v1 = D_800FD88C + 0x78;
            while (M2C_FIELD(var_v1, s32 *, -0x34) != arg0) {/*__repair_loop_weight*/do {do {do {
                var_a1 += 1;} while (0);} while (0);} while (0);
                var_v1 += 0x13C;
                if (var_a1 >= D_800FD884) {
                    goto block_10;
                }
            }
            var_v0 = M2C_FIELD(var_v1, void **, -4);
            if (var_v0 == NULL) {
                var_v0 = M2C_FIELD(var_v1, void **, 0);
            }
            return M2C_FIELD(var_v0, s32 *, 8);
        }
    }
block_10:
    return 0;
}

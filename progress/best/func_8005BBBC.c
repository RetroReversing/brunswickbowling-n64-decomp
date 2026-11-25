/* Partial candidate from function #408021895362 in project #95; rechecked locally. */
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
extern s32 D_800FD88C;

s32 func_8005BBBC(s32 arg0, s32 arg1) {
    u8 __repair_frame[8];
    s32 var_a2;
    s32 var_a3;
    s32 var_a1;
    void *var_v1;

    var_a1 = arg1;
    if (arg0 == 0) {
        return 0;
    }
    if (var_a1 < 0) {
        var_a1 = 0;
    } else if (var_a1 >= 0x80) {
        var_a1 = 0x7F;
    }
    var_a3 = 0;
    var_a2 = 0;
    if (D_800FD884 > 0) {
        var_v1 = D_800FD88C + 0xCC;
        __repair_rows: {
            if (M2C_FIELD(var_v1, s32 *, -0x88) == arg0) {/*__repair_loop_weight*/do {
                var_a2 += 1;} while (0);
                M2C_FIELD(var_v1, s8 *, -1) = var_a1;
                M2C_FIELD(var_v1, s8 *, 0) = 0xFF;
            }
            var_a3 += 1;
            var_v1 += 0x13C;
        }
if (var_a3 < D_800FD884) goto __repair_rows;
    }
    return var_a2;
}

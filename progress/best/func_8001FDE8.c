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

s32 func_8001FDE8(void *arg0) {
    s32 temp_v1;
    s16 var_v0;
    s32 var_a1;
    void *var_a0;
    int temp;

    var_a0 = arg0;
    if (M2C_FIELD(var_a0, s32 *, 0x2C) != 0) {
        /*__repair_loop_weight*/do { do { do { var_a1 = 0; } while (0); } while (0); } while (0);
        if (M2C_FIELD(var_a0, s32 *, 0x24) == M2C_FIELD(var_a0, s32 *, 0x28)) {
            M2C_FIELD(var_a0, s32 *, 0x2C) = 0;
        } else {
            loop_0: {
                do
                {
                  temp_v1 = M2C_FIELD(var_a0, s16 *, 0x24);
                }
                while (0);
                temp = temp_v1 + 0x14;
                var_v0 = temp;
                if ((M2C_FIELD(var_a0, s16 *, 0x28) - temp_v1) <= 0) {
                    var_v0 = temp_v1 - 0x14;
                }
                M2C_FIELD(var_a0, s16 *, 0x24) = var_v0;
                do { do { do { var_a1 += 1; } while (0); } while (0); } while (0);
                do { var_a0 += 2; } while (0);
            } if (var_a1 < 2) { goto loop_0; }
        }
    }
    return 1;
}

/* Partial candidate from function #137438953694 in project #32; rechecked locally. */
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

s32 func_8005677C();
extern s32 D_8006DE28;
extern char D_80084B40[];
extern char D_800FA530[];

void func_80054A50(void) {
    s32 *var_a2;
    char *var_v1;
    s32 temp_a3;
    s32 temp_t2;
    s32 temp_t3;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a1;
    s32 var_t0;
    s32 var_v0;
    s32 var_v1_2;
    void *temp_a2;
    void *temp_a2_2;
    void *var_t1;

    temp_t3 = func_8005677C() & 0xFF;
    var_a2 = D_800FA530;
    var_t1 = D_80084B40 + 0xC0;
    do {
        M2C_FIELD(var_t1, s32 *, 0) = -1;
        M2C_FIELD(var_t1, s32 *, 8) = 0;
        temp_a3 = M2C_FIELD(var_a2, s32 *, 0);
        temp_a2 = var_a2 + 4;
        temp_t2 = M2C_FIELD(var_a2, s32 *, 4);
        temp_a2_2 = temp_a2 + 4;
        var_t0 = M2C_FIELD(temp_a2, s32 *, 4);
        var_a1 = M2C_FIELD(temp_a2_2, s32 *, 4);
        var_a2 = temp_a2_2 + 4 + 4;
        if ((var_t0 | var_a1) & 2) {
            var_v1 = &D_8006DE28;
            var_a0 = 0x1000;
            for (;;) {
                temp_v0 = *(s32 *)var_v1;
                if (temp_v0 != (temp_a3 & 0x01FFE000)) {
                    var_v1 += 4;
                    if (!(temp_v0 & 0x80000000)) {
                        var_a0 *= 4;
                        continue;
                    }
                    var_a0 = 0;
                }
                break;
            }
            if (var_a0 != 0) {
                if ((var_t0 & var_a1 & 3) != 3) {
                    var_v0 = var_a1 & 3;
                    if ((var_t0 & 3) == 2) {
                        if ((temp_t2 & 0xFF) != temp_t3) {
                            var_t0 &= ~2;
                        }
                        var_v0 = var_a1 & 3;
                    }
                    if (var_v0 == 2) {
                        if ((temp_t2 & 0xFF) != temp_t3) {
                            var_a1 &= ~2;
                        }
                    }
                }
                temp_t2 = temp_t2 & ~0x1FFF;
                if (var_t0 & var_a1 & 2) {
                    var_a0 *= 2;
                } else if (var_a1 & 2) {
                    temp_t2 += var_a0;
                }
                M2C_FIELD(var_t1, s32 *, 0) = temp_t2;
                M2C_FIELD(var_t1, s32 *, 4) = (s32) ((temp_t2 + var_a0) - 1);
                M2C_FIELD(var_t1, s32 *, 8) = 3;
            }
        }
        var_t1 += 0xC;
    } while ((u32) var_t1 < (u32) (D_80084B40 + 0x240));
}

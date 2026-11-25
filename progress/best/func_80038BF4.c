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

extern u16 D_8009C0D0;
extern s32 D_8009C0D4;

s32 func_80038BF4(void *arg0, void *arg1, s32 arg2, s32 *arg3, s32 *arg4) {
    f32 temp_fv0;
    f32 temp_fv0_2;
    s32 temp_t2;
    s32 temp_t3;
    s32 temp_v0;
    s32 temp_v0_4;
    s32 temp_v1_2;
    s32 var_a2;
    s32 var_t0;
    s32 var_t0_2;
    s32 var_t2;
    s32 var_t3;
    u16 temp_a0;
    u16 temp_t1;
    u16 temp_t4;
    u16 temp_v0_5;
    u16 var_t1;
    u32 temp_a1;
    u32 var_a1_2;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_6;
    void *temp_v1;
    void *var_a0;
    void *var_a0_2;
    void *var_a1;

    *arg3 = 0;
    *arg4 = 0;
    if ((s32) D_8009C0D0 < (M2C_FIELD(M2C_FIELD(arg0, void **, 0x3C), s16 *, 8) - 2)) {
        var_t2 = D_8009C0D4;
        var_t0 = 0;
        var_a0 = var_t2 + 0x20;
        do {
            var_t1 = *(u16 *)var_t2;
            var_t2 += 2;
            var_t3 = 0;
loop_3:
            temp_a1 = ((var_t0 * 8) + var_t3) & 0xFFFF;
            temp_v0 = var_t1 & 1;
            if (temp_a1 < (u32) M2C_FIELD(arg0, u32 *, 0x14)) {
                if (temp_v0 != 0) {
                    temp_v0_2 = (temp_a1 * 0xA * 0x10) + arg2;
                    M2C_FIELD(temp_v0_2, f32 *, 0x40) = (f32) M2C_FIELD(var_a0, f32 *, 0);
                    M2C_FIELD(temp_v0_2, f32 *, 0x44) = (f32) M2C_FIELD(var_a0, f32 *, 4);
                    temp_fv0 = M2C_FIELD(var_a0, f32 *, 8);
                    var_a0 += 0xC;
                    M2C_FIELD(temp_v0_2, s32 *, 0x4C) = 1;
                    M2C_FIELD(temp_v0_2, f32 *, 0x48) = temp_fv0;
                    *arg4 = 1;
                }
                if (var_t1 & 2) {
                    temp_v0_3 = (temp_a1 * 0xA * 0x10) + arg2;
                    M2C_FIELD(temp_v0_3, f32 *, 0x30) = (f32) M2C_FIELD(var_a0, f32 *, 0);
                    M2C_FIELD(temp_v0_3, f32 *, 0x34) = (f32) M2C_FIELD(var_a0, f32 *, 4);
                    temp_fv0_2 = M2C_FIELD(var_a0, f32 *, 8);
                    var_a0 += 0xC;
                    M2C_FIELD(temp_v0_3, f32 *, 0x38) = temp_fv0_2;
                    *arg4 = 1;
                }
            } else {
                if (temp_v0 != 0) {
                    var_a0 += 0xC;
                }
                if (var_t1 & 2) {
                    var_a0 += 0xC;
                }
            }
            var_t3 += 1;
            var_t1 = (u16) (var_t1 >> 2);
            if (var_t3 < 8) {
                goto loop_3;
            }
            var_t0 += 1;
        } while (var_t0 < 0x10);
        var_a2 = (s32) (var_a0 + 3) & ~3;
loop_15:
        temp_t1 = M2C_FIELD(var_a2, u16 *, 0);
        temp_t4 = M2C_FIELD(var_a2, u16 *, 2);
        temp_v0_4 = temp_t1 & 0xFFFF;
        temp_t2 = var_a2 + 2 + 2;
        if (temp_v0_4 != 0xFFFF) {
            temp_t3 = temp_t4 & 0xFFFF;
            if (temp_t3 != 0xFFFF) {
                var_a2 = temp_t2;
                var_t0_2 = 0;
                if (temp_t3 != 0) {
                    var_a1 = temp_t2 + 4;
                    do {
                        temp_v0_5 = *(u16 *)var_a2;
                        var_a2 += 6;
                        temp_v1 = ((var_t0_2 + temp_v0_4) * 0x10) + arg1;
                        M2C_FIELD(temp_v1, u16 *, 0) = temp_v0_5;
                        var_t0_2 += 1;
                        M2C_FIELD(temp_v1, u16 *, 2) = (u16) M2C_FIELD(var_a1, u16 *, -2);
                        temp_a0 = M2C_FIELD(var_a1, u16 *, 0);
                        var_a1 += 6;
                        M2C_FIELD(temp_v1, u16 *, 6) |= 2;
                        M2C_FIELD(temp_v1, u16 *, 4) = temp_a0;
                        *arg3 = 1;
                    } while (var_t0_2 < temp_t3);
                }
            }
            if ((temp_t1 != 0xFFFF) && ((temp_t4 & 0xFFFF) != 0xFFFF)) {
                goto loop_15;
            }
        }
        D_8009C0D4 = (temp_t2 + 3) & ~3;
        D_8009C0D0 += 1;
    }
    var_a1_2 = 0;
    if (M2C_FIELD(arg0, u32 *, 4) != 0) {
        var_a0_2 = arg1;
        do {
            temp_v1_2 = var_a1_2 * 2;
            if (*(s32 *)(temp_v1_2 + M2C_FIELD(arg0, s32 *, 0x24)) != 0xFFFF) {
                *arg3 = 1;
                temp_v0_6 = (*(s32 *)(temp_v1_2 + M2C_FIELD(arg0, s32 *, 0x24)) * 0x10) + arg1;
                M2C_FIELD(var_a0_2, s32 *, 0) = (s32) M2C_FIELD(temp_v0_6, s32 *, 0);
                M2C_FIELD(var_a0_2, s16 *, 4) = (s16) M2C_FIELD(temp_v0_6, s16 *, 4);
                M2C_FIELD(var_a0_2, u16 *, 6) |= 2;
            }
            var_a1_2 += 1;
            var_a0_2 += 0x10;
        } while (var_a1_2 < (u32) M2C_FIELD(arg0, u32 *, 4));
    }
    return (D_8009C0D0 + 2) < M2C_FIELD(M2C_FIELD(arg0, void **, 0x3C), s16 *, 8);
}

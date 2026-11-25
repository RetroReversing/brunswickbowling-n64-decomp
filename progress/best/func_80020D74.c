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

void *func_800205E0(void *, s32);                   /* extern */
void *func_80020620(void *, s32, s32);              /* extern */
M2C_UNK func_800215AC(void *);                      /* extern */
M2C_UNK func_800580A0(void *, M2C_UNK, M2C_UNK, void *); /* extern */
extern s32 D_8007DA40;

s32 func_80020D74(void *arg0, s32 arg1) {
    s32 temp_a0;
    s32 var_a3;
    s32 var_s1;
    s32 var_t0;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_3;
    u8 temp_a0_2;
    void *temp_s2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *var_a0;
    void *var_a0_2;
    void *var_a0_3;
    void *var_v1_2;
    void *var_v1_4;

    var_t0 = arg0 + 0x20;
    temp_a0 = arg0 + (arg1 * 0x94C);
    var_a3 = temp_a0 + 0x1B3A;
    M2C_FIELD(arg0, s32 *, 0x5484) = arg1;
    M2C_FIELD(arg0, s32 *, 0x5480) = 1;
    if ((var_a3 | var_t0) & 3) {
        do {
            M2C_FIELD(var_t0, M2C_UNK *, 0) = M2C_UNALIGNED32(M2C_FIELD(var_a3, M2C_UNK *, 0));
            M2C_FIELD(var_t0, M2C_UNK *, 4) = M2C_UNALIGNED32(M2C_FIELD(var_a3, M2C_UNK *, 4));
            M2C_FIELD(var_t0, M2C_UNK *, 8) = M2C_UNALIGNED32(M2C_FIELD(var_a3, M2C_UNK *, 8));
            M2C_FIELD(var_t0, M2C_UNK *, 0xC) = M2C_UNALIGNED32(M2C_FIELD(var_a3, M2C_UNK *, 0xC));
            var_a3 += 0x10;
            var_t0 += 0x10;
        } while (var_a3 != (temp_a0 + 0x247A));
        var_a0 = arg0 + 0x12BC;
    } else {
        do {
            M2C_FIELD(var_t0, s32 *, 0) = (s32) M2C_FIELD(var_a3, s32 *, 0);
            M2C_FIELD(var_t0, s32 *, 4) = (s32) M2C_FIELD(var_a3, s32 *, 4);
            M2C_FIELD(var_t0, s32 *, 8) = (s32) M2C_FIELD(var_a3, s32 *, 8);
            M2C_FIELD(var_t0, s32 *, 0xC) = (s32) M2C_FIELD(var_a3, s32 *, 0xC);
            var_a3 += 0x10;
            var_t0 += 0x10;
        } while (var_a3 != (temp_a0 + 0x247A));
        var_a0 = arg0 + 0x12BC;
    }
    M2C_FIELD(var_t0, M2C_UNK *, 0) = M2C_UNALIGNED32(M2C_FIELD(var_a3, M2C_UNK *, 0));
    M2C_FIELD(var_t0, M2C_UNK *, 4) = M2C_UNALIGNED32(M2C_FIELD(var_a3, M2C_UNK *, 4));
    M2C_FIELD(var_t0, M2C_UNK *, 8) = M2C_UNALIGNED32(M2C_FIELD(var_a3, M2C_UNK *, 8));
    M2C_FIELD(arg0, s32 *, 0x167C) = 1;
    func_800580A0(var_a0, 0, 0x1E0, (void *) var_a3);
    if (M2C_FIELD(arg0, u8 *, 0x202) != 0) {
        D_8007DA40 = 1;
    } else {
        D_8007DA40 = 0;
loop_10:
        if (D_8007DA40 < 6) {
            temp_v0 = func_80020620(arg0, arg1, D_8007DA40);
            var_v1 = 0;
            if (M2C_FIELD(temp_v0, u8 *, 0) == 0) {
                var_v1 = M2C_FIELD(temp_v0, u8 *, 1) == 0;
            }
            var_s1 = 0;
            if (var_v1 == 0) {
                temp_s2 = temp_v0 + 0x50;
loop_15:
                if (var_s1 < 0xF) {
                    temp_v0_2 = func_800205E0(arg0, var_s1);
                    temp_a0_2 = M2C_FIELD(temp_v0_2, u8 *, 0);
                    var_v0 = 0;
                    if (temp_a0_2 == 0) {
                        var_v0 = M2C_FIELD(temp_v0_2, u8 *, 1) == 0;
                    }
                    if (var_v0 != 0) {
                        var_a0_2 = temp_v0;
                        var_v1_2 = (D_8007DA40 * 0x50) + arg0 + 0x12BC;
                        if (((s32) var_a0_2 | (s32) var_v1_2) & 3) {
                            do {
                                M2C_FIELD(var_v1_2, M2C_UNK *, 0) = M2C_UNALIGNED32(M2C_FIELD(var_a0_2, M2C_UNK *, 0));
                                M2C_FIELD(var_v1_2, M2C_UNK *, 4) = M2C_UNALIGNED32(M2C_FIELD(var_a0_2, M2C_UNK *, 4));
                                M2C_FIELD(var_v1_2, M2C_UNK *, 8) = M2C_UNALIGNED32(M2C_FIELD(var_a0_2, M2C_UNK *, 8));
                                M2C_FIELD(var_v1_2, M2C_UNK *, 0xC) = M2C_UNALIGNED32(M2C_FIELD(var_a0_2, M2C_UNK *, 0xC));
                                var_a0_2 += 0x10;
                                var_v1_2 += 0x10;
                            } while (var_a0_2 != temp_s2);
                        } else {
                            do {
                                M2C_FIELD(var_v1_2, s32 *, 0) = (s32) M2C_FIELD(var_a0_2, s32 *, 0);
                                M2C_FIELD(var_v1_2, s32 *, 4) = (s32) M2C_FIELD(var_a0_2, s32 *, 4);
                                M2C_FIELD(var_v1_2, s32 *, 8) = (s32) M2C_FIELD(var_a0_2, s32 *, 8);
                                M2C_FIELD(var_v1_2, s32 *, 0xC) = (s32) M2C_FIELD(var_a0_2, s32 *, 0xC);
                                var_a0_2 += 0x10;
                                var_v1_2 += 0x10;
                            } while (var_a0_2 != temp_s2);
                        }
                    } else {
                        var_v1_3 = 0;
                        if (temp_a0_2 == M2C_FIELD(temp_v0, u8 *, 0)) {
                            var_v1_3 = M2C_FIELD(temp_v0_2, u8 *, 1) == M2C_FIELD(temp_v0, u8 *, 1);
                        }
                        var_a0_3 = temp_v0_2;
                        if (var_v1_3 != 0) {
                            var_v1_4 = (D_8007DA40 * 0x50) + arg0 + 0x12BC;
                            temp_v0_3 = var_a0_3 + 0x50;
                            if (((s32) var_a0_3 | (s32) var_v1_4) & 3) {
                                do {
                                    M2C_FIELD(var_v1_4, M2C_UNK *, 0) = M2C_UNALIGNED32(M2C_FIELD(var_a0_3, M2C_UNK *, 0));
                                    M2C_FIELD(var_v1_4, M2C_UNK *, 4) = M2C_UNALIGNED32(M2C_FIELD(var_a0_3, M2C_UNK *, 4));
                                    M2C_FIELD(var_v1_4, M2C_UNK *, 8) = M2C_UNALIGNED32(M2C_FIELD(var_a0_3, M2C_UNK *, 8));
                                    M2C_FIELD(var_v1_4, M2C_UNK *, 0xC) = M2C_UNALIGNED32(M2C_FIELD(var_a0_3, M2C_UNK *, 0xC));
                                    var_a0_3 += 0x10;
                                    var_v1_4 += 0x10;
                                } while (var_a0_3 != temp_v0_3);
                            } else {
                                do {
                                    M2C_FIELD(var_v1_4, s32 *, 0) = (s32) M2C_FIELD(var_a0_3, s32 *, 0);
                                    M2C_FIELD(var_v1_4, s32 *, 4) = (s32) M2C_FIELD(var_a0_3, s32 *, 4);
                                    M2C_FIELD(var_v1_4, s32 *, 8) = (s32) M2C_FIELD(var_a0_3, s32 *, 8);
                                    M2C_FIELD(var_v1_4, s32 *, 0xC) = (s32) M2C_FIELD(var_a0_3, s32 *, 0xC);
                                    var_a0_3 += 0x10;
                                    var_v1_4 += 0x10;
                                } while (var_a0_3 != temp_v0_3);
                            }
                        } else {
                            var_s1 += 1;
                            goto loop_15;
                        }
                    }
                }
                D_8007DA40 += 1;
                goto loop_10;
            }
        }
    }
    M2C_FIELD(arg0, s32 *, 8) = 0;
    func_800215AC(arg0);
    return 0;
}

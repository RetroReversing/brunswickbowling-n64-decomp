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

M2C_UNK func_80045B78();                            /* extern */
M2C_UNK func_80045B98();                            /* extern */
M2C_UNK func_80048690();                            /* extern */
M2C_UNK func_800486EC();                            /* extern */
M2C_UNK func_80049F14(s32, void *, s32, s32, s32, f32, s32, s32); /* extern */
extern s32 D_80095B20;
extern s32 D_80095B28;
extern s16 D_8009C776;
extern s32 D_8009C778;
extern s32 D_8009C77C;
extern M2C_UNK D_8009C780;
extern u16 D_8009C788;
extern void *D_8009CC60;

void func_80048724(void) {
    s32 *var_a0;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s2;
    u16 temp_s6;
    void *temp_t0;
    void *temp_t0_2;
    void *temp_t0_3;
    void *temp_t0_4;
    void *temp_t0_5;
    void *temp_t0_6;
    void *temp_t1;
    void *var_a1;
    void *var_t0;

    if (D_8009C77C != 0) {
        D_8009C77C = 0;
        func_80045B78();
    }
    if (D_80095B20 != 0) {
        func_80045B98();
    }
    func_80048690();
    temp_s6 = D_8009C788;
    if (temp_s6 != 0) {
        var_s0 = 0;
        if (temp_s6 != 0) {
            var_s2 = 0;
            do {
                temp_t1 = D_8009C778 + var_s2;
                temp_v1 = M2C_FIELD(temp_t1, u16 *, 0x50) & 0xF;
                if (temp_v1 != 1) {
                    if (temp_v1 < 2) {
                        if (temp_v1 != 0) {
                            var_s2 += 0x6C;
                        } else {
                            func_80049F14(M2C_FIELD(temp_t1, s32 *, 0x54), temp_t1, M2C_FIELD(temp_t1, s32 *, 0x58), M2C_FIELD(temp_t1, s32 *, 0x5C), M2C_FIELD(temp_t1, s32 *, 0x60), M2C_FIELD(temp_t1, f32 *, 0x64), M2C_FIELD(temp_t1, s32 *, 0x68), (s32) M2C_FIELD(temp_t1, u16 *, 0x50));
                            var_s2 += 0x6C;
                        }
                    } else if (temp_v1 != 2) {
                        if (temp_v1 != 3) {
                            var_s2 += 0x6C;
                        } else {
                            temp_t0 = D_8009CC60 + 8;
                            temp_t0_2 = temp_t0 + 8;
                            M2C_FIELD(D_8009CC60, s32 *, 0) = 0xBC000002;
                            M2C_FIELD(D_8009CC60, s32 *, 4) = 0x80000080;
                            M2C_FIELD(D_8009CC60, s32 *, 8) = 0x03860010;
                            var_a0 = (D_80095B28 * 4) + &D_8009C780;
                            M2C_FIELD(temp_t0, s32 *, 4) = (s32) (*var_a0 + (M2C_FIELD(temp_t1, s32 *, 0x54) * 0x38) + 8);
                            M2C_FIELD(temp_t0, s32 *, 8) = 0x03880010;
                            temp_t0_3 = temp_t0_2 + 8;
                            M2C_FIELD(temp_t0_2, s32 *, 4) = (s32) (*var_a0 + (M2C_FIELD(temp_t1, s32 *, 0x54) * 0x38) + 0x18);
                            M2C_FIELD(temp_t0_2, s32 *, 8) = 0x038A0010;
                            var_t0 = temp_t0_3 + 8;
                            M2C_FIELD(temp_t0_3, s32 *, 4) = (s32) (*var_a0 + (M2C_FIELD(temp_t1, s32 *, 0x54) * 0x38) + 0x28);
                            var_a1 = var_t0;
                            M2C_FIELD(temp_t0_3, s32 *, 8) = 0x038C0010;
                            goto block_18;
                        }
                    } else {
                        temp_t0_4 = D_8009CC60 + 8;
                        temp_t0_5 = temp_t0_4 + 8;
                        M2C_FIELD(D_8009CC60, s32 *, 0) = 0xBC000002;
                        M2C_FIELD(D_8009CC60, s32 *, 4) = 0x80000060;
                        M2C_FIELD(D_8009CC60, s32 *, 8) = 0x03860010;
                        var_a0 = (D_80095B28 * 4) + &D_8009C780;
                        M2C_FIELD(temp_t0_4, s32 *, 4) = (s32) (*var_a0 + (M2C_FIELD(temp_t1, s32 *, 0x54) * 0x38) + 8);
                        M2C_FIELD(temp_t0_4, s32 *, 8) = 0x03880010;
                        var_t0 = temp_t0_5 + 8;
                        M2C_FIELD(temp_t0_5, s32 *, 4) = (s32) (*var_a0 + (M2C_FIELD(temp_t1, s32 *, 0x54) * 0x38) + 0x18);
                        var_a1 = var_t0;
                        M2C_FIELD(temp_t0_5, s32 *, 8) = 0x038A0010;
                        goto block_18;
                    }
                } else {
                    temp_t0_6 = D_8009CC60 + 8;
                    var_t0 = temp_t0_6 + 8;
                    M2C_FIELD(D_8009CC60, s32 *, 0) = 0xBC000002;
                    M2C_FIELD(D_8009CC60, s32 *, 4) = 0x80000040;
                    M2C_FIELD(D_8009CC60, s32 *, 8) = 0x03860010;
                    var_a0 = (D_80095B28 * 4) + &D_8009C780;
                    M2C_FIELD(temp_t0_6, s32 *, 4) = (s32) (*var_a0 + (M2C_FIELD(temp_t1, s32 *, 0x54) * 0x38) + 8);
                    var_a1 = var_t0;
                    M2C_FIELD(temp_t0_6, s32 *, 8) = 0x03880010;
block_18:
                    D_8009CC60 = var_t0 + 8;
                    M2C_FIELD(var_a1, s32 *, 4) = (s32) (*var_a0 + (M2C_FIELD(temp_t1, s32 *, 0x54) * 0x38));
                    var_s2 += 0x6C;
                }
                var_s0 += 1;
            } while (var_s0 < (s32) temp_s6);
        }
        D_8009C788 = 0;
        D_8009C776 = 0;
    }
    func_800486EC();
    D_80095B28 = D_80095B28 == 0;
}

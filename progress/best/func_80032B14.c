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

s32 func_800475E8();
extern s32 D_8007B210;
extern char D_8007B214[];
extern char D_8007BB04[];
extern s32 D_8007C3F4;
extern s32 D_8007C42C;
extern char D_800904A4[];
extern char D_80090C9C[];
extern char D_80092484[];
extern char D_80092550[];

void func_80032B14(void *arg0, u16 arg1) {
    u16 sp10;
    u16 *sp14;
    s32 *var_a0;
    s32 *var_s1;
    char *var_s5;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a1;
    s32 var_s2;
    s32 var_s3;
    u16 var_s4;
    void *temp_s0_2;

    sp10 = arg1;
    temp_v1 = arg1 & 0xFFFF;
    if (temp_v1 != 0) {
        var_s2 = 0;
        if (temp_v1 < D_8007B210) {
            temp_v1_2 = temp_v1 * 2;
            sp14 = temp_v1_2 + D_8007B214;
            var_s5 = &D_8007C42C;
            var_s4 = *(temp_v1_2 + D_8007BB04);
            var_s3 = 0;
            M2C_FIELD(arg0, u16 *, 0x2FC) = (u16) M2C_FIELD(arg0, u16 *, 0x2FA);
loop_3:
            if (var_s2 < 0xB) {
                if (var_s2 < 0xA) {
                    var_a0 = var_s3 + D_800904A4;
                    var_s1 = var_s3 + D_80090C9C;
                } else {
                    var_a0 = D_80092484;
                    var_s1 = D_80092550;
                }
                if ((1 << (0xE - var_s2)) & *sp14) {
                    temp_v0 = var_s4 << 0x10;
                    var_s4 += 1;
                    temp_s0 = (temp_v0 >> 0x10) * 0x48;
                    func_800475E8(var_a0, D_8007C3F4 + temp_s0, 0, sp14);
                    var_a1 = D_8007C3F4 + temp_s0;
                    goto block_12;
                }
                if (var_s2 != 0xA) {
                    temp_s0_2 = arg0 + var_s2;
                    if (temp_v1 < *(s32 *)var_s5) {
                        func_800475E8(var_a0, D_8007C3F4 + (M2C_FIELD(temp_s0_2, u8 *, 0x310) * 0x48), 0, sp14);
                        var_a1 = D_8007C3F4 + (M2C_FIELD(temp_s0_2, u8 *, 0x310) * 0x48);
block_12:
                        func_800475E8(var_s1, var_a1, 1);
                    }
                }
                var_s5 += 4;
                var_s3 += 0xCC;
                var_s2 += 1;
                goto loop_3;
            }
            M2C_FIELD(arg0, u16 *, 0x2FA) = sp10;
        }
    }
}

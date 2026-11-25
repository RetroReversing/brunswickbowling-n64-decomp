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

M2C_UNK func_800475E8(); /* extern */
extern f64 D_80077870;
extern u16 D_8007B214;
extern u16 D_8007BB04;
extern u16 D_8007BB06;
extern s32 D_8007C3F4;
extern M2C_UNK D_800904A4;
extern M2C_UNK D_80090C9C;
extern M2C_UNK D_80091494;
extern M2C_UNK D_80091C8C;
extern M2C_UNK D_80092484;

void func_80032870(void *arg0) {
    M2C_UNK sp10;
    f64 sp40;
    s32 sp50;
    s32 sp54;
    u16 sp5E;
    M2C_UNK *var_s1;
    M2C_UNK *var_s2;
    M2C_UNK *var_s4;
    M2C_UNK *var_s5;
    M2C_UNK *var_v1;
    s32 temp_a0;
    s32 temp_a3_2;
    s32 var_s0;
    s32 var_s7;
    u16 temp_a3;
    u16 temp_v0;
    u16 var_s6;
    void *var_s3;
    void *var_v0;

    var_s5 = &D_80091C8C;
    var_s4 = &D_80091494;
    var_s3 = arg0;
    var_s2 = &D_80090C9C;
    var_s1 = &D_800904A4;
    M2C_FIELD(var_s3, s16 *, 0x2FA) = 1;
    M2C_FIELD(var_s3, s16 *, 0x2FC) = 0;
    var_s6 = D_8007BB04;
    var_s7 = 0;
    sp5E = D_8007B214;
    var_s0 = var_s6 * 0x48;
loop_1:
    if (var_s7 < 0xA) {
        temp_a3 = sp5E;
        temp_v0 = temp_a3 * 2;
        sp5E = temp_v0;
        if (!(temp_v0 & 0x8000)) {
            M2C_FIELD(var_s1, s32 *, 0xA0) = 1;
            M2C_FIELD(var_s2, s32 *, 0xA0) = 1;
            M2C_FIELD(var_s3, s8 *, 0x310) = 0;
            M2C_FIELD(var_s4, s32 *, 0xA0) = 1;
            M2C_FIELD(var_s5, s32 *, 0xA0) = 1;
        } else {
            func_800475E8(var_s1, D_8007C3F4 + var_s0, 0, temp_a3);
            M2C_FIELD(var_s1, s32 *, 0xA0) = 0;
            func_800475E8(var_s2, D_8007C3F4 + var_s0, 1);
            var_v1 = &sp10;
            M2C_FIELD(var_s2, s32 *, 0xA0) = 0;
            var_v0 = var_s0 + D_8007C3F4;
            temp_a0 = var_v0 + 0x40;
            do {
                M2C_FIELD(var_v1, s32 *, 0) = (s32) M2C_FIELD(var_v0, s32 *, 0);
                M2C_FIELD(var_v1, s32 *, 4) = (s32) M2C_FIELD(var_v0, s32 *, 4);
                M2C_FIELD(var_v1, s32 *, 8) = (s32) M2C_FIELD(var_v0, s32 *, 8);
                M2C_FIELD(var_v1, s32 *, 0xC) = (s32) M2C_FIELD(var_v0, s32 *, 0xC);
                var_v0 += 0x10;
                var_v1 += 0x10;
            } while (var_v0 != temp_a0);
            temp_a3_2 = M2C_FIELD(var_v0, s32 *, 0);
            M2C_FIELD(var_v1, s32 *, 0) = temp_a3_2;
            M2C_FIELD(var_v1, s32 *, 4) = (s32) M2C_FIELD(var_v0, s32 *, 4);
            sp50 = 0;
            sp54 = 0;
            sp40 = D_80077870;
            var_s0 += 0x48;
            func_800475E8(var_s4, &sp10, 0, (u16) temp_a3_2);
            M2C_FIELD(var_s4, s32 *, 0xA0) = 0;
            func_800475E8(var_s5, &sp10, 1);
            M2C_FIELD(var_s5, s32 *, 0xA0) = 0;
            M2C_FIELD(var_s3, s8 *, 0x310) = (s8) var_s6;
            var_s6 += 1;
        }
        var_s5 += 0xCC;
        var_s4 += 0xCC;
        var_s3 += 1;
        var_s2 += 0xCC;
        var_s1 += 0xCC;
        var_s7 += 1;
        goto loop_1;
    }
    func_800475E8(&D_80092484, D_8007C3F4 + (D_8007BB06 * 0x48), 1);
}

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

M2C_UNK func_8002EB74(M2C_UNK *, s32, M2C_UNK *, M2C_UNK *, s16 *, s16 *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_80039738(M2C_UNK *, M2C_UNK, M2C_UNK, s16, s32, M2C_UNK *); /* extern */
M2C_UNK func_80044FB0(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_80045050(M2C_UNK *, s32, s16, M2C_UNK, s32, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_8005978C(M2C_UNK *, M2C_UNK *, s32);   /* extern */
extern M2C_UNK D_800760B8;
extern M2C_UNK D_80076518;
extern M2C_UNK D_80076524;
extern M2C_UNK D_80077004;
extern M2C_UNK D_8007F618;
extern M2C_UNK D_8008B060;
extern s32 D_8008B080;
extern M2C_UNK D_8008CEB0;
extern M2C_UNK D_8008CF28;
extern M2C_UNK D_8008ED80;

void func_800260E8(void) {
    M2C_UNK sp30;
    M2C_UNK sp40;
    M2C_UNK sp42;
    s16 sp44;
    s16 sp46;
    M2C_UNK sp48;
    M2C_UNK sp4A;
    s16 *var_s1;
    s16 temp_s0;
    s16 temp_s1_2;
    s16 temp_s3;
    s16 temp_v1_2;
    s32 temp_s0_2;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a1;
    s32 var_s0;
    s32 var_s4;
    s32 var_s5;
    s32 var_v0;
    s32 var_v0_2;
    u16 *var_s6;
    u16 *var_s7;
    u16 temp_s1;
    u16 temp_s2;

    func_80044FB0(&D_8008ED80, 0);
    temp_v0 = D_8008B080 == 4;
    var_s5 = 0;
    if (temp_v0 != 0) {
        var_s5 = -0x68;
    }
    var_a1 = 0;
    if (temp_v0 != 0) {
        var_a1 = 3;
    }
    var_s4 = var_a1;
    temp_v1 = var_s4 * 2;
    var_s7 = temp_v1 + &D_80076524;
    var_s6 = temp_v1 + &D_80076518;
    var_v0 = var_s4 < 6;
loop_5:
    if (var_v0 != 0) {
        temp_s2 = *var_s7;
        temp_s3 = (s16) *var_s7;
        var_s7 += 2;
        temp_s1 = *var_s6;
        temp_s0 = (s16) *var_s6;
        var_s6 += 2;
        temp_s0_2 = temp_s0 + var_s5;
        func_80045050(&D_8008ED80, temp_s0_2, temp_s3, 0, 0xBE, 0xB, 0x58, 0, 0x80, 1, 0);
        func_80045050(&D_8008ED80, temp_s0_2, temp_s3 + 0xC, 0, 0xBE, 0xB, 0x68, 0, 0, 1, 0);
        func_8002EB74(&D_8008B060, var_s4, &sp40, &sp42, &sp44, &sp46, &sp48, &sp4A);
        temp_s1_2 = temp_s1 + (var_s5 + 4);
        var_s4 += 1;
        func_80039738(&D_8008CF28, 0, 0, temp_s1_2, (s32) (s16) (temp_s2 + 1), (sp44 * 0x5C) + &D_8007F618);
        func_80039738(&D_8008CF28, 0, 0, temp_s1_2, (s32) (s16) (temp_s2 + 0xD), (sp46 * 0x5C) + &D_8007F618);
        var_v0 = var_s4 < 6;
        goto loop_5;
    }
    var_s0 = M2C_FIELD(&D_8008B060, s32 *, 0x20) == 4;
    var_s1 = (var_s0 * 2) + &D_80077004;
    var_v0_2 = var_s0 < 3;
loop_8:
    if (var_v0_2 != 0) {
        func_8005978C(&sp30, &D_800760B8, (M2C_FIELD(&D_8008B060, s32 *, 0x20) != 4) + var_s0);
        temp_v1_2 = *var_s1;
        var_s1 += 2;
        var_s0 += 1;
        func_80039738(&D_8008CEB0, 0, 1, (s16) (*((temp_v1_2 * 2) + &D_80076518) + var_s5 + 0x5F), 0x46, &sp30);
        var_v0_2 = var_s0 < 3;
        goto loop_8;
    }
}

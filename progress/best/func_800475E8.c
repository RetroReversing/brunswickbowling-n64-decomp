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

M2C_UNK func_8004B368(f64, f64, M2C_UNK *, f32 *, void *, f32); /* extern */
extern f32 D_80079ACC;
extern f64 D_80079AD0;
extern M2C_UNK D_80079B10;

void func_800475E8(void *arg0, void *arg1, s32 arg2) {
    f64 sp10;
    f64 sp18;
    f64 sp20;
    f64 sp28;
    f64 sp30;
    f64 sp38;
    f64 sp40;
    f64 sp48;
    f64 sp50;
    M2C_UNK sp58;
    f32 sp6C;
    f32 sp80;
    f32 sp98;
    f32 sp9C;
    f32 spA0;
    f32 spA8;
    f32 spAC;
    f32 spB0;
    f32 spB8;
    f32 spBC;
    f32 spC0;
    M2C_UNK *var_v0;
    M2C_UNK *var_v0_2;
    M2C_UNK *var_v1;
    f32 *var_v1_2;
    f32 temp_a3;
    f32 temp_fv0;
    f32 temp_fv0_11;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    f32 temp_fv0_5;
    f32 temp_fv0_6;
    f32 temp_fv0_7;
    f32 temp_fv0_8;
    f32 temp_fv0_9;
    f32 var_fv0;
    f64 temp_fa1;
    f64 temp_ft1;
    f64 temp_fv0_10;
    f64 temp_fv1;
    void *temp_v0;

    var_v1 = &sp58;
    var_v0 = &D_80079B10;
    M2C_FIELD(arg0, void **, 0xB0) = arg1;
    do {
        M2C_FIELD(var_v1, s32 *, 0) = (s32) M2C_FIELD(var_v0, s32 *, 0);
        M2C_FIELD(var_v1, s32 *, 4) = (s32) M2C_FIELD(var_v0, s32 *, 4);
        M2C_FIELD(var_v1, s32 *, 8) = (s32) M2C_FIELD(var_v0, s32 *, 8);
        M2C_FIELD(var_v1, s32 *, 0xC) = (s32) M2C_FIELD(var_v0, s32 *, 0xC);
        var_v0 += 0x10;
        var_v1 += 0x10;
    } while (var_v0 != (&D_80079B10 + 0x40));
    var_v1_2 = &sp98;
    var_v0_2 = &D_80079B10;
    sp6C = D_80079ACC;
    sp80 = D_80079ACC;
    do {
        temp_a3 = M2C_FIELD(var_v0_2, f32 *, 0);
        M2C_FIELD(var_v1_2, f32 *, 0) = temp_a3;
        M2C_FIELD(var_v1_2, s32 *, 4) = (s32) M2C_FIELD(var_v0_2, s32 *, 4);
        M2C_FIELD(var_v1_2, s32 *, 8) = (s32) M2C_FIELD(var_v0_2, s32 *, 8);
        M2C_FIELD(var_v1_2, s32 *, 0xC) = (s32) M2C_FIELD(var_v0_2, s32 *, 0xC);
        var_v0_2 += 0x10;
        var_v1_2 += 0x10;
    } while (var_v0_2 != (&D_80079B10 + 0x40));
    if (arg2 != 0) {
        temp_fv0 = (f32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xB0), f64 *, 0x30);
        sp98 = temp_fv0;
        sp10 = (f64) temp_fv0;
        temp_fv0_2 = -(f32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xB0), f64 *, 0x38);
        sp9C = temp_fv0_2;
        sp18 = (f64) temp_fv0_2;
        temp_fv0_3 = (f32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xB0), f64 *, 0x40);
        spA0 = temp_fv0_3;
        sp20 = (f64) temp_fv0_3;
        temp_fv0_4 = -(f32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xB0), f64 *, 0x18);
        spA8 = temp_fv0_4;
        sp28 = (f64) temp_fv0_4;
        var_fv0 = (f32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xB0), f64 *, 0x20);
    } else {
        temp_fv0_5 = -(f32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xB0), f64 *, 0x30);
        sp98 = temp_fv0_5;
        sp10 = (f64) temp_fv0_5;
        temp_fv0_6 = -(f32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xB0), f64 *, 0x38);
        sp9C = temp_fv0_6;
        sp18 = (f64) temp_fv0_6;
        temp_fv0_7 = -(f32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xB0), f64 *, 0x40);
        spA0 = temp_fv0_7;
        sp20 = (f64) temp_fv0_7;
        temp_fv0_8 = -(f32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xB0), f64 *, 0x18);
        spA8 = temp_fv0_8;
        sp28 = (f64) temp_fv0_8;
        var_fv0 = -(f32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xB0), f64 *, 0x20);
    }
    spAC = var_fv0;
    sp30 = (f64) var_fv0;
    temp_fv0_9 = -(f32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xB0), f64 *, 0x28);
    spB0 = temp_fv0_9;
    sp38 = (f64) temp_fv0_9;
    temp_fa1 = sp20 * sp30;
    temp_ft1 = (sp18 * sp38) - temp_fa1;
    temp_fv1 = (sp20 * sp28) - (sp10 * sp38);
    temp_fv0_10 = (sp10 * sp30) - (sp18 * sp28);
    sp40 = temp_ft1;
    sp48 = temp_fv1;
    sp50 = temp_fv0_10;
    spB8 = (f32) temp_ft1;
    spBC = (f32) temp_fv1;
    spC0 = (f32) temp_fv0_10;
    func_8004B368(sp30, temp_fa1, &sp58, &sp98, arg0 + 0x4C, temp_a3);
    temp_v0 = M2C_FIELD(arg0, void **, 0xB0);
    M2C_FIELD(arg0, f32 *, 0x7C) = (f32) (M2C_FIELD(temp_v0, f64 *, 0) * D_80079AD0);
    temp_fv0_11 = (f32) (M2C_FIELD(temp_v0, f64 *, 8) * D_80079AD0);
    M2C_FIELD(arg0, f32 *, 0x80) = temp_fv0_11;
    if (arg2 == 0) {
        M2C_FIELD(arg0, f32 *, 0x80) = (f32) -temp_fv0_11;
    }
    M2C_FIELD(arg0, s32 *, 0x9C) = 1;
    M2C_FIELD(arg0, f32 *, 0x84) = (f32) -(f32) (M2C_FIELD(M2C_FIELD(arg0, void **, 0xB0), f64 *, 0x10) * D_80079AD0);
}

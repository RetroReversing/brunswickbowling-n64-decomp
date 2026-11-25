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

M2C_UNK func_8004D53C(s32);                         /* extern */
M2C_UNK func_8004F380(M2C_UNK *, s32, M2C_UNK, M2C_UNK); /* extern */
extern f64 D_80079C00;
extern f64 D_80079C08;
extern f64 D_80079C10;
extern f64 D_80079C18;
extern f32 D_80079C20;
extern u16 D_8009CBD0;
extern u16 D_8009CBE4;
extern s32 D_8009CFD0;
extern s32 D_8009CFD4;
extern f32 D_8009CFD8;
extern f32 D_8009CFDC;
extern s32 D_8009DB84;

void func_8004F498(void) {
    M2C_UNK sp10;
    M2C_UNK sp14;
    s16 sp18;
    s16 sp1A;
    s16 sp1C;
    s16 sp1E;
    M2C_UNK temp_a2;
    M2C_UNK temp_a3;
    f32 temp_fv0;
    f32 var_fv1_2;
    f64 var_fv1;

    sp18 = 0;
    sp1A = 0;
    var_fv1 = (f64) D_8009DB84;
    sp1C = D_8009CBD0 - 1;
    sp1E = D_8009CBE4 - 1;
    temp_a2 = M2C_UNALIGNED32(sp18);
    temp_a3 = M2C_UNALIGNED32(sp1C);
    sp10 = temp_a2;
    sp14 = temp_a3;
    if (D_8009DB84 < 0) {
        var_fv1 += D_80079C00;
    }
    temp_fv0 = (f32) ((f64) D_8009CFD8 + (var_fv1 * D_80079C08));
    D_8009CFD8 = temp_fv0;
    if (D_8009CFDC < temp_fv0) {
        D_8009CFD8 = D_8009CFDC;
    }
    var_fv1_2 = (f32) ((D_80079C10 - (f64) (D_8009CFD8 / D_8009CFDC)) * D_80079C18);
    if (D_80079C18 < (f64) var_fv1_2) {
        var_fv1_2 = D_80079C20;
    }
    func_8004F380(&sp10, D_8009CFD4 | ((s32) var_fv1_2 << 0x18), temp_a2, temp_a3);
    if (D_8009CFD8 == D_8009CFDC) {
        func_8004D53C(D_8009CFD0);
        D_8009CFD0 = 0;
    }
}

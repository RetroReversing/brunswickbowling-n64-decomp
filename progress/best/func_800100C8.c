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

f64 func_80057DC0(f64);                             /* extern */
extern f64 D_80073400;
extern f64 D_80073408;
extern f64 D_80073410;
extern f64 D_80073418;
extern f64 D_80073420;
extern M2C_UNK D_8007C458;
extern s32 D_8007C4E8;
extern f64 D_8007CCE0;

void func_800100C8(f64 arg0, f64 arg1) {
    f64 sp10;
    s32 sp18;                                       /* compiler-managed */
    s32 sp1C;
    f64 sp20;
    f64 temp_fa0;
    f64 temp_fa0_2;
    f64 temp_fs0;
    f64 temp_ft0;
    f64 temp_ft2;
    f64 temp_fv0;
    f64 temp_fv0_2;
    f64 var_ft0;

    temp_fa0 = M2C_FIELD(&D_8007C458, f64 *, 0x18) + M2C_FIELD(&D_8007C458, f64 *, 0x30);
    sp18 = 0;
    sp1C = 0;
    sp10 = temp_fa0;
    sp20 = M2C_FIELD(&D_8007C458, f64 *, 0x28) + M2C_FIELD(&D_8007C458, f64 *, 0x40);
    temp_fs0 = func_80057DC0(temp_fa0);
    temp_fv0 = func_80057DC0(sp20);
    if (temp_fv0 < temp_fs0) {
        var_ft0 = (temp_fs0 * D_80073400) + (temp_fv0 * D_80073408);
    } else {
        var_ft0 = (temp_fv0 * D_80073410) + (temp_fs0 * D_80073418);
    }
    temp_fv0_2 = arg0 * arg1;
    if (var_ft0 <= temp_fv0_2) {
        D_8007C4E8 = 0;
        sp10 = -sp10;
        sp20 = -sp20;
        sp18 = -M2C_BITWISE(f64, sp18);
    } else {
        temp_ft0 = -temp_fv0_2 / var_ft0;
        sp10 *= temp_ft0;
        sp20 *= temp_ft0;
    }
    temp_fa0_2 = sp10 * D_8007CCE0;
    temp_ft2 = sp20 * D_8007CCE0;
    M2C_FIELD(&D_8007C458, f64 *, 0x18) = (f64) (M2C_FIELD(&D_8007C458, f64 *, 0x18) + sp10);
    M2C_FIELD(&D_8007C458, f64 *, 0x28) = (f64) (M2C_FIELD(&D_8007C458, f64 *, 0x28) + sp20);
    sp10 = temp_fa0_2;
    sp20 = temp_ft2;
    M2C_FIELD(&D_8007C458, f64 *, 0x30) = (f64) (M2C_FIELD(&D_8007C458, f64 *, 0x30) + temp_fa0_2);
    M2C_FIELD(&D_8007C458, f64 *, 0x40) = (f64) (M2C_FIELD(&D_8007C458, f64 *, 0x40) + temp_ft2);
    M2C_FIELD(&D_8007C458, f64 *, 0x48) = (f64) (M2C_FIELD(&D_8007C458, f64 *, 0x48) + (temp_ft2 * D_80073420));
    M2C_FIELD(&D_8007C458, f64 *, 0x58) = (f64) (M2C_FIELD(&D_8007C458, f64 *, 0x58) - (temp_fa0_2 * D_80073420));
}

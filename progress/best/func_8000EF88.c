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

M2C_UNK func_8000F198(s32, s32, s32, s32);          /* extern */
extern f64 D_80073258;
extern f64 D_80073260;
extern f64 D_80073268;
extern f64 D_80073270;
extern f64 D_80073278;
extern f64 D_80073280;
extern s32 D_8007B210;
extern s32 D_8007C3F8;
extern s32 D_8007C3FC;
extern s32 D_8007C400;
extern M2C_UNK D_8007C458;
extern f64 D_8007CCC0;
extern f64 D_8007CCC8;
extern s32 D_8007CCD0;
extern s32 D_8007CCD4;
extern s32 D_8007CCDC;
extern f64 D_8007CCE0;
extern s16 D_80099132;
extern s16 D_80099134;
extern s32 D_80099138;
extern s32 D_8009913C;
extern u16 D_80099140;
extern u16 D_80099142;

s32 func_8000EF88(f64 arg0, f64 arg1, f64 arg4, f64 arg6, f64 arg8, f64 arg10, f64 arg12, f64 arg14, s32 arg16, u16 arg17, s32 arg18, s32 arg19, s32 arg20) {
    f64 temp_fv0;
    s32 var_v0;

    D_8007B210 = 1;
    M2C_FIELD(&D_8007C458, f64 *, 0) = arg0;
    M2C_FIELD(&D_8007C458, f64 *, 0x10) = arg1;
    M2C_FIELD(&D_8007C458, s32 *, 0x20) = 0;
    M2C_FIELD(&D_8007C458, s32 *, 0x24) = 0;
    M2C_FIELD(&D_8007C458, s32 *, 0x60) = 0;
    M2C_FIELD(&D_8007C458, s32 *, 0x64) = 0;
    M2C_FIELD(&D_8007C458, s32 *, 0x70) = 0;
    M2C_FIELD(&D_8007C458, s32 *, 0x74) = 0;
    M2C_FIELD(&D_8007C458, s32 *, 0x80) = 0;
    M2C_FIELD(&D_8007C458, s32 *, 0x84) = 0;
    M2C_FIELD(&D_8007C458, s32 *, 0x88) = 0;
    M2C_FIELD(&D_8007C458, s32 *, 0x8C) = 0;
    M2C_FIELD(&D_8007C458, s32 *, 0x94) = 1;
    M2C_FIELD(&D_8007C458, s32 *, 0x90) = 1;
    M2C_FIELD(&D_8007C458, s32 *, 0x38) = 0;
    M2C_FIELD(&D_8007C458, s32 *, 0x3C) = 0;
    M2C_FIELD(&D_8007C458, s32 *, 0x50) = 0;
    M2C_FIELD(&D_8007C458, s32 *, 0x54) = 0;
    D_80099140 = D_80099142;
    M2C_FIELD(&D_8007C458, f64 *, 0x18) = (f64) (arg4 / D_80073260);
    M2C_FIELD(&D_8007C458, f64 *, 8) = (f64) D_80073258;
    M2C_FIELD(&D_8007C458, f64 *, 0x28) = (f64) (arg6 / D_80073260);
    M2C_FIELD(&D_8007C458, f64 *, 0x68) = (f64) D_80073270;
    M2C_FIELD(&D_8007C458, f64 *, 0x78) = (f64) D_80073268;
    M2C_FIELD(&D_8007C458, f64 *, 0x40) = arg10;
    M2C_FIELD(&D_8007C458, f64 *, 0x30) = arg8;
    M2C_FIELD(&D_8007C458, f64 *, 0x48) = (f64) (arg10 / D_80073278);
    M2C_FIELD(&D_8007C458, f64 *, 0x58) = (f64) -(arg8 / D_80073278);
    D_8007CCD0 = arg19;
    D_8007CCD4 = arg20;
    temp_fv0 = D_80073278 / arg14;
    D_8007C3F8 = 0;
    D_8007C3FC = 0;
    D_8007C400 = 0;
    D_80099132 = (s16) arg16;
    D_8007CCC8 = arg12;
    D_8007CCC0 = arg14;
    D_80099138 = arg18;
    D_80099134 = (arg17 & 0xFFFF) / 30;
    D_8007CCE0 = temp_fv0 * temp_fv0;
    func_8000F198(arg17 & 0xFFFF, arg19, arg20, arg16);
    var_v0 = 0;
    if (D_8007CCDC == 0) {
        D_8009913C = 1;
        M2C_FIELD(&D_8007C458, f64 *, 0x18) = (f64) (M2C_FIELD(&D_8007C458, f64 *, 0x18) * D_80073280);
        M2C_FIELD(&D_8007C458, f64 *, 0x28) = (f64) (M2C_FIELD(&D_8007C458, f64 *, 0x28) * D_80073280);
        M2C_FIELD(&D_8007C458, f64 *, 0x30) = (f64) (M2C_FIELD(&D_8007C458, f64 *, 0x30) * D_80073280);
        M2C_FIELD(&D_8007C458, f64 *, 0x40) = (f64) (M2C_FIELD(&D_8007C458, f64 *, 0x40) * D_80073280);
        M2C_FIELD(&D_8007C458, f64 *, 0x48) = (f64) (M2C_FIELD(&D_8007C458, f64 *, 0x48) * D_80073280);
        M2C_FIELD(&D_8007C458, f64 *, 0x58) = (f64) (M2C_FIELD(&D_8007C458, f64 *, 0x58) * D_80073280);
        var_v0 = 1;
    }
    return var_v0;
}

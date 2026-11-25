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

f64 atan(f64);                                      /* extern */
s32 func_8004E194(s32 *, f32);              /* extern */
s32 guMtxF2L();
s32 guLookAtF(s32 *, f32, f32, f32, f32, f32, f32, s32, f32, s32); /* extern */
extern f64 D_80079738;
extern f64 D_80079740;
extern f64 D_80079748;
extern f32 D_80079750;
extern f64 D_8008F1C0;
extern s32 D_8009CC48;
extern char D_8009CE10[];
extern char D_8009CF30[];

void func_80042FC4(void *arg0) {
    s32 sp68;
    f64 temp_fv1;
    s32 temp_v0;

    temp_fv1 = M2C_FIELD(arg0, f64 *, 0x40);
    if (temp_fv1 != 0.0) {
        func_8004E194(D_8009CE10, (f32) (atan(D_80079738 / temp_fv1) * D_80079740 * D_8008F1C0));
    }
    guLookAtF(&sp68, (f32) (M2C_FIELD(arg0, f64 *, 8) * D_80079748), (f32) (M2C_FIELD(arg0, f64 *, 0x10) * D_80079748), (f32) (-M2C_FIELD(arg0, f64 *, 0x18) * D_80079748), (f32) (M2C_FIELD(arg0, f64 *, 0x20) * D_80079748), (f32) (M2C_FIELD(arg0, f64 *, 0x28) * D_80079748), (f32) (-M2C_FIELD(arg0, f64 *, 0x30) * D_80079748), 0, D_80079750, 0);
    temp_v0 = D_8009CC48 ^ 1;
    D_8009CC48 = temp_v0;
    guMtxF2L(&sp68, (temp_v0 << 6) + D_8009CF30);
    M2C_FIELD(D_8009CF30, s32 *, -0xF8) = 1;
    M2C_FIELD(arg0, s32 *, 0x324) = 1;
}

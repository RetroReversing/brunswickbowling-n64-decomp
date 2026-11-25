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

M2C_UNK func_80042FC4(M2C_UNK *, s32, s32, s32);    /* extern */
extern f64 D_80073E50;
extern f64 D_80073E58;
extern f64 D_80073E60;
extern f64 D_80073E68;
extern void *D_80082040;
extern M2C_UNK D_800821D8;
extern M2C_UNK D_80082248;
extern M2C_UNK D_800823A8;
extern s32 D_80082688;
extern f64 D_80082698;
extern f64 D_800826A0;
extern f64 D_800826A8;
extern f64 D_800826B0;
extern M2C_UNK D_800826B8;
extern f64 D_800826C0;
extern f64 D_800826C8;
extern M2C_UNK D_8008ED80;
extern f64 D_8008ED88;
extern f64 D_8008ED90;
extern f64 D_8008ED98;
extern f64 D_8008EDA0;
extern f64 D_8008EDA8;
extern f64 D_8008EDB0;
extern f64 D_8008EDC0;
extern s32 D_8008F09C;
extern s32 D_80097030;

void func_800149E4(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_a1;
    s32 var_a2;
    s32 var_a3;

    var_a1 = arg1;
    var_a2 = arg2;
    var_a3 = arg3;
    D_80082040 = arg0;
    if ((arg0 == &D_800821D8) || (arg0 == &D_80082248)) {
        do {

        } while (D_80097030 != 0);
        D_80082688 = 1;
    } else {
        D_80082688 = 0;
    }
    if (arg0 != &D_800823A8) {
        if (M2C_FIELD(arg0, s32 *, 0) != 0) {
            if (M2C_FIELD(arg0, s32 *, 4) != 0) {
                if (D_80082698 == D_80073E50) {
                    return;
                }
                goto block_15;
            }
            goto block_16;
        }
        M2C_FIELD(&D_800826B8, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 8);
        M2C_FIELD(&D_800826B8, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0xC);
        M2C_FIELD(&D_800826B8, s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 0x10);
        var_a1 = M2C_FIELD(arg0, s32 *, 0x14);
        var_a2 = M2C_FIELD(arg0, s32 *, 0x18);
        var_a3 = M2C_FIELD(arg0, s32 *, 0x1C);
        M2C_FIELD(&D_800826B8, s32 *, 0xC) = var_a1;
        M2C_FIELD(&D_800826B8, s32 *, 0x10) = var_a2;
        M2C_FIELD(&D_800826B8, s32 *, 0x14) = var_a3;
        if ((M2C_FIELD(arg0, u8 *, 0x38) & 0x80) && (D_8008F09C != 0)) {
            M2C_FIELD(&D_800826B8, s32 *, 0) = (f64) (M2C_BITWISE(f64, M2C_FIELD(&D_800826B8, s32 *, 0)) + D_80073E58);
        }
        D_8008ED88 = (f64) M2C_FIELD(&D_800826B8, s32 *, 0);
        D_8008ED98 = D_800826C8;
        D_8008ED90 = -D_800826C0;
block_15:
        if (M2C_FIELD(arg0, s32 *, 4) == 0) {
block_16:
            M2C_FIELD(&D_800826A0, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0x20);
            M2C_FIELD(&D_800826A0, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0x24);
            M2C_FIELD(&D_800826A0, s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 0x28);
            var_a1 = M2C_FIELD(arg0, s32 *, 0x2C);
            var_a2 = M2C_FIELD(arg0, s32 *, 0x30);
            var_a3 = M2C_FIELD(arg0, s32 *, 0x34);
            M2C_FIELD(&D_800826A0, s32 *, 0xC) = var_a1;
            M2C_FIELD(&D_800826A0, s32 *, 0x10) = var_a2;
            M2C_FIELD(&D_800826A0, s32 *, 0x14) = var_a3;
            if ((M2C_FIELD(arg0, u8 *, 0x38) & 0x80) && (D_8008F09C != 0)) {
                M2C_FIELD(&D_800826A0, f64 *, 0) += D_80073E60;
            }
            D_8008EDA0 = M2C_FIELD(&D_800826A0, f64 *, 0);
            D_8008EDB0 = D_800826B0;
            D_8008EDA8 = -D_800826A8;
        }
        if (D_80082698 != D_80073E68) {
            D_80082698 = D_80073E68;
            D_8008EDC0 = D_80073E68;
        }
        func_80042FC4(&D_8008ED80, var_a1, var_a2, var_a3);
    }
}

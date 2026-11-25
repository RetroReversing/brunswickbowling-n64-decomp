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

extern double D_8007C468;
extern int D_8007C4E8;
extern double D_8007C458;
s32 func_8000FD5C();
s32 func_800100C8();
s32 func_80010348();
extern f64 D_80073450;
extern f64 D_80073458;
extern f64 D_80073460;
extern f64 D_80073468;
extern f64 D_80073470;
extern f64 D_80073478;
extern s32 D_8007B210;
extern s32 D_8007C3FC;
extern char D_8007C4F0[];
extern f64 D_8007CCC8;

void func_800103D4(void) {
    s32 *var_v1;
    char *var_a0;

    var_a0 = &D_8007C3FC;
    if (D_8007C3FC != 0) {
        func_80010348(&D_8007C3FC);
        var_a0 = NULL;
    } else if (D_80073450 < D_8007C468) {
        D_8007C3FC = D_8007B210;
        func_80010348(&D_8007C3FC);
        var_a0 = NULL;
    } else if ((D_8007C4E8 != 0) && (D_8007C458 >= 0.0) && (D_8007C458 <= D_80073458)) {
        func_800100C8(D_8007CCC8, D_80073460, &D_8007C3FC);
        var_a0 = NULL;
    } else if ((D_8007C458 < 0.0) || (var_a0 = NULL, (D_80073468 < D_8007C458))) {
        func_8000FD5C(D_80073470, var_a0);
        var_a0 = NULL;
    }
    var_v1 = D_8007C4F0;
    do {
        var_a0 += 1;
        if ((u32) (M2C_FIELD(var_v1, s32 *, 0x48) - 2) < 2U) {
            M2C_FIELD(var_v1, f64 *, 0x58) += D_80073478;
        }
        var_v1 += 0xC8;
    } while ((s32) var_a0 < 0xA);
}

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

s32 func_8002AB14();
s32 func_800375C0();
s32 func_8003792C();
s32 func_80046188();
extern f64 D_80079940;
extern f64 D_80079948;
extern u16 D_8008C90C;
extern char D_8008F314[];
extern u8 D_8008F340;
extern s32 D_8008F344;
extern s32 D_8008F348;
extern s32 D_8008F34C;

void func_80046014(void *arg0, s32 arg1, s32 arg2) {
    f64 var_fv1;
    s32 var_v1;
    s8 temp_a1;
    u16 temp_v0;

    D_8008F348 = arg1;
    temp_a1 = (u32) (arg1 - 1) < 2U;
    D_8008F34C = arg2;
    M2C_FIELD(arg0, s8 *, 0x16) = temp_a1;
    if (temp_a1 != 0) {
        if (M2C_FIELD(arg0, u8 *, 0x17) != 0) {
            var_fv1 = D_80079940;
        } else {
            var_fv1 = D_80079948;
        }
        M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (s32) ((f64) (f32) M2C_FIELD(arg0, s16 *, 0x22) * var_fv1);
        return;
    }
    temp_v0 = M2C_FIELD(arg0, u16 *, 0x20);
    M2C_FIELD(arg0, u16 *, 0x1E) = temp_v0;
    M2C_FIELD(arg0, u16 *, 0x1E) = temp_v0;
    if ((D_8008F34C == -1) || (D_8008F348 >= (D_8008F34C - 1))) {
        var_v1 = D_8008F348;
    } else {
        do {
            var_v1 = D_8008F348 + func_8002AB14(D_8008F34C - D_8008F348);
        } while (var_v1 == D_8008F344);
    }
    D_8008F344 = var_v1;
    if (D_8008F340 != 0) {
        func_80046188(arg0);
    }
    D_8008C90C = M2C_FIELD(((D_8008F344 * 4) + D_8008F314), u16 *, 2);
    func_8003792C(&D_8008C90C, (s16) M2C_FIELD(arg0, u16 *, 0x1E));
    func_800375C0(&D_8008C90C, 0);
    D_8008F340 = 1;
    M2C_FIELD(arg0, s8 *, 0x15) = 0;
}

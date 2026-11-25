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

s32 func_8000EF88();
s32 func_80057FA0();
extern u16 D_8007B212;
extern char D_8007D940[];
extern char D_800827A4[];

void func_80032744(void *arg0, s32 arg1, s32 arg2) {
    s32 var_s1;
    void *var_s0;

    if (arg1 != 0) {
        var_s0 = arg0 + 0x368;
    } else {
        var_s0 = arg0 + 0x338;
    }
    var_s1 = 0;
    if (arg2 != 0) {
        var_s1 = 2;
        if (M2C_FIELD(var_s0, s32 *, 0x28) != 0) {
            var_s1 = 1;
        }
    }
    if (arg1 != 0) {
        func_80057FA0(D_800827A4 + 0x2E, arg0 + 0x1C, 0x2C0);
    }
    func_8000EF88(M2C_FIELD(var_s0, f64 *, 0), 0, D_8007D940, M2C_FIELD(var_s0, f64 *, 8), M2C_FIELD(var_s0, f64 *, 0x10), M2C_FIELD(var_s0, f64 *, 0x18), 0.0, M2C_FIELD(((M2C_FIELD(var_s0, s16 *, 0x20) << 5) + D_8007D940), f64 *, 8), M2C_FIELD(((M2C_FIELD(var_s0, s16 *, 0x20) << 5) + D_8007D940), f64 *, 0x10), (s32) M2C_FIELD(((M2C_FIELD(var_s0, s16 *, 0x20) << 5) + D_8007D940), u16 *, 0x18), (s32) M2C_FIELD(((M2C_FIELD(var_s0, s16 *, 0x20) << 5) + D_8007D940), u16 *, 0x1A), M2C_FIELD(((M2C_FIELD(var_s0, s16 *, 0x20) << 5) + D_8007D940), s32 *, 0x1C), D_800827A4 + 0x2E, var_s1);
    M2C_FIELD(arg0, u16 *, 0x2FE) = (u16) D_8007B212;
}

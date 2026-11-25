/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O1, tried by autopilot */
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

extern int D_800971F8;
extern int D_80097208;
extern int D_800971F0;
s32 func_80054950();
s32 func_80054984();
s32 func_800549B0();
s32 func_80056680();
extern u32 D_80000318;
extern char D_800A4910[];
extern s8 D_800A5060;
extern s8 D_800A5062;

void func_80055764(void) {
    s32 *var_a1;
    char *var_a0;
    s32 temp_a3;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a2;
    u32 var_a3;
    void *var_v1;

    temp_s0 = func_80054950();
    func_80056680();
    func_800549B0(0xB1FFFFF0, 0);
    func_800549B0(0xB1FFFFFC, 0);
    D_800A5060 = 1;
    D_800A5062 = 0xFF;
    if ((u32) D_80000318 > 0x3FFFFFU) {
        if (!(D_80000318 & 0x1FFFF) && ((u32) D_80000318 <= 0x02000000U)) {
            temp_a3 = D_80000318 - 1;
            D_800971F8 = (s32) (temp_a3 + 0x80000000);
            D_80097208 = (s32) (temp_a3 + 0xA0000000);
        }
    }
    var_a0 = &D_800971F0;
    var_a2 = 0x80000000;
    if (D_800971F0 >= 0) {
        do {
            var_a0 += 8;
        } while ((u32) *(s32 *)var_a0 < 0x80000000U);
    }
    var_a3 = 0;
    var_a1 = D_800A4910;
    do {
        M2C_FIELD(var_a1, s32 *, 0) = var_a2;
        temp_v0 = M2C_FIELD(var_a0, s32 *, 0);
        var_a3 += 1;
        M2C_FIELD(var_a1, s32 *, 4) = temp_v0;
        temp_v1 = M2C_FIELD(var_a0, s32 *, 4);
        var_a0 = var_a0 + 4 + 4;
        var_a2 = temp_v0 + 1;
        M2C_FIELD(var_a1, s32 *, 8) = temp_v1;
        var_a1 += 0xC;
    } while (var_a2 != 0);
    if (var_a3 < 0x10U) {
        var_v1 = (var_a3 * 0xC) + D_800A4910;
        do {
            M2C_FIELD(var_v1, s32 *, 0) = -1;
            M2C_FIELD(var_v1, s32 *, 8) = 0;
            var_a3 += 1;
            var_v1 += 0xC;
        } while (var_a3 < 0x10U);
    }
    func_80054984(temp_s0, var_a1, var_a2, var_a3);
}

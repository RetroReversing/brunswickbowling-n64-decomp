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

s32 func_80039738();
s32 func_80039BC4();
s32 func_80045050();
extern char D_8008CF28[];
extern char D_8008ED80[];

void func_80026C78(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    s32 var_a1;
    char *var_s0;
    char *var_s1;
    s32 temp_a1;
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_fp;
    s32 var_s0_2;
    s32 var_s2;
    s32 var_s7;
    s32 var_v0;

    var_s7 = 0x198;
    var_fp = 0;
    sp30 = arg0;
    var_s0 = &sp30;
    sp34 = arg1;
    sp38 = arg2;
    sp3C = arg3;
loop_1:
    if (var_fp < 4) {
        temp_a1 = *(s32 *)var_s0;
        if (temp_a1 != 0) {
            temp_v1 = func_80039BC4(D_8008CF28, temp_a1) + 0x14;
            if (var_s7 < temp_v1) {
                var_s7 = temp_v1;
            }
            var_s0 += 4;
            var_fp += 1;
            goto loop_1;
        }
    }
    temp_s1 = 0x140 - (var_s7 >> 1);
    func_80045050(D_8008ED80, temp_s1, 0x57, 0, var_s7, 4, 0, 0x28, 0xB8, 0, 0);
    func_80045050(D_8008ED80, temp_s1, 0x5B, 0, var_s7, 1, 8, 8, 8, 0, 0);
    func_80045050(D_8008ED80, temp_s1, 0x5C, 0, var_s7, 0x38, 0, 0x10, 0x58, 1, 0);
    func_80045050(D_8008ED80, temp_s1, 0x94, 0, var_s7, 1, 8, 8, 8, 0, 0);
    func_80045050(D_8008ED80, temp_s1, 0x95, 0, var_s7, 4, 0, 0x28, 0xB8, 0, 0);
    var_s2 = 0x78 - ((s32) (var_fp * 0xC) >> 1);
    var_s0_2 = 0;
    var_s1 = &sp30;
    var_v0 = var_fp > 0;
loop_8:
    if (var_v0 != 0) {
        var_a1 = 0;
        if (var_s0_2 != 0) {
            var_a1 = 5;
        }
        temp_v0 = var_s2 << 0x10;
        var_s2 += 0xC;
        temp_v0_2 = *(s32 *)var_s1;
        var_s1 += 4;
        var_s0_2 += 1;
        func_80039738(D_8008CF28, var_a1, 1, 0x140, temp_v0 >> 0x10, temp_v0_2);
        var_v0 = var_s0_2 < var_fp;
        goto loop_8;
    }
}

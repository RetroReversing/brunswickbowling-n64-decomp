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
extern char D_8008ED80[];

void func_8002949C(void *arg0, s32 arg1, s32 *arg2, s32 arg3) {
    char *var_s0;
    char *var_s1_2;
    s32 temp_s1;
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_t0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s2;
    s32 var_s2_2;

    var_s1 = 0;
    var_s2 = 0;
    var_s0 = arg2;
loop_1:
    if (var_s2 < arg3) {
        temp_v0 = func_80039BC4(arg0, *(s32 *)var_s0);
        if (var_s1 < temp_v0) {
            var_s1 = temp_v0;
        }
        var_s0 += 4;
        var_s2 += 1;
        goto loop_1;
    }
    temp_s1 = var_s1 + 0x28;
    var_s2_2 = 0;
    temp_s4 = M2C_FIELD(arg0, s32 *, 8) + 4;
    temp_t0 = (arg3 * temp_s4) + 0x14;
    temp_s3 = 0x78 - (temp_t0 >> 1);
    func_80045050(D_8008ED80, 0x140 - (temp_s1 >> 1), temp_s3, 0, temp_s1, temp_t0, 8, 8, 8, 1, 0);
    var_s1_2 = arg2;
    if (arg3 > 0) {
        var_s0_2 = 0xA;
        do {
            temp_v0_2 = *(s32 *)var_s1_2;
            var_s1_2 += 4;
            var_s0_2 += temp_s4;
            var_s2_2 += 1;
            func_80039738(arg0, arg1, 1, 0x140, (s32) (s16) (temp_s3 + var_s0_2), temp_v0_2);
        } while (var_s2_2 < arg3);
    }
}

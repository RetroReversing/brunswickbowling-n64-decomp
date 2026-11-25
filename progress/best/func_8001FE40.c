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

s32 func_80037248();
s32 func_80037360();
extern char D_80083980[];
extern char D_8008C050[];
extern char D_8008C090[];

void func_8001FE40(void *arg0) {
    s16 temp_a1;
    s16 var_a2;
    s16 var_s3;
    s32 var_fp;
    s32 var_s1;
    s32 var_s2;
    s32 var_s4;
    s32 var_s5;
    void *temp_s0;
    void *var_s7;

    var_s4 = 0;
    var_fp = 0;
    var_s7 = arg0;
loop_1:
    if (var_s4 < 2) {
        var_a2 = 0xD9;
        if (var_s4 == 0) {
            var_a2 = 0xCA;
            var_s3 = M2C_FIELD(arg0, s16 *, 0x24);
            var_s5 = 0x20;
        } else {
            var_s5 = -0x20;
            var_s3 = M2C_FIELD(var_s7, s16 *, 0x24) + 0x120;
        }
        var_s2 = 0;
        var_s1 = var_fp;
        do {
            temp_s0 = var_s1 + D_80083980;
            var_s1 += 8;
            var_s2 += 1;
            func_80037248(M2C_FIELD(temp_s0, s32 **, 0), M2C_FIELD(temp_s0, s32 *, 4));
            temp_a1 = var_s3;
            var_s3 += var_s5;
            func_80037360(M2C_FIELD(temp_s0, s32 **, 0), temp_a1, var_a2, 1);
        } while (var_s2 < 0xA);
        var_fp += 0x50;
        var_s7 += 2;
        var_s4 += 1;
        goto loop_1;
    }
    func_80037360(D_8008C050, (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x24) + 0x1E), 0xCC, 0);
    func_80037360(D_8008C090, (s16) (M2C_FIELD(arg0, u16 *, 0x26) + 0xA0), 0xDB, 0);
}

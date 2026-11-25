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

s32 func_80029704();
s32 func_80039738();
extern char D_80075FE0[];
extern char D_80089868[];
extern char D_8008CEB0[];
extern char D_8008CEEC[];

void func_80024CD0(void *arg0) {
    s32 var_a1;
    s16 temp_v0;
    s16 var_s2;
    s32 temp_v1;
    s32 var_s1;
    s32 var_v1;

    var_s1 = 0;
    var_s2 = M2C_FIELD(arg0, u16 *, 0x2E) + 0x16;
    func_80029704(0x12C, M2C_FIELD(arg0, s16 *, 0x2C), 2);
    func_80039738(D_8008CEEC, 0, 1, 0x140, (s32) (s16) (M2C_FIELD(arg0, u16 *, 0x2E) + 4), D_80075FE0);
    var_v1 = 0 << 0x10;
loop_1:
    temp_v1 = var_v1 >> 0x10;
    if (temp_v1 < M2C_FIELD(arg0, s16 *, 0x14)) {
        var_a1 = 0;
        if (temp_v1 == M2C_FIELD(arg0, s16 *, 0x2A)) {
            var_a1 = 5;
        }
        temp_v0 = var_s2 + 0xE;
        var_s2 = temp_v0;
        var_s1 += 1;
        func_80039738(D_8008CEB0, var_a1, 1, 0x140, (s32) temp_v0, *((M2C_FIELD((arg0 + (temp_v1 * 2)), s16 *, 0x16) * 4) + D_80089868));
        var_v1 = var_s1 << 0x10;
        goto loop_1;
    }
}

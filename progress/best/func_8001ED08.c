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

s32 func_800137B0();
void *func_800205E0();
extern s32 D_8007DA40;
extern char D_8007DA48[];
extern char D_80081B20[];
extern char D_800837A0[];
extern char D_80083BA8[];
extern char D_8008B038[];

void func_8001ED08(void *arg0) {
    s32 *var_a1_2;
    s32 *var_a2;
    s16 temp_s0;
    s16 var_s1;
    s32 var_a1;
    s32 var_a3;
    s32 var_t2;
    void *temp_t0;
    void *temp_v0;

    if (arg0 == D_800837A0) {
        var_s1 = M2C_FIELD(arg0, s16 *, 0x4C);
loop_2:
        temp_v0 = M2C_FIELD(arg0, void **, 0x10);
        temp_s0 = M2C_FIELD(arg0, s16 *, 0x4C);
        if (var_s1 < (temp_s0 + M2C_FIELD(temp_v0, s32 (**)(void *), 0x74)(arg0 + M2C_FIELD(temp_v0, s16 *, 0x70)))) {
            temp_t0 = func_800205E0(D_80083BA8, var_s1);
            var_t2 = 0;
            var_a3 = 0;
            var_a2 = D_8007DA48;
loop_4:
            var_a1 = 0;
            if (var_a3 < D_8007DA40) {
                if (M2C_FIELD(var_a2, u8 *, 8) == M2C_FIELD(temp_t0, u8 *, 0)) {
                    var_a1 = M2C_FIELD((var_a2 + 8), u8 *, 1) == M2C_FIELD(temp_t0, u8 *, 1);
                }
                if (var_a1 != 0) {
                    var_t2 = 1;
                } else {
                    var_a2 += 0x1C4;
                    var_a3 += 1;
                    goto loop_4;
                }
            }
            if (var_t2 != 0) {
                var_a1_2 = D_8008B038;
            } else {
                var_a1_2 = NULL;
            }
            func_800137B0(((var_s1 - M2C_FIELD(arg0, s16 *, 0x4C)) * 0x4C) + D_80081B20, var_a1_2, -1, -1, 1);
            var_s1 += 1;
            goto loop_2;
        }
    }
}

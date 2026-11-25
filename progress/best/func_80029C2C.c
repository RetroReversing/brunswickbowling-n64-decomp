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

extern signed char D_80089A04;
extern signed char D_80089A05;
extern signed char D_80089A06;
extern signed char D_80089A07;
extern char D_80089A08[];

void func_80029C2C(void *arg0) {
    s32 temp_a2;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_v0;
    u8 *temp_a0;
    u8 *temp_a3;
    void *var_a2;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x40);
    if (temp_v1 == 0) {
        D_80089A04 = 0;
        D_80089A05 = 1;
        D_80089A06 = 3;
        D_80089A07 = 6;
        return;
    }
    var_a1 = *(temp_v1 + D_80089A08) + 1;
    if (var_a1 < 4) {
        var_a2 = var_a1 + &D_80089A04;
        do {
            temp_v1_2 = M2C_FIELD(var_a2, u8 *, -1) + var_a1;
            if (temp_v1_2 >= (s32) M2C_FIELD(var_a2, u8 *, 0)) {
                M2C_FIELD(var_a2, u8 *, 0) = (u8) temp_v1_2;
            } else {
                M2C_FIELD(var_a2, u8 *, 0) = (u8) (temp_v1_2 + 1);
            }
            var_a1 += 1;
            var_a2 = var_a1 + &D_80089A04;
        } while (var_a1 < 4);
    }
    var_a1_2 = *(M2C_FIELD(arg0, s32 *, 0x40) + D_80089A08) - 1;
    if (var_a1_2 > 0) {
        var_v0 = var_a1_2 + 1;
        do {
            temp_a3 = var_v0 + &D_80089A04;
            temp_a0 = var_a1_2 + &D_80089A04;
            temp_a2 = *temp_a3 - var_a1_2;
            if ((s32) *temp_a0 < (temp_a2 - 1)) {
                *temp_a0 = temp_a2 - 2;
            }
            temp_v0 = (*temp_a3 - var_a1_2) - 1;
            if (temp_v0 < (s32) *temp_a0) {
                *temp_a0 = (u8) temp_v0;
            }
            var_a1_2 -= 1;
            var_v0 = var_a1_2 + 1;
        } while (var_a1_2 > 0);
    }
}

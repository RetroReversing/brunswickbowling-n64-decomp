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

void *func_800205E0(void *, s32);                   /* extern */
void *func_800205F8(void *, s32);                   /* extern */
void *func_80020620(void *, s32, s32);              /* extern */
u8 func_8002AB14(M2C_UNK);                          /* extern */

void func_80021A94(void *arg0, void *arg1) {
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a1;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;
    u8 temp_a2;
    u8 temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;

loop_1:
    M2C_FIELD(arg1, u8 *, 0) = func_8002AB14(0x100);
    temp_v0 = func_8002AB14(0x100);
    temp_a2 = M2C_FIELD(arg1, u8 *, 0);
    M2C_FIELD(arg1, u8 *, 1) = temp_v0;
    if (temp_a2 == 0) {
        if ((u32) (temp_v0 & 0xFF) < 2U) {
            goto loop_1;
        }
    }
    var_a1 = 0;
    if (temp_a2 == M2C_FIELD(arg0, u8 *, 0x1680)) {
        var_a1 = (temp_v0 & 0xFF) == M2C_FIELD((arg0 + 0x1680), u8 *, 1);
    }
    var_s0 = 0;
    if (var_a1 != 0) {
        goto loop_1;
    }
    var_v0 = 0 < 0xF;
loop_7:
    if (var_v0 != 0) {
        temp_v0_2 = func_800205E0(arg0, var_s0);
        var_a0 = 0;
        if (M2C_FIELD(arg1, u8 *, 0) == M2C_FIELD(temp_v0_2, u8 *, 0)) {
            var_a0 = M2C_FIELD(arg1, u8 *, 1) == M2C_FIELD(temp_v0_2, u8 *, 1);
        }
        var_s0 += 1;
        if (var_a0 == 0) {
            var_v0 = var_s0 < 0xF;
        } else {
            goto loop_1;
        }
        goto loop_7;
    }
    var_s1 = 0;
loop_13:
    if (var_s1 < 6) {
        temp_v0_3 = func_800205F8(arg0, var_s1);
        var_a0_2 = 0;
        if (M2C_FIELD(arg1, u8 *, 0) == M2C_FIELD(temp_v0_3, u8 *, 0)) {
            var_a0_2 = M2C_FIELD(arg1, u8 *, 1) == M2C_FIELD(temp_v0_3, u8 *, 1);
        }
        var_s0_2 = 0;
        if (var_a0_2 == 0) {
            var_v0_2 = 0 < 6;
loop_18:
            if (var_v0_2 != 0) {
                temp_v0_4 = func_80020620(arg0, var_s1, var_s0_2);
                var_a0_3 = 0;
                if (M2C_FIELD(arg1, u8 *, 0) == M2C_FIELD(temp_v0_4, u8 *, 0)) {
                    var_a0_3 = M2C_FIELD(arg1, u8 *, 1) == M2C_FIELD(temp_v0_4, u8 *, 1);
                }
                var_s0_2 += 1;
                if (var_a0_3 == 0) {
                    var_v0_2 = var_s0_2 < 6;
                    goto loop_18;
                }
                goto loop_1;
            }
            var_s1 += 1;
        } else {
            goto loop_1;
        }
        goto loop_13;
    }
}

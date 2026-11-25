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

extern int D_8007D704;
s32 func_80011CA4();
s32 func_80011D9C();
s32 func_80012B50();
extern char D_8007D700[];
extern s32 D_8007DA40;
extern char D_8007DA48[];
extern char D_8007E4E4[];
extern char D_8007E58C[];
extern char D_8007F618[];

void func_80031404(void *arg0) {
    s32 *var_a0;
    s32 *var_s0;
    s32 *var_s0_2;
    s32 *var_s2;
    s32 temp_s0;
    s32 temp_v1;
    s32 var_a1;
    s32 var_s1;
    s32 var_t0;
    s32 var_v0;
    s32 var_v1;
    u8 var_a1_2;
    void *var_s2_2;
    void *var_s2_3;

    var_s1 = 0;
    var_s2 = D_8007DA48;
    var_s0 = D_8007F618;
loop_1:
    if (var_s1 < D_8007DA40) {
        func_80011CA4(var_s0, var_s2, 1);
        var_v1 = 0;
        if (D_8007D704 == 0) {
            var_v1 = M2C_FIELD(var_s0, u8 *, 0x18) == 2;
        }
        if (var_v1 != 0) {
            func_80011D9C(var_s0);
        }
        var_s2 += 0x1C4;
        var_s0 += 0x5C;
        var_s1 += 1;
        goto loop_1;
    }
    var_s0_2 = D_8007E4E4;
    var_s2_2 = (var_s1 * 0x5C) + D_8007F618;
loop_8:
    var_t0 = 0;
    if ((s32) var_s0_2 < (s32) (D_8007E4E4 + 0xA8)) {
        var_a1 = 0;
        var_a0 = D_8007F618;
loop_10:
        if (var_a1 < D_8007DA40) {
            var_a0 += 0x5C;
            if (M2C_FIELD(var_a0, u8 *, 0x19) != (M2C_FIELD(var_s0_2, u8 *, 4) - 1)) {
                var_a1 += 1;
                goto loop_10;
            }
            var_t0 = 1;
        }
        if (var_t0 != 0) {
            var_s0_2 += 0x18;
        } else {
            func_80012B50(var_s2_2, (s32) var_s0_2, (s32) var_s0_2, D_8007DA40);
            var_s2_2 += 0x5C;
            var_s1 += 1;
            var_s0_2 += 0x18;
        }
        goto loop_8;
    }
    var_a1_2 = M2C_FIELD(arg0, u8 *, 0x4B);
    if (var_s1 < 0x64) {
        var_s2_3 = (var_s1 * 0x5C) + D_8007F618;
        do {
            temp_s0 = var_a1_2 & 0xFF;
            func_80012B50(var_s2_3, (s32) ((temp_s0 * 0x18) + D_8007E58C));
            temp_v1 = temp_s0 + 1;
            var_v0 = temp_v1;
            if (temp_v1 < 0) {
                var_v0 = temp_s0 + 0x80;
            }
            var_a1_2 = temp_v1 - (var_v0 & 0x180);
            var_s1 += 1;
            var_s2_3 += 0x5C;
        } while (var_s1 < 0x64);
    }
}

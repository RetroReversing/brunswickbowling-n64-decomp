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
s32 func_800580A0();
extern s32 D_8008AB10;
extern char D_8008CF28[];

void func_8002C64C(void *arg0, s16 arg1, s16 arg2, s16 arg3) {
    u8 sp18;
    s32 sp20;
    u8 sp30;
    s16 var_s3;
    char *var_a1;
    char *var_s1;
    s32 temp_a1;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s2;
    s32 var_s4;
    s32 var_v1;
    s32 var_v1_2;
    char *var_a0;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v1;
    u8 var_v0;
    void *var_a2;

    var_s3 = arg1;
    func_80039738(D_8008CF28, 6, 1, var_s3, (s32) arg3, arg0 + 9);
    var_s2 = 0;
    var_s0 = 0;
    var_a2 = arg0;
    var_a1 = &sp20;
    var_a0 = &sp18;
loop_1:
    if ((var_s0 < 3) && (var_s0 < (s32) M2C_FIELD(arg0, u8 *, 0xD)) && ((var_s0 != 2) || ((M2C_FIELD(arg0, u8 *, 0x12) ^ 9) == 0))) {
        temp_v1 = M2C_FIELD(var_a2, u8 *, 6);
        if (temp_v1 & 2) {
            *(u8 *)var_a0 = 0x58;
            *(s32 *)var_a1 = 6;
            var_a1 += 4;
            var_a0 += 1;
            var_s2 += 1;
            var_v1 = 0;
            if ((M2C_FIELD(arg0, u8 *, 0x12) ^ 9) != 0) {
                var_v1 = D_8008AB10 == 0;
            }
            var_a2 += 1;
            if (var_v1 == 0) {
                var_s0 += 1;
                goto loop_1;
            }
        } else if (temp_v1 & 4) {
            *(u8 *)var_a0 = 0x2F;
            *(s32 *)var_a1 = 6;
            var_a1 += 4;
            var_a0 += 1;
            var_s2 += 1;
            if ((M2C_FIELD(arg0, u8 *, 0x12) ^ 9) == 0) {
                var_a2 += 1;
                goto block_19;
            }
        } else {
            temp_v0 = M2C_FIELD(var_a2, u8 *, 0xF);
            if (temp_v0 != 0) {
                var_v0 = temp_v0 + 0x30;
            } else {
                var_v0 = 0x2D;
            }
            *(u8 *)var_a0 = var_v0;
            var_v1_2 = 6;
            if (M2C_FIELD(var_a2, u8 *, 6) & 1) {
                var_v1_2 = 8;
            }
            *(s32 *)var_a1 = var_v1_2;
            var_a1 += 4;
            var_a0 += 1;
            var_s2 += 1;
            var_a2 += 1;
block_19:
            var_s0 += 1;
            goto loop_1;
        }
    }
    var_s4 = 0xE;
    if (var_s2 == 2) {
        var_s3 -= 7;
    } else if (var_s2 == 3) {
        var_s4 = 0xA;
        var_s3 -= 0xA;
    }
    func_800580A0(&sp30, 0, 2, 6);
    var_s0_2 = 0;
    if (var_s2 > 0) {
        var_s1 = &sp20;
        do {
            temp_v0_2 = (&sp18)[var_s0_2];
            var_s0_2 += 1;
            sp30 = temp_v0_2;
            temp_a1 = *(s32 *)var_s1;
            var_s1 += 4;
            func_80039738(D_8008CF28, temp_a1, 1, var_s3, (s32) arg2, &sp30);
            var_s3 += var_s4;
        } while (var_s0_2 < var_s2);
    }
}

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

s32 func_80057FA0();
s32 func_800583CC();
u8 *func_8005852C();
s32 func_8005A970();
extern s8 D_800A58F4;

u8 *func_800588F0(s32 arg0, s32 arg1, s32 arg2, u8 *arg3) {
    s32 sp18;
    s32 sp1C;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s1;
    char *var_a1;
    char *var_s0;
    char *var_s0_2;

    var_a1 = func_8005852C(arg0, arg1, arg2, &sp18, &sp1C);
    var_s0 = arg3;
    if (sp1C != 0) {
        *arg3 = 0x2D;
        var_s0 = arg3 + 1;
    }
    if (sp18 == 0x7FFFFFFF) {
        func_8005A970(var_s0, var_a1);
        return arg3;
    }
    if (sp18 > 0) {
        if (sp18 < arg2) {
            var_s1 = arg2 - 1;
            if (var_s1 != -1) {
loop_21:
                *(u8 *)var_s0 = *(u8 *)var_a1;
                var_a1 += 1;
                var_s0 += 1;
                temp_v0 = sp18 - 1;
                sp18 = temp_v0;
                if (temp_v0 == 0) {
                    *(u8 *)var_s0 = 0x2E;
                    var_s0 += 1;
                }
                var_s1 -= 1;
                if (var_s1 != -1) {
                    goto loop_21;
                }
            }
            goto block_12;
        }
        if ((arg2 + 1) >= sp18) {
            func_80057FA0(var_s0, var_a1, sp18);
            var_s0[arg2] = 0x30;
            if (D_800A58F4 == 0) {
                var_s0[sp18] = 0;
            } else {
                var_s0[sp18] = 0x2E;
                M2C_FIELD(&var_s0[sp18], s8 *, 1) = 0;
            }
        } else {
            goto block_30;
        }
    } else if (sp18 >= -3) {
        M2C_FIELD(var_s0, u8 *, 0) = 0x30;
        M2C_FIELD(var_s0, s8 *, 1) = 0x2E;
        var_s0_2 = var_s0 + 1 + 1;
        if (sp18 != 0) {
            do {
                *(u8 *)var_s0_2 = 0x30;
                var_s0_2 += 1;
                temp_v0_2 = sp18 + 1;
                sp18 = temp_v0_2;
            } while (temp_v0_2 != 0);
        }
        func_80057FA0(var_s0_2, var_a1, arg2);
        var_s0 = &var_s0_2[arg2];
block_12:
        if (D_800A58F4 != 0) {
            M2C_FIELD(var_s0, u8 *, 0) = 0;
        } else {
            if (M2C_FIELD(var_s0, s8 *, -1) == 0x30) {
                do {
                    var_s0 -= 1;
                } while (M2C_FIELD(var_s0, s8 *, -1) == 0x30);
            }
            *(var_s0 - (M2C_FIELD(var_s0, s8 *, -1) == 0x2E)) = 0;
        }
    } else {
block_30:
        func_800583CC(var_a1, arg2, sp18 - 1, var_s0);
    }
    return arg3;
}

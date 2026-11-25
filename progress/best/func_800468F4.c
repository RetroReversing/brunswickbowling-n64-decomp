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

s32 func_8005978C();
s32 func_8005A970();
s32 func_8005AAD0();
s32 func_8005AB60();
extern char D_80079A6C[];
extern s32 D_8007E4E0;
extern char D_80081AD0[];
extern s32 D_8008B3DC;
extern u8 *D_8008F3DC;
extern char D_8008F494[];
extern u8 D_8009C620;

u8 *func_800468F4(void *arg0, u8 *arg1, s32 *arg2, s32 *arg3) {
    s32 var_a2;
    s32 temp_v0;
    s32 var_a3;
    s32 var_s4;
    s32 var_v0;
    s32 var_v1;
    u8 **var_s0;
    u8 *temp_a0;
    u8 *temp_s1;
    u8 *temp_s1_2;
    u8 *var_s1;
    u8 *var_s1_2;
    u8 *var_s1_3;
    u8 *var_s2;
    u8 temp_v1;
    u8 var_v0_2;
    u8 var_v0_3;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *var_s2_2;

    var_s1 = &D_8009C620;
    *arg2 = 0;
    *arg3 = 0;
    var_s2 = arg1;
    if (*arg1 == 0x5F) {
        var_s2 = arg1 + 1;
        D_8009C620 = 0x5F;
        var_s1 = D_8009C620 + 1;
    }
    temp_v1 = M2C_FIELD(var_s2, u8 *, 0);
    var_s2_2 = var_s2 + 1;
    if ((u32) (temp_v1 - 0x31) < 5U) {
        M2C_FIELD(var_s1, u8 *, 0) = temp_v1;
        if ((u32) (M2C_FIELD(var_s2, u8 *, 1) - 0x61) < 3U) {
            var_s2_2 += 1;
        }
        M2C_FIELD(var_s1, s8 *, 1) = 0x5F;
        var_s1_2 = var_s1 + 1 + 1;
        var_s4 = 0;
        var_s0 = &D_8008F3DC;
loop_6:
        var_v0 = (u32) var_s4 < 0xEU;
        if (var_s4 < 0xE) {
            temp_v0 = func_8005AAD0(*var_s0);
            var_s0 += 4;
            if (func_8005AB60(var_s2_2 + 1, *var_s0, temp_v0) != 0) {
                var_s4 += 1;
                goto loop_6;
            }
            temp_a0 = var_s1_2;
            var_s1_2 = &var_s1_2[temp_v0];
            func_8005A970(temp_a0, (&D_8008F3DC)[var_s4]);
            var_v0 = (u32) var_s4 < 0xEU;
        }
        if (var_v0 != 0) {
            switch (var_s4) {
            case 0:
                temp_v0_2 = *((D_8007E4E0 * 4) + D_80081AD0);
                var_v1 = M2C_FIELD(temp_v0_2, u8 *, 0x19) - 7;
                if (M2C_FIELD(temp_v0_2, s32 *, 0x24) != 0) {
                    var_v1 -= 0xF;
                }
                M2C_FIELD(var_s1_2, s8 *, -4) = (s8) ((var_v1 / 3) + 0x31);
                M2C_FIELD(var_s1_2, u8 *, 0) = M2C_FIELD(*((D_8007E4E0 * 4) + D_80081AD0), u8 *, 0x1A) + 0x61;
                *arg2 = *(((M2C_FIELD(*((D_8007E4E0 * 4) + D_80081AD0), u8 *, 0x1C) + 4) * 4) + D_8008F494);
                var_s1_3 = var_s1_2 + 1;
                *arg3 = *((M2C_FIELD(*((D_8007E4E0 * 4) + D_80081AD0), u8 *, 0x1B) * 4) + D_8008F494);
                break;
            case 1:
            case 2:
                var_v0_2 = M2C_FIELD(*((D_8007E4E0 * 4) + D_80081AD0), u8 *, 0x1D) + 0x61;
block_22:
                *var_s1_2 = var_v0_2;
                var_s1_3 = var_s1_2 + 1;
                break;
            case 3:
            case 4:
                var_v0_2 = M2C_FIELD(*((D_8007E4E0 * 4) + D_80081AD0), u8 *, 0x1E) + 0x61;
                goto block_22;
            case 5:
            case 6:
                M2C_FIELD(var_s1_2, u8 *, 0) = 0x5F;
                temp_s1 = var_s1_2 + 1;
                M2C_FIELD(var_s1_2, s8 *, 1) = 0x66;
                M2C_FIELD(temp_s1, s8 *, 1) = 0x61;
                var_v0_3 = M2C_FIELD(*((D_8007E4E0 * 4) + D_80081AD0), u8 *, 0x1C);
                var_s1_2 = temp_s1 + 1 + 1;
block_21:
                var_v0_2 = var_v0_3 + 0x61;
                goto block_22;
            case 7:
            case 8:
                M2C_FIELD(var_s1_2, u8 *, 0) = 0x5F;
                temp_s1_2 = var_s1_2 + 1;
                M2C_FIELD(var_s1_2, s8 *, 1) = 0x66;
                M2C_FIELD(temp_s1_2, s8 *, 1) = 0x61;
                var_v0_3 = M2C_FIELD(*((D_8007E4E0 * 4) + D_80081AD0), u8 *, 0x1C);
                var_s1_2 = temp_s1_2 + 1 + 1;
                goto block_21;
            case 9:
                var_v0_2 = 0x61;
                goto block_22;
            case 10:
            case 11:
                var_v0_3 = M2C_FIELD(*((D_8007E4E0 * 4) + D_80081AD0), u8 *, 0x21);
                goto block_21;
            case 12:
            case 13:
                if (M2C_FIELD(arg0, u8 *, 6) == 0x69) {
                    temp_v0_3 = *((D_8007E4E0 * 4) + D_80081AD0);
                    var_a3 = 0x61;
                    if (temp_v0_3 != NULL) {
                        var_a3 = M2C_FIELD(temp_v0_3, u8 *, 0x1F) + 0x61;
                    }
                    var_a2 = 0x6C;
                    if (var_s4 == 0xC) {
                        var_a2 = 0x66;
                    }
                } else {
                    temp_v0_4 = *((D_8007E4E0 * 4) + D_80081AD0);
                    var_a3 = 0x61;
                    if (temp_v0_4 != NULL) {
                        var_a3 = M2C_FIELD(temp_v0_4, u8 *, 0x1F) + 0x61;
                    }
                    if (D_8008B3DC == 0xE) {

                    }
                    var_a2 = 0x6C;
                    if (var_s4 == 0xC) {
                        var_a2 = 0x66;
                    }
                }
                func_8005978C(&D_8009C620, D_80079A6C, var_a2, var_a3);
                var_s1_3 = &(&D_8009C620)[func_8005AAD0(&D_8009C620)];
                break;
            }
            *var_s1_3 = 0;
            return &D_8009C620;
        }
        goto block_38;
    }
block_38:
    return arg1;
}

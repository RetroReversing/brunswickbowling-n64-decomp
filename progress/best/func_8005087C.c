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

s32 func_800504D8();
s32 func_800580A0();
extern u32 D_8009DA60;
extern s32 D_8009DA68;
extern s32 *D_8009DA70;
extern s32 *D_8009DA74;
extern char D_B0287D00[];

s32 *func_8005087C(u8 *arg0) {
    s32 sp10;
    char *var_s0;
    char *var_s1;
    u32 var_a0;
    u32 var_a0_2;
    u8 *var_v0;
    u8 temp_v1;

    func_800580A0(&sp10, 0, 8);
    var_a0 = 0;
    var_v0 = arg0;
loop_1:
    temp_v1 = *var_v0;
    if (temp_v1 != 0) {
        *(&sp10 + var_a0) = temp_v1;
        var_a0 += 1;
        var_v0 = arg0 + var_a0;
        if (var_a0 < 8U) {
            goto loop_1;
        }
    }
    var_a0_2 = 0;
    var_s1 = D_8009DA70;
    if (D_8009DA60 != 0) {
        var_s0 = var_s1 + 0x18;
loop_5:
        if (M2C_FIELD(&sp10, s32 *, 0) != *(s32 *)var_s1) {
            var_a0_2 += 1;
            goto block_14;
        }
        if (M2C_FIELD(&sp10, s32 *, 4) != M2C_FIELD(var_s0, s32 *, -0x14)) {
            var_a0_2 += 1;
block_14:
            var_s0 += 0x28;
            var_s1 += 0x28;
            if (var_a0_2 >= (u32) D_8009DA60) {
                goto block_15;
            }
            goto loop_5;
        }
        D_8009DA74 = var_s1;
        if (M2C_FIELD(var_s0, s32 *, 8) & 7) {
            func_800504D8(M2C_FIELD(var_s0, s32 *, -4) + D_B0287D00, &D_8009DA68, 4, &D_8009DA74);
            M2C_FIELD(var_s0, s32 *, 0) = D_8009DA68;
        }
        return var_s1;
    }
block_15:
    return NULL;
}

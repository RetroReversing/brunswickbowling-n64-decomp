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

M2C_UNK func_800375C0(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_800417A0(M2C_UNK *, void **);          /* extern */
extern s32 D_80082780;
extern M2C_UNK D_8008C864;
extern M2C_UNK D_8008EBD0;

s32 func_80013BE8(void *arg0, s32 arg2) {
    M2C_UNK (*temp_a0)(M2C_UNK);
    M2C_UNK (*var_v0_2)(s32);
    s16 var_a0;
    s32 var_s0;
    s32 var_v0;
    void **temp_v1;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    var_s0 = 1;
    if (D_80082780 == arg0) {
        switch (arg2) {                             /* irregular */
        case 0x20D:
            temp_v0 = *M2C_FIELD(arg0, void ***, 0x34);
            var_a0 = M2C_FIELD(temp_v0, s16 *, 0x18);
            var_v0_2 = M2C_FIELD(temp_v0, M2C_UNK (**)(s32), 0x1C);
            var_s0 = 0;
block_5:
            var_v0_2(M2C_FIELD(arg0, void ***, 0x34) + var_a0);
            break;
        case 0x20E:
            temp_v0_2 = *M2C_FIELD(arg0, void ***, 0x34);
            var_s0 = 0;
            var_a0 = M2C_FIELD(temp_v0_2, s16 *, 0x20);
            var_v0_2 = M2C_FIELD(temp_v0_2, M2C_UNK (**)(s32), 0x24);
            goto block_5;
        case 0x215:
            temp_v1 = M2C_FIELD(arg0, void ***, 0x34);
            temp_v0_3 = *temp_v1;
            if (M2C_FIELD(temp_v0_3, s32 (**)(void *), 0xC)(temp_v1 + M2C_FIELD(temp_v0_3, s16 *, 8)) != 0) {
                var_s0 = 0;
                func_800417A0(&D_8008EBD0, M2C_FIELD(arg0, void ***, 0x34));
            }
            break;
        }
        var_v0 = var_s0;
        if (var_s0 == 0) {
            func_800375C0(&D_8008C864, 1);
            temp_a0 = M2C_FIELD(arg0, M2C_UNK (**)(M2C_UNK), 0x3C);
            var_v0 = var_s0;
            if (temp_a0 != NULL) {
                temp_a0(temp_a0);
                goto block_12;
            }
        }
    } else {
block_12:
        var_v0 = var_s0;
    }
    return var_v0;
}

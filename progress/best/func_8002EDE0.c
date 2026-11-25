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

M2C_UNK func_80012BD4(void *, s32, s16, s16);       /* extern */
M2C_UNK func_80020178(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_8002110C(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_80021324(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_80030EF8(M2C_UNK *);                   /* extern */
M2C_UNK func_80031350(M2C_UNK *, M2C_UNK *);        /* extern */
s32 func_800315E0(M2C_UNK *);                       /* extern */
s32 func_80031780(M2C_UNK *);                       /* extern */
M2C_UNK func_800317F4(M2C_UNK *);                   /* extern */
extern s32 D_8007D704;
extern s32 D_8007DA44;
extern void *D_80081AD0;
extern M2C_UNK D_80083BA8;
extern s32 D_80089944;
extern s32 D_8008AB10;
extern M2C_UNK D_8008B110;
extern M2C_UNK D_8008B3A4;

void func_8002EDE0(void *arg0) {
    M2C_UNK *var_a1;
    s16 temp_s2;
    s16 temp_s2_2;
    s16 var_a3;
    s16 var_a3_2;
    s32 var_a0;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_v1;
    s32 var_v1_2;
    void **temp_v1;
    void **temp_v1_2;
    void **temp_v1_3;
    void **temp_v1_4;
    void **var_s0;
    void **var_s0_2;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;

    var_a1 = &D_8008B3A4;
    if (M2C_FIELD(&D_8008B3A4, s32 *, 0x18) != 0) {
        var_s1 = 0;
        if (M2C_FIELD(&D_80083BA8, s32 *, 0x5480) != 0) {
            func_8002110C(&D_80083BA8, &D_8008B3A4);
            var_a0 = 0;
        } else {
            var_s0 = &D_80081AD0;
loop_4:
            if (var_s1 < D_8007DA44) {
                temp_v1 = M2C_FIELD(*var_s0, void ***, 0x44);
                temp_v0 = *temp_v1;
                temp_s2 = M2C_FIELD(M2C_FIELD(temp_v0, void *(**)(void *, M2C_UNK), 0x44)(temp_v1 + M2C_FIELD(temp_v0, s16 *, 0x40), 9), s16 *, 4);
                var_a3 = -1;
                if (D_8007DA44 >= 2) {
                    temp_v1_2 = M2C_FIELD((&D_80081AD0)[var_s1 == 0], void ***, 0x44);
                    temp_v0_2 = *temp_v1_2;
                    var_a3 = M2C_FIELD(M2C_FIELD(temp_v0_2, void *(**)(void *, M2C_UNK), 0x44)(temp_v1_2 + M2C_FIELD(temp_v0_2, s16 *, 0x40), 9), s16 *, 4);
                }
                if (M2C_FIELD(&D_8008B3A4, s32 *, 0x44) < 4) {
                    var_a3 = -1;
                }
                temp_a0 = *var_s0;
                var_s0 += 1;
                var_s1 += 1;
                func_80012BD4(temp_a0, M2C_FIELD(&D_8008B3A4, s32 *, 0x44), temp_s2, var_a3);
                goto loop_4;
            }
            func_80021324(&D_80083BA8, 9);
            var_a0 = 0;
        }
        if (M2C_FIELD(&D_8008B3A4, s32 *, 0x44) == 9) {
            var_a0 = func_800315E0(&D_8008B3A4) != 0;
        }
        if (var_a0 != 0) {
            func_800317F4(&D_8008B3A4);
            goto block_17;
        }
        if (func_80031780(&D_8008B3A4) != 0) {
            func_80030EF8(&D_8008B3A4);
            return;
        }
block_17:
        func_80031350(&D_8008B3A4, &D_8008B110);
        return;
    }
    var_v1 = 0;
    if (D_8008AB10 == 0) {
        var_v1 = D_80089944 == 0;
    }
    var_s1_2 = 0;
    if (var_v1 != 0) {
        var_s0_2 = &D_80081AD0;
loop_22:
        var_a1 = (M2C_UNK *)9;
        if (var_s1_2 < D_8007DA44) {
            temp_v1_3 = M2C_FIELD(*var_s0_2, void ***, 0x44);
            temp_v0_3 = *temp_v1_3;
            temp_s2_2 = M2C_FIELD(M2C_FIELD(temp_v0_3, void *(**)(void *, M2C_UNK), 0x44)(temp_v1_3 + M2C_FIELD(temp_v0_3, s16 *, 0x40), 9), s16 *, 4);
            var_a3_2 = -1;
            if (D_8007DA44 >= 2) {
                temp_v1_4 = M2C_FIELD((&D_80081AD0)[var_s1_2 == 0], void ***, 0x44);
                temp_v0_4 = *temp_v1_4;
                var_a3_2 = M2C_FIELD(M2C_FIELD(temp_v0_4, void *(**)(void *, M2C_UNK), 0x44)(temp_v1_4 + M2C_FIELD(temp_v0_4, s16 *, 0x40), 9), s16 *, 4);
            }
            if ((M2C_FIELD(&D_8008B3A4, s32 *, 0x44) < 4) < 4) {
                var_a3_2 = -1;
            }
            temp_a0_2 = *var_s0_2;
            var_s0_2 += 4;
            var_s1_2 += 1;
            func_80012BD4(temp_a0_2, M2C_FIELD(&D_8008B3A4, s32 *, 0x44), temp_s2_2, var_a3_2);
            goto loop_22;
        }
    }
    var_v1_2 = 0;
    if ((D_8008AB10 != 0) || (D_80089944 == 0)) {
        var_v1_2 = 1;
    }
    if (var_v1_2 != 0) {
        if (D_8007D704 == 0) {
            M2C_FIELD(&D_80083BA8, s32 *, 0x5494) = 0;
            M2C_FIELD(&D_80083BA8, s32 *, 8) = 1;
            func_80020178(&D_80083BA8, var_a1);
        }
    }
    M2C_FIELD(arg0, s32 *, 0x14) = 1;
}

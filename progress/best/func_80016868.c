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

M2C_UNK func_8000EC00(s16, M2C_UNK);                /* extern */
M2C_UNK func_80012B0C(s32, s16, s16);               /* extern */
M2C_UNK func_80016550(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_80016610(s32 *);                       /* extern */
s32 func_80016CF0(M2C_UNK *);                       /* extern */
M2C_UNK func_8001C210(M2C_UNK *, void **);          /* extern */
s32 func_8002C4E0(s32);                             /* extern */
s32 func_8002DC80(M2C_UNK *, s32);                  /* extern */
s32 func_8002DD30(M2C_UNK *, s32);                  /* extern */
M2C_UNK func_8002DF30(M2C_UNK *);                   /* extern */
M2C_UNK func_80031350(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_80032870(M2C_UNK *);                   /* extern */
M2C_UNK func_800452EC(M2C_UNK *);                   /* extern */
extern s32 D_8007D704;
extern s32 D_8007DA44;
extern s32 D_8007E4E0;
extern M2C_UNK D_80081AD0;
extern M2C_UNK D_800827A4;
extern s32 D_80082D5C;
extern M2C_UNK D_80082D70;
extern M2C_UNK D_80082ED0;
extern M2C_UNK D_80082F00;
extern M2C_UNK D_80082F50;
extern s32 D_80089944;
extern M2C_UNK D_8008A328;
extern M2C_UNK D_8008AB10;
extern M2C_UNK D_8008B0D0;
extern M2C_UNK D_8008B3A4;
extern s32 D_8008B3BC;
extern M2C_UNK D_8008B470;
extern M2C_UNK D_8008BA90;
extern s32 D_8008E9CC;
extern M2C_UNK D_8008ED80;

void func_80016868(void *arg0) {
    M2C_UNK *sp18;
    M2C_UNK *sp20;
    M2C_UNK *sp28;
    M2C_UNK *sp30;
    void *sp38;
    M2C_UNK *var_a1;
    s32 temp_s3;
    s32 temp_v1_4;
    s32 var_s2;
    s32 var_s3;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    void **temp_a0;
    void **temp_v1;
    void **temp_v1_2;
    void **temp_v1_3;
    void **temp_v1_5;
    void **temp_v1_6;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;

    var_s2 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x14) == &D_80082F00) {
        temp_v1 = M2C_FIELD(*((D_8007E4E0 * 4) + &D_80081AD0), void ***, 0x44);
        temp_v0 = *temp_v1;
        temp_s3 = M2C_FIELD(temp_v0, s32 (**)(void *), 0x3C)(temp_v1 + M2C_FIELD(temp_v0, s16 *, 0x38));
        func_80012B0C(*((D_8007E4E0 * 4) + &D_80081AD0), M2C_FIELD(&D_800827A4, s16 *, 0x5AE), M2C_FIELD(&D_800827A4, s16 *, 0x5B0));
        func_8000EC00(M2C_FIELD(&D_800827A4, s16 *, 0x5B0), 0);
        func_80032870(&D_8008B470);
        if (M2C_FIELD(&D_8008AB10, s32 *, 0) != 0) {
            func_8002DF30(&D_8008AB10);
            temp_v1_2 = M2C_FIELD(*((D_8007E4E0 * 4) + &D_80081AD0), void ***, 0x44);
            temp_v0_2 = *temp_v1_2;
            var_v0 = M2C_FIELD(temp_v0_2, s32 (**)(void *), 0x2C)(temp_v1_2 + M2C_FIELD(temp_v0_2, s16 *, 0x28));
        } else if (D_80089944 != 0) {
            temp_a0 = (D_8007E4E0 * 0x18) + &D_8008A328;
            temp_v0_3 = *temp_a0;
            var_v0 = M2C_FIELD(temp_v0_3, s32 (**)(void *), 0x2C)(temp_a0 + M2C_FIELD(temp_v0_3, s16 *, 0x28));
        } else {
            temp_v1_3 = M2C_FIELD(*((D_8007E4E0 * 4) + &D_80081AD0), void ***, 0x44);
            temp_v0_4 = *temp_v1_3;
            var_v0 = func_8002C4E0(M2C_FIELD(temp_v0_4, s32 (**)(void *, s32), 0x44)(temp_v1_3 + M2C_FIELD(temp_v0_4, s16 *, 0x40), temp_s3 - 1));
        }
        D_80082D5C = var_v0;
        var_a1 = &D_80082ED0;
        goto block_36;
    }
    var_s3 = 0;
    if (D_80082D5C != 0) {
        if (M2C_FIELD(&D_8008AB10, s32 *, 0) != 0) {
            var_s2 = M2C_FIELD(&D_8008AB10, s32 *, 0x28) == 1;
            if (var_s2 == 0) {
                var_s3 = func_8002DC80(&D_8008AB10, D_8007E4E0);
                D_8007E4E0 = func_8002DD30(&D_8008AB10, D_8007E4E0);
            }
        } else {
            temp_v1_4 = D_8007E4E0 + 1;
            D_8007E4E0 = temp_v1_4;
            if (temp_v1_4 >= D_8007DA44) {
                var_v1 = 0;
                D_8007E4E0 = 0;
                if (D_80089944 == 0) {
                    var_v1 = D_8008B3BC == 0;
                }
                if (var_v1 != 0) {
                    var_s3 = 1;
                }
            } else if (D_8008B3BC != 0) {
                var_s3 = 1;
            }
            if (D_80089944 == 0) {
                func_80016610(&D_8007E4E0);
            }
            temp_v1_5 = M2C_FIELD(*((D_8007E4E0 * 4) + &D_80081AD0), void ***, 0x44);
            temp_v0_5 = *temp_v1_5;
            if (M2C_FIELD(temp_v0_5, s32 (**)(void *), 0x24)(temp_v1_5 + M2C_FIELD(temp_v0_5, s16 *, 0x20)) != 0) {
                var_s2 = func_80016CF0(&D_800827A4) == 0;
            }
            var_v1_2 = 0;
            if (D_8007D704 != 0) {
                temp_v1_6 = M2C_FIELD(*((D_8007E4E0 * 4) + &D_80081AD0), void ***, 0x44);
                temp_v0_6 = *temp_v1_6;
                var_v1_2 = M2C_FIELD(temp_v0_6, s32 (**)(void *), 0x3C)(temp_v1_6 + M2C_FIELD(temp_v0_6, s16 *, 0x38)) >= 4;
            }
            if (var_v1_2 != 0) {
                var_s2 = 1;
            }
        }
        if (var_s3 != 0) {
            func_800452EC(&D_8008ED80);
        }
    }
    D_8008E9CC = 0;
    if (var_s2 != 0) {
        func_80031350(&D_8008B3A4, &D_8008B0D0);
        sp18 = &D_8008B3A4;
        sp30 = &D_8008B3A4;
        sp28 = &D_8008B3A4;
        sp38 = &D_8008BA90 + 8;
        func_8001C210(&D_8008B3A4, &sp38);
        sp20 = sp28;
        M2C_FIELD(M2C_FIELD(&D_800827A4, void **, 0), void ***, 4) = (void **) M2C_FIELD(&D_800827A4, void ***, 4);
        *M2C_FIELD(&D_800827A4, void ***, 4) = M2C_FIELD(&D_800827A4, void **, 0);
        return;
    }
    if ((D_8007DA44 == 1) || (D_80082D5C == 0)) {
        var_a1 = &D_80082D70;
    } else {
        var_a1 = &D_80082F50;
    }
block_36:
    func_80016550(&D_800827A4, var_a1);
}

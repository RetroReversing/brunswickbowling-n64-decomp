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

s16 func_8000EBB0();                                /* extern */
s32 func_8000FCD0();                                /* extern */
M2C_UNK func_800149E4(s32);                         /* extern */
M2C_UNK func_80016868(M2C_UNK *);                   /* extern */
M2C_UNK func_8001A0C4(M2C_UNK *);                   /* extern */
M2C_UNK func_8001A12C(M2C_UNK *);                   /* extern */
M2C_UNK func_8001AA60(); /* extern */
M2C_UNK func_8001AAB0(void *);                      /* extern */
s32 func_8002AB14(M2C_UNK);                         /* extern */
M2C_UNK func_80032A74(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80032AB0(M2C_UNK *, M2C_UNK);          /* extern */
s32 func_80032CE8(M2C_UNK *);                       /* extern */
M2C_UNK func_80032DA0(M2C_UNK *, s32);              /* extern */
M2C_UNK func_800375C0(s32, M2C_UNK);                /* extern */
M2C_UNK func_80037744(s32);                         /* extern */
M2C_UNK func_80037EC4(M2C_UNK *);                   /* extern */
M2C_UNK func_80046338();        /* extern */
M2C_UNK func_800473DC(M2C_UNK *, M2C_UNK *);        /* extern */
extern f64 D_800747A8;
extern s32 D_8007C3F8;
extern s32 D_8007C3FC;
extern s32 D_8007C400;
extern M2C_UNK D_80082198;
extern M2C_UNK D_800827A4;
extern u16 D_80082D52;
extern s16 D_80082D54;
extern M2C_UNK D_80082ED0;
extern s32 D_8008996C;
extern M2C_UNK D_8008B470;
extern M2C_UNK D_8008C5E0;
extern M2C_UNK D_8008C670;
extern M2C_UNK D_8008C9CC;
extern s32 D_8008E9E0;
extern s32 D_8008F0A0;
extern M2C_UNK D_8008F2F0;
extern M2C_UNK D_80092484;
extern s32 D_80092524;
extern s32 D_800925F0;

s32 func_8001AFD8(void *arg0) {
    union {
        unsigned char bytes[24];
        struct { M2C_UNK value; } view_sp10;
        struct { unsigned char pad[16]; f64 value; } view_sp20;
    } m2c_initial_frame;

                 
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a1;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    void *temp_a3;
    void *var_a1;
    void *var_a2;

    if (M2C_FIELD(arg0, s32 *, 0x44) != 0) {
        func_80032A74(&D_8008B470, 1, 1);
        func_80032AB0(&D_8008B470, 0);
        M2C_FIELD(arg0, s32 *, 0x44) = 0;
        M2C_FIELD(arg0, s32 *, 0x40) = 0;
    }
    temp_a1 = M2C_FIELD(arg0, s32 *, 0x40);
    if (temp_a1 != 0) {
        func_80032DA0(&D_8008B470, temp_a1);
        M2C_FIELD(arg0, s32 *, 0x40) = 0;
    }
    if (func_80032CE8(&D_8008B470) == 0) {
        var_a2 = &D_8008B470 + 0x368;
        var_a1 = &D_8008B470 + 0x338;
        temp_a3 = var_a2;
        D_80092524 = 1;
        D_800925F0 = 1;
        M2C_FIELD(&D_8008B470, u16 *, 0x330) = (u16) D_80082D52;
        do {
            M2C_FIELD(var_a2, s32 *, 0) = (s32) M2C_FIELD(var_a1, s32 *, 0);
            M2C_FIELD(var_a2, s32 *, 4) = (s32) M2C_FIELD(var_a1, s32 *, 4);
            M2C_FIELD(var_a2, s32 *, 8) = (s32) M2C_FIELD(var_a1, s32 *, 8);
            M2C_FIELD(var_a2, s32 *, 0xC) = (s32) M2C_FIELD(var_a1, s32 *, 0xC);
            var_a1 += 0x10;
            var_a2 += 0x10;
        } while (var_a1 != temp_a3);
        D_8008996C = 1;
        func_8001AA60(arg0, NULL, var_a2, temp_a3);
        temp_a0 = M2C_FIELD(arg0, s32 *, 0x20);
        if (temp_a0 != 0) {
            func_80037744(temp_a0);
            M2C_FIELD(arg0, s32 *, 0x20) = 0;
        }
        temp_a0_2 = M2C_FIELD(arg0, s32 *, 0x1C);
        if (temp_a0_2 != 0) {
            func_80037744(temp_a0_2);
            M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        }
        func_80016868(&D_800827A4);
        return 2;
    }
    func_800473DC(&D_80092484, &m2c_initial_frame.view_sp10.value);
    if (D_800747A8 < m2c_initial_frame.view_sp20.value) {
        temp_v1 = M2C_FIELD(arg0, s32 *, 0x3C);
        if (temp_v1 == 0) {
            func_800149E4(*(((func_8002AB14(3) >= 2) * 4) + &D_80082198));
        } else if (temp_v1 == 3) {
            if (D_8008F0A0 != 0) {
                do {

                } while (func_8000FCD0() != 0);
                D_8008F0A0 = 0;
                M2C_FIELD(arg0, s32 *, 0x40) = (s32) D_8008E9E0;
            }
            D_80082D54 = func_8000EBB0();
            func_8001AAB0(arg0);
        }
        M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) + 1);
    }
    if (D_8007C3F8 != 0) {
        var_a0 = 0;
        if (M2C_FIELD(&D_8008B470, s16 *, 0x2FA) >= D_8007C3F8) {
            var_a0 = M2C_FIELD(&D_8008B470, s16 *, 0x2FC) < D_8007C3F8;
        }
        if (var_a0 != 0) {
            func_8001AA60(arg0, &D_8008C5E0);
            func_80037EC4(&D_8008C9CC);
        }
    }
    if (D_8007C400 != 0) {
        var_a0_2 = 0;
        if (M2C_FIELD(&D_8008B470, s16 *, 0x2FA) >= D_8007C400) {
            var_a0_2 = M2C_FIELD(&D_8008B470, s16 *, 0x2FC) < D_8007C400;
        }
        if (var_a0_2 != 0) {
            func_80046338(&D_8008F2F0, &D_8008B470);
            func_8001AA60(arg0, &D_8008C670);
        }
    }
    if (D_8007C3FC != 0) {
        var_a0_3 = 0;
        if (M2C_FIELD(&D_8008B470, s16 *, 0x2FA) >= D_8007C3FC) {
            var_a0_3 = M2C_FIELD(&D_8008B470, s16 *, 0x2FC) < D_8007C3FC;
        }
        if ((var_a0_3 != 0) && ((func_8001AA60(arg0, NULL), (M2C_FIELD(arg0, s32 *, 0x48) == 0)) || (M2C_FIELD(arg0, s32 *, 0x2C) == 0))) {
            func_8001A12C(&D_80082ED0);
        }
    }
    if (M2C_FIELD(arg0, s32 *, 0x48) != 0) {
        temp_a0_3 = M2C_FIELD(arg0, s32 *, 0x24);
        var_v1 = 0;
        if (M2C_FIELD(&D_8008B470, s16 *, 0x2FA) >= temp_a0_3) {
            var_v1 = M2C_FIELD(&D_8008B470, s16 *, 0x2FC) < temp_a0_3;
        }
        if (var_v1 != 0) {
            func_800375C0(M2C_FIELD(arg0, s32 *, 0x20), 0);
            func_80046338(&D_8008F2F0);
            if ((M2C_FIELD(arg0, s32 *, 0x38) >= 2) && (((s32) M2C_FIELD(arg0, s32 *, 0x30) >> 1) < M2C_FIELD(arg0, s32 *, 0x34))) {
                func_8001A0C4(&D_80082ED0);
            }
        }
        if (M2C_FIELD(arg0, s32 *, 0x48) != 0) {
            temp_a0_4 = M2C_FIELD(arg0, s32 *, 0x28);
            var_v1_2 = 0;
            if (M2C_FIELD(&D_8008B470, s16 *, 0x2FA) >= temp_a0_4) {
                var_v1_2 = M2C_FIELD(&D_8008B470, s16 *, 0x2FC) < temp_a0_4;
            }
            if (var_v1_2 != 0) {
                func_800375C0(M2C_FIELD(arg0, s32 *, 0x1C), 0);
            }
            if (M2C_FIELD(arg0, s32 *, 0x48) != 0) {
                temp_a0_5 = M2C_FIELD(arg0, s32 *, 0x2C);
                if (temp_a0_5 != 0) {
                    var_v1_3 = 0;
                    if (M2C_FIELD(&D_8008B470, s16 *, 0x2FA) >= temp_a0_5) {
                        var_v1_3 = M2C_FIELD(&D_8008B470, s16 *, 0x2FC) < temp_a0_5;
                    }
                    if (var_v1_3 != 0) {
                        func_8001A12C(&D_80082ED0);
                    }
                }
            }
        }
    }
    return 1;
}

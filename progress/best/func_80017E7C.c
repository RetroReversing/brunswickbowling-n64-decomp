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

extern int D_8008E9CC;
extern short D_800827D0;
extern short D_800827CE;
extern unsigned short D_800827CC;
extern short D_800827CA;
extern short D_800827C4;
extern short D_800827C6;
extern int D_800926BC;
extern int D_80092788;
extern int D_80092784;
extern float D_80092764;
s32 func_80011C10();
s32 func_800149E4();
s32 func_80016550();
s32 func_80016F8C();
s32 func_800177C0();
s16 func_80017B98();
s32 func_80017D3C();
s32 func_80019ACC();
s32 func_8001C210();
s32 func_80023220();
s32 func_8002AB14();
s32 func_8002E3A0();
s32 func_8002E4A8();
s32 func_8002E54C();
s32 func_80038924();
s32 func_8003AEBC();
s32 func_8003FEDC();
s32 func_8004600C();
s32 func_80046014();
s32 func_80047948(s32 *, f32, s32, s32); /* extern */
s32 func_80047A68();
extern f64 D_80074470;
extern f64 D_80074478;
extern f64 D_80074480;
extern f64 D_80074488;
extern f64 D_80074490;
extern f64 D_80074498;
extern s32 D_8007D704;
extern s32 D_8007E4E0;
extern char D_80081AD0[];
extern char D_80082418[];
extern char D_80082488[];
extern char D_800827A4[];
extern s32 D_80082E5C;
extern char D_80082E90[];
extern char D_80082ED0[];
extern s32 D_800891DC;
extern s32 D_8008920C;
extern char D_800892F0[];
extern s32 D_8008ABE0;
extern char D_8008CB50[];
extern char D_8008E9B0[];
extern s32 D_8008F09C;
extern char D_8008F2F0[];
extern char D_8009261C[];
extern char D_800926E8[];

void func_80017E7C(void *arg0) {
    s32 *sp18;
    s32 *sp20;
    s32 *sp28;
    s32 *sp30;
    void *sp38;
    f64 sp40;
    f64 sp48;
    s32 *var_a0;
    f64 temp_fv0;
    s16 temp_s0;
    s16 var_s1;
    s32 temp_ft2;
    s32 temp_ft2_2;
    s32 var_a0_2;
    s32 var_v1;
    u16 temp_s1;
    u16 temp_s2;
    u16 temp_s7;
    u16 var_s4;
    u8 temp_v1;
    void **temp_v0_2;
    void *temp_a0;
    void *temp_v0;

    M2C_FIELD(arg0, s32 *, 0x40) = 1;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    func_8003FEDC(D_8008E9B0);
    if (D_8007D704 == 0) {
        D_8008E9CC = 1;
    }
    func_80017D3C(arg0);
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    func_800177C0(arg0);
    func_80016F8C();
    func_80038924(D_8008CB50, 2);
    func_80038924(D_8008CB50, 1);
    func_80047A68(D_800926E8);
    func_80023220(D_800892F0);
    M2C_FIELD(arg0, s32 *, 0x48) = 1;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    if (D_80082E5C != 0) {
        D_80082E5C = 0;
        sp18 = D_800892F0;
        sp30 = D_800892F0;
        sp28 = D_800892F0;
        sp38 = arg0 + 8;
        func_8001C210(D_800892F0, &sp38);
        sp20 = sp28;
    }
    temp_v0 = *((D_8007E4E0 * 4) + D_80081AD0);
    temp_a0 = temp_v0 + 0x54;
    var_s4 = M2C_FIELD(temp_a0, u16 *, 2);
    temp_s1 = M2C_FIELD(temp_v0, u16 *, 0x54);
    temp_s7 = M2C_FIELD(temp_a0, u16 *, 4);
    if ((M2C_FIELD(temp_v0, u8 *, 0x18) ^ 2) == 0) {
        var_s1 = func_80017B98(arg0, 0);
    } else {
        temp_s2 = (var_s4 + 0xA) - func_8002AB14(0x15);
        temp_s0 = (temp_s1 + 0xA) - func_8002AB14(0x15);
        func_80011C10(*((D_8007E4E0 * 4) + D_80081AD0), D_8008F09C == 0, &sp40, &sp48);
        var_s1 = temp_s0;
        temp_ft2 = (s32) ((sp40 * D_80074470 * D_80074478) + D_80074480);
        var_s4 = temp_s2;
        if (temp_s0 < temp_ft2) {
            var_s1 = (s16) temp_ft2;
        }
        temp_ft2_2 = (s32) ((sp48 * D_80074470 * D_80074478) + D_80074480);
        if (temp_ft2_2 < var_s1) {
            var_s1 = (s16) temp_ft2_2;
        }
        if ((s16) temp_s2 < 2) {
            var_s4 = 2;
        }
        if ((s16) var_s4 >= 0x19D) {
            var_s4 = 0x19C;
        }
        temp_v0_2 = (D_8007E4E0 * 4) + D_80081AD0;
        D_800827D0 = (s16) M2C_FIELD(*temp_v0_2, u8 *, 0x1F);
        D_800827CE = (s16) M2C_FIELD(*temp_v0_2, u8 *, 0x20);
    }
    func_8003AEBC(M2C_FIELD(*((D_8007E4E0 * 4) + D_80081AD0), u8 *, 0x1F));
    temp_fv0 = ((f64) var_s1 / D_80074488) * D_80074490;
    D_800827CC = var_s4;
    D_800827CA = var_s1;
    M2C_FIELD(arg0, f64 *, 0x58) = temp_fv0;
    M2C_FIELD(arg0, f64 *, 0x60) = temp_fv0;
    func_8002E3A0(&D_8008ABE0);
loop_16:
    if ((s16) temp_s7 != D_8008ABE0) {
        if (D_8008ABE0 < (s16) temp_s7) {
            func_8002E4A8(&D_8008ABE0);
        } else {
            func_8002E54C(&D_8008ABE0);
        }
        goto loop_16;
    }
    D_800827C4 = 0x80;
    D_800827C6 = 0x80;
    M2C_FIELD(arg0, s32 *, 0x3C) = 1;
    D_800926BC = 0;
    func_80047948(D_8009261C, (f32) (s16) D_800827CC, 0, 0x44D20000);
    D_80092788 = 0;
    func_80047948(D_800926E8, (f32) D_800827CA, 0, 0);
    D_80092784 = 1;
    D_80092764 = (f32) (M2C_FIELD(arg0, f64 *, 0x58) * D_80074498);
    M2C_FIELD(arg0, s16 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s16 *, 0x56) = 1;
    if (D_8008F09C == 0) {
        var_a0 = D_80082418;
    } else {
        var_a0 = D_80082488;
    }
    func_800149E4(var_a0);
    func_80019ACC(D_80082ED0);
    temp_v1 = M2C_FIELD(*((D_8007E4E0 * 4) + D_80081AD0), u8 *, 0x18);
    var_a0_2 = 0;
    if (((temp_v1 ^ 2) == 0) || ((temp_v1 ^ 3) == 0)) {
        var_a0_2 = 1;
    }
    if (var_a0_2 != 0) {
        func_80016550(D_800827A4, D_80082E90);
    }
    var_v1 = 0;
    if ((M2C_FIELD(*((D_8007E4E0 * 4) + D_80081AD0), u8 *, 0x18) ^ 2) != 0) {
        var_v1 = D_800891DC != 0;
    }
    if (var_v1 != 0) {
        func_80046014(D_8008F2F0, 3, 0xB);
        return;
    }
    if (D_8008920C != 0) {
        func_8004600C(D_8008F2F0);
    }
}

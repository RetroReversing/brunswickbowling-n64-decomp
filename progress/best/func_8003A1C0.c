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

extern short D_8008C528;
extern short D_8008C568;
s32 func_80016D80();
s32 func_80036DA4();
s32 func_80036F08();
s32 func_80037034();
s32 func_800370C4();
s32 func_80037110();
s32 func_8003732C();
s32 *func_80050988();
s32 func_80050DE8();
s32 func_80057FA0();
extern char D_80078194[];
extern char D_8007819C[];
extern char D_800781A4[];
extern char D_800781AC[];
extern char D_800781B4[];
extern char D_800781BC[];
extern char D_800781C4[];
extern char D_800781CC[];
extern char D_800781D4[];
extern char D_800781DC[];
extern char D_800781E8[];
extern char D_800781F0[];
extern char D_800781F8[];
extern char D_80078200[];
extern char D_8007820C[];
extern char D_80078214[];
extern char D_8007821C[];
extern char D_80078224[];
extern char D_8007822C[];
extern char D_80078234[];
extern char D_8007823C[];
extern char D_80078244[];
extern char D_8007824C[];
extern char D_80078254[];
extern char D_8007825C[];
extern char D_80078264[];
extern char D_8007826C[];
extern char D_80078274[];
extern char D_8007827C[];
extern char D_80078284[];
extern char D_8007828C[];
extern char D_80078294[];
extern char D_8007829C[];
extern char D_800782A4[];
extern char D_800782AC[];
extern char D_800782B4[];
extern char D_800782BC[];
extern char D_800782C8[];
extern char D_800782D4[];
extern char D_800782DC[];
extern char D_800782E8[];
extern char D_800782F4[];
extern char D_80078300[];
extern char D_800827A4[];
extern char D_80089A14[];
extern char D_80089A54[];
extern char D_80089A94[];
extern char D_80089AD4[];
extern char D_8008B2A4[];
extern char D_8008B3A4[];
extern s32 D_8008B3DC;
extern char D_8008B808[];
extern char D_8008B848[];
extern char D_8008B888[];
extern char D_8008B8C8[];
extern char D_8008B908[];
extern char D_8008B948[];
extern char D_8008B988[];
extern char D_8008B9C8[];
extern char D_8008BA08[];
extern char D_8008BED0[];
extern char D_8008BF10[];
extern char D_8008BF50[];
extern char D_8008BF90[];
extern char D_8008BFD0[];
extern char D_8008C010[];
extern char D_8008C050[];
extern char D_8008C090[];
extern char D_8008C0D0[];
extern s32 D_8008C0F4;
extern char D_8008C190[];
extern char D_8008C1D0[];
extern char D_8008C210[];
extern char D_8008C310[];
extern char D_8008C350[];
extern char D_8008C390[];
extern char D_8008C450[];
extern char D_8008C490[];
extern char D_8008C4D0[];
extern char D_8008C510[];
extern char D_8008C550[];
extern char D_8008C590[];

#define sp10 (*(s32 *)(sp + 0x10))
#define sp2C (*(s32 *)(sp + 0x2C))
#define sp50 (*(s32 *)(sp + 0x50))
#define sp90 (*(s32 *)(sp + 0x90))
#define sp94 (*(s32 *)(sp + 0x94))
#define sp98 (*(s32 *)(sp + 0x98))
#define sp9C (*(s32 *)(sp + 0x9C))
#define spA0 (*(s32 *)(sp + 0xA0))
#define spA4 (*(s32 *)(sp + 0xA4))
#define spA8 (*(s32 *)(sp + 0xA8))
void func_8003A1C0(void) {
    u8 sp[200];
    s32 *var_a1;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v0_8;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a0_4;
    s32 var_a0_5;
    s32 var_a0_6;
    s32 var_a0_7;
    s32 var_a0_8;
    s32 var_a2;
    s32 var_a3;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_5;
    s32 var_v1_6;
    s32 var_v1_7;
    s32 var_v1_8;
    u16 temp_a0;
    u32 temp_v1;
    void *temp_s2;
    void *temp_v0;
    void *var_a0;
    void *var_v1;

    func_80036DA4(&sp10);
    func_80036DA4(&sp50);
    func_80037034(D_8008BED0, 0x18, 1);
    sp90 = func_80037110(D_8008BED0, 2);
    func_80037034(D_8008BF10, 0x18, 1);
    sp94 = func_80037110(D_8008BF10, 2);
    func_80037034(D_8008BF50, 0x18, 1);
    sp98 = func_80037110(D_8008BF50, 9);
    func_80037034(D_8008BF90, 0x18, 1);
    sp9C = func_80037110(D_8008BF90, 2);
    func_80037034(D_8008BFD0, 0x18, 1);
    spA0 = func_80037110(D_8008BFD0, 2);
    func_80037034(D_8008C010, 0x18, 1);
    spA4 = func_80037110(D_8008C010, 9);
    func_80037034(D_8008C0D0, 0x18, 1);
    spA8 = func_80037110(D_8008C0D0, 1);
    func_80036F08(D_8008C190, D_80078194, D_8007819C, 0);
    func_80036F08(D_8008C1D0, D_800781A4, D_8007819C, 0);
    func_80036F08(D_8008C210, D_800781AC, D_8007819C, 0);
    func_80036F08(D_8008C0D0, D_800781B4, D_8007819C, 0);
    func_8003732C(D_8008C0D0, 1);
    func_80036F08(D_8008C090, D_800781BC, D_8007819C, 0);
    func_80036F08(D_8008C050, D_800781C4, D_8007819C, 0);
    if (D_8008B3DC == 0xE) {
        var_a1 = D_800781CC;
    } else {
        var_a1 = D_800781D4;
    }
    func_80036F08(D_8008C310, var_a1, D_8007819C, 0);
    func_800370C4(D_8008C310, 0x46, 0xA7);
    func_8003732C(D_8008C310, 1);
    func_80036F08(D_8008C350, D_800781DC, D_8007819C, 0);
    func_8003732C(D_8008C350, 1);
    func_80036F08(D_8008C450, D_800781E8, D_8007819C, 0);
    func_8003732C(D_8008C450, 1);
    func_80036F08(D_8008C390, D_800781F0, D_8007819C, 0);
    func_8003732C(D_8008C390, 1);
    func_80036F08(D_8008C490, D_800781F8, D_8007819C, 0);
    func_80036F08(D_8008C4D0, D_800781F8, D_8007819C, 0);
    func_8003732C(D_8008C490, 1);
    func_8003732C(D_8008C4D0, 1);
    func_80036F08(D_8008C590, D_80078200, D_8007819C, 0);
    func_80036F08(D_8008C510, D_8007820C, D_8007819C, 0);
    func_800370C4(D_8008C510, 0x9E, D_8008C528);
    func_8003732C(D_8008C510, 2);
    func_80036F08(D_8008C550, D_80078214, D_8007819C, 0);
    func_800370C4(D_8008C550, 0x9E, D_8008C568);
    func_8003732C(D_8008C550, 2);
    func_80036F08(D_8008B808, D_8007821C, D_8007819C, 0);
    func_80036F08(D_8008B848, D_80078224, D_8007819C, 0);
    func_80036F08(D_8008B888, D_8007822C, D_8007819C, 0);
    func_80036F08(D_8008B8C8, D_80078234, D_8007819C, 0);
    func_80036F08(D_8008B908, D_8007823C, D_8007819C, 0);
    func_80036F08(D_8008B948, D_80078244, D_8007819C, 0);
    func_80036F08(D_8008B988, D_8007824C, D_8007819C, 0);
    func_80036F08(D_8008B9C8, D_80078254, D_8007819C, 0);
    func_80036F08(D_8008BA08, D_8007825C, D_8007819C, 0);
    func_80036F08(D_80089A14, D_80078264, D_8007819C, 0);
    func_80036F08(D_80089A54, D_8007826C, D_8007819C, 0);
    func_80036F08(D_80089AD4, D_80078274, D_8007819C, 0);
    func_80036F08(D_80089A94, D_8007827C, D_8007819C, 0);
    temp_s2 = D_8008B3A4 + 0x34;
    if (*((M2C_FIELD(temp_s2, s32 *, 4) * 4) + D_8008B2A4) == 0) {
        func_80057FA0(D_800827A4 + 0x2EE, *func_80050988(D_80078284, D_8007828C), 0x2C0);
        func_80016D80(D_800827A4);
    }
    if (*((M2C_FIELD(temp_s2, s32 *, 4) * 4) + D_8008B2A4) == 1) {
        func_80057FA0(D_800827A4 + 0x2EE, *func_80050988(D_80078294, D_8007828C), 0x2C0);
        func_80016D80(D_800827A4);
    }
    if (*((M2C_FIELD(temp_s2, s32 *, 4) * 4) + D_8008B2A4) == 2) {
        func_80057FA0(D_800827A4 + 0x2EE, *func_80050988(D_8007829C, D_8007828C), 0x2C0);
        func_80016D80(D_800827A4);
    }
    if (*((M2C_FIELD(temp_s2, s32 *, 4) * 4) + D_8008B2A4) == 3) {
        func_80057FA0(D_800827A4 + 0x2EE, *func_80050988(D_800782A4, D_8007828C), 0x2C0);
        func_80016D80(D_800827A4);
    }
    if (*((M2C_FIELD(temp_s2, s32 *, 4) * 4) + D_8008B2A4) == 4) {
        func_80057FA0(D_800827A4 + 0x2EE, *func_80050988(D_800782AC, D_8007828C), 0x2C0);
        func_80016D80(D_800827A4);
    }
    var_a0 = D_800827A4 + 0x2E;
    var_v1 = D_800827A4 + 0x2EE;
    temp_v0 = D_800827A4 + 0x5AE;
    if (((s32) var_v1 | (s32) var_a0) & 3) {
        do {
            M2C_FIELD(var_a0, s32 *, 0) = M2C_UNALIGNED32(M2C_FIELD(var_v1, s32 *, 0));
            M2C_FIELD(var_a0, s32 *, 4) = M2C_UNALIGNED32(M2C_FIELD(var_v1, s32 *, 4));
            M2C_FIELD(var_a0, s32 *, 8) = M2C_UNALIGNED32(M2C_FIELD(var_v1, s32 *, 8));
            M2C_FIELD(var_a0, s32 *, 0xC) = M2C_UNALIGNED32(M2C_FIELD(var_v1, s32 *, 0xC));
            var_v1 += 0x10;
            var_a0 += 0x10;
        } while (var_v1 != temp_v0);
    } else {
        do {
            M2C_FIELD(var_a0, s32 *, 0) = (s32) M2C_FIELD(var_v1, s32 *, 0);
            M2C_FIELD(var_a0, s32 *, 4) = (s32) M2C_FIELD(var_v1, s32 *, 4);
            M2C_FIELD(var_a0, s32 *, 8) = (s32) M2C_FIELD(var_v1, s32 *, 8);
            M2C_FIELD(var_a0, s32 *, 0xC) = (s32) M2C_FIELD(var_v1, s32 *, 0xC);
            var_v1 += 0x10;
            var_a0 += 0x10;
        } while (var_v1 != temp_v0);
    }
    func_80036F08(D_8008BF10, D_800782B4, D_8007819C, 0);
    func_80036F08(D_8008BF50, D_800782BC, D_8007819C, 0);
    func_80036F08(D_8008BED0, D_800782C8, D_8007819C, 0);
    func_80036F08(D_8008BFD0, D_800782D4, D_8007819C, 0);
    func_80036F08(D_8008C010, D_800782DC, D_8007819C, 0);
    func_80036F08(D_8008BF90, D_800782E8, D_8007819C, 0);
    func_80036F08(&sp50, D_800782F4, D_8007819C, 0);
    func_80050DE8(D_80078300, D_8007819C);
    func_80036F08(&sp10, D_80078300, D_8007819C, 0);
    var_a3 = 0;
    var_a2 = sp2C;
    do {
        if (*(s32 *)var_a2 == 1) {
            *(s32 *)var_a2 = 0U;
        }
        temp_a0 = *(u16 *)var_a2;
        var_a3 += 1;
        temp_v1 = temp_a0 & 0xFFFF;
        *(s32 *)var_a2 = (u16) ((temp_a0 & 1) | (((temp_v1 << 0xA) & 0xF800) | (temp_v1 & 0x7C0) | ((temp_v1 >> 0xB) * 2)));
        var_a2 += 2;
    } while (var_a3 < 0x100);
    var_a0_2 = sp90;
    var_v1_2 = sp2C;
    temp_v0_2 = var_v1_2 + 0x200;
    if ((var_v1_2 | var_a0_2) & 3) {
        do {
            M2C_FIELD(var_a0_2, s32 *, 0) = M2C_UNALIGNED32(M2C_FIELD(var_v1_2, s32 *, 0));
            M2C_FIELD(var_a0_2, s32 *, 4) = M2C_UNALIGNED32(M2C_FIELD(var_v1_2, s32 *, 4));
            M2C_FIELD(var_a0_2, s32 *, 8) = M2C_UNALIGNED32(M2C_FIELD(var_v1_2, s32 *, 8));
            M2C_FIELD(var_a0_2, s32 *, 0xC) = M2C_UNALIGNED32(M2C_FIELD(var_v1_2, s32 *, 0xC));
            var_v1_2 += 0x10;
            var_a0_2 += 0x10;
        } while (var_v1_2 != temp_v0_2);
    } else {
        do {
            M2C_FIELD(var_a0_2, s32 *, 0) = (s32) M2C_FIELD(var_v1_2, s32 *, 0);
            M2C_FIELD(var_a0_2, s32 *, 4) = (s32) M2C_FIELD(var_v1_2, s32 *, 4);
            M2C_FIELD(var_a0_2, s32 *, 8) = (s32) M2C_FIELD(var_v1_2, s32 *, 8);
            M2C_FIELD(var_a0_2, s32 *, 0xC) = (s32) M2C_FIELD(var_v1_2, s32 *, 0xC);
            var_v1_2 += 0x10;
            var_a0_2 += 0x10;
        } while (var_v1_2 != temp_v0_2);
    }
    var_a0_3 = sp94;
    var_v1_3 = sp2C;
    temp_v0_3 = var_v1_3 + 0x200;
    if ((var_v1_3 | var_a0_3) & 3) {
        do {
            M2C_FIELD(var_a0_3, s32 *, 0) = M2C_UNALIGNED32(M2C_FIELD(var_v1_3, s32 *, 0));
            M2C_FIELD(var_a0_3, s32 *, 4) = M2C_UNALIGNED32(M2C_FIELD(var_v1_3, s32 *, 4));
            M2C_FIELD(var_a0_3, s32 *, 8) = M2C_UNALIGNED32(M2C_FIELD(var_v1_3, s32 *, 8));
            M2C_FIELD(var_a0_3, s32 *, 0xC) = M2C_UNALIGNED32(M2C_FIELD(var_v1_3, s32 *, 0xC));
            var_v1_3 += 0x10;
            var_a0_3 += 0x10;
        } while (var_v1_3 != temp_v0_3);
    } else {
        do {
            M2C_FIELD(var_a0_3, s32 *, 0) = (s32) M2C_FIELD(var_v1_3, s32 *, 0);
            M2C_FIELD(var_a0_3, s32 *, 4) = (s32) M2C_FIELD(var_v1_3, s32 *, 4);
            M2C_FIELD(var_a0_3, s32 *, 8) = (s32) M2C_FIELD(var_v1_3, s32 *, 8);
            M2C_FIELD(var_a0_3, s32 *, 0xC) = (s32) M2C_FIELD(var_v1_3, s32 *, 0xC);
            var_v1_3 += 0x10;
            var_a0_3 += 0x10;
        } while (var_v1_3 != temp_v0_3);
    }
    var_a0_4 = sp98;
    var_v1_4 = sp2C;
    temp_v0_4 = var_v1_4 + 0x200;
    if ((var_v1_4 | var_a0_4) & 3) {
        do {
            M2C_FIELD(var_a0_4, s32 *, 0) = M2C_UNALIGNED32(M2C_FIELD(var_v1_4, s32 *, 0));
            M2C_FIELD(var_a0_4, s32 *, 4) = M2C_UNALIGNED32(M2C_FIELD(var_v1_4, s32 *, 4));
            M2C_FIELD(var_a0_4, s32 *, 8) = M2C_UNALIGNED32(M2C_FIELD(var_v1_4, s32 *, 8));
            M2C_FIELD(var_a0_4, s32 *, 0xC) = M2C_UNALIGNED32(M2C_FIELD(var_v1_4, s32 *, 0xC));
            var_v1_4 += 0x10;
            var_a0_4 += 0x10;
        } while (var_v1_4 != temp_v0_4);
    } else {
        do {
            M2C_FIELD(var_a0_4, s32 *, 0) = (s32) M2C_FIELD(var_v1_4, s32 *, 0);
            M2C_FIELD(var_a0_4, s32 *, 4) = (s32) M2C_FIELD(var_v1_4, s32 *, 4);
            M2C_FIELD(var_a0_4, s32 *, 8) = (s32) M2C_FIELD(var_v1_4, s32 *, 8);
            M2C_FIELD(var_a0_4, s32 *, 0xC) = (s32) M2C_FIELD(var_v1_4, s32 *, 0xC);
            var_v1_4 += 0x10;
            var_a0_4 += 0x10;
        } while (var_v1_4 != temp_v0_4);
    }
    var_a0_5 = sp9C;
    var_v1_5 = sp2C;
    temp_v0_5 = var_v1_5 + 0x200;
    if ((var_v1_5 | var_a0_5) & 3) {
        do {
            M2C_FIELD(var_a0_5, s32 *, 0) = M2C_UNALIGNED32(M2C_FIELD(var_v1_5, s32 *, 0));
            M2C_FIELD(var_a0_5, s32 *, 4) = M2C_UNALIGNED32(M2C_FIELD(var_v1_5, s32 *, 4));
            M2C_FIELD(var_a0_5, s32 *, 8) = M2C_UNALIGNED32(M2C_FIELD(var_v1_5, s32 *, 8));
            M2C_FIELD(var_a0_5, s32 *, 0xC) = M2C_UNALIGNED32(M2C_FIELD(var_v1_5, s32 *, 0xC));
            var_v1_5 += 0x10;
            var_a0_5 += 0x10;
        } while (var_v1_5 != temp_v0_5);
    } else {
        do {
            M2C_FIELD(var_a0_5, s32 *, 0) = (s32) M2C_FIELD(var_v1_5, s32 *, 0);
            M2C_FIELD(var_a0_5, s32 *, 4) = (s32) M2C_FIELD(var_v1_5, s32 *, 4);
            M2C_FIELD(var_a0_5, s32 *, 8) = (s32) M2C_FIELD(var_v1_5, s32 *, 8);
            M2C_FIELD(var_a0_5, s32 *, 0xC) = (s32) M2C_FIELD(var_v1_5, s32 *, 0xC);
            var_v1_5 += 0x10;
            var_a0_5 += 0x10;
        } while (var_v1_5 != temp_v0_5);
    }
    var_a0_6 = spA0;
    var_v1_6 = sp2C;
    temp_v0_6 = var_v1_6 + 0x200;
    if ((var_v1_6 | var_a0_6) & 3) {
        do {
            M2C_FIELD(var_a0_6, s32 *, 0) = M2C_UNALIGNED32(M2C_FIELD(var_v1_6, s32 *, 0));
            M2C_FIELD(var_a0_6, s32 *, 4) = M2C_UNALIGNED32(M2C_FIELD(var_v1_6, s32 *, 4));
            M2C_FIELD(var_a0_6, s32 *, 8) = M2C_UNALIGNED32(M2C_FIELD(var_v1_6, s32 *, 8));
            M2C_FIELD(var_a0_6, s32 *, 0xC) = M2C_UNALIGNED32(M2C_FIELD(var_v1_6, s32 *, 0xC));
            var_v1_6 += 0x10;
            var_a0_6 += 0x10;
        } while (var_v1_6 != temp_v0_6);
    } else {
        do {
            M2C_FIELD(var_a0_6, s32 *, 0) = (s32) M2C_FIELD(var_v1_6, s32 *, 0);
            M2C_FIELD(var_a0_6, s32 *, 4) = (s32) M2C_FIELD(var_v1_6, s32 *, 4);
            M2C_FIELD(var_a0_6, s32 *, 8) = (s32) M2C_FIELD(var_v1_6, s32 *, 8);
            M2C_FIELD(var_a0_6, s32 *, 0xC) = (s32) M2C_FIELD(var_v1_6, s32 *, 0xC);
            var_v1_6 += 0x10;
            var_a0_6 += 0x10;
        } while (var_v1_6 != temp_v0_6);
    }
    var_a0_7 = spA4;
    var_v1_7 = sp2C;
    temp_v0_7 = var_v1_7 + 0x200;
    if ((var_v1_7 | var_a0_7) & 3) {
        do {
            M2C_FIELD(var_a0_7, s32 *, 0) = M2C_UNALIGNED32(M2C_FIELD(var_v1_7, s32 *, 0));
            M2C_FIELD(var_a0_7, s32 *, 4) = M2C_UNALIGNED32(M2C_FIELD(var_v1_7, s32 *, 4));
            M2C_FIELD(var_a0_7, s32 *, 8) = M2C_UNALIGNED32(M2C_FIELD(var_v1_7, s32 *, 8));
            M2C_FIELD(var_a0_7, s32 *, 0xC) = M2C_UNALIGNED32(M2C_FIELD(var_v1_7, s32 *, 0xC));
            var_v1_7 += 0x10;
            var_a0_7 += 0x10;
        } while (var_v1_7 != temp_v0_7);
    } else {
        do {
            M2C_FIELD(var_a0_7, s32 *, 0) = (s32) M2C_FIELD(var_v1_7, s32 *, 0);
            M2C_FIELD(var_a0_7, s32 *, 4) = (s32) M2C_FIELD(var_v1_7, s32 *, 4);
            M2C_FIELD(var_a0_7, s32 *, 8) = (s32) M2C_FIELD(var_v1_7, s32 *, 8);
            M2C_FIELD(var_a0_7, s32 *, 0xC) = (s32) M2C_FIELD(var_v1_7, s32 *, 0xC);
            var_v1_7 += 0x10;
            var_a0_7 += 0x10;
        } while (var_v1_7 != temp_v0_7);
    }
    var_a0_8 = spA8;
    var_v1_8 = D_8008C0F4;
    temp_v0_8 = var_v1_8 + 0x200;
    if ((var_v1_8 | var_a0_8) & 3) {
        do {
            M2C_FIELD(var_a0_8, s32 *, 0) = M2C_UNALIGNED32(M2C_FIELD(var_v1_8, s32 *, 0));
            M2C_FIELD(var_a0_8, s32 *, 4) = M2C_UNALIGNED32(M2C_FIELD(var_v1_8, s32 *, 4));
            M2C_FIELD(var_a0_8, s32 *, 8) = M2C_UNALIGNED32(M2C_FIELD(var_v1_8, s32 *, 8));
            M2C_FIELD(var_a0_8, s32 *, 0xC) = M2C_UNALIGNED32(M2C_FIELD(var_v1_8, s32 *, 0xC));
            var_v1_8 += 0x10;
            var_a0_8 += 0x10;
        } while (var_v1_8 != temp_v0_8);
        return;
    }
    do {
        M2C_FIELD(var_a0_8, s32 *, 0) = (s32) M2C_FIELD(var_v1_8, s32 *, 0);
        M2C_FIELD(var_a0_8, s32 *, 4) = (s32) M2C_FIELD(var_v1_8, s32 *, 4);
        M2C_FIELD(var_a0_8, s32 *, 8) = (s32) M2C_FIELD(var_v1_8, s32 *, 8);
        M2C_FIELD(var_a0_8, s32 *, 0xC) = (s32) M2C_FIELD(var_v1_8, s32 *, 0xC);
        var_v1_8 += 0x10;
        var_a0_8 += 0x10;
    } while (var_v1_8 != temp_v0_8);
}

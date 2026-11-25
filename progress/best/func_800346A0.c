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

extern int D_80083B8C;
extern int D_80083B90;
extern int D_8008CC9C;
extern int D_80089864;
extern int D_8008EB3C;
s32 func_80014530();
s32 func_800163B0();
s32 func_80022560();
s32 func_80022B18();
s32 func_800379D0();
s32 func_80038EF0();
s32 func_8003E544();
s32 func_8003ED40();
s32 func_8003F2F0();
s32 func_8003F358();
s32 func_8003F8BC();
s32 func_8003FCC8();
s32 func_8003FF0C();
s32 func_80041690();
s32 func_800420C8();
s32 func_80042A1C();
s32 func_800431F4();
s32 func_80045278();
s32 func_8004684C();
extern char D_80077944[];
extern char D_80077950[];
extern char D_8007795C[];
extern s32 D_80082040;
extern char D_800827A4[];
extern char D_80083AF0[];
extern char D_800890E8[];
extern char D_800891B0[];
extern char D_80089830[];
extern char D_8008C9CC[];
extern char D_8008CC80[];
extern char D_8008E9B0[];
extern char D_8008EB34[];
extern char D_8008ED80[];

void func_800346A0(void *arg0) {
    s32 temp_a1;
    void *temp_v0;
    void *temp_v0_2;

    func_800431F4(D_8008ED80);
    func_8003ED40(D_80083AF0);
    func_80045278(D_8008ED80, 0);
    func_800420C8(D_8008ED80, D_80077944);
    func_8004684C(0x78);
    func_80045278(D_8008ED80, 1);
    func_800420C8(D_8008ED80, D_80077950);
    func_8004684C(0x78);
    func_80045278(D_8008ED80, 1);
    func_800420C8(D_8008ED80, D_8007795C);
    func_8004684C(0x78);
    func_80045278(D_8008ED80, 1);
    func_80022B18(D_800891B0);
    func_80041690(D_8008EB34);
    func_800163B0(D_800827A4);
    func_8003F2F0(D_80083AF0);
    func_80022560(D_800890E8);
    D_80083B8C = 0;
    D_80083B90 = 0;
loop_1:
    temp_a1 = func_8003FF0C(D_8008E9B0) & 0xFF;
    if ((temp_a1 != 0) && (D_8008CC9C == 0)) {
        func_80038EF0(D_8008CC80, temp_a1, D_80089864 == 0);
    }
    func_8003F8BC(D_8008E9B0, 1);
    func_800379D0(D_8008C9CC);
    temp_v0 = M2C_FIELD(arg0, void **, 0x10);
    M2C_FIELD(temp_v0, s32 (**)(void *), 0x14)(arg0 + M2C_FIELD(temp_v0, s16 *, 0x10));
    if (D_80082040 != 0) {
        func_80014530(D_80082040);
    }
    temp_v0_2 = M2C_FIELD(arg0, void **, 0x10);
    M2C_FIELD(temp_v0_2, s32 (**)(void *), 0x3C)(arg0 + M2C_FIELD(temp_v0_2, s16 *, 0x38));
    func_8003E544(D_80083AF0);
    if (D_8008EB3C != 0) {
        func_8003F358(D_80083AF0, 0);
    }
    func_80042A1C(D_8008ED80);
    func_8003FCC8();
    goto loop_1;
}

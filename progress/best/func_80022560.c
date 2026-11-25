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
s32 func_80011278();
s32 func_8001C210();
s32 func_80037D08();
s32 func_8003F2F0();
s32 func_800420C8();
s32 func_80045278();
extern char D_80075A80[];
extern char D_8007D700[];
extern char D_80083AF0[];
extern s32 D_80089100;
extern char D_8008BA90[];
extern char D_8008C9CC[];
extern char D_8008ED80[];

void func_80022560(void *arg0) {
    void *sp18;
    void *sp20;
    void *sp28;
    void *sp30;
    void *sp38;

    D_80089100 = 1;
    func_80011278(D_8007D700);
    sp18 = arg0;
    sp30 = arg0;
    sp28 = arg0;
    sp38 = D_8008BA90 + 8;
    func_8001C210(arg0, &sp38);
    sp20 = sp28;
    M2C_FIELD(arg0, s32 *, 0x14) = 1;
    func_80045278(D_8008ED80, 0, sp18);
    D_80083B8C = 0;
    func_8003F2F0(D_80083AF0);
    func_80037D08(D_8008C9CC);
    func_800420C8(D_8008ED80, D_80075A80);
}

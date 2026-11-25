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

extern short D_8008C906;
extern int D_80083B8C;
extern int D_80083B90;
s32 func_800149E4();
s32 func_8001BDE4();
s32 func_8001C210();
s32 func_800375C0();
s32 func_8004217C();
extern char D_800825D8[];
extern char D_80082F78[];
extern char D_800833B0[];
extern char D_80083AF0[];
extern u8 D_800890E4;
extern char D_8008BA90[];
extern char D_8008C8F4[];
extern char D_8008ED80[];

s32 func_80022624(void *arg0, s32 arg1, s32 arg2) {
    s32 *sp18;
    s32 *sp20;
    s32 *sp28;
    s32 *sp30;
    void *sp38;

    if ((D_800890E4 == 0) && (arg2 == 0x209)) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), void ***, 4) = (void **) M2C_FIELD(arg0, void ***, 4);
        *M2C_FIELD(arg0, void ***, 4) = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
        sp18 = D_80082F78;
        sp30 = D_80082F78;
        sp28 = D_80082F78;
        sp38 = D_8008BA90 + 8;
        func_8001C210(D_80082F78, &sp38, arg0);
        sp20 = sp28;
        func_8001BDE4(D_80082F78, D_800833B0, sp18);
        D_8008C906 = 0x14;
        func_800375C0(D_8008C8F4, 0);
        func_800149E4(D_800825D8);
        D_80083B8C = 1;
        D_80083B90 = 1;
        func_8004217C(D_8008ED80, 5);
        return 0;
    }
    return 1;
}

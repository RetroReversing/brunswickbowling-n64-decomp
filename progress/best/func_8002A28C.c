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

extern unsigned short D_80082D52;
s32 func_8000EC00();
s32 func_800149E4();
s32 func_80016604();
s32 func_8001C210();
s32 func_80024834();
s32 func_8002CDEC();
s32 func_8002E428();
s32 func_80032558();
extern char D_800827A4[];
extern char D_800827C4[];
extern s32 D_80082DAC;
extern char D_80089830[];
extern char D_8008A328[];
extern char D_8008ABE0[];
extern char D_8008B470[];
extern char D_8008BA90[];
extern s16 D_8008F098;
extern s32 D_80092524;
extern s32 D_800925F0;
extern s32 D_800926BC;
extern s32 D_80092788;
extern s32 D_80092854;

void func_8002A28C(void *arg0) {
    s32 sp18;
    s32 sp20;
    s32 sp28;
    s32 sp30;
    void *sp38;
    s32 *var_s0;
    s32 temp_a0;
    s32 temp_v1;
    s32 var_s1;

    M2C_FIELD(M2C_FIELD(arg0, void **, 0), void ***, 4) = (void **) M2C_FIELD(arg0, void ***, 4);
    *M2C_FIELD(arg0, void ***, 4) = M2C_FIELD(arg0, void **, 0);
    temp_a0 = M2C_FIELD(arg0, s32 *, 0x20);
    sp38 = D_8008BA90 + 8;
    sp18 = temp_a0;
    sp30 = temp_a0;
    sp28 = temp_a0;
    func_8001C210(temp_a0, &sp38);
    sp20 = sp28;
    D_80082D52 = (u16) M2C_FIELD(arg0, u16 *, 0x18);
    if ((s16) M2C_FIELD(arg0, u16 *, 0x18) != M2C_FIELD(arg0, s16 *, 0x1A)) {
        func_80016604(D_800827A4);
        var_s1 = 0;
        func_8000EC00((s16) M2C_FIELD(arg0, u16 *, 0x18), 0);
        var_s0 = D_8008A328;
        do {
            func_8002CDEC(var_s0);
            var_s1 += 1;
            var_s0 += 0x18;
        } while (var_s1 < 6);
    } else {
        func_8000EC00(M2C_FIELD(arg0, s16 *, 0x1C), 0);
    }
    func_80032558(D_8008B470, D_800827C4, 0);
    D_80082DAC = 1;
    if (M2C_FIELD(arg0, s32 *, 0x28) == 0) {
        D_80092524 = 0;
        D_800925F0 = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x2C) == 0) {
        D_80092788 = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x30) == 0) {
        D_800926BC = 0;
    }
    D_80092854 = 1;
    func_800149E4(M2C_FIELD(arg0, s32 *, 0x38));
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x34);
    D_8008F098 = (s16) temp_v1;
    func_8002E428(D_8008ABE0, (s16) temp_v1);
    if (M2C_FIELD(arg0, s32 *, 0x24) != 0) {
        func_80024834(D_80089830, 1);
    }
    func_80016604(D_800827C4 - 0x20);
}

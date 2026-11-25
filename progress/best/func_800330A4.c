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

extern int D_8008BA48;
extern unsigned char D_8008BA4D;
extern int D_8008BA50;
extern unsigned char D_8008BA55;
extern int D_8008BA58;
extern unsigned char D_8008BA5D;
extern int D_8008BA60;
extern unsigned char D_8008BA65;
extern int D_8008BA68;
extern unsigned char D_8008BA6D;
extern int D_8008BA70;
extern unsigned char D_8008BA75;
extern int D_8008BA78;
extern unsigned char D_8008BA7D;
extern int D_8008BA80;
extern unsigned char D_8008BA85;
extern unsigned char D_8008BA86;
extern int D_8008BA88;
extern unsigned char D_8008BA8D;
extern short D_8008B7CC;
extern short D_8008B7CE;
extern short D_80082D52;
s32 func_8000EC00();
s32 func_800149E4();
s32 func_80016604();
s32 func_8001C210();
s32 func_80024834();
s32 func_8002AAC0();
s32 func_8002E428();
s32 func_80032744();
s32 func_80032870();
s32 func_80037264();
s32 func_8003AEBC();
s32 func_800452EC();
extern s32 D_8007E4E0;
extern char D_80081AD0[];
extern char D_800827A4[];
extern char D_80089830[];
extern char D_8008ABE0[];
extern char D_8008B470[];
extern char D_8008BA90[];
extern char D_8008ED80[];
extern s16 D_8008F098;
extern s32 D_80092524;
extern s32 D_800925F0;
extern s32 D_800926BC;
extern s32 D_80092788;

void func_800330A4(void *arg0) {
    s32 sp20;
    s32 sp28;
    s32 sp30;
    s32 sp38;
    void *sp40;
    s16 temp_a1;
    s32 temp_a0;

    M2C_FIELD(M2C_FIELD(arg0, void **, 0), void ***, 4) = (void **) M2C_FIELD(arg0, void ***, 4);
    *M2C_FIELD(arg0, void ***, 4) = M2C_FIELD(arg0, void **, 0);
    temp_a0 = M2C_FIELD(arg0, s32 *, 0x14);
    sp40 = D_8008BA90 + 8;
    sp20 = temp_a0;
    sp38 = temp_a0;
    sp30 = temp_a0;
    func_8001C210(temp_a0, &sp40);
    sp28 = sp30;
    func_80037264(D_8008BA48, 0, 1, 0, (s32) D_8008BA4D, 4, sp20);
    func_80037264(D_8008BA50, 0, 1, 0, (s32) D_8008BA55, 4);
    func_80037264(D_8008BA58, 0, 1, 0, (s32) D_8008BA5D, 4);
    func_80037264(D_8008BA60, 0, 1, 0, (s32) D_8008BA65, 4);
    func_80037264(D_8008BA68, 0, 1, 0, (s32) D_8008BA6D, 4);
    func_80037264(D_8008BA70, 0, 1, 0, (s32) D_8008BA75, 4);
    func_80037264(D_8008BA78, 0, 1, 0, (s32) D_8008BA7D, 4);
    func_80037264(D_8008BA80, 0, 1, 0, (s32) D_8008BA85, 4);
    func_80037264(D_8008BA80, 0, 1, 0, (s32) D_8008BA86, 4);
    func_80037264(D_8008BA88, 0, 1, 0, (s32) D_8008BA8D, 4);
    func_8003AEBC(M2C_FIELD(*((D_8007E4E0 * 4) + D_80081AD0), u8 *, 0x1F));
    func_8002AAC0(D_8008B7CC);
    func_8000EC00(D_8008B7CE, 1);
    func_8000EC00(D_80082D52, 1);
    func_80032870(arg0);
    func_80032744(arg0, 0, 0);
    if (M2C_FIELD(arg0, s32 *, 0x320) != 0) {
        D_80092524 = 1;
        D_800925F0 = 1;
    }
    if (M2C_FIELD(arg0, s32 *, 0x324) == 0) {
        D_80092788 = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x328) == 0) {
        D_800926BC = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x32C) != 0) {
        func_800452EC(D_8008ED80);
    }
    func_800149E4(M2C_FIELD(arg0, s32 *, 0x18));
    temp_a1 = M2C_FIELD(arg0, s16 *, 0x2F8);
    D_8008F098 = temp_a1;
    func_8002E428(D_8008ABE0, temp_a1);
    func_80024834(D_80089830, 1);
    func_80016604(D_800827A4);
}

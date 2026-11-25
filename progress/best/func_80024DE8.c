/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
extern int D_8008BAA4;
s32 func_800132BC();
s32 func_80016550();
s32 func_80024818();
s32 func_8002E428();
s32 func_80031350();
s32 func_800343AC();
extern s32 D_80082760;
extern char D_800827A4[];
extern char D_8008ABE0[];
extern char D_8008B3A4[];
extern char D_8008BA90[];
extern s32 D_8008E9CC;
extern s32 D_8008E9E0;
extern s16 D_8008F098;

void func_80024DE8(s32 arg0, s32 arg1) {
    s32 temp_v1;

    D_8008E9CC = 0;
    if (arg1 != 0) {
        func_80024818();
        temp_v1 = D_8008BAA4;
        D_8008BAA4 = 0;
        D_8008E9E0 = temp_v1;
    }
    if (D_80082760 != 0) {
        func_800132BC(0);
    }
    func_800343AC(D_8008BA90, 0);
    func_80016550(D_800827A4, 0);
    func_80031350(D_8008B3A4, 0);
    D_8008F098 = -0xA0;
    func_8002E428(D_8008ABE0, -0xA0);
}

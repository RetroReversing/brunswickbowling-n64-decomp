/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
extern int D_80089B14;
extern unsigned char D_80089B19;
extern int D_80089B1C;
extern unsigned char D_80089B21;
extern int D_80089B2C;
extern unsigned char D_80089B31;
s32 func_8002A28C();
s32 func_80037264();
extern s32 D_80089B34;
extern s32 D_80089B38;
extern s32 D_80089B3C;
extern s32 D_8008E9E0;

s32 func_8002A578(s32 arg0) {
    if ((D_80089B34 != 0) && ((u32) (D_8008E9E0 - D_80089B34) >= 0xFBU)) {
        func_80037264(D_80089B14, 0, 1, 0, (s32) D_80089B19, 4);
        D_80089B34 = 0;
    }
    if ((D_80089B38 != 0) && ((u32) (D_8008E9E0 - D_80089B38) >= 0xFBU)) {
        func_80037264(D_80089B1C, 0, 1, 0, (s32) D_80089B21, 4);
        D_80089B38 = 0;
    }
    if ((D_80089B3C != 0) && ((u32) (D_8008E9E0 - D_80089B3C) >= 0xFBU)) {
        func_80037264(D_80089B2C, 0, 1, 0, (s32) D_80089B31, 4);
        D_80089B3C = 0;
        func_8002A28C(arg0);
    }
    return 1;
}

/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
extern int D_800A2030;
extern int D_800A2028;
extern int D_800A202C;
s32 osSpTaskLoad();
s32 osSpTaskStartGo();
extern s32 D_8009DE10;
extern char D_8009FE20[];

void func_80052860(s32 arg0) {
    D_8009DE10 = 0;
    D_800A2030 = arg0;
    if (D_800A2028 == 0) {
        D_800A202C = 1;
        osSpTaskLoad();
        osSpTaskStartGo(arg0);
    }
}

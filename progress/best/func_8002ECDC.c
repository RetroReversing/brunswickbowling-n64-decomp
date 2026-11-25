/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O1, tried by autopilot */
extern signed char D_80089860;
s32 func_800244FC();
s32 func_8002EDE0();
s32 func_800375C0();
extern char D_80089830[];
extern char D_8008C864[];

s32 func_8002ECDC(s32 arg0, s8 arg1, s32 arg2) {
    s32 var_v0;

    if (arg2 == 0x20A) {
        func_800375C0(D_8008C864, 0);
        func_8002EDE0(arg0);
        return 0;
    }
    var_v0 = 1;
    do { if (arg2 == 0x216) {
        func_800375C0(D_8008C864);
        var_v0 = 0;
        func_800244FC(D_80089830, 1);
        D_80089860 = arg1;
    } } while (0);
    return var_v0;
}

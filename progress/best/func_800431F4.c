/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
s8 func_8002AB14();
s32 func_80036F08();
extern char D_80079724[];
extern char D_80079754[];
extern char D_8008BC90[];
extern s8 D_8008F1D0;

void func_800431F4(s32 arg0, s8 arg1) {
    s8 temp_a0;
    s8 var_a1;

    var_a1 = arg1;
    do {
        temp_a0 = func_8002AB14(4, var_a1);
        var_a1 = temp_a0;
    } while (var_a1 == D_8008F1D0);
    D_8008F1D0 = temp_a0;
    switch (var_a1) {                               /* irregular */
    case 1:
    case 2:
    case 3:
        /* fallthrough */
    case 0:
        func_80036F08(D_8008BC90, D_80079754, D_80079724, 0);
        return;
    }
}

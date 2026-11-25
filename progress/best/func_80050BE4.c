/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
s32 func_80050C80();
s32 func_80050CB4();
s32 func_80050CD0();

void func_80050BE4(s32 arg0, s32 arg1, u32 *arg2) {
    u32 temp_a2;

    temp_a2 = *arg2;
    switch (temp_a2) {                              /* irregular */
    case 0x4D455348:
    case 0x4C45564C:
        func_80050CD0(arg0, 0, temp_a2);
        return;
    case 0x53505254:
        func_80050C80();
        return;
    case 0x54585452:
        func_80050CB4();
        /* fallthrough */
    case 0x414E494D:
        return;
    }
}

/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
s32 func_80011700();
s32 func_80011994();
s32 func_80011CA4();

void func_80012B50(s32 arg0, s32 arg1) {
    u8 sp10[0x1C8];

    func_80011700(sp10);
    func_80011994(sp10, arg1, 2);
    func_80011CA4(arg0, sp10, 0);
}

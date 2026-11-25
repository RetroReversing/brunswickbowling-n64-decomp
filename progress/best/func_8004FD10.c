/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
s8 func_8004FC3C();                                 /* extern */
extern s8 D_80096F60;

void func_8004FD10(void) {
loop_1:
    D_80096F60 = func_8004FC3C();
    goto loop_1;
}

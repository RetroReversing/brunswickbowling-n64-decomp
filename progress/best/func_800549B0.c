/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
void func_800549B0(s32 *arg0, s32 arg1) {
    if (*(volatile s32 *)0xA4600010 & 3) {
        loop_0: {

        } if (*(u8 *)(void *)0xA4600010 & 3) { goto loop_0; }
    }
    *arg0 = arg1;
}

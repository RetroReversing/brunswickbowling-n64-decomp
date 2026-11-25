/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O1, tried by autopilot */
s32 osPfsInitPak();
extern char D_8009CFE0[];
extern char D_8009D630[];
extern char D_8009D858[];

void func_8004FC64(s32 arg0) {
    *((arg0 * 4) + D_8009D858) = osPfsInitPak(D_8009CFE0, (arg0 * 0x68) + D_8009D630, arg0);
}

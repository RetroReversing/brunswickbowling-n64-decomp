/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O1, tried by autopilot */
s32 osPfsFileState();
extern char D_8009C540[];
extern char D_8009C550[];
extern char D_8009D630[];

void func_8003FFFC(s32 arg0, s32 arg1) {
    osPfsFileState((arg1 * 0x68) + D_8009D630, *((arg1 * 4) + D_8009C540), (arg1 << 5) + D_8009C550);
}

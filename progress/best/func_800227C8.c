/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
extern int D_8008ED84;
extern int D_8008CEF4;
s32 func_80039738();
s32 func_80039BC4();
s32 func_80045050();
extern s32 D_800890E0;
extern u8 D_800890E4;
extern char D_8008CEEC[];
extern s32 D_8008E9E0;
extern char D_8008ED80[];

void func_800227C8(void) {
    s32 temp_a1;
    s32 temp_v0;

    if (D_800890E4 == 0) {
        temp_v0 = (func_80039BC4(D_8008CEEC, D_800890E0) + 8) & ~1;
        temp_a1 = 0x140 - (temp_v0 >> 1);
        D_8008ED84 = 2;
        func_80045050(D_8008ED80, temp_a1, 0x9B, 0, temp_v0, D_8008CEF4, 0, 0, 0, 0, 0);
        if ((u32) (D_8008E9E0 % 1000) < 0x1F4U) {
            func_80039738(D_8008CEEC, 8, 1, 0x140, 0x9B, D_800890E0);
        }
    }
}

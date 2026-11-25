/* Partial candidate from function #408021895470 in project #95; rechecked locally. */
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8006B8F0();
s32 func_80067FC0();
s32 func_800680F0();
extern char D_80054900[];
extern char D_800549D0[];
extern s32 D_800FD9F0;
extern s32 D_800FD9F4;

void func_8005F660(void *arg0) {
    s32 sp18;
    s32 sp10;
    s32 sp20[2];
    s32 *sp28;
    s32 sp2C[14];
    s32 *sp64;
    u32 sp78;
    s32 temp_a3;

    sp10 = 0;
    sp64 = &sp78;
    sp18 = 2;
    sp2C[13] = (u32)D_800FD9F4 + 0x30;
    sp20[0] = 2;
    sp2C[9] = (*(s32 *)((char *)(arg0) + 0));
    temp_a3 = (*(s32 *)((char *)(arg0) + 4));
    sp28 = D_80054900;
    sp2C[0] = D_800549D0 - D_80054900;
    sp20[1] = 0;
    sp2C[10] = ((*(s32 *)((char *)(arg0) + 4)));
    sp2C[1] = (*(s32 *)((char *)(arg0) + 8));
    sp2C[2] = 0x1000;
    sp2C[4] = 0x800;
    sp2C[5] = 0;
    sp2C[6] = 0;
    sp2C[7] = 0;
    sp2C[8] = 0;
    sp2C[11] = 0;
    sp2C[12] = 0;
    sp2C[3] = (*(s32 *)((char *)(arg0) + 0xC));
    func_800680F0(func_8006B8F0(D_800FD9F0), &sp10, 1);
    func_80067FC0(D_800FD9F4 + 0x30, 0, 1);
}

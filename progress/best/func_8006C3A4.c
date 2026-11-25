/* identical to pi_access_wait in V-RALLY-PAL (matched), with its names changed by decompdecomp */
s32 func_80066C50();
s32 func_80067FC0();
s32 func_800680F0();
extern s32 D_80097DB0;
extern char D_800A60B0[];
extern char D_800A4408[];
extern char D_800B6FF8[];

/* Blocks until the PI access queue (at D_800A4408+0x87A8) receives a message. The first call
   creates that queue, with a one-message buffer, and posts the initial token. */
void func_8006C3A4(void)
{
    s32 msg;

    if (D_80097DB0 == 0) {
        D_80097DB0 = 1;
        func_80066C50(D_800A4408 + 0x87A8, D_800A60B0 + 0x6AF0, 1);
        func_800680F0(D_800B6FF8, 0, 0);
    }
    func_80067FC0(D_800A4408 + 0x87A8, &msg, 1);
}

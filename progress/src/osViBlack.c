/* identical to osViBlack in Bottom of the 9th (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800B2E90 in ALL STAR TENNIS '99 (local match library) (matched), with its names changed by decompdecomp */
/* identical to osViBlack in TWINE (local match library) (matched), with its names changed by decompdecomp */
/* identical to osViBlack in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
s32 func_8005FEF0(s32 a0);
void func_8005FF60(s32 a0);
extern u16 *D_80097E54;

/* Turns the VI blank bit (0x20 in the VI control word at D_80097E54) on when
 * active is non-zero, off otherwise. Interrupts are disabled around the update. */
void osViBlack(s32 active)
{
    s32 saved_int;
    u16 *ctrl;

    saved_int = func_8005FEF0(active);
    if (active & 0xFF) {
        ctrl = D_80097E54;
        *ctrl = *ctrl | 0x20;
    } else {
        ctrl = D_80097E54;
        *ctrl = *ctrl & 0xFFDF;
    }
    func_8005FF60(saved_int);
}

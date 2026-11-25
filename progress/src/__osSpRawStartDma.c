/* identical to func_80105730 in HARVESTMOON64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to guOrtho in GEX: ENTER THE GECKO (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80077BA0 in Gex 3 Deep Cover Gec (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800284E0 in FIGHTER DESTINY2 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800A08B0 in EARTHWORM JIM 3D (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8000D360 in DR.MARIO 64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80044FE0 in TARZAN (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80047A80 in CruisnExotica (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80042370 in CHARLIE BLAST'S (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8009CC50 in BLUES BROTHERS 2000 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80051590 in BATTLEZONE (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80194340 in BATMAN BEYOND RETURN (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800595B0 in BASSMASTERS2000 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800C3280 in AIDYN_CHRONICLES (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800634C0 in Asteroids Hyper 64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800A92C0 in TWINE (local match library) (matched), with its names changed by decompdecomp */
s32 func_8006B020(void);
s32 osVirtualToPhysical(s32);

s32 __osSpRawStartDma(s32 direction, u32 spAddress, s32 dramAddress, u32 size) {
    volatile u32 *length;
    if (func_8006B020())
        return -1;
    *(volatile u32 *)0xA4040000 = spAddress;
    *(volatile u32 *)0xA4040004 = osVirtualToPhysical(dramAddress);
    switch (direction) {
        case 1: length = (volatile u32 *)0xA4040008; break;
        case 0: length = (volatile u32 *)0xA404000C; break;
    default: length = (volatile u32 *)0xA4040008; break;
        }
    *length = size - 1;
    return 0;
}

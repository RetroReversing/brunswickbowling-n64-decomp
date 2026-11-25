/* identical to func_801015E4 in HARVESTMOON64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to alLoadNew in Glover (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8005F324 in GEX: ENTER THE GECKO (local match library) (matched), with its names changed by decompdecomp */
/* identical to alLoadNew in Gex 3 Deep Cover Gec (local match library) (matched), with its names changed by decompdecomp */
/* identical to alLoadNew in ALL STAR TENNIS '99 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80015294 in Forsaken (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8001ADB4 in FIGHTER DESTINY2 (local match library) (matched), with its names changed by decompdecomp */
/* identical to alLoadNew in FIFA 99 (local match library) (matched), with its names changed by decompdecomp */
/* identical to alLoadNew in DR.MARIO 64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8000DCE4 in Donald Duck Goin' Qu (local match library) (matched), with its names changed by decompdecomp */
/* identical to alLoadNew in DESTRUCT DERBY (local match library) (matched), with its names changed by decompdecomp */
/* identical to alLoadNew in CyberTiger (local match library) (matched), with its names changed by decompdecomp */
/* identical to alLoadNew in CruisnExotica (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800663C4 in Command&Conquer (local match library) (matched), with its names changed by decompdecomp */
/* identical to alLoadNew in Clayfighter SC (local match library) (matched), with its names changed by decompdecomp */
/* identical to alLoadNew in CHARLIE BLAST'S (local match library) (matched), with its names changed by decompdecomp */
/* identical to alLoadNew in Bust A Move 2 (local match library) (matched), with its names changed by decompdecomp */
/* identical to alLoadNew in Bust A Move '99 (local match library) (matched), with its names changed by decompdecomp */
/* identical to alLoadNew in Bottom of the 9th (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80045894 in BATTLEZONE (local match library) (matched), with its names changed by decompdecomp */
/* identical to alLoadNew in Asteroids Hyper 64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to alLoadNew in PENNY RACERS (local match library) (matched), with its names changed by decompdecomp */
/* identical to alLoadNew in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
s32 func_80063050(void *a0, void *fn2, void *fn3, s32 n4);
s32 alHeapDBAlloc(s32, s32, s32, s32, s32);
extern void *alAdpcmPull;
extern void *alLoadParam;

void alLoadNew(void *arg0, s32 (*arg1)(void *), s32 arg2) {
    func_80063050(arg0, &alAdpcmPull, &alLoadParam, 0);
    *(s32 *)((s8 *)arg0 + 0x14) = alHeapDBAlloc(0, 0, arg2, 1, 0x20);
    *(s32 *)((s8 *)arg0 + 0x18) = alHeapDBAlloc(0, 0, arg2, 1, 0x20);
    *(s32 *)((s8 *)arg0 + 0x30) = arg1((s8 *)arg0 + 0x34);
    *(s32 *)((s8 *)arg0 + 0x3C) = 0;
    *(s32 *)((s8 *)arg0 + 0x40) = 1;
    *(s32 *)((s8 *)arg0 + 0x44) = 0;
}

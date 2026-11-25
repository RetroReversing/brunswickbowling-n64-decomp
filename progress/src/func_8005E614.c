/* identical to func_80067808 in Gex 3 Deep Cover Gec (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800152D8 in FIGHTER DESTINY2 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8009A438 in CyberTiger (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80036734 in CruisnExotica (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800652D4 in Command&Conquer (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800FE4C8 in BATTLETANXGA (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_801897BC in BATMAN BEYOND RETURN (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8008A3D8 in ARMYMEN SARGE 2 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80080138 in Army Men Sarge (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80098B98 in ARMYMENAIRCOMBAT (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80068424 in Asteroids Hyper 64 (local match library) (matched), with its names changed by decompdecomp */
/* adapted from similar verified C in FrandNote in V-RALLY-PAL (matched), with its names changed by decompdecomp */
s32 func_8005D584(s32 scale);

/* Reads two bytes of note data: the first is scaled by a random value and stored at arg0+0xB5, then the second is added and stored there too. Returns the data pointer past both bytes. */
unsigned char *func_8005E614(char *arg0, unsigned char *arg1) {
    int v = func_8005D584(*arg1++);
    arg0[189] = v;
    v += *arg1;
    arg0[189] = v;
    return arg1 + 1;
}

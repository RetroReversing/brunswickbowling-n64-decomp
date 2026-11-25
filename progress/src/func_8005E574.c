/* identical to func_80067768 in Gex 3 Deep Cover Gec (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80015238 in FIGHTER DESTINY2 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8009A398 in CyberTiger (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80036694 in CruisnExotica (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80065234 in Command&Conquer (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800FE428 in BATTLETANXGA (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8018971C in BATMAN BEYOND RETURN (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80080098 in Army Men Sarge (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80098AF8 in ARMYMENAIRCOMBAT (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80068384 in Asteroids Hyper 64 (local match library) (matched), with its names changed by decompdecomp */
/* adapted from similar verified C in FrandNote in V-RALLY-PAL (matched), with its names changed by decompdecomp */
s32 func_8005D584(s32 scale);

/* Reads two bytes of note data: the first is scaled by a random value and stored at arg0+0xB5, then the second is added and stored there too. Returns the data pointer past both bytes. */
unsigned char *func_8005E574(char *arg0, unsigned char *arg1) {
    int v = func_8005D584(*arg1++);
    arg0[185] = v;
    v += *arg1;
    arg0[185] = v;
    return arg1 + 1;
}

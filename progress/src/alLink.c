/* identical to alLink in Bottom of the 9th (local match library) (matched), with its names changed by decompdecomp */
/* identical to alLink in BLUES BROTHERS 2000 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8003FFAC in BATTLEZONE (local match library) (matched), with its names changed by decompdecomp */
/* identical to alLink in Asteroids Hyper 64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to alLink in ARMYMEN SARGE 2 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8008C3FC in Army Men Sarge (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800B1D0C in ALL STAR TENNIS '99 (local match library) (matched), with its names changed by decompdecomp */
/* identical to alLink in Shadowman (local match library) (matched), with its names changed by decompdecomp */
/* identical to alLink in PENNY RACERS (local match library) (matched), with its names changed by decompdecomp */
/* identical to alLink in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
struct N { struct N *next; struct N **prev; };
void alLink(struct N *arg0, struct N **arg1) { arg0->next = *arg1; arg0->prev = arg1; if (*arg1) (*arg1)->prev = (struct N **)arg0; *arg1 = arg0; }

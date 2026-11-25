/* identical to func_8003B430 in Bottom of the 9th (local match library) (matched), with its names changed by decompdecomp */
/* identical to rsp_set_pc_if_halted in BLUES BROTHERS 2000 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80051560 in BATTLEZONE (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80194310 in BATMAN BEYOND RETURN (local match library) (matched), with its names changed by decompdecomp */
/* identical to __osSpSetPc in ARMYMEN SARGE 2 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80059580 in BASSMASTERS2000 (local match library) (matched), with its names changed by decompdecomp */
/* identical to __osSpSetPc in All Star Baseball 99 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800C3010 in AIDYN_CHRONICLES (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8005EF70 in Asteroids Hyper 64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8008D190 in Army Men Sarge (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800BB8D0 in ALL STAR TENNIS '99 (local match library) (matched), with its names changed by decompdecomp */
/* identical to __osSpSetPc in TWINE (local match library) (matched), with its names changed by decompdecomp */
/* identical to __osSpSetPc in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
/* Sets the RSP program counter (SP_PC) to pc, but only while the RSP is halted (SP_STATUS bit 0); returns -1 otherwise. */
s32 __osSpSetPc(s32 pc) {
    s32 ret;

    if (*(vu32 *)0xA4040010 & 1) {
        *(vs32 *)0xA4080000 = pc;
        ret = 0;
    } else {
        ret = -1;
    }
    return ret;
}

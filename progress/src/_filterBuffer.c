/* identical to func_80102F40 in HARVESTMOON64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to _filterBuffer in Glover (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80061CE0 in GEX: ENTER THE GECKO (local match library) (matched), with its names changed by decompdecomp */
/* identical to _filterBuffer in Gex 3 Deep Cover Gec (local match library) (matched), with its names changed by decompdecomp */
/* identical to _filterBuffer in ALL STAR TENNIS '99 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80017D0C in Forsaken (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8001D770 in FIGHTER DESTINY2 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80011F5C in FIFA 99 (local match library) (matched), with its names changed by decompdecomp */
/* identical to _filterBuffer in EARTHWORM JIM 3D (local match library) (matched), with its names changed by decompdecomp */
/* identical to _filterBuffer in DR.MARIO 64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80010AAC in Donald Duck Goin' Qu (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800742FC in DESTRUCT DERBY (local match library) (matched), with its names changed by decompdecomp */
/* identical to _filterBuffer in CyberTiger (local match library) (matched), with its names changed by decompdecomp */
/* identical to _filterBuffer in CruisnExotica (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80068ECC in Command&Conquer (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8009EC0C in Clayfighter SC (local match library) (matched), with its names changed by decompdecomp */
/* identical to _filterBuffer in CHARLIE BLAST'S (local match library) (matched), with its names changed by decompdecomp */
/* identical to _filterBuffer in Bust A Move 2 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800A0CCC in Bust A Move '99 (local match library) (matched), with its names changed by decompdecomp */
/* identical to _filterBuffer in A Bug's Life (local match library) (matched), with its names changed by decompdecomp */
/* identical to _filterBuffer in Bottom of the 9th (local match library) (matched), with its names changed by decompdecomp */
/* identical to _filterBuffer in BLUES BROTHERS 2000 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80048250 in BATTLEZONE (local match library) (matched), with its names changed by decompdecomp */
/* identical to _filterBuffer in Asteroids Hyper 64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to _filterBuffer in PENNY RACERS (local match library) (matched), with its names changed by decompdecomp */
/* identical to _filterBuffer in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
s32 osVirtualToPhysical();

void *_filterBuffer(void *arg0, s32 arg1, s32 arg2, void *arg3)
{
    s32 *dst;
    u16 temp_a1;
    s32 temp_a1_2;
    void *new_var;

    temp_a1 = arg1;
    dst = arg3;
    dst[0] = temp_a1 | 0x08000000;
    temp_a1_2 = (temp_a1 << 0x10) | ((arg2 << 1) & 0xFFFF);
    dst[1] = temp_a1_2;
    dst[2] = 0x0B000020;
    dst[3] = osVirtualToPhysical((char *) arg0 + 8, temp_a1_2, (arg2 << 1) & 0xFFFF);
    new_var = dst + 6;
    dst[4] = (((*((u8 *) arg0 + 0x2F)) << 0x10) | 0x0E000000) | *((u16 *) ((char *) arg0 + 2));
    dst[5] = osVirtualToPhysical(*((s32 *) ((char *) arg0 + 0x28)));
    *((s32 *) ((char *) arg0 + 0x2C)) = 0;
    return new_var;
}

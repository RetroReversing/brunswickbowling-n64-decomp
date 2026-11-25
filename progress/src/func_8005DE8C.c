/* identical to func_80067080 in Gex 3 Deep Cover Gec (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80014B50 in FIGHTER DESTINY2 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8008E11C in EARTHWORM JIM 3D (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80099CB0 in CyberTiger (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80035FAC in CruisnExotica (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80064B64 in Command&Conquer (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80079580 in A Bug's Life (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8008C3A0 in BLUES BROTHERS 2000 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800FDD40 in BATTLETANXGA (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80189034 in BATMAN BEYOND RETURN (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80089C50 in ARMYMEN SARGE 2 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8007F9B0 in Army Men Sarge (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80098410 in ARMYMENAIRCOMBAT (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80067C9C in Asteroids Hyper 64 (local match library) (matched), with its names changed by decompdecomp */
/* adapted from similar verified C in Fwave in V-RALLY-PAL (matched), with its names changed by decompdecomp */
/* Reads a variable-length 7-bit / 15-bit encoded value from `src` and stores it
 * into the 16-bit field at `dst + 0xA6`. Returns the advanced `src` pointer. */
u8 *func_8005DE8C(u8 *dst, u8 *src) {
    u32 val;
    u32 byte2;

    val = *src++;
    if (val & 0x80) {
        byte2 = *src++;
        val = byte2 | ((val & 0x7F) << 8);
    }
    *(s16 *)(dst + 174) = val;
    return src;
}

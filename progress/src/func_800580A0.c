/* identical to func_8004A3D0 in CruisnExotica (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80069F50 in GEX: ENTER THE GECKO (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8007BB60 in Gex 3 Deep Cover Gec (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800BBE50 in ALL STAR TENNIS '99 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8002CB00 in FIGHTER DESTINY2 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800A1A80 in EARTHWORM JIM 3D (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8000DB30 in DR.MARIO 64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80046FF0 in TARZAN (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800799A0 in DESTRUCT DERBY (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80043340 in CHARLIE BLAST'S (local match library) (matched), with its names changed by decompdecomp */
/* identical to memset in TWINE (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800580A0 in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
/* Sets n bytes at dst to the low byte of c. Writes the unaligned head and tail a byte or
   halfword at a time and the aligned middle a word at a time. Returns dst. */
#ifdef PORT
void *func_800580A0(void *dst, s32 c, u32 n)
#else
s32 func_800580A0(s32 dst, s32 c, u32 n)
#endif
{
    u32 pat;
#ifdef PORT
    u8 *p;
#else
    s32 p;
#endif
    u32 n_left;
    s32 words;

    if (n != 0) {
        pat = c & 0xFF;
        pat = pat | (pat << 8);
        pat = pat | (pat << 16);
        p = dst;
        n_left = n;
        #ifdef PORT
        if (((uintptr_t)p & 1)) {
#else
        if (p & 1) {
#endif
            *((s8 *)p) = pat;
            p += 1;
            n_left -= 1;
        }
        words = n_left >> 2;
        if (n_left >= 2) {
            #ifdef PORT
            if (((uintptr_t)p & 2)) {
#else
            if (p & 2) {
#endif
                *((s16 *)p) = pat;
                p += 2;
                n_left -= 2;
                words = n_left >> 2;
            }
        }
        words -= 1;
        if (words != -1) {
            do {
                *((s32 *)p) = pat;
                words -= 1;
                p += 4;
            } while (words != -1);
        }
        if (n_left & 2) {
            *((s16 *)p) = pat;
            p += 2;
        }
        if (n_left & 1) {
            *((s8 *)p) = pat;
        }
    }
    return dst;
}

/* identical to func_8010BA50 in HARVESTMOON64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80077060 in Gex 3 Deep Cover Gec (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80026D80 in FIGHTER DESTINY2 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8009ABC0 in EARTHWORM JIM 3D (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8000A9C0 in DR.MARIO 64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80043DA0 in TARZAN (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800468F0 in CruisnExotica (local match library) (matched), with its names changed by decompdecomp */
/* identical to piWriteDomainWord in TWINE (local match library) (matched), with its names changed by decompdecomp */
extern s32 D_80097920[];
extern s32 D_A0000000;
/* Writes one word to a PI device address. First waits for any pending PI DMA to finish, then
   reprograms the domain timing registers if the handle's cached values differ from the new ones. */
/* Writes one word to a PI device address after waiting for DMA idle and reprogramming domain timing if needed */ s32 __osEPiRawWriteIo(u8 *handle, s32 devAddr, s32 *data) {
    u8 *shadow;
    u8 *domainCache;
    s32 domain;
    if (*(vu32 *)0xA4600010 & 3) {
        do {
        } while (*(vu32 *)0xA4600010 & 3);
    }
    domain = handle[9];
    shadow = (u8 *)(unsigned long)D_80097920[domain];
    if (shadow[4] != handle[4]) {
        domainCache = shadow;
        if (domain == 0) {
            if (domainCache[5] != handle[5]) *(vu32 *)0xA4600014 = handle[5];
            if (domainCache[6] != handle[6]) *(vu32 *)0xA460001C = handle[6];
            if (domainCache[7] != handle[7]) *(vu32 *)0xA4600020 = handle[7];
            if (domainCache[8] != handle[8]) *(vu32 *)0xA4600018 = handle[8];
        } else {
            if (domainCache[5] != handle[5]) *(vu32 *)0xA4600024 = handle[5];
            if (domainCache[6] != handle[6]) *(vu32 *)0xA460002C = handle[6];
            if (domainCache[7] != handle[7]) *(vu32 *)0xA4600030 = handle[7];
            if (domainCache[8] != handle[8]) *(vu32 *)0xA4600028 = handle[8];
        }
        domainCache[4] = handle[4];
        domainCache[5] = handle[5];
        domainCache[6] = handle[6];
        domainCache[7] = handle[7];
        domainCache[8] = handle[8];
    }
    *(s32 *)(unsigned long)(*(u32 *)(handle + 0xC) | (u32)devAddr | 0xA0000000U) = (s32)data;
    return 0;
}

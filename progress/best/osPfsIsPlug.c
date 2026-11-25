/* identical to osPfsIsPlug in CruisnExotica (local match library) (matched), with its names changed by decompdecomp */
/* identical to osPfsIsPlug in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
typedef struct { u16 type; u8 status; u8 errno; } CS;
extern u8 D_800A771C;
extern char D_800B64AE[];
s32 __osPfsRequestData(s32);
void func_8006EE60();
void func_8006C3A4();
void func_8006C410();
s32 func_8006C2A0();
s32 func_80067FC0(s32, s32 *, s32);

/* Polls the controller pak status for every channel until all of them report
 * ready, then stores a bitmask of the channels with a pak plugged in. */
s32 osPfsIsPlug(s32 queue, u8 *pattern) {
    s32 ret;
    s32 dummy;
    s32 channel;
    s32 cntrlrs = 0;
    u8 bitpattern;
    CS data[4];
    s32 crap = 3;
    u8 *pif;
    func_8006C3A4();
    pif = (u8*)(D_800B64AE + 0x7E82);
    do {
        __osPfsRequestData(0);
        func_8006C2A0(1, pif);
        func_80067FC0(queue, &dummy, 1);
        ret = func_8006C2A0(0, pif);
        func_80067FC0(queue, &dummy, 1);
        func_8006EE60(&bitpattern, data);
        for (channel = 0; channel < D_800A771C; channel++) {
            if (!(data[channel].status & 4)) { crap--; break; }
        }
        if (channel != D_800A771C) continue;
        crap = 0;
    } while (crap > 0);
    for (channel = 0; channel < D_800A771C; channel++) {
        if (data[channel].errno == 0 && (data[channel].status & 1)) cntrlrs |= 1 << channel;
    }
    func_8006C410();
    *pattern = cntrlrs;
    return ret;
}

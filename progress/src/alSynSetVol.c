/* identical to alSynSetVol in Glover (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80058680 in GEX: ENTER THE GECKO (local match library) (matched), with its names changed by decompdecomp */
/* identical to alSynSetVol in Gex 3 Deep Cover Gec (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80018500 in Forsaken (local match library) (matched), with its names changed by decompdecomp */
/* identical to alSynSetVol in FIFA 99 (local match library) (matched), with its names changed by decompdecomp */
/* identical to alSynSetVol in DR.MARIO 64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to alSynSetVol in DESTRUCT DERBY (local match library) (matched), with its names changed by decompdecomp */
/* identical to alSynSetVol in CyberTiger (local match library) (matched), with its names changed by decompdecomp */
/* identical to alSynSetVol in Clayfighter SC (local match library) (matched), with its names changed by decompdecomp */
/* identical to alSynSetVol in CHARLIE BLAST'S (local match library) (matched), with its names changed by decompdecomp */
/* identical to alSynSetVol in CARMAGEDDON64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80073A20 in Bust A Move 2 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800A14C0 in Bust A Move '99 (local match library) (matched), with its names changed by decompdecomp */
/* identical to alSynSetVol in A Bug's Life (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800489E0 in BATTLEZONE (local match library) (matched), with its names changed by decompdecomp */
/* identical to alSynSetVol in Asteroids Hyper 64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to alSynSetVol in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
void *__allocParam();
s32 _timeToSamples(void *, s32, s32);

/* Queues a set-volume parameter (type 0xB) on the voice's unit, timed from
 * the synth clock plus the unit delay, and sends it to the unit's sink
 * handler (message 3). Does nothing if the voice has no unit or no param
 * is free. */
void alSynSetVol(void *synth, void *voice, s32 vol, s32 t)
{
    char *p;
    char *unit;
    char *sink;
    s32 unitDelay;
    s32 synthTime;
    void (*handler)(void *, s32, void *);

    if (*(char **)((char *)voice + 8) != NULL) {
        p = __allocParam();
        if (p != NULL) {
            unit = *(char **)((char *)voice + 8);
            synthTime = *(s32 *)((char *)synth + 0x1C);
            unitDelay = *(s32 *)(unit + 0xD8);
            *(s16 *)(p + 8) = 0xB;
            *(s32 *)(p + 0xC) = (s16)vol;
            *(s32 *)(p + 4) = synthTime + unitDelay;
            *(s32 *)(p + 0x10) = _timeToSamples(synth, t, unitDelay);
            *(s32 *)p = 0;
            sink = *(char **)(*(char **)((char *)voice + 8) + 0xC);
            handler = *(void (**)(void *, s32, void *))(sink + 8);
            handler(sink, 3, p);
        }
    }
}

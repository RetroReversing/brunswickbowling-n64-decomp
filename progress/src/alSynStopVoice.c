/* identical to alSynStopVoice in Glover (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800584D0 in GEX: ENTER THE GECKO (local match library) (matched), with its names changed by decompdecomp */
/* identical to alSynStopVoice in Gex 3 Deep Cover Gec (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80018250 in Forsaken (local match library) (matched), with its names changed by decompdecomp */
/* identical to alSynStopVoice in FIFA 99 (local match library) (matched), with its names changed by decompdecomp */
/* identical to alSynStopVoice in EARTHWORM JIM 3D (local match library) (matched), with its names changed by decompdecomp */
/* identical to alSynStopVoice in DR.MARIO 64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to alSynStopVoice in DESTRUCT DERBY (local match library) (matched), with its names changed by decompdecomp */
/* identical to alSynStopVoice in CyberTiger (local match library) (matched), with its names changed by decompdecomp */
/* identical to alSynStopVoice in Clayfighter SC (local match library) (matched), with its names changed by decompdecomp */
/* identical to alSynStopVoice in CHARLIE BLAST'S (local match library) (matched), with its names changed by decompdecomp */
/* identical to alSynStopVoice in CARMAGEDDON64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80073770 in Bust A Move 2 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800A1210 in Bust A Move '99 (local match library) (matched), with its names changed by decompdecomp */
/* identical to alSynStopVoice in A Bug's Life (local match library) (matched), with its names changed by decompdecomp */
/* identical to alSynStopVoice in BLUES BROTHERS 2000 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80048730 in BATTLEZONE (local match library) (matched), with its names changed by decompdecomp */
/* identical to alSynStopVoice in Asteroids Hyper 64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to alSynStopVoice in Shadowman (local match library) (matched), with its names changed by decompdecomp */
/* identical to alSynStopVoice in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

void *__allocParam();

/* Stops a voice by queuing a stop event: if the voice has a handler, allocates a parameter block, fills it with event type 0xF and the synth time plus the handler's offset, then sends it to the handler's owner as message 3. */
void alSynStopVoice(void *synth, void *voice) {
    s32 (*fn)(void *, s32, void *);
    s32 time;
    void *evt;
    void *owner;
#ifdef PORT
    s32 delta;
#endif

    fn = M2C_FIELD(voice, s32 (**)(void *, s32, void *), 8);
    if (fn != NULL) {
        evt = __allocParam();
        if (evt != NULL) {
            fn = M2C_FIELD(voice, s32 (**)(void *, s32, void *), 8);
            time = *(s32 *)((char *)synth + 0x1C);
            owner = *(void * *)((char *)fn + 0xD8);
#ifdef PORT
            delta = *(s32 *)((char *)fn + 0xD8);
#endif
            fn = (s32 (*)(void *, s32, void *))0xF;
            *(s16 *)((char *)evt + 8) = 0xF;
            *(s32 *)((char *)evt + 0) = 0;
#ifdef PORT
            time += delta;
#else
            time += owner;
#endif
            *(s32 *)((char *)evt + 4) = time;
            fn = M2C_FIELD(voice, s32 (**)(void *, s32, void *), 8);
            owner = *(void * *)((char *)fn + 0xC);
            fn = M2C_FIELD(owner, s32 (**)(void *, s32, void *), 8);
            fn(owner, 3, evt);
        }
    }
}

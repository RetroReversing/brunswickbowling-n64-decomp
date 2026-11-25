/* identical to alSynStartVoice in Glover (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80058550 in GEX: ENTER THE GECKO (local match library) (matched), with its names changed by decompdecomp */
/* identical to alSynStartVoice in Gex 3 Deep Cover Gec (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800182D0 in Forsaken (local match library) (matched), with its names changed by decompdecomp */
/* identical to alSynStartVoice in FIFA 99 (local match library) (matched), with its names changed by decompdecomp */
/* identical to alSynStartVoice in EARTHWORM JIM 3D (local match library) (matched), with its names changed by decompdecomp */
/* identical to alSynStartVoice in DR.MARIO 64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to alSynStartVoice in DESTRUCT DERBY (local match library) (matched), with its names changed by decompdecomp */
/* identical to alSynStartVoice in CyberTiger (local match library) (matched), with its names changed by decompdecomp */
/* identical to alSynStartVoice in Clayfighter SC (local match library) (matched), with its names changed by decompdecomp */
/* identical to alSynStartVoice in CHARLIE BLAST'S (local match library) (matched), with its names changed by decompdecomp */
/* identical to alSynStartVoice in CARMAGEDDON64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800737F0 in Bust A Move 2 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800A1290 in Bust A Move '99 (local match library) (matched), with its names changed by decompdecomp */
/* identical to alSynStartVoice in A Bug's Life (local match library) (matched), with its names changed by decompdecomp */
/* identical to alSynStartVoice in BLUES BROTHERS 2000 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800487B0 in BATTLEZONE (local match library) (matched), with its names changed by decompdecomp */
/* identical to alSynStartVoice in Asteroids Hyper 64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to alSynStartVoice in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
/* Layouts used by alSynStartVoice (audio synth, libaudio). */
#define AL_EVT_START_VOICE 0xE
#define AL_EVT_TYPE_ADD    3

typedef struct AlEvent { struct AlEvent *next; s32 time; s16 type; s16 vel; s32 param; } AlEvent;
typedef s32 (*AlHandler)(void *self, s32 type, AlEvent *evt);
typedef struct AlOwner { u8 pad00[8]; AlHandler handler; } AlOwner;
typedef struct AlUnit { u8 pad00[0xC]; AlOwner *owner; u8 pad10[0xC8]; s32 timeOffset; } AlUnit;
typedef struct AlVoice { u8 pad00[8]; AlUnit *unit; u8 pad0C[0xE]; s16 vel; } AlVoice;
typedef struct AlSynth { u8 pad00[0x1C]; s32 now; } AlSynth;

void *__allocParam();

/* Queues a start event for a voice on the synth. The event is stamped with the
 * current synth time plus the unit's time offset and handed to the unit's owner. */
void alSynStartVoice(AlSynth *synth, AlVoice *voice, s32 param) {
    AlEvent *evt;
    AlOwner *owner;
    s32 time;

    if (voice->unit != NULL) {
        evt = __allocParam();
        if (evt != NULL) {
            time = synth->now + voice->unit->timeOffset;
            evt->type = AL_EVT_START_VOICE;
            evt->param = param;
            evt->next = NULL;
            evt->time = time;
            evt->vel = voice->vel;
            owner = voice->unit->owner;
            owner->handler(owner, AL_EVT_TYPE_ADD, evt);
        }
    }
}

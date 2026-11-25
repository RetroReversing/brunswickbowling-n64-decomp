/* identical to func_801091BC in HARVESTMOON64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to alResampleParam in Glover (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800611AC in GEX: ENTER THE GECKO (local match library) (matched), with its names changed by decompdecomp */
/* identical to alResampleParam in Gex 3 Deep Cover Gec (local match library) (matched), with its names changed by decompdecomp */
/* identical to alResampleParam in ALL STAR TENNIS '99 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8001719C in Forsaken (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8001CC3C in FIGHTER DESTINY2 (local match library) (matched), with its names changed by decompdecomp */
/* identical to alResampleParam in V-RALLY-PAL (matched), with its names changed by decompdecomp */
typedef void (*CbFn)(void *, s32, s32);

typedef struct AlFilter {
    struct AlFilter *child;
    s32 unk4;
    CbFn cb;
} AlFilter;

typedef struct AlResample {
    AlFilter *child;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 rate;
    s32 flush;
    s32 pending;
    s32 active;
    s32 unk28;
    s32 unk2C;
    s32 stopping;
} AlResample;

/* Sets one parameter on a resampler. Param 1 sets the child filter, 4 resets (clears state and
 * sends the child 4), 9 sends the child 9 after marking it stopping, 7 sets the rate, 8 requests a
 * flush. Any other param (2, 3, 5, 6 included) is forwarded to the child's callback. Always
 * returns 0. Case labels follow the original jump table (jtbl_800A7198). */
#ifdef PORT
typedef uintptr_t ParamWord;   /* a word that may hold an address (the child filter) */
#else
typedef s32 ParamWord;
#endif

s32 alResampleParam(AlResample *resample, s32 param, ParamWord value) {
    AlResample *self = resample;
    AlFilter *node;

    switch (param) {
    case 1:
        resample->child = (AlFilter *)value;
        return 0;
    case 4:
        self->pending = 0;
        self->active = 1;
        self->stopping = 0;
        self->flush = 0;
        node = resample->child;
        if (node != NULL) {
            node->cb(node, 4, 0);
        }
        return 0;
    case 9:
        self->stopping = 1;
        node = resample->child;
        if (node != NULL) {
            node->cb(node, 9, 0);
        }
        return 0;
    case 7:
        self->rate = value;
        return 0;
    case 8:
        self->flush = 1;
        return 0;
    default:
        break;
    }
    node = resample->child;
    if (node != NULL) {
        node->cb(node, param, value);
    }
    return 0;
}

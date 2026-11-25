/* adapted from similar verified C in _pullSubFrame in BLUES BROTHERS 2000 (matched), with its names changed by decompdecomp */
typedef struct {
    u32 w0;
    u32 w1;
} AcmdWords;

typedef union {
    AcmdWords words;
    long long force_union_align;
} AcmdU;

typedef struct ALFilterW {
    struct ALFilterW *source;
    AcmdU *(*handler)(void *, s16 *, s32, s32, AcmdU *);
    void *setParam;
    s16 inp;
    s16 outp;
    s32 type;
} ALFilterW;

typedef struct {
    ALFilterW filter;
    void *state;
    s16 pan;
    s16 volume;
    s16 cvolL;
    s16 cvolR;
    s16 dryamt;
    s16 wetamt;
    u16 lratl;
    s16 lratm;
    s16 ltgt;
    u16 rratl;
    s16 rratm;
    s16 rtgt;
    s32 delta;
    s32 segEnd;
    s32 first;
    void *ctrlList;
    void *ctrlTail;
    ALFilterW **sources;
    s32 motion;
} ALEnvMixerW;

#define _SHIFTL(v, s, w) ((u32)(((u32)(v) & ((0x01 << (w)) - 1)) << (s)))
#define A_INIT 0x01
#define A_CONTINUE 0x00
#define A_LEFT 0x02
#define A_RIGHT 0x00
#define A_VOL 0x04
#define A_RATE 0x00
#define A_AUX 0x08
#define A_MAIN 0x00
#define A_SETBUFF 8
#define A_SETVOL 9
#define A_ENVMIXER 3
#define AL_MAIN_L_OUT 0x440
#define AL_MAIN_R_OUT 0x580
#define AL_AUX_L_OUT 0x6C0
#define AL_AUX_R_OUT 0x800
#define EQPOWER_LENGTH 128
#define AL_PLAYING 1

#define aEnvMixer(pkt, f, s) \
    { \
        AcmdU *_a = (AcmdU *)pkt; \
        _a->words.w0 = _SHIFTL(A_ENVMIXER, 24, 8) | _SHIFTL(f, 16, 8); \
        _a->words.w1 = (unsigned int)(s); \
    }
#define aSetBuffer(pkt, f, i, o, c) \
    { \
        AcmdU *_a = (AcmdU *)pkt; \
        _a->words.w0 = (_SHIFTL(A_SETBUFF, 24, 8) | _SHIFTL(f, 16, 8) | _SHIFTL(i, 0, 16)); \
        _a->words.w1 = _SHIFTL(o, 16, 16) | _SHIFTL(c, 0, 16); \
    }
#define aSetVolume(pkt, f, v, t, r) \
    { \
        AcmdU *_a = (AcmdU *)pkt; \
        _a->words.w0 = (_SHIFTL(A_SETVOL, 24, 8) | _SHIFTL(f, 16, 16) | _SHIFTL(v, 0, 16)); \
        _a->words.w1 = _SHIFTL(t, 16, 16) | _SHIFTL(r, 0, 16); \
    }

extern s16 D_80097B00[];
s16 _getRate(f64 vol, f64 tgt, s32 count, u16 *ratel);
u32 osVirtualToPhysical(void *);

AcmdU *_pullSubFrame(void *filter, s16 *inp, s16 *outp, s32 outCount, s32 sampleOffset, AcmdU *p) {
    AcmdU *ptr = p;
    ALEnvMixerW *e = (ALEnvMixerW *)filter;
    ALFilterW *source = e->filter.source;

    if (e->motion != AL_PLAYING || !outCount) {
        return ptr;
    }

    ptr = (*source->handler)(source, inp, outCount, sampleOffset, p);

    aSetBuffer(ptr++, A_MAIN, *inp, AL_MAIN_L_OUT + *outp, outCount << 1);
    aSetBuffer(ptr++, A_AUX, AL_MAIN_R_OUT + *outp, AL_AUX_L_OUT + *outp, AL_AUX_R_OUT + *outp);

    if (e->first) {
        e->first = 0;
        e->ltgt = (e->volume * D_80097B00[e->pan]) >> 15;
        e->lratm = _getRate((f64)e->cvolL, (f64)e->ltgt, e->segEnd, &(e->lratl));
        e->rtgt = (e->volume * D_80097B00[EQPOWER_LENGTH - e->pan - 1]) >> 15;
        e->rratm = _getRate((f64)e->cvolR, (f64)e->rtgt, e->segEnd, &(e->rratl));

        aSetVolume(ptr++, A_LEFT | A_VOL, e->cvolL, 0, 0);
        aSetVolume(ptr++, A_RIGHT | A_VOL, e->cvolR, 0, 0);
        aSetVolume(ptr++, A_LEFT | A_RATE, e->ltgt, e->lratm, e->lratl);
        aSetVolume(ptr++, A_RIGHT | A_RATE, e->rtgt, e->rratm, e->rratl);
        aSetVolume(ptr++, A_AUX, e->dryamt, 0, e->wetamt);
        aEnvMixer(ptr++, A_INIT | A_AUX, osVirtualToPhysical(e->state));
    } else {
        aEnvMixer(ptr++, A_CONTINUE | A_AUX, osVirtualToPhysical(e->state));
    }

    *inp += (outCount << 1);
    e->delta += outCount;

    return ptr;
}

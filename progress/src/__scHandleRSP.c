/* identical to __scHandleRSP in BLUES BROTHERS 2000 (local match library) (matched), with its names changed by decompdecomp */
typedef u64 OSTime;
typedef struct OSScTask {
    /* 0x00 */ struct OSScTask* next;
    /* 0x04 */ u32 state;
    /* 0x08 */ u32 flags;
    /* 0x0C */ u32 pad0;
    /* 0x10 */ u8 list[0x48];
    /* 0x58 */ OSTime startTime;
    /* 0x60 */ OSTime totalTime;
} OSScTask;
typedef struct OSSched {
    /* 0x000 */ u8 pad[0x268];
    /* 0x268 */ OSScTask* gfxListHead;
    /* 0x26C */ OSScTask* pad2;
    /* 0x270 */ OSScTask* gfxListTail;
    /* 0x274 */ OSScTask* curRSPTask;
    /* 0x278 */ OSScTask* curRDPTask;
} OSSched;
extern s32 osSpTaskYielded(void*);
extern OSTime osGetTime(void);
extern void __scTaskComplete(OSSched*, OSScTask*);
extern s32 __scSchedule(OSSched*, OSScTask**, OSScTask**, s32);
extern void __scExec(OSSched*, OSScTask*, OSScTask*);

void __scHandleRSP(OSSched* sc) {
    OSScTask* t;
    OSScTask* sp = 0;
    OSScTask* dp = 0;
    s32 state;

    t = sc->curRSPTask;
    sc->curRSPTask = 0;

    if ((t->state & 0x10) && osSpTaskYielded(&t->list)) {
        t->state |= 0x20;
        t->totalTime += osGetTime() - t->startTime;
        if ((t->flags & 7) == 3) {
            t->next = sc->gfxListHead;
            sc->gfxListHead = t;
            if (sc->gfxListTail == 0) {
                sc->gfxListTail = t;
            }
        }
    } else {
        t->state &= ~2;
        __scTaskComplete(sc, t);
    }

    state = (sc->curRSPTask == 0) << 1;
    if (sc->curRDPTask == 0) {
        state |= 1;
    }
    if (__scSchedule(sc, &sp, &dp, state) != state) {
        __scExec(sc, sp, dp);
    }
}

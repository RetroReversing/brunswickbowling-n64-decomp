/* identical to func_80107670 in HARVESTMOON64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8005E0A0 in GEX: ENTER THE GECKO (local match library) (matched), with its names changed by decompdecomp */
/* identical to osJamMesg in ALL STAR TENNIS '99 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800737D0 in Gex 3 Deep Cover Gec (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800207A0 in FIGHTER DESTINY2 (local match library) (matched), with its names changed by decompdecomp */
/* identical to osJamMesg in EARTHWORM JIM 3D (local match library) (matched), with its names changed by decompdecomp */
/* identical to osJamMesg in DR.MARIO 64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to osJamMesg in TARZAN (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8000D1D0 in Donald Duck Goin' Qu (local match library) (matched), with its names changed by decompdecomp */
/* identical to osJamMesg in DESTRUCT DERBY (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80042030 in CruisnExotica (local match library) (matched), with its names changed by decompdecomp */
/* identical to osJamMesg in Clayfighter SC (local match library) (matched), with its names changed by decompdecomp */
/* identical to osJamMesg in CHARLIE BLAST'S (local match library) (matched), with its names changed by decompdecomp */
/* identical to osJamMesg in Bottom of the 9th (local match library) (matched), with its names changed by decompdecomp */
/* identical to osJamMesg in TWINE (local match library) (matched), with its names changed by decompdecomp */
/* identical to osJamMesg in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
typedef void *OSMesg;
typedef s32 OSPri;

typedef struct OSThread_s {
    struct OSThread_s *next;
    OSPri priority;
    struct OSThread_s **queue;
    struct OSThread_s *tlnext;
    u16 state;
} OSThread;

typedef struct OSMesgQueue_s {
    OSThread *mtqueue;
    OSThread *fullqueue;
    s32 validCount;
    s32 first;
    s32 msgCount;
    OSMesg *msg;
} OSMesgQueue;

extern OSThread *D_80097DD0;
extern u32 func_8005FEF0(void);
extern void func_8005FF60(u32);
extern void func_800678C4(OSThread **);
extern OSThread *__osPopThread(OSThread **);
extern void osStartThread(OSThread *);

/* Sends a message to the front of a queue, jamming it in ahead of others. If the queue is full, flag 1 blocks the current thread until there is room; otherwise returns -1. Wakes the first waiting receiver. */
/* Sends a message to the front of a message queue, blocking (flag 1) or failing (-1) when full, and wakes the first waiting receiver. */ s32 osJamMesg(OSMesgQueue *mq, OSMesg msg, s32 flag) {
    register u32 savedInterruptMask;

    savedInterruptMask = func_8005FEF0();

    while (mq->validCount >= mq->msgCount) {
        if (flag == 1) {
            D_80097DD0->state = (1 << 3);
            func_800678C4(&mq->fullqueue);
        } else {
            func_8005FF60(savedInterruptMask);
            return -1;
        }
    }

    mq->first = (mq->first + mq->msgCount - 1) % mq->msgCount;
    mq->msg[mq->first] = msg;
    mq->validCount++;

    if (mq->mtqueue->next != 0) {
        osStartThread(__osPopThread(&mq->mtqueue));
    }

    func_8005FF60(savedInterruptMask);
    return 0;
}

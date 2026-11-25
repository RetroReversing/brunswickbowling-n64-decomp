/* identical to func_800FF700 in HARVESTMOON64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800575C0 in GEX: ENTER THE GECKO (local match library) (matched), with its names changed by decompdecomp */
/* identical to osRecvMesg in Gex 3 Deep Cover Gec (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800208E0 in FIGHTER DESTINY2 (local match library) (matched), with its names changed by decompdecomp */
/* identical to osRecvMesg in DR.MARIO 64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to osRecvMesg in TARZAN (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80004190 in Donald Duck Goin' Qu (local match library) (matched), with its names changed by decompdecomp */
/* identical to osRecvMesg in DESTRUCT DERBY (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80042170 in CruisnExotica (local match library) (matched), with its names changed by decompdecomp */
/* identical to osRecvMesg in Clayfighter SC (local match library) (matched), with its names changed by decompdecomp */
/* identical to osRecvMesg in CHARLIE BLAST'S (local match library) (matched), with its names changed by decompdecomp */
/* identical to osRecvMesg in Bottom of the 9th (local match library) (matched), with its names changed by decompdecomp */
/* identical to osRecvMesg in TWINE (local match library) (matched), with its names changed by decompdecomp */
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

/* Receives the next message from a queue. If the queue is empty, flag 0 returns -1 at once; otherwise the thread blocks until a message arrives. Copies the message to *msg if msg is non-null, then wakes the first blocked sender. */
/* Receives the next message from a queue, blocking when flags is nonzero and the queue is empty. */ s32 osRecvMesg(OSMesgQueue *mq, OSMesg *msg, s32 flags) {
    register u32 savedInt;

    savedInt = func_8005FEF0();

    while (mq->validCount == 0) {
        if (flags == 0) {
            func_8005FF60(savedInt);
            return -1;
        } else {
            D_80097DD0->state = (1 << 3);
            func_800678C4(&mq->mtqueue);
        }
    }

    if (msg != 0) {
        *msg = mq->msg[mq->first];
    }

    mq->first = (mq->first + 1) % mq->msgCount;
    mq->validCount--;

    if (mq->fullqueue->next != 0) {
        osStartThread(__osPopThread(&mq->fullqueue));
    }

    func_8005FF60(savedInt);
    return 0;
}

/* identical to osSetTimer in HARVESTMOON64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8005E530 in GEX: ENTER THE GECKO (local match library) (matched), with its names changed by decompdecomp */
/* identical to osSetTimer in Gex 3 Deep Cover Gec (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80021500 in FIGHTER DESTINY2 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8000D5A0 in Donald Duck Goin' Qu (local match library) (matched), with its names changed by decompdecomp */
/* identical to osSetTimer in DESTRUCT DERBY (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800A2700 in Clayfighter SC (local match library) (matched), with its names changed by decompdecomp */
/* identical to osSetTimer in CHARLIE BLAST'S (local match library) (matched), with its names changed by decompdecomp */
/* identical to osSetTimer in Bottom of the 9th (local match library) (matched), with its names changed by decompdecomp */
/* identical to osSetTimer in PENNY RACERS (local match library) (matched), with its names changed by decompdecomp */
/* identical to osSetTimer in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
typedef u64 OSTime;
typedef void *OSMesg;
typedef struct OSMesgQueue_s OSMesgQueue;
typedef struct OSTimer_s {
    struct OSTimer_s *next;
    struct OSTimer_s *prev;
    OSTime interval;
    OSTime value;
    OSMesgQueue *mq;
    OSMesg msg;
} OSTimer;
extern OSTimer *D_80097DE0;
extern OSTime __osInsertTimer(OSTimer *);
extern void __osSetTimerIntr(OSTime);

/* Arms timer t. A zero countdown means "first fire after one interval". The timer is linked into the
 * timer list; if it is now the head, the hardware timer interrupt is reprogrammed to its time. */
int osSetTimer(OSTimer *timer, OSTime countdown, OSTime interval, OSMesgQueue *mq, OSMesg msg) {
    OSTime time;

    timer->next = 0;
    timer->prev = 0;
    timer->interval = interval;
    timer->value = (countdown != 0) ? countdown : interval;
    timer->mq = mq;
    timer->msg = msg;

    time = __osInsertTimer(timer);
    if (D_80097DE0->next == timer) {
        __osSetTimerIntr(time);
    }

    return 0;
}

/* identical to __osInsertTimer in Bottom of the 9th (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800B65A0 in ALL STAR TENNIS '99 (local match library) (matched), with its names changed by decompdecomp */
/* identical to __osInsertTimer in TWINE (local match library) (matched), with its names changed by decompdecomp */
/* identical to __osInsertTimer in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
typedef u64 OSTime;
typedef void *OSMesg;
typedef struct OSMesgQueue_s { void *mtqueue; void *fullqueue; s32 validCount; s32 first; s32 msgCount; OSMesg *msg; } OSMesgQueue;
typedef struct OSTimer_s { struct OSTimer_s *next; struct OSTimer_s *prev; OSTime interval; OSTime value; OSMesgQueue *mq; OSMesg msg; } OSTimer;
extern OSTimer *D_80097DE0;
extern u32 func_8005FEF0(void);
extern void func_8005FF60(u32);

/* Inserts timer t into the sorted timer list D_80097DE0 (a circular list with a sentinel
 * head). Each entry's value is the delay after the previous one, so t->value is made
 * relative to the entries before it. Returns the relative delay stored in t. Interrupts
 * are masked around the list update. */
OSTime __osInsertTimer(OSTimer* t) {
    OSTimer* timep;
    OSTime tim;
    u32 savedMask = func_8005FEF0();

    timep = D_80097DE0->next;
    tim = t->value;
    for (; timep != D_80097DE0 && tim > timep->value; timep = timep->next) {
        tim -= timep->value;
    }

    t->value = tim;

    if (timep != D_80097DE0) {
        timep->value -= tim;
    }

    t->next = timep;
    t->prev = timep->prev;
    timep->prev->next = t;
    timep->prev = t;
    func_8005FF60(savedMask);
    return tim;
}

/* identical to __rmonStopUserThreads in BLUES BROTHERS 2000 (local match library) (matched), with its names changed by decompdecomp */
typedef struct OSThread_s {
    struct OSThread_s *next;
    s32 priority;
    struct OSThread_s **queue;
    struct OSThread_s *tlnext;
    u16 state;
    u16 flags;
    s32 id;
} OSThread;
OSThread *func_8006C950(void);
void osStopThread(OSThread *);

s32 __rmonStopUserThreads(s32 whichThread) {
    register s32 whichMethod = 0;
    register OSThread *tptr = func_8006C950();

    if (whichThread != 0) {
        while (tptr->priority != -1) {
            if (tptr->id == whichThread) {
                break;
            }
            tptr = tptr->tlnext;
        }
        if (tptr->priority == -1) {
            return 0;
        }
        if (tptr->priority > 0 && tptr->priority <= 127) {
            osStopThread(tptr);
            whichMethod = whichThread;
        }
    } else {
        while (tptr->priority != -1) {
            if (tptr->priority > 0 && tptr->priority <= 127) {
                osStopThread(tptr);
                whichMethod = -1;
            }
            tptr = tptr->tlnext;
        }
    }
    return whichMethod;
}



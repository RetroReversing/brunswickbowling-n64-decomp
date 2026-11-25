/* identical to osStartThread in CARMAGEDDON64 (matched), with its names changed by decompdecomp */
/* identical to osStartThread in Bottom of the 9th (local match library) (matched), with its names changed by decompdecomp */
/* identical to osStartThread in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
typedef s32 OSPri;
typedef s32 OSId;

typedef struct OSThread_s {
    struct OSThread_s    *next;
    OSPri                 priority;
    struct OSThread_s   **queue;
    struct OSThread_s    *tlnext;
    u16                   state;
    u16                   flags;
    OSId                  id;
    int                   fp;
    void                 *thprof;
    u8                    context[0x1A0];
} OSThread;

extern OSThread *D_800A1910;
extern OSThread *D_800A1908;
u32 D_80078580(void);
void D_800785A0(u32);
void D_80077BE4(OSThread **);
void D_80077CEC(OSThread **, OSThread *);
OSThread *D_80077D34(OSThread **);
void D_80077D44(void);

/* Makes a thread runnable. A stopped thread goes straight onto the run queue; a
   thread that is waiting on a queue is moved to the run queue. If the running
   thread has lower priority than the new head of the run queue, it is preempted.
   Runs with interrupts disabled. */
void osStartThread(OSThread *thread) {
    register u32 saved_int_mask = D_80078580();

    switch (thread->state) {
        case (1 << 3):
            thread->state = (1 << 1);
            D_80077CEC(&D_800A1908, thread);
            break;
        case (1 << 0):
            if (thread->queue == 0 || thread->queue == &D_800A1908) {
                thread->state = (1 << 1);
                D_80077CEC(&D_800A1908, thread);
            } else {
                thread->state = (1 << 3);
                D_80077CEC(thread->queue, thread);
                D_80077CEC(&D_800A1908, D_80077D34(thread->queue));
            }
            break;
    }

    if (D_800A1910 == 0) {
        D_80077D44();
    } else if (D_800A1910->priority < D_800A1908->priority) {
        D_800A1910->state = (1 << 1);
        D_80077BE4(&D_800A1908);
    }

    D_800785A0(saved_int_mask);
}

/* identical to func_80107D48 in HARVESTMOON64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8005E808 in GEX: ENTER THE GECKO (local match library) (matched), with its names changed by decompdecomp */
/* identical to __osSetTimerIntr in Gex 3 Deep Cover Gec (local match library) (matched), with its names changed by decompdecomp */
/* identical to __osSetTimerIntr in ALL STAR TENNIS '99 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800217D8 in FIGHTER DESTINY2 (local match library) (matched), with its names changed by decompdecomp */
/* identical to __osSetTimerIntr in EARTHWORM JIM 3D (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80004630 in Donald Duck Goin' Qu (local match library) (matched), with its names changed by decompdecomp */
/* identical to __osSetTimerIntr in DESTRUCT DERBY (local match library) (matched), with its names changed by decompdecomp */
/* identical to __osSetTimerIntr in Clayfighter SC (local match library) (matched), with its names changed by decompdecomp */
/* identical to __osSetTimerIntr in CHARLIE BLAST'S (local match library) (matched), with its names changed by decompdecomp */
/* identical to __osSetTimerIntr in Bottom of the 9th (local match library) (matched), with its names changed by decompdecomp */
/* identical to __osSetTimerIntr in PENNY RACERS (local match library) (matched), with its names changed by decompdecomp */
/* adapted from similar verified C in __osSetTimerIntr in V-RALLY-PAL (matched), with its names changed by decompdecomp */
typedef u64 OSTime;
typedef struct OSTimer_s OSTimer;
extern u32 func_8005FEF0(void);
extern void func_8005FF60(u32);
extern u32 func_8006C9F0(void);
extern void func_8006CE40(u32);
extern u32 D_800ACBE8;

/* Schedules the next timer interrupt: the compare value is the current count plus tim.
 * Interrupts are masked while the compare register is written. */
void __osSetTimerIntr(OSTime tim)
{
    OSTime newCompare;
    u32 savedMask;

    savedMask = func_8005FEF0();
    D_800ACBE8 = func_8006C9F0();
    newCompare = D_800ACBE8 + tim;
    func_8006CE40(newCompare);
    func_8005FF60(savedMask);
}

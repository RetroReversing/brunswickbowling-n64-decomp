/* identical to func_80105960 in HARVESTMOON64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800625B8 in GEX: ENTER THE GECKO (local match library) (matched), with its names changed by decompdecomp */
/* identical to viMgrMain in Gex 3 Deep Cover Gec (local match library) (matched), with its names changed by decompdecomp */
/* identical to viMgrMain in ALL STAR TENNIS '99 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80021C20 in FIGHTER DESTINY2 (local match library) (matched), with its names changed by decompdecomp */
/* identical to viMgrMain in DR.MARIO 64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to viMgrMain in TARZAN (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80007F48 in Donald Duck Goin' Qu (local match library) (matched), with its names changed by decompdecomp */
/* identical to viMgrMain in DESTRUCT DERBY (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80043EB0 in CruisnExotica (local match library) (matched), with its names changed by decompdecomp */
/* identical to viMgrMain in Clayfighter SC (local match library) (matched), with its names changed by decompdecomp */
/* identical to viMgrMain in CHARLIE BLAST'S (local match library) (matched), with its names changed by decompdecomp */
/* identical to viMgrMain in Bottom of the 9th (local match library) (matched), with its names changed by decompdecomp */
/* identical to viMgrMain in TWINE (local match library) (matched), with its names changed by decompdecomp */
/* VI manager thread: waits on the retrace message queue, applies the VI context every frame,
 * posts the vertical-retrace message every few frames, and tracks frame counts. */
extern u16 D_800ACC30;
extern u32 D_800ACBD4, D_800ACBD0;
extern u64 D_800ACBE0;
void *func_8006D3E0(void);
void __osViSwapContext(void);
u32 func_8006C9F0(void);
void __osTimerInterrupt(void);
void osRecvMesg(s32, void *, s32);
void osSendMesg(s32, s32, s32);

#define F(p, t, o) (*(t *)((u8 *)(p) + (o)))

void viMgrMain(void *arg0) {
    u16 *msg = NULL;
    s32 first = 0;
    u32 count;
    void *ctx;
    void *q;

    ctx = arg0;
    D_800ACC30 = F(func_8006D3E0(), u16, 2);
    if (!D_800ACC30) {
        D_800ACC30 = 1;
    }
    first = 0;
    q = ctx;
    for (;;) {
        osRecvMesg(F(q, s32, 12), &msg, 1);
        switch (*msg) {
        case 13:
            __osViSwapContext();
            if (--D_800ACC30 == 0) {
                ctx = func_8006D3E0();
                if (F(ctx, s32, 16)) {
                    osSendMesg(F(ctx, s32, 16), F(ctx, s32, 20), 0);
                }
                D_800ACC30 = F(ctx, u16, 2);
            }
            D_800ACBD4++;
            if (first) {
                first = 0;
                count = func_8006C9F0();
                D_800ACBE0 = count;
            }
            count = D_800ACBD0;
            D_800ACBD0 = func_8006C9F0();
            count = D_800ACBD0 - count;
            D_800ACBE0 += count;
            break;
        case 14:
            __osTimerInterrupt();
            break;
        }
    }
}

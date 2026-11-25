/* identical to func_80105B00 in HARVESTMOON64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80058AE0 in GEX: ENTER THE GECKO (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80071B60 in Gex 3 Deep Cover Gec (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80021E70 in FIGHTER DESTINY2 (local match library) (matched), with its names changed by decompdecomp */
/* identical to osViSetSpecialFeatures in EARTHWORM JIM 3D (local match library) (matched), with its names changed by decompdecomp */
/* identical to osViSetSpecialFeatures in DR.MARIO 64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to osViSetSpecialFeatures in TARZAN (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80008190 in Donald Duck Goin' Qu (local match library) (matched), with its names changed by decompdecomp */
/* identical to osViSetSpecialFeatures in DESTRUCT DERBY (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80044100 in CruisnExotica (local match library) (matched), with its names changed by decompdecomp */
/* identical to osViSetSpecialFeatures in Clayfighter SC (local match library) (matched), with its names changed by decompdecomp */
/* identical to osViSetSpecialFeatures in CHARLIE BLAST'S (local match library) (matched), with its names changed by decompdecomp */
/* identical to osViSetSpecialFeatures in Bottom of the 9th (local match library) (matched), with its names changed by decompdecomp */
/* identical to osViSetSpecialFeatures in TWINE (local match library) (matched), with its names changed by decompdecomp */
/* identical to osViSetSpecialFeatures in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
typedef struct OSMesgQueue_s OSMesgQueue;
typedef void *OSMesg;

typedef struct {
    u32 ctrl;
    u32 width;
    u32 burst;
    u32 vSync;
    u32 hSync;
    u32 leap;
    u32 hStart;
    u32 xScale;
    u32 vCurrent;
} OSViCommonRegs;

typedef struct {
    u32 origin;
    u32 yScale;
    u32 vStart;
    u32 vBurst;
    u32 vIntr;
} OSViFieldRegs;

typedef struct {
    u8 type;
    OSViCommonRegs comRegs;
    OSViFieldRegs fldRegs[2];
} OSViMode;

typedef struct {
    f32 factor;
    u16 offset;
    u32 scale;
} __OSViScale;

typedef struct {
    u16 state;
    u16 retraceCount;
    void *framep;
    OSViMode *modep;
    u32 control;
    OSMesgQueue *msgq;
    OSMesg msg;
    __OSViScale x;
    __OSViScale y;
} __OSViContext;

extern __OSViContext *D_80097E54;
u32 func_8005FEF0(void);
void func_8005FF60(u32);

/* Turns VI special features on or off (bit set = on, bit clear = off) in the current
   VI context's control word, then marks the context as changed. Interrupts are
   disabled while the context is edited. */
void osViSetSpecialFeatures(u32 features) {
    register u32 saveMask;

    saveMask = func_8005FEF0();

    if ((features & 0x0001) != 0) {
        D_80097E54->control |= 0x00008;
    }

    if ((features & 0x0002) != 0) {
        D_80097E54->control &= ~0x00008;
    }

    if ((features & 0x0004) != 0) {
        D_80097E54->control |= 0x00004;
    }

    if ((features & 0x0008) != 0) {
        D_80097E54->control &= ~0x00004;
    }

    if ((features & 0x0010) != 0) {
        D_80097E54->control |= 0x00010;
    }

    if ((features & 0x0020) != 0) {
        D_80097E54->control &= ~0x00010;
    }

    if ((features & 0x0040) != 0) {
        D_80097E54->control |= 0x10000;
        D_80097E54->control &= ~0x00300;
    }

    if ((features & 0x0080) != 0) {
        D_80097E54->control &= ~0x10000;
        D_80097E54->control |= D_80097E54->modep->comRegs.ctrl & 0x00300;
    }

    D_80097E54->state |= 0x08;

    func_8005FF60(saveMask);
}

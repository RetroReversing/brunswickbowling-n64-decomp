/* identical to __scTaskComplete in BLUES BROTHERS 2000 (local match library) (matched), with its names changed by decompdecomp */
typedef u64 OSTime;
typedef struct OSScTask {
    /* 0x00 */ struct OSScTask* next;
    /* 0x04 */ u32 state;
    /* 0x08 */ u32 flags;
    /* 0x0C */ void* framebuffer;
    /* 0x10 */ u32 listType;
    /* 0x14 */ u8 list[0x3C];
    /* 0x50 */ void* msgQ;
    /* 0x54 */ void* msg;
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
extern OSTime osGetTime(void);
extern s32 func_800680F0(void*, void*, s32);
extern void func_8006D970(u8);
extern void func_8006D610(void*);
extern s32 D_800BC5DC;

s32 __scTaskComplete(OSSched* sc, OSScTask* t) {
    if ((t->state & 3) != 0) {
        return 0;
    }
    t->totalTime += osGetTime() - t->startTime;
    func_800680F0(t->msgQ, t->msg, 1);
    if (t->listType == 1 && (t->flags & 0x60) == 0x60) {
        if (D_800BC5DC != 0) {
            func_8006D970(0);
            D_800BC5DC = 0;
        }
        func_8006D610(t->framebuffer);
    }
    return 1;
}

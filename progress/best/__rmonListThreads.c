/* identical to __rmonListThreads in BLUES BROTHERS 2000 (local match library) (matched), with its names changed by decompdecomp */
typedef s32 TVid;
typedef struct KKHeader {
    s32 length;
    u8 code;
    u8 type;
    s16 error;
    u8 rev;
    u8 method;
    s16 notused2;
} KKHeader;
typedef struct KKObjectRequest {
    KKHeader header;
    TVid object;
} KKObjectRequest;
typedef struct KKSetBkptRequest {
    KKHeader header;
    TVid object;
    u32* addr;
    u32 nbytes;
} KKSetBkptRequest;
typedef struct KKBkptEvent {
    KKHeader header;
    TVid object;
    s32 bp;
    u32 instruction;
} KKBkptEvent;
typedef struct BreakInfo {
    u32* breakAddress;
    u32 oldInstruction;
} BreakInfo;
extern void __rmonSendReply(KKHeader*, s32, s32);
typedef struct KKObjs {
    u16 number;
    TVid objects[1];
} KKObjs;
typedef struct KKObjsEvent {
    KKHeader header;
    TVid object;
    KKObjs objs;
} KKObjsEvent;
typedef struct OSThread {
    struct OSThread* next;
    s32 priority;
    struct OSThread** queue;
    struct OSThread* tlnext;
    u16 state;
    u16 flags;
    s32 id;
} OSThread;
extern char D_801810D0[];
extern OSThread* func_8006C950(void);

s32 __rmonListThreads(KKObjectRequest* request) {
    KKObjsEvent* reply = (KKObjsEvent*)D_801810D0;
    OSThread* tptr;

    reply->object = (request->object == -1) ? 0x3EA : request->object;
    if (request->header.method == 1) {
        reply->objs.number = 1;
        reply->objs.objects[0] = 0x3E8;
    } else {
        tptr = func_8006C950();
        reply->objs.number = 0;
        while (tptr->priority != -1) {
            if (tptr->id != 0) {
                reply->objs.objects[reply->objs.number] = tptr->id;
                reply->objs.number++;
            }
            tptr = tptr->tlnext;
        }
    }
    reply->header.code = request->header.code;
    reply->header.error = 0;
    __rmonSendReply(&reply->header, reply->objs.number * 4 + 0x14, 1);
    return 0;
}

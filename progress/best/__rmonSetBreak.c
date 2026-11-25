/* identical to __rmonSetBreak in BLUES BROTHERS 2000 (local match library) (matched), with its names changed by decompdecomp */
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
extern BreakInfo D_80180FB0[];
extern BreakInfo D_80181038[];
extern u32 __rmonReadWordAt(u32*);
extern void __rmonWriteWordTo(u32*, u32);
extern void osWritebackDCache(void*, s32);
extern void osInvalICache(void*, s32);

s32 __rmonSetBreak(KKHeader* req) {
    register KKSetBkptRequest* request = (KKSetBkptRequest*)req;
    register BreakInfo* breakBase;
    register BreakInfo* whichBreak;
    register BreakInfo* lastBreak;
    KKBkptEvent reply;

    if (req->method == 1) {
        breakBase = D_80181038;
        whichBreak = &D_80181038[1];
        lastBreak = &D_80181038[16];
    } else {
        breakBase = D_80180FB0;
        whichBreak = &D_80180FB0[1];
        lastBreak = &D_80180FB0[16];
    }

    for (; whichBreak < lastBreak; whichBreak++) {
        if (whichBreak->breakAddress == NULL) {
            break;
        }
        if (whichBreak->breakAddress == request->addr) {
            break;
        }
    }

    if (whichBreak == lastBreak) {
        return -10;
    }

    if (whichBreak->breakAddress == NULL) {
        if (req->method == 1) {
            whichBreak->oldInstruction = __rmonReadWordAt(request->addr);
            __rmonWriteWordTo(request->addr, ((((whichBreak - breakBase) + 16) & 0xFFFFF) << 6) | 0xD);
        } else {
            whichBreak->oldInstruction = *request->addr;
            *request->addr = ((((whichBreak - breakBase) + 16) & 0xFFFFF) << 6) | 0xD;
            osWritebackDCache(request->addr, 4);
            osInvalICache(request->addr, 4);
        }
        whichBreak->breakAddress = request->addr;
    }

    reply.header.code = request->header.code;
    reply.header.error = 0;
    reply.object = request->object;
    reply.bp = whichBreak - breakBase;
    reply.instruction = whichBreak->oldInstruction;
    __rmonSendReply(&reply.header, sizeof(reply), 1);
    return 0;
}


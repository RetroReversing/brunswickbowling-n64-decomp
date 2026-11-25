/* identical to __rmonReadMem in BLUES BROTHERS 2000 (local match library) (matched), with its names changed by decompdecomp */
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
typedef struct KKReadRequest {
    KKHeader header;
    TVid object;
    u32 addr;
    u32 nbytes;
} KKReadRequest;
typedef struct KKBufferEvent {
    KKHeader header;
    TVid object;
    u8 buffer[1];
} KKBufferEvent;
extern char D_801810D0[];
extern u32 func_80065630(u32);
extern s32 func_8005FEB0(u8*, u32, u32);
extern void __rmonSendHeader(KKHeader*, s32, s32);
extern void __rmonSendData(char*, u32);

s32 __rmonReadMem(KKReadRequest* request) {
    KKBufferEvent* reply = (KKBufferEvent*)D_801810D0;
    char* data;
    s32 sent;
    s32 size;
    u8* p;
    reply->header.code = request->header.code;
    reply->object = request->object;
    reply->header.error = 0;
    if (request->addr == -1) {
        return -5;
    }
    if (request->nbytes > 0x400) {
        return -8;
    }
    if (request->header.method == 1) {
        if (!((request->addr > 0x4000FFF && request->addr + request->nbytes <= 0x4001FFF) ||
              (request->addr > 0x3FFFFFF && request->addr + request->nbytes <= 0x4000FFF))) {
            return -5;
        }
    } else {
        if (func_80065630(request->addr) == -1) {
            return -5;
        }
    }
    data = (char*)request->addr;
    p = (u8*)&size;
    reply->header.length = request->nbytes + 0x10;
    size = request->nbytes + 0x10;
    sent = 0;
    do {
        sent += func_8005FEB0(p + sent, 4 - sent, 8);
    } while (sent < 4);
    __rmonSendHeader(&reply->header, 0x10, 1);
    __rmonSendData(data, request->nbytes);
    return 0;
}

/* identical to __rmonGetExeName in BLUES BROTHERS 2000 (local match library) (matched), with its names changed by decompdecomp */
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
typedef struct KKBufferEvent {
    KKHeader header;
    TVid object;
    u8 buffer[1];
} KKBufferEvent;
extern char D_801810D0[];
extern char D_8007A710[];
extern char D_8007A718[];
extern void __rmonSendReply(KKHeader*, s32, s32);

s32 __rmonGetExeName(KKObjectRequest* request) {
    KKBufferEvent* reply = (KKBufferEvent*)D_801810D0;
    char* src;
    char* dst;
    reply->header.code = request->header.code;
    reply->header.error = 0;
    reply->object = request->object;
    dst = (char*)reply->buffer;
    if (request->header.method == 1) {
        src = D_8007A710;
        while ((*dst++ = *src++) != 0) {
        }
    } else {
        src = D_8007A718;
        while ((*dst++ = *src++) != 0) {
        }
    }
    __rmonSendReply(&reply->header, 0x18, 1);
    return 0;
}

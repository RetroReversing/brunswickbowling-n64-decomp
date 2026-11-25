/* identical to __rmonExecute in BLUES BROTHERS 2000 (local match library) (matched), with its names changed by decompdecomp */
typedef struct {
    s32 length;
    u8 code;
    s8 type;
    s16 error;
    u8 rev;
    u8 method;
    s16 notused;
} KKHeader;
typedef struct {
    KKHeader header;
    s32 object;
} KKObjectRequest;
extern s32 (*D_800BC460[])(KKHeader *);
void __rmonSendReply(KKHeader *const block, u32 blockSize, u32 replyType);

s32 __rmonExecute(KKHeader *request) {
    int retval;
    KKHeader reply;

    if (request->code >= 0x35) {
        return -1;
    }

    retval = D_800BC460[(int)request->code](request);
    if (retval < 0) {
        reply.code = request->code;
        reply.error = retval;
        __rmonSendReply(&reply, sizeof(reply), 1);
    }
    return retval;
}


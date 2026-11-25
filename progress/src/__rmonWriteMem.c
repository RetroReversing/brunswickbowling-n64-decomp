/* identical to __rmonWriteMem in BLUES BROTHERS 2000 (local match library) (matched), with its names changed by decompdecomp */
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
typedef struct {
    KKHeader header;
    s32 object;
    u32 writeAddress;
    u32 nbytes;
    u8 buffer[1];
} KKWriteRequest;
typedef struct {
    KKHeader header;
    s32 object;
} KKObjectEvent;

u32 osVirtualToPhysical(void *);
s32 func_8006AFD0(u32 devAddr, u32 *data);
s32 func_8006B040(u32 devAddr, u32 data);
void __rmonSendReply(KKHeader *const block, u32 blockSize, u32 replyType);

static __inline__ u32 __rmonReadWordAt(u32 *addr) {
    u32 data;

    if ((u32)addr >= 0x04000000 && (u32)addr < 0x05000000) {
        func_8006AFD0((u32)addr, &data);
        return data;
    }
    return 0;
}

static __inline__ void __rmonWriteWordTo(u32 *addr, u32 val) {
    while (func_8006B040((u32)addr, val) != 0) {
    }
}

static __inline__ void __rmonMemcpy(u8 *dest, u8 *srce, u32 count) {
    while (count-- > 0) {
        *dest++ = *srce++;
    }
}

s32 __rmonWriteMem(KKHeader *req) {
    register KKWriteRequest *request = (KKWriteRequest *)req;
    KKObjectEvent reply;

    if (req->method == 0 && osVirtualToPhysical((void *)request->writeAddress) == (u32)-1) {
        return -5;
    }

    if (request->nbytes > 1024) {
        return -8;
    }

    if (request->writeAddress >= 0x04000000 && request->writeAddress + request->nbytes < 0x05000000) {
        int align;
        u32 word;

        if ((align = request->writeAddress & 3) != 0) {
            if (request->nbytes != 1) {
                return -5;
            }

            word = __rmonReadWordAt((u32 *)(request->writeAddress & ~3));

            if (align == 1) {
                word = (word & ~0xFF0000) | (request->buffer[0] << 16);
            } else if (align == 2) {
                word = (word & ~0xFF00) | (request->buffer[0] << 8);
            } else {
                word = (word & ~0xFF) | (request->buffer[0] << 0);
            }

            __rmonWriteWordTo((u32 *)(request->writeAddress & ~3), word);
        } else {
            int wordCount = request->nbytes / 4;
            u32 *wordPointer = (u32 *)request->buffer;

            if (request->nbytes % 4 != 0) {
                return -5;
            }

            while (wordCount--) {
                __rmonWriteWordTo((u32 *)request->writeAddress, *(wordPointer++));
                request->writeAddress += 4;
            }
        }
    } else {
        __rmonMemcpy((u8 *)request->writeAddress, (u8 *)request->buffer, request->nbytes);
    }

    reply.header.code = request->header.code;
    reply.header.error = 0;
    reply.object = request->object;
    __rmonSendReply(&reply.header, sizeof(reply), 1);
    return 0;
}



/* identical to __scMain in DR.MARIO 64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to __scMain in Asteroids Hyper 64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to __scMain in BLUES BROTHERS 2000 (local match library) (matched), with its names changed by decompdecomp */
typedef struct OSClient {
    struct OSClient* next;
    void* msgQ;
} OSClient;
typedef struct OSSched {
    u8 pad0[0x20];
    s16 prenmiMsg[0x10];
    u8 interruptQ[0x220];
    OSClient* clientList;
} OSSched;
extern s32 osRecvMesg(void*, void*, s32);
extern s32 osSendMesg(void*, void*, s32);
extern void __scHandleRetrace(OSSched*);
extern void __scHandleRSP(OSSched*);
extern void __scHandleRDP(OSSched*);

void __scMain(void* arg) {
    s32 msg;
    OSSched* sc = (OSSched*)arg;
    OSClient* client;

    while (1) {
        osRecvMesg((u8*)sc + 0x40, &msg, 1);
        switch (msg) {
        case 0x29A:
            __scHandleRetrace(sc);
            break;
        case 0x29B:
            __scHandleRSP(sc);
            break;
        case 0x29C:
            __scHandleRDP(sc);
            break;
        case 0x29D:
            for (client = *(OSClient**)((u8*)sc + 0x260); client != 0; client = client->next) {
                osSendMesg(client->msgQ, (u8*)sc + 0x20, 0);
            }
            break;
        }
    }
}

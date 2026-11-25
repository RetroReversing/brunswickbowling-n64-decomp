/* identical to rmonFindFaultedThreads in BLUES BROTHERS 2000 (local match library) (matched), with its names changed by decompdecomp */
typedef struct {
    int length;
    char code;
    char type;
    short error;
    char rev;
    char method;
    short notused2;
} KKHeader;
typedef struct {
    unsigned int addr;
    short major;
    short minor;
} KKFaultInfo;
typedef struct {
    int flags;
    short why;
    short what;
    int tid;
    int pid;
    unsigned int instr;
    KKFaultInfo info;
    int priority;
    int start;
    int rv;
    unsigned int args[6];
} KKThreadStatus;
typedef struct {
    KKHeader header;
    KKThreadStatus status;
} KKStatusEvent;
typedef struct OSThread_s {
    /* 0x000 */ struct OSThread_s *next;
    /* 0x004 */ s32 priority;
    /* 0x008 */ struct OSThread_s **queue;
    /* 0x00C */ struct OSThread_s *tlnext;
    /* 0x010 */ u16 state;
    /* 0x012 */ u16 flags;
    /* 0x014 */ s32 id;
    /* 0x018 */ u8 pad18[0x104];
    /* 0x11C */ u32 pc;
} OSThread;
OSThread *func_8006C950(void);
int __rmonGetThreadStatus(int method, int id, KKStatusEvent *reply);
void __rmonSendReply(KKHeader *const block, u32 blockSize, u32 replyType);
void __rmonSendFault(OSThread *thread);

static inline void __rmonGetExceptionStatus_(KKStatusEvent *reply) {
    reply->status.flags = 1;
    reply->status.why = 2;
    reply->status.what = 0;
    reply->status.rv = 0;
    reply->status.info.major = 2;
    reply->status.info.minor = 4;
    reply->header.code = 4;
    reply->header.error = 0;
    reply->header.length = sizeof(*reply);
}

static inline void rmonSendBreakMessage(s32 whichThread, int breakNumber) {
    KKStatusEvent reply;

    __rmonGetThreadStatus(0, (whichThread != 0) ? whichThread : 1003, &reply);
    __rmonGetExceptionStatus_(&reply);
    if (breakNumber == 15) {
        reply.status.info.major = 1;
        reply.status.info.minor = 2;
    }
    if (breakNumber < 16) {
        breakNumber = 0;
    } else {
        breakNumber -= 16;
    }
    if (breakNumber != 0) {
        reply.status.instr = 0xD;
    }
    __rmonSendReply(&reply.header, sizeof(reply), 2);
}

void rmonFindFaultedThreads(void) {
    register OSThread *tptr = func_8006C950();

    while (tptr->priority != -1) {
        if (tptr->priority > 0 && tptr->priority <= 127) {
            if (tptr->flags & 1) {
                int inst = *(u32 *)tptr->pc;

                if ((inst & 0xFC00003F) == 0xD) {
                    rmonSendBreakMessage(tptr->id, inst >> 6);
                } else {
                    rmonSendBreakMessage(tptr->id, 0);
                }
            }
            if (tptr->flags & 2) {
                __rmonSendFault(tptr);
                rmonSendBreakMessage(tptr->id, 15);
            }
        }
        tptr = tptr->tlnext;
    }
}

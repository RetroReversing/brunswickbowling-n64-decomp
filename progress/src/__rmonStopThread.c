/* identical to __rmonStopThread in BLUES BROTHERS 2000 (local match library) (matched), with its names changed by decompdecomp */
typedef s32 TVid;
typedef struct KKHeader { s32 length; u8 code; u8 type; s16 error; u8 rev; u8 method; s16 notused2; } KKHeader;
typedef struct KKFaultInfo { u32 addr; s16 major; s16 minor; } KKFaultInfo;
typedef struct KKThreadStatus {
    s32 flags;
    s16 why;
    s16 what;
    s32 tid;
    s32 pid;
    u32 instr;
    KKFaultInfo info;
    s32 priority;
    s32 start;
    s32 rv;
    u32 args[6];
} KKThreadStatus;
typedef struct KKStatusEvent {
    KKHeader header;
    KKThreadStatus status;
} KKStatusEvent;
typedef struct OSThread {
    struct OSThread* next;
    s32 priority;
    struct OSThread** queue;
    struct OSThread* tlnext;
    u16 state;
    u16 flags;
    s32 id;
    u8 pad[0x104];
    u32 pc;
} OSThread;

typedef struct KKObjectRequest { KKHeader header; TVid object; } KKObjectRequest;
extern u32 __rmonReadWordAt(u32);
extern OSThread* func_8006C950(void);
extern s32 func_8006A2C0(void);
extern void func_8006A2E4(void);
extern void func_8006A328(void);
extern u32 __rmonGetBranchTarget(s32, s32, u32);
extern void osStopThread(OSThread*);
extern s32 __rmonGetThreadStatus(s32, s32, KKStatusEvent*);
extern void __rmonSendReply(KKHeader*, s32, s32);

s32 __rmonStopThread(KKHeader* req) {
    KKObjectRequest* request = (KKObjectRequest*)req;
    KKStatusEvent reply;
    OSThread* tptr;
    s32 id;
    u32 pc;

    switch (request->header.method) {
    case 0:
        id = request->object;
        tptr = func_8006C950();
        if (id != 0) {
            while (tptr->priority != -1) {
                if (tptr->id == id) {
                    break;
                }
                tptr = tptr->tlnext;
            }
            if (tptr->priority != -1) {
                if ((u32)(tptr->priority - 1) < 0x7F) {
                    osStopThread(tptr);
                }
            }
        } else {
            while (tptr->priority != -1) {
                if ((u32)(tptr->priority - 1) < 0x7F) {
                    osStopThread(tptr);
                }
                tptr = tptr->tlnext;
            }
        }
        break;
    case 1:
        if (func_8006A2C0() != 0) {
            func_8006A2E4();
            pc = __rmonReadWordAt(0x04080000);
            if (pc != 0) {
                if ((__rmonGetBranchTarget(1, 0x3E8, pc + 0x04000FFC) & 3) == 0) {
                    func_8006A328();
                }
            }
        }
        break;
    default:
        return -4;
    }
    if (__rmonGetThreadStatus(req->method, request->object, &reply) != 0) {
        return -2;
    }
    reply.header.code = request->header.code;
    reply.header.error = 0;
    __rmonSendReply(&reply.header, 0x4C, 1);
    if (reply.status.flags == 1) {
        reply.header.code = 4;
        __rmonSendReply(&reply.header, 0x4C, 2);
    }
    return 0;
}

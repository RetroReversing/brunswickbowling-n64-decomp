/* adapted from similar verified C in __rmonGetThreadStatus in BLUES BROTHERS 2000 (matched), with its names changed by decompdecomp */
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

extern u32 __rmonReadWordAt(u32);
extern OSThread* func_8006C950(void);
extern s32 func_8006A2C0(void);
extern u8 D_800A8380;

s32 __rmonGetThreadStatus(s32 method, s32 id, KKStatusEvent* reply) {
    OSThread* tptr;
    u32 inst;

    reply->status.tid = id;
    if (method == 1) {
        reply->status.pid = 0x3E9;
    } else {
        reply->status.pid = 0x3EA;
    }
    reply->status.why = 1;
    reply->status.what = 0;
    reply->status.info.major = 0;
    reply->status.info.minor = 0;
    reply->status.rv = 0;
    if (method == 1) {
        reply->status.start = 0x04001000;
        reply->status.priority = 0x2A;
        if (func_8006A2C0() != 0) {
            reply->status.flags = 4;
            reply->status.info.addr = 0;
            reply->status.instr = 0;
        } else {
            reply->status.flags = method;
            reply->status.info.addr = __rmonReadWordAt(0x04080000) + 0x04001000;
            inst = __rmonReadWordAt(reply->status.info.addr);
            if ((inst & 0xFC00003F) == 0xD) {
                inst = 0xD;
            }
            if (D_800A8380 != 0) {
                reply->status.why = 2;
                reply->status.info.major = 2;
                reply->status.info.minor = 4;
            }
            reply->status.instr = inst;
        }
        return 0;
    }
    tptr = func_8006C950();
    while (tptr->priority != -1) {
        if (tptr->id == id) {
            break;
        }
        tptr = tptr->tlnext;
    }
    if (tptr->priority == -1) {
        return -2;
    }
    reply->status.priority = tptr->priority;
    reply->status.flags = tptr->state ? tptr->state : 1;
    reply->status.info.addr = tptr->pc;
    inst = *(u32*)tptr->pc;
    if ((inst & 0xFC00003F) == 0xD) {
        inst = 0xD;
    }
    reply->status.instr = inst;
    reply->status.start = (s32)tptr;
    if (tptr->flags & 1) {
        reply->status.why = 2;
        reply->status.info.major = 2;
        reply->status.info.minor = 4;
    } else if (tptr->flags & 2) {
        reply->status.why = 2;
        reply->status.info.major = 1;
        reply->status.info.minor = 2;
    }
    return 0;
}

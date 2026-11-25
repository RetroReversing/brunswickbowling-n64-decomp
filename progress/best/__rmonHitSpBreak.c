/* identical to __rmonHitSpBreak in BLUES BROTHERS 2000 (local match library) (matched), with its names changed by decompdecomp */
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
extern u32 __rmonReadWordAt(u32);
extern void __rmonWriteWordTo(u32, u32);
extern s32 __rmonGetThreadStatus(s32, s32, KKStatusEvent*);
extern void __rmonSendReply(KKHeader*, s32, s32);
extern u8 D_801810C0;

void __rmonHitSpBreak(void) {
    KKStatusEvent event;

    __rmonWriteWordTo(0x04080000, __rmonReadWordAt(0x04080000) - 4);
    __rmonGetThreadStatus(1, 0x3E8, &event);
    event.status.flags = 1;
    event.status.why = 2;
    event.status.info.major = 2;
    event.status.info.minor = 4;
    event.header.code = 4;
    event.status.what = 0;
    event.status.rv = 0;
    event.header.error = 0;
    event.header.length = 0x4C;
    __rmonSendReply(&event.header, 0x4C, 2);
    D_801810C0 = 1;
}

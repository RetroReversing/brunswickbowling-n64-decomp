/* identical to __rmonGetSRegs in BLUES BROTHERS 2000 (local match library) (matched), with its names changed by decompdecomp */
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
    s32 tid;
    struct {
        u32 sregs[32];
        u32 sp_dram_addr;
        u32 sp_mem_addr;
        u32 sp_rd_len;
        u32 sp_pc;
        u32 sp_wr_len;
        u32 sp_status;
        u32 sp_dma_full;
        u32 sp_dma_busy;
    } registers;
} KKCpSregEvent;

u32 __rmonReadWordAt(u32 *addr);
void __rmonWriteWordTo(u32 *addr, u32 val);
int func_8006A2C0(void);
void func_8006A328(void);
void __rmonSendReply(KKHeader *const block, u32 blockSize, u32 replyType);
extern u32 D_80185400;
extern u32 D_80185404;
extern u32 D_80185408;

s32 __rmonGetSRegs(KKHeader *req) {
    register KKObjectRequest *request = (KKObjectRequest *)req;
    KKCpSregEvent reply;
    int regno;
    u32 inst;

    if (func_8006A2C0()) {
        return -4;
    }

    reply.tid = request->object;
    reply.header.code = request->header.code;
    reply.header.error = 0;

    D_80185400 = __rmonReadWordAt((u32 *)0x04080000);
    D_80185404 = __rmonReadWordAt((u32 *)0x04001000);
    D_80185408 = __rmonReadWordAt((u32 *)0x04000000);
    for (regno = 0; regno < 32; regno++) {
        inst = 0xAC000000;
        inst |= (regno & 0x1F) << 16;
        __rmonWriteWordTo((u32 *)0x04001000, inst);
        __rmonWriteWordTo((u32 *)0x04080000, 0);
        func_8006A328();
        reply.registers.sregs[regno] = __rmonReadWordAt((u32 *)0x04000000);
    }
    __rmonWriteWordTo((u32 *)0x04000000, D_80185408);
    __rmonWriteWordTo((u32 *)0x04001000, D_80185404);
    __rmonWriteWordTo((u32 *)0x04080000, D_80185400);

    reply.registers.sp_dram_addr = __rmonReadWordAt((u32 *)0x04040004);
    reply.registers.sp_mem_addr = __rmonReadWordAt((u32 *)0x04040000);
    reply.registers.sp_rd_len = __rmonReadWordAt((u32 *)0x04040008);
    reply.registers.sp_pc = __rmonReadWordAt((u32 *)0x04080000) + 0x04001000;
    reply.registers.sp_wr_len = __rmonReadWordAt((u32 *)0x0404000C);
    reply.registers.sp_status = __rmonReadWordAt((u32 *)0x04040010);
    reply.registers.sp_dma_full = __rmonReadWordAt((u32 *)0x04040014);
    reply.registers.sp_dma_busy = __rmonReadWordAt((u32 *)0x04040018);

    __rmonSendReply(&reply.header, sizeof(reply), 1);
    return 0;
}



/* adapted from similar verified C in __scExec in BLUES BROTHERS 2000 (matched), with its names changed by decompdecomp */
void func_80065110(void);
u64 osGetTime(void);
void func_8006B090(void *);
void func_8006B29C(void *);
s32 osDpSetNextBuffer(void *, u64);
extern s32 D_800BC5D4;
extern s32 D_800BC5D8;

typedef struct {
    u32 type;
    u32 flags;
    u64 *ucode_boot;
    u32 ucode_boot_size;
    u64 *ucode;
    u32 ucode_size;
    u64 *ucode_data;
    u32 ucode_data_size;
    u64 *dram_stack;
    u32 dram_stack_size;
    u64 *output_buff;
    u64 *output_buff_size;
    u64 *data_ptr;
    u32 data_size;
    u64 *yield_data_ptr;
    u32 yield_data_size;
} OSTask_t_;

typedef struct OSScTask_s {
    struct OSScTask_s *next;
    u32 state;
    u32 flags;
    void *framebuffer;
    OSTask_t_ list;
    void *msgQ;
    void *msg;
    u64 startTime;
} OSScTask_;

void __scExec(void *sc0, void *sp0, void *dp0) {
    OSScTask_ *sp = sp0;
    OSScTask_ *dp = dp0;

    if (sp) {
        if (sp->list.type == 2) {
            func_80065110();
        }
        sp->state &= ~(0x10 | 0x20);
        sp->startTime = osGetTime();
        func_8006B090(&sp->list);
        func_8006B29C(&sp->list);
        *(OSScTask_ **)((u8 *)sc0 + 0x274) = sp;
        if (sp == dp) {
            *(OSScTask_ **)((u8 *)sc0 + 0x278) = dp;
        }
    }

    if (dp && (dp != sp)) {
        osDpSetNextBuffer(dp->list.output_buff, *dp->list.output_buff_size);
        D_800BC5D4 = 1;
        D_800BC5D8 = 0;
        *(OSScTask_ **)((u8 *)sc0 + 0x278) = dp;
    }
}


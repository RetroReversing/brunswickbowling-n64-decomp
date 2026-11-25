/* identical to __rmonSetSingleStep in BLUES BROTHERS 2000 (local match library) (matched), with its names changed by decompdecomp */
extern u32 __rmonGetBranchTarget(s32, s32, u32*);
extern void osWritebackDCache(void*, s32);
extern void osInvalICache(void*, s32);
typedef struct {
    u32 *breakAddress;
    u32 oldInstruction;
} BREAKINFO;
extern BREAKINFO D_80180FB0[];
extern BREAKINFO D_80181030;

static __inline__ int IsJump(u32 inst) {
    switch (inst >> 26) {
        case 0:
            if (((inst >> 5) & 0x7FFF) == 0 && (inst & 0x3F) == 8) {
                return 1;
            }
            if (((inst >> 16) & 0x1F) == 0 && (inst & 0x7FF) == 9) {
                return 1;
            }
            break;
        case 2:
        case 3:
            return 1;
    }
    return 0;
}

static __inline__ void SetTempBreakpoint(u32 *addr1, u32 *addr2) {
    D_80180FB0[0].oldInstruction = *addr1;
    *addr1 = 0x40D;
    osWritebackDCache(addr1, 4);
    osInvalICache(addr1, 4);
    D_80180FB0[0].breakAddress = addr1;

    if (addr2 != NULL) {
        D_80181030.oldInstruction = *addr2;
        *addr2 = 0x40D;
        osWritebackDCache(addr2, 4);
        osInvalICache(addr2, 4);
        D_80181030.breakAddress = addr2;
    }
}

s32 __rmonSetSingleStep(s32 thread, u32 *instptr) {
    u32 branchTarget = __rmonGetBranchTarget(0, thread, instptr);

    if ((branchTarget & 3) != 0) {
        SetTempBreakpoint(instptr + 1, NULL);
    } else if (branchTarget == (u32)instptr) {
        return 0;
    } else if (IsJump(*instptr) || branchTarget == (u32)(instptr + 2)) {
        SetTempBreakpoint((u32 *)branchTarget, NULL);
    } else {
        SetTempBreakpoint((u32 *)branchTarget, instptr + 2);
    }
    return 1;
}


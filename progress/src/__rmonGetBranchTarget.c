/* identical to __rmonGetBranchTarget in BLUES BROTHERS 2000 (local match library) (matched), with its names changed by decompdecomp */
u32 __rmonReadWordAt(u32 *addr);
u32 __rmonGetRegisterContents(int method, int threadNumber, int regNumber);

u32 __rmonGetBranchTarget(int method, int thread, char *addr) {
    int inst;

    if (method == 1) {
        inst = __rmonReadWordAt((u32 *)addr);
    } else {
        inst = *(u32 *)addr;
    }

    switch ((inst >> 26) & 0x3F) {
        case 0:
            if (((inst >> 5) & 0x7FFF) == 0 && (inst & 0x3F) == 8) {
                return __rmonGetRegisterContents(method, thread, (inst >> 21) & 0x1F);
            }
            if (((inst >> 16) & 0x1F) == 0 && (inst & 0x7FF) == 9) {
                return __rmonGetRegisterContents(method, thread, (inst >> 21) & 0x1F);
            }
            break;
        case 1:
            switch ((inst >> 16) & 0x1F) {
                case 0:
                case 1:
                case 2:
                case 3:
                case 16:
                case 17:
                case 18:
                case 19:
                    return (u32)addr + ((s16)inst << 2) + 4;
            }
            break;
        case 2:
        case 3:
            return (((u32)inst << 6) >> 4) | (((int)addr + 4) >> 28 << 28);
        case 4:
        case 5:
        case 20:
        case 21:
            return (u32)addr + ((s16)inst << 2) + 4;
        case 6:
        case 7:
        case 22:
        case 23:
            if (((inst >> 16) & 0x1F) == 0) {
                return (u32)addr + ((s16)inst << 2) + 4;
            }
            break;
        case 16:
        case 17:
        case 18:
        case 19:
            if (((inst >> 21) & 0x1F) == 8) {
                switch ((inst >> 16) & 0x1F) {
                    case 0:
                    case 1:
                    case 2:
                    case 3:
                        return (u32)addr + ((s16)inst << 2) + 4;
                }
            }
            break;
    }
    return -1;
}


/* Same-name source lead: __rmonClearBreak in 1080-decomp; donor defaults. Destination verification required. */
s32 __rmonClearBreak(ClrBkptRequest *req) {
    register ClrBkptRequest *request = req;
    register BreakInfo *whichBreak;
    BkptReply reply;
    u32 inst;

    if (request->bp >= 16) {
        return -2;
    }
    if (req->method == 1) {
        whichBreak = &rmon_RCPbreakpoints[request->bp];
        if (!whichBreak->breakAddress) {
            return -2;
        }
        inst = func_80006A98(whichBreak->breakAddress);
        if ((inst & 0xFC00003F) == 0xD) {
            func_80006A50(whichBreak->breakAddress, whichBreak->oldInstruction);
        }
    } else {
        whichBreak = &rmon_breakpoints[request->bp];
        if (!whichBreak->breakAddress) {
            return -2;
        }
        inst = *whichBreak->breakAddress;
        if ((inst & 0xFC00003F) == 0xD) {
            *whichBreak->breakAddress = whichBreak->oldInstruction;
            func_800031F0(whichBreak->breakAddress, 4);
            func_80005350(whichBreak->breakAddress, 4);
        }
    }
    whichBreak->breakAddress = 0;
    reply.code = request->code;
    reply.error = 0;
    reply.object = request->object;
    reply.bp = request->bp;
    func_800073F8(&reply, 0x18, 1);
    return 0;
}

/* Same-name source lead: __rmonListProcesses in 1080 SNOWBOARDING; verified ROM source. Destination verification required. */
s32 __rmonListProcesses(KKHeader* req) {
    KKHeader* p = req;
    KKObjsEvent reply;
    reply.object = 0;
    reply.objs.number = 1;
    if (p->method == 1) {   /* 1080's 2.0I rmon: method 1 answers pid 1001 */
        reply.objs.objects[0] = 0x3E9;
    } else {
        reply.objs.objects[0] = 0x3EA;
    }
    reply.header.code = p->code;
    reply.header.error = TV_ERROR_NO_ERROR;
    __rmonSendReply(&reply, sizeof(KKObjsEvent), KK_TYPE_REPLY); /* __rmonSendReply */
    return 0;
}

/* identical to __rmonSendFault in BLUES BROTHERS 2000 (local match library) (matched), with its names changed by decompdecomp */
u32 func_8005FEB0(u8 *buf, u32 size, u32 type);

void __rmonSendFault(void *thread) {
    volatile float f;
    u8 *tPtr;
    u32 sent = 0;

    f = 0.0f;

    tPtr = (u8 *)thread;
    while (sent < 0x1B0) {
        sent += func_8005FEB0(tPtr + sent, 0x1B0 - sent, 2);
    }
}



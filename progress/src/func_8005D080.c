/* identical to func_80066E90 in Asteroids Hyper 64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8008ED20 in BLUES BROTHERS 2000 (local match library) (matched), with its names changed by decompdecomp */
void func_8005D080(void *arg0)
{
    s8 *obj = arg0;
    u16 n;
    u8 *p;
    u8 b;
    u16 hi;

    do {
        *(s32 *)(obj + 0x14) = *(s32 *)(obj + 0x14) + 0x100;
        n = *(u16 *)(obj + 0xA2) - 1;
        *(u16 *)(obj + 0xA2) = n;
        if (n == 0) {
            b = *(*(u8 **)(obj + 0x38))++;
            if (b >= 0x80) {
                *(u8 *)(obj + 0xBC) = b & 0x7F;
                b = *(*(u8 **)(obj + 0x38))++;
                if (b >= 0x80) {
                    hi = (b & 0x7F) << 8;
                    *(u16 *)(obj + 0xA2) = hi;
                    *(u16 *)(obj + 0xA2) += *(*(u8 **)(obj + 0x38))++ + 2;
                } else {
                    *(u16 *)(obj + 0xA2) = b + 2;
                }
            } else {
                *(u8 *)(obj + 0xBC) = b;
                *(u16 *)(obj + 0xA2) = 1;
            }
        }
    } while (*(s32 *)(obj + 0x14) - *(s32 *)(obj + 0xC) < 0);
}

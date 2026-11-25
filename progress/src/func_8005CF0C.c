/* identical to func_80066D1C in Asteroids Hyper 64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8003502C in CruisnExotica (local match library) (matched), with its names changed by decompdecomp */
/* Partial candidate from function #158913791768 in project #37; rechecked locally. */
void func_8005CF0C(void *arg0)
{
    u32 a1;
    u32 t;
    u32 c1;
    u32 c2;
    u8 a2;

    a2 = *((u8 *) (((s8 *) arg0) + 0xD4));
    do
    {
        a1 = *((u8 *) (((s8 *) arg0) + 0xD9)) + a2;
        *((s32 *) (((s8 *) arg0) + 0x94)) = *((s32 *) (((s8 *) arg0) + 0x94)) + 0x100;
        if (a1 < 0x40)
        {
            *((u8 *) (((s8 *) arg0) + 0xD9)) = a1;
        }
        else
        {
            t = a1 & 0x3F;
            a1 = a1 >> 6;
            *((u8 *) (((s8 *) arg0) + 0xD9)) = t;
            if (*((u8 *) (((s8 *) arg0) + 0xDA)) == 0)
            {
                u32 v = *((u8 *) (((s8 *) arg0) + 0xBD)) + a1;
                *((u8 *) (((s8 *) arg0) + 0xBD)) = v;
                v = v & 0xFF;
                if (v >= 0x80)
                {
                    *((u8 *) (((s8 *) arg0) + 0xBD)) = 0x7F;
                    *((u8 *) (((s8 *) arg0) + 0xDA)) = 1;
                }
            }
            else
            {
                u32 v = *((u8 *) (((s8 *) arg0) + 0xBD)) - a1;
                *((u8 *) (((s8 *) arg0) + 0xBD)) = v;
                v = v & 0xFF;
                c1 = v >= 0x80;
                c2 = v == 0;
                if (c1 | c2)
                {
                    *((u8 *) (((s8 *) arg0) + 0xBD)) = 0;
                    *((u8 *) (((s8 *) arg0) + 0xDA)) = 0;
                }
            }
        }
    }
    while (*((s32 *) (((s8 *) arg0) + 0x94)) - *((s32 *) (((s8 *) arg0) + 0xC)) < 0);
}

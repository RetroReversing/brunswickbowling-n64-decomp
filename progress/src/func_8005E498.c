/* identical to func_800682A8 in Asteroids Hyper 64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8008C9EC in BLUES BROTHERS 2000 (local match library) (matched), with its names changed by decompdecomp */
typedef struct N8C9ECB { u8 pad0[0x1C]; s32 f1C; } N8C9ECB;
typedef struct N8C9ECA { u8 pad0[0x74]; N8C9ECB *f74; u8 pad78[0xC]; s32 f84; } N8C9ECA;

u8 *func_8005E498(N8C9ECA *arg0, u8 *arg1) {
    s32 v;

    v = *arg1++;
    if (v >= 0x80) {
        v &= 0x7F;
        v <<= 8;
        v |= *arg1++;
    }
    arg0->f84 = arg0->f74->f1C + v * 6;
    return arg1;
}


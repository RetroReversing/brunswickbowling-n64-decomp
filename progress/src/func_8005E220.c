/* identical to func_80068030 in Asteroids Hyper 64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8008C714 in BLUES BROTHERS 2000 (local match library) (matched), with its names changed by decompdecomp */
typedef struct { u8 pad[0xAC]; s16 fAC; } ObjW;

u8 *func_8005E220(ObjW *arg0, u8 *p) {
    s32 v;

    v = *p++;
    if (v >= 0x80) {
        v &= 0x7F; v <<= 8; v |= *p++;
    }
    arg0->fAC = v;
    return p;
}

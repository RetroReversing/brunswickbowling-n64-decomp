/* identical to func_8008DB64 in BLUES BROTHERS 2000 (local match library) (matched), with its names changed by decompdecomp */
typedef struct { s32 off; s32 x4; } Ent;
typedef struct { s32 count; s32 x4; s32 x8; s32 flags; s32 x10; s32 x14; Ent e[1]; } Hdr;
extern Hdr *D_8017B238;

void func_8005BE0C(s32 base) {
    s32 i;
    Hdr *h;

    h = (Hdr *)base;
    if (!(h->flags & 1)) {
        if (D_8017B238 == NULL) {
            D_8017B238 = h;
        }
        h->flags = 1;
        h->x10 = 0;
        h->x14 = base + h->x14;
        for (i = 0; i < h->count; i++) {
            h->e[i].off = base + h->e[i].off;
        }
    }
}

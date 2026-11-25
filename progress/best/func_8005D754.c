/* identical to func_8008F3D8 in BLUES BROTHERS 2000 (local match library) (matched), with its names changed by decompdecomp */
typedef struct Voice {
    /* 0x000 */ s32 f0;
    /* 0x004 */ s32 active;
    /* 0x008 */ u8 pad8[0x40];
    /* 0x048 */ s32 prio;
    /* 0x04C */ u8 pad4C[0x28];
    /* 0x074 */ void *owner;
    /* 0x078 */ s32 busy;
    /* 0x07C */ s32 pad7C;
    /* 0x080 */ s32 id;
    /* 0x084 */ u8 pad84[0xB8];
} Voice;
typedef struct {
    u8 pad0[0xC];
    s32 *ids;
} Owner;
extern s32 D_8017B204;
extern Voice *D_8017B20C;
extern Voice *D_8017B210;

s32 func_8005D754(Owner *arg0, s32 arg1) {
    Voice *v;
    s32 i;
    s32 best;
    s32 min;

    if (arg1 < 0) {
        for (i = 0, v = D_8017B20C; i < 4; i++, v++) {
            if (v->active == 0) {
                return i;
            }
        }
    }
    for (i = 4, v = D_8017B210; i < D_8017B204; i++, v++) {
        if (v->active == 0) {
            return i;
        }
    }
    i = 4;
    v = D_8017B210;
    min = 0x7FFFFFFF;
    best = 3;
    for (; i < D_8017B204; i++, v++) {
        if (v->busy != 0 && v->prio <= min) {
            min = v->prio;
            best = i;
        }
    }
    if (best >= 4) {
        return best;
    }
    for (i = 4, v = D_8017B210; i < D_8017B204; i++) {
        if (v->busy == 0 && v->owner != arg0) {
            return i;
        }
    }
    for (i = 4, v = D_8017B210; i < D_8017B204; i++, v++) {
        if (v->owner == arg0 && arg0->ids[arg1] == v->id) {
            return i;
        }
    }
    return arg1 % (D_8017B204 - 4) + 4;
}

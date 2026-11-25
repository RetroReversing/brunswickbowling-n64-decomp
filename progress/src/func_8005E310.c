/* identical to func_80068120 in Asteroids Hyper 64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8008C864 in BLUES BROTHERS 2000 (local match library) (matched), with its names changed by decompdecomp */
typedef struct Unk8008C864 {
    char pad0[0x34];
    s32 u34;
    s32 u38;
    char pad3c[0x70 - 0x3C];
    f32 u70;
    char pad74[0xA2 - 0x74];
    u16 uA2;
    u16 uA4;
    char padA6[0xBC - 0xA6];
    u8 uBC;
    char padBD[0xDB - 0xBD];
    u8 uDB;
    char padDC[4];
    void *uE0[4];
    s32 uF0[4];
    s32 u100[4];
    u16 u110[4];
    u16 u118[4];
    u8 u120[4];
    u8 u124[4];
    f32 u128[4];
} Unk8008C864;

u8 *func_8005E310(Unk8008C864 *arg0, u8 *arg1) {
    u8 i = arg0->uDB;
    arg0->u120[i] = *arg1++;
    (&arg0->uE0[0])[i] = arg1;
    (&arg0->uF0[0])[i] = arg0->u38;
    (&arg0->u100[0])[i] = arg0->u34;
    arg0->u124[i] = arg0->uBC;
    (&arg0->u128[0])[i] = arg0->u70;
    (&arg0->u110[0])[i] = arg0->uA2;
    (&arg0->u118[0])[i] = arg0->uA4;
    arg0->uDB++;
    return arg1;
}

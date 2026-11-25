/* identical to func_8003B560 in Bottom of the 9th (local match library) (matched), with its names changed by decompdecomp */
/* identical to initViManagerContexts in TWINE (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8003F210 in PENNY RACERS (local match library) (matched), with its names changed by decompdecomp */
typedef struct { s32 unk0; s32 unk4; } R8;
typedef struct { s16 unk0; s16 pad2; s32 pad4; R8 *unk8; s32 unkC; } V;
extern s32 D_80000300;
extern u8 D_80097DF0[];
extern s16 D_80097DF2;
extern s32 D_80097DF4;
extern s16 D_80097E22;
extern s32 D_80097E24;
extern V *D_80097E28;
extern u8 *D_80097E50;
extern V *D_80097E54;
extern u8 D_80099050[];
extern u8 D_800990A0[];
extern u8 D_80099000[];
extern s32 __osViSwapContext(void);
extern void bzero(void *, s32);

/* Zeroes the VI context buffer, picks the per-TV-type context table, and resets the VI controller. */ void __osViInit(void) {
    bzero(D_80097DF0, 0x60);
    D_80097E50 = D_80097DF0;
    D_80097E54 = (V *)(D_80097DF0 + 0x30);
    D_80097E22 = 1;
    D_80097DF2 = 1;
    D_80097E24 = 0x80000000;
    D_80097DF4 = 0x80000000;
    if (D_80000300 == 0) {
        D_80097E28 = (V *)D_80099050;
    } else if (D_80000300 == 2) {
        D_80097E28 = (V *)D_800990A0;
    } else {
        D_80097E28 = (V *)D_80099000;
    }
    D_80097E54->unk0 = 0x20;
    D_80097E54->unkC = D_80097E54->unk8->unk4;
    while (*(volatile u32 *)0xA4400010 >= 0xB) {}
    *(volatile u32 *)0xA4400000 = 0;
    __osViSwapContext();
}

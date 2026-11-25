/* identical to osEPiStartDma in HARVESTMOON64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8005B980 in GEX: ENTER THE GECKO (local match library) (matched), with its names changed by decompdecomp */
/* identical to osEPiStartDma in Gex 3 Deep Cover Gec (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80019F10 in FIGHTER DESTINY2 (local match library) (matched), with its names changed by decompdecomp */
/* identical to osEPiStartDma in DR.MARIO 64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to osEPiStartDma in DESTRUCT DERBY (local match library) (matched), with its names changed by decompdecomp */
/* identical to osEPiStartDma in CruisnExotica (local match library) (matched), with its names changed by decompdecomp */
/* identical to osEPiStartDma in CHARLIE BLAST'S (local match library) (matched), with its names changed by decompdecomp */
/* identical to osEPiStartDma in Bottom of the 9th (local match library) (matched), with its names changed by decompdecomp */
/* identical to osEPiStartDma in BASSMASTERS2000 (local match library) (matched), with its names changed by decompdecomp */
/* identical to osEPiStartDma in Asteroids Hyper 64 (local match library) (matched), with its names changed by decompdecomp */
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

s32 osJamMesg(s32, void *, M2C_UNK);                /* extern */
s32 osPiGetCmdQueue();                              /* extern */
s32 osSendMesg(s32, void *, M2C_UNK);               /* extern */
extern s32 D_80097900;

s32 osEPiStartDma(s32 arg0, void *arg1, s32 arg2) {
    s32 ret;

    if (D_80097900 == 0) {
        return -1;
    }
    M2C_FIELD(arg1, s32 *, 0x14) = arg0;
    if (arg2 == 0) {
        M2C_FIELD(arg1, s16 *, 0) = 0xF;
    } else {
        M2C_FIELD(arg1, s16 *, 0) = 0x10;
    }
    if (M2C_FIELD(arg1, u8 *, 2) == 1) {
        ret = osJamMesg(osPiGetCmdQueue(), arg1, 0);
    } else {
        ret = osSendMesg(osPiGetCmdQueue(), arg1, 0);
    }
    return ret;
}

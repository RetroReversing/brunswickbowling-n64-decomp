/* identical to func_80064F14 in Gex 3 Deep Cover Gec (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80012A34 in FIGHTER DESTINY2 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80097B44 in CyberTiger (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80033EA4 in CruisnExotica (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80063E68 in Command&Conquer (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800FBC24 in BATTLETANXGA (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80186EC4 in BATMAN BEYOND RETURN (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80087B34 in ARMYMEN SARGE 2 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8007D894 in Army Men Sarge (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800962F4 in ARMYMENAIRCOMBAT (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80065B44 in Asteroids Hyper 64 (local match library) (matched), with its names changed by decompdecomp */
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

M2C_UNK func_8005C0A4(s8 *);                        /* extern */

void func_8005BD34(s32 arg0) {
    struct {
        s8 f10;
        s32 f14;
    } __repair_frame;

    __repair_frame.f10 = 0;
    __repair_frame.f14 = arg0;
    func_8005C0A4(&__repair_frame);
}

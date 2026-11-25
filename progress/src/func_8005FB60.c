/* identical to func_80055A88 in GEX: ENTER THE GECKO (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80068C90 in Gex 3 Deep Cover Gec (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800AEF98 in ALL STAR TENNIS '99 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800166E0 in FIGHTER DESTINY2 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8008EBDC in EARTHWORM JIM 3D (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80067848 in DESTRUCT DERBY (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8009B8C0 in CyberTiger (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80037B30 in CruisnExotica (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8008B42C in CARMAGEDDON64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80081B4C in A Bug's Life (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8002F768 in Bottom of the 9th (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80090CFC in BLUES BROTHERS 2000 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800FF9F0 in BATTLETANXGA (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8018AD00 in BATMAN BEYOND RETURN (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8008B900 in ARMYMEN SARGE 2 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80081660 in Army Men Sarge (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8009A0C0 in ARMYMENAIRCOMBAT (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8006DD40 in Asteroids Hyper 64 (local match library) (matched), with its names changed by decompdecomp */
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

void func_8005FB60(s8 *arg0, s8 arg1, s32 arg2) {
    u8 __repair_frame[8];
    s32 var_v0;
    s8 *var_a0;

    var_a0 = arg0;
    var_v0 = arg2 - 1;
    if (arg2 != 0) {
        do {
            *var_a0 = arg1;
            var_v0 -= 1;
            var_a0 += 1;
        } while (var_v0 != -1);
    }
}

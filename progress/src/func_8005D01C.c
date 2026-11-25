/* identical to func_80066210 in Gex 3 Deep Cover Gec (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80013CE0 in FIGHTER DESTINY2 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80098E40 in CyberTiger (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8003513C in CruisnExotica (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800FCED0 in BATTLETANXGA (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_801881C4 in BATMAN BEYOND RETURN (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80088DE0 in ARMYMEN SARGE 2 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8007EB40 in Army Men Sarge (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800975A0 in ARMYMENAIRCOMBAT (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80066E2C in Asteroids Hyper 64 (local match library) (matched), with its names changed by decompdecomp */
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

f32 func_80066A10(f32);                             /* extern */

f32 func_8005D01C(void *arg0) {
    f32 ret;
    f32 temp_fv0;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u16 *, 0xAA) - M2C_FIELD(arg0, u8 *, 0xB6);
    if (temp_v1 <= 0) {
        ret = 0.0f; } else {
        temp_fv0 = func_80066A10((f32) temp_v1 * M2C_FIELD(arg0, f32 *, 0xDC)) * M2C_FIELD(arg0, f32 *, 0x20);
        M2C_FIELD(arg0, f32 *, 0x68) = temp_fv0;
        ret = temp_fv0;
    }
    return ret;
}

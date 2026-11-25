/* identical to func_8003711C in CruisnExotica (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80068290 in Gex 3 Deep Cover Gec (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80015CCC in FIGHTER DESTINY2 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8008FF14 in EARTHWORM JIM 3D (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8009AEC0 in CyberTiger (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80088454 in CARMAGEDDON64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800901F4 in BLUES BROTHERS 2000 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800FEEBC in BATTLETANXGA (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80080B2C in Army Men Sarge (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8009958C in ARMYMENAIRCOMBAT (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8006CE50 in Asteroids Hyper 64 (local match library) (matched), with its names changed by decompdecomp */
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

extern void *D_800978C4;

s32 func_8005F090(void) {
    void **__base_D_80083A54;
    s32 temp_v1;
    s32 var_a1;
    void **var_a0;

    var_a1 = 0;
    __base_D_80083A54 = &D_800978C4;
    if ((*__base_D_80083A54) != NULL) {
        var_a0 = __base_D_80083A54;
        do {
            temp_v1 = M2C_FIELD(*var_a0, s32 *, 4);
            if (var_a1 < temp_v1) {
                var_a1 = temp_v1;
            }
            var_a0 += 1;
        } while (*var_a0 != NULL);
    }
    return var_a1;
}

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

s32 func_8001E4C0(void *, s32);                     /* extern */
M2C_UNK func_800235F0(void *);                      /* extern */
M2C_UNK func_80023634(void *, M2C_UNK *, M2C_UNK *, s32, M2C_UNK *, s32); /* extern */
extern M2C_UNK D_800754C4;
extern M2C_UNK D_800754F4;
extern M2C_UNK D_80083060;
extern M2C_UNK D_80083430;
extern M2C_UNK D_800836F0;
extern M2C_UNK D_80083744;
extern s8 D_80083798;
extern s32 D_8008E7B0;
extern s32 D_8008EBC0;
extern M2C_UNK D_80099230;

void func_8001E800(void *arg0) {
    M2C_UNK *var_s1;
    M2C_UNK *var_s2;

    M2C_FIELD(arg0, s32 *, 0x50) = -1;
    if (arg0 == &D_80083744) {
        var_s2 = &D_80083430;
    } else {
        var_s2 = &D_80083060;
    }
    D_80083798 = 0;
    if (arg0 == &D_800836F0) {
        var_s1 = &D_800754C4;
        D_8008E7B0 = 1;
    } else {
        var_s1 = &D_800754F4;
        D_8008E7B0 = 0;
    }
    func_800235F0(arg0);
    func_80023634(arg0, var_s1, &D_80099230, func_8001E4C0(arg0, D_8008EBC0), var_s2, 0);
}

/* identical to func_80034214 in CruisnExotica (local match library) (matched), with its names changed by decompdecomp */
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

M2C_UNK func_8005FB8C(s32, s32, M2C_UNK);           /* extern */
extern s32 D_800A5A94;
extern s32 D_800A5A98;
extern s32 D_800A5A9C;
extern s32 D_800A5AA0;

s32 func_8005C0A4(s32 arg0) {
    s32 temp_hi;

    temp_hi = (s32) (D_800A5A98 + 1) % (s32) D_800A5A9C;
    if (temp_hi == D_800A5A94) {
        return 0;
    }
    func_8005FB8C(D_800A5AA0 + (D_800A5A98 * 8), arg0, 8);
    D_800A5A98 = temp_hi;
    return 1;
}

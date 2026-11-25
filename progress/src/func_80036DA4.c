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

M2C_UNK func_800580A0(s32, M2C_UNK, M2C_UNK);       /* extern */
extern f32 D_80077ED0;
extern M2C_UNK D_80077ED8;

void * func_80036DA4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_80077ED8;
    M2C_FIELD(arg0, s16 *, 6) = 0;
    M2C_FIELD(arg0, s16 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    func_800580A0(arg0 + 0xC, 0, 0x30);
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) D_80077ED0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) D_80077ED0;
    return arg0;
}

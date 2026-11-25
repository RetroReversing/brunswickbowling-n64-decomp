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

M2C_UNK func_80045D84(M2C_UNK *, s32);              /* extern */
extern f32 D_80073D6C;
extern s32 D_800891DC;
extern M2C_UNK D_8008F2F0;

void func_800136FC(void) {
    func_80045D84(&D_8008F2F0, (s32) ((f32) D_800891DC * D_80073D6C));
}

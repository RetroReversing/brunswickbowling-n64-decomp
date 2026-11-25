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

s32 func_8007169C();
s32 func_80071700();
extern u16 D_8009CD90;
extern s32 D_8009CDD8;

void func_8004E898(void *arg0) {
    D_8009CD90 &= ~M2C_FIELD(arg0, u16 *, 0x72);
    func_80071700();
    func_8007169C(D_8009CDD8, arg0);
}

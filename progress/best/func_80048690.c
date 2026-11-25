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

M2C_UNK func_800481D8(void *, void **);             /* extern */
extern M2C_UNK D_80095B30;
extern s8 D_8009C772;
extern s8 D_8009C773;
extern s8 D_8009C774;
extern void *D_8009CC60;

void func_80048690(void) {
    void *temp_a0;

    D_8009C772 = 0;
    D_8009C773 = 0;
    D_8009C774 = 0xFF;
    temp_a0 = D_8009CC60 + 8;
    M2C_FIELD(D_8009CC60, s32 *, 0) = 0x06000000;
    M2C_FIELD(D_8009CC60, M2C_UNK **, 4) = &D_80095B30;
    D_8009CC60 = temp_a0;
    func_800481D8(temp_a0, &D_8009CC60);
}

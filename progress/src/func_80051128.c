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

s32 *func_8004C9A8(s32, M2C_UNK, M2C_UNK);          /* extern */
M2C_UNK func_8004E814(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern s32 D_8009C898;
extern M2C_UNK D_8009CE10;
extern s32 D_8009DB1C;
extern s32 D_8009DB20;
extern s32 D_8009DB58;
extern M2C_UNK func_80051398;

void func_80051128(void) {
    s32 *temp_v0;

    D_8009DB20 = 0;
    D_8009DB58 = 0;
    temp_v0 = func_8004C9A8(D_8009C898, 0x5460, 8);
    if (temp_v0 != NULL) {
        D_8009DB1C = *temp_v0;
    }
    func_8004E814(&func_80051398, &D_8009CE10, 0x3FD2);
}

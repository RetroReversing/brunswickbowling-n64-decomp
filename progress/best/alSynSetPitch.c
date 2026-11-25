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

void *__allocParam();                              /* extern */

void alSynSetPitch(void *arg0, void *arg1, f32 arg2) {
    void *temp_a0;
    void *temp_v0;

    if (M2C_FIELD(arg1, void **, 8) != NULL) {
        temp_v0 = __allocParam();
        if (temp_v0 != NULL) {
            M2C_FIELD(temp_v0, s16 *, 8) = 7;
            M2C_FIELD(temp_v0, f32 *, 0xC) = arg2;
            M2C_FIELD(temp_v0, s32 *, 0) = 0;
            M2C_FIELD(temp_v0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + M2C_FIELD(M2C_FIELD(arg1, void **, 8), s32 *, 0xD8));
            temp_a0 = M2C_FIELD(M2C_FIELD(arg1, void **, 8), void **, 0xC);
            M2C_FIELD(temp_a0, M2C_UNK (**)(void *, M2C_UNK, void *), 8)(temp_a0, 3, temp_v0);
        }
    }
}

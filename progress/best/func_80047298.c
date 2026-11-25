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

M2C_UNK func_80038B78(void *);                      /* extern */
M2C_UNK func_80046F10();                            /* extern */
M2C_UNK func_8004CBA0(s32, s32);                    /* extern */
M2C_UNK func_80050DE8(void *, M2C_UNK *);           /* extern */
extern M2C_UNK D_80079AB8;
extern s32 D_80095B10;
extern s32 D_8009C898;

void func_80047298(void *arg0) {
    void *temp_a0;

    if (M2C_FIELD(arg0, void **, 0xC8) != NULL) {
        func_80046F10();
        temp_a0 = M2C_FIELD(arg0, void **, 0xC8);
        if (M2C_FIELD(temp_a0, s32 *, 0x3C) != 0) {
            func_80038B78(temp_a0);
            if (D_80095B10 != 0) {
                func_8004CBA0(D_8009C898, D_80095B10);
            }
            D_80095B10 = 0;
            M2C_FIELD(M2C_FIELD(arg0, void **, 0xC8), s32 *, 0x20) = (s32) M2C_FIELD(arg0, s32 *, 0xC4);
        }
        func_80050DE8(arg0 + 4, &D_80079AB8);
        M2C_FIELD(arg0, void **, 0xC8) = NULL;
    }
}

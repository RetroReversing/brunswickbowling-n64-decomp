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

s32 func_80038AB0(M2C_UNK, void *);                 /* extern */
M2C_UNK func_80038B78(void *);                      /* extern */
M2C_UNK func_80047A68(void *);                      /* extern */
s32 func_8004C9A8(s32, s32, M2C_UNK);               /* extern */
M2C_UNK func_8004CBA0(s32, s32);                    /* extern */
extern s32 D_80095B10;
extern s32 D_8009C898;

s32 func_800479C8(void *arg0, M2C_UNK arg1) {
    s32 temp_s0;

    func_80038B78(M2C_FIELD(arg0, void **, 0xC8));
    if (D_80095B10 != 0) {
        func_8004CBA0(D_8009C898, D_80095B10);
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xC8), s32 *, 0x20) = (s32) M2C_FIELD(arg0, s32 *, 0xC4);
    D_80095B10 = func_8004C9A8(D_8009C898, M2C_FIELD(M2C_FIELD(arg0, void **, 0xC8), s32 *, 4) * 0x10, 0x10);
    temp_s0 = func_80038AB0(arg1, M2C_FIELD(arg0, void **, 0xC8));
    func_80047A68(arg0);
    return temp_s0;
}

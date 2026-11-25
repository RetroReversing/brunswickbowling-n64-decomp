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

M2C_UNK func_8001C210(s32 *);                       /* extern */
extern s32 D_8008BA98;
extern u8 D_8008F340;

void func_80046338(void *arg0) {
    void *sp18;
    void *sp20;
    void *sp28;
    void *sp30;
    s32 sp38;

    if ((D_8008F340 != 0) && (M2C_FIELD(arg0, u8 *, 0x15) == 0)) {
        sp18 = arg0;
        sp30 = arg0;
        sp28 = arg0;
        sp38 = D_8008BA98;
        func_8001C210(&sp38);
        sp20 = sp28;
        M2C_FIELD(arg0, u8 *, 0x15) = 1U;
        M2C_FIELD(arg0, u16 *, 0x1C) = (u16) M2C_FIELD(arg0, u16 *, 0x1E);
    }
}

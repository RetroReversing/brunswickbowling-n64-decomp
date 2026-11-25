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

M2C_UNK func_800377A0(M2C_UNK *);                   /* extern */
M2C_UNK func_80046188();                            /* extern */
extern M2C_UNK D_8008C90C;
extern u8 D_8008F340;
extern u8 D_8009C5E0;

void func_80046230(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x15) != 0) {
        func_80046188(arg0);
        return;
    }
    if ((D_8008F340 != 0) && (M2C_FIELD(arg0, u8 *, 0x14) == 0)) {
        D_8009C5E0 = M2C_FIELD(arg0, u8 *, 0x21);
        func_800377A0(&D_8008C90C);
        D_8008F340 = 0;
        M2C_FIELD(arg0, u8 *, 0x14) = 1U;
    }
}

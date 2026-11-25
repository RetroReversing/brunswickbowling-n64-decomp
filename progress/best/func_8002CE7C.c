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

M2C_UNK func_8002C0DC(M2C_UNK *, s16, s16);         /* extern */
s32 func_8002C4E0(M2C_UNK *);                       /* extern */
M2C_UNK func_8002CE14(void *);                      /* extern */
extern M2C_UNK D_8008AA64;

void func_8002CE7C(void *arg0, s16 arg1, s16 arg2) {
    func_8002C0DC(&D_8008AA64, arg1, arg2);
    if (arg1 == 0x7FE0) {
        M2C_FIELD(arg0, u16 *, 4) = (u16) (M2C_FIELD(arg0, u16 *, 4) + 1);
        M2C_FIELD(arg0, u16 *, 0xC) = (u16) (M2C_FIELD(arg0, u16 *, 0xC) + 1);
        if (arg2 == 0) {
            M2C_FIELD(arg0, u16 *, 6) = (u16) (M2C_FIELD(arg0, u16 *, 6) + 1);
            M2C_FIELD(arg0, u16 *, 0xE) = (u16) (M2C_FIELD(arg0, u16 *, 0xE) + 1);
        }
    } else {
        M2C_FIELD(arg0, u16 *, 8) = (u16) (M2C_FIELD(arg0, u16 *, 8) + 1);
        M2C_FIELD(arg0, u16 *, 0x10) = (u16) (M2C_FIELD(arg0, u16 *, 0x10) + 1);
        if (arg2 == 0) {
            M2C_FIELD(arg0, u16 *, 0xA) = (u16) (M2C_FIELD(arg0, u16 *, 0xA) + 1);
            M2C_FIELD(arg0, u16 *, 0x12) = (u16) (M2C_FIELD(arg0, u16 *, 0x12) + 1);
        }
    }
    if (func_8002C4E0(&D_8008AA64) == 0) {
        M2C_FIELD(arg0, s16 *, 0x14) = arg2;
        return;
    }
    func_8002CE14(arg0);
}

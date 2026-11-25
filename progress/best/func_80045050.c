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

M2C_UNK func_80051240(s32 *, s32);                  /* extern */
M2C_UNK func_800580A0(s32 *, M2C_UNK, M2C_UNK);     /* extern */

void func_80045050(void *arg0, s16 arg1, s16 arg2, u16 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, u32 arg9) {
    s32 sp10;
    s16 sp14;
    s16 sp16;
    s16 sp18;
    s16 sp1A;
    s8 sp1C;
    s8 sp1D;
    s8 sp1E;
    u16 sp20;
    s32 var_v1;

    func_800580A0(&sp10, 0, 0x14);
    sp10 = 0x40000000;
    sp14 = arg1;
    sp16 = arg2;
    sp20 = arg3;
    sp18 = (s16) arg4;
    sp1A = (s16) arg5;
    sp1C = (s8) arg6;
    sp1D = (s8) arg7;
    sp1E = (s8) arg8;
    switch (arg9) {
    case 1:
    case 2:
        break;
    case 0:
        sp10 = 0;
        break;
    case 3:
        var_v1 = 0x10000000;
block_6:
        sp10 |= var_v1;
        break;
    case 4:
        var_v1 = 0x30000000;
        goto block_6;
    case 5:
        var_v1 = 0x20000000;
        goto block_6;
    }
    if (sp20 != 0) {
        sp10 |= 4;
    }
    func_80051240(&sp10, M2C_FIELD(arg0, s32 *, 4));
}

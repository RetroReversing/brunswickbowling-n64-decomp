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

M2C_UNK func_80058170(M2C_UNK);                     /* extern */
s32 func_80058AF0(M2C_UNK *, s32, s32 *);           /* extern */
extern s32 D_800A58E0;
extern s32 D_800A58E4;
extern M2C_UNK *D_800A58E8;
extern M2C_UNK *D_800A58EC;

s32 func_800597E4(s32 arg0, ...) {
    char *__repair_ap;
    char sp10[0x80];
    s32 temp_s0;

    D_800A58E0 = 0x80;
    D_800A58E4 = 1;
    D_800A58EC = sp10;
    D_800A58E8 = sp10;
    __repair_ap = (char *) __builtin_next_arg(arg0);
    temp_s0 = func_80058AF0(sp10, arg0, __repair_ap);
    func_80058170(0);
    return temp_s0;
}

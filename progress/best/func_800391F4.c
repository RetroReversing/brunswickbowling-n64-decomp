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

s32 func_80029704(s32, s32, s32, s32); /* extern */
s32 func_80039738(s32 *, s32, s32, s32, s32, s32 *); /* extern */
s32 func_8003FE3C(s32 *, u8);                   /* extern */
s32 func_8005978C(s32 *, s32 *, s32, s32 *); /* extern */
extern s32 D_80078074;
extern s32 D_8007808C;
extern s32 D_80078098;
extern s32 D_800780A0;
extern s32 D_8008CEB0;
extern s32 D_8008E9B0;

void func_800391F4(void *arg0) {
    int arg0_flag;
    char sp18[0x40];
    s32 *var_a3;
    s32 temp_a2;

    func_80029704(0x190, 0x28, 0, 0);
    loop_goto_1:
    {
 temp_a2 = func_8003FE3C(&D_8008E9B0, (*(u8 *)((s8 *)arg0 + 0x14)));
    }
    if (0)
    {
        goto loop_goto_1;
    }
    do { arg0_flag = *(s32 *)((s8 *)arg0 + 0x20); } while (0);
    if (arg0_flag != 0) {
        var_a3 = &D_8007808C;
    } else {
        var_a3 = &D_80078098;
    }
    func_8005978C(sp18, &D_80078074, temp_a2, var_a3);
    func_80039738(&D_8008CEB0, 0, 1, 0x140, 0x6A, sp18);
    func_80039738(&D_8008CEB0, 0, 1, 0x140, 0x7A, &D_800780A0);
}

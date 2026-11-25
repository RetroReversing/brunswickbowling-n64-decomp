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

s32 func_80036F08(s32 *, s32, s32 *, s32); /* extern */
s32 func_8003E8E8();                            /* extern */
extern s32 D_80078EF8;
extern s32 D_8008C290;

void func_8003EBF0(s32 *arg0, s32 arg1) {
  s32 temp;
  s32 *temp2;
    do { temp = *arg0; } while (0);
    if (temp != 4) {
        func_8003E8E8(arg0, arg1);
    }
    temp2 = (s32 *)((s8 *)(arg0 + (arg1 * 4)) + 0x28);
    func_80036F08(&D_8008C290, (*temp2), &D_80078EF8, 0);
}

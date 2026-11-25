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
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern s16 D_800827A4;
extern s32 D_80082E90;

void func_80019090(void) {
    s16 __repair_narrow_0;
    s16 __repair_narrow_1;
    __repair_narrow_0 = (s16) (*(s16 *)((s8 *)D_80082E90 + 0x24));
    (*(s16 *)((s8 *)D_800827A4 + 0x20)) = __repair_narrow_0;
    __repair_narrow_1 = (s16) (*(s16 *)((s8 *)D_80082E90 + 0x26));
    (*(s16 *)((s8 *)D_800827A4 + 0x22)) = __repair_narrow_1;
}

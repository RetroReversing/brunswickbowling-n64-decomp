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

s32 func_80037BC8(s32, s16);                  /* extern */
M2C_UNK func_80037C2C(M2C_UNK *, s16);              /* extern */
extern M2C_UNK D_8008C9CC;

void func_80037744(void *arg0) {
    s32 temp_a1;

    do { temp_a1 = M2C_FIELD(arg0, s16 *, 0xE); } while (0);
    do { M2C_FIELD(arg0, s16 *, 0x10) = -1; } while (0);
    if ((temp_a1 >= 0) && (func_80037BC8(&D_8008C9CC, temp_a1) == 0)) {
        do { func_80037C2C(&D_8008C9CC, M2C_FIELD(arg0, s16 *, 0xE)); } while (0);
    }
}

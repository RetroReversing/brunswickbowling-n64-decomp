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

extern u16 D_8009CBD0;
extern u16 D_8009CBE4;

void func_8004E9C4(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x7A) = (u16) D_8009CBE4;
    M2C_FIELD(arg0, u16 *, 0x78) = (u16) D_8009CBD0;
    M2C_FIELD(arg0, s16 *, 0x76) = 0;
    M2C_FIELD(arg0, s16 *, 0x74) = 0;
    M2C_FIELD(arg0, s16 *, 0x94) = (s16) ((u32) (D_8009CBD0 & 0xFFFF) >> 1);
    M2C_FIELD(arg0, s16 *, 0x96) = (s16) ((u32) (D_8009CBE4 & 0xFFFF) >> 1);
}

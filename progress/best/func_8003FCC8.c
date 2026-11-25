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

extern unsigned short D_8009D5C0;
extern unsigned short D_8009D5C6;
extern unsigned short D_8009D5CC;
extern unsigned short D_8009D5D2;
extern char D_8009C240[];
extern char D_8009C430[];
extern u16 D_8009C52A;

void func_8003FCC8(void) {
    s32 *temp_t0;
    void *temp_a1;

    temp_t0 = (D_8009C52A * 4) + D_8009C430;
    if (*temp_t0 == 0) {
        temp_a1 = (D_8009C52A * 2) + D_8009C240;
        M2C_FIELD(temp_a1, u16 *, 0) = (u16) D_8009D5C0;
        M2C_FIELD(temp_a1, u16 *, 0x7C) = (u16) D_8009D5C6;
        M2C_FIELD(temp_a1, u16 *, 0xF8) = (u16) D_8009D5CC;
        M2C_FIELD(temp_a1, u16 *, 0x174) = (u16) D_8009D5D2;
        *temp_t0 = 1;
        D_8009C52A = (D_8009C52A + 1) % 62;
    }
}

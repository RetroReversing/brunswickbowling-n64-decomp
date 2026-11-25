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

extern int D_80089B1C;
extern unsigned char D_80089B21;
s32 func_8002AB14();
s32 func_80037264();
s32 func_800375C0();
extern s32 D_80089B38;
extern char D_8008C864[];
extern s32 D_8008E9E0;
extern char D_800904A4[];
extern char D_80090C9C[];
extern char D_80091494[];
extern char D_80091C8C[];
extern char D_80092880[];

void func_80029D3C(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1_2;
    s32 temp_v1_3;
    u16 temp_v1;

    temp_v0 = 0xE - arg1;
    temp_v1 = M2C_FIELD(arg0, u16 *, 0x18) ^ (1 << temp_v0);
    M2C_FIELD(arg0, u16 *, 0x18) = temp_v1;
    if (((s16) temp_v1 >> temp_v0) & 1) {
        temp_v1_2 = arg1 * 0xCC;
        M2C_FIELD((temp_v1_2 + D_800904A4), s32 *, 0xA0) = 0;
        M2C_FIELD((temp_v1_2 + D_80091494), s32 *, 0xA0) = 0;
        M2C_FIELD((temp_v1_2 + D_80090C9C), s32 *, 0xA0) = 0;
        M2C_FIELD((temp_v1_2 + D_80091C8C), s32 *, 0xA0) = 0;
        M2C_FIELD((temp_v1_2 + D_80092880), s32 *, 0xA0) = 1;
    } else {
        temp_v1_3 = arg1 * 0xCC;
        M2C_FIELD((temp_v1_3 + D_800904A4), s32 *, 0xA0) = 1;
        M2C_FIELD((temp_v1_3 + D_80091494), s32 *, 0xA0) = 1;
        M2C_FIELD((temp_v1_3 + D_80090C9C), s32 *, 0xA0) = 1;
        M2C_FIELD((temp_v1_3 + D_80091C8C), s32 *, 0xA0) = 1;
        M2C_FIELD((temp_v1_3 + D_80092880), s32 *, 0xA0) = 0;
    }
    if ((s16) M2C_FIELD(arg0, u16 *, 0x18) == 0) {
        do {
            temp_v0_2 = func_8002AB14(0xA);
        } while (temp_v0_2 == arg1);
        func_80029D3C(arg0, temp_v0_2, 1);
    }
    if (arg2 != 0) {
        func_800375C0(D_8008C864, 0);
        func_80037264(D_80089B1C, 0, 5, 0, (s32) D_80089B21, 4);
        D_80089B38 = D_8008E9E0;
    }
}

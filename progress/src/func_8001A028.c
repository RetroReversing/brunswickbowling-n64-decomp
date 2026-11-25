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

s32 func_8002BD80(s16);                             /* extern */
extern s32 D_80089944;
extern s32 D_8008AB10;

void func_8001A028(void *arg0, s16 arg1) {
    u16 temp_v1;

    M2C_FIELD(arg0, u16 *, 0x16) = 0U;
    if ((D_8008AB10 == 0) && (D_80089944 == 0) && (func_8002BD80(arg1) != 0)) {
        temp_v1 = M2C_FIELD(arg0, u16 *, 0x16);
        M2C_FIELD(arg0, u16 *, 0x16) = (u16) (temp_v1 + 1);
        if ((arg1 & 0x2980) && (arg1 & 0x1260)) {
            M2C_FIELD(arg0, u16 *, 0x16) = (u16) (temp_v1 + 2);
            if (arg1 == 0x120) {
                M2C_FIELD(arg0, u16 *, 0x16) = (u16) (temp_v1 + 3);
            }
        }
    }
}

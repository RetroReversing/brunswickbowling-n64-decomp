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

M2C_UNK osPiStartDma(M2C_UNK *, M2C_UNK, M2C_UNK, s32, s32, s32, M2C_UNK *); /* extern */
M2C_UNK osRecvMesg(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK osInvalDCache(s32, s32);                    /* extern */
M2C_UNK osWritebackDCache(s32, s32);                /* extern */
extern M2C_UNK D_8009D890;
extern M2C_UNK D_8009D8B0;

void func_8005061C(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;

    temp_s0 = ((u32) (arg2 + 0xF) >> 4) * 0x10;
    osWritebackDCache(arg1, temp_s0);
    osInvalDCache(arg1, temp_s0);
    osPiStartDma(&D_8009D8B0, 0, 0, arg0, arg1, arg2, &D_8009D890);
    osRecvMesg(&D_8009D890, 0, 1);
}

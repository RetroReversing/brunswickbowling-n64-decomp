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

s32 func_8005FB0C(M2C_UNK);                         /* extern */
M2C_UNK osCreateMesgQueue(s32, s32, M2C_UNK);           /* extern */
M2C_UNK osScAddClient(s32, s32, s32);               /* extern */
extern s32 D_800A5B40;
extern s32 D_800A5B44;

void func_8005F59C(void) {
    s32 temp_v0;

    temp_v0 = func_8005FB0C(0x58);
    D_800A5B44 = temp_v0;
    osCreateMesgQueue(temp_v0 + 8, temp_v0 + 0x20, 4);
    osCreateMesgQueue(D_800A5B44 + 0x30, D_800A5B44 + 0x48, 4);
    osScAddClient(D_800A5B40, D_800A5B44, D_800A5B44 + 8);
}

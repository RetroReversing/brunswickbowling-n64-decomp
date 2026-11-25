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

s32 func_80012BA4(s32 *);                   /* extern */
s8 func_8002AB14(s32);                          /* extern */
s32 func_80031350(void *, s32 *);           /* extern */
extern s32 D_8007F618;
extern u8 D_80081A08[];
extern s32 D_80089028;
extern s32 D_8008B0F0;

void func_80030464(void *arg0) {
    s32 *var_s1;
    s32 var_s0;

    if (D_80089028 == 0) {
        var_s0 = 0;
        for (; var_s0 < 100; var_s0++) {
            { func_80012BA4(((&D_8007F618) + var_s0 * 23)); }
            *(var_s0 + D_80081A08) = var_s0;
        }
        (*(s8 *)((s8 *)arg0 + 0x48)) = 0x64;
        (*(s32 *)((s8 *)arg0 + 0x44)) = 0;
        (*(s8 *)((s8 *)arg0 + 0x49)) = 1;
        (*(s8 *)((s8 *)arg0 + 0x4B)) = func_8002AB14(0x80);
    }
    { func_80031350(arg0, &D_8008B0F0); }
}

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

s32 func_80037868();
s32 func_8004600C();
s32 func_80046014();
extern char D_8008C90C[];
extern s8 D_8008F340;
extern u8 D_8009C5E0;

void func_800462AC(void *arg0, s32 arg1) {
    s32 var_a1;

    var_a1 = arg1;
    if (M2C_FIELD(arg0, u8 *, 0x14) != 0) {
        if (D_8009C5E0 == 0) {
            var_a1 = 3;
            if (M2C_FIELD(arg0, s16 *, 0x20) != 0) {
                func_80046014(arg0, 3, 0xB);
            } else {
                goto block_7;
            }
        } else if (M2C_FIELD(arg0, s16 *, 0x20) == 0) {
            func_8004600C(arg0);
        } else {
block_7:
            func_80037868(D_8008C90C, var_a1);
        }
        D_8008F340 = 1;
        M2C_FIELD(arg0, u8 *, 0x14) = 0U;
    }
}

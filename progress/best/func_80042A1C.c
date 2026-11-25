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

s32 func_8000FCD0();                                /* extern */
M2C_UNK func_80036A8C();                            /* extern */
M2C_UNK func_8004684C(M2C_UNK);                     /* extern */
extern s32 D_80082D60;
extern s32 D_8008C5D0;
extern s32 D_8008D8E8;
extern s16 D_8009CC3C;
extern s16 D_8009CC4C;
extern s16 D_8009CC4E;
extern s16 D_8009CC50;

void func_80042A1C(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    if (M2C_FIELD(arg0, s32 *, 0x320) != 0) {
        do {
            var_v1 = 1;
loop_2:
            var_v1 += 1;
            if (var_v1 < 0xA) {
                goto loop_2;
            }
            temp_v0 = func_8000FCD0();
            M2C_FIELD(arg0, s32 *, 0x320) = temp_v0;
        } while (temp_v0 != 0);
    }
    if (D_80082D60 != 0) {
        D_8009CC4C = 0;
        D_8009CC3C = 0x280;
        D_8009CC4E = 0xC8;
        D_8009CC50 = 0xF0;
        func_80036A8C();
    } else {
        D_8009CC3C = 0x280;
        D_8009CC4E = 0;
        D_8009CC50 = 0xF0;
        D_8009CC4C = M2C_FIELD(arg0, u16 *, 0x318) + 0xA0;
    }
    func_8004684C(1);
    D_8008C5D0 = 0xFFFF;
    M2C_FIELD(arg0, s32 *, 0x324) = 0;
    D_8008D8E8 = 2;
}

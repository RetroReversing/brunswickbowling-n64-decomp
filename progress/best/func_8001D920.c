/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O1, tried by autopilot */
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

s32 func_80011994();
s32 func_80011CA4();
s32 func_800132BC();
extern s32 D_8007DA40;
extern char D_8007DA48[];
extern s32 D_8007E4E0;
extern char D_8007E4E4[];
extern char D_8007F618[];
extern char D_80081AD0[];
extern s32 D_80082760;
extern u8 D_8008E9D0;

void func_8001D920(s32 arg0, s32 arg1) {
    void *temp_a0;

    if (D_80082760 != 0) {
        func_800132BC(0);
    }
    temp_a0 = (D_8007DA40 * 0x1C4) + D_8007DA48;
    D_8007E4E0 = D_8007DA40;
    D_8007DA40 += 1;
    func_80011994(temp_a0, (arg0 * 0x18) + D_8007E4E4, arg1 & 0xFF);
    M2C_FIELD(((D_8007E4E0 * 0x1C4) + D_8007DA48), u8 *, 0x1B8) = (u8) D_8008E9D0;
    func_80011CA4((D_8007E4E0 * 0x5C) + D_8007F618, (D_8007E4E0 * 0x1C4) + D_8007DA48, 1);
    *((D_8007E4E0 * 4) + D_80081AD0) = (D_8007E4E0 * 0x5C) + D_8007F618;
}

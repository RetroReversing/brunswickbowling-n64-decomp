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

s32 func_80011CA4();
s32 func_80020A4C();
extern s32 D_8007DA40;
extern char D_8007DA48[];
extern s32 D_8007E4E0;
extern char D_8007F618[];
extern char D_80081AD0[];
extern char D_80083BA8[];
extern char D_8008AD48[];
extern u8 D_8008E9D0;

s32 func_8001318C(s32 arg0) {
    void **temp_t1;
    void *temp_a2;
    void *temp_a3;

    temp_t1 = (D_8007DA40 * 4) + D_80081AD0;
    temp_a3 = (D_8007DA40 * 0x5C) + D_8007F618;
    *temp_t1 = temp_a3;
    M2C_FIELD(temp_a3, void **, 0x50) = (void *) ((D_8007DA40 * 0x2C) + D_8008AD48);
    temp_a2 = (D_8007DA40 * 0x1C4) + D_8007DA48;
    D_8007E4E0 = D_8007DA40;
    D_8007DA40 += 1;
    func_80020A4C(D_80083BA8, arg0, temp_a2, *temp_t1);
    M2C_FIELD(((D_8007E4E0 * 0x1C4) + D_8007DA48), u8 *, 0x1B8) = (u8) D_8008E9D0;
    func_80011CA4((D_8007E4E0 * 0x5C) + D_8007F618, (D_8007E4E0 * 0x1C4) + D_8007DA48, 1);
    return 1;
}

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

M2C_UNK func_80027420();                            /* extern */
M2C_UNK func_80039738(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK *); /* extern */
extern M2C_UNK D_80077044;
extern M2C_UNK D_80077054;
extern M2C_UNK D_8008CF28;

void func_8002ED64(void) {
    func_80027420();
    func_80039738(&D_8008CF28, 0, 0, 0x2D, 0xD4, &D_80077044);
    func_80039738(&D_8008CF28, 0, 2, 0x253, 0xD4, &D_80077054);
}

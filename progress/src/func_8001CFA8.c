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

M2C_UNK func_8001BDE4(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_8003732C(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK D_80082F78;
extern s32 D_80083200;
extern M2C_UNK D_80083430;
extern s32 D_8008ED80;
extern M2C_UNK D_8008F0BC;
extern M2C_UNK D_8008F0FC;

void func_8001CFA8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x60) = 1;
    D_8008ED80 = 0;
    func_8003732C(&D_8008F0BC, 2);
    func_8003732C(&D_8008F0FC, 2);
    D_80083200 = 0;
    func_8001BDE4(&D_80082F78, &D_80083430);
}

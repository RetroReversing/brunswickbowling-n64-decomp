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

M2C_UNK func_8001C210(void **);                     /* extern */
M2C_UNK func_8002E428(M2C_UNK *, M2C_UNK, void *);  /* extern */
extern M2C_UNK D_8008ABE0;
extern M2C_UNK D_8008BA90;
extern M2C_UNK D_8008ED80;

void func_8002D664(void *arg0, void *arg1) {
    void *sp18;
    void *sp20;
    void *sp28;
    void *sp30;
    void *sp38;

    M2C_FIELD(M2C_FIELD(arg1, void **, 0), void ***, 4) = (void **) M2C_FIELD(arg1, void ***, 4);
    *M2C_FIELD(arg1, void ***, 4) = M2C_FIELD(arg1, void **, 0);
    sp18 = arg0;
    sp30 = arg0;
    sp28 = arg0;
    sp38 = &D_8008BA90 + 8;
    func_8001C210(&sp38);
    sp20 = sp28;
    M2C_FIELD(arg0, void **, 0x14) = arg1;
    M2C_FIELD(arg0, s16 *, 0x18) = (s16) M2C_FIELD(&D_8008ED80, s16 *, 0x318);
    M2C_FIELD(&D_8008ED80, s16 *, 0x318) = -0xA0;
    func_8002E428(&D_8008ABE0, -0xA0, sp18);
}

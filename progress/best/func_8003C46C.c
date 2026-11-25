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

M2C_UNK func_80023CB4();                            /* extern */
M2C_UNK func_80039738(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK *); /* extern */
M2C_UNK func_80045050(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_8005978C(M2C_UNK *, M2C_UNK *);        /* extern */
extern M2C_UNK D_80078764;
extern M2C_UNK D_8008CF28;
extern s32 D_8008D8E8;
extern M2C_UNK D_8008ED80;

void func_8003C46C(void) {
    char sp30[0x20];
    s32 temp_s1;

    temp_s1 = D_8008D8E8;
    func_80023CB4();
    func_80045050(&D_8008ED80, 0x140, 0xCE, 0, 0x140, 0x16, 0x20, 0x20, 0x40, 0, 0);
    func_8005978C(sp30, &D_80078764);
    func_80039738(&D_8008CF28, 0, 2, 0x253, 0xD4, sp30);
    D_8008D8E8 = 0;
    D_8008D8E8 = temp_s1;
}

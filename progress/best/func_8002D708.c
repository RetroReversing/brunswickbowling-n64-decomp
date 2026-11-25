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

M2C_UNK func_80016604(M2C_UNK *);                   /* extern */
M2C_UNK func_8001C210(s32, void **);                /* extern */
M2C_UNK func_80024834(M2C_UNK *, M2C_UNK, s32);     /* extern */
M2C_UNK func_8002E428(M2C_UNK *, s16);              /* extern */
extern M2C_UNK D_800827A4;
extern M2C_UNK D_80089830;
extern M2C_UNK D_8008ABE0;
extern M2C_UNK D_8008BA90;
extern s16 D_8008F098;

void func_8002D708(void *arg0) {
    s32 sp18;
    s32 sp20;
    s32 sp28;
    s32 sp30;
    void *sp38;
    s16 temp_a1;
    s32 temp_a0;

    M2C_FIELD(M2C_FIELD(arg0, void **, 0), void ***, 4) = (void **) M2C_FIELD(arg0, void ***, 4);
    *M2C_FIELD(arg0, void ***, 4) = M2C_FIELD(arg0, void **, 0);
    temp_a0 = M2C_FIELD(arg0, s32 *, 0x14);
    sp38 = &D_8008BA90 + 8;
    sp18 = temp_a0;
    sp30 = temp_a0;
    sp28 = temp_a0;
    func_8001C210(temp_a0, &sp38);
    sp20 = sp28;
    func_80024834(&D_80089830, 1, sp18);
    temp_a1 = M2C_FIELD(arg0, s16 *, 0x18);
    D_8008F098 = temp_a1;
    func_8002E428(&D_8008ABE0, temp_a1);
    func_80016604(&D_800827A4);
}

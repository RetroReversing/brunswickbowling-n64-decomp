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

M2C_UNK func_8001DAD8(void *);                      /* extern */
M2C_UNK func_80023B50(void *);                      /* extern */
s32 func_80023DC0();                                /* extern */
M2C_UNK func_80037900(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80037908(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_8003E740(M2C_UNK *);                   /* extern */
M2C_UNK func_8003EB8C(M2C_UNK *, s32);              /* extern */
M2C_UNK func_80045278(M2C_UNK *, M2C_UNK);          /* extern */
extern s32 D_800835DC;
extern s32 D_800835E0;
extern M2C_UNK D_80083AF0;
extern M2C_UNK D_8008C8F4;
extern M2C_UNK D_8008ED80;

void func_8001DDFC(void *arg0) {
    s16 temp_v1;
    s32 temp_s2;

    temp_s2 = func_80023DC0();
    if (D_800835E0 >= 0) {
        func_8003E740(&D_80083AF0);
        func_80037900(&D_8008C8F4, 0x19, 0x4E2);
        func_80045278(&D_8008ED80, 0);
        func_80037908(&D_8008C8F4, 0x4E2);
        D_800835E0 = -1;
    }
    if (D_800835DC != temp_s2) {
        func_8003EB8C(&D_80083AF0, temp_s2);
        D_800835DC = temp_s2;
        goto block_6;
    }
    temp_v1 = M2C_FIELD(arg0, s16 *, 0x4C);
    if (M2C_FIELD(arg0, s32 *, 0x50) != temp_v1) {
        M2C_FIELD(arg0, s32 *, 0x50) = (s32) temp_v1;
block_6:
        func_8001DAD8(arg0);
    }
    func_80023B50(arg0);
}

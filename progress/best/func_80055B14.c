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

M2C_UNK func_80066C50(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK osCreateThread(M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *, s32); /* extern */
M2C_UNK osSetEventMesg(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK osStartThread(M2C_UNK *);                   /* extern */
extern s32 D_800971C0;
extern M2C_UNK D_800A3894;
extern M2C_UNK D_800A38A0;
extern M2C_UNK D_800A48C0;
extern M2C_UNK D_800A48C4;
extern M2C_UNK D_800A48D0;
extern M2C_UNK D_800A4B50;
extern M2C_UNK D_800A4B68;
extern M2C_UNK D_800A4B70;
extern M2C_UNK D_800A4D20;
extern M2C_UNK func_80055CB0;

void func_80055B14(s32 arg0) {
    if (D_800971C0 == 0) {
        D_800971C0 = 1;
        func_80066C50(&D_800A48D0, &D_800A48C4, 1);
        func_80066C50(&D_800A4B50, &D_800A48C0, 1);
        func_80066C50(&D_800A4D20, &D_800A4B68, 1);
        func_80066C50(&D_800A38A0, &D_800A3894, 1);
        osSetEventMesg(0, &D_800A38A0, 1);
        osCreateThread(&D_800A4B70, 0x4653, &func_80055CB0, 0, &D_800A48C0, arg0);
        osStartThread(&D_800A4B70);
    }
}

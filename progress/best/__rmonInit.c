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

M2C_UNK func_8005FC00(M2C_UNK, M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_80066C50(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK osSetEventMesg(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK osCreateThread(M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *, s32); /* extern */
M2C_UNK osStartThread(M2C_UNK *);                   /* extern */
extern M2C_UNK D_800A8490;
extern M2C_UNK D_800A8640;
extern M2C_UNK D_800AC660;
extern M2C_UNK D_800AC680;
extern M2C_UNK D_800AC6A0;
extern M2C_UNK __rmonIOhandler;

void __rmonInit(void) {
    func_80066C50(&D_800AC6A0, &D_800A8640, 8);
    osSetEventMesg(0xA, &D_800AC6A0, 2);
    osSetEventMesg(0xB, &D_800AC6A0, 4);
    osSetEventMesg(0xC, &D_800AC6A0, 8);
    osSetEventMesg(0xD, &D_800AC6A0, 0);
    osCreateThread(&D_800A8490, 0, &__rmonIOhandler, 0, &D_800AC660, 0xFF);
    func_8005FC00(0x96, &D_800AC680, ((M2C_UNK *) ((u8 *) &D_800AC680 - 0x20)), 8);
    osStartThread(&D_800A8490);
}

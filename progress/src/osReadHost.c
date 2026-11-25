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

s32 func_8005FEB0(M2C_UNK *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK osCreateMesgQueue(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK osRecvMesg(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK osSetEventMesg(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
extern s32 D_80097C90;
extern M2C_UNK D_800A7950;
extern M2C_UNK D_800A7968;
extern s32 D_800A7970;
extern s32 D_800A7974;

void osReadHost(s32 arg0, s32 arg1) {
    M2C_UNK sp10;
    s32 var_s1;

    var_s1 = 0;
    if (D_80097C90 == 0) {
        osCreateMesgQueue(&D_800A7950, &D_800A7968, 1);
        osSetEventMesg(0xF, &D_800A7950, 0);
        D_80097C90 = 1;
    }
    D_800A7974 = arg0;
    D_800A7970 = arg1;
    do {
        var_s1 += func_8005FEB0(&sp10, 1, 5);
    } while (var_s1 == 0);
    osRecvMesg(&D_800A7950, 0, 1);
}

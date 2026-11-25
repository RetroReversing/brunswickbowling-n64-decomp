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
M2C_UNK func_80060C04();                            /* extern */
M2C_UNK func_80060C70();                            /* extern */
M2C_UNK osCreateMesgQueue(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK osRecvMesg(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK osSetEventMesg(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK D_800A74E0;
extern M2C_UNK D_800A74F8;
extern M2C_UNK D_800A7500;
extern M2C_UNK D_800A7518;

void ramromMain(void) {
    M2C_UNK sp10;
    s32 var_s0;

    osCreateMesgQueue(&D_800A74E0, &D_800A74F8, 1);
    osCreateMesgQueue(&D_800A7500, &D_800A7518, 1);
    osSetEventMesg(0x12, &D_800A74E0, 0);
    osSetEventMesg(0x13, &D_800A7500, 0);
loop_1:
    osRecvMesg(&D_800A74E0, 0, 1);
    var_s0 = 0;
    func_80060C04();
    do {
        var_s0 += func_8005FEB0(&sp10, 1, 9);
    } while (var_s0 == 0);
    osRecvMesg(&D_800A7500, 0, 1);
    func_80060C70();
    goto loop_1;
}

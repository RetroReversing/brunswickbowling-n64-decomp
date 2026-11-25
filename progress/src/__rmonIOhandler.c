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
M2C_UNK func_80066C50(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_80067FC0(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK osSetEventMesg(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK __rmonExecute(M2C_UNK *);                   /* extern */
extern M2C_UNK D_800A7A40;
extern M2C_UNK D_800A7A58;
extern M2C_UNK *D_800A7A60;
extern M2C_UNK D_800A7A68;

void __rmonIOhandler(void) {
    M2C_UNK sp10;
    s32 var_s0;

    func_80066C50(&D_800A7A40, &D_800A7A58, 1);
    osSetEventMesg(0x14, &D_800A7A40, 0);
    D_800A7A60 = &D_800A7A68;
for (;;)
{
    func_80067FC0(&D_800A7A40, 0, 1);
    __rmonExecute(&D_800A7A68);
    D_800A7A60 = &D_800A7A68;
    var_s0 = 0;
    do {
        var_s0 += func_8005FEB0(&sp10, 1, 0xB);
    } while (var_s0 <= 0);
    continue;
break;
}
}

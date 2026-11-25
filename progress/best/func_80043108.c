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

M2C_UNK func_8002AB14(M2C_UNK);                     /* extern */
M2C_UNK func_8003A1C0();                            /* extern */
M2C_UNK func_8003B130();                            /* extern */
M2C_UNK func_8003B244(s32);                         /* extern */
M2C_UNK func_8003B24C(s32);                         /* extern */
extern s32 D_8007D704;
extern s32 D_80089944;
extern s32 D_8008AB10;
extern s32 D_8008B3BC;
extern s32 D_8008B3DC;
extern s8 D_8008F307;

void func_80043108(void *arg0, s32 arg1) {
    s32 var_v1;

    M2C_FIELD(arg0, s32 *, 0x31C) = 0;
    M2C_FIELD(arg0, s32 *, 0x2E8) = arg1;
    func_8002AB14(3);
    var_v1 = 0;
    if ((D_8007D704 != 0) || (D_8008B3BC != 0) || (D_8008AB10 != 0)) {
        var_v1 = 1;
    }
    if (var_v1 != 0) {
        D_8008F307 = 1;
    } else {
        if ((D_80089944 != 0) || (D_8008B3DC == 0xE)) {

        }
        D_8008F307 = 0;
    }
    func_8003A1C0();
    func_8003B130();
    func_8003B244(arg1);
    func_8003B24C(arg1);
}

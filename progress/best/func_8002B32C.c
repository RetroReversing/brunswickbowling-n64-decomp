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

s32 func_80013B4C();
s32 func_80023E08();
s32 func_8003EC54();
extern char D_80076710[];
extern char D_80076718[];
extern char D_8007673C[];
extern char D_80081CE8[];
extern char D_80083060[];
extern char D_80083AF0[];
extern s32 D_80089944;
extern char D_8008B2A4[];
extern char D_8008B3D8[];
extern s32 D_8008B3DC;
extern s32 func_8002B2EC;

void func_8002B32C(void *arg0) {
    s32 *var_v0;

    func_80013B4C(D_80081CE8, D_80076710, D_8008B3D8, 0x15, (char *)&func_8002B2EC + 4);
    if (D_80089944 != 0) {
        var_v0 = D_80076718;
    } else {
        var_v0 = D_8007673C;
    }
    M2C_FIELD(arg0, s32 **, 0x30) = var_v0;
    M2C_FIELD(arg0, s32 **, 0x34) = D_80083060;
    func_80023E08(arg0, 0xA, 0x69, 0x14A, 1);
    func_8003EC54(D_80083AF0, *((D_8008B3DC * 4) + D_8008B2A4));
}

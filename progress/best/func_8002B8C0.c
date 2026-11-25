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
s32 func_8002FF2C();
extern char D_8002B8A0[];
extern char D_800768B4[];
extern char D_800768C8[];
extern char D_800768D0[];
extern char D_800768E8[];
extern char D_800768F0[];
extern char D_80076904[];
extern char D_80081CE8[];
extern s32 D_80082760;
extern char D_80083060[];
extern char D_80083110[];
extern char D_8008B3C8[];
extern char D_8008B428[];

void func_8002B8C0(void *arg0) {
    s32 var_s4;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 var_s2;

    var_s2 = 0;
    var_s4 = 0x4E;
    if (D_80082760 == 0) {
        var_s2 = 1;
        M2C_FIELD(arg0, s32 **, 0x30) = D_800768B4;
        func_80013B4C(D_80081CE8, D_800768C8, D_8008B3C8, 5, D_8002B8A0);
        M2C_FIELD(arg0, s32 **, 0x34) = D_80083060;
    } else {
        var_s4 = 0x5E;
        M2C_FIELD(arg0, s32 **, 0x34) = D_80083110;
        M2C_FIELD(arg0, s32 **, 0x30) = D_800768D0;
    }
    temp_s2 = var_s2 + 1;
    func_80013B4C((var_s2 << 6) + D_80081CE8, D_800768E8, D_8008B428, 5, NULL);
    temp_s2_2 = temp_s2 + 1;
    func_80013B4C((temp_s2 << 6) + D_80081CE8, D_800768F0, D_8008B428 - 0x20, -1, NULL);
    func_80013B4C((temp_s2_2 << 6) + D_80081CE8, D_80076904, D_8008B428 - 0x10, -1, NULL);
    func_80023E08(arg0, 0xA, var_s4, 0x14A, temp_s2_2 + 1);
    func_8002FF2C(D_8008B428 - 0x84);
}

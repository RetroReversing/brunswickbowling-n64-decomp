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

extern signed char D_80089B18;
extern signed char D_80089B19;
extern signed char D_80089B1A;
extern signed char D_80089B20;
extern signed char D_80089B21;
extern signed char D_80089B22;
extern signed char D_80089B28;
extern signed char D_80089B29;
extern signed char D_80089B2A;
extern signed char D_80089B30;
extern signed char D_80089B31;
extern signed char D_80089B32;
s32 func_80036E08();
extern char D_80075A20[];
extern char D_80076580[];
extern char D_80089930[];
extern char D_80089A14[];
extern char D_80089A54[];
extern char D_80089A94[];
extern char D_80089AD4[];
extern char D_80089B14[];
extern char D_80089B1C[];
extern char D_80089B24[];
extern char D_80089B2C[];

void func_8002A70C(void) {
    void *temp_v0;

    M2C_FIELD(D_80089930, s32 **, 0x10) = D_80075A20;
    temp_v0 = D_80089930 + 8;
    M2C_FIELD(temp_v0, void **, 4) = temp_v0;
    M2C_FIELD(D_80089930, void **, 8) = temp_v0;
    M2C_FIELD(D_80089930, s32 **, 0x10) = D_80076580;
    func_80036E08(D_80089A14, 0x88, 0xBF);
    func_80036E08(D_80089A54, 0xE4, 0xBF);
    func_80036E08(D_80089A94, 0x140, 0xBF);
    func_80036E08(D_80089AD4, 0x19C, 0xBF);
    M2C_FIELD(D_80089B14, s32 **, 0) = D_80089A94;
    D_80089B18 = 1;
    D_80089B19 = 0x15;
    D_80089B1A = 0;
    M2C_FIELD(D_80089B1C, s32 **, 0) = D_80089A54;
    D_80089B20 = 1;
    D_80089B21 = 0xD;
    D_80089B22 = 0;
    M2C_FIELD(D_80089B24, s32 **, 0) = D_80089A14;
    D_80089B28 = 1;
    D_80089B29 = 9;
    D_80089B2A = 0;
    M2C_FIELD(D_80089B2C, s32 **, 0) = D_80089AD4;
    D_80089B30 = 1;
    D_80089B31 = 0x11;
    D_80089B32 = 0;
}

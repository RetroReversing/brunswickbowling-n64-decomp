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

extern signed char D_8008BA4C;
extern signed char D_8008BA4D;
extern signed char D_8008BA4E;
extern signed char D_8008BA54;
extern signed char D_8008BA55;
extern signed char D_8008BA56;
extern signed char D_8008BA5C;
extern signed char D_8008BA5D;
extern signed char D_8008BA5E;
extern signed char D_8008BA64;
extern signed char D_8008BA65;
extern signed char D_8008BA66;
extern signed char D_8008BA6C;
extern signed char D_8008BA6D;
extern signed char D_8008BA6E;
extern signed char D_8008BA74;
extern signed char D_8008BA75;
extern signed char D_8008BA76;
extern signed char D_8008BA7C;
extern signed char D_8008BA7D;
extern signed char D_8008BA7E;
extern signed char D_8008BA84;
extern signed char D_8008BA85;
extern signed char D_8008BA86;
extern signed char D_8008BA8C;
extern signed char D_8008BA8D;
extern signed char D_8008BA8E;
s32 func_80036E08();
extern char D_80075A20[];
extern char D_800778D0[];
extern char D_8008B470[];
extern char D_8008B808[];
extern char D_8008B848[];
extern char D_8008B888[];
extern char D_8008B8C8[];
extern char D_8008B908[];
extern char D_8008B948[];
extern char D_8008B988[];
extern char D_8008B9C8[];
extern char D_8008BA08[];
extern char D_8008BA48[];
extern char D_8008BA50[];
extern char D_8008BA58[];
extern char D_8008BA60[];
extern char D_8008BA68[];
extern char D_8008BA70[];
extern char D_8008BA78[];
extern char D_8008BA80[];
extern char D_8008BA88[];

void func_80033E48(void) {
    void *temp_v0;

    M2C_FIELD(D_8008B470, s32 **, 0x10) = D_80075A20;
    temp_v0 = D_8008B470 + 8;
    M2C_FIELD(temp_v0, void **, 4) = temp_v0;
    M2C_FIELD(D_8008B470, void **, 8) = temp_v0;
    M2C_FIELD(D_8008B470, s32 **, 0x10) = D_800778D0;
    func_80036E08(D_8008B808, 0x54, 0xBF);
    func_80036E08(D_8008B848, 0x84, 0xBF);
    func_80036E08(D_8008B888, 0xB4, 0xBF);
    func_80036E08(D_8008B8C8, 0xE4, 0xBF);
    func_80036E08(D_8008B908, 0x114, 0xBF);
    func_80036E08(D_8008B948, 0x144, 0xBF);
    func_80036E08(D_8008B988, 0x174, 0xBF);
    func_80036E08(D_8008B9C8, 0x1A4, 0xBF);
    func_80036E08(D_8008BA08, 0x1F0, 0xBF);
    M2C_FIELD(D_8008BA48, s32 **, 0) = D_8008B808;
    D_8008BA4C = 1;
    D_8008BA4D = 9;
    D_8008BA4E = 0;
    M2C_FIELD(D_8008BA50, s32 **, 0) = D_8008B848;
    D_8008BA54 = 1;
    D_8008BA55 = 9;
    D_8008BA56 = 0;
    M2C_FIELD(D_8008BA58, s32 **, 0) = D_8008B888;
    D_8008BA5C = 1;
    D_8008BA5D = 9;
    D_8008BA5E = 0;
    M2C_FIELD(D_8008BA60, s32 **, 0) = D_8008B8C8;
    D_8008BA64 = 1;
    D_8008BA65 = 9;
    D_8008BA66 = 0;
    M2C_FIELD(D_8008BA68, s32 **, 0) = D_8008B908;
    D_8008BA6C = 1;
    D_8008BA6D = 9;
    D_8008BA6E = 0;
    M2C_FIELD(D_8008BA70, s32 **, 0) = D_8008B948;
    D_8008BA74 = 1;
    D_8008BA75 = 9;
    D_8008BA76 = 0;
    M2C_FIELD(D_8008BA78, s32 **, 0) = D_8008B988;
    D_8008BA7C = 1;
    D_8008BA7D = 9;
    D_8008BA7E = 0;
    M2C_FIELD(D_8008BA80, s32 **, 0) = D_8008B9C8;
    D_8008BA84 = 2;
    D_8008BA85 = 9;
    D_8008BA86 = 0x29;
    M2C_FIELD(D_8008BA88, s32 **, 0) = D_8008BA08;
    D_8008BA8C = 2;
    D_8008BA8D = 9;
    D_8008BA8E = 0;
}

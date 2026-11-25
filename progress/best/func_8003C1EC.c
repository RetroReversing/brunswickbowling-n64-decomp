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

extern signed char D_8008DA2C;
s32 func_80023DC0();
s32 func_80029B08();
void *func_8003FE3C();
s32 func_8005978C();
extern char D_800786A4[];
extern char D_800786A8[];
extern char D_800786B8[];
extern char D_800786CC[];
extern char D_800786DC[];
extern char D_800786EC[];
extern char D_800786F8[];
extern char D_80078710[];
extern char D_80078720[];
extern char D_80078730[];
extern char D_8007F618[];
extern s32 D_80083A70;
extern char D_8008D8EC[];
extern char D_8008D9EC[];
extern char D_8008E9B0[];

void func_8003C1EC(void) {
    s32 *var_a0;
    s32 *var_a1;
    s32 var_s0;
    void *temp_s0;

    temp_s0 = (func_80023DC0() * 0x5C) + D_8007F618;
    func_8005978C(D_8008D9EC, D_800786A4, temp_s0);
    if ((M2C_FIELD(temp_s0, u8 *, 0x18) ^ 2) == 0) {
        func_8005978C(D_8008D9EC + 0x20, D_800786A8);
        D_8008DA2C = 0;
        func_8005978C(D_8008D9EC + 0x60, D_800786B8);
        func_8005978C(D_8008D9EC + 0x80, D_800786CC);
        func_8005978C(D_8008D9EC + 0xA0, D_800786DC);
        var_s0 = 7;
        var_a0 = D_8008D9EC + 0xC0;
        var_a1 = D_800786EC;
    } else {
        var_s0 = 6;
        func_8005978C(D_8008D9EC + 0x20, D_800786F8, func_8003FE3C(D_8008E9B0, M2C_FIELD(temp_s0, u8 *, 0x2C)));
        D_8008DA2C = 0;
        func_8005978C(D_8008D9EC + 0x60, D_80078710);
        func_8005978C(D_8008D9EC + 0x80, D_80078720);
        var_a0 = D_8008D9EC + 0xA0;
        var_a1 = D_80078730;
    }
    func_8005978C(var_a0, var_a1);
    func_80029B08(D_80083A70, D_8008D8EC, var_s0);
}

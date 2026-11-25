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
s32 func_80047948();
extern char D_800769AC[];
extern char D_80081CE8[];
extern char D_80083744[];
extern char D_80089228[];
extern s32 D_80089DC4;
extern char D_8008FE44[];

void func_8002BBA0(void *arg0) {
    void *temp_a1;
    void *temp_v0;

    func_80047948(D_8008FE44, 0xC2960000, 0xC1F00000, 0);
    func_80013B4C(D_80081CE8, D_80089DC4, D_80089228, 0xF, 0);
    M2C_FIELD(arg0, s32 **, 0x30) = D_800769AC;
    M2C_FIELD(arg0, s32 **, 0x34) = D_80083744;
    func_80023E08(arg0, 0xA, 0x68, 0x14A, 1);
    temp_a1 = D_80089228 - 0x78;
    temp_v0 = M2C_FIELD(temp_a1, void **, 4);
    M2C_FIELD(D_80089228, s32 *, -0x78) = M2C_FIELD(temp_v0, s32 (**)(void *, void *, s32), 0xC)(M2C_FIELD(temp_v0, s16 *, 8) + temp_a1, temp_a1, 0);
}

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

extern int D_8008923C;
s32 func_80013B4C();
s32 func_80023E08();
s32 func_8003E8E8();
s32 func_8003EBF0();
extern char D_80046400[];
extern char D_80079990[];
extern char D_8007999C[];
extern char D_80081CE8[];
extern char D_80083744[];
extern char D_80083AF0[];
extern char D_80089238[];

void func_80046428(void *arg0) {
    void *temp_a1;
    void *temp_v0;

    func_80013B4C(D_80081CE8, D_80079990, D_80089238, -1, D_80046400);
    M2C_FIELD(arg0, s32 **, 0x30) = D_8007999C;
    M2C_FIELD(arg0, s32 **, 0x34) = D_80083744;
    func_80023E08(arg0, 0, 0, 0, 1);
    do { temp_a1 = D_80089238 - 0x88; } while (0);
    temp_v0 = M2C_FIELD(temp_a1, void **, 4);
    M2C_FIELD(D_80089238, s32 *, -0x88) = M2C_FIELD(temp_v0, s32 (**)(void *, void *, s32), 0xC)(M2C_FIELD(temp_v0, s16 *, 8) + temp_a1, temp_a1, 0);
    func_8003E8E8(D_80083AF0);
    func_8003EBF0(D_80083AF0);
}

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

s32 func_800504D8();
s32 func_80050BE4();
s32 func_800548DC();
extern s32 D_80095CF0;
extern s32 D_8009DA78;
extern s32 D_8009DA7C;
extern char D_B0287D00[];

void func_80050AE8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp_s2;
    s32 temp_v1;

    temp_v1 = arg4 & 7;
    switch (temp_v1) {                              /* irregular */
    case 1:
    case 0:
        func_800504D8(arg0 + D_B0287D00, arg2, arg3);
        break;
    case 2:
        temp_s2 = D_80095CF0;
        D_80095CF0 = 0;
        func_800504D8(arg0 + D_B0287D00, D_8009DA7C, (arg1 + 0xF) & ~0xF);
        func_800548DC(D_8009DA7C + 4, arg2, D_8009DA7C + (D_8009DA78 + 0xFFFF0000), 0x10000);
        D_80095CF0 = temp_s2;
        break;
    }
    func_80050BE4(arg2, arg0, arg5);
}

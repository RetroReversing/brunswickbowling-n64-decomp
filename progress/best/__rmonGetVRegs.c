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

s32 func_8005FEB0(void *, s32, M2C_UNK);            /* extern */
M2C_UNK func_80068F40(M2C_UNK, s32);                /* extern */
s32 func_80068F80(M2C_UNK);                         /* extern */
s32 func_8006A2C0();                                /* extern */
M2C_UNK func_8006A328();                            /* extern */
M2C_UNK __rmonSendHeader(s32 *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK __rmonSendData(M2C_UNK, M2C_UNK);            /* extern */
extern s32 D_800AC6C0;
extern s32 D_800AC6C4;
extern s32 D_800AC6C8;
extern s32 D_800AC6CC;
extern s32 D_800AC6D0;
extern s32 D_800AC6D4;

s32 __rmonGetVRegs(void *arg0) {
    s32 sp10;
    u8 sp14;
    s16 sp16;
    s32 sp1C;
    s32 sp220;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_v0;

    var_v0 = -4;
    if (func_8006A2C0() == 0) {
        sp1C = M2C_FIELD(arg0, s32 *, 0xC);
        var_s0 = 0;
        sp16 = 0;
        sp10 = 0x210;
        sp220 = 0x210;
        sp14 = M2C_FIELD(arg0, u8 *, 4);
        do {
            var_s0 += func_8005FEB0(&sp220 + var_s0, 4 - var_s0, 8);
        } while (var_s0 < 4);
        __rmonSendHeader(&sp10, 0x10, 1);
        D_800AC6C0 = func_80068F80(0x04080000);
        D_800AC6C4 = func_80068F80(0x04001000);
        D_800AC6C8 = func_80068F80(0x04000000);
        D_800AC6CC = func_80068F80(0x04000004);
        D_800AC6D0 = func_80068F80(0x04000008);
        var_s0_2 = 0;
        D_800AC6D4 = func_80068F80(0x0400000C);
        do {
            func_80068F40(0x04001000, ((((var_s0_2 & 0x1F) << 0x10) | 0xE8000000) & 0xFFFF07FF) | 0x2000);
            func_80068F40(0x04080000, 0);
            var_s0_2 += 1;
            func_8006A328();
            __rmonSendData(0x04000000, 0x10);
        } while (var_s0_2 < 0x20);
        func_80068F40(0x04000000, D_800AC6C8);
        func_80068F40(0x04000004, D_800AC6CC);
        func_80068F40(0x04000008, D_800AC6D0);
        func_80068F40(0x0400000C, D_800AC6D0);
        func_80068F40(0x04001000, D_800AC6C4);
        func_80068F40(0x04080000, D_800AC6C0);
        var_v0 = 0;
    }
    return var_v0;
}

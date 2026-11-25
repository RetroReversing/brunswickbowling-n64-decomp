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

M2C_UNK __rmonSendReply(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80068F40(M2C_UNK, s32);                /* extern */
s32 func_80068F80(M2C_UNK);                         /* extern */
s32 func_8006A2C0();                                /* extern */
M2C_UNK func_8006A328();                            /* extern */
extern s32 D_800AC6C0;
extern s32 D_800AC6C4;
extern s32 D_800AC6C8;

s32 __rmonSetSRegs(void *arg0) {
    M2C_UNK sp10;
    u8 sp14;
    s16 sp16;
    s32 sp1C;
    s32 temp_a1;
    s32 var_s0;
    s32 var_v0;
    void *var_s1;

    var_v0 = -4;
    if (func_8006A2C0() == 0) {
        D_800AC6C0 = func_80068F80(0x04080000);
        D_800AC6C4 = func_80068F80(0x04001000);
        var_s0 = 0;
        var_s1 = arg0;
        D_800AC6C8 = func_80068F80(0x04000000);
        __repair_rows: {
            temp_a1 = M2C_FIELD(var_s1, s32 *, 0x10);
            var_s1 += 4;
            func_80068F40(0x04000000, temp_a1);
            func_80068F40(0x04001000, ((var_s0 & 0x1F) << 0x10) | 0x8C000000);
            func_80068F40(0x04080000, 0);
            var_s0 += 1;
            func_8006A328();
        }
if (var_s0 < 0x20) goto __repair_rows;
        func_80068F40(0x04000000, D_800AC6C8);
        func_80068F40(0x04001000, D_800AC6C4);
        func_80068F40(0x04080000, D_800AC6C0);
        func_80068F40(0x04040004, M2C_FIELD(arg0, s32 *, 0x90));
        func_80068F40(0x04040000, M2C_FIELD(arg0, s32 *, 0x94));
        func_80068F40(0x04080000, M2C_FIELD(arg0, s32 *, 0x9C) & 0xFFF);
        func_80068F40(0x0404000C, M2C_FIELD(arg0, s32 *, 0xA0));
        func_80068F40(0x04040010, M2C_FIELD(arg0, s32 *, 0xA4));
        sp1C = M2C_FIELD(arg0, s32 *, 0xC);
        sp16 = 0;
        sp14 = M2C_FIELD(arg0, u8 *, 4);
        __rmonSendReply(&sp10, 0x10, 1);
        var_v0 = 0;
    }
    return var_v0;
}

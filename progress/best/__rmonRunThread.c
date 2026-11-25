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

s32 func_800687BC(M2C_UNK, M2C_UNK, s32);           /* extern */
s32 __rmonSetSingleStep(s32, s32);                        /* extern */
M2C_UNK func_80068AE8(M2C_UNK *);                   /* extern */
M2C_UNK __rmonWriteWordTo(M2C_UNK, s32);                /* extern */
s32 __rmonReadWordAt(M2C_UNK);                         /* extern */
s32 func_8006A2C0();                                /* extern */
M2C_UNK func_8006A328();                            /* extern */
M2C_UNK func_8006A33C();                            /* extern */
M2C_UNK __rmonGetThreadStatus(M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK __rmonSendReply(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK osStartThread(void *);                      /* extern */
void *func_8006C950();                              /* extern */
extern s8 D_800A8380;

s32 __rmonRunThread(void *arg0) {
    M2C_UNK sp10;
    u8 sp14;
    s16 sp16;
    s32 sp1C;
    M2C_UNK sp20;
    s32 var_v0;
    u8 temp_v1;
    void *var_s0;

    temp_v1 = M2C_FIELD(arg0, u8 *, 9);
    switch (temp_v1) {                              /* irregular */
    case 0:
        var_s0 = func_8006C950();
        if (M2C_FIELD(var_s0, s32 *, 4) != -1) {
loop_5:
            if (M2C_FIELD(var_s0, s32 *, 0x14) != M2C_FIELD(arg0, s32 *, 0xC)) {
                var_s0 = M2C_FIELD(var_s0, void **, 0xC);
                if (M2C_FIELD(var_s0, s32 *, 4) != -1) {
                    goto loop_5;
                }
            }
            if (M2C_FIELD(var_s0, s32 *, 4) == -1) {
                goto block_8;
            }
            var_v0 = -4;
            if (M2C_FIELD(var_s0, u16 *, 0x10) == 1) {
                M2C_FIELD(var_s0, u16 *, 0x12) = (u16) (M2C_FIELD(var_s0, u16 *, 0x12) & 0xFFFC);
                if (M2C_FIELD(arg0, s32 *, 0x10) & 2) {
                    M2C_FIELD(var_s0, s32 *, 0x11C) = (s32) M2C_FIELD(arg0, s32 *, 0x14);
                }
                if (M2C_FIELD(arg0, s32 *, 0x10) & 1) {
                    var_v0 = -4;
                    if (__rmonSetSingleStep(M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(var_s0, s32 *, 0x11C)) != 0) {
                        goto block_26;
                    }
                } else {
block_26:
                    sp16 = 0;
                    sp14 = M2C_FIELD(arg0, u8 *, 4);
                    sp1C = M2C_FIELD(arg0, s32 *, 0xC);
                    __rmonSendReply(&sp10, 0x10, 1);
                    var_v0 = 1;
                    if (1 != 0) {
                        osStartThread(var_s0);
                        var_v0 = 1;
                    }
                }
            }
            return var_v0;
        }
block_8:
        return -2;
    case 1:
        var_v0 = -4;
        if (func_8006A2C0() == 0) {
            if (M2C_FIELD(arg0, s32 *, 0x10) & 2) {
                __rmonWriteWordTo(0x04080000, M2C_FIELD(arg0, s32 *, 0x14) + 0xFBFFF000);
            }
            if (M2C_FIELD(arg0, s32 *, 0x10) & 1) {
                if (!(func_800687BC(1, 0x3E8, __rmonReadWordAt(0x04080000) + 0x04001000) & 3)) {
                    func_8006A328();
                }
                func_8006A328();
                D_800A8380 = 1;
            } else {
                D_800A8380 = 0;
                func_8006A33C();
            }
            sp16 = 0;
            sp14 = M2C_FIELD(arg0, u8 *, 4);
            sp1C = M2C_FIELD(arg0, s32 *, 0xC);
            __rmonSendReply(&sp10, 0x10, 1);
            if (M2C_FIELD(arg0, s32 *, 0x10) & 1) {
                __rmonGetThreadStatus(1, 0x3E8, &sp20);
                func_80068AE8(&sp20);
                __rmonSendReply(&sp20, 0x4C, 2);
            }
            return 0;
        }
        /* Duplicate return node #28. Try simplifying control flow for better match */
        return var_v0;
    default:
        return -4;
    }
}

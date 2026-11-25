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

extern int D_8007F668;
extern int D_8007F664;
extern int D_8007F660;
s32 func_80011D9C();
s32 func_80012414();
s32 func_8002CDC4();
s32 func_8002D26C();
extern s32 D_8007D704;
extern char D_8007F618[];
extern char D_80081AD0[];
extern s32 D_80089944;
extern char D_80089E00[];
extern char D_8008A328[];
extern char D_8008A3B8[];
extern s32 D_8008AB10;

void func_8003051C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void **temp_a0;
    void **temp_a0_2;
    void **temp_a0_3;
    void *temp_s0;
    void *temp_v0;

    temp_s0 = (arg1 * 0x5C) + D_8007F618;
    *((arg2 * 4) + D_80081AD0) = temp_s0;
    if (D_80089944 != 0) {
        temp_a0 = (arg2 * 0x18) + D_8008A328;
        M2C_FIELD(temp_s0, void ***, 0x44) = temp_a0;
        func_8002CDC4(temp_a0);
        return;
    }
    if (D_8008AB10 != 0) {
        temp_a0_2 = (arg2 * 0x11C) + D_8008A3B8;
        M2C_FIELD(temp_s0, void ***, 0x44) = temp_a0_2;
        func_8002D26C(temp_a0_2);
        return;
    }
    temp_a0_3 = (arg2 * 0xDC) + D_80089E00;
    M2C_FIELD(temp_s0, void ***, 0x44) = temp_a0_3;
    temp_v0 = *temp_a0_3;
    M2C_FIELD(temp_v0, s32 (**)(void *), 0xC)(temp_a0_3 + M2C_FIELD(temp_v0, s16 *, 8));
    if (D_8007D704 != 0) {
        D_8007F668 = 0;
        D_8007F664 = 0;
        D_8007F660 = 0;
        return;
    }
    if ((arg3 != 0) && ((M2C_FIELD(temp_s0, u8 *, 0x18) ^ 2) == 0)) {
        if (M2C_FIELD(temp_s0, s32 *, 0x50) != 0) {
            func_80011D9C(temp_s0);
        }
        if (M2C_FIELD(temp_s0, s32 *, 0x48) != 0) {
            func_80012414(temp_s0);
        }
    }
}

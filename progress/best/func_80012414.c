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

extern unsigned char D_8008B3B8;
extern unsigned char D_8008B3B9;
s32 func_8002AAC0();
s32 func_8002AB14();
s32 func_8002E700();
s32 func_8005AAD0();
extern char D_8008B3A4[];

void func_80012414(void *arg0) {
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 var_s0;
    s32 var_s1;
    u8 temp_v0;
    void *temp_s5;

    temp_s5 = M2C_FIELD(arg0, void **, 0x48);
    func_8002E700(temp_s5);
    M2C_FIELD(temp_s5, u16 *, 8) = (u16) M2C_FIELD(arg0, u8 *, 0x3E);
    M2C_FIELD(temp_s5, s16 *, 0x10) = (s16) M2C_FIELD(arg0, u8 *, 0x3F);
    M2C_FIELD(temp_s5, s16 *, 0x12) = (s16) M2C_FIELD(arg0, u8 *, 0x40);
    var_s1 = 0;
    M2C_FIELD(temp_s5, s16 *, 0x14) = (s16) M2C_FIELD(arg0, u8 *, 0x41);
    var_s0 = 0;
    M2C_FIELD(temp_s5, s32 *, 4) = (s32) (M2C_FIELD(arg0, u16 *, 0x38) - M2C_FIELD(arg0, u16 *, 0x3C));
loop_1:
    if (var_s0 < func_8005AAD0(arg0)) {
        temp_v0 = *(u8 *)(arg0 + var_s0);
        var_s0 += 1;
        var_s1 += temp_v0;
        goto loop_1;
    }
    func_8002AAC0(var_s1 + (D_8008B3B8 * 0x11) + (D_8008B3B9 * 0x9D));
    temp_s1 = M2C_FIELD(temp_s5, u16 *, 8) * 0xB;
    temp_s0 = func_8002AB14(M2C_FIELD(arg0, u8 *, 0x2E) * 0x14);
    temp_s2 = func_8002AB14(M2C_FIELD(arg0, u8 *, 0x2E) * 0x14);
    temp_v0_2 = (temp_s1 * (temp_s0 + temp_s2 + func_8002AB14(M2C_FIELD(arg0, u8 *, 0x2E) * 0x14) + 0x1A9)) / 1000;
    M2C_FIELD(temp_s5, s16 *, 0x1E) = temp_v0_2;
    M2C_FIELD(temp_s5, s16 *, 0x20) = (s16) (temp_s1 - temp_v0_2);
    temp_s2_2 = M2C_FIELD(temp_s5, u16 *, 8) * 5;
    temp_s0_2 = func_8002AB14(M2C_FIELD(arg0, u8 *, 0x2E) * 0x14);
    temp_s1_2 = func_8002AB14(M2C_FIELD(arg0, u8 *, 0x2E) * 0x14);
    temp_v0_3 = (temp_s2_2 * (temp_s0_2 + temp_s1_2 + func_8002AB14(M2C_FIELD(arg0, u8 *, 0x2E) * 0x14) + 0x307)) / 1000;
    M2C_FIELD(temp_s5, s16 *, 0x22) = temp_v0_3;
    M2C_FIELD(temp_s5, s16 *, 0x24) = (s16) (temp_s2_2 - temp_v0_3);
    func_8002AAC0(-1);
}

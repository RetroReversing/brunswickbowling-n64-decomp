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

s32 func_8005E850();
s32 func_8005F130();
s32 func_8005FA00();
s32 func_8005FB0C();
s32 func_8005FB54();
s32 osAiSetFrequency();
s32 osCreateThread();
s32 osStartThread();
extern char D_800A5B50[];
extern s32 D_800A5D00;
extern s32 D_800A5D04;
extern s32 D_800A5D08;
extern char D_800A5D10[];
extern s32 func_8005F878;

void func_8005F740(void *arg0, s32 arg1, s8 arg2) {
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s8 sp34;
    s32 temp_a0;
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v0_2;
    u32 var_s0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 4);
    sp1C = temp_v0;
    sp18 = temp_v0;
    sp20 = M2C_FIELD(arg0, s32 *, 0x28);
    sp28 = func_8005F130(M2C_FIELD(arg0, s32 *, 0x38), M2C_FIELD(arg0, s32 *, 0x3C));
    sp34 = arg2;
    var_s0 = 0;
    sp30 = osAiSetFrequency(M2C_FIELD(arg0, s32 *, 0x2C));
    sp2C = func_8005FB54();
    func_8005E850(D_800A5D10, &sp18);
    temp_s1 = func_8005FA00(M2C_FIELD(arg0, s32 *, 0x34), sp30, arg1, 0x1E);
    D_800A5D08 = func_8005FB0C(M2C_FIELD(arg0, s32 *, 0x30) * 8);
    D_800A5D04 = func_8005FB0C(0x18);
    do {
        temp_a0 = var_s0 * 8;
        var_s0 += 1;
        *(s32 *)(temp_a0 + D_800A5D04) = func_8005FB0C(temp_s1 * 4);
    } while (var_s0 < 3U);
    temp_v0_2 = func_8005FB0C(0x2000);
    D_800A5D00 = temp_v0_2;
    osCreateThread(D_800A5B50, 3, &func_8005F878, 0, temp_v0_2 + 0x2000, M2C_FIELD(arg0, s32 *, 0xC));
    osStartThread(D_800A5B50);
}

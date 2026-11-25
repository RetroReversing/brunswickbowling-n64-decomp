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

s32 func_8001C210();
s32 func_80039BC4();
extern s32 D_8008BA98;
extern char D_8008CEB0[];

void func_80021DD0(void *arg0, s32 arg1) {
    void *sp18;
    void *sp20;
    void *sp28;
    void *sp30;
    s32 sp38;
    s32 temp_a1;
    s32 temp_v0;
    s32 var_v1;

    M2C_FIELD(arg0, s32 *, 0x14) = arg1;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = -1;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
loop_1:
    temp_a1 = *(s32 *)((M2C_FIELD(arg0, s32 *, 0x40) * 4) + M2C_FIELD(arg0, s32 *, 0x14));
    if (temp_a1 != 0) {
        temp_v0 = func_80039BC4(D_8008CEB0, temp_a1);
        var_v1 = M2C_FIELD(arg0, s32 *, 0x44);
        if (var_v1 < temp_v0) {
            var_v1 = temp_v0;
        }
        M2C_FIELD(arg0, s32 *, 0x44) = var_v1;
        M2C_FIELD(arg0, s32 *, 0x40) += 1;
        goto loop_1;
    }
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) ((M2C_FIELD(arg0, s32 *, 0x44) + 0x53) & ~3);
    M2C_FIELD(arg0, s32 *, 0x48) = (s32) (((M2C_FIELD(arg0, s32 *, 0x40) - 1) * 0xF) + 0x36);
    sp18 = arg0;
    sp30 = arg0;
    sp28 = arg0;
    sp38 = D_8008BA98;
    func_8001C210(arg0, &sp38);
    sp20 = sp28;
}

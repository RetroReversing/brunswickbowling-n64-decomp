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

s32 func_8004CF14();
s32 func_8004E194();
s32 func_800661D0();
s32 func_8007175C();
extern s32 D_8009CC48;
extern u16 D_8009CD90;
extern s32 D_8009CDD8;

void func_8004E304(void *arg0, void *arg1, s32 arg2) {
    s32 temp_a3;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 var_a1;
    u32 var_a2;

    func_8004CF14(arg0, 0, 0x1A8);
    var_a1 = 1;
    M2C_FIELD(arg0, s32 *, 0) = arg2;
    M2C_FIELD(arg0, s16 *, 0x70) = 0x6000;
    temp_a3 = M2C_UNALIGNED32(M2C_FIELD(arg1, s32 *, 0));
    M2C_FIELD(arg0, s32 *, 0x74) = temp_a3;
    M2C_FIELD(arg0, s32 *, 0x78) = M2C_UNALIGNED32(M2C_FIELD(arg1, u16 *, 4));
    var_a2 = 0;
    M2C_FIELD(arg0, s16 *, 0x94) = (s16) ((s32) (M2C_FIELD(arg1, u16 *, 4) << 0x10) >> 0x11);
    M2C_FIELD(arg0, s32 *, 0x98) = 0;
    M2C_FIELD(arg0, s32 *, 0x9C) = 0x10001;
    M2C_FIELD(arg0, s16 *, 0x96) = (s16) ((s32) (M2C_FIELD(arg1, u16 *, 6) << 0x10) >> 0x11);
    temp_v0 = M2C_FIELD(arg1, u16 *, 4) * 2;
    M2C_FIELD(arg0, s16 *, 0x88) = temp_v0;
    M2C_FIELD(arg0, s16 *, 0x80) = temp_v0;
    M2C_FIELD(arg0, s16 *, 0x8C) = 0x1FF;
    M2C_FIELD(arg0, s16 *, 0x84) = 0x1FF;
    temp_v0_2 = M2C_FIELD(arg1, u16 *, 6) * 2;
    M2C_FIELD(arg0, s16 *, 0x8A) = temp_v0_2;
    M2C_FIELD(arg0, s16 *, 0x82) = temp_v0_2;
loop_1:
    var_a2 += 1;
    if (!(D_8009CD90 & var_a1)) {
        M2C_FIELD(arg0, s16 *, 0x72) = var_a1;
        D_8009CD90 |= var_a1;
    } else {
        var_a1 *= 2;
        if (var_a2 < 0x10U) {
            goto loop_1;
        }
    }
    func_800661D0(arg0 + ((D_8009CC48 << 6) + 0x120), var_a1, var_a2, temp_a3);
    func_8004E194(arg0, 0x41C80000);
    func_8007175C(D_8009CDD8, arg0);
}

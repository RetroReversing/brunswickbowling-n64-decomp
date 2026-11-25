/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O1, tried by autopilot */
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

s32 func_8004D60C();
s32 func_80052ABC();
u64 func_800570C0();
s32 osRecvMesg();
s32 func_8006CF10();
s32 osViBlack();
u64 osGetTime();
extern s32 D_80097030;
extern char D_8009CBC0[];
extern s32 D_8009CBE0;
extern u32 D_8009DB68;
extern u32 D_8009DB6C;
extern u32 D_8009DE10;
extern char D_800A1FD0[];
extern s32 D_800A2100;
extern u32 D_800A2104;
extern s32 D_800A2108;

void func_800528C0(void) {
    s16 *sp10;
    s16 temp_v1;
    u32 temp_a1;
    u32 temp_v1_2;
    u32 temp_v1_3;
    u64 temp_ret;
    void *temp_s1;

    temp_s1 = D_800A1FD0 - 0x21B0;
loop_2:
loop_3:
    osRecvMesg(D_800A1FD0, &sp10, 1);
    temp_v1 = *sp10;
    if (temp_v1 == 2) {
        temp_ret = osGetTime();
        temp_v1_2 = (u32) temp_ret;
        temp_a1 = temp_v1_2 - D_800A2104;
        temp_v1_3 = (u32) func_800570C0((((temp_ret - D_800A2100) - (temp_v1_2 < (u32) D_800A2104)) << 6) | (temp_a1 >> 0x1A), temp_a1 << 6, 0, 0xBB8);
        M2C_FIELD(temp_s1, s32 *, 0x220C) = 3;
        D_8009DB6C = temp_v1_3;
        D_80097030 -= 1;
        goto loop_2;
    }
    if (temp_v1 < 3) {
        if (temp_v1 != 1) {

        } else {
            D_8009DE10 += 1;
            D_800A2108 += 1;
            if ((M2C_FIELD(temp_s1, s32 *, 0x220C) == 3) && (func_8006CF10(D_800A1FD0) == *(((D_8009CBE0 ^ 1) * 4) + D_8009CBC0))) {
                if ((u32) D_8009DE10 >= (u32) D_8009DB68) {
                    M2C_FIELD(temp_s1, s32 *, 0x220C) = 0;
                }
            }
        }
        goto loop_3;
    }
    if (temp_v1 != 4) {
        goto loop_3;
    }
    func_80052ABC(D_800A1FD0);
    func_8004D60C();
    D_80097030 += 2;
    osViBlack(1);
    goto loop_2;
}

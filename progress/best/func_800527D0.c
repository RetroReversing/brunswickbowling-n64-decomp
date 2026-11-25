/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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

M2C_UNK func_800527A0(M2C_UNK, u32 *);              /* extern */
u64 func_800570C0(s32, s32, M2C_UNK, M2C_UNK);      /* extern */
u64 osGetTime();                                    /* extern */
extern u32 D_8009DB70;
extern s32 D_8009DB84;
extern s32 D_8009DE10;
extern s32 D_800A2100;
extern u32 D_800A2104;

void func_800527D0(void) {
    u32 temp_a1;
    u32 temp_v1;
    u64 temp_ret;
    u64 temp_ret_2;

    temp_ret = osGetTime();
    temp_v1 = (u32) temp_ret;
    temp_a1 = temp_v1 - D_800A2104;
    D_8009DB70 = (u32) func_800570C0((((temp_ret - D_800A2100) - (temp_v1 < (u32) D_800A2104)) << 6) | (temp_a1 >> 0x1A), temp_a1 << 6, 0, 0xBB8);
    func_800527A0(0, &D_8009DB70);
    temp_ret_2 = osGetTime();
    D_800A2100 = temp_ret_2;
    D_800A2104 = (u32) temp_ret_2;
    D_8009DB84 = D_8009DE10;
}

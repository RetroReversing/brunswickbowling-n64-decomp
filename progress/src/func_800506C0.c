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

s32 **func_8004C9A8(s32, s32, s32);             /* extern */
s32 func_800504D8();
s32 func_80050E30();
extern s32 D_8009C898;
extern s32 D_8009DA60;
extern s32 *D_8009DA70;
extern s32 D_8009DA74;
extern s32 D_8009DA78;
extern s32 D_8009DA7C;
extern char D_B0287D00[];

void func_800506C0(s32 arg0, s32 arg1) {
    s32 **temp_v0;
    s32 *temp_a1;
    s32 temp_s0;

    D_8009DA7C = arg0;
    D_8009DA78 = arg1;
    func_800504D8(D_B0287D00, &D_8009DA60, 4);
    if (D_8009DA60 != 0) {
        temp_s0 = D_8009DA60 * 0x28;
        temp_v0 = func_8004C9A8(D_8009C898, temp_s0, 0x10);
        if (temp_v0 != NULL) {
            temp_a1 = *temp_v0;
            D_8009DA70 = temp_a1;
            func_800504D8(D_B0287D00 + 8, temp_a1, temp_s0);
        } else {
            D_8009DA60 = 0;
        }
    }
    D_8009DA74 = 0;
    func_80050E30();
}

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

M2C_UNK __rmonSendReply(s32 *, s32, M2C_UNK, s32);    /* extern */
extern s32 D_800A8390;
extern u8 D_800A8394;
extern s16 D_800A8396;
extern s32 D_800A839C;
extern s32 D_800A83A0;
extern s32 D_800A83A4;
extern s32 D_800A83A8;
extern s16 D_800A83AC;
extern s32 D_800A83B0;
extern s32 D_800A83B4;
extern s32 D_800A83B8;
extern s16 D_800A83BC;
extern s32 D_800A83C0;
extern s32 D_800A83C4;
extern s32 D_800A83C8;
extern s16 D_800A83CC;
extern s32 D_800A83D0;
extern s32 D_800A83D4;
extern s32 D_800A83D8;
extern s16 D_800A83DC;
extern s32 D_800A83E0;
extern s32 D_800A83E4;
extern s32 D_800A83E8;
extern s16 D_800A83EC;
extern s32 D_800A83F0;
extern s32 D_800A83F4;
extern s32 D_800A83F8;
extern s16 D_800A83FC;
extern s32 D_800A8400;

s32 __rmonGetRegions(void *arg0) {
    s32 temp_a3;
    s32 temp_v0;

    temp_v0 = (-(M2C_FIELD(arg0, u8 *, 9) != 1) & 6) | 2;
    temp_a3 = (temp_v0 * 0x10) + 0x24;
    D_800A8390 = temp_a3;
    D_800A8396 = 0;
    D_800A8394 = M2C_FIELD(arg0, u8 *, 4);
    D_800A83BC = 7;
    D_800A83B4 = 0x04001000;
    D_800A83C0 = 0x04001000;
    D_800A83A0 = temp_v0;
    D_800A83B8 = 0x1000;
    D_800A83A4 = 0x04000000;
    D_800A83A8 = 0x1000;
    D_800A83AC = 3;
    D_800A83B0 = 0x04000000;
    D_800A839C = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_v0 >= 3) {
        D_800A83C4 = 0x88200000;
        D_800A83C8 = 0x6130;
        D_800A83CC = 5;
        D_800A83D4 = 4;
        D_800A83D8 = 0x200000;
        D_800A83E8 = 0x800000;
        D_800A83D0 = 0;
        D_800A83DC = 3;
        D_800A83E0 = 0;
        D_800A83E4 = 0x04002000;
        D_800A83EC = 3;
        D_800A83F0 = 0;
        D_800A83F4 = 0x88206130;
        D_800A83F8 = 0x9000;
        D_800A83FC = 3;
        D_800A8400 = 0;
    }
    __rmonSendReply(&D_800A8390, temp_a3, 1, temp_a3);
    return 0;
}

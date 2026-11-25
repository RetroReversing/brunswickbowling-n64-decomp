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

M2C_UNK func_80068FF0(M2C_UNK *, void *, M2C_UNK);  /* extern */
void *__rmonGetTCB(s32);                           /* extern */
M2C_UNK __rmonSendReply(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */

s32 __rmonGetFRegisters(void *arg0) {
    M2C_UNK sp10;
    u8 sp14;
    s16 sp16;
    s32 sp1C;
    M2C_UNK sp20;
    s32 spA0;
    s32 spA8;
    void *temp_v0;

    if (M2C_FIELD(arg0, u8 *, 9) == 0) {
        spA8 = 0;
        temp_v0 = __rmonGetTCB(M2C_FIELD(arg0, s32 *, 0xC));
        if (temp_v0 != NULL) {
            func_80068FF0(&sp20, temp_v0 + 0x130, 0x20);
            spA0 = M2C_FIELD(temp_v0, s32 *, 0x12C);
            sp16 = 0;
            sp14 = M2C_FIELD(arg0, u8 *, 4);
            sp1C = M2C_FIELD(arg0, s32 *, 0xC);
            __rmonSendReply(&sp10, 0x98, 1);
            return 0;
        }
    }
    return -2;
}

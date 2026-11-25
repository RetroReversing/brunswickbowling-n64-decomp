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

s32 __rmonSendReply(s32 *, s32, s32); /* extern */

s32 __rmonSetFault(void *arg0) {
    s32 sp10;
    u8 sp14;
    s16 sp16;
    s32 sp1C;
    s32 *temp;

    sp16 = 0;
    sp14 = (*(volatile u8 *)((s8 *)arg0 + 4));
    temp = (volatile s32 *)((s8 *)arg0 + 0xC);
    sp1C = (*temp);
    __rmonSendReply(&sp10, 0x10, 1);
    return 0;
}

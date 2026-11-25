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

s32 func_80068FF0(s32, void *, s32);        /* extern */
void *__rmonGetTCB(s32);                           /* extern */
s32 __rmonSendReply(s32 *, s32, s32); /* extern */

s32 __rmonSetFRegisters(const void *arg0) {
    struct {
        s32 f10;
        u8 f14;
        u16 f16;
    } __repair_frame;
    s32 sp1C[3];
    void *temp_v0;

    if ((*(const u8 *)((s8 *)arg0 + 9)) == 0) {
        sp1C[2] = 0;
        temp_v0 = __rmonGetTCB((*(const s32 *)((s8 *)arg0 + 0xC)));
        if (temp_v0 != NULL) {
            func_80068FF0(temp_v0 + 0x130, arg0 + 0x10, 0x20);
            (*(s32 *)((s8 *)temp_v0 + 0x12C)) = (s32) (*(const s32 *)((s8 *)arg0 + 0x90));
            sp1C[1] = (*(const s32 *)((s8 *)arg0 + 0xC));
            __repair_frame.f14 = (*(const u8 *)((s8 *)arg0 + 4));
            __repair_frame.f16 = 0;
            __rmonSendReply(&__repair_frame, 0x10, 1);
            return 0;
        }
    }
    return -2;
}

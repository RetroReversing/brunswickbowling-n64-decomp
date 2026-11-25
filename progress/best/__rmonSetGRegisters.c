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

void *__rmonGetTCB(s32);                           /* extern */
s32 __rmonSendReply(s32 *,  s32); /* extern */

s32 __rmonSetGRegisters(void *arg0) {
    s32 sp10;
    u8 sp14;
    s16 sp16;
    s32 sp1C;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 var_a2;
    
    s32 var_v0;
    void *temp_v0;
    void *var_a1;
    void *var_a1_2;
    void *var_a3;
    void *var_a3_2;

    if ((*(u8 *)((s8 *)arg0 + 9)) == 0) {
        var_v0 = -2;
        temp_v0 = __rmonGetTCB((*(s32 *)((s8 *)arg0 + 0xC)));
        /*__repair_loop_weight*/do { var_a2 = 1; } while (0);
        if (temp_v0 == NULL) {
            return -2;
        }
        var_a1 = temp_v0 + 0x20;
        var_a3 = arg0 + 4;
        do {
            temp_a0 = (*(s32 *)((s8 *)var_a3 + 0x10));
            do { /*__repair_update_run*/do { var_a3 += 4; } while (0); } while (0);
            do { var_a2 += 1; } while (0);
            (*(s32 *)((s8 *)var_a1 + 0)) = (s32) (temp_a0 >> 0x1F);
            (*(s32 *)((s8 *)var_a1 + 4)) = temp_a0;
            do { var_a1 += 8; } while (0);
        } while (var_a2 < 0x1A);
        do { do { do { temp_a0 = 0x1C; } while (0); } while (0); } while (0);
        var_a1_2 = temp_v0 + 0xE8;
        var_a3_2 = arg0 + 0x70;
        do {
            temp_a0_2 = (*(s32 *)((s8 *)var_a3_2 + 0x10));
            do { var_a3_2 += 4; } while (0);
            do { do { do { temp_a0 += 1; } while (0); } while (0); } while (0);
            (*(s32 *)((s8 *)var_a1_2 + 0)) = (s32) (temp_a0_2 >> 0x1F);
            (*(s32 *)((s8 *)var_a1_2 + 4)) = temp_a0_2;
            do { var_a1_2 += 8; } while (0);
        } while (temp_a0 < 0x22);
        (*(s32 *)((s8 *)temp_v0 + 0x120)) = (s32) (*(s32 *)((s8 *)arg0 + 0x98));
        (*(s32 *)((s8 *)temp_v0 + 0x11C)) = (s32) (*(s32 *)((s8 *)arg0 + 0x9C));
        do { (*(s32 *)((s8 *)temp_v0 + 0x118)) = (s32) (*(s32 *)((s8 *)arg0 + 0xA0)); } while (0);
        sp1C = (*(s32 *)((s8 *)arg0 + 0xC));
        sp16 = 0;
        sp14 = (*(u8 *)((s8 *)arg0 + 4));
        __rmonSendReply(&sp10,  0x10);
        var_v0 = 0;
        /* Duplicate return node #8. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}

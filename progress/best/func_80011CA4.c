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

M2C_UNK func_8005A970(s32, s32);                    /* extern */

void func_80011CA4(void *arg0, void *arg1, s32 arg2) {
    s32 temp_a1;
    s8 var_v1;
    u8 temp_v0;

    temp_a1 = arg1 + 0x14;
    func_8005A970(temp_a1, temp_a1);
    M2C_FIELD(arg0, u8 *, 0x18) = (u8) M2C_FIELD(arg1, u8 *, 0x1BC);
    M2C_FIELD(arg0, u8 *, 0x2D) = (u8) M2C_FIELD(arg1, u8 *, 0x1BA);
    M2C_FIELD(arg0, u8 *, 0x2E) = (u8) M2C_FIELD(arg1, u8 *, 0x1BB);
    temp_v0 = M2C_FIELD(arg1, u8 *, 0x1B9);
    var_v1 = temp_v0 - 1;
    if (temp_v0 == 0) {
        var_v1 = M2C_FIELD(arg1, s32 *, 0x11C) + ((((M2C_FIELD(arg1, s32 *, 0x1AC) * 5) + M2C_FIELD(arg1, s32 *, 0x12C)) * 3) + 7);
    }
    M2C_FIELD(arg0, s8 *, 0x19) = var_v1;
    M2C_FIELD(arg0, s8 *, 0x1A) = (s8) M2C_FIELD(arg1, s32 *, 0x13C);
    M2C_FIELD(arg0, s8 *, 0x1B) = (s8) M2C_FIELD(arg1, s32 *, 0x14C);
    M2C_FIELD(arg0, s8 *, 0x1C) = (s8) M2C_FIELD(arg1, s32 *, 0x15C);
    M2C_FIELD(arg0, s8 *, 0x1D) = (s8) M2C_FIELD(arg1, s32 *, 0x16C);
    M2C_FIELD(arg0, s8 *, 0x1E) = (s8) M2C_FIELD(arg1, s32 *, 0x17C);
    M2C_FIELD(arg0, s8 *, 0x21) = (s8) M2C_FIELD(arg1, s32 *, 0x18C);
    M2C_FIELD(arg0, s8 *, 0x22) = (s8) M2C_FIELD(arg1, s32 *, 0x19C);
    M2C_FIELD(arg0, s32 *, 0x28) = arg2;
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(arg1, s32 *, 0x1AC);
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) M2C_FIELD(arg1, u8 *, 0x1B8);
    M2C_FIELD(arg0, s16 *, 0x54) = 0xCF;
    M2C_FIELD(arg0, s16 *, 0x56) = 0xCF;
    M2C_FIELD(arg0, s16 *, 0x58) = 0;
    M2C_FIELD(arg0, u8 *, 0x2F) = (u8) M2C_FIELD(arg1, u8 *, 0x1BD);
}

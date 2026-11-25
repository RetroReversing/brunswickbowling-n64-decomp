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

M2C_UNK func_80016044(void *, s32);                 /* extern */

void func_80011994(void *arg0, void *arg1, s8 arg2) {
    M2C_FIELD(arg0, s32 *, 0x1C0) = 0;
    M2C_FIELD(arg0, s8 *, 0x1BC) = arg2;
    M2C_FIELD(arg0, s8 *, 8) = 0;
    M2C_FIELD(arg0, s8 *, 9) = 1;
    do { M2C_FIELD(arg0, u8 *, 0x1B9) = (u8) M2C_FIELD(arg1, u8 *, 4); } while (0);
    M2C_FIELD(arg0, u8 *, 0x1BA) = (u8) M2C_FIELD(arg1, u8 *, 0xC);
    M2C_FIELD(arg0, u8 *, 0x1BB) = (u8) M2C_FIELD(arg1, u8 *, 0xD);
    func_80016044(arg0 + 0xC, M2C_FIELD(arg1, s32 *, 0));
    M2C_FIELD(arg0, s32 *, 0x11C) = (s32) M2C_FIELD(arg1, u8 *, 0xE);
    M2C_FIELD(arg0, s32 *, 0x12C) = (s32) M2C_FIELD(arg1, u8 *, 0xF);
    M2C_FIELD(arg0, s32 *, 0x13C) = (s32) M2C_FIELD(arg1, u8 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x14C) = (s32) M2C_FIELD(arg1, u8 *, 0x11);
    M2C_FIELD(arg0, s32 *, 0x15C) = (s32) M2C_FIELD(arg1, u8 *, 0x12);
    M2C_FIELD(arg0, s32 *, 0x16C) = (s32) M2C_FIELD(arg1, u8 *, 0x13);
    do { do { M2C_FIELD(arg0, s32 *, 0x17C) = (s32) M2C_FIELD(arg1, u8 *, 0x14); } while (0); } while (0);
    M2C_FIELD(arg0, s32 *, 0x19C) = 2;
    do { do { M2C_FIELD(arg0, s32 *, 0x18C) = (s32) M2C_FIELD(arg1, u8 *, 0x15); } while (0); } while (0);
    M2C_FIELD(arg0, s8 *, 0x1BD) = 0;
    do { do { M2C_FIELD(arg0, s32 *, 0x1AC) = (s32) M2C_FIELD(arg1, s32 *, 8); } while (0); } while (0);
}

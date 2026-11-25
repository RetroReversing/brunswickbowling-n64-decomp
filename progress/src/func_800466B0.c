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

M2C_UNK func_8003694C();                            /* extern */
M2C_UNK func_8004C850(M2C_UNK);                     /* extern */
M2C_UNK func_8004D5D0(s32, M2C_UNK);                /* extern */
M2C_UNK func_8004D638(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_8004E000();                            /* extern */
M2C_UNK func_8004F8A0();                            /* extern */
M2C_UNK func_80050490();                            /* extern */
M2C_UNK func_800526C0();                            /* extern */
M2C_UNK func_80052AF4(M2C_UNK);                     /* extern */
M2C_UNK func_800713F0();                            /* extern */

void func_800466B0(s32 arg0) {
    s32 temp_s0;

    func_800713F0();
    func_8004C850(0x100);
    temp_s0 = arg0 & 0xFFFF;
    func_800526C0();
    func_80050490();
    func_80052AF4(1);
    func_8004D5D0(temp_s0, 0x4B000);
    func_8004E000();
    func_8004D638(temp_s0, 1, 0, 0x80);
    func_8004F8A0();
    func_8003694C();
}

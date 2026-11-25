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

M2C_UNK func_80029704(M2C_UNK, s16, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80039738(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK *); /* extern */
extern M2C_UNK D_80075C28;
extern M2C_UNK D_80075C34;
extern M2C_UNK *D_80089880;
extern M2C_UNK D_8008CEB0;
extern M2C_UNK D_8008CF28;

void func_800230B0(void *arg0) {
    func_80029704(0x168, M2C_FIELD(arg0, s16 *, 0x14), 2, 0);
    func_80039738(&D_8008CEB0, 0, 1, 0x140, (s32) (s16) (M2C_FIELD(arg0, u16 *, 0x16) + 4), D_80089880);
    func_80039738(&D_8008CF28, 0, 0, 0xBC, (s32) (s16) ((M2C_FIELD(arg0, u16 *, 0x16) + (u16) M2C_FIELD(arg0, s16 *, 0x14)) - 0x12), &D_80075C28);
    func_80039738(&D_8008CF28, 0, 2, 0x1C4, (s32) (s16) ((M2C_FIELD(arg0, u16 *, 0x16) + (u16) M2C_FIELD(arg0, s16 *, 0x14)) - 0x12), &D_80075C34);
}

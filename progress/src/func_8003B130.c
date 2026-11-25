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

s32 *func_80050988(M2C_UNK *, M2C_UNK *);           /* extern */
extern M2C_UNK D_8007828C;
extern M2C_UNK D_80078440;
extern M2C_UNK D_80078448;
extern M2C_UNK D_80078450;
extern M2C_UNK D_80078458;
extern M2C_UNK D_80078460;
extern M2C_UNK D_80078468;
extern M2C_UNK D_80078470;
extern M2C_UNK D_80081AE8;

void func_8003B130(void) {
    M2C_FIELD(&D_80081AE8, s32 *, 0) = (s32) *func_80050988(&D_80078440, &D_8007828C);
    M2C_FIELD(&D_80081AE8, s32 *, 4) = (s32) *func_80050988(&D_80078448, &D_8007828C);
    M2C_FIELD(&D_80081AE8, s32 *, 8) = (s32) *func_80050988(&D_80078450, &D_8007828C);
    M2C_FIELD(&D_80081AE8, s32 *, 0xC) = (s32) *func_80050988(&D_80078458, &D_8007828C);
    M2C_FIELD(&D_80081AE8, s32 *, 0x10) = (s32) *func_80050988(&D_80078460, &D_8007828C);
    M2C_FIELD(&D_80081AE8, s32 *, 0x14) = (s32) *func_80050988(&D_80078468, &D_8007828C);
    M2C_FIELD(&D_80081AE8, s32 *, 0x18) = (s32) *func_80050988(&D_80078470, &D_8007828C);
    M2C_FIELD(&D_80081AE8, s32 *, 0x1C) = (s32) M2C_FIELD(&D_80081AE8, s32 *, 0);
    M2C_FIELD(&D_80081AE8, s32 *, 0x20) = (s32) M2C_FIELD(&D_80081AE8, s32 *, 4);
    M2C_FIELD(&D_80081AE8, s32 *, 0x24) = (s32) M2C_FIELD(&D_80081AE8, s32 *, 8);
    M2C_FIELD(&D_80081AE8, s32 *, 0x28) = (s32) M2C_FIELD(&D_80081AE8, s32 *, 0xC);
    M2C_FIELD(&D_80081AE8, s32 *, 0x2C) = (s32) M2C_FIELD(&D_80081AE8, s32 *, 0x10);
    M2C_FIELD(&D_80081AE8, s32 *, 0x30) = (s32) M2C_FIELD(&D_80081AE8, s32 *, 0x14);
}

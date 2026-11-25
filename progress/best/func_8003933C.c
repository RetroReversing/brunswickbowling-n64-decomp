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

M2C_UNK func_80036F08(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
s32 func_8005AA40(M2C_UNK, M2C_UNK *);              /* extern */
extern M2C_UNK D_80078100;
extern M2C_UNK D_80078108;
extern M2C_UNK D_80078114;
extern M2C_UNK D_8007811C;
extern M2C_UNK D_8008CCB0;
extern M2C_UNK *D_8008DBEC;

void func_8003933C(void *arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_a0_2;
    s32 var_a1;
    u32 temp_a0;
    void *temp_v0;

    D_8008DBEC = &D_8008CCB0;
    func_80036F08(&D_8008CCB0, &D_80078100, 0);
    if (M2C_FIELD(&D_8008CCB0, s32 *, 0x1C) != 0) {
        M2C_FIELD(arg0, u16 *, 0x14) = (u16) M2C_FIELD(&D_8008CCB0, u16 *, 0x16);
        M2C_FIELD(arg0, u16 *, 0x16) = (u16) M2C_FIELD(&D_8008CCB0, u16 *, 0x18);
        M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(&D_8008CCB0, s32 *, 0x1C);
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(&D_8008CCB0, s32 *, 0x24);
        if (func_8005AA40(arg1, &D_80078108) == 0) {
            M2C_FIELD(arg0, s32 *, 0xC) = 0x11;
            M2C_FIELD(arg0, s32 *, 0x10) = 2;
            M2C_FIELD(arg0, s16 *, 0x20) = 0x1A9;
            M2C_FIELD(arg0, s16 *, 0x22) = 0x1A9;
            M2C_FIELD(arg0, s16 *, 0x2A) = 8;
            M2C_FIELD(arg0, s16 *, 0x2C) = 8;
            goto block_7;
        }
        if (func_8005AA40(arg1, &D_80078114) == 0) {
            M2C_FIELD(arg0, s32 *, 0xC) = 0x15;
            M2C_FIELD(arg0, s32 *, 0x10) = 3;
            M2C_FIELD(arg0, s16 *, 0x20) = 0x17A;
            M2C_FIELD(arg0, s16 *, 0x22) = 0x17A;
            M2C_FIELD(arg0, s16 *, 0x24) = 0x126;
            M2C_FIELD(arg0, s16 *, 0x2A) = 0xA;
            M2C_FIELD(arg0, s16 *, 0x2C) = 0xA;
            M2C_FIELD(arg0, s16 *, 0x2E) = 0xA;
            goto block_7;
        }
        var_a1 = 0;
        if (func_8005AA40(arg1, &D_8007811C) == 0) {
            M2C_FIELD(arg0, s32 *, 0xC) = 0x1A;
            M2C_FIELD(arg0, s32 *, 0x10) = 5;
            M2C_FIELD(arg0, s16 *, 0x20) = 0x138;
            M2C_FIELD(arg0, s16 *, 0x22) = 0x138;
            M2C_FIELD(arg0, s16 *, 0x24) = 0x138;
            M2C_FIELD(arg0, s16 *, 0x26) = 0x138;
            M2C_FIELD(arg0, s16 *, 0x28) = 0xD0;
            M2C_FIELD(arg0, s16 *, 0x2A) = 0xC;
            M2C_FIELD(arg0, s16 *, 0x2C) = 0xC;
            M2C_FIELD(arg0, s16 *, 0x2E) = 0xC;
            M2C_FIELD(arg0, s16 *, 0x30) = 0xC;
            M2C_FIELD(arg0, s16 *, 0x32) = 0xC;
block_7:
            var_a1 = 0;
        }
        M2C_FIELD(arg0, s8 *, 4) = 0;
        M2C_FIELD(arg0, s8 *, 5) = 0;
        M2C_FIELD(arg0, s32 *, 0) = arg2;
        M2C_FIELD(arg0, s32 *, 8) = 0;
loop_9:
        temp_a0 = var_a1 & 0xFF;
        if (temp_a0 < 0x60U) {
            temp_v0 = (temp_a0 * 8) + M2C_FIELD(arg0, s32 *, 0);
            temp_a0_2 = M2C_FIELD(temp_v0, u8 *, 4) + M2C_FIELD(temp_v0, u8 *, 7);
            if (M2C_FIELD(arg0, s32 *, 8) < temp_a0_2) {
                M2C_FIELD(arg0, s32 *, 8) = temp_a0_2;
            }
            var_a1 += 1;
            goto loop_9;
        }
    }
}

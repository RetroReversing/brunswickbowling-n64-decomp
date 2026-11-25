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

M2C_UNK func_80065110(void *, void *, s32 *, s32);  /* extern */
M2C_UNK func_800680F0(s32, void *, M2C_UNK);        /* extern */
s32 func_8006B8F0(M2C_UNK *);                       /* extern */
M2C_UNK func_8006D970(M2C_UNK);                     /* extern */
extern M2C_UNK D_8007A750;
extern M2C_UNK D_80095D90;
extern M2C_UNK D_8009CBC0;
extern s32 D_8009CBCC;
extern s32 D_8009CBE0;
extern s32 D_8009CC44;
extern M2C_UNK D_8009CC58;
extern s32 D_8009CC60;
extern M2C_UNK D_8009CC70;
extern M2C_UNK D_8009DB88;
extern M2C_UNK D_800A1FD0;
extern M2C_UNK func_80001068;

void func_8004DE88(void) {
    s32 *temp_a2_2;
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_v0;
    void *temp_a0_2;
    void *temp_a1;
    void *temp_s0;
    void *temp_v1;

    temp_a2 = D_8009CBE0 * 4;
    temp_a0 = D_8009CBE0 * 0x88;
    temp_s0 = temp_a0 + &D_8009CC70;
    temp_a3 = *(temp_a2 + &D_8009CC58);
    temp_v1 = (char *)&func_80001068 + 8;
    M2C_FIELD(temp_s0, s32 *, 0x10) = 1;
    M2C_FIELD(temp_s0, s32 *, 0x1C) = (s32) ((s32)(&func_80001068 + 0xD8) - (s32)temp_v1);
    M2C_FIELD(temp_s0, void **, 0x20) = (void *) (&func_80001068 + 0xD8);
    M2C_FIELD(temp_s0, M2C_UNK **, 0x28) = &D_8007A750;
    M2C_FIELD(temp_s0, s32 *, 0x24) = 0x1000;
    M2C_FIELD(temp_s0, void **, 0x18) = temp_v1;
    M2C_FIELD(temp_s0, s32 *, 0x2C) = 0x800;
    M2C_FIELD(temp_s0, s32 *, 0x14) = 0;
    M2C_FIELD(temp_s0, s32 *, 0x40) = temp_a3;
    M2C_FIELD(temp_s0, s32 *, 0x44) = (s32) (((s32) (D_8009CC60 - temp_a3) >> 3) * 8);
    temp_a1 = &D_8009CC70 + 0x68;
    M2C_FIELD(temp_s0, s32 *, 0x38) = (s32) M2C_FIELD(&D_80095D90, s32 *, 0x28);
    temp_a0_2 = temp_a0 + temp_a1;
    M2C_FIELD(temp_s0, s32 *, 0x3C) = (s32) M2C_FIELD(&D_80095D90, s32 *, 0x2C);
    M2C_FIELD(temp_s0, s32 *, 0x34) = 0x400;
    M2C_FIELD(temp_s0, s32 *, 0x4C) = 0xC00;
    M2C_FIELD(temp_s0, s32 *, 8) = 0x63;
    M2C_FIELD(temp_s0, M2C_UNK **, 0x50) = &D_800A1FD0;
    temp_a2_2 = temp_a2 + &D_8009CBC0;
    M2C_FIELD(temp_s0, s32 *, 0) = 0;
    M2C_FIELD(temp_s0, void **, 0x54) = temp_a0_2;
    M2C_FIELD(temp_s0, s32 *, 0x48) = (s32) D_8009CBCC;
    M2C_FIELD(temp_s0, s32 *, 0x30) = (s32) M2C_FIELD(&D_80095D90, s32 *, 0x20);
    M2C_FIELD(temp_s0, s32 *, 0xC) = (s32) *temp_a2_2;
    func_80065110(temp_a0_2, temp_a1, temp_a2_2, M2C_FIELD(&D_80095D90, s32 *, 0x20));
    func_800680F0(func_8006B8F0(&D_8009DB88), temp_s0, 1);
    temp_v0 = D_8009CC44 - 1;
    if (D_8009CC44 != 0) {
        D_8009CC44 = temp_v0;
        if (temp_v0 == 0) {
            func_8006D970(0);
        }
    }
}

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

extern s32 D_8007B210;
extern M2C_UNK D_8007B214;
extern M2C_UNK D_8007BB04;
extern s32 D_8007C3F4;
extern M2C_UNK D_8007C458;
extern M2C_UNK D_8007C4F0;
extern s32 D_8007CCD8;
extern s32 D_8007CCDC;
extern u16 D_80099140;

void func_8000F784(void) {
    M2C_UNK *var_a1;
    s32 temp_a0;
    s32 temp_v0_3;
    s32 var_a2;
    s32 var_a3;
    u16 *temp_v1;
    void *temp_v0;
    void *temp_v0_2;

    var_a3 = 0xB;
    var_a1 = &D_8007C4F0;
    temp_a0 = D_8007B210 * 2;
    *(temp_a0 + &D_8007B214) = (s16) ((s32) D_8007CCD8 >> 0x10);
    *(temp_a0 + &D_8007BB04) = D_80099140;
    var_a2 = D_8007CCD8 * 2;
    do {
        if (var_a2 < 0) {
            temp_v0 = (D_80099140 * 0x48) + D_8007C3F4;
            M2C_FIELD(temp_v0, f64 *, 0) = (f64) M2C_FIELD(var_a1, f64 *, 0);
            M2C_FIELD(temp_v0, f64 *, 8) = (f64) M2C_FIELD(var_a1, f64 *, 8);
            M2C_FIELD(temp_v0, f64 *, 0x10) = (f64) M2C_FIELD(var_a1, f64 *, 0x10);
            M2C_FIELD(temp_v0, f64 *, 0x18) = (f64) M2C_FIELD(var_a1, f64 *, 0x18);
            M2C_FIELD(temp_v0, f64 *, 0x20) = (f64) M2C_FIELD(var_a1, f64 *, 0x20);
            M2C_FIELD(temp_v0, f64 *, 0x28) = (f64) M2C_FIELD(var_a1, f64 *, 0x28);
            M2C_FIELD(temp_v0, f64 *, 0x30) = (f64) M2C_FIELD(var_a1, f64 *, 0x30);
            M2C_FIELD(temp_v0, f64 *, 0x38) = (f64) M2C_FIELD(var_a1, f64 *, 0x38);
            D_80099140 += 1;
            M2C_FIELD(temp_v0, f64 *, 0x40) = (f64) M2C_FIELD(var_a1, f64 *, 0x40);
            var_a1 += 0xC8;
        } else {
            if (M2C_FIELD(var_a1, s32 *, 0x48) == 0) {
                var_a3 -= 1;
            }
            var_a1 += 0xC8;
        }
        var_a2 *= 2;
    } while ((s32) var_a1 < (s32) (&D_8007C4F0 + 0x7D0));
    if (M2C_FIELD(&D_8007C458, s32 *, 0x94) != 0) {
        temp_v1 = (D_8007B210 * 2) + &D_8007B214;
        *temp_v1 |= 0x10;
        temp_v0_2 = (D_80099140 * 0x48) + D_8007C3F4;
        M2C_FIELD(temp_v0_2, f64 *, 0) = (f64) M2C_FIELD(&D_8007C458, f64 *, 0);
        M2C_FIELD(temp_v0_2, f64 *, 8) = (f64) M2C_FIELD(&D_8007C458, f64 *, 8);
        M2C_FIELD(temp_v0_2, f64 *, 0x10) = (f64) M2C_FIELD(&D_8007C458, f64 *, 0x10);
        M2C_FIELD(temp_v0_2, f64 *, 0x18) = (f64) M2C_FIELD(&D_8007C458, f64 *, 0x60);
        M2C_FIELD(temp_v0_2, f64 *, 0x20) = (f64) M2C_FIELD(&D_8007C458, f64 *, 0x68);
        M2C_FIELD(temp_v0_2, f64 *, 0x28) = (f64) M2C_FIELD(&D_8007C458, f64 *, 0x70);
        M2C_FIELD(temp_v0_2, f64 *, 0x30) = (f64) M2C_FIELD(&D_8007C458, f64 *, 0x78);
        M2C_FIELD(temp_v0_2, f64 *, 0x38) = (f64) M2C_FIELD(&D_8007C458, f64 *, 0x80);
        D_80099140 += 1;
        M2C_FIELD(temp_v0_2, f64 *, 0x40) = (f64) M2C_FIELD(&D_8007C458, f64 *, 0x88);
    } else {
        var_a3 -= 1;
    }
    temp_v0_3 = D_8007B210 + 1;
    D_8007B210 = temp_v0_3;
    if ((temp_v0_3 >= 0x478) || ((D_80099140 + var_a3) >= 0x8F0)) {
        D_8007CCDC = 1;
    }
}

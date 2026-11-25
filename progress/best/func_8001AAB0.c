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
extern s32 D_8007C42C;
extern M2C_UNK D_800827A4;
extern M2C_UNK D_8008C610;
extern M2C_UNK D_8008C628;
extern M2C_UNK D_8008C640;
extern M2C_UNK D_8008C658;
extern M2C_UNK D_8008C688;

void func_8001AAB0(void *arg0) {
    s32 *var_a2;
    s32 *var_a2_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 var_a1;
    s32 var_a1_2;

    var_a1 = 0;
    var_a2 = &D_8007C42C;
    M2C_FIELD(arg0, s32 *, 0x48) = 1;
    M2C_FIELD(arg0, s32 *, 0x30) = -1;
    M2C_FIELD(arg0, s32 *, 0x34) = 0xA;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    temp_v1 = D_8007B210 + 1;
    M2C_FIELD(arg0, s32 *, 0x24) = temp_v1;
    M2C_FIELD(arg0, s32 *, 0x28) = temp_v1;
    do {
        if ((var_a1 < M2C_FIELD(arg0, s32 *, 0x34)) && (((s16) M2C_FIELD(&D_800827A4, s16 *, 0x5AE) >> (0xE - var_a1)) & 1)) {
            M2C_FIELD(arg0, s32 *, 0x34) = var_a1;
        }
        if (*var_a2 != 0) {
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) + 1);
            temp_v1_2 = *var_a2;
            if (temp_v1_2 < M2C_FIELD(arg0, s32 *, 0x24)) {
                M2C_FIELD(arg0, s32 *, 0x24) = temp_v1_2;
                M2C_FIELD(arg0, s32 *, 0x30) = var_a1;
            }
            if (M2C_FIELD(arg0, s32 *, 0x2C) < *var_a2) {
                M2C_FIELD(arg0, s32 *, 0x2C) = *var_a2;
            }
        }
        var_a1 += 1;
        var_a2 += 4;
    } while (var_a1 < 0xA);
    var_a1_2 = 0;
    var_a2_2 = &D_8007C42C;
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) M2C_FIELD(arg0, s32 *, 0x24);
    do {
        temp_v1_3 = *var_a2_2;
        if (M2C_FIELD(arg0, s32 *, 0x28) < temp_v1_3) {
            M2C_FIELD(arg0, s32 *, 0x28) = temp_v1_3;
        }
        var_a1_2 += 1;
        var_a2_2 += 4;
    } while (var_a1_2 < 0xA);
    if (M2C_FIELD(arg0, s32 *, 0x28) < (M2C_FIELD(arg0, s32 *, 0x24) + 0x78)) {
        M2C_FIELD(arg0, s32 *, 0x28) = (s32) (D_8007B210 + 0x2D);
    } else {
        M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &D_8008C688;
    }
    temp_v1_4 = M2C_FIELD(arg0, s32 *, 0x38);
    if (temp_v1_4 != 0) {
        if (temp_v1_4 < 2) {
            M2C_FIELD(arg0, M2C_UNK **, 0x20) = &D_8008C640;
            return;
        }
        if (temp_v1_4 < 5) {
            M2C_FIELD(arg0, M2C_UNK **, 0x20) = &D_8008C658;
            return;
        }
        if (temp_v1_4 < 9) {
            M2C_FIELD(arg0, M2C_UNK **, 0x20) = &D_8008C628;
            return;
        }
        M2C_FIELD(arg0, M2C_UNK **, 0x20) = &D_8008C610;
    }
}

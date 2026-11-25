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

M2C_UNK func_8005D618(void *);                      /* extern */
s32 func_8005D754();             /* extern */
extern s32 D_800A5A5C;
extern s32 D_800A5A70;
extern s32 D_800A5A78;

s32 func_8005DBAC(void *arg0) {
    s32 temp_s1;
    s32 temp_s4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v0_8;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_s3;
    void **var_v1;
    void **var_v1_2;
    void **var_v1_3;
    void **var_v1_4;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;

    temp_s4 = M2C_FIELD(arg0, s32 *, 4);
    if (M2C_FIELD(arg0, s32 *, 0x28) == 0) {
        M2C_FIELD(arg0, s32 *, 0x28) = 1;
        var_a0 = 0;
        var_v1 = arg0 + 0xC;
        do {
            temp_v0 = *var_v1;
            var_a0 += 1;
            if (temp_v0 != NULL) {
                *var_v1 = (s32)temp_v0 + (s32)arg0;
            }
            var_v1 += 4;
        } while (var_a0 < 7);
        var_a0_2 = 0;
        if (temp_s4 > 0) {
            var_v1_2 = M2C_FIELD(arg0, void ***, 0xC);
            do {
                temp_v0_2 = *var_v1_2;
                var_a0_2 += 1;
                if (temp_v0_2 != NULL) {
                    *var_v1_2 = (s32)temp_v0_2 + (s32)arg0;
                }
                var_v1_2 += 4;
            } while (var_a0_2 < temp_s4);
            var_a0_2 = 0;
        }
        if (temp_s4 > 0) {
            var_v1_3 = M2C_FIELD(arg0, void ***, 0x10);
            do {
                temp_v0_3 = *var_v1_3;
                var_a0_2 += 1;
                if (temp_v0_3 != NULL) {
                    *var_v1_3 = (s32)temp_v0_3 + (s32)arg0;
                }
                var_v1_3 += 4;
            } while (var_a0_2 < temp_s4);
        }
        var_a0_3 = 0;
        if (temp_s4 > 0) {
            var_v1_4 = M2C_FIELD(arg0, void ***, 0x14);
            do {
                temp_v0_4 = *var_v1_4;
                var_a0_3 += 1;
                if (temp_v0_4 != NULL) {
                    *var_v1_4 = (s32)temp_v0_4 + (s32)arg0;
                }
                var_v1_4 += 4;
            } while (var_a0_3 < temp_s4);
        }
    }
    temp_v1 = D_800A5A70;
    D_800A5A70 = temp_v1 + 1;
    temp_s0 = D_800A5A5C + (func_8005D754(arg0, -1, arg0) * 0x13C);
    func_8005D618(temp_s0);
    M2C_FIELD(temp_s0, s8 *, 0xD2) = 1;
    M2C_FIELD(temp_s0, void **, 0x74) = arg0;
    M2C_FIELD(temp_s0, s32 *, 0) = (s32) (M2C_FIELD(temp_s0, s32 *, 0) | 3);
    temp_v0_5 = M2C_FIELD(arg0, s32 *, 0x24);
    var_s3 = 0;
    M2C_FIELD(temp_s0, s32 *, 0x44) = temp_v1;
    M2C_FIELD(temp_s0, s32 *, 0x80) = temp_v0_5;
    M2C_FIELD(temp_s0, s32 *, 4) = temp_v0_5;
    if (temp_s4 > 0) {
        do {
            temp_s1 = var_s3 * 4;
            if (*(temp_s1 + M2C_FIELD(arg0, void ***, 0xC)) != 0) {
                temp_s0_2 = D_800A5A5C + (func_8005D754(arg0, var_s3) * 0x13C);
                func_8005D618(temp_s0_2);
                M2C_FIELD(temp_s0_2, s8 *, 0xD2) = 1;
                M2C_FIELD(temp_s0_2, void **, 0x74) = arg0;
                M2C_FIELD(temp_s0_2, s32 *, 0) = (s32) (M2C_FIELD(temp_s0_2, s32 *, 0) | 1);
                temp_v0_6 = *(temp_s1 + M2C_FIELD(arg0, void ***, 0x10));
                M2C_FIELD(temp_s0_2, s32 *, 0x8C) = temp_v0_6;
                M2C_FIELD(temp_s0_2, s32 *, 0x38) = temp_v0_6;
                temp_v0_7 = *(temp_s1 + M2C_FIELD(arg0, void ***, 0x14));
                M2C_FIELD(temp_s0_2, s32 *, 0x88) = temp_v0_7;
                M2C_FIELD(temp_s0_2, s32 *, 0x34) = temp_v0_7;
                temp_v0_8 = *(temp_s1 + M2C_FIELD(arg0, void ***, 0xC));
                M2C_FIELD(temp_s0_2, s32 *, 0x44) = temp_v1;
                M2C_FIELD(temp_s0_2, s32 *, 0x80) = temp_v0_8;
                M2C_FIELD(temp_s0_2, s32 *, 4) = temp_v0_8;
            }
            var_s3 += 1;
        } while (var_s3 < temp_s4);
    }
    D_800A5A78 = 0;
    return temp_v1;
}

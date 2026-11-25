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

void *func_800514A0(void *, void *, void *);        /* extern */
void *func_800514B0(void *, void *, void *);        /* extern */
s32 func_80051B5C(void *, void *, void *);          /* extern */
void *func_80051D94(void *, s32, s32);              /* extern */
extern M2C_UNK D_80096FF8;
extern void *D_8009CC60;
extern s32 D_8009DB1C;
extern u32 D_8009DB20;

void func_80051938(s32 arg0) {
    M2C_UNK (*temp_v0)(void *);
    s32 var_s3;
    u32 temp_a0;
    u32 var_s2;
    void *temp_s0;
    void *var_a2;

    if (D_8009DB20 != 0) {
        var_a2 = D_8009CC60;
        var_s2 = 0;
        if (D_8009DB20 != 0) {
            var_s3 = 0;
            do {
                temp_s0 = D_8009DB1C + var_s3;
                temp_a0 = M2C_FIELD(temp_s0, u32 *, 0);
                if (M2C_FIELD(temp_s0, s32 *, 0x28) == arg0) {
                    temp_v0 = M2C_FIELD(temp_s0, M2C_UNK (**)(void *), 0x2C);
                    if (temp_v0 == NULL) {
                        if (temp_a0 & 1) {
                            M2C_FIELD(var_a2, s32 *, 0) = 0xE7000000;
                            M2C_FIELD(var_a2, s32 *, 4) = 0;
                            var_a2 = func_800514B0(temp_s0, var_a2 + 8, var_a2);
                        } else if (temp_a0 & 2) {
                            M2C_FIELD(var_a2, s32 *, 0) = 0xE7000000;
                            M2C_FIELD(var_a2, s32 *, 4) = 0;
                            var_a2 = func_800514A0(temp_s0, var_a2 + 8, var_a2);
                        } else {
                            var_a2 = func_80051D94(temp_s0, func_80051B5C(temp_s0, var_a2, var_a2), (temp_a0 >> 0x18) & 7);
                        }
                        goto block_13;
                    }
                    D_8009CC60 = var_a2;
                    temp_v0(temp_s0);
                    var_a2 = D_8009CC60;
                    var_s3 += 0x30;
                } else {
block_13:
                    var_s3 += 0x30;
                }
                var_s2 += 1;
            } while (var_s2 < (u32) D_8009DB20);
        }
        M2C_FIELD(var_a2, s32 *, 0) = 0x06000000;
        M2C_FIELD(var_a2, M2C_UNK **, 4) = &D_80096FF8;
        D_8009CC60 = var_a2 + 8;
    }
}

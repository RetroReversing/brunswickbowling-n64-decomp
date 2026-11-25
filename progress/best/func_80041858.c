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

M2C_UNK func_80016044(void **, void *);             /* extern */
M2C_UNK func_800160A4(void **, s32);                /* extern */
s32 func_800160D8(void **, u8, u32);                /* extern */
M2C_UNK func_800375C0(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_8004183C(void *);                      /* extern */
u32 func_8005AAD0(s32);                             /* extern */
extern M2C_UNK D_8008C864;
extern M2C_UNK D_8008C87C;
extern M2C_UNK D_8008C894;
extern M2C_UNK D_8008C8AC;
extern M2C_UNK D_8008C8C4;
extern s8 D_8008E9A0;
extern M2C_UNK D_8008ECEC;

s32 func_80041858(void *arg0, s32 arg2) {
    s32 sp10;
    M2C_UNK *var_a0;
    M2C_UNK *var_a0_2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_v0_2;
    s32 temp_v1_2;
    s32 var_v0;
    void **temp_v1;
    void *temp_v0;

    temp_v1 = M2C_FIELD(arg0, void ***, 0x14);
    temp_v0 = *temp_v1;
    M2C_FIELD(temp_v0, M2C_UNK (**)(void *, s32 *), 0x14)(temp_v1 + M2C_FIELD(temp_v0, s16 *, 0x10), &sp10);
    switch (arg2) {
    case 0x20B:
        D_8008E9A0 = 0;
        func_80016044(M2C_FIELD(arg0, void ***, 0x14), arg0 + 0x18);
        func_8004183C(arg0);
        var_a0 = &D_8008C8C4;
block_29:
block_30:
        func_800375C0(var_a0, 1);
        return 0;
    case 0x20E:
        temp_a0 = M2C_FIELD(arg0, s32 *, 0x118);
        if (temp_a0 != ((M2C_FIELD(arg0, s32 *, 0x118) / 10) * 0xA)) {
            var_v0 = temp_a0 - 1;
        } else {
            var_v0 = temp_a0 + 9;
        }
        M2C_FIELD(arg0, s32 *, 0x118) = var_v0;
        var_a0 = &D_8008C87C;
        goto block_29;
    case 0x20D:
        temp_a1 = M2C_FIELD(arg0, s32 *, 0x118);
        temp_a0_2 = temp_a1 + 1;
        if (temp_a0_2 != (((temp_a1 + 1) / 10) * 0xA)) {
            M2C_FIELD(arg0, s32 *, 0x118) = temp_a0_2;
        } else {
            M2C_FIELD(arg0, s32 *, 0x118) = (s32) (temp_a1 - 9);
        }
        var_a0 = &D_8008C87C;
        goto block_29;
    case 0x20F:
        temp_v1_2 = M2C_FIELD(arg0, s32 *, 0x118);
        temp_v0_2 = temp_v1_2 - 0xA;
        M2C_FIELD(arg0, s32 *, 0x118) = temp_v0_2;
        if (temp_v0_2 < 0) {
            M2C_FIELD(arg0, s32 *, 0x118) = (s32) (temp_v1_2 + 0x1E);
        }
        var_a0 = &D_8008C87C;
        goto block_29;
    case 0x210:
        var_a0 = &D_8008C87C;
        M2C_FIELD(arg0, s32 *, 0x118) = (s32) ((M2C_FIELD(arg0, s32 *, 0x118) + 0xA) % 40);
        goto block_30;
    case 0x216:
        if (func_8005AAD0(sp10) == 0) {
            var_a0 = &D_8008C8AC;
        } else {
            func_800160A4(M2C_FIELD(arg0, void ***, 0x14), func_8005AAD0(sp10) - 1);
            var_a0 = &D_8008C864;
        }
        goto block_29;
    case 0x20A:
        var_a0_2 = &D_8008C8AC;
        if (func_8005AAD0(sp10) < 7U) {
            if (func_800160D8(M2C_FIELD(arg0, void ***, 0x14), *(M2C_FIELD(arg0, s32 *, 0x118) + &D_8008ECEC), func_8005AAD0(sp10)) == 0) {
                var_a0_2 = (M2C_UNK *)0x80090000;
                goto block_27;
            }
            var_a0 = &D_8008C864;
        } else {
block_27:
            var_a0 = var_a0_2;
        }
        goto block_29;
    case 0x215:
        D_8008E9A0 = 0;
        func_8004183C(arg0);
        var_a0 = &D_8008C894;
        goto block_29;
    default:
        return 1;
    }
}

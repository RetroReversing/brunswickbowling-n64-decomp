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

M2C_UNK func_80016550(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_80016610(M2C_UNK *);                   /* extern */
s32 func_80016C70(M2C_UNK *);                       /* extern */
s32 func_80016CF0(M2C_UNK *);                       /* extern */
M2C_UNK func_80038028(M2C_UNK *);                   /* extern */
M2C_UNK func_8003875C(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_80038924(M2C_UNK *, M2C_UNK);          /* extern */
s32 func_8003FD68(M2C_UNK *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_8003FF5C(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK D_80081AD0;
extern M2C_UNK D_800827A4;
extern M2C_UNK D_80082D70;
extern s32 D_80082DD8;
extern M2C_UNK D_8008C9CC;
extern M2C_UNK D_8008CB50;
extern M2C_UNK D_8008E9B0;
extern s32 D_8008E9E0;

s32 func_8001B488(void *arg0) {
    s32 temp_v0;
    s32 var_s1;
    s32 var_v0;
    void **temp_v0_2;
    void **temp_v1_2;
    void *temp_v0_3;
    void *temp_v1;

    var_s1 = 0;
    if (func_8003FD68(&D_8008E9B0, 0xFF, 0x20A) != 0) {
        var_s1 = M2C_FIELD(arg0, s32 *, 0x14) < 1;
    }
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x14) - 1;
    M2C_FIELD(arg0, s32 *, 0x14) = temp_v0;
    if (temp_v0 == 0) {
        func_8003875C(&D_8008CB50, 0);
        func_80038924(&D_8008CB50, 2);
        func_80038028(&D_8008C9CC);
        return 1;
    }
    if (var_s1 == 0) {
        var_v0 = 1;
        if ((u32) (D_8008E9E0 - M2C_FIELD(arg0, s32 *, 0x18)) >= 0xFA1U) {
            goto block_7;
        }
    } else {
block_7:
        if (func_80016C70(&D_800827A4) != 0) {
            if (func_80016CF0(&D_800827A4) != 0) {
                temp_v0_2 = M2C_FIELD(M2C_FIELD(&D_80081AD0, void **, 0), void ***, 0x44);
                temp_v1 = *temp_v0_2;
                M2C_FIELD(temp_v1, M2C_UNK (**)(void *), 0x34)(temp_v0_2 + M2C_FIELD(temp_v1, s16 *, 0x30));
                temp_v1_2 = M2C_FIELD(M2C_FIELD(&D_80081AD0, void **, 4), void ***, 0x44);
                temp_v0_3 = *temp_v1_2;
                M2C_FIELD(temp_v0_3, M2C_UNK (**)(void *), 0x34)(temp_v1_2 + M2C_FIELD(temp_v0_3, s16 *, 0x30));
                func_80016610(&D_800827A4);
                D_80082DD8 = 0;
            }
        }
        func_8003FF5C(&D_8008E9B0, 0x5DC);
        func_80016550(&D_800827A4, &D_80082D70);
        var_v0 = 2;
    }
    return var_v0;
}

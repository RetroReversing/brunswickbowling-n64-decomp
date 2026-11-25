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

M2C_UNK func_80020178(M2C_UNK *);                   /* extern */
M2C_UNK func_800244FC(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_8002FA24(void *);                      /* extern */
s32 func_800315E0(M2C_UNK *, s8);                   /* extern */
M2C_UNK func_800375C0(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK D_80083BA8;
extern s32 D_80085224;
extern M2C_UNK D_80089830;
extern M2C_UNK D_8008B3A4;
extern s16 D_8008B7A0;
extern M2C_UNK D_8008C864;

s32 func_8002F63C(void *arg0, s8 arg1, s32 arg2) {
    s32 temp_v1;
    s32 var_s1;
    s8 var_a1;

    var_a1 = arg1;
    if (M2C_FIELD(arg0, s32 *, 0x18) < 0) {
        if (arg2 == 0x216) {
            if (D_8008B7A0 != 0) {
                M2C_FIELD(&D_80089830, s8 *, 0x30) = var_a1;
                func_800244FC(&D_80089830, 1);
                return 0;
            }
            /* Duplicate return node #28. Try simplifying control flow for better match */
            return 0;
        }
        if (arg2 == 0x215) {
            var_s1 = 0;
            if (D_80085224 == 0) {
                var_a1 = 0;
                if (M2C_FIELD(&D_8008B3A4, s32 *, 0x44) == 9) {
                    var_a1 = func_800315E0(&D_8008B3A4, 0) != 0;
                }
                if (var_a1 == 0) {
                    var_s1 = 1;
                }
            }
            if (var_s1 != 0) {
                func_800375C0(&D_8008C864, 0);
                M2C_FIELD(&D_80083BA8, s32 *, 0x5494) = 0;
                M2C_FIELD(&D_80083BA8, s32 *, 8) = 1;
                func_80020178(&D_80083BA8);
                return 0;
            }
            goto block_13;
        }
block_13:
        if (arg2 == 0x20B) {
            if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
                M2C_FIELD(arg0, s32 *, 0x1C) = 0;
            } else {
                M2C_FIELD(arg0, s32 *, 0x1C) = 1;
            }
        }
        if (arg2 == 0x20A) {
            temp_v1 = M2C_FIELD(arg0, s32 *, 0x14);
            if (temp_v1 != 1) {
                if (temp_v1 < 2) {
                    if (temp_v1 != 0) {
                        return 0;
                    }
                    if (func_800315E0(&D_8008B3A4, var_a1) != 0) {
                        goto block_26;
                    }
                    /* Duplicate return node #28. Try simplifying control flow for better match */
                    return 0;
                }
                if (temp_v1 != 2) {
                    return 0;
                }
                goto block_26;
            }
block_26:
            func_8002FA24(arg0);
            goto block_27;
        }
        /* Duplicate return node #28. Try simplifying control flow for better match */
        return 0;
    }
block_27:
    return 0;
}

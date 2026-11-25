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

M2C_UNK func_80016868(M2C_UNK *);                   /* extern */
M2C_UNK func_80037DCC(M2C_UNK *);                   /* extern */
M2C_UNK func_80037E40(M2C_UNK *);                   /* extern */
M2C_UNK func_80037F38(M2C_UNK *);                   /* extern */
M2C_UNK func_80047A68(M2C_UNK *);                   /* extern */
s32 func_80047B44(M2C_UNK *);                       /* extern */
extern M2C_UNK D_800827A4;
extern s32 D_80089C54;
extern M2C_UNK D_8008C9CC;
extern M2C_UNK D_800926E8;

s32 func_8001A948(void *arg0) {
    s16 temp_v0;
    s32 temp_a0;
    s32 var_v0;

    if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        func_80047A68(&D_800926E8);
        temp_v0 = M2C_FIELD(arg0, u16 *, 0x1A) + 2;
        switch (temp_v0) {
        case 3:
        case 4:
            func_80037F38(&D_8008C9CC);
            break;
        case 5:
            func_80037E40(&D_8008C9CC);
            break;
        case 0:
        case 1:
            func_80037DCC(&D_8008C9CC);
            /* fallthrough */
        default:
            break;
        }
    }
    temp_a0 = func_80047B44(&D_800926E8);
    if ((s16) M2C_FIELD(arg0, u16 *, 0x1A) != 0) {
        if (temp_a0 == 0) {
            return 1;
        }
        var_v0 = 1;
        if (D_80089C54 == 0) {
            goto block_12;
        }
        /* Duplicate return node #13. Try simplifying control flow for better match */
        return var_v0;
    }
block_12:
    func_80016868(&D_800827A4);
    var_v0 = 2;
    return var_v0;
}

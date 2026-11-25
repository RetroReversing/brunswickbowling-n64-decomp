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

M2C_UNK func_80037DCC(M2C_UNK *);                   /* extern */
M2C_UNK func_80037E40(M2C_UNK *);                   /* extern */
M2C_UNK func_80037F38(M2C_UNK *);                   /* extern */
extern M2C_UNK D_8008C9CC;

void func_8001A444(void *arg0) {
    s16 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s16 *, 0x14);
    switch (temp_v1) {                              /* irregular */
    case -1:
        func_80037DCC(&D_8008C9CC);
        return;
    case 1:
        func_80037E40(&D_8008C9CC);
        return;
    default:
        func_80037E40(&D_8008C9CC);
        /* fallthrough */
    case 0:
        func_80037F38(&D_8008C9CC);
        return;
    }
}

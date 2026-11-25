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

M2C_UNK func_8001ACB8(M2C_UNK *);                   /* extern */
M2C_UNK func_80038204(M2C_UNK *);                   /* extern */
M2C_UNK func_800462AC(M2C_UNK *);                   /* extern */
extern M2C_UNK D_80082F00;
extern M2C_UNK D_8008BA90;
extern M2C_UNK D_8008C9CC;
extern s32 D_8008E9E0;
extern M2C_UNK D_8008F2F0;

void func_80038FD0(void *arg0) {
    M2C_UNK *__base_D_8008BA90;
    s32 temp_v1;

    if (M2C_FIELD(arg0, s32 *, 0x18) != 0) {
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
        func_800462AC(&D_8008F2F0);
        func_8001ACB8(&D_80082F00);
        func_80038204(&D_8008C9CC);
        __base_D_8008BA90 = &D_8008BA90;
        temp_v1 = M2C_FIELD(__base_D_8008BA90, s32 *, 0x14);
        M2C_FIELD(__base_D_8008BA90, s32 *, 0x14) = 0;
        D_8008E9E0 = temp_v1;
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), void ***, 4) = (void **) M2C_FIELD(arg0, void ***, 4);
    *M2C_FIELD(arg0, void ***, 4) = M2C_FIELD(arg0, void **, 0);
}

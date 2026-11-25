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

M2C_UNK func_80037310(s32);                         /* extern */
M2C_UNK func_80039738(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK *); /* extern */
extern M2C_UNK D_80075CD4;
extern M2C_UNK D_8008CF28;

void func_80023CB4(void *arg0) {
    s16 temp_s0;
    s16 temp_s0_2;
    void *temp_v0;
    void *temp_v0_2;

    if ((M2C_FIELD(arg0, s32 *, 0x18) == 0) && (M2C_FIELD(arg0, s32 *, 0x28) == 0)) {
        temp_v0 = M2C_FIELD(arg0, void **, 0x10);
        temp_s0 = M2C_FIELD(arg0, s16 *, 0x4A);
        if (M2C_FIELD(temp_v0, s32 (**)(void *), 0x74)(arg0 + M2C_FIELD(temp_v0, s16 *, 0x70)) < temp_s0) {
            if (M2C_FIELD(arg0, s16 *, 0x4C) != 0) {
                func_80037310(M2C_FIELD(arg0, s32 *, 0x3C));
                func_80039738(&D_8008CF28, 5, 0, 0x38, 0x3F, &D_80075CD4);
            }
            temp_v0_2 = M2C_FIELD(arg0, void **, 0x10);
            temp_s0_2 = M2C_FIELD(arg0, s16 *, 0x4C);
            if ((temp_s0_2 + M2C_FIELD(temp_v0_2, s32 (**)(void *), 0x74)(arg0 + M2C_FIELD(temp_v0_2, s16 *, 0x70))) < M2C_FIELD(arg0, s16 *, 0x4A)) {
                func_80037310(M2C_FIELD(arg0, s32 *, 0x40));
                func_80039738(&D_8008CF28, 5, 0, 0x38, 0xBC, &D_80075CD4);
            }
        }
    }
}

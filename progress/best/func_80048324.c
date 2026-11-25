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

extern f32 D_80079B60;
extern M2C_UNK D_8009C690;
extern f32 D_8009C710;
extern f32 D_8009C714;
extern f32 D_8009C718;
extern f32 D_8009C71C;

void func_80048324(f32 arg0, f32 arg1, f32 arg2, f32 *arg3, f32 *arg4, f32 *arg5) {
    f32 temp_ft3;

    temp_ft3 = (M2C_FIELD(&D_8009C690, f32 *, 0xC) * arg0) + (M2C_FIELD(&D_8009C690, f32 *, 0x1C) * arg1) + (M2C_FIELD(&D_8009C690, f32 *, 0x2C) * arg2) + M2C_FIELD(&D_8009C690, f32 *, 0x3C);
    if (temp_ft3 != 0.0f) {
        *arg5 = ((M2C_FIELD(&D_8009C690, f32 *, 8) * arg0) + (M2C_FIELD(&D_8009C690, f32 *, 0x18) * arg1) + (M2C_FIELD(&D_8009C690, f32 *, 0x28) * arg2) + M2C_FIELD(&D_8009C690, f32 *, 0x38)) / temp_ft3;
        *arg3 = ((((M2C_FIELD(&D_8009C690, f32 *, 0) * arg0) + (M2C_FIELD(&D_8009C690, f32 *, 0x10) * arg1) + (M2C_FIELD(&D_8009C690, f32 *, 0x20) * arg2) + M2C_FIELD(&D_8009C690, f32 *, 0x30)) / temp_ft3) * D_8009C710) + D_8009C718;
        *arg4 = ((((M2C_FIELD(&D_8009C690, f32 *, 4) * arg0) + (M2C_FIELD(&D_8009C690, f32 *, 0x14) * arg1) + (M2C_FIELD(&D_8009C690, f32 *, 0x24) * arg2) + M2C_FIELD(&D_8009C690, f32 *, 0x34)) / temp_ft3) * D_8009C714) + D_8009C71C;
        return;
    }
    *arg3 = D_80079B60;
    *arg4 = D_80079B60;
    *arg5 = D_80079B60;
}

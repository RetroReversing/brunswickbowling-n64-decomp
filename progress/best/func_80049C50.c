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

s32 func_80048324(f32, f32, f32, f32 *, f32 *, f32 *); /* extern */
s32 guMtxCatF();
extern f32 D_80079B74;
extern char D_8009C690[];
extern char D_8009C6D0[];

void func_80049C50(s32 arg0, void *arg1, f32 *arg2, f32 *arg3, f32 *arg4, f32 *arg5, f32 *arg6, f32 *arg7) {
    f32 sp18;
    f32 sp1C;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp2C;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp3C;
    f32 sp40;
    f32 sp44;
    f32 sp48;
    f32 sp4C;
    f32 sp50;
    f32 sp54;
    f32 sp58;
    f32 sp5C;
    f32 sp60;
    f32 sp64;
    f32 sp68;
    f32 sp6C;
    f32 sp70;
    f32 sp74;
    char *var_v1;
    f32 temp_fs0;
    f32 temp_fs1;
    f32 temp_fs2;
    f32 temp_fs3;
    f32 temp_fs4;
    f32 temp_fs5;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    f32 temp_fv1_4;
    f32 temp_fv1_5;
    f32 temp_fv1_6;
    s32 var_a0;

    temp_fs5 = M2C_FIELD(arg1, f32 *, 0x40) * D_80079B74;
    temp_fs1 = M2C_FIELD(arg1, f32 *, 0x48) * D_80079B74;
    temp_fs0 = M2C_FIELD(arg1, f32 *, 0x50) * D_80079B74;
    temp_fs2 = M2C_FIELD(arg1, f32 *, 0x44) * D_80079B74;
    temp_fs4 = M2C_FIELD(arg1, f32 *, 0x4C) * D_80079B74;
    temp_fs3 = M2C_FIELD(arg1, f32 *, 0x54) * D_80079B74;
    guMtxCatF(arg0, D_8009C6D0, D_8009C690);
    func_80048324(temp_fs5, temp_fs1, temp_fs0, &sp18, &sp1C, &sp20);
    func_80048324(temp_fs2, temp_fs1, temp_fs0, &sp24, &sp28, &sp2C);
    func_80048324(temp_fs2, temp_fs4, temp_fs0, &sp30, &sp34, &sp38);
    func_80048324(temp_fs5, temp_fs4, temp_fs0, &sp3C, &sp40, &sp44);
    func_80048324(temp_fs5, temp_fs1, temp_fs3, &sp48, &sp4C, &sp50);
    func_80048324(temp_fs2, temp_fs1, temp_fs3, &sp54, &sp58, &sp5C);
    func_80048324(temp_fs2, temp_fs4, temp_fs3, &sp60, &sp64, &sp68);
    func_80048324(temp_fs5, temp_fs4, temp_fs3, &sp6C, &sp70, &sp74);
    *arg5 = sp18;
    *arg2 = sp18;
    var_a0 = 1;
    *arg6 = sp1C;
    *arg3 = sp1C;
    var_v1 = &sp24;
    *arg7 = sp20;
    *arg4 = sp20;
    do {
        temp_fv1 = M2C_FIELD(var_v1, f32 *, 0);
        if (temp_fv1 < *arg2) {
            *arg2 = temp_fv1;
        }
        temp_fv1_2 = M2C_FIELD(var_v1, f32 *, 0);
        if (*arg5 < temp_fv1_2) {
            *arg5 = temp_fv1_2;
        }
        temp_fv1_3 = M2C_FIELD(var_v1, f32 *, 4);
        if (temp_fv1_3 < *arg3) {
            *arg3 = temp_fv1_3;
        }
        temp_fv1_4 = M2C_FIELD(var_v1, f32 *, 4);
        if (*arg6 < temp_fv1_4) {
            *arg6 = temp_fv1_4;
        }
        temp_fv1_5 = M2C_FIELD(var_v1, f32 *, 8);
        if (temp_fv1_5 < *arg4) {
            *arg4 = temp_fv1_5;
        }
        temp_fv1_6 = M2C_FIELD(var_v1, f32 *, 8);
        if (*arg7 < temp_fv1_6) {
            *arg7 = temp_fv1_6;
        }
        var_a0 += 1;
        var_v1 += 0xC;
    } while (var_a0 < 8);
}

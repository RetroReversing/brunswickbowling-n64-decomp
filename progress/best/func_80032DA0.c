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

M2C_UNK func_80032A74(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_80032AB0(void *, s16);                 /* extern */
M2C_UNK func_80032B14(void *, s32);                 /* extern */
M2C_UNK func_800473DC(M2C_UNK *, M2C_UNK *);        /* extern */
extern f64 D_80077878;
extern s32 D_8008E9E0;
extern M2C_UNK D_80092484;

void func_80032DA0(void *arg0, s32 arg1) {
    union {
        unsigned char bytes[24];
        struct { M2C_UNK value; } view_sp10;
        struct { unsigned char pad[16]; f64 value; } view_sp20;
    } m2c_initial_frame;

                 
    f64 temp_fs0;
    s16 temp_s0;
    s16 temp_s3;
    s16 var_s1;
    s32 temp_a0;
    s32 temp_a2;
    u32 temp_v1;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x2E4);
    temp_a2 = M2C_FIELD(arg0, s32 *, 0x2DC);
    temp_v1 = M2C_FIELD(arg0, u32 *, 0x2E0);
    temp_fs0 = D_80077878;
    var_s1 = ((u32) ((arg1 - temp_a0) * temp_a2) / temp_v1) + 1;
    temp_s3 = ((u32) ((D_8008E9E0 - temp_a0) * temp_a2) / temp_v1) + 1;
loop_1:
    temp_s0 = var_s1 + 1;
    func_80032B14(arg0, temp_s0 & 0xFFFF);
    func_800473DC(&D_80092484, &m2c_initial_frame.view_sp10.value);
    var_s1 = temp_s0;
    if (m2c_initial_frame.view_sp20.value < temp_fs0) {
        if (temp_s0 < temp_s3) {
            goto loop_1;
        }
    }
    func_80032A74(arg0, 1, 1);
    func_80032AB0(arg0, temp_s0);
}

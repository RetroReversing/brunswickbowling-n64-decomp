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

M2C_UNK func_80010BCC(s32 *);                       /* extern */
M2C_UNK func_80032374(void *, void *);              /* extern */
M2C_UNK func_80032744(void *, M2C_UNK, s32);        /* extern */
M2C_UNK func_800580A0(f64 *, M2C_UNK, M2C_UNK, s32); /* extern */
extern f64 D_80077858;
extern f64 D_80077860;
extern f64 D_80077868;

void func_80032558(void *arg0, void *arg1, s32 arg2) {
    union {
        unsigned char bytes[48];
        struct { s32 value; } view_sp10;
        struct { unsigned char pad[4]; s32 value; } view_sp14;
        struct { unsigned char pad[8]; s32 value; } view_sp18;
        struct { unsigned char pad[12]; s32 value; } view_sp1C;
        struct { unsigned char pad[16]; s32 value; } view_sp20;
        struct { unsigned char pad[20]; s32 value; } view_sp24;
        struct { unsigned char pad[24]; f64 value; } view_sp28;
        struct { unsigned char pad[32]; s32 value; } view_sp30;
        struct { unsigned char pad[36]; s32 value; } view_sp34;
        struct { unsigned char pad[40]; f64 value; } view_sp38;
        struct { unsigned char pad[28]; s32 value; } view_unksp2C;
        struct { unsigned char pad[44]; s32 value; } view_unksp3C;
    } m2c_initial_frame;

                                                    /* compiler-managed */
             
                                                    /* compiler-managed */
             
                                                    /* compiler-managed */
             
             
             
    f64 temp_fs0;
    f64 temp_fs1;
    f64 temp_fs2;
    f64 temp_fv0;
    s16 temp_v1;
    s32 var_a3;
    s32 var_v0;

    temp_v1 = M2C_FIELD(arg1, s16 *, 0);
    if (temp_v1 < 0x7C) {
        var_a3 = 0x5DC;
        var_v0 = 0x514;
    } else {
        var_a3 = 0xAF0;
        if (temp_v1 < 0x85) {
            var_v0 = 0x14;
        } else {
            var_a3 = 0xB04;
            var_v0 = 0x17C;
        }
    }
    temp_fs1 = D_80077858;
    temp_fs2 = D_80077860;
    temp_fs0 = ((f64) (var_a3 + ((M2C_FIELD(arg1, s16 *, 0) * var_v0) / 160)) / temp_fs1) * temp_fs2;
    func_800580A0(&m2c_initial_frame.view_sp28.value, 0, 0x18, var_a3);
    m2c_initial_frame.view_sp38.value = D_80077868;
    m2c_initial_frame.view_sp28.value = ((f64) (M2C_FIELD(arg1, s16 *, 8) - M2C_FIELD(arg1, s16 *, 6)) / temp_fs1) * temp_fs2;
    m2c_initial_frame.view_sp10.value = M2C_BITWISE(s32, m2c_initial_frame.view_sp28.value);
    m2c_initial_frame.view_sp14.value = m2c_initial_frame.view_unksp2C.value;
    m2c_initial_frame.view_sp18.value = m2c_initial_frame.view_sp30.value;
    m2c_initial_frame.view_sp1C.value = m2c_initial_frame.view_sp34.value;
    m2c_initial_frame.view_sp20.value = (s32) m2c_initial_frame.view_sp38.value;
    m2c_initial_frame.view_sp24.value = m2c_initial_frame.view_unksp3C.value;
    func_80010BCC(&m2c_initial_frame.view_sp10.value);
    temp_fv0 = M2C_BITWISE(f64, m2c_initial_frame.view_sp20.value) * temp_fs0;
    m2c_initial_frame.view_sp10.value = M2C_BITWISE(f64, m2c_initial_frame.view_sp10.value) * temp_fs0;
    m2c_initial_frame.view_sp18.value = M2C_BITWISE(f64, m2c_initial_frame.view_sp18.value) * temp_fs0;
    m2c_initial_frame.view_sp20.value = temp_fv0;
    M2C_FIELD(arg0, f64 *, 0x338) = (f64) (((f64) M2C_FIELD(arg1, s16 *, 6) / temp_fs1) * temp_fs2);
    M2C_FIELD(arg0, f64 *, 0x340) = m2c_initial_frame.view_sp10.value;
    M2C_FIELD(arg0, f64 *, 0x348) = temp_fv0;
    M2C_FIELD(arg0, f64 *, 0x350) = (f64) (((f64) ((s32) (M2C_FIELD(arg1, s16 *, 4) * 0x29) >> 9) / temp_fs1) * temp_fs2);
    M2C_FIELD(arg0, u16 *, 0x358) = (u16) M2C_FIELD(arg1, u16 *, 0xA);
    M2C_FIELD(arg0, u16 *, 0x35A) = (u16) M2C_FIELD(arg1, u16 *, 0xC);
    if (arg2 != 0) {
        func_80032374(arg0, arg1);
    }
    func_80032744(arg0, 0, arg2);
}

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

M2C_UNK *func_80042FC4(M2C_UNK *);                  /* extern */
M2C_UNK func_800473DC(s32, f64 *);                  /* extern */
M2C_UNK func_80047C24(M2C_UNK *, u8, f64 *, f64 *, f64 *); /* extern */
extern f64 D_80073E40;
extern f64 D_80073E48;
extern u8 D_80082047;
extern M2C_UNK D_800823A8;
extern f64 D_80082698;
extern M2C_UNK D_800826A0;
extern f64 D_800826A8;
extern f64 D_800826B0;
extern M2C_UNK D_800826B8;
extern f64 D_800826C0;
extern f64 D_800826C8;
extern M2C_UNK D_8008ED80;
extern f64 D_8008ED88;
extern f64 D_8008ED90;
extern f64 D_8008ED98;
extern f64 D_8008EDA0;
extern f64 D_8008EDA8;
extern f64 D_8008EDB0;
extern f64 D_8008EDC0;
extern s32 D_8008F09C;
extern M2C_UNK D_800926E8;

M2C_UNK *func_80014530(void *arg0) {
    union {
        unsigned char bytes[80];
        struct { f64 value; } view_sp18;
        struct { unsigned char pad[8]; f64 value; } view_sp20;
        struct { unsigned char pad[16]; f64 value; } view_sp28;
        struct { unsigned char pad[24]; f64 value; } view_sp30;
        struct { unsigned char pad[32]; f64 value; } view_sp38;
        struct { unsigned char pad[40]; f64 value; } view_sp40;
        struct { unsigned char pad[48]; f64 value; } view_sp48;
        struct { unsigned char pad[56]; f64 value; } view_sp50;
        struct { unsigned char pad[64]; f64 value; } view_sp58;
        struct { unsigned char pad[72]; f64 value; } view_sp60;
    } m2c_initial_frame;

             
             
             
             
    M2C_UNK *var_v0;
    f64 temp_ft1;
    f64 var_fv0;
    f64 var_fv0_2;
    s32 var_s0;
    u8 temp_v1;
    u8 temp_v1_2;

    var_s0 = 0;
    if (arg0 == &D_800823A8) {
        func_80047C24(&D_800926E8, D_80082047, &m2c_initial_frame.view_sp30.value, &m2c_initial_frame.view_sp48.value, &m2c_initial_frame.view_sp60.value);
        if (m2c_initial_frame.view_sp60.value != D_80082698) {
            var_s0 = 1;
            D_80082698 = m2c_initial_frame.view_sp60.value;
            D_8008EDC0 = m2c_initial_frame.view_sp60.value;
        }
        temp_ft1 = (f64) M2C_FIELD(&D_800926E8, f32 *, 0x7C);
        if ((M2C_FIELD(&D_800826A0, f64 *, 0) != (m2c_initial_frame.view_sp48.value + temp_ft1)) || (M2C_FIELD(&D_800826A0, f64 *, 8) != m2c_initial_frame.view_sp50.value) || (M2C_FIELD(&D_800826A0, f64 *, 0x10) != m2c_initial_frame.view_sp58.value)) {
            var_s0 = 1;
            M2C_FIELD(&D_800826A0, f64 *, 8) = m2c_initial_frame.view_sp50.value;
            M2C_FIELD(&D_800826A0, f64 *, 0x10) = m2c_initial_frame.view_sp58.value;
            M2C_FIELD(&D_800826A0, f64 *, 0) = (f64) (m2c_initial_frame.view_sp48.value + temp_ft1);
            D_8008EDA8 = -D_800826A8;
            D_8008EDB0 = D_800826B0;
            D_8008EDA0 = M2C_FIELD(&D_800826A0, f64 *, 0);
        }
        if ((M2C_FIELD(&D_800826B8, f64 *, 0) != (m2c_initial_frame.view_sp30.value + temp_ft1)) || (M2C_FIELD(&D_800826B8, f64 *, 8) != m2c_initial_frame.view_sp38.value) || (var_v0 = &D_800826B8, (M2C_FIELD(&D_800826B8, f64 *, 0x10) != m2c_initial_frame.view_sp40.value))) {
            var_v0 = &D_800826B8;
            M2C_FIELD(&D_800826B8, f64 *, 8) = m2c_initial_frame.view_sp38.value;
            M2C_FIELD(&D_800826B8, f64 *, 0x10) = m2c_initial_frame.view_sp40.value;
            M2C_FIELD(&D_800826B8, f64 *, 0) = (f64) (m2c_initial_frame.view_sp30.value + temp_ft1);
            D_8008ED90 = -D_800826C0;
            D_8008ED98 = D_800826C8;
            D_8008ED88 = M2C_FIELD(&D_800826B8, f64 *, 0);
            var_s0 = 1;
        }
    } else {
        if (M2C_FIELD(arg0, s32 *, 0) != 0) {
            M2C_FIELD(&D_800826B8, f64 *, 0x10) = 0.0;
            M2C_FIELD(&D_800826B8, f64 *, 8) = 0.0;
            M2C_FIELD(&D_800826B8, f64 *, 0) = 0.0;
            func_800473DC(M2C_FIELD(arg0, s32 *, 0), &m2c_initial_frame.view_sp18.value);
            temp_v1 = M2C_FIELD(arg0, u8 *, 0x38);
            if (temp_v1 & 0x20) {
                var_fv0 = m2c_initial_frame.view_sp18.value;
                goto block_17;
            }
            if ((temp_v1 & 0x80) && (D_8008F09C != 0)) {
                var_fv0 = M2C_FIELD(&D_800826B8, f64 *, 0) + D_80073E40;
block_17:
                M2C_FIELD(&D_800826B8, f64 *, 0) = var_fv0;
            }
            if (M2C_FIELD(arg0, u8 *, 0x38) & 0x10) {
                D_800826C0 = m2c_initial_frame.view_sp20.value;
            }
            if (M2C_FIELD(arg0, u8 *, 0x38) & 8) {
                D_800826C8 = m2c_initial_frame.view_sp28.value;
            }
            M2C_FIELD(&D_800826B8, f64 *, 0) = (f64) (M2C_FIELD(&D_800826B8, f64 *, 0) + M2C_FIELD(arg0, f64 *, 8));
            M2C_FIELD(&D_800826B8, f64 *, 8) = (f64) (M2C_FIELD(&D_800826B8, f64 *, 8) + M2C_FIELD(arg0, f64 *, 0x10));
            var_s0 = 1;
            D_8008ED88 = M2C_FIELD(&D_800826B8, f64 *, 0);
            M2C_FIELD(&D_800826B8, f64 *, 0x10) = (f64) (M2C_FIELD(&D_800826B8, f64 *, 0x10) + M2C_FIELD(arg0, f64 *, 0x18));
            D_8008ED90 = -D_800826C0;
            D_8008ED98 = D_800826C8;
        }
        var_v0 = &D_800826A0;
        if (M2C_FIELD(arg0, s32 *, 4) != 0) {
            M2C_FIELD(&D_800826A0, f64 *, 0x10) = 0.0;
            M2C_FIELD(&D_800826A0, f64 *, 8) = 0.0;
            M2C_FIELD(&D_800826A0, f64 *, 0) = 0.0;
            func_800473DC(M2C_FIELD(arg0, s32 *, 4), &m2c_initial_frame.view_sp18.value);
            temp_v1_2 = M2C_FIELD(arg0, u8 *, 0x38);
            if (temp_v1_2 & 4) {
                var_fv0_2 = m2c_initial_frame.view_sp18.value;
                goto block_29;
            }
            if ((temp_v1_2 & 0x80) && (D_8008F09C != 0)) {
                var_fv0_2 = M2C_FIELD(&D_800826A0, f64 *, 0) + D_80073E48;
block_29:
                M2C_FIELD(&D_800826A0, f64 *, 0) = var_fv0_2;
            }
            if (M2C_FIELD(arg0, u8 *, 0x38) & 2) {
                D_800826A8 = m2c_initial_frame.view_sp20.value;
            }
            if (M2C_FIELD(arg0, u8 *, 0x38) & 1) {
                D_800826B0 = m2c_initial_frame.view_sp28.value;
            }
            var_v0 = &D_800826A0;
            M2C_FIELD(&D_800826A0, f64 *, 0) = (f64) (M2C_FIELD(&D_800826A0, f64 *, 0) + M2C_FIELD(arg0, f64 *, 0x20));
            M2C_FIELD(&D_800826A0, f64 *, 8) = (f64) (M2C_FIELD(&D_800826A0, f64 *, 8) + M2C_FIELD(arg0, f64 *, 0x28));
            var_s0 = 1;
            D_8008EDA0 = M2C_FIELD(&D_800826A0, f64 *, 0);
            M2C_FIELD(&D_800826A0, f64 *, 0x10) = (f64) (M2C_FIELD(&D_800826A0, f64 *, 0x10) + M2C_FIELD(arg0, f64 *, 0x30));
            D_8008EDA8 = -D_800826A8;
            D_8008EDB0 = D_800826B0;
        }
    }
    if (var_s0 != 0) {
        var_v0 = func_80042FC4(&D_8008ED80);
    }
    return var_v0;
}

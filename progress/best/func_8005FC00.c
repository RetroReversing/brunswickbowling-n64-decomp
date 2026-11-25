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

s32 func_8005FEF0();                                /* extern */
M2C_UNK func_8005FF60(s32);                         /* extern */
M2C_UNK func_80060BB0();                            /* extern */
M2C_UNK func_80066C50(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_80068220(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_8006C440(M2C_UNK *, M2C_UNK, M2C_UNK *, s32 *, M2C_UNK *, s32); /* extern */
s32 func_8006C5F0(M2C_UNK);                         /* extern */
M2C_UNK func_8006C610(M2C_UNK, s32);                /* extern */
M2C_UNK func_8006C6E0(M2C_UNK *);                   /* extern */
extern s32 D_80097900;
extern M2C_UNK *D_80097904;
extern M2C_UNK *D_80097908;
extern M2C_UNK *D_8009790C;
extern M2C_UNK *D_80097910;
extern M2C_UNK *D_80097914;
extern M2C_UNK *D_80097918;
extern s32 D_80097950;
extern M2C_UNK D_800A5D80;
extern M2C_UNK D_800A6F30;
extern M2C_UNK D_800A74E0;
extern M2C_UNK D_800A7520;
extern M2C_UNK D_800A7538;
extern M2C_UNK D_800A76C0;
extern M2C_UNK func_8005FDCC;
extern M2C_UNK func_8005FF80;
extern M2C_UNK func_80060050;
extern M2C_UNK func_80060480;

void func_8005FC00(s32 arg0, M2C_UNK *arg1, M2C_UNK *arg2, M2C_UNK arg3) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s3;

    if (D_80097900 == 0) {
        func_80066C50(arg1, arg2, arg3);
        func_80066C50(&D_800A7520, &D_800A7538, 1);
        if (D_80097950 == 0) {
            func_80060BB0();
        }
        func_80068220(8, &D_800A7520, 0x22222222);
        var_s3 = -1;
        temp_v0 = func_8006C5F0(0);
        if (temp_v0 < arg0) {
            var_s3 = temp_v0;
            func_8006C610(0, arg0);
        }
        temp_v0_2 = func_8005FEF0();
        D_80097900 = 1;
        D_80097910 = &D_800A76C0;
        D_80097914 = &func_8005FF80;
        D_80097918 = &func_80060050;
        D_8009790C = &D_800A7520;
        D_80097904 = &D_800A5D80;
        D_80097908 = arg1;
        func_8006C440(&D_800A5D80, 0, &func_80060480, &D_80097900, &D_800A6F30, arg0);
        func_8006C6E0(&D_800A5D80);
        func_8006C440(&D_800A6F30, 0, &func_8005FDCC, NULL, &D_800A74E0, arg0 - 1);
        func_8006C6E0(&D_800A6F30);
        func_8005FF60(temp_v0_2);
        if (var_s3 != -1) {
            func_8006C610(0, var_s3);
        }
    }
}

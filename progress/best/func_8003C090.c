/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O1, tried by autopilot */
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

M2C_UNK func_800137B0(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_800233FC(void *, s16);                 /* extern */
void *func_8003FE3C(M2C_UNK *, u8);                 /* extern */
M2C_UNK func_8005978C(); /* extern */
extern M2C_UNK D_80078694;
extern M2C_UNK D_8007869C;
extern s32 D_8007DA40;
extern M2C_UNK D_8007DA48;
extern M2C_UNK D_8007F618;
extern M2C_UNK D_80081B20;
extern M2C_UNK D_8008AFB0;
extern s32 D_8008E670;
extern M2C_UNK D_8008E9B0;

void func_8003C090(void *arg0) {
    M2C_UNK *var_s0_2;
    M2C_UNK *var_s1;
    M2C_UNK *var_s1_2;
    M2C_UNK *var_s2;
    s32 *var_s3;
    s32 var_s0;
    s32 var_s2_2;
    s32 var_s4;
    s32 var_v0;

    var_s4 = 0;
    var_s3 = &D_8008E670;
    var_s0 = 0x50;
    var_s2 = &D_8007DA48;
    var_s1 = &D_8007F618;
loop_1:
    if (var_s4 < D_8007DA40) {
        if ((M2C_FIELD(var_s1, u8 *, 0x18) ^ 2) == 0) {
            func_8005978C(arg0 + var_s0, &D_80078694, var_s2 + 0x14);
            var_v0 = arg0 + var_s0;
        } else {
            func_8005978C(arg0 + var_s0, &D_8007869C, func_8003FE3C(&D_8008E9B0, M2C_FIELD(var_s1, u8 *, 0x2C)), var_s2 + 0x14);
            var_v0 = arg0 + var_s0;
        }
        *var_s3 = var_v0;
        var_s3 += 0x10;
        var_s0 += 0x20;
        var_s2 += 0x1C4;
        var_s1 += 0x5C;
        var_s4 += 1;
        goto loop_1;
    }
    var_s2_2 = 0;
    func_800233FC(arg0, M2C_FIELD(arg0, s16 *, 0x20));
    var_s1_2 = &D_80081B20;
    var_s0_2 = &D_8007F618;
loop_7:
    if (var_s2_2 < D_8007DA40) {
        if ((M2C_FIELD(var_s0_2, u8 *, 0x18) ^ 2) == 0) {
            func_800137B0(var_s1_2, &D_8008AFB0, -1, -1, 2);
        }
        var_s1_2 += 0x4C;
        var_s0_2 += 23;
        var_s2_2 += 1;
        goto loop_7;
    }
}

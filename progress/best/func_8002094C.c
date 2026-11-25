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

M2C_UNK func_80011A4C(void *, M2C_UNK, M2C_UNK);    /* extern */
void *func_800205E0(void *, s32);                   /* extern */
M2C_UNK func_80040914(M2C_UNK *, void *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_8008EB34;

void func_8002094C(void *arg0, void *arg1, M2C_UNK arg2) {
    s32 var_s0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    u8 temp_a1;
    void *temp_v0;

    var_s0 = 0;
loop_1:
    if (var_s0 < 0xF) {
        temp_v0 = func_800205E0(arg0, var_s0);
        temp_a1 = M2C_FIELD(temp_v0, u8 *, 0);
        var_v1 = 0;
        if (temp_a1 == M2C_FIELD(arg1, u8 *, 8)) {
            var_v1 = M2C_FIELD(temp_v0, u8 *, 1) == M2C_FIELD((arg1 + 8), u8 *, 1);
        }
        var_v0 = var_s0 * 4;
        if (var_v1 == 0) {
            var_v0_2 = 0;
            if (temp_a1 == 0) {
                var_v0_2 = M2C_FIELD(temp_v0, u8 *, 1) == 0;
            }
            var_v0 = var_s0 * 4;
            if (var_v0_2 == 0) {
                var_s0 += 1;
                goto loop_1;
            }
        }
    } else {
        var_v0 = var_s0 * 4;
    }
    M2C_FIELD(arg0, void **, 0) = (void *) (((var_v0 + var_s0) * 0x10) + arg0 + 0x168A);
    M2C_FIELD(arg0, s32 *, 8) = 1;
    M2C_FIELD(arg0, s32 *, 4) = 8;
    func_80011A4C(arg1, arg2, 2);
    func_80040914(&D_8008EB34, arg0 + 0x1680, 1, -1);
}

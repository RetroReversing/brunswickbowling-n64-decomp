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

M2C_UNK func_8005978C(void *, M2C_UNK *, s16);      /* extern */
extern M2C_UNK D_80076A20;

void func_8002BEE0(void *arg0) {
    s16 temp_v0_2;
    s32 var_v0;
    s32 temp_a1;
    u8 temp_v1;
    u8 temp_v1_2;
    void *temp_v0;
    int temp;

    temp_v1 = M2C_FIELD(arg0, u8 *, 0xD);
    if ((temp_v1 == 3) || ((temp_v1 == 2) && ((M2C_FIELD(arg0, u8 *, 0xF) + M2C_FIELD(arg0, u8 *, 0x10)) < 0xA))) {
        void *temp;
        temp_v1_2 = M2C_FIELD(arg0, u8 *, 0xF);
        temp_a1 = M2C_FIELD(arg0, u8 *, 0x10);
        temp_v0 = M2C_FIELD(arg0, void **, 0);
        if (temp_v0 != NULL) {
            var_v0 = M2C_FIELD(temp_v0, s16 *, 4) + temp_v1_2 + temp_a1;
        } else {
            temp = temp_v1_2 + temp_a1;
            var_v0 = temp;
        }
        temp_v0_2 = var_v0 + M2C_FIELD(arg0, u8 *, 0x11);
        M2C_FIELD(arg0, s16 *, 4) = temp_v0_2;
        temp = arg0 + 9;
        func_8005978C(temp, &D_80076A20, temp_v0_2);
    }
}

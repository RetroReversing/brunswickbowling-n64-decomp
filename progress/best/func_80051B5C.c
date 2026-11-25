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

extern void *D_8009CC60;
extern s32 D_8009DB10;
extern s32 D_8009DB14;
extern s32 D_8009DB18;

void *func_80051B5C(void *arg0, void *arg1) {
    s32 temp_v1;
    s32 var_t4;
    void *temp_t5;
    void *temp_t5_10;
    void *temp_t5_11;
    void *temp_t5_12;
    void *temp_t5_13;
    void *temp_t5_2;
    void *temp_t5_3;
    void *temp_t5_4;
    void *temp_t5_5;
    void *temp_t5_6;
    void *temp_t5_7;
    void *temp_t5_8;
    void *temp_t5_9;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *var_a1;
    void *var_a2;
    void *var_a3;
    void *var_t0;
    void *var_t1;
    void *var_t2;
    void *var_t5;
    void *var_v0;

    temp_v1 = M2C_FIELD(arg0, u8 *, 0) & 7;
    var_t5 = arg1;
    if (temp_v1 != 1) {
        if (temp_v1 >= 2) {
            if (temp_v1 == 2) {
                temp_v1_2 = var_t5;
                var_t5 += 8;
                M2C_FIELD(temp_v1_2, s32 *, 0) = 0xBA000E02;
                M2C_FIELD(temp_v1_2, s32 *, 4) = 0;
                D_8009DB10 = 0x800;
                D_8009DB14 = 0x40;
                D_8009DB18 = 0x20;
                goto block_16;
            }
            temp_v1_3 = var_t5;
            if (temp_v1 != 5) {
                var_v0 = var_t5;
            } else {
                var_t5 += 8;
                M2C_FIELD(temp_v1_3, s32 *, 0) = 0xBA000E02;
                M2C_FIELD(temp_v1_3, s32 *, 4) = 0;
                D_8009DB10 = 0x400;
                D_8009DB14 = 0x20;
                D_8009DB18 = 0x20;
                goto block_16;
            }
        } else {
            temp_v1_4 = var_t5;
            if (temp_v1 != 0) {
                var_v0 = var_t5;
            } else {
                temp_t5_2 = var_t5 + 8;
                var_a1 = temp_t5_2;
                temp_t5_3 = temp_t5_2 + 8;
                var_a2 = temp_t5_3;
                temp_t5_4 = temp_t5_3 + 8;
                var_t1 = temp_t5_4;
                temp_t5_5 = temp_t5_4 + 8;
                var_a3 = temp_t5_5;
                temp_t5_6 = temp_t5_5 + 8;
                var_t2 = temp_t5_6;
                temp_t5_7 = temp_t5_6 + 8;
                var_t4 = 0x0703C000;
                var_t0 = temp_t5_7;
                var_t5 = temp_t5_7 + 8;
                M2C_FIELD(temp_v1_4, s32 *, 0) = 0xBA000E02;
                M2C_FIELD(temp_v1_4, s32 *, 4) = 0x8000;
                M2C_FIELD(var_t5, s32 *, 8) = 0xFD100000;
                D_8009DB10 = 0x1000;
                D_8009DB14 = 0x40;
                D_8009DB18 = 0x40;
                goto block_13;
            }
        }
    } else {
        temp_v1_5 = var_t5;
        temp_t5_8 = var_t5 + 8;
        var_a1 = temp_t5_8;
        temp_t5_9 = temp_t5_8 + 8;
        var_a2 = temp_t5_9;
        temp_t5_10 = temp_t5_9 + 8;
        var_t1 = temp_t5_10;
        temp_t5_11 = temp_t5_10 + 8;
        var_a3 = temp_t5_11;
        temp_t5_12 = temp_t5_11 + 8;
        var_t2 = temp_t5_12;
        temp_t5_13 = temp_t5_12 + 8;
        var_t4 = 0x073FC000;
        var_t0 = temp_t5_13;
        var_t5 = temp_t5_13 + 8;
        M2C_FIELD(temp_v1_5, s32 *, 0) = 0xBA000E02;
        M2C_FIELD(temp_v1_5, s32 *, 4) = 0x8000;
        M2C_FIELD(var_t5, s32 *, 8) = 0xFD100000;
        D_8009DB10 = 0x800;
        D_8009DB14 = 0x40;
        D_8009DB18 = 0x20;
block_13:
        M2C_FIELD(var_a1, s32 *, 4) = M2C_FIELD(arg0, s32 *, 0x18);
        M2C_FIELD(var_a2, s32 *, 0) = 0xE8000000;
        M2C_FIELD(var_a2, s32 *, 4) = 0;
        M2C_FIELD(var_t1, s32 *, 4) = 0x07000000;
        M2C_FIELD(var_t1, s32 *, 0) = 0xF5000100;
        M2C_FIELD(var_a3, s32 *, 0) = 0xE6000000;
        M2C_FIELD(var_a3, s32 *, 4) = 0;
        M2C_FIELD(var_t2, s32 *, 0) = 0xF0000000;
        M2C_FIELD(var_t2, s32 *, 4) = var_t4;
        M2C_FIELD(var_t0, s32 *, 0) = 0xE7000000;
        M2C_FIELD(var_t0, s32 *, 4) = 0;
block_16:
        var_v0 = var_t5;
    }
    temp_t5 = var_t5 + 8;
    M2C_FIELD(var_v0, s32 *, 0) = 0xE7000000;
    M2C_FIELD(var_v0, s32 *, 4) = 0;
    D_8009CC60 = temp_t5;
    return temp_t5;
}

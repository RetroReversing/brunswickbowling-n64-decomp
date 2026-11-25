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

extern int D_8008CCB8;
extern int D_8008CCD4;
extern char D_8008CCB0[];
extern s32 D_8008CF64;
extern char D_8008CF68[];
extern char D_8008CFB0[];
extern void *D_8009CC60;

void func_80039C20(void *arg0, s32 arg1) {
    void *sp0;
    s16 temp_a3;
    s32 temp_s0;
    s32 temp_v0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_t5;
    s32 var_t6;
    s32 var_t6_2;
    s32 var_t7;
    u16 temp_t0;
    u16 temp_v1_2;
    void *temp_a0;
    void *temp_t3;
    void *temp_t3_10;
    void *temp_t3_11;
    void *temp_t3_12;
    void *temp_t3_13;
    void *temp_t3_14;
    void *temp_t3_15;
    void *temp_t3_16;
    void *temp_t3_17;
    void *temp_t3_2;
    void *temp_t3_3;
    void *temp_t3_4;
    void *temp_t3_5;
    void *temp_t3_6;
    void *temp_t3_7;
    void *temp_t3_8;
    void *temp_t3_9;
    void *temp_t4;
    void *temp_v0_2;
    void *temp_v1;
    void *temp_v1_3;
    void *var_t3;
    void *var_t4;
    void *var_v1;

    var_s3 = -1;
    if (M2C_FIELD(arg0, u16 *, 0x38) != 0) {
        var_s2 = 0;
        if (D_8008CF64 != 0) {
            M2C_FIELD(arg0, u16 *, 0x38) = 0U;
            return;
        }
        sp0 = arg0;
        var_t4 = D_8009CC60 + 8;
        M2C_FIELD(D_8009CC60, s32 *, 0) = 0x06000000;
        M2C_FIELD(D_8009CC60, s32 **, 4) = D_8008CF68;
loop_4:
        var_t5 = 0;
        if (var_s2 < M2C_FIELD(arg0, s32 *, 0x10)) {
            var_s1 = 0;
            var_t6 = 0;
            if (var_s2 > 0) {
                var_v1 = arg0;
                do {
                    var_t6 += 1;
                    var_t5 += M2C_FIELD(var_v1, u16 *, 0x20);
                    var_v1 += 2;
                } while (var_t6 < var_s2);
            }
            temp_v1 = var_t4;
            var_t4 += 8;
            var_t6_2 = 0;
            temp_s0 = var_t5 + 1;
            var_t7 = 0;
            var_t3 = var_t4 - 4;
            M2C_FIELD(temp_v1, s32 *, 0) = 0xE7000000;
            M2C_FIELD(temp_v1, s32 *, 4) = 0;
loop_9:
            if (var_t6_2 < (s32) M2C_FIELD(arg0, u16 *, 0x38)) {
                temp_a0 = var_t7 + M2C_FIELD(arg0, s32 *, 0x34);
                temp_v1_2 = M2C_FIELD(temp_a0, u16 *, 4);
                if (((s32) temp_v1_2 >= var_t5) && ((s32) temp_v1_2 < (var_t5 + M2C_FIELD(sp0, u16 *, 0x20))) && (M2C_FIELD(temp_a0, u16 *, 6) == arg1)) {
                    if (var_s1 == 0) {
                        temp_t3 = var_t3 + 8;
                        M2C_FIELD(temp_t3, s32 *, -4) = 0xFC11FE23;
                        M2C_FIELD(var_t3, s32 *, 8) = -0xC07;
                        temp_t3_2 = temp_t3 + 8;
                        var_t4 += 0x40;
                        var_s1 = 1;
                        M2C_FIELD(temp_t3_2, s32 *, -4) = (s32) (((((u16) M2C_FIELD(arg0, u16 *, 0x14) >> 1) - 1) & 0xFFF) | 0xFD880000);
                        M2C_FIELD(temp_t3, s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
                        temp_t3_3 = temp_t3_2 + 8;
                        M2C_FIELD(temp_t3_2, s32 *, 8) = 0x07000000;
                        M2C_FIELD(temp_t3_3, s32 *, -4) = (s32) (((((s32) (((s32) (((var_t5 + M2C_FIELD(sp0, u16 *, 0x20)) - temp_s0) + 1) >> 1) + 7) >> 3) & 0x1FF) << 9) | 0xF5880000);
                        temp_t3_4 = temp_t3_3 + 8;
                        M2C_FIELD(temp_t3_4, s32 *, -4) = 0xE6000000;
                        M2C_FIELD(temp_t3_3, s32 *, 8) = 0;
                        temp_t3_5 = temp_t3_4 + 8;
                        M2C_FIELD(temp_t3_5, s32 *, -4) = (s32) ((((var_t5 * 2) & 0xFFF) << 0xC) | 0xF4000000);
                        M2C_FIELD(temp_t3_4, s32 *, 8) = (s32) ((((((var_t5 + M2C_FIELD(sp0, u16 *, 0x20)) - 1) * 2) & 0xFFF) << 0xC) | ((((M2C_FIELD(arg0, u16 *, 0x16) - 1) * 4) & 0xFFF) | 0x07000000));
                        temp_t3_6 = temp_t3_5 + 8;
                        M2C_FIELD(temp_t3_6, s32 *, -4) = 0xE7000000;
                        M2C_FIELD(temp_t3_5, s32 *, 8) = 0;
                        temp_t3_7 = temp_t3_6 + 8;
                        M2C_FIELD(temp_t3_6, s32 *, 8) = 0;
                        M2C_FIELD(temp_t3_7, s32 *, -4) = (s32) (((((s32) (((s32) (((var_t5 + M2C_FIELD(sp0, u16 *, 0x20)) - temp_s0) + 1) >> 1) + 7) >> 3) & 0x1FF) << 9) | 0xF5800000);
                        var_t3 = temp_t3_7 + 8;
                        M2C_FIELD(var_t3, s32 *, -4) = 0xF2000000;
                        M2C_FIELD(temp_t3_7, s32 *, 8) = (s32) ((((((var_t5 + M2C_FIELD(sp0, u16 *, 0x20)) - temp_s0) * 4) & 0xFFF) << 0xC) | (((M2C_FIELD(arg0, u16 *, 0x16) - 1) * 4) & 0xFFF));
                    }
                    temp_v0 = *(s32 *)((M2C_FIELD((var_t7 + M2C_FIELD(arg0, s32 *, 0x34)), u8 *, 8) * 4) + D_8008CCB8);
                    if (var_s3 != temp_v0) {
                        var_s3 = temp_v0;
                        temp_t3_8 = var_t3 + 8;
                        D_8008CCD4 = var_s3;
                        M2C_FIELD(temp_t3_8, s32 *, -4) = 0xFD100000;
                        var_t4 += 0x30;
                        M2C_FIELD(var_t3, s32 *, 8) = (s32) D_8008CCD4;
                        temp_t3_9 = temp_t3_8 + 8;
                        M2C_FIELD(temp_t3_9, s32 *, -4) = 0xE8000000;
                        M2C_FIELD(temp_t3_8, s32 *, 8) = 0;
                        temp_t3_10 = temp_t3_9 + 8;
                        M2C_FIELD(temp_t3_10, s32 *, -4) = 0xF5000100;
                        M2C_FIELD(temp_t3_9, s32 *, 8) = 0x07000000;
                        temp_t3_11 = temp_t3_10 + 8;
                        M2C_FIELD(temp_t3_11, s32 *, -4) = 0xE6000000;
                        M2C_FIELD(temp_t3_10, s32 *, 8) = 0;
                        temp_t3_12 = temp_t3_11 + 8;
                        M2C_FIELD(temp_t3_12, s32 *, -4) = 0xF0000000;
                        M2C_FIELD(temp_t3_11, s32 *, 8) = 0x0703C000;
                        var_t3 = temp_t3_12 + 8;
                        M2C_FIELD(var_t3, s32 *, -4) = 0xE7000000;
                        M2C_FIELD(temp_t3_12, s32 *, 8) = 0;
                    }
                    temp_t3_13 = var_t3 + 8;
                    temp_v0_2 = var_t7 + M2C_FIELD(arg0, s32 *, 0x34);
                    temp_a3 = M2C_FIELD(temp_v0_2, s16 *, 0);
                    temp_t0 = M2C_FIELD(temp_v0_2, u16 *, 2);
                    M2C_FIELD(temp_t3_13, s32 *, -4) = 0xFA000000;
                    var_t4 += 0x30;
                    temp_v1_3 = var_t7 + M2C_FIELD(arg0, s32 *, 0x34);
                    M2C_FIELD(var_t3, s32 *, 8) = (s32) ((M2C_FIELD(temp_v1_3, u8 *, 0xB) << 0x18) | (M2C_FIELD(temp_v1_3, u8 *, 0xC) << 0x10) | (M2C_FIELD(temp_v1_3, u8 *, 0xD) << 8) | 0xFF);
                    temp_t3_14 = temp_t3_13 + 8;
                    M2C_FIELD(temp_t3_14, s32 *, -4) = 0xFB000000;
                    M2C_FIELD(temp_t3_13, s32 *, 8) = 0;
                    temp_t3_15 = temp_t3_14 + 8;
                    M2C_FIELD(temp_t3_15, s32 *, -4) = (s32) ((((((temp_a3 + M2C_FIELD(temp_v0_2, u8 *, 9)) - 1) * 4) & 0xFFF) << 0xC) | (((((temp_t0 + M2C_FIELD(temp_v0_2, u8 *, 0xA)) - 1) * 4) & 0xFFF) | 0xE4000000));
                    M2C_FIELD(temp_t3_14, s32 *, 8) = (s32) ((((temp_a3 * 4) & 0xFFF) << 0xC) | ((temp_t0 * 4) & 0xFFF));
                    temp_t3_16 = temp_t3_15 + 8;
                    M2C_FIELD(temp_t3_16, s32 *, -4) = 0xB4000000;
                    M2C_FIELD(temp_t3_15, s32 *, 8) = (s32) ((M2C_FIELD(temp_v0_2, u16 *, 4) - var_t5) << 0x15);
                    temp_t3_17 = temp_t3_16 + 8;
                    M2C_FIELD(temp_t3_17, s32 *, -4) = 0xB3000000;
                    M2C_FIELD(temp_t3_16, s32 *, 8) = 0x04000400;
                    var_t3 = temp_t3_17 + 8;
                    M2C_FIELD(var_t3, s32 *, -4) = 0xE7000000;
                    M2C_FIELD(temp_t3_17, s32 *, 8) = 0;
                }
                var_t7 += 0xE;
                var_t6_2 += 1;
                goto loop_9;
            }
            var_s2 += 1;
            sp0 += 2;
            goto loop_4;
        }
        if (arg1 == 0) {
            M2C_FIELD(arg0, u16 *, 0x38) = 0U;
        }
        temp_t4 = var_t4 + 8;
        M2C_FIELD(var_t4, s32 *, 0) = 0xE7000000;
        M2C_FIELD(var_t4, s32 *, 4) = 0;
        M2C_FIELD(var_t4, s32 *, 8) = 0x06000000;
        M2C_FIELD(temp_t4, s32 **, 4) = D_8008CFB0;
        D_8009CC60 = temp_t4 + 8;
    }
}

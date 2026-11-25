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

extern s32 D_8007DA40;
extern char D_8007DA48[];
extern s32 D_8007E4E0;
extern char D_8007F618[];
extern char D_8008AD48[];
extern char D_8008AE7C[];

s32 func_8001DF70(s32 arg0) {
    char *var_t0;
    char *var_t3;
    char *var_v0_2;
    char *var_v1_2;
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_a3;
    void *var_a0;
    void *var_a1;
    void *var_a2;
    void *var_t1;
    void *var_t2;
    void *var_t4;
    void *var_t5;
    void *var_v0;
    void *var_v0_3;
    void *var_v1;
    void *var_v1_3;
    void *var_v1_4;

    var_a3 = arg0;
    D_8007E4E0 = 0;
    temp_v0 = D_8007DA40 - 1;
    D_8007DA40 = temp_v0;
    if (var_a3 < temp_v0) {
        temp_v0_2 = var_a3 * 0x2C;
        var_t2 = temp_v0_2 + (D_8008AE7C + 0x2C);
        var_t5 = temp_v0_2 + D_8008AE7C;
        var_t1 = temp_v0_2 + (D_8008AD48 + 0x2C);
        var_t4 = temp_v0_2 + D_8008AD48;
        temp_v0_3 = var_a3 * 0x1C4;
        var_t0 = temp_v0_3 + (D_8007DA48 + 0x1C4);
        var_t3 = temp_v0_3 + D_8007DA48;
        temp_a0 = var_a3 * 0x5C;
        var_a2 = temp_a0 + (D_8007F618 + 0x5C);
        var_a0 = temp_a0 + D_8007F618;
        do {
            var_v1 = var_a0;
            var_v0 = var_a2;
loop_3:
            M2C_FIELD(var_v1, s32 *, 0) = (s32) M2C_FIELD(var_v0, s32 *, 0);
            M2C_FIELD(var_v1, s32 *, 4) = (s32) M2C_FIELD(var_v0, s32 *, 4);
            M2C_FIELD(var_v1, s32 *, 8) = (s32) M2C_FIELD(var_v0, s32 *, 8);
            M2C_FIELD(var_v1, s32 *, 0xC) = (s32) M2C_FIELD(var_v0, s32 *, 0xC);
            var_v0 += 0x10;
            var_v1 += 0x10;
            if (var_v0 != (var_a2 + 0x50)) {
                goto loop_3;
            }
            M2C_FIELD(var_v1, s32 *, 0) = (s32) M2C_FIELD(var_v0, s32 *, 0);
            M2C_FIELD(var_v1, s32 *, 4) = (s32) M2C_FIELD(var_v0, s32 *, 4);
            M2C_FIELD(var_v1, s32 *, 8) = (s32) M2C_FIELD(var_v0, s32 *, 8);
            var_v1_2 = var_t3;
            var_v0_2 = var_t0;
loop_5:
            M2C_FIELD(var_v1_2, s32 *, 0) = M2C_FIELD(var_v0_2, s32 *, 0);
            M2C_FIELD(var_v1_2, s32 *, 4) = (s32) M2C_FIELD(var_v0_2, s32 *, 4);
            M2C_FIELD(var_v1_2, s32 *, 8) = (s32) M2C_FIELD(var_v0_2, s32 *, 8);
            M2C_FIELD(var_v1_2, s32 *, 0xC) = (s32) M2C_FIELD(var_v0_2, s32 *, 0xC);
            var_v0_2 += 0x10;
            var_v1_2 += 0x10;
            if (var_v0_2 != (var_t0 + 0x1C0)) {
                goto loop_5;
            }
            *(s32 *)var_v1_2 = *(s32 *)var_v0_2;
            var_v1_3 = var_t4;
            var_v0_3 = var_t1;
loop_7:
            M2C_FIELD(var_v1_3, s32 *, 0) = (s32) M2C_FIELD(var_v0_3, s32 *, 0);
            M2C_FIELD(var_v1_3, s32 *, 4) = (s32) M2C_FIELD(var_v0_3, s32 *, 4);
            M2C_FIELD(var_v1_3, s32 *, 8) = (s32) M2C_FIELD(var_v0_3, s32 *, 8);
            M2C_FIELD(var_v1_3, s32 *, 0xC) = (s32) M2C_FIELD(var_v0_3, s32 *, 0xC);
            var_v0_3 += 0x10;
            var_v1_3 += 0x10;
            if (var_v0_3 != (var_t1 + 0x20)) {
                goto loop_7;
            }
            M2C_FIELD(var_v1_3, s32 *, 0) = (s32) M2C_FIELD(var_v0_3, s32 *, 0);
            M2C_FIELD(var_v1_3, s32 *, 4) = (s32) M2C_FIELD(var_v0_3, s32 *, 4);
            M2C_FIELD(var_v1_3, s32 *, 8) = (s32) M2C_FIELD(var_v0_3, s32 *, 8);
            var_a1 = var_t5;
            var_v1_4 = var_t2;
loop_9:
            M2C_FIELD(var_a1, s32 *, 0) = (s32) M2C_FIELD(var_v1_4, s32 *, 0);
            M2C_FIELD(var_a1, s32 *, 4) = (s32) M2C_FIELD(var_v1_4, s32 *, 4);
            M2C_FIELD(var_a1, s32 *, 8) = (s32) M2C_FIELD(var_v1_4, s32 *, 8);
            M2C_FIELD(var_a1, s32 *, 0xC) = (s32) M2C_FIELD(var_v1_4, s32 *, 0xC);
            var_v1_4 += 0x10;
            var_a1 += 0x10;
            if (var_v1_4 != (var_t2 + 0x20)) {
                goto loop_9;
            }
            var_t2 += 0x2C;
            var_t5 += 0x2C;
            var_t1 += 0x2C;
            var_t4 += 0x2C;
            var_t0 += 0x1C4;
            var_t3 += 0x1C4;
            var_a2 += 0x5C;
            var_a0 += 0x5C;
            var_a3 += 1;
            M2C_FIELD(var_a1, s32 *, 0) = (s32) M2C_FIELD(var_v1_4, s32 *, 0);
            M2C_FIELD(var_a1, s32 *, 4) = (s32) M2C_FIELD(var_v1_4, s32 *, 4);
            M2C_FIELD(var_a1, s32 *, 8) = (s32) M2C_FIELD(var_v1_4, s32 *, 8);
        } while (var_a3 < D_8007DA40);
    }
    return 1;
}

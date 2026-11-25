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

extern int D_8008F354;
extern unsigned char D_8008F357;
s32 func_8002AB14();
extern s32 D_8008F344;
extern s32 D_8008F348;
extern s32 D_8008F34C;
extern s32 D_8008F358;
extern s32 D_8008F35C;
extern char D_8008F360[];

s32 func_80045E84(s32 arg0, s32 arg1, s32 *arg2) {
    s32 *var_a2;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a1;
    u8 *var_a0;
    u8 temp_v0_2;

    var_a2 = arg2;
    if ((D_8008F34C == -1) || (D_8008F348 >= (D_8008F34C - 1))) {
        var_a2 = (s32 *) D_8008F348;
        D_8008F358 = D_8008F34C;
        D_8008F35C = 0;
        D_8008F354 = (s32) var_a2;
    } else {
        if (D_8008F35C != 0) {
            var_a1 = 0;
            if (D_8008F354 == D_8008F348) {
                if (D_8008F358 != D_8008F34C) {
                    goto block_6;
                }
            } else {
                goto block_7;
            }
        } else {
block_6:
            var_a1 = 0;
block_7:
            var_a2 = &D_8008F35C;
            D_8008F358 = D_8008F34C;
            temp_v0 = D_8008F34C - D_8008F348;
            D_8008F354 = (s32) D_8008F348;
            D_8008F35C = temp_v0;
            if (temp_v0 > 0) {
                do {
                    *(var_a1 + D_8008F360) = D_8008F357 + var_a1;
                    var_a1 += 1;
                } while (var_a1 < D_8008F35C);
            }
        }
        do {
            temp_v1 = func_8002AB14(D_8008F35C, var_a1, (u8) var_a2);
            var_a2 = (s32 *) *(temp_v1 + D_8008F360);
            var_a1 = temp_v1;
        } while (var_a2 == D_8008F344);
        if (var_a1 < 0xB) {
            var_a0 = var_a1 + D_8008F360;
            do {
                temp_v1_2 = var_a1 + 1;
                temp_v0_2 = *(temp_v1_2 + D_8008F360);
                var_a1 = temp_v1_2;
                *var_a0 = temp_v0_2;
                var_a0 = var_a1 + D_8008F360;
            } while (var_a1 < 0xB);
        }
        D_8008F35C -= 1;
    }
    D_8008F344 = (s32) var_a2;
    return (s32) var_a2;
}

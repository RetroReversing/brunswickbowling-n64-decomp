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

extern s32 D_8007B210;
extern M2C_UNK D_8007B214;
extern M2C_UNK D_8007BB04;
extern s32 D_8007C3F4;
extern u16 D_80099140;

void func_8000F968(void) {
    s32 temp_a3;
    s32 temp_v1;
    s32 var_t1;
    void *var_a1;
    void *var_a2;

    var_t1 = 1;
    do {
        var_a1 = (D_80099140 * 0x48) + D_8007C3F4;
        var_a2 = var_a1 - 0x48;
        temp_a3 = var_a1 - 8;
        temp_v1 = D_8007B210 * 2;
        *(temp_v1 + &D_8007BB04) = D_80099140;
        *(temp_v1 + &D_8007B214) = 0x10;
loop_2:
        M2C_FIELD(var_a1, s32 *, 0) = (s32) M2C_FIELD(var_a2, s32 *, 0);
        M2C_FIELD(var_a1, s32 *, 4) = (s32) M2C_FIELD(var_a2, s32 *, 4);
        M2C_FIELD(var_a1, s32 *, 8) = (s32) M2C_FIELD(var_a2, s32 *, 8);
        M2C_FIELD(var_a1, s32 *, 0xC) = (s32) M2C_FIELD(var_a2, s32 *, 0xC);
        var_a2 += 0x10;
        var_a1 += 0x10;
        if (var_a2 != temp_a3) {
            goto loop_2;
        }
        var_t1 += 1;
        M2C_FIELD(var_a1, s32 *, 0) = (s32) M2C_FIELD(var_a2, s32 *, 0);
        M2C_FIELD(var_a1, s32 *, 4) = (s32) M2C_FIELD(var_a2, s32 *, 4);
        D_80099140 += 1;
        D_8007B210 += 1;
    } while (var_t1 < 4);
}

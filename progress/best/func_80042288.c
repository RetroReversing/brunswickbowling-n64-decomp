/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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

M2C_UNK func_80048B3C(M2C_UNK *, M2C_UNK, M2C_UNK *, s32); /* extern */

typedef struct { s32 w[3]; } __repair_words3;
void func_80042288(s32 arg0, s32 arg1) {
    s32 temp_copy;
    char sp10[0x38];
    M2C_UNK *var_a2;
    s32 temp_a3;
    s32 temp_v0;
    s32 var_a0;
    void *var_v1;
    s32 temp;

    var_a2 = sp10;
    temp = (arg1 * 0x38) + arg0;
    temp_v0 = temp;
    var_v1 = temp_v0 + 0x48;
 do
 {
   {
          do { do { do { M2C_FIELD(var_a2, s32 *, 0) = (s32) M2C_FIELD(var_v1, s32 *, 0); } while (0); } while (0); } while (0);
          M2C_FIELD(var_a2, __repair_words3 *, 0x4) = *(__repair_words3 *) ((s8 *) var_v1 + 0x4);
          /*__repair_loop_weight*/do { var_v1 += 0x10; } while (0);
          do { var_a2 += 4; } while (0);
      }
 } while (var_v1 != (temp_v0 + 0x78));
    temp_a3 = M2C_FIELD(var_v1, s32 *, 0);
    temp_copy = (s32) M2C_FIELD(var_v1, s32 *, 4);
    M2C_FIELD(var_a2, s32 *, 0) = temp_a3;
    M2C_FIELD(var_a2, s32 *, 4) = temp_copy;
    do { var_a0 = 0; } while (0);
    do {
        M2C_FIELD(((M2C_UNK *)((u8 *)sp10 + var_a0 * 16)), s8 *, 0x10) = 0;
        M2C_FIELD(((M2C_UNK *)((u8 *)sp10 + var_a0 * 16)), s8 *, 0x11) = 0x64;
        do { var_a0 += 1; } while (0);
    } while (var_a0 < 3);
    func_80048B3C(sp10, 0x64, var_a2, temp_a3);
}

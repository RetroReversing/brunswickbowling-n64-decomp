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

M2C_UNK func_8001FCF0(void *, s16, s32, M2C_UNK);   /* extern */

void func_8001FAD0(void *arg0_in, s32 arg1, s32 arg2, s32 arg3) {
  void * arg0;
  s16 __repair_entry_var_a2;
    s16 temp_v0;
    s16 var_s0;
    s16 var_s3;
    s16 var_a2;
    s32 var_a2_1;
  arg0 = arg0_in;

    var_s3 = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 1;
    M2C_FIELD(arg0, s16 *, 0x28) = 0xA0;
    M2C_FIELD(arg0, s16 *, 0x2A) = 0xA0;
    M2C_FIELD(arg0, s16 *, 0x24) = -0x154;
    M2C_FIELD(arg0, s16 *, 0x26) = 0x294;
    M2C_FIELD(arg0, s16 *, 0x18) = (s16) (0x80 - arg1);
    M2C_FIELD(arg0, s16 *, 0x1A) = (s16) (arg1 + 0x81);
    M2C_FIELD(arg0, s16 *, 0x1E) = (s16) (0x80 - arg2);
    M2C_FIELD(arg0, s16 *, 0x20) = (s16) (arg2 + 0x80);
    M2C_FIELD(arg0, s16 *, 0x1C) = (s16) (0x80 - arg3);
    M2C_FIELD(arg0, s16 *, 0x22) = (s16) (arg3 + 0x80);
    M2C_FIELD(arg0, s16 *, 0x16) = 0;
    M2C_FIELD(arg0, s16 *, 0x14) = 0;
loop_1:
    var_s0 = 0;
    if (var_s3 < 2) {
        __repair_entry_var_a2 = var_a2;
        var_a2 = 0;
        __repair_rows: {
            func_8001FCF0(arg0, var_s3, __repair_entry_var_a2, 0);do{do{do{do{do{
            temp_v0 = var_s0 + 1;}while(0);}while(0);}while(0);}while(0);}while(0);
            var_s0 = temp_v0;
            var_a2_1 = var_s0 << 0x10;
        }
if (temp_v0 < 0xA0) goto __repair_rows;
        var_s3 += 1;
        goto loop_1;
    }
}

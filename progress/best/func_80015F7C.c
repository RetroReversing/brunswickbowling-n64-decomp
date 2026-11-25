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

s32 func_80015E60(s32, void *, u16);            /* extern */
s32 func_8005AAD0(void *);                          /* extern */

void func_80015F7C(void *arg0, s8 arg1, s32 arg2) {
  s32 var_s0;
  s32 lit_20;
  s32 var_v1;
  void *temp_s2;
  var_s0 = arg2;
  if (var_s0 < 0)
  {
    var_s0 = func_8005AAD0(arg0 + 8);
  }
  loop_goto_1:
  {
    temp_s2 = arg0 + 8;
  }
  if (0)
  {
      goto loop_goto_1;
  }
  if (var_s0 < ((*(u16 *)((s8 *)arg0 + 0x10A)) - 1))
  {
    if (func_8005AAD0(temp_s2) < var_s0)
    {
      var_v1 = func_8005AAD0(temp_s2);
      if (var_v1 < var_s0)
      {
        lit_20 = 0x20;
        do
        {
          (*(s8 *)((s8 *)(arg0 + var_v1) + 8)) = lit_20;
          var_v1 += 1;
        }
        while (var_v1 < var_s0);
      }
    }
    (*(s8 *)((s8 *)(arg0 + var_s0) + 8)) = arg1;
    (*(s8 *)((s8 *)(var_s0 + arg0) + 9)) = 0;
    func_80015E60((*(s32 *)((s8 *)arg0 + 4)), arg0 + 8, (*(u16 *)((s8 *)arg0 + 0x108)));
  }
}


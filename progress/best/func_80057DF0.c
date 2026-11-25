s8 *func_8005AF00(s32, s8 *);
inline static int inline_fn(s32 arg0)
{
  return arg0 == 0xA;
}

s8 *func_80057DF0(u32 arg0, s8 *arg1, s32 arg2)
{
  s8 *var_a1;
  u32 var_a0;
  u32 temp;
  var_a0 = arg0;
  if (((u32) (arg2 - 2)) >= 0x23U)
  {
    *arg1 = 0;
  }
  else
  {
    temp = inline_fn(arg2) & (var_a0 >> 0x1F);
    var_a1 = arg1;
    if (temp)
    {
      *arg1 = 0x2D;
      var_a1 = arg1 + 1;
      var_a0 = (u32) (-((s32) var_a0));
    }
    *func_8005AF00((s32) var_a0, var_a1) = 0;
  }
  return arg1;
}


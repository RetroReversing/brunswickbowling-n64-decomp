s32 func_8005AE54();
inline static int inline_fn(s8 arg0)
{
  return arg0 != 0;
}

s32 func_80059DD0(u8 *arg0)
{
  u64 scratch;
  s32 var_a0;
  s8 var_v0;
  u8 *var_s0;
  unsigned int temp_v0;
  var_s0 = arg0;
  func_8005AE54();
  var_a0 = 0;
  temp_v0 = *var_s0;
  if (inline_fn(temp_v0))
  {
    s8 temp;
    var_v0 = temp_v0;
    loop_goto_1:
    {
      var_a0 = var_v0;
      var_s0 += 1;
      var_v0 = *var_s0;
    }

    temp = (s8) (*var_s0);
    if (inline_fn(temp))
    {
      goto loop_goto_1;
    }
  }
  return var_a0;
}


inline static s32 *inline_fn(s32 *arg0)
{
  return arg0;
}

s32 func_80022450(void *arg0, volatile unsigned char arg1)
{
  s32 *sp0;
  s32 *sp8;
  s32 *temp_a2;
  s32 *var_v0_2;
  s32 var_v0;
  temp_a2 = arg0 + 8;
  var_v0_2 = *((s32 **) (((char *) arg0) + 8));
  loop_1:
  sp0 = var_v0_2;

  sp8 = temp_a2;
  if (sp0 != temp_a2)
  {
    var_v0 = 1;
    if (sp0 != arg1)
    {
      var_v0_2 = *sp0;
      sp8 = inline_fn(sp0);
      goto loop_1;
    }
  }
  else
  {
    var_v0 = 0;
  }
  return var_v0;
}


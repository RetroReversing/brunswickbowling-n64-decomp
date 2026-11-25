s32 func_8002C4E0(s32);
inline static int inline_fn(s32 arg0, int arg1)
{
  return arg0 + arg1;
}

u8 func_8002CB54(s32 arg0_in, s32 arg1, s32 arg2, s32 arg3_in)
{
  s32 __repair_arg0_in_local;
  s32 arg3;
  s32 arg0;
  s32 temp_a2;
  s32 temp_s0;
  s32 temp;
  s32 temp2;
  arg0 = arg0_in;
  arg3 = arg3_in;
  arg3_in = 0;
  __repair_arg0_in_local = 0;
  if (arg1 < 0xA)
  {
    temp = arg1 * 0x14;
    temp_s0 = temp;
    temp2 = inline_fn(temp_s0, 4);
    if (func_8002C4E0(inline_fn(arg0, temp2)) != 0)
    {
      temp_a2 = inline_fn(arg2, arg3);
      if (temp_a2 < ((s32) (*((u8 *) (((s8 *) inline_fn(arg0, temp_s0)) + 0x12)))))
      {
        return *((u8 *) (((s8 *) inline_fn(arg0, inline_fn(temp_a2, temp_s0))) + 0x13));
      }
      return (u8) func_8002CB54(arg0, inline_fn(arg1, 1), 0, arg3 - 1);
    }
    if ((arg3 == 0) && ((arg1 == 0) || (func_8002C4E0(inline_fn(arg0, temp_s0 - 0x10)) != 0)))
    {
      return 0xAU;
    }
    return 0U;
  }
  return 0U;
}


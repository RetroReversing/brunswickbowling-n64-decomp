inline static int inline_fn(int arg0)
{
  return (*((volatile s32 *) 0xA450000C)) < arg0;
}

s32 func_80060F30(void)
{
  return inline_fn(0);
}


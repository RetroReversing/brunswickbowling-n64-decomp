void func_8004CE70(s32 arg0, s32 arg1, s32 arg2)
{
  if (arg0 < arg1)
  {
    __shared_return_1:
    return 1;

  }
  if (arg0 >= arg2)
  {
    goto __shared_return_1;
  }
  return 0;
}


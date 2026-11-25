s32 **func_8004C9A8(s32, s32, s32);
extern s32 D_8009C898;
s32 **func_8004CAD8(unsigned long long arg0)
{
  s32 **temp_v0;
  s32 **temp_v1;
  s32 **var_v0;
  temp_v0 = func_8004C9A8(D_8009C898, arg0 + 0x10, 0x10);
  do
  {
    var_v0 = NULL;
  }
  while (0);
  if (temp_v0 != NULL)
  {
    temp_v1 = *temp_v0;
    var_v0 = temp_v1 + 0x10;
    *temp_v1 = temp_v0;
  }
  return var_v0;
}


s32 func_8003707C();
s32 func_80037200(s32 arg0)
{
  s32 temp_v1;
  u16 var_v0;
  do { temp_v1 = func_8003707C(arg0, 0x18) & 0xFFFF; } while (0);
  if (temp_v1 != 1)
  {
    var_v0 = 0;
    if (temp_v1 < 2)
    {
      if (temp_v1 == 0)
      {
        return 0x10;
      }
    }
    return var_v0;
  }
  var_v0 = 0x100;
  return var_v0;
}


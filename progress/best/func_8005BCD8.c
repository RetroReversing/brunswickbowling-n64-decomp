/* Partial candidate from function #98784249585 in project #23; rechecked locally. */
extern s32 D_800FD884;
extern void *D_800FD88C;
s32 func_8005BCD8(s32 arg0)
{
  u8 __repair_frame[8];
  s32 var_v1;
  void *var_a1;
  if (arg0 == 0)
  {
    __shared_return_0:
    return 0;

  }
  var_a1 = D_800FD88C;
  var_v1 = 0;
  if (D_800FD884 > 0)
  {
    for (;;)
    {
      do
      {
        var_v1 += 1;
      }
      while (0);
      if ((*((s32 *) (((char *) var_a1) + 0x44))) != arg0)
      {
        var_a1 += 0x13C;
        if ((var_v1 + 1) > D_800FD884)
        {
          goto block_7;
        }
        continue;
      }
      break;
    }

    return *((s32 *) (((char *) var_a1) + 0x7C));
  }
  block_7:
  goto __shared_return_0;

}


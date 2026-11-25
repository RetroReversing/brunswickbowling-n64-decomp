s32 func_80031B08();
extern char D_8007F618[];
extern char D_80081A08[];
inline static int inline_fn(int arg0)
{
  return -arg0;
}

void func_80030018(void *arg0, u8 arg1, s32 *arg2)
{
  char *__repair_addr;
  s32 var_a3;
  u8 var_a1;
  void *temp_v1;
  void *temp_v1_2;
  {
    var_a1 = arg1;
  }
  var_a3 = 0;
  if ((*((s32 *) (((char *) arg0) + 0x44))) >= 6)
  {
    var_a1 = *((u8 *) (((char *) arg0) + 0x48));
    {
      __repair_addr = (char *) (var_a1 + D_80081A08);
      temp_v1 = ((*((u8 *) (((char *) __repair_addr) + (-2)))) * 0x5C) + D_8007F618;
    }
    if ((((*((u8 *) (((char *) temp_v1) + 0x18))) ^ 2) == 0) && ((*((s32 *) (((char *) temp_v1) + 0x28))) == 0))
    {
      {
        temp_v1_2 = ((*((u8 *) (((char *) (var_a1 + D_80081A08)) + inline_fn(1)))) * 0x5C) + D_8007F618;
      }
      if (((*((u8 *) (((char *) temp_v1_2) + 0x18))) ^ 2) == 0)
      {
        var_a3 = (*((s32 *) (((char *) temp_v1_2) + 0x28))) == 0;
      }
    }
  }
  if (var_a3 != 0)
  {
    func_80031B08(arg0);
  }
}


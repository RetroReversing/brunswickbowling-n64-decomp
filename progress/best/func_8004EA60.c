s32 *func_8004F05C(s32, s32);
s32 func_8004F1B0(s32 *);
extern s32 *D_8009CFC0;
void func_8004EA60(s32 arg0)
{
  s32 *temp_v0;
  if (D_8009CFC0 != NULL)
  {
    func_8004F1B0(D_8009CFC0);
  }
  temp_v0 = func_8004F05C(arg0, 0);
  *temp_v0 |= 6;
  D_8009CFC0 = temp_v0;
}


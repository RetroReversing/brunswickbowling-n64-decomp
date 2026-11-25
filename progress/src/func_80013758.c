s32 func_80037970(s32 *, s32);
extern s32 D_800891BC;
extern s32 D_8008C9CC;
inline static int inline_fn(s32 arg0, int arg1)
{
  return arg0 == arg1;
}

void func_80013758(void)
{
  func_80037970(&D_8008C9CC, inline_fn(D_800891BC, 0));
}


s32 func_8001D190(s32 *, s32 *, s32 *, s32, s32, s32 *);
extern s32 D_80075744;
extern s32 D_80083280;
extern s32 D_800838F8;
extern s32 D_800993D0;
extern s32 func_8001F468;
s32 func_8001F540(volatile unsigned int arg0)
{
  func_8001D190(&D_80083280, &D_80075744, &D_800838F8, 0, 0, &func_8001F468);
  D_800993D0 = arg0;
  return 1;
}


/* Partial candidate from function #85899348516 in project #20; rechecked locally. */
/* Draft from identical target func_802A6E3C, retargeted and judged independently. */
u32 func_800549E4(s32);
inline static u32 inline_fn(int arg0, unsigned short arg1)
{
  return func_800549E4(arg0) >> (arg1 * 8);
}

s32 func_80054BDC(s32 arg0)
{
  return inline_fn(arg0 & (~3), (~arg0) & 3) & 0xFF;
}


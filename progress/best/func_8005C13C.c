/* identical to func_80065F4C in Asteroids Hyper 64 (local match library) (matched), with its names changed by decompdecomp */
s32 alSynStopVoice(s32 *, s32);
s32 func_8005C024(s32);
s32 func_8005C434(s32 *, s32);
s32 func_8005C9A0(s32 *, s32);
s32 func_8005CA2C(s32 *, s32);
s32 func_8005CB90(s32 *, s32, f32);
s32 func_8005CD14(s32 *);
s32 func_8005CF0C(s32 *);
f32 func_8005CFC4(s32 *);
f32 func_8005D01C(s32 *);
s32 func_8005D080(s32 *);
s32 func_8005D144(s32 *);
extern s32 D_800FD884;
extern s32 D_800FD888;
extern s32 *D_800FD88C;
extern s32 D_800FD898;
extern s32 D_800FD8C4;
extern s32 D_800FD8C8;
extern s32 D_800FD8CC;
extern s32 D_800FD8D0;
extern s32 D_800FDBC0;
inline static int inline_fn(int arg0)
{
  return -arg0;
}

s32 func_8005C13C(void)
{
  f32 var_fs0;
  s32 *var_s1;
  s32 temp_v0;
  s32 temp_v0_2;
  s32 temp_v1;
  s32 var_s2;
  s32 var_s3;
  void *var_s0;
  if (D_800FD8C4 != D_800FD8C8)
  {
    do
    {
      func_8005C024(D_800FD8D0 + (D_800FD8C4 * 8));
      temp_v0 = D_800FD8C4 + 1;
      D_800FD8C4 = temp_v0;
      if (temp_v0 == D_800FD8CC)
      {
        D_800FD8C4 = 0;
      }
    }
    while (D_800FD8C4 != D_800FD8C8);
  }
  var_s2 = inline_fn(4);
  var_s1 = D_800FD88C;
  if ((D_800FD884 - 4) > inline_fn(4))
  {
    s32 sentinel_neg0 = inline_fn(1);
    var_s0 = ((s8 *) var_s1) + 0xAA;
    var_s3 = inline_fn(0x70);
    loop_1:
    {
      if (((*((s32 *) (((s8 *) var_s0) + (-0xA6)))) != 0) && (!((*var_s1) & 1)))
      {
        if ((*((s32 *) (((s8 *) var_s0) + inline_fn(0xA2)))) != 0)
        {
          func_8005C9A0(var_s1, var_s2);
        }
        temp_v1 = (*((s32 *) (((s8 *) var_s0) + (-0x9E)))) + (*((u16 *) (((s8 *) var_s0) + (-0xE))));
        *((s32 *) (((s8 *) var_s0) + inline_fn(0x9E))) = temp_v1;
        if ((*((u16 *) (((s8 *) var_s0) + inline_fn(0x10)))) != 0x7FFF)
        {
          if (((*((s32 *) (((s8 *) var_s0) + inline_fn(0x6E)))) - temp_v1) < 0)
          {
            loop_12:
            if ((*((s32 *) (((s8 *) var_s0) + (-0xA6)))) != 0)
            {
              func_8005C434(var_s1, var_s2);
              if (((*((s32 *) (((s8 *) var_s0) + inline_fn(0x6E)))) - (*((s32 *) (((s8 *) var_s0) + inline_fn(0x9E))))) >= 0)
              {
                goto block_14;
              }
              goto loop_12;
            }

          }
          else
          {
            block_14:
            if ((*((s32 *) (((s8 *) var_s0) + inline_fn(0xA6)))) != 0)
            {
              goto block_15;
            }

          }
        }
        else
        {
          block_15:
          if (((*((s32 *) (((s8 *) var_s0) + (-0x72)))) != 0) && (((*((s32 *) (((s8 *) var_s0) + (-0x96)))) - (*((s32 *) (((s8 *) var_s0) + (-0x9E))))) < 0))
          {
            func_8005D080(var_s1);
          }

          if (((*((s32 *) (((s8 *) var_s0) + (-0x76)))) != 0) && (((*((s32 *) (((s8 *) var_s0) + (-0x92)))) - (*((s32 *) (((s8 *) var_s0) + inline_fn(0x9E))))) < 0))
          {
            func_8005D144(var_s1);
          }
          temp_v0_2 = *((s32 *) (((s8 *) var_s0) + (-0x9A)));
          if ((temp_v0_2 != sentinel_neg0) && ((*((s32 *) (((s8 *) var_s0) + inline_fn(0x9A))) = temp_v0_2 - 1, (temp_v0_2 - 1) == sentinel_neg0)))
          {
            *((s32 *) (((s8 *) var_s0) + (-0x72))) = 0;
            *((s32 *) (((s8 *) var_s0) + inline_fn(0x76))) = 0;
            *((s32 *) (((s8 *) var_s0) + inline_fn(0x36))) = 0;
            *((s32 *) (((s8 *) var_s0) + inline_fn(0x32))) = 0;
            *((s32 *) (((s8 *) var_s0) + (-0x66))) = 0;
            *((s32 *) (((s8 *) var_s0) + (-0xA2))) = 0;
            *((s32 *) (((s8 *) var_s0) + inline_fn(0xA6))) = 0;
            if ((*((u8 *) (((s8 *) var_s0) + 0x1F))) != 0)
            {
              *((u8 *) (((s8 *) var_s0) + 0x1F)) = 0U;
              alSynStopVoice(&D_800FDBC0, D_800FD888 + var_s3);
              goto block_25;
            }
          }
          else
          {
            block_25:
            if ((*((u8 *) (((s8 *) var_s0) + 0x1F))) != 0)
            {
              if ((*((u8 *) (((s8 *) var_s0) + 0x19))) != 0)
              {
                func_8005CD14(var_s1);
              }
              if (((*((u8 *) (((s8 *) var_s0) + 0x2A))) != 0) && (((*((s32 *) (((s8 *) var_s0) + inline_fn(0x16)))) - (*((s32 *) (((s8 *) var_s0) + (-0x9E))))) < 0))
              {
                func_8005CF0C(var_s1);
              }
              var_fs0 = *((f32 *) (((s8 *) var_s0) + inline_fn(0x7A)));
              if ((*((u8 *) (((s8 *) var_s0) + 0x2B))) != 0)
              {
                var_fs0 += func_8005D01C(var_s1);
              }
              if ((*((u8 *) (((s8 *) var_s0) + 0x24))) != 0)
              {
                var_fs0 += func_8005CFC4(var_s1);
              }
              if ((*((s32 *) (((s8 *) var_s0) + inline_fn(0xA2)))) == 0)
              {
                func_8005CB90(var_s1, var_s2, var_fs0);
                func_8005CA2C(var_s1, var_s2);
              }
            }

          }
          *((s16 *) (((s8 *) var_s0) + 0)) = (s16) (((u32) ((*((s32 *) (((s8 *) var_s0) + (-0x9E)))) - (*((s32 *) (((s8 *) var_s0) + (-0x6A)))))) >> 8);
        }
      }
      var_s3 += 0x1C;
      var_s2 += 1;
      var_s0 += 0x13C;
      var_s1 += 79;
    }

    if (var_s2 < (D_800FD884 - 4))
    {
      goto loop_1;
    }
  }
  return D_800FD898;
}


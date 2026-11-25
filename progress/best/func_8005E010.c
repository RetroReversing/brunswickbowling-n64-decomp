/* Partial candidate from function #408021895414 in project #95; rechecked locally. */
/* adapted from similar verified C in voice_apply_param in V-RALLY-PAL (matched), with its names changed by decompdecomp */
typedef struct S_func_80087AB8_arg0
{
  u8 pad0[0x70];
  s32 f70;
  u8 pad1[36];
  s16 f90;
  u8 pad2[2];
  s16 f94;
  u8 pad3[8];
  u16 f9E;
} S_func_80087AB8_arg0;
typedef struct Rec
{
  u8 pad0[0x70];
  s32 f70;
  u8 pad74[0x20];
  s16 f94;
  u8 pad96[0xA];
  s16 fA0;
  u8 padA2[0x134 - 0xA2];
} Rec;
extern s32 D_800A5A64;
extern Rec *D_800A5A5C;
extern s32 D_800A5A54;

/* Reads one parameter byte from cur and applies it to the group grp: a scaled value
 * goes to the group itself when its flag f9E is set, or else to every voice in
 * gVoices that belongs to the group. Returns the byte after the parameter. */
u8 *func_8005E010(S_func_80087AB8_arg0 *grp, u8 *cur)
{
  s32 pad[1];
  s32 value;
  s32 scaled;
  s32 i;
  Rec *p;
  value = ((*cur * 0x6000) / 120) / D_800A5A64;
  scaled = (value * grp->f90) >> 7;
  cur++;
  if (grp->f9E != 0)
  {
    grp->f94 = value;
  }
  else
  {
    p = D_800A5A5C;
    for (i = 0; i < D_800A5A54; i++, p++)
    {
      if (p->f70 == grp->f70)
      {
        p->fA0 = value;
        p->f94 = scaled;
      }
    }
  }
  return cur;
}

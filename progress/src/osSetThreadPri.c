/* identical to func_800FF960 in HARVESTMOON64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80057880 in GEX: ENTER THE GECKO (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8006A1B0 in Gex 3 Deep Cover Gec (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80021130 in FIGHTER DESTINY2 (local match library) (matched), with its names changed by decompdecomp */
/* identical to osSetThreadPri in EARTHWORM JIM 3D (local match library) (matched), with its names changed by decompdecomp */
/* identical to osSetThreadPri in DR.MARIO 64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to osSetThreadPri in TARZAN (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8000D4D0 in Donald Duck Goin' Qu (local match library) (matched), with its names changed by decompdecomp */
/* identical to osSetThreadPri in DESTRUCT DERBY (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80043470 in CruisnExotica (local match library) (matched), with its names changed by decompdecomp */
/* identical to osSetThreadPri in Clayfighter SC (local match library) (matched), with its names changed by decompdecomp */
/* identical to osSetThreadPri in CHARLIE BLAST'S (local match library) (matched), with its names changed by decompdecomp */
/* identical to osSetThreadPri in Bottom of the 9th (local match library) (matched), with its names changed by decompdecomp */
/* identical to osSetThreadPri in TWINE (local match library) (matched), with its names changed by decompdecomp */
/* identical to osSetThreadPri in PENNY RACERS (local match library) (matched), with its names changed by decompdecomp */
/* adapted from similar verified C in osSetThreadPri in V-RALLY-PAL (matched), with its names changed by decompdecomp */
s32 func_800678C4();
s32 __osEnqueueThread();
s32 func_8005FEF0();
s32 func_8005FF60();
s32 __osDequeueThread();
extern void *D_80097DC8;
extern void *D_80097DD0;
static inline s32 *inline_fn(int arg0)
{
  return (s32 *) (((char *) D_80097DC8) + arg0);
}

void osSetThreadPri(void *arg0, s32 arg1)
{
  int new_var;
  s32 temp_s2;
  arg0 = arg0;
  temp_s2 = func_8005FEF0();
  if (arg0 == NULL)
  {
    arg0 = D_80097DD0;
  }
  if ((*((s32 *) (((char *) arg0) + 4))) != arg1)
  {
    new_var = arg0 != D_80097DD0;
    *((s32 *) (((char *) arg0) + 4)) = arg1;
    if (new_var && ((*((u16 *) (((char *) arg0) + 0x10))) != 1))
    {
      __osDequeueThread(*((s32 *) (((char *) arg0) + 8)), arg0);
      __osEnqueueThread(*((s32 *) (((char *) arg0) + 8)), arg0);
    }
    if ((*((s32 *) (((char *) D_80097DD0) + 4))) < (*inline_fn(4)))
    {
      *((s16 *) (((char *) D_80097DD0) + 0x10)) = 2;
      func_800678C4(&D_80097DC8);
    }
  }
  func_8005FF60(temp_s2);
}

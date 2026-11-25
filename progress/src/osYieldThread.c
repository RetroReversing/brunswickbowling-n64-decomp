/* identical to osYieldThread in Bottom of the 9th (local match library) (matched), with its names changed by decompdecomp */
/* identical to osYieldThread in TWINE (local match library) (matched), with its names changed by decompdecomp */
/* identical to osYieldThread in PENNY RACERS (local match library) (matched), with its names changed by decompdecomp */
/* identical to osYieldThread in V-RALLY-PAL (matched), with its names changed by decompdecomp */
/* identical to osYieldThread in V-RALLY (matched), with its names changed by decompdecomp */
/* identical to func_80095C90 in V-RALLY (matched), with its names changed by decompdecomp */

s32 func_800678C4();
s32 func_8005FEF0();
s32 func_8005FF60();
extern char D_80097DC8[];
extern void *D_80097DD0;
static inline char *inline_fn()
{
  return ((char *) D_80097DD0) + 0x10;
}

void osYieldThread(void)
{
  int new_var;
  s32 temp_s0;
  temp_s0 = func_8005FEF0();
  new_var = 2;
  *((s16 *) inline_fn()) = new_var;
  func_800678C4(&D_80097DC8, 2);
  func_8005FF60(temp_s0);
}

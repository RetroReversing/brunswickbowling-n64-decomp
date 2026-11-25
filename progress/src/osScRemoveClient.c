/* identical to osScRemoveClient in CruisnExotica (local match library) (matched), with its names changed by decompdecomp */
/* identical to osScRemoveClient in BLUES BROTHERS 2000 (local match library) (matched), with its names changed by decompdecomp */
/* identical to osScRemoveClient in BATMAN BEYOND RETURN (local match library) (matched), with its names changed by decompdecomp */
/* identical to osScRemoveClient in Gex 3 Deep Cover Gec (local match library) (matched), with its names changed by decompdecomp */
/* identical to osScRemoveClient in DR.MARIO 64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to osScRemoveClient in CyberTiger (local match library) (matched), with its names changed by decompdecomp */
/* identical to osScRemoveClient in Asteroids Hyper 64 (local match library) (matched), with its names changed by decompdecomp */
/* adapted from similar verified C in func_80059640 in ARMYMEN SARGE 2 (matched), with its names changed by decompdecomp */
s32 func_80064920(s32);
void osScRemoveClient(void *arg0, s32 arg1)
{
  s32 *var_s0;
  s32 *var_s1;
  s32 temp_a0;
  var_s0 = *((s32 **) (((char *) arg0) + 0x260));
  var_s1 = NULL;
  temp_a0 = func_80064920(1);
  if (var_s0 != NULL)
  {
    loop_1:
    if (!(var_s0 != arg1))
    {
      if (NULL != var_s1)
      {
        *var_s1 = *var_s0;
      }
      else
      {
        *((s32 **) (((char *) arg0) + 0x260)) = (s32 *) (*var_s0);
      }
    }
    else
    {
      var_s1 = var_s0;
      var_s0 = *var_s0;
      if (var_s0 != NULL)
      {
        goto loop_1;
      }
    }

  }
  func_80064920(temp_a0);
}


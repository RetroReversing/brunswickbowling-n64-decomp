/* identical to func_80102FDC in HARVESTMOON64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to _doModFunc in Glover (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80061D7C in GEX: ENTER THE GECKO (local match library) (matched), with its names changed by decompdecomp */
/* identical to _doModFunc in Gex 3 Deep Cover Gec (local match library) (matched), with its names changed by decompdecomp */
/* identical to _doModFunc in ALL STAR TENNIS '99 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80017DA8 in Forsaken (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8001D80C in FIGHTER DESTINY2 (local match library) (matched), with its names changed by decompdecomp */
/* identical to _doModFunc in EARTHWORM JIM 3D (local match library) (matched), with its names changed by decompdecomp */
/* identical to _doModFunc in DR.MARIO 64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80010B48 in Donald Duck Goin' Qu (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80074398 in DESTRUCT DERBY (local match library) (matched), with its names changed by decompdecomp */
/* identical to _doModFunc in CruisnExotica (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80068F68 in Command&Conquer (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8009ECA8 in Clayfighter SC (local match library) (matched), with its names changed by decompdecomp */
/* identical to _doModFunc in CHARLIE BLAST'S (local match library) (matched), with its names changed by decompdecomp */
/* identical to _doModFunc in Bust A Move 2 (local match library) (matched), with its names changed by decompdecomp */
/* identical to _doModFunc in Bottom of the 9th (local match library) (matched), with its names changed by decompdecomp */
/* identical to _doModFunc in BLUES BROTHERS 2000 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800482EC in BATTLEZONE (local match library) (matched), with its names changed by decompdecomp */
/* identical to _doModFunc in PENNY RACERS (local match library) (matched), with its names changed by decompdecomp */
extern f64 D_8007A458;
extern f64 D_8007A460;
extern f64 D_8007A468;
f32 _doModFunc(void *arg0, s32 arg1)
{
  f32 var_ft0;
  f64 new_var;
  f32 var_fv1;
  f64 temp_ft0;
  var_fv1 = (*((f32 *) (((char *) arg0) + 0x14))) + ((*((f32 *) (((char *) arg0) + 0x10))) * ((f32) arg1));
  temp_ft0 = (f64) var_fv1;
  new_var = D_8007A458;
  *((f32 *) (((char *) arg0) + 0x14)) = var_fv1;
  if (new_var < temp_ft0)
  {
    var_fv1 = (f32) (temp_ft0 - D_8007A460);
  }
  var_ft0 = var_fv1;
  *((f32 *) (((char *) arg0) + 0x14)) = var_fv1;
  if (var_fv1 < 0.0f)
  {
    var_ft0 = -var_fv1;
  }
  var_fv1 = ((f64) var_ft0) - D_8007A468;
  return (*((f32 *) (((char *) arg0) + 0x1C))) * ((f32) var_fv1);
}
